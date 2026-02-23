#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823C7850"))) PPC_WEAK_FUNC(sub_823C7850);
PPC_FUNC_IMPL(__imp__sub_823C7850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x823c792c
	if (!ctx.cr6.gt) goto loc_823C792C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,84(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C7890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183078
	ctx.lr = 0x823C7894;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x823C78A0;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bgt cr6,0x823c7910
	if (ctx.cr6.gt) goto loc_823C7910;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c78e0
	// bdzf 4*cr6+eq,0x823c78bc
	// bne cr6,0x823c7904
	if (!ctx.cr6.eq) goto loc_823C7904;
loc_823C78BC:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x823C78C8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c7924
	if (ctx.cr6.eq) goto loc_823C7924;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821fe658
	ctx.lr = 0x823C78DC;
	sub_821FE658(ctx, base);
	// b 0x823c7924
	goto loc_823C7924;
loc_823C78E0:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x823C78EC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c7924
	if (ctx.cr6.eq) goto loc_823C7924;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821fe658
	ctx.lr = 0x823C7900;
	sub_821FE658(ctx, base);
	// b 0x823c7924
	goto loc_823C7924;
loc_823C7904:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x823C7910;
	sub_821EA9B8(ctx, base);
loc_823C7910:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82080000
	ctx.lr = 0x823C7918;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c7924
	if (ctx.cr6.eq) goto loc_823C7924;
	// bl 0x82175748
	ctx.lr = 0x823C7924;
	sub_82175748(ctx, base);
loc_823C7924:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x823C792C;
	sub_821837D0(ctx, base);
loc_823C792C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7944"))) PPC_WEAK_FUNC(sub_823C7944);
PPC_FUNC_IMPL(__imp__sub_823C7944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C7948"))) PPC_WEAK_FUNC(sub_823C7948);
PPC_FUNC_IMPL(__imp__sub_823C7948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823C7950;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r11,-23004
	ctx.r5.s64 = ctx.r11.s64 + -23004;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8218cb30
	ctx.lr = 0x823C7974;
	sub_8218CB30(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// addi r9,r10,-23028
	ctx.r9.s64 = ctx.r10.s64 + -23028;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x823c8398
	ctx.lr = 0x823C79B0;
	sub_823C8398(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x823C79B4;
	sub_8215BEC8(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// li r7,15
	ctx.r7.s64 = 15;
	// addi r29,r29,-30752
	ctx.r29.s64 = ctx.r29.s64 + -30752;
	// li r6,47
	ctx.r6.s64 = 47;
	// stw r7,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r7.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// bl 0x8215bd08
	ctx.lr = 0x823C79D0;
	sub_8215BD08(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,-32185
	ctx.r4.s64 = -2109276160;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r5,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// lwz r3,-18236(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -18236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,-4984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4984, ctx.r11.u32);
	// beq cr6,0x823c79f8
	if (ctx.cr6.eq) goto loc_823C79F8;
	// bl 0x82094d78
	ctx.lr = 0x823C79F8;
	sub_82094D78(ctx, base);
loc_823C79F8:
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r30,-792(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -792);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823c7a20
	if (ctx.cr6.eq) goto loc_823C7A20;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e90a8
	ctx.lr = 0x823C7A14;
	sub_821E90A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c7a58
	if (!ctx.cr6.eq) goto loc_823C7A58;
	// lwz r30,-792(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + -792);
loc_823C7A20:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82183078
	ctx.lr = 0x823C7A28;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823C7A34;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823c7a44
	if (!ctx.cr6.eq) goto loc_823C7A44;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821efaa0
	ctx.lr = 0x823C7A44;
	sub_821EFAA0(ctx, base);
loc_823C7A44:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x823C7A54;
	sub_821837D0(ctx, base);
	// b 0x823c7a60
	goto loc_823C7A60;
loc_823C7A58:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_823C7A60:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e52a8
	ctx.lr = 0x823C7A70;
	sub_820E52A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823C7A7C"))) PPC_WEAK_FUNC(sub_823C7A7C);
PPC_FUNC_IMPL(__imp__sub_823C7A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C7A80"))) PPC_WEAK_FUNC(sub_823C7A80);
PPC_FUNC_IMPL(__imp__sub_823C7A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8223a9f8
	ctx.lr = 0x823C7A98;
	sub_8223A9F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c7acc
	if (ctx.cr6.eq) goto loc_823C7ACC;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// bl 0x820f3a78
	ctx.lr = 0x823C7AAC;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c7acc
	if (ctx.cr6.eq) goto loc_823C7ACC;
	// bl 0x8208f8e8
	ctx.lr = 0x823C7AB8;
	sub_8208F8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c7ac4
	if (!ctx.cr6.eq) goto loc_823C7AC4;
	// bl 0x8208f948
	ctx.lr = 0x823C7AC4;
	sub_8208F948(ctx, base);
loc_823C7AC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c72a0
	ctx.lr = 0x823C7ACC;
	sub_823C72A0(ctx, base);
loc_823C7ACC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7AE0"))) PPC_WEAK_FUNC(sub_823C7AE0);
PPC_FUNC_IMPL(__imp__sub_823C7AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x823c7cd8
	if (ctx.cr6.gt) goto loc_823C7CD8;
	// lis r12,-32196
	ctx.r12.s64 = -2109997056;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,31516
	ctx.r12.s64 = ctx.r12.s64 + 31516;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,31576(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31576);
	// lwz r17,31616(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31616);
	// lwz r17,31644(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31644);
	// lwz r17,31672(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31672);
	// lwz r17,31700(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31700);
	// lwz r17,31728(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31728);
	// lwz r17,31840(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31840);
	// lwz r17,31868(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31868);
	// lwz r17,31756(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31756);
	// lwz r17,31812(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31812);
	// lwz r17,31896(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31896);
	// lwz r17,31924(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31924);
	// lwz r17,31960(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31960);
	// lwz r17,31784(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31784);
	// lwz r17,31952(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31952);
	// bl 0x821e9200
	ctx.lr = 0x823C7B5C;
	sub_821E9200(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c7cd8
	if (ctx.cr6.eq) goto loc_823C7CD8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c74b8
	ctx.lr = 0x823C7B88;
	sub_823C74B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c7208
	ctx.lr = 0x823C7BA4;
	sub_823C7208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c7550
	ctx.lr = 0x823C7BC0;
	sub_823C7550(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c75b0
	ctx.lr = 0x823C7BDC;
	sub_823C75B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c7a80
	ctx.lr = 0x823C7BF8;
	sub_823C7A80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c6f60
	ctx.lr = 0x823C7C14;
	sub_823C6F60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c6fb8
	ctx.lr = 0x823C7C30;
	sub_823C6FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c77f0
	ctx.lr = 0x823C7C4C;
	sub_823C77F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c7408
	ctx.lr = 0x823C7C68;
	sub_823C7408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c7620
	ctx.lr = 0x823C7C84;
	sub_823C7620(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e7fe0
	ctx.lr = 0x823C7CA0;
	sub_823E7FE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c76e0
	ctx.lr = 0x823C7CBC;
	sub_823C76E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c7850
	ctx.lr = 0x823C7CD8;
	sub_823C7850(ctx, base);
loc_823C7CD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7CEC"))) PPC_WEAK_FUNC(sub_823C7CEC);
PPC_FUNC_IMPL(__imp__sub_823C7CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C7CF0"))) PPC_WEAK_FUNC(sub_823C7CF0);
PPC_FUNC_IMPL(__imp__sub_823C7CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-22960
	ctx.r9.s64 = ctx.r11.s64 + -22960;
	// addi r8,r10,-22972
	ctx.r8.s64 = ctx.r10.s64 + -22972;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,1796
	ctx.r3.s64 = ctx.r3.s64 + 1796;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// bl 0x821f4b38
	ctx.lr = 0x823C7D2C;
	sub_821F4B38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x823C7D34;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x823C7D3C;
	sub_821857F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7D54"))) PPC_WEAK_FUNC(sub_823C7D54);
PPC_FUNC_IMPL(__imp__sub_823C7D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C7D58"))) PPC_WEAK_FUNC(sub_823C7D58);
PPC_FUNC_IMPL(__imp__sub_823C7D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7D68"))) PPC_WEAK_FUNC(sub_823C7D68);
PPC_FUNC_IMPL(__imp__sub_823C7D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C7D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c7dd0
	if (!ctx.cr6.eq) goto loc_823C7DD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C7DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c7dd0
	if (!ctx.cr6.eq) goto loc_823C7DD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C7DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x823c7dd4
	if (ctx.cr6.eq) goto loc_823C7DD4;
loc_823C7DD0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823C7DD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7DE8"))) PPC_WEAK_FUNC(sub_823C7DE8);
PPC_FUNC_IMPL(__imp__sub_823C7DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,34600
	ctx.r11.u64 = ctx.r11.u64 | 34600;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7DF8"))) PPC_WEAK_FUNC(sub_823C7DF8);
PPC_FUNC_IMPL(__imp__sub_823C7DF8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,8651
	ctx.r11.s64 = ctx.r4.s64 + 8651;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7E08"))) PPC_WEAK_FUNC(sub_823C7E08);
PPC_FUNC_IMPL(__imp__sub_823C7E08) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,8658
	ctx.r11.s64 = ctx.r4.s64 + 8658;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7E18"))) PPC_WEAK_FUNC(sub_823C7E18);
PPC_FUNC_IMPL(__imp__sub_823C7E18) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,8665
	ctx.r11.s64 = ctx.r4.s64 + 8665;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7E28"))) PPC_WEAK_FUNC(sub_823C7E28);
PPC_FUNC_IMPL(__imp__sub_823C7E28) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c7e5c
	if (ctx.cr6.eq) goto loc_823C7E5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C7E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x823c7e60
	if (ctx.cr6.eq) goto loc_823C7E60;
loc_823C7E5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823C7E60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7E70"))) PPC_WEAK_FUNC(sub_823C7E70);
PPC_FUNC_IMPL(__imp__sub_823C7E70) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c7ea4
	if (ctx.cr6.eq) goto loc_823C7EA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C7E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x823c7ea8
	if (ctx.cr6.eq) goto loc_823C7EA8;
loc_823C7EA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823C7EA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7EB8"))) PPC_WEAK_FUNC(sub_823C7EB8);
PPC_FUNC_IMPL(__imp__sub_823C7EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x823c7f10
	if (ctx.cr6.eq) goto loc_823C7F10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C7EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c7f10
	if (!ctx.cr6.eq) goto loc_823C7F10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C7F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x823c7f14
	if (ctx.cr6.eq) goto loc_823C7F14;
loc_823C7F10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823C7F14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7F28"))) PPC_WEAK_FUNC(sub_823C7F28);
PPC_FUNC_IMPL(__imp__sub_823C7F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C7F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,144(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823C7F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823C7F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x8223ab30
	ctx.lr = 0x823C7F98;
	sub_8223AB30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163e58
	ctx.lr = 0x823C7FA0;
	sub_82163E58(ctx, base);
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x821657d0
	ctx.lr = 0x823C7FA8;
	sub_821657D0(ctx, base);
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

__attribute__((alias("__imp__sub_823C7FC4"))) PPC_WEAK_FUNC(sub_823C7FC4);
PPC_FUNC_IMPL(__imp__sub_823C7FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C7FC8"))) PPC_WEAK_FUNC(sub_823C7FC8);
PPC_FUNC_IMPL(__imp__sub_823C7FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r3,772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C7FD8"))) PPC_WEAK_FUNC(sub_823C7FD8);
PPC_FUNC_IMPL(__imp__sub_823C7FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C7FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C801C"))) PPC_WEAK_FUNC(sub_823C801C);
PPC_FUNC_IMPL(__imp__sub_823C801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C8020"))) PPC_WEAK_FUNC(sub_823C8020);
PPC_FUNC_IMPL(__imp__sub_823C8020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823C8028;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// bl 0x82163dd0
	ctx.lr = 0x823C804C;
	sub_82163DD0(ctx, base);
	// mulli r9,r29,1748
	ctx.r9.s64 = ctx.r29.s64 * 1748;
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// li r5,1748
	ctx.r5.s64 = 1748;
	// addi r4,r11,5584
	ctx.r4.s64 = ctx.r11.s64 + 5584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823C8064;
	sub_82248A40(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,124(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823C8078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823C808C"))) PPC_WEAK_FUNC(sub_823C808C);
PPC_FUNC_IMPL(__imp__sub_823C808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C8090"))) PPC_WEAK_FUNC(sub_823C8090);
PPC_FUNC_IMPL(__imp__sub_823C8090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x823C80BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c80e8
	if (!ctx.cr6.eq) goto loc_823C80E8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r11,34600
	ctx.r9.u64 = ctx.r11.u64 | 34600;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// b 0x823c80ec
	goto loc_823C80EC;
loc_823C80E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823C80EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8104"))) PPC_WEAK_FUNC(sub_823C8104);
PPC_FUNC_IMPL(__imp__sub_823C8104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C8108"))) PPC_WEAK_FUNC(sub_823C8108);
PPC_FUNC_IMPL(__imp__sub_823C8108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x823c8120
	if (ctx.cr6.lt) goto loc_823C8120;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_823C8120:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8128"))) PPC_WEAK_FUNC(sub_823C8128);
PPC_FUNC_IMPL(__imp__sub_823C8128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C813C"))) PPC_WEAK_FUNC(sub_823C813C);
PPC_FUNC_IMPL(__imp__sub_823C813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C8140"))) PPC_WEAK_FUNC(sub_823C8140);
PPC_FUNC_IMPL(__imp__sub_823C8140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c81a4
	if (!ctx.cr6.eq) goto loc_823C81A4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r9,r11,34600
	ctx.r9.u64 = ctx.r11.u64 | 34600;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r7,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823C81A4:
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

__attribute__((alias("__imp__sub_823C81BC"))) PPC_WEAK_FUNC(sub_823C81BC);
PPC_FUNC_IMPL(__imp__sub_823C81BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C81C0"))) PPC_WEAK_FUNC(sub_823C81C0);
PPC_FUNC_IMPL(__imp__sub_823C81C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x823c81d8
	if (ctx.cr6.lt) goto loc_823C81D8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_823C81D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C81E0"))) PPC_WEAK_FUNC(sub_823C81E0);
PPC_FUNC_IMPL(__imp__sub_823C81E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8240
	if (!ctx.cr6.eq) goto loc_823C8240;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,34600
	ctx.r9.u64 = ctx.r10.u64 | 34600;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823C8240:
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

__attribute__((alias("__imp__sub_823C8258"))) PPC_WEAK_FUNC(sub_823C8258);
PPC_FUNC_IMPL(__imp__sub_823C8258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C826C"))) PPC_WEAK_FUNC(sub_823C826C);
PPC_FUNC_IMPL(__imp__sub_823C826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C8270"))) PPC_WEAK_FUNC(sub_823C8270);
PPC_FUNC_IMPL(__imp__sub_823C8270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x823c8288
	if (ctx.cr6.lt) goto loc_823C8288;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_823C8288:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8290"))) PPC_WEAK_FUNC(sub_823C8290);
PPC_FUNC_IMPL(__imp__sub_823C8290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,-14
	ctx.r11.s64 = ctx.r11.s64 + -14;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C82A4"))) PPC_WEAK_FUNC(sub_823C82A4);
PPC_FUNC_IMPL(__imp__sub_823C82A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C82A8"))) PPC_WEAK_FUNC(sub_823C82A8);
PPC_FUNC_IMPL(__imp__sub_823C82A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823C82B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C82CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,132(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823C82E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,136(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823C82F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163e58
	ctx.lr = 0x823C8304;
	sub_82163E58(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8223ac20
	ctx.lr = 0x823C8314;
	sub_8223AC20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823C831C"))) PPC_WEAK_FUNC(sub_823C831C);
PPC_FUNC_IMPL(__imp__sub_823C831C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C8320"))) PPC_WEAK_FUNC(sub_823C8320);
PPC_FUNC_IMPL(__imp__sub_823C8320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8330"))) PPC_WEAK_FUNC(sub_823C8330);
PPC_FUNC_IMPL(__imp__sub_823C8330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8340"))) PPC_WEAK_FUNC(sub_823C8340);
PPC_FUNC_IMPL(__imp__sub_823C8340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8350"))) PPC_WEAK_FUNC(sub_823C8350);
PPC_FUNC_IMPL(__imp__sub_823C8350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8360"))) PPC_WEAK_FUNC(sub_823C8360);
PPC_FUNC_IMPL(__imp__sub_823C8360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8370"))) PPC_WEAK_FUNC(sub_823C8370);
PPC_FUNC_IMPL(__imp__sub_823C8370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8380"))) PPC_WEAK_FUNC(sub_823C8380);
PPC_FUNC_IMPL(__imp__sub_823C8380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// stw r4,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8390"))) PPC_WEAK_FUNC(sub_823C8390);
PPC_FUNC_IMPL(__imp__sub_823C8390) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x823c8468
	sub_823C8468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823C8398"))) PPC_WEAK_FUNC(sub_823C8398);
PPC_FUNC_IMPL(__imp__sub_823C8398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x823C83BC;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x821859a0
	ctx.lr = 0x823C83D0;
	sub_821859A0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-22960
	ctx.r9.s64 = ctx.r11.s64 + -22960;
	// addi r8,r10,-22972
	ctx.r8.s64 = ctx.r10.s64 + -22972;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x82239fb8
	ctx.lr = 0x823C8404;
	sub_82239FB8(ctx, base);
	// addi r3,r31,1796
	ctx.r3.s64 = ctx.r31.s64 + 1796;
	// bl 0x821f4a48
	ctx.lr = 0x823C840C;
	sub_821F4A48(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// ori r6,r7,34600
	ctx.r6.u64 = ctx.r7.u64 | 34600;
	// addi r3,r3,-30932
	ctx.r3.s64 = ctx.r3.s64 + -30932;
	// li r4,28
	ctx.r4.s64 = 28;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x823C8428;
	sub_822AA648(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r3,-30904
	ctx.r3.s64 = ctx.r3.s64 + -30904;
	// bl 0x822aa648
	ctx.lr = 0x823C8438;
	sub_822AA648(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r3,-30876
	ctx.r3.s64 = ctx.r3.s64 + -30876;
	// bl 0x822aa648
	ctx.lr = 0x823C8448;
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

__attribute__((alias("__imp__sub_823C8464"))) PPC_WEAK_FUNC(sub_823C8464);
PPC_FUNC_IMPL(__imp__sub_823C8464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C8468"))) PPC_WEAK_FUNC(sub_823C8468);
PPC_FUNC_IMPL(__imp__sub_823C8468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823C8470;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-22960
	ctx.r9.s64 = ctx.r11.s64 + -22960;
	// addi r8,r10,-22972
	ctx.r8.s64 = ctx.r10.s64 + -22972;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,1796
	ctx.r3.s64 = ctx.r3.s64 + 1796;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// bl 0x821f4b38
	ctx.lr = 0x823C84A0;
	sub_821F4B38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x823C84A8;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x823C84B0;
	sub_821857F0(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823c84cc
	if (ctx.cr6.eq) goto loc_823C84CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823C84C8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823C84CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823C84D4"))) PPC_WEAK_FUNC(sub_823C84D4);
PPC_FUNC_IMPL(__imp__sub_823C84D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C84D8"))) PPC_WEAK_FUNC(sub_823C84D8);
PPC_FUNC_IMPL(__imp__sub_823C84D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// bdz 0x823c84fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823C84FC;
	// bdz 0x823c850c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823C850C;
	// b 0x823c851c
	goto loc_823C851C;
loc_823C84FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823C850C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823C851C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823C852C"))) PPC_WEAK_FUNC(sub_823C852C);
PPC_FUNC_IMPL(__imp__sub_823C852C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8530"))) PPC_WEAK_FUNC(sub_823C8530);
PPC_FUNC_IMPL(__imp__sub_823C8530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// addi r31,r3,-16
	ctx.r31.s64 = ctx.r3.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8574
	if (!ctx.cr6.eq) goto loc_823C8574;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823C8574:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8588"))) PPC_WEAK_FUNC(sub_823C8588);
PPC_FUNC_IMPL(__imp__sub_823C8588) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C85A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// lwz r11,-4760(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4760);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x823c85e4
	if (ctx.cr6.eq) goto loc_823C85E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x823C85C8;
	sub_8215BD08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,-8460(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8460);
	// bl 0x820e53f8
	ctx.lr = 0x823C85E4;
	sub_820E53F8(ctx, base);
loc_823C85E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C85F4"))) PPC_WEAK_FUNC(sub_823C85F4);
PPC_FUNC_IMPL(__imp__sub_823C85F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C85F8"))) PPC_WEAK_FUNC(sub_823C85F8);
PPC_FUNC_IMPL(__imp__sub_823C85F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823C8600;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823c86b4
	if (!ctx.cr6.eq) goto loc_823C86B4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823c86b4
	if (!ctx.cr6.eq) goto loc_823C86B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,144(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823C8650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823C8668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 132);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x823C867C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82231530
	ctx.lr = 0x823C8688;
	sub_82231530(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x823C8694;
	sub_8215BD28(ctx, base);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// bl 0x8215bd08
	ctx.lr = 0x823C869C;
	sub_8215BD08(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823C86B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823C86C0"))) PPC_WEAK_FUNC(sub_823C86C0);
PPC_FUNC_IMPL(__imp__sub_823C86C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823C86C8;
	sub_8224878C(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C86E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823C86F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,140(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 140);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823C8710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82164c50
	ctx.lr = 0x823C8714;
	sub_82164C50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823c8724
	if (!ctx.cr6.eq) goto loc_823C8724;
	// bl 0x82163df0
	ctx.lr = 0x823C8720;
	sub_82163DF0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_823C8724:
	// bl 0x8223a990
	ctx.lr = 0x823C8728;
	sub_8223A990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8223aa28
	ctx.lr = 0x823C8730;
	sub_8223AA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243fd8
	ctx.lr = 0x823C8738;
	sub_82243FD8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x823c8768
	if (!ctx.cr6.eq) goto loc_823C8768;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,13699
	ctx.r4.s64 = 13699;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823C875C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823c8778
	goto loc_823C8778;
loc_823C8768:
	// mulli r11,r29,67
	ctx.r11.s64 = ctx.r29.s64 * 67;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,1553
	ctx.r5.s64 = ctx.r11.s64 + 1553;
loc_823C8778:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822440f0
	ctx.lr = 0x823C8780;
	sub_822440F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244018
	ctx.lr = 0x823C878C;
	sub_82244018(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x8214a400
	ctx.lr = 0x823C8794;
	sub_8214A400(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82164060
	ctx.lr = 0x823C879C;
	sub_82164060(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163e58
	ctx.lr = 0x823C87A4;
	sub_82163E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x823C87B4;
	sub_82248A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243ff0
	ctx.lr = 0x823C87BC;
	sub_82243FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82163c98
	ctx.lr = 0x823C87C8;
	sub_82163C98(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163e70
	ctx.lr = 0x823C87D4;
	sub_82163E70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163e58
	ctx.lr = 0x823C87DC;
	sub_82163E58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82164420
	ctx.lr = 0x823C87E4;
	sub_82164420(ctx, base);
	// bl 0x8223a9f8
	ctx.lr = 0x823C87E8;
	sub_8223A9F8(ctx, base);
	// bl 0x8223b2f8
	ctx.lr = 0x823C87EC;
	sub_8223B2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c8820
	if (ctx.cr6.eq) goto loc_823C8820;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,556(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f0,-22800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-22796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22796);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r9,24(r29)
	PPC_STORE_U16(ctx.r29.u32 + 24, ctx.r9.u16);
loc_823C8820:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231530
	ctx.lr = 0x823C8830;
	sub_82231530(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x823C883C;
	sub_8215BD28(ctx, base);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// bl 0x8215bd08
	ctx.lr = 0x823C8844;
	sub_8215BD08(ctx, base);
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8222e1e0
	ctx.lr = 0x823C8854;
	sub_8222E1E0(ctx, base);
	// bl 0x82163dd0
	ctx.lr = 0x823C8858;
	sub_82163DD0(ctx, base);
	// mulli r11,r30,1748
	ctx.r11.s64 = ctx.r30.s64 * 1748;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,5584
	ctx.r31.s64 = ctx.r11.s64 + 5584;
	// bl 0x82243fe8
	ctx.lr = 0x823C886C;
	sub_82243FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1748
	ctx.r5.s64 = 1748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x823C887C;
	sub_82248A40(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823C8884"))) PPC_WEAK_FUNC(sub_823C8884);
PPC_FUNC_IMPL(__imp__sub_823C8884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C8888"))) PPC_WEAK_FUNC(sub_823C8888);
PPC_FUNC_IMPL(__imp__sub_823C8888) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x823c8a90
	if (ctx.cr6.gt) goto loc_823C8A90;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c88f4
	// bdzf 4*cr6+eq,0x823c8940
	// bdzf 4*cr6+eq,0x823c89d4
	// bdzf 4*cr6+eq,0x823c8a20
	// bdzf 4*cr6+eq,0x823c8a74
	// bdzf 4*cr6+eq,0x823c8a74
	// bdzf 4*cr6+eq,0x823c8a74
	// bne cr6,0x823c8a74
	if (!ctx.cr6.eq) goto loc_823C8A74;
	// li r5,1748
	ctx.r5.s64 = 1748;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1796
	ctx.r3.s64 = ctx.r31.s64 + 1796;
	// bl 0x82235970
	ctx.lr = 0x823C88E8;
	sub_82235970(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x823c8a90
	goto loc_823C8A90;
loc_823C88F4:
	// lwz r11,1796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// addi r30,r31,1796
	ctx.r30.s64 = ctx.r31.s64 + 1796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C890C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c8a90
	if (ctx.cr6.eq) goto loc_823C8A90;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r9,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r3.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// b 0x823c8a90
	goto loc_823C8A90;
loc_823C8940:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823C896C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,132(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 132);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823C8980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-22980
	ctx.r4.s64 = ctx.r11.s64 + -22980;
	// stb r3,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r3.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82163e18
	ctx.lr = 0x823C899C;
	sub_82163E18(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x823C89A0;
	sub_82163EE8(ctx, base);
	// lbz r10,2367(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2367);
	// addi r3,r31,1796
	ctx.r3.s64 = ctx.r31.s64 + 1796;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c89c0
	if (ctx.cr6.eq) goto loc_823C89C0;
	// bl 0x82155988
	ctx.lr = 0x823C89B4;
	sub_82155988(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x823c8a90
	goto loc_823C8A90;
loc_823C89C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82155920
	ctx.lr = 0x823C89C8;
	sub_82155920(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x823c8a90
	goto loc_823C8A90;
loc_823C89D4:
	// lwz r11,1796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// addi r30,r31,1796
	ctx.r30.s64 = ctx.r31.s64 + 1796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C89EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c8a90
	if (ctx.cr6.eq) goto loc_823C8A90;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8A08;
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
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// b 0x823c8a90
	goto loc_823C8A90;
loc_823C8A20:
	// lwz r11,1796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// addi r30,r31,1796
	ctx.r30.s64 = ctx.r31.s64 + 1796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c8a90
	if (ctx.cr6.eq) goto loc_823C8A90;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c8a68
	if (ctx.cr6.eq) goto loc_823C8A68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// b 0x823c8a7c
	goto loc_823C8A7C;
loc_823C8A68:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x823c8a90
	goto loc_823C8A90;
loc_823C8A74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_823C8A7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
loc_823C8A90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8AA8"))) PPC_WEAK_FUNC(sub_823C8AA8);
PPC_FUNC_IMPL(__imp__sub_823C8AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823c8b20
	if (ctx.cr6.eq) goto loc_823C8B20;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823c8b30
	if (!ctx.cr6.eq) goto loc_823C8B30;
	// lwz r11,1796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1796);
	// addi r3,r3,1796
	ctx.r3.s64 = ctx.r3.s64 + 1796;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c8b30
	if (ctx.cr6.eq) goto loc_823C8B30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823C8B20:
	// addi r3,r31,1796
	ctx.r3.s64 = ctx.r31.s64 + 1796;
	// bl 0x82155988
	ctx.lr = 0x823C8B28;
	sub_82155988(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_823C8B30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8B44"))) PPC_WEAK_FUNC(sub_823C8B44);
PPC_FUNC_IMPL(__imp__sub_823C8B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C8B48"))) PPC_WEAK_FUNC(sub_823C8B48);
PPC_FUNC_IMPL(__imp__sub_823C8B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823C8B50;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823C8B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x823c8de8
	if (ctx.cr6.gt) goto loc_823C8DE8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c8bc8
	// bdzf 4*cr6+eq,0x823c8c18
	// bdzf 4*cr6+eq,0x823c8de8
	// bdzf 4*cr6+eq,0x823c8c64
	// bdzf 4*cr6+eq,0x823c8c94
	// bdzf 4*cr6+eq,0x823c8d04
	// bdzf 4*cr6+eq,0x823c8d5c
	// bne cr6,0x823c8dac
	if (!ctx.cr6.eq) goto loc_823C8DAC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823C8BC8:
	// lwz r11,1796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// addi r30,r31,1796
	ctx.r30.s64 = ctx.r31.s64 + 1796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c8de8
	if (ctx.cr6.eq) goto loc_823C8DE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r9,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r3.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r7,r11,11
	ctx.r7.s64 = ctx.r11.s64 + 11;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823C8C18:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r31,r31,-30876
	ctx.r31.s64 = ctx.r31.s64 + -30876;
loc_823C8C30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82164c98
	ctx.lr = 0x823C8C38;
	sub_82164C98(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r29,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r29.u32);
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r3,-56(r31)
	PPC_STORE_U32(ctx.r31.u32 + -56, ctx.r3.u32);
	// cmplwi cr6,r30,7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 7, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// blt cr6,0x823c8c30
	if (ctx.cr6.lt) goto loc_823C8C30;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823C8C64:
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// bl 0x82163dd0
	ctx.lr = 0x823C8C6C;
	sub_82163DD0(ctx, base);
	// mulli r11,r29,1748
	ctx.r11.s64 = ctx.r29.s64 * 1748;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r5,1748
	ctx.r5.s64 = 1748;
	// addi r4,r11,5584
	ctx.r4.s64 = ctx.r11.s64 + 5584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823C8C84;
	sub_82248A40(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823C8C94:
	// lwz r11,1796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// addi r30,r31,1796
	ctx.r30.s64 = ctx.r31.s64 + 1796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c8de8
	if (ctx.cr6.eq) goto loc_823C8DE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c8cf4
	if (ctx.cr6.eq) goto loc_823C8CF4;
	// li r6,1748
	ctx.r6.s64 = 1748;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82235b10
	ctx.lr = 0x823C8CE4;
	sub_82235B10(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823C8CF4:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823C8D04:
	// lwz r11,1796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// addi r30,r31,1796
	ctx.r30.s64 = ctx.r31.s64 + 1796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c8de8
	if (ctx.cr6.eq) goto loc_823C8DE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c8cf4
	if (ctx.cr6.eq) goto loc_823C8CF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82235a90
	ctx.lr = 0x823C8D4C;
	sub_82235A90(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823C8D5C:
	// lwz r11,1796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// addi r30,r31,1796
	ctx.r30.s64 = ctx.r31.s64 + 1796;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c8de8
	if (ctx.cr6.eq) goto loc_823C8DE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8D90;
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
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823C8DAC:
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82239cf8
	ctx.lr = 0x823C8DB4;
	sub_82239CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c8de0
	if (ctx.cr6.eq) goto loc_823C8DE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C8DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823C8DE0:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_823C8DE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823C8DF0"))) PPC_WEAK_FUNC(sub_823C8DF0);
PPC_FUNC_IMPL(__imp__sub_823C8DF0) {
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
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x821ebaa8
	ctx.lr = 0x823C8E04;
	sub_821EBAA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb980
	ctx.lr = 0x823C8E10;
	sub_821EB980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8E20"))) PPC_WEAK_FUNC(sub_823C8E20);
PPC_FUNC_IMPL(__imp__sub_823C8E20) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x821ebaa8
	ctx.lr = 0x823C8E34;
	sub_821EBAA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb980
	ctx.lr = 0x823C8E40;
	sub_821EB980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8E50"))) PPC_WEAK_FUNC(sub_823C8E50);
PPC_FUNC_IMPL(__imp__sub_823C8E50) {
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
	// bl 0x821ebaa8
	ctx.lr = 0x823C8E64;
	sub_821EBAA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb980
	ctx.lr = 0x823C8E70;
	sub_821EB980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8E80"))) PPC_WEAK_FUNC(sub_823C8E80);
PPC_FUNC_IMPL(__imp__sub_823C8E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823C8E88;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-22792
	ctx.r10.s64 = ctx.r11.s64 + -22792;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,19824
	ctx.r31.s64 = ctx.r3.s64 + 19824;
	// li r30,52
	ctx.r30.s64 = 52;
	// stw r11,-4760(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4760, ctx.r11.u32);
loc_823C8EB4:
	// addi r31,r31,-336
	ctx.r31.s64 = ctx.r31.s64 + -336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1dc0
	ctx.lr = 0x823C8EC0;
	sub_821B1DC0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x823c8eb4
	if (!ctx.cr0.lt) goto loc_823C8EB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185670
	ctx.lr = 0x823C8ED0;
	sub_82185670(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823C8ED8"))) PPC_WEAK_FUNC(sub_823C8ED8);
PPC_FUNC_IMPL(__imp__sub_823C8ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,1188
	ctx.r4.s64 = 1188;
	// addi r3,r3,776
	ctx.r3.s64 = ctx.r3.s64 + 776;
	// bl 0x822aa648
	ctx.lr = 0x823C8EF8;
	sub_822AA648(ctx, base);
	// li r10,27
	ctx.r10.s64 = 27;
	// addi r11,r31,764
	ctx.r11.s64 = ctx.r31.s64 + 764;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_823C8F08:
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stwu r10,44(r11)
	ea = 44 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823c8f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8F08;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8F28"))) PPC_WEAK_FUNC(sub_823C8F28);
PPC_FUNC_IMPL(__imp__sub_823C8F28) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 27, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 11, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,194
	ctx.r11.s64 = ctx.r11.s64 + 194;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8F60"))) PPC_WEAK_FUNC(sub_823C8F60);
PPC_FUNC_IMPL(__imp__sub_823C8F60) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823c8f70
	if (ctx.cr6.lt) goto loc_823C8F70;
	// cmpwi cr6,r4,27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 27, ctx.xer);
	// blt cr6,0x823c8f78
	if (ctx.cr6.lt) goto loc_823C8F78;
loc_823C8F70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C8F78:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x823c8f70
	if (ctx.cr6.lt) goto loc_823C8F70;
	// cmpwi cr6,r5,11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 11, ctx.xer);
	// bge cr6,0x823c8f70
	if (!ctx.cr6.lt) goto loc_823C8F70;
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,194
	ctx.r11.s64 = ctx.r11.s64 + 194;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8FA0"))) PPC_WEAK_FUNC(sub_823C8FA0);
PPC_FUNC_IMPL(__imp__sub_823C8FA0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x823c902c
	if (ctx.cr6.gt) {
		sub_823C902C(ctx, base);
		return;
	}
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-28732
	ctx.r12.s64 = ctx.r12.s64 + -28732;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823C8FC4"))) PPC_WEAK_FUNC(sub_823C8FC4);
PPC_FUNC_IMPL(__imp__sub_823C8FC4) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-28692(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28692);
	// lwz r17,-28684(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28684);
	// lwz r17,-28676(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28676);
	// lwz r17,-28668(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28668);
	// lwz r17,-28660(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28660);
	// lwz r17,-28652(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28652);
	// lwz r17,-28644(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28644);
	// lwz r17,-28636(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28636);
	// lwz r17,-28636(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28636);
	// lwz r17,-28636(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28636);
	// addi r3,r3,2016
	ctx.r3.s64 = ctx.r3.s64 + 2016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8FF4"))) PPC_WEAK_FUNC(sub_823C8FF4);
PPC_FUNC_IMPL(__imp__sub_823C8FF4) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,2352
	ctx.r3.s64 = ctx.r3.s64 + 2352;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C8FFC"))) PPC_WEAK_FUNC(sub_823C8FFC);
PPC_FUNC_IMPL(__imp__sub_823C8FFC) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,2688
	ctx.r3.s64 = ctx.r3.s64 + 2688;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9004"))) PPC_WEAK_FUNC(sub_823C9004);
PPC_FUNC_IMPL(__imp__sub_823C9004) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,3024
	ctx.r3.s64 = ctx.r3.s64 + 3024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C900C"))) PPC_WEAK_FUNC(sub_823C900C);
PPC_FUNC_IMPL(__imp__sub_823C900C) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,3360
	ctx.r3.s64 = ctx.r3.s64 + 3360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9014"))) PPC_WEAK_FUNC(sub_823C9014);
PPC_FUNC_IMPL(__imp__sub_823C9014) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,3696
	ctx.r3.s64 = ctx.r3.s64 + 3696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C901C"))) PPC_WEAK_FUNC(sub_823C901C);
PPC_FUNC_IMPL(__imp__sub_823C901C) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4032
	ctx.r3.s64 = ctx.r3.s64 + 4032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9024"))) PPC_WEAK_FUNC(sub_823C9024);
PPC_FUNC_IMPL(__imp__sub_823C9024) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4368
	ctx.r3.s64 = ctx.r3.s64 + 4368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C902C"))) PPC_WEAK_FUNC(sub_823C902C);
PPC_FUNC_IMPL(__imp__sub_823C902C) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9034"))) PPC_WEAK_FUNC(sub_823C9034);
PPC_FUNC_IMPL(__imp__sub_823C9034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C9038"))) PPC_WEAK_FUNC(sub_823C9038);
PPC_FUNC_IMPL(__imp__sub_823C9038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c8e80
	ctx.lr = 0x823C9058;
	sub_823C8E80(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c9074
	if (ctx.cr6.eq) goto loc_823C9074;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823C9070;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823C9074:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C908C"))) PPC_WEAK_FUNC(sub_823C908C);
PPC_FUNC_IMPL(__imp__sub_823C908C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C9090"))) PPC_WEAK_FUNC(sub_823C9090);
PPC_FUNC_IMPL(__imp__sub_823C9090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823C9098;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8223aa28
	ctx.lr = 0x823C90B8;
	sub_8223AA28(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823c90c4
	if (!ctx.cr6.eq) goto loc_823C90C4;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_823C90C4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822391f8
	ctx.lr = 0x823C9100;
	sub_822391F8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c9114
	if (ctx.cr6.eq) goto loc_823C9114;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823C9114:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823C911C"))) PPC_WEAK_FUNC(sub_823C911C);
PPC_FUNC_IMPL(__imp__sub_823C911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C9120"))) PPC_WEAK_FUNC(sub_823C9120);
PPC_FUNC_IMPL(__imp__sub_823C9120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c79c8
	ctx.lr = 0x823C9158;
	sub_820C79C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c93d4
	if (ctx.cr6.eq) goto loc_823C93D4;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// lbz r11,17(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x823c93d4
	if (ctx.cr6.gt) goto loc_823C93D4;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-28280
	ctx.r12.s64 = ctx.r12.s64 + -28280;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-28240(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28240);
	// lwz r17,-28168(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28168);
	// lwz r17,-28096(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28096);
	// lwz r17,-28024(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -28024);
	// lwz r17,-27952(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27952);
	// lwz r17,-27880(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27880);
	// lwz r17,-27808(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27808);
	// lwz r17,-27736(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27736);
	// lwz r17,-27728(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27728);
	// lwz r17,-27720(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27720);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823c93d4
	if (ctx.cr6.gt) goto loc_823C93D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c91d8
	// bdzf 4*cr6+eq,0x823c91e0
	// bdzf 4*cr6+eq,0x823c91e8
	// bne cr6,0x823c91f0
	if (!ctx.cr6.eq) goto loc_823C91F0;
	// addi r3,r31,4704
	ctx.r3.s64 = ctx.r31.s64 + 4704;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C91D8:
	// addi r3,r31,5040
	ctx.r3.s64 = ctx.r31.s64 + 5040;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C91E0:
	// addi r3,r31,5376
	ctx.r3.s64 = ctx.r31.s64 + 5376;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C91E8:
	// addi r3,r31,5712
	ctx.r3.s64 = ctx.r31.s64 + 5712;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C91F0:
	// addi r3,r31,6048
	ctx.r3.s64 = ctx.r31.s64 + 6048;
	// b 0x823c93d8
	goto loc_823C93D8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823c93d4
	if (ctx.cr6.gt) goto loc_823C93D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c9220
	// bdzf 4*cr6+eq,0x823c9228
	// bdzf 4*cr6+eq,0x823c9230
	// bne cr6,0x823c9238
	if (!ctx.cr6.eq) goto loc_823C9238;
	// addi r3,r31,6384
	ctx.r3.s64 = ctx.r31.s64 + 6384;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9220:
	// addi r3,r31,6720
	ctx.r3.s64 = ctx.r31.s64 + 6720;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9228:
	// addi r3,r31,7056
	ctx.r3.s64 = ctx.r31.s64 + 7056;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9230:
	// addi r3,r31,7392
	ctx.r3.s64 = ctx.r31.s64 + 7392;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9238:
	// addi r3,r31,7728
	ctx.r3.s64 = ctx.r31.s64 + 7728;
	// b 0x823c93d8
	goto loc_823C93D8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823c93d4
	if (ctx.cr6.gt) goto loc_823C93D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c9268
	// bdzf 4*cr6+eq,0x823c9270
	// bdzf 4*cr6+eq,0x823c9278
	// bne cr6,0x823c9280
	if (!ctx.cr6.eq) goto loc_823C9280;
	// addi r3,r31,8064
	ctx.r3.s64 = ctx.r31.s64 + 8064;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9268:
	// addi r3,r31,8400
	ctx.r3.s64 = ctx.r31.s64 + 8400;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9270:
	// addi r3,r31,8736
	ctx.r3.s64 = ctx.r31.s64 + 8736;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9278:
	// addi r3,r31,9072
	ctx.r3.s64 = ctx.r31.s64 + 9072;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9280:
	// addi r3,r31,9408
	ctx.r3.s64 = ctx.r31.s64 + 9408;
	// b 0x823c93d8
	goto loc_823C93D8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823c93d4
	if (ctx.cr6.gt) goto loc_823C93D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c92b0
	// bdzf 4*cr6+eq,0x823c92b8
	// bdzf 4*cr6+eq,0x823c92c0
	// bne cr6,0x823c92c8
	if (!ctx.cr6.eq) goto loc_823C92C8;
	// addi r3,r31,9744
	ctx.r3.s64 = ctx.r31.s64 + 9744;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C92B0:
	// addi r3,r31,10080
	ctx.r3.s64 = ctx.r31.s64 + 10080;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C92B8:
	// addi r3,r31,10416
	ctx.r3.s64 = ctx.r31.s64 + 10416;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C92C0:
	// addi r3,r31,10752
	ctx.r3.s64 = ctx.r31.s64 + 10752;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C92C8:
	// addi r3,r31,11088
	ctx.r3.s64 = ctx.r31.s64 + 11088;
	// b 0x823c93d8
	goto loc_823C93D8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823c93d4
	if (ctx.cr6.gt) goto loc_823C93D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c92f8
	// bdzf 4*cr6+eq,0x823c9300
	// bdzf 4*cr6+eq,0x823c9308
	// bne cr6,0x823c9310
	if (!ctx.cr6.eq) goto loc_823C9310;
	// addi r3,r31,11424
	ctx.r3.s64 = ctx.r31.s64 + 11424;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C92F8:
	// addi r3,r31,11760
	ctx.r3.s64 = ctx.r31.s64 + 11760;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9300:
	// addi r3,r31,12096
	ctx.r3.s64 = ctx.r31.s64 + 12096;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9308:
	// addi r3,r31,12432
	ctx.r3.s64 = ctx.r31.s64 + 12432;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9310:
	// addi r3,r31,12768
	ctx.r3.s64 = ctx.r31.s64 + 12768;
	// b 0x823c93d8
	goto loc_823C93D8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823c93d4
	if (ctx.cr6.gt) goto loc_823C93D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c9340
	// bdzf 4*cr6+eq,0x823c9348
	// bdzf 4*cr6+eq,0x823c9350
	// bne cr6,0x823c9358
	if (!ctx.cr6.eq) goto loc_823C9358;
	// addi r3,r31,13104
	ctx.r3.s64 = ctx.r31.s64 + 13104;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9340:
	// addi r3,r31,13440
	ctx.r3.s64 = ctx.r31.s64 + 13440;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9348:
	// addi r3,r31,13776
	ctx.r3.s64 = ctx.r31.s64 + 13776;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9350:
	// addi r3,r31,14112
	ctx.r3.s64 = ctx.r31.s64 + 14112;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9358:
	// addi r3,r31,14448
	ctx.r3.s64 = ctx.r31.s64 + 14448;
	// b 0x823c93d8
	goto loc_823C93D8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823c93d4
	if (ctx.cr6.gt) goto loc_823C93D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c9388
	// bdzf 4*cr6+eq,0x823c9390
	// bdzf 4*cr6+eq,0x823c9398
	// bne cr6,0x823c93a0
	if (!ctx.cr6.eq) goto loc_823C93A0;
	// addi r3,r31,14784
	ctx.r3.s64 = ctx.r31.s64 + 14784;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9388:
	// addi r3,r31,15120
	ctx.r3.s64 = ctx.r31.s64 + 15120;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9390:
	// addi r3,r31,15456
	ctx.r3.s64 = ctx.r31.s64 + 15456;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C9398:
	// addi r3,r31,15792
	ctx.r3.s64 = ctx.r31.s64 + 15792;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C93A0:
	// addi r3,r31,16128
	ctx.r3.s64 = ctx.r31.s64 + 16128;
	// b 0x823c93d8
	goto loc_823C93D8;
	// addi r3,r31,16464
	ctx.r3.s64 = ctx.r31.s64 + 16464;
	// b 0x823c93d8
	goto loc_823C93D8;
	// addi r3,r31,16800
	ctx.r3.s64 = ctx.r31.s64 + 16800;
	// b 0x823c93d8
	goto loc_823C93D8;
	// lbz r11,33(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c93cc
	if (!ctx.cr6.eq) goto loc_823C93CC;
	// addi r3,r31,17136
	ctx.r3.s64 = ctx.r31.s64 + 17136;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C93CC:
	// addi r3,r31,17472
	ctx.r3.s64 = ctx.r31.s64 + 17472;
	// b 0x823c93d8
	goto loc_823C93D8;
loc_823C93D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823C93D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C93F0"))) PPC_WEAK_FUNC(sub_823C93F0);
PPC_FUNC_IMPL(__imp__sub_823C93F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x823c9438
	if (ctx.cr6.gt) goto loc_823C9438;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c9418
	// bdzf 4*cr6+eq,0x823c9420
	// bdzf 4*cr6+eq,0x823c9428
	// bne cr6,0x823c9430
	if (!ctx.cr6.eq) goto loc_823C9430;
	// addi r3,r3,18144
	ctx.r3.s64 = ctx.r3.s64 + 18144;
	// blr 
	return;
loc_823C9418:
	// addi r3,r3,18480
	ctx.r3.s64 = ctx.r3.s64 + 18480;
	// blr 
	return;
loc_823C9420:
	// addi r3,r3,18816
	ctx.r3.s64 = ctx.r3.s64 + 18816;
	// blr 
	return;
loc_823C9428:
	// addi r3,r3,19152
	ctx.r3.s64 = ctx.r3.s64 + 19152;
	// blr 
	return;
loc_823C9430:
	// addi r3,r3,19488
	ctx.r3.s64 = ctx.r3.s64 + 19488;
	// blr 
	return;
loc_823C9438:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9440"))) PPC_WEAK_FUNC(sub_823C9440);
PPC_FUNC_IMPL(__imp__sub_823C9440) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823c9450
	if (ctx.cr6.eq) goto loc_823C9450;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C9450:
	// addi r3,r3,17808
	ctx.r3.s64 = ctx.r3.s64 + 17808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9458"))) PPC_WEAK_FUNC(sub_823C9458);
PPC_FUNC_IMPL(__imp__sub_823C9458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823C9460;
	sub_82248750(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r3.u32);
	// bl 0x821855f0
	ctx.lr = 0x823C9470;
	sub_821855F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-22792
	ctx.r10.s64 = ctx.r11.s64 + -22792;
	// addi r3,r29,640
	ctx.r3.s64 = ctx.r29.s64 + 640;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x8214a400
	ctx.lr = 0x823C949C;
	sub_8214A400(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82164060
	ctx.lr = 0x823C94A4;
	sub_82164060(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r27,r31,2016
	ctx.r27.s64 = ctx.r31.s64 + 2016;
	// stw r30,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r30,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r30,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r30.u32);
	// li r28,52
	ctx.r28.s64 = 52;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r30.u32);
	// stfs f0,1996(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1996, temp.u32);
	// stw r30,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r30.u32);
	// stw r30,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r30.u32);
	// stw r30,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r30.u32);
	// stw r8,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r8.u32);
	// stw r7,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r7.u32);
	// stw r30,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r30.u32);
	// stw r30,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r30.u32);
loc_823C94F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b29d0
	ctx.lr = 0x823C94F8;
	sub_821B29D0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,336
	ctx.r27.s64 = ctx.r27.s64 + 336;
	// bge 0x823c94f0
	if (!ctx.cr0.lt) goto loc_823C94F0;
	// lwsync 
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,752
	ctx.r4.s64 = 752;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,-4760(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4760, ctx.r31.u32);
	// bl 0x822aa648
	ctx.lr = 0x823C951C;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8ed8
	ctx.lr = 0x823C9524;
	sub_823C8ED8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,2008
	ctx.r3.s64 = ctx.r31.s64 + 2008;
	// bl 0x822aa648
	ctx.lr = 0x823C9530;
	sub_822AA648(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r9,r8,-22648
	ctx.r9.s64 = ctx.r8.s64 + -22648;
	// addi r8,r6,-22660
	ctx.r8.s64 = ctx.r6.s64 + -22660;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r4,r4,31224
	ctx.r4.s64 = ctx.r4.s64 + 31224;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r3,r3,31232
	ctx.r3.s64 = ctx.r3.s64 + 31232;
	// addi r6,r5,-22672
	ctx.r6.s64 = ctx.r5.s64 + -22672;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// addi r4,r11,31248
	ctx.r4.s64 = ctx.r11.s64 + 31248;
	// lwz r15,84(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r10,31256
	ctx.r3.s64 = ctx.r10.s64 + 31256;
	// addi r7,r7,31240
	ctx.r7.s64 = ctx.r7.s64 + 31240;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
	// lis r22,-32256
	ctx.r22.s64 = -2113929216;
	// lis r21,-32256
	ctx.r21.s64 = -2113929216;
	// lis r20,-32256
	ctx.r20.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r19,-32256
	ctx.r19.s64 = -2113929216;
	// lis r18,-32256
	ctx.r18.s64 = -2113929216;
	// lis r17,-32256
	ctx.r17.s64 = -2113929216;
	// addi r5,r5,-22684
	ctx.r5.s64 = ctx.r5.s64 + -22684;
	// addi r9,r9,-22700
	ctx.r9.s64 = ctx.r9.s64 + -22700;
	// addi r8,r8,-22716
	ctx.r8.s64 = ctx.r8.s64 + -22716;
	// addi r6,r6,31200
	ctx.r6.s64 = ctx.r6.s64 + 31200;
	// addi r31,r31,31208
	ctx.r31.s64 = ctx.r31.s64 + 31208;
	// addi r30,r30,31216
	ctx.r30.s64 = ctx.r30.s64 + 31216;
	// addi r29,r29,31264
	ctx.r29.s64 = ctx.r29.s64 + 31264;
	// addi r28,r28,31272
	ctx.r28.s64 = ctx.r28.s64 + 31272;
	// addi r27,r27,31280
	ctx.r27.s64 = ctx.r27.s64 + 31280;
	// addi r26,r26,31288
	ctx.r26.s64 = ctx.r26.s64 + 31288;
	// addi r25,r25,31296
	ctx.r25.s64 = ctx.r25.s64 + 31296;
	// addi r24,r24,31304
	ctx.r24.s64 = ctx.r24.s64 + 31304;
	// addi r23,r23,31312
	ctx.r23.s64 = ctx.r23.s64 + 31312;
	// addi r22,r22,31320
	ctx.r22.s64 = ctx.r22.s64 + 31320;
	// addi r21,r21,31332
	ctx.r21.s64 = ctx.r21.s64 + 31332;
	// addi r20,r20,31344
	ctx.r20.s64 = ctx.r20.s64 + 31344;
	// lis r16,-32178
	ctx.r16.s64 = -2108817408;
	// addi r11,r11,31356
	ctx.r11.s64 = ctx.r11.s64 + 31356;
	// lwz r14,96(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,31368
	ctx.r10.s64 = ctx.r10.s64 + 31368;
	// lwz r16,-792(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -792);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r7,r7,31380
	ctx.r7.s64 = ctx.r7.s64 + 31380;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r4,31392
	ctx.r4.s64 = ctx.r4.s64 + 31392;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r3,31404
	ctx.r3.s64 = ctx.r3.s64 + 31404;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r19,r19,31416
	ctx.r19.s64 = ctx.r19.s64 + 31416;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r18,r18,31428
	ctx.r18.s64 = ctx.r18.s64 + 31428;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// lis r16,-32256
	ctx.r16.s64 = -2113929216;
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// stw r22,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r22.u32);
	// stw r21,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r21.u32);
	// stw r20,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r20.u32);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// addi r5,r17,31440
	ctx.r5.s64 = ctx.r17.s64 + 31440;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// lis r17,-32256
	ctx.r17.s64 = -2113929216;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r22,96(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r9,31464
	ctx.r9.s64 = ctx.r9.s64 + 31464;
	// stw r15,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r15.u32);
	// lis r15,-32256
	ctx.r15.s64 = -2113929216;
	// lwz r21,92(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r8,31488
	ctx.r8.s64 = ctx.r8.s64 + 31488;
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r14.u32);
	// lis r14,-32256
	ctx.r14.s64 = -2113929216;
	// lwz r20,88(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r6,31500
	ctx.r6.s64 = ctx.r6.s64 + 31500;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,31512
	ctx.r31.s64 = ctx.r31.s64 + 31512;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// addi r29,r17,31452
	ctx.r29.s64 = ctx.r17.s64 + 31452;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// addi r27,r30,31524
	ctx.r27.s64 = ctx.r30.s64 + 31524;
	// stw r4,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r4,136(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 136);
	// lis r25,-32250
	ctx.r25.s64 = -2113536000;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// addi r28,r16,31476
	ctx.r28.s64 = ctx.r16.s64 + 31476;
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// addi r26,r15,31536
	ctx.r26.s64 = ctx.r15.s64 + 31536;
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
	// stw r23,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r23.u32);
	// lis r23,-32250
	ctx.r23.s64 = -2113536000;
	// stw r22,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r22.u32);
	// lis r22,-32250
	ctx.r22.s64 = -2113536000;
	// stw r21,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r21.u32);
	// lis r21,-32250
	ctx.r21.s64 = -2113536000;
	// stw r20,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r20.u32);
	// lis r20,-32250
	ctx.r20.s64 = -2113536000;
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// addi r17,r14,31548
	ctx.r17.s64 = ctx.r14.s64 + 31548;
	// addi r3,r11,31560
	ctx.r3.s64 = ctx.r11.s64 + 31560;
	// stw r19,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r19.u32);
	// addi r10,r10,31572
	ctx.r10.s64 = ctx.r10.s64 + 31572;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// addi r4,r24,31188
	ctx.r4.s64 = ctx.r24.s64 + 31188;
	// stw r5,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r5.u32);
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// stw r29,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// addi r5,r30,31592
	ctx.r5.s64 = ctx.r30.s64 + 31592;
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// addi r7,r7,31580
	ctx.r7.s64 = ctx.r7.s64 + 31580;
	// stw r8,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r8.u32);
	// addi r29,r23,-22740
	ctx.r29.s64 = ctx.r23.s64 + -22740;
	// stw r6,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r6.u32);
	// addi r9,r22,-22752
	ctx.r9.s64 = ctx.r22.s64 + -22752;
	// addi r24,r21,-22764
	ctx.r24.s64 = ctx.r21.s64 + -22764;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r8,r20,-22776
	ctx.r8.s64 = ctx.r20.s64 + -22776;
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// addi r6,r25,-22728
	ctx.r6.s64 = ctx.r25.s64 + -22728;
	// stw r26,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r26.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r18,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r18.u32);
	// li r31,53
	ctx.r31.s64 = 53;
	// stw r17,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r17.u32);
	// addi r27,r11,31164
	ctx.r27.s64 = ctx.r11.s64 + 31164;
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// stw r7,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// stw r5,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r5.u32);
	// stw r4,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// stw r9,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r24,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r24.u32);
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// stw r6,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r6.u32);
loc_823C9820:
	// lwzu r29,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82110430
	ctx.lr = 0x823C9834;
	sub_82110430(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8209eda0
	ctx.lr = 0x823C9844;
	sub_8209EDA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x821d25f8
	ctx.lr = 0x823C9850;
	sub_821D25F8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,336
	ctx.r30.s64 = ctx.r30.s64 + 336;
	// bne 0x823c9820
	if (!ctx.cr0.eq) goto loc_823C9820;
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823C9868"))) PPC_WEAK_FUNC(sub_823C9868);
PPC_FUNC_IMPL(__imp__sub_823C9868) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82244cd8
	ctx.lr = 0x823C9888;
	sub_82244CD8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-22632
	ctx.r9.s64 = ctx.r11.s64 + -22632;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x822443b0
	ctx.lr = 0x823C98A4;
	sub_822443B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C98C8"))) PPC_WEAK_FUNC(sub_823C98C8);
PPC_FUNC_IMPL(__imp__sub_823C98C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// bl 0x8223a9f8
	ctx.lr = 0x823C98E8;
	sub_8223A9F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223b590
	ctx.lr = 0x823C98F0;
	sub_8223B590(ctx, base);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bl 0x8223a9f8
	ctx.lr = 0x823C98F8;
	sub_8223A9F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223b5d8
	ctx.lr = 0x823C9900;
	sub_8223B5D8(ctx, base);
	// bl 0x8223a9f8
	ctx.lr = 0x823C9904;
	sub_8223A9F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223c3b8
	ctx.lr = 0x823C990C;
	sub_8223C3B8(ctx, base);
	// bl 0x8223a9f8
	ctx.lr = 0x823C9910;
	sub_8223A9F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223c388
	ctx.lr = 0x823C9918;
	sub_8223C388(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9930"))) PPC_WEAK_FUNC(sub_823C9930);
PPC_FUNC_IMPL(__imp__sub_823C9930) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x823C9954;
	sub_82185740(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,-22628(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22628);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r8,-22280
	ctx.r6.s64 = ctx.r8.s64 + -22280;
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
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
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// bl 0x82183850
	ctx.lr = 0x823C9A1C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823c9a34
	if (ctx.cr6.eq) goto loc_823C9A34;
	// li r3,228
	ctx.r3.s64 = 228;
	// bl 0x82183448
	ctx.lr = 0x823C9A30;
	sub_82183448(ctx, base);
	// b 0x823c9a3c
	goto loc_823C9A3C;
loc_823C9A34:
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x821845a0
	ctx.lr = 0x823C9A3C;
	sub_821845A0(ctx, base);
loc_823C9A3C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c9a54
	if (ctx.cr6.eq) goto loc_823C9A54;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x823c58b0
	ctx.lr = 0x823C9A50;
	sub_823C58B0(ctx, base);
	// b 0x823c9a58
	goto loc_823C9A58;
loc_823C9A54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823C9A58:
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C9A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// andc r7,r9,r9
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r9.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9AA0"))) PPC_WEAK_FUNC(sub_823C9AA0);
PPC_FUNC_IMPL(__imp__sub_823C9AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-22280
	ctx.r10.s64 = ctx.r11.s64 + -22280;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823c9ae8
	if (ctx.cr6.eq) goto loc_823C9AE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C9AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823C9AE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x821857f0
	ctx.lr = 0x823C9AF8;
	sub_821857F0(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c9b14
	if (ctx.cr6.eq) goto loc_823C9B14;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823C9B10;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823C9B14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9B2C"))) PPC_WEAK_FUNC(sub_823C9B2C);
PPC_FUNC_IMPL(__imp__sub_823C9B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C9B30"))) PPC_WEAK_FUNC(sub_823C9B30);
PPC_FUNC_IMPL(__imp__sub_823C9B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823C9B38;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c9b70
	if (!ctx.cr6.eq) goto loc_823C9B70;
	// bl 0x82244c90
	ctx.lr = 0x823C9B50;
	sub_82244C90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9c1c
	if (ctx.cr6.eq) goto loc_823C9C1C;
	// bl 0x82244cb0
	ctx.lr = 0x823C9B5C;
	sub_82244CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 900, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823C9B70:
	// bl 0x82244cb0
	ctx.lr = 0x823C9B74;
	sub_82244CB0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c9bbc
	if (ctx.cr6.eq) goto loc_823C9BBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e9278
	ctx.lr = 0x823C9B8C;
	sub_823E9278(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9bbc
	if (ctx.cr6.eq) goto loc_823C9BBC;
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c9868
	ctx.lr = 0x823C9BA4;
	sub_823C9868(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// beq cr6,0x823c9bbc
	if (ctx.cr6.eq) goto loc_823C9BBC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_823C9BBC:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c9bf4
	if (ctx.cr6.eq) goto loc_823C9BF4;
	// bl 0x8223a8a8
	ctx.lr = 0x823C9BCC;
	sub_8223A8A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9c1c
	if (ctx.cr6.eq) goto loc_823C9C1C;
	// bl 0x8223ad48
	ctx.lr = 0x823C9BD8;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9c1c
	if (ctx.cr6.eq) goto loc_823C9C1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e9308
	ctx.lr = 0x823C9BEC;
	sub_823E9308(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823C9BF4:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c9c1c
	if (!ctx.cr6.eq) goto loc_823C9C1C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c9c1c
	if (ctx.cr6.eq) goto loc_823C9C1C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bgt 0x823c9c1c
	if (ctx.cr0.gt) goto loc_823C9C1C;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_823C9C1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823C9C24"))) PPC_WEAK_FUNC(sub_823C9C24);
PPC_FUNC_IMPL(__imp__sub_823C9C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C9C28"))) PPC_WEAK_FUNC(sub_823C9C28);
PPC_FUNC_IMPL(__imp__sub_823C9C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-22272
	ctx.r10.s64 = ctx.r11.s64 + -22272;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823c9c6c
	if (ctx.cr6.eq) goto loc_823C9C6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C9C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823C9C6C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c9c94
	if (ctx.cr6.eq) goto loc_823C9C94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C9C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823C9C94:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwsync 
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-4752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4752, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9CC0"))) PPC_WEAK_FUNC(sub_823C9CC0);
PPC_FUNC_IMPL(__imp__sub_823C9CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-4752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c9cfc
	if (ctx.cr6.eq) goto loc_823C9CFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C9CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4752(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4752, ctx.r11.u32);
loc_823C9CFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9D10"))) PPC_WEAK_FUNC(sub_823C9D10);
PPC_FUNC_IMPL(__imp__sub_823C9D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,138
	ctx.r11.s64 = ctx.r11.s64 + 138;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x823ccd30
	ctx.lr = 0x823C9D40;
	sub_823CCD30(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9D5C"))) PPC_WEAK_FUNC(sub_823C9D5C);
PPC_FUNC_IMPL(__imp__sub_823C9D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C9D60"))) PPC_WEAK_FUNC(sub_823C9D60);
PPC_FUNC_IMPL(__imp__sub_823C9D60) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9D94"))) PPC_WEAK_FUNC(sub_823C9D94);
PPC_FUNC_IMPL(__imp__sub_823C9D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C9D98"))) PPC_WEAK_FUNC(sub_823C9D98);
PPC_FUNC_IMPL(__imp__sub_823C9D98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9DCC"))) PPC_WEAK_FUNC(sub_823C9DCC);
PPC_FUNC_IMPL(__imp__sub_823C9DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C9DD0"))) PPC_WEAK_FUNC(sub_823C9DD0);
PPC_FUNC_IMPL(__imp__sub_823C9DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// bl 0x823ccd68
	ctx.lr = 0x823C9E1C;
	sub_823CCD68(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,11084(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11084);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lfs f12,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x823ccad0
	ctx.lr = 0x823C9E68;
	sub_823CCAD0(ctx, base);
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

__attribute__((alias("__imp__sub_823C9E7C"))) PPC_WEAK_FUNC(sub_823C9E7C);
PPC_FUNC_IMPL(__imp__sub_823C9E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C9E80"))) PPC_WEAK_FUNC(sub_823C9E80);
PPC_FUNC_IMPL(__imp__sub_823C9E80) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C9EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c9ec4
	if (!ctx.cr6.eq) goto loc_823C9EC4;
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
loc_823C9EC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823ccb18
	ctx.lr = 0x823C9ED0;
	sub_823CCB18(ctx, base);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9F04"))) PPC_WEAK_FUNC(sub_823C9F04);
PPC_FUNC_IMPL(__imp__sub_823C9F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C9F08"))) PPC_WEAK_FUNC(sub_823C9F08);
PPC_FUNC_IMPL(__imp__sub_823C9F08) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C9F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9f58
	if (ctx.cr6.eq) goto loc_823C9F58;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823ccb18
	ctx.lr = 0x823C9F40;
	sub_823CCB18(ctx, base);
	// lfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823C9F58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9F74"))) PPC_WEAK_FUNC(sub_823C9F74);
PPC_FUNC_IMPL(__imp__sub_823C9F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C9F78"))) PPC_WEAK_FUNC(sub_823C9F78);
PPC_FUNC_IMPL(__imp__sub_823C9F78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c9f8c
	if (ctx.cr6.eq) goto loc_823C9F8C;
loc_823C9F84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C9F8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
loc_823C9F94:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x823c9f84
	if (!ctx.cr6.eq) goto loc_823C9F84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x823c9f94
	if (ctx.cr6.lt) goto loc_823C9F94;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
loc_823C9FB8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x823c9f84
	if (!ctx.cr6.eq) goto loc_823C9F84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x823c9fb8
	if (ctx.cr6.lt) goto loc_823C9FB8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C9FEC"))) PPC_WEAK_FUNC(sub_823C9FEC);
PPC_FUNC_IMPL(__imp__sub_823C9FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C9FF0"))) PPC_WEAK_FUNC(sub_823C9FF0);
PPC_FUNC_IMPL(__imp__sub_823C9FF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ca004
	if (!ctx.cr6.eq) goto loc_823CA004;
loc_823C9FFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823CA004:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
loc_823CA00C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x823c9ffc
	if (ctx.cr6.eq) goto loc_823C9FFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x823ca00c
	if (ctx.cr6.lt) goto loc_823CA00C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
loc_823CA030:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x823c9ffc
	if (!ctx.cr6.eq) goto loc_823C9FFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x823ca030
	if (ctx.cr6.lt) goto loc_823CA030;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CA064"))) PPC_WEAK_FUNC(sub_823CA064);
PPC_FUNC_IMPL(__imp__sub_823CA064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CA068"))) PPC_WEAK_FUNC(sub_823CA068);
PPC_FUNC_IMPL(__imp__sub_823CA068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ca07c
	if (!ctx.cr6.eq) goto loc_823CA07C;
loc_823CA074:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823CA07C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
loc_823CA084:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x823ca074
	if (!ctx.cr6.eq) goto loc_823CA074;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x823ca084
	if (ctx.cr6.lt) goto loc_823CA084;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
loc_823CA0A8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x823ca074
	if (ctx.cr6.eq) goto loc_823CA074;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x823ca0a8
	if (ctx.cr6.lt) goto loc_823CA0A8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CA0DC"))) PPC_WEAK_FUNC(sub_823CA0DC);
PPC_FUNC_IMPL(__imp__sub_823CA0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CA0E0"))) PPC_WEAK_FUNC(sub_823CA0E0);
PPC_FUNC_IMPL(__imp__sub_823CA0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ca0f4
	if (!ctx.cr6.eq) goto loc_823CA0F4;
loc_823CA0EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823CA0F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
loc_823CA0FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x823ca0ec
	if (!ctx.cr6.eq) goto loc_823CA0EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x823ca0fc
	if (ctx.cr6.lt) goto loc_823CA0FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
loc_823CA120:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x823ca0ec
	if (ctx.cr6.eq) goto loc_823CA0EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x823ca120
	if (ctx.cr6.lt) goto loc_823CA120;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
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

__attribute__((alias("__imp__sub_823CA154"))) PPC_WEAK_FUNC(sub_823CA154);
PPC_FUNC_IMPL(__imp__sub_823CA154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CA158"))) PPC_WEAK_FUNC(sub_823CA158);
PPC_FUNC_IMPL(__imp__sub_823CA158) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x823ca2c8
	sub_823CA2C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CA160"))) PPC_WEAK_FUNC(sub_823CA160);
PPC_FUNC_IMPL(__imp__sub_823CA160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c9c28
	ctx.lr = 0x823CA180;
	sub_823C9C28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ca19c
	if (ctx.cr6.eq) goto loc_823CA19C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823CA198;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CA19C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CA1B4"))) PPC_WEAK_FUNC(sub_823CA1B4);
PPC_FUNC_IMPL(__imp__sub_823CA1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CA1B8"))) PPC_WEAK_FUNC(sub_823CA1B8);
PPC_FUNC_IMPL(__imp__sub_823CA1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ca1d0
	if (!ctx.cr6.eq) goto loc_823CA1D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823CA1D0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bgt cr6,0x823ca1e8
	if (ctx.cr6.gt) goto loc_823CA1E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823CA1E8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// eqv r7,r9,r11
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CA20C"))) PPC_WEAK_FUNC(sub_823CA20C);
PPC_FUNC_IMPL(__imp__sub_823CA20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CA210"))) PPC_WEAK_FUNC(sub_823CA210);
PPC_FUNC_IMPL(__imp__sub_823CA210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x823CA23C;
	sub_821859A0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82185740
	ctx.lr = 0x823CA24C;
	sub_82185740(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r9,r11,-22260
	ctx.r9.s64 = ctx.r11.s64 + -22260;
	// addi r8,r10,-22268
	ctx.r8.s64 = ctx.r10.s64 + -22268;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c34c0
	ctx.lr = 0x823CA284;
	sub_823C34C0(ctx, base);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-792(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -792);
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// lwz r11,-792(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -792);
	// lwz r4,136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// bl 0x823c3410
	ctx.lr = 0x823CA2A8;
	sub_823C3410(ctx, base);
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

__attribute__((alias("__imp__sub_823CA2C4"))) PPC_WEAK_FUNC(sub_823CA2C4);
PPC_FUNC_IMPL(__imp__sub_823CA2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CA2C8"))) PPC_WEAK_FUNC(sub_823CA2C8);
PPC_FUNC_IMPL(__imp__sub_823CA2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823CA2D0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-22260
	ctx.r9.s64 = ctx.r11.s64 + -22260;
	// addi r8,r10,-22268
	ctx.r8.s64 = ctx.r10.s64 + -22268;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// bl 0x823c30b8
	ctx.lr = 0x823CA300;
	sub_823C30B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x823CA308;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185a50
	ctx.lr = 0x823CA310;
	sub_82185A50(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823ca32c
	if (ctx.cr6.eq) goto loc_823CA32C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823CA328;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CA32C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823CA334"))) PPC_WEAK_FUNC(sub_823CA334);
PPC_FUNC_IMPL(__imp__sub_823CA334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CA338"))) PPC_WEAK_FUNC(sub_823CA338);
PPC_FUNC_IMPL(__imp__sub_823CA338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// ble cr6,0x823ca37c
	if (!ctx.cr6.gt) goto loc_823CA37C;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x823c3160
	ctx.lr = 0x823CA360;
	sub_823C3160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ca37c
	if (ctx.cr6.eq) goto loc_823CA37C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_823CA37C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CA390"))) PPC_WEAK_FUNC(sub_823CA390);
PPC_FUNC_IMPL(__imp__sub_823CA390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823CA398;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823ca45c
	if (ctx.cr6.eq) goto loc_823CA45C;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x823CA3C4;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x823CA3D4;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x823CA3E8;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823CA3F4;
	sub_821AD498(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ca444
	if (ctx.cr6.eq) goto loc_823CA444;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,138
	ctx.r4.s64 = 138;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,20004(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20004, temp.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x8210a9b0
	ctx.lr = 0x823CA444;
	sub_8210A9B0(ctx, base);
loc_823CA444:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x823CA450;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823CA45C;
	sub_821AD498(ctx, base);
loc_823CA45C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823CA464"))) PPC_WEAK_FUNC(sub_823CA464);
PPC_FUNC_IMPL(__imp__sub_823CA464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CA468"))) PPC_WEAK_FUNC(sub_823CA468);
PPC_FUNC_IMPL(__imp__sub_823CA468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823CA470;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823ca5bc
	if (ctx.cr6.eq) goto loc_823CA5BC;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x823CA49C;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x823CA4AC;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x823CA4C0;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823CA4CC;
	sub_821AD498(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ca5a4
	if (ctx.cr6.eq) goto loc_823CA5A4;
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ca4f0
	if (!ctx.cr6.eq) goto loc_823CA4F0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CA4F0:
	// bl 0x8218b408
	ctx.lr = 0x823CA4F4;
	sub_8218B408(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// li r6,0
	ctx.r6.s64 = 0;
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// li r5,1
	ctx.r5.s64 = 1;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// li r4,139
	ctx.r4.s64 = 139;
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// lfs f0,11300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,20136(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20136, temp.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f13,20140(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20140, temp.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f12,20144(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20144, temp.u32);
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stfs f11,20148(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20148, temp.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x8210a9b0
	ctx.lr = 0x823CA5A4;
	sub_8210A9B0(ctx, base);
loc_823CA5A4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x823CA5B0;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823CA5BC;
	sub_821AD498(ctx, base);
loc_823CA5BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823CA5C4"))) PPC_WEAK_FUNC(sub_823CA5C4);
PPC_FUNC_IMPL(__imp__sub_823CA5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CA5C8"))) PPC_WEAK_FUNC(sub_823CA5C8);
PPC_FUNC_IMPL(__imp__sub_823CA5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r4.u32);
	// addi r11,r4,138
	ctx.r11.s64 = ctx.r4.s64 + 138;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823CA600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// addi r7,r11,138
	ctx.r7.s64 = ctx.r11.s64 + 138;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x823ccd30
	ctx.lr = 0x823CA61C;
	sub_823CCD30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CA638"))) PPC_WEAK_FUNC(sub_823CA638);
PPC_FUNC_IMPL(__imp__sub_823CA638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r4.u32);
	// addi r11,r4,138
	ctx.r11.s64 = ctx.r4.s64 + 138;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x823ccd30
	ctx.lr = 0x823CA668;
	sub_823CCD30(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CA684"))) PPC_WEAK_FUNC(sub_823CA684);
PPC_FUNC_IMPL(__imp__sub_823CA684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CA688"))) PPC_WEAK_FUNC(sub_823CA688);
PPC_FUNC_IMPL(__imp__sub_823CA688) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-22252
	ctx.r8.s64 = ctx.r10.s64 + -22252;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CA6C8"))) PPC_WEAK_FUNC(sub_823CA6C8);
PPC_FUNC_IMPL(__imp__sub_823CA6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r8,r9,-22244
	ctx.r8.s64 = ctx.r9.s64 + -22244;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// bl 0x823cce10
	ctx.lr = 0x823CA720;
	sub_823CCE10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9dd0
	ctx.lr = 0x823CA728;
	sub_823C9DD0(ctx, base);
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

__attribute__((alias("__imp__sub_823CA740"))) PPC_WEAK_FUNC(sub_823CA740);
PPC_FUNC_IMPL(__imp__sub_823CA740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823CA748;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r30,r10,1696
	ctx.r30.s64 = ctx.r10.s64 + 1696;
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8223aa28
	ctx.lr = 0x823CA778;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ca7fc
	if (ctx.cr6.eq) goto loc_823CA7FC;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823CA794:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823ca794
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CA794;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c8218
	ctx.lr = 0x823CA7A8;
	sub_820C8218(ctx, base);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stwx r7,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u32);
	// beq cr6,0x823ca7dc
	if (ctx.cr6.eq) goto loc_823CA7DC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c8d48
	ctx.lr = 0x823CA7DC;
	sub_820C8D48(ctx, base);
loc_823CA7DC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823ca7fc
	if (ctx.cr6.eq) goto loc_823CA7FC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca128
	ctx.lr = 0x823CA7FC;
	sub_820CA128(ctx, base);
loc_823CA7FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823CA804"))) PPC_WEAK_FUNC(sub_823CA804);
PPC_FUNC_IMPL(__imp__sub_823CA804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CA808"))) PPC_WEAK_FUNC(sub_823CA808);
PPC_FUNC_IMPL(__imp__sub_823CA808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823CA810;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-2528(r1)
	ea = -2528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823CA820;
	sub_82163DF0(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r11,-4708
	ctx.r29.s64 = ctx.r11.s64 + -4708;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// bl 0x82084038
	ctx.lr = 0x823CA844;
	sub_82084038(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,4056(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4056, ctx.r9.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r30,4076(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4076, ctx.r30.u32);
	// lwz r5,536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823ca8dc
	if (!ctx.cr6.eq) goto loc_823CA8DC;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,1220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1220, ctx.r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,1732(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1732, ctx.r11.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,2244(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2244, ctx.r11.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,2756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2756, ctx.r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,1476(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1476, ctx.r11.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,1988(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1988, ctx.r11.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,2500(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2500, ctx.r11.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,3012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3012, ctx.r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,3780(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3780, ctx.r11.u32);
loc_823CA8DC:
	// bl 0x8223ad48
	ctx.lr = 0x823CA8E0;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cada4
	if (ctx.cr6.eq) goto loc_823CADA4;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cada4
	if (ctx.cr6.eq) goto loc_823CADA4;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// addi r11,r11,138
	ctx.r11.s64 = ctx.r11.s64 + 138;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823CA918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823CA92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cntlzw r4,r3
	ctx.r4.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r28,r4,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CA948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820c7290
	ctx.lr = 0x823CA954;
	sub_820C7290(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823CA974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x820c7290
	ctx.lr = 0x823CA97C;
	sub_820C7290(ctx, base);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,1264
	ctx.r5.s64 = ctx.r1.s64 + 1264;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823CA99C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,1200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,1180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f10,1192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1192);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lfs f9,2304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2304);
	ctx.f9.f64 = double(temp.f32);
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// lfs f7,2296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2296);
	ctx.f7.f64 = double(temp.f32);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r17,108(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// stfd f8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfd f6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f6.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfd f5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f5.u64);
	// lwz r16,148(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lfs f2,1176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1176);
	ctx.f2.f64 = double(temp.f32);
	// fctiwz f0,f2
	ctx.f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lfs f4,2280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2280);
	ctx.f4.f64 = double(temp.f32);
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f1,2284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2284);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f3.u64);
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r20,124(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// bl 0x820c9e18
	ctx.lr = 0x823CAA44;
	sub_820C9E18(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x820c9e18
	ctx.lr = 0x823CAA50;
	sub_820C9E18(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x823caa78
	if (ctx.cr6.eq) goto loc_823CAA78;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r22,r1,136
	ctx.r22.s64 = ctx.r1.s64 + 136;
	// addi r18,r1,104
	ctx.r18.s64 = ctx.r1.s64 + 104;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// b 0x823caa90
	goto loc_823CAA90;
loc_823CAA78:
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r26,r1,152
	ctx.r26.s64 = ctx.r1.s64 + 152;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r22,r1,144
	ctx.r22.s64 = ctx.r1.s64 + 144;
	// addi r18,r1,96
	ctx.r18.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
loc_823CAA90:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8218b408
	ctx.lr = 0x823CAA9C;
	sub_8218B408(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8218b408
	ctx.lr = 0x823CAAA8;
	sub_8218B408(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8218b408
	ctx.lr = 0x823CAAB4;
	sub_8218B408(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8218b408
	ctx.lr = 0x823CAAC0;
	sub_8218B408(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r26,0(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r9,r29,-40
	ctx.r9.s64 = ctx.r29.s64 + -40;
	// addi r24,r11,26232
	ctx.r24.s64 = ctx.r11.s64 + 26232;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r30,1220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1220, ctx.r30.u32);
	// bl 0x8218a5f0
	ctx.lr = 0x823CAAF4;
	sub_8218A5F0(ctx, base);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r7,r29,-40
	ctx.r7.s64 = ctx.r29.s64 + -40;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r7,1752(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1752, ctx.r7.u32);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r30,1772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1772, ctx.r30.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,1732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1732, ctx.r30.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f31,1748(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1748, temp.u32);
	// beq cr6,0x823cab48
	if (ctx.cr6.eq) goto loc_823CAB48;
	// cmpw cr6,r23,r25
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x823cab40
	if (!ctx.cr6.gt) goto loc_823CAB40;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// cmpw cr6,r23,r25
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r25.s32, ctx.xer);
loc_823CAB40:
	// bge cr6,0x823cab48
	if (!ctx.cr6.lt) goto loc_823CAB48;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_823CAB48:
	// lwz r25,0(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x823cab58
	if (!ctx.cr6.gt) goto loc_823CAB58;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_823CAB58:
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8212ef08
	ctx.lr = 0x823CAB64;
	sub_8212EF08(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r29,-24
	ctx.r3.s64 = ctx.r29.s64 + -24;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,2244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2244, ctx.r30.u32);
	// bl 0x8218a5f0
	ctx.lr = 0x823CAB84;
	sub_8218A5F0(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r29,-24
	ctx.r9.s64 = ctx.r29.s64 + -24;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,2776(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2776, ctx.r9.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r30,2796(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2796, ctx.r30.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r30,2756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2756, ctx.r30.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,2772(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 2772, temp.u32);
	// beq cr6,0x823cabd8
	if (ctx.cr6.eq) goto loc_823CABD8;
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r21.s32, ctx.xer);
	// ble cr6,0x823cabd0
	if (!ctx.cr6.gt) goto loc_823CABD0;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r21.s32, ctx.xer);
loc_823CABD0:
	// bge cr6,0x823cabd8
	if (!ctx.cr6.lt) goto loc_823CABD8;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_823CABD8:
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8212ef08
	ctx.lr = 0x823CABE4;
	sub_8212EF08(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r26,0(r18)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r29,-32
	ctx.r3.s64 = ctx.r29.s64 + -32;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,1476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1476, ctx.r30.u32);
	// bl 0x8218a5f0
	ctx.lr = 0x823CAC08;
	sub_8218A5F0(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r29,-32
	ctx.r9.s64 = ctx.r29.s64 + -32;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,2008(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2008, ctx.r9.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r30,2028(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2028, ctx.r30.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r30,1988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1988, ctx.r30.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,2004(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 2004, temp.u32);
	// beq cr6,0x823cac5c
	if (ctx.cr6.eq) goto loc_823CAC5C;
	// cmpw cr6,r16,r17
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x823cac54
	if (!ctx.cr6.gt) goto loc_823CAC54;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// cmpw cr6,r16,r17
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r17.s32, ctx.xer);
loc_823CAC54:
	// bge cr6,0x823cac5c
	if (!ctx.cr6.lt) goto loc_823CAC5C;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_823CAC5C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x823cac70
	if (!ctx.cr6.gt) goto loc_823CAC70;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_823CAC70:
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8212ef08
	ctx.lr = 0x823CAC7C;
	sub_8212EF08(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,13720
	ctx.r4.s64 = 13720;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r30,2500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2500, ctx.r30.u32);
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823CACA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r6,-22216
	ctx.r5.s64 = ctx.r6.s64 + -22216;
	// addi r3,r29,-16
	ctx.r3.s64 = ctx.r29.s64 + -16;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8218a5f0
	ctx.lr = 0x823CACC0;
	sub_8218A5F0(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,3032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3032, ctx.r4.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,3052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3052, ctx.r30.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r30,3012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3012, ctx.r30.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f31,3028(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 3028, temp.u32);
	// beq cr6,0x823cad1c
	if (ctx.cr6.eq) goto loc_823CAD1C;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823cad14
	if (!ctx.cr6.gt) goto loc_823CAD14;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
loc_823CAD14:
	// bge cr6,0x823cad1c
	if (!ctx.cr6.lt) goto loc_823CAD1C;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_823CAD1C:
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8212ef08
	ctx.lr = 0x823CAD28;
	sub_8212EF08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8218a5f0
	ctx.lr = 0x823CAD40;
	sub_8218A5F0(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r29,3800(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3800, ctx.r29.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r30,3820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3820, ctx.r30.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r30,3780(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3780, ctx.r30.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f31,3796(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3796, temp.u32);
	// beq cr6,0x823cad98
	if (ctx.cr6.eq) goto loc_823CAD98;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823cad90
	if (!ctx.cr6.gt) goto loc_823CAD90;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
loc_823CAD90:
	// bge cr6,0x823cad98
	if (!ctx.cr6.lt) goto loc_823CAD98;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_823CAD98:
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8212ef08
	ctx.lr = 0x823CADA4;
	sub_8212EF08(ctx, base);
loc_823CADA4:
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CADB0"))) PPC_WEAK_FUNC(sub_823CADB0);
PPC_FUNC_IMPL(__imp__sub_823CADB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823CADB8;
	sub_82248750(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4768(r1)
	ea = -4768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8223ad48
	ctx.lr = 0x823CADD0;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cb9d4
	if (ctx.cr6.eq) goto loc_823CB9D4;
	// lwz r11,536(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cb9d4
	if (ctx.cr6.eq) goto loc_823CB9D4;
	// lwz r11,548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 548);
	// addi r11,r11,138
	ctx.r11.s64 = ctx.r11.s64 + 138;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r18,r10,r29
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823CAE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// rlwinm r19,r6,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r5,20(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823CAE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8218b408
	ctx.lr = 0x823CAE30;
	sub_8218B408(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8218b408
	ctx.lr = 0x823CAE3C;
	sub_8218B408(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x8218b408
	ctx.lr = 0x823CAE48;
	sub_8218B408(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820c7290
	ctx.lr = 0x823CAE54;
	sub_820C7290(ctx, base);
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x820c7290
	ctx.lr = 0x823CAE5C;
	sub_820C7290(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,1280
	ctx.r5.s64 = ctx.r1.s64 + 1280;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CAE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// bl 0x820c7290
	ctx.lr = 0x823CAE84;
	sub_820C7290(ctx, base);
	// addi r3,r1,3488
	ctx.r3.s64 = ctx.r1.s64 + 3488;
	// bl 0x820c7290
	ctx.lr = 0x823CAE8C;
	sub_820C7290(ctx, base);
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,3488
	ctx.r5.s64 = ctx.r1.s64 + 3488;
	// addi r4,r1,2384
	ctx.r4.s64 = ctx.r1.s64 + 2384;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823CAEAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823caedc
	if (ctx.cr6.eq) goto loc_823CAEDC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823caedc
	if (ctx.cr6.eq) goto loc_823CAEDC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823caedc
	if (ctx.cr6.eq) goto loc_823CAEDC;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,13685
	ctx.r11.s64 = 13685;
	// addi r25,r10,2512
	ctx.r25.s64 = ctx.r10.s64 + 2512;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x823caeec
	goto loc_823CAEEC;
loc_823CAEDC:
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,13686
	ctx.r11.s64 = 13686;
	// addi r25,r10,2512
	ctx.r25.s64 = ctx.r10.s64 + 2512;
	// li r10,5
	ctx.r10.s64 = 5;
loc_823CAEEC:
	// stw r10,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r11.u32);
	// li r24,6
	ctx.r24.s64 = 6;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r25,24
	ctx.r31.s64 = ctx.r25.s64 + 24;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lfs f31,11300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r17,r11,26232
	ctx.r17.s64 = ctx.r11.s64 + 26232;
loc_823CAF14:
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823caf34
	if (ctx.cr6.lt) goto loc_823CAF34;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r20.u32);
loc_823CAF34:
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823caf54
	if (ctx.cr6.lt) goto loc_823CAF54;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r20.u32);
loc_823CAF54:
	// lwz r5,-16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82106f58
	ctx.lr = 0x823CAF64;
	sub_82106F58(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823caf84
	if (ctx.cr6.lt) goto loc_823CAF84;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r20.u32);
loc_823CAF84:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cafdc
	if (ctx.cr6.eq) goto loc_823CAFDC;
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mulli r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 * 88;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820c6d40
	ctx.lr = 0x823CAFA8;
	sub_820C6D40(ctx, base);
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r11,r1,2384
	ctx.r11.s64 = ctx.r1.s64 + 2384;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// mulli r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 * 88;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820c6d40
	ctx.lr = 0x823CAFCC;
	sub_820C6D40(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x823cb008
	goto loc_823CB008;
loc_823CAFDC:
	// addi r3,r1,2248
	ctx.r3.s64 = ctx.r1.s64 + 2248;
	// bl 0x820c6d40
	ctx.lr = 0x823CAFE4;
	sub_820C6D40(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// addi r3,r1,4456
	ctx.r3.s64 = ctx.r1.s64 + 4456;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820c6d40
	ctx.lr = 0x823CAFFC;
	sub_820C6D40(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823CB008:
	// subfc r10,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r9,r11,r30
	// eqv r8,r30,r11
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// subfc r5,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// clrlwi r28,r6,31
	ctx.r28.u64 = ctx.r6.u32 & 0x1;
	// rlwinm r4,r8,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r27,r3,31
	ctx.r27.u64 = ctx.r3.u32 & 0x1;
	// bne cr6,0x823cb03c
	if (!ctx.cr6.eq) goto loc_823CB03C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823CB03C:
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823CB054;
	sub_8218A5F0(ctx, base);
	// lwz r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r7,-12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r30.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r20,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r20.u32);
	// beq cr6,0x823cb09c
	if (ctx.cr6.eq) goto loc_823CB09C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x823cb090
	if (ctx.cr6.eq) goto loc_823CB090;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_823CB090:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823cb09c
	if (ctx.cr6.eq) goto loc_823CB09C;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_823CB09C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// std r7,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfd f10,128(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,212(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x823caf14
	if (!ctx.cr0.eq) goto loc_823CAF14;
	// lwz r11,192(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 192);
	// li r21,1
	ctx.r21.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb168
	if (ctx.cr6.lt) goto loc_823CB168;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB168:
	// lwz r11,196(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb188
	if (ctx.cr6.lt) goto loc_823CB188;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB188:
	// lwz r11,204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb1a8
	if (ctx.cr6.lt) goto loc_823CB1A8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB1A8:
	// lwz r11,224(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb1c8
	if (ctx.cr6.lt) goto loc_823CB1C8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB1C8:
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb1e8
	if (ctx.cr6.lt) goto loc_823CB1E8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB1E8:
	// lwz r11,232(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb208
	if (ctx.cr6.lt) goto loc_823CB208;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB208:
	// lwz r11,236(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb228
	if (ctx.cr6.lt) goto loc_823CB228;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB228:
	// lwz r11,244(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb248
	if (ctx.cr6.lt) goto loc_823CB248;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB248:
	// lwz r11,264(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb268
	if (ctx.cr6.lt) goto loc_823CB268;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB268:
	// lwz r11,268(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb288
	if (ctx.cr6.lt) goto loc_823CB288;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB288:
	// lwz r11,272(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb2a8
	if (ctx.cr6.lt) goto loc_823CB2A8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB2A8:
	// lwz r11,276(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb2c8
	if (ctx.cr6.lt) goto loc_823CB2C8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB2C8:
	// lwz r11,284(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb2e8
	if (ctx.cr6.lt) goto loc_823CB2E8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB2E8:
	// lwz r11,304(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb308
	if (ctx.cr6.lt) goto loc_823CB308;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB308:
	// lwz r11,308(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb328
	if (ctx.cr6.lt) goto loc_823CB328;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB328:
	// lwz r11,312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb348
	if (ctx.cr6.lt) goto loc_823CB348;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB348:
	// lwz r11,316(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb368
	if (ctx.cr6.lt) goto loc_823CB368;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB368:
	// lwz r11,324(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb388
	if (ctx.cr6.lt) goto loc_823CB388;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB388:
	// lwz r11,344(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb3a8
	if (ctx.cr6.lt) goto loc_823CB3A8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB3A8:
	// lwz r11,348(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb3c8
	if (ctx.cr6.lt) goto loc_823CB3C8;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823CB3C8:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823cb408
	if (ctx.cr6.eq) goto loc_823CB408;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823cb408
	if (ctx.cr6.eq) goto loc_823CB408;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823cb408
	if (ctx.cr6.eq) goto loc_823CB408;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823cb408
	if (ctx.cr6.eq) goto loc_823CB408;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823cb408
	if (ctx.cr6.eq) goto loc_823CB408;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823cb408
	if (ctx.cr6.eq) goto loc_823CB408;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823cb4d0
	if (!ctx.cr6.eq) goto loc_823CB4D0;
loc_823CB408:
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r11,r25,192
	ctx.r11.s64 = ctx.r25.s64 + 192;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,13691
	ctx.r5.s64 = 13691;
	// li r4,13692
	ctx.r4.s64 = 13692;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// li r3,13693
	ctx.r3.s64 = 13693;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// li r10,13694
	ctx.r10.s64 = 13694;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// li r9,13695
	ctx.r9.s64 = 13695;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r8,13696
	ctx.r8.s64 = 13696;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// li r7,13697
	ctx.r7.s64 = 13697;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_823CB484:
	// lwzx r28,r31,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820c67b0
	ctx.lr = 0x823CB494;
	sub_820C67B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cb4bc
	if (ctx.cr6.eq) goto loc_823CB4BC;
	// cmplwi cr6,r27,160
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 160, ctx.xer);
	// bge cr6,0x823cb680
	if (!ctx.cr6.lt) goto loc_823CB680;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stwu r28,40(r30)
	ea = 40 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
loc_823CB4BC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r31,28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 28, ctx.xer);
	// blt cr6,0x823cb484
	if (ctx.cr6.lt) goto loc_823CB484;
	// b 0x823cb680
	goto loc_823CB680;
loc_823CB4D0:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x823cb604
	if (ctx.cr6.eq) goto loc_823CB604;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823cb4e8
	if (ctx.cr6.eq) goto loc_823CB4E8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x823cb680
	if (!ctx.cr6.eq) goto loc_823CB680;
loc_823CB4E8:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x823cb604
	if (ctx.cr6.eq) goto loc_823CB604;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823cb580
	if (ctx.cr6.eq) goto loc_823CB580;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x823cb680
	if (!ctx.cr6.eq) goto loc_823CB680;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// addi r11,r25,192
	ctx.r11.s64 = ctx.r25.s64 + 192;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r8,13691
	ctx.r8.s64 = 13691;
	// li r7,13695
	ctx.r7.s64 = 13695;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// li r6,13693
	ctx.r6.s64 = 13693;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r5,13697
	ctx.r5.s64 = 13697;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r20,160
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 160, ctx.xer);
	// bge cr6,0x823cb680
	if (!ctx.cr6.lt) goto loc_823CB680;
loc_823CB550:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r10,160
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 160, ctx.xer);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r6.u32);
	// stwu r5,40(r9)
	ea = 40 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x823cb550
	if (ctx.cr6.lt) goto loc_823CB550;
	// b 0x823cb680
	goto loc_823CB680;
loc_823CB580:
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// addi r11,r25,192
	ctx.r11.s64 = ctx.r25.s64 + 192;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,13691
	ctx.r7.s64 = 13691;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r6,13692
	ctx.r6.s64 = 13692;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// li r5,13694
	ctx.r5.s64 = 13694;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r4,13693
	ctx.r4.s64 = 13693;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r20,160
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 160, ctx.xer);
	// bge cr6,0x823cb680
	if (!ctx.cr6.lt) goto loc_823CB680;
loc_823CB5D4:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r10,160
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 160, ctx.xer);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r6.u32);
	// stwu r5,40(r9)
	ea = 40 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x823cb5d4
	if (ctx.cr6.lt) goto loc_823CB5D4;
	// b 0x823cb680
	goto loc_823CB680;
loc_823CB604:
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// addi r11,r25,192
	ctx.r11.s64 = ctx.r25.s64 + 192;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r8,13691
	ctx.r8.s64 = 13691;
	// li r7,13695
	ctx.r7.s64 = 13695;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// li r6,13696
	ctx.r6.s64 = 13696;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r5,13697
	ctx.r5.s64 = 13697;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r20,160
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 160, ctx.xer);
	// bge cr6,0x823cb680
	if (!ctx.cr6.lt) goto loc_823CB680;
loc_823CB654:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r10,160
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 160, ctx.xer);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r6.u32);
	// stwu r5,40(r9)
	ea = 40 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x823cb654
	if (ctx.cr6.lt) goto loc_823CB654;
loc_823CB680:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x823cb9d0
	if (!ctx.cr6.gt) goto loc_823CB9D0;
	// addi r11,r25,192
	ctx.r11.s64 = ctx.r25.s64 + 192;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
loc_823CB698:
	// cmplwi cr6,r23,160
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 160, ctx.xer);
	// bge cr6,0x823cb9d0
	if (!ctx.cr6.lt) goto loc_823CB9D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cb6f8
	if (ctx.cr6.eq) goto loc_823CB6F8;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820c6d40
	ctx.lr = 0x823CB6C4;
	sub_820C6D40(ctx, base);
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r10,r1,2384
	ctx.r10.s64 = ctx.r1.s64 + 2384;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// mulli r11,r9,88
	ctx.r11.s64 = ctx.r9.s64 * 88;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820c6d40
	ctx.lr = 0x823CB6E8;
	sub_820C6D40(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x823cb724
	goto loc_823CB724;
loc_823CB6F8:
	// addi r3,r1,2248
	ctx.r3.s64 = ctx.r1.s64 + 2248;
	// bl 0x820c6d40
	ctx.lr = 0x823CB700;
	sub_820C6D40(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// addi r3,r1,4456
	ctx.r3.s64 = ctx.r1.s64 + 4456;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x820c6d40
	ctx.lr = 0x823CB718;
	sub_820C6D40(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_823CB724:
	// subfc r11,r27,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r27.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r27.s64;
	// eqv r10,r27,r28
	// eqv r9,r28,r27
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// subfc r6,r28,r27
	ctx.xer.ca = ctx.r27.u32 >= ctx.r28.u32;
	ctx.r6.s64 = ctx.r27.s64 - ctx.r28.s64;
	// clrlwi r26,r7,31
	ctx.r26.u64 = ctx.r7.u32 & 0x1;
	// rlwinm r5,r9,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r25,r4,31
	ctx.r25.u64 = ctx.r4.u32 & 0x1;
	// beq cr6,0x823cb770
	if (ctx.cr6.eq) goto loc_823CB770;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x823cb764
	if (ctx.cr6.eq) goto loc_823CB764;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_823CB764:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823cb770
	if (ctx.cr6.eq) goto loc_823CB770;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
loc_823CB770:
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb790
	if (ctx.cr6.lt) goto loc_823CB790;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r20,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r20.u32);
loc_823CB790:
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb7b0
	if (ctx.cr6.lt) goto loc_823CB7B0;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r20,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r20.u32);
loc_823CB7B0:
	// lwz r5,-16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82106f58
	ctx.lr = 0x823CB7C0;
	sub_82106F58(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb7e0
	if (ctx.cr6.lt) goto loc_823CB7E0;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r20,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r20.u32);
loc_823CB7E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,-12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f10,160(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r6,40(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r5,-12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,212(r4)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 212, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bne cr6,0x823cb88c
	if (!ctx.cr6.eq) goto loc_823CB88C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_823CB88C:
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823CB8A0;
	sub_8218A5F0(ctx, base);
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r8,-12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r30.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r20.u32);
	// beq cr6,0x823cb8d8
	if (ctx.cr6.eq) goto loc_823CB8D8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// bne cr6,0x823cb8dc
	if (!ctx.cr6.eq) goto loc_823CB8DC;
loc_823CB8D8:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_823CB8DC:
	// lwz r11,544(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823cb900
	if (!ctx.cr6.eq) goto loc_823CB900;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x823cb900
	if (ctx.cr6.eq) goto loc_823CB900;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82106eb0
	ctx.lr = 0x823CB8FC;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x823CB900;
	sub_821D38E8(ctx, base);
loc_823CB900:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb928
	if (ctx.cr6.lt) goto loc_823CB928;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823CB928:
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,212(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 212, temp.u32);
	// beq cr6,0x823cb954
	if (ctx.cr6.eq) goto loc_823CB954;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// bne cr6,0x823cb958
	if (!ctx.cr6.eq) goto loc_823CB958;
loc_823CB954:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_823CB958:
	// lwz r11,544(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823cb97c
	if (!ctx.cr6.eq) goto loc_823CB97C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x823cb97c
	if (ctx.cr6.eq) goto loc_823CB97C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82106eb0
	ctx.lr = 0x823CB978;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x823CB97C;
	sub_821D38E8(ctx, base);
loc_823CB97C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cb9a4
	if (ctx.cr6.lt) goto loc_823CB9A4;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823CB9A4:
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r23,r23,40
	ctx.r23.s64 = ctx.r23.s64 + 40;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,212(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 212, temp.u32);
	// blt cr6,0x823cb698
	if (ctx.cr6.lt) goto loc_823CB698;
loc_823CB9D0:
	// stw r19,544(r29)
	PPC_STORE_U32(ctx.r29.u32 + 544, ctx.r19.u32);
loc_823CB9D4:
	// addi r1,r1,4768
	ctx.r1.s64 = ctx.r1.s64 + 4768;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CB9E4"))) PPC_WEAK_FUNC(sub_823CB9E4);
PPC_FUNC_IMPL(__imp__sub_823CB9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CB9E8"))) PPC_WEAK_FUNC(sub_823CB9E8);
PPC_FUNC_IMPL(__imp__sub_823CB9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r31,-4752(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823cba50
	if (ctx.cr6.eq) goto loc_823CBA50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823cba2c
	if (!ctx.cr6.eq) goto loc_823CBA2C;
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x823c3468
	ctx.lr = 0x823CBA2C;
	sub_823C3468(ctx, base);
loc_823CBA2C:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823cba50
	if (!ctx.cr6.eq) goto loc_823CBA50;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x823c3468
	ctx.lr = 0x823CBA48;
	sub_823C3468(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
loc_823CBA50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CBA68"))) PPC_WEAK_FUNC(sub_823CBA68);
PPC_FUNC_IMPL(__imp__sub_823CBA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823CBA70;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-22088
	ctx.r9.s64 = ctx.r11.s64 + -22088;
	// addi r8,r10,-22096
	ctx.r8.s64 = ctx.r10.s64 + -22096;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r26,r3,16
	ctx.r26.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r31,r3,548
	ctx.r31.s64 = ctx.r3.s64 + 548;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r27,0
	ctx.r27.s64 = 0;
loc_823CBAA0:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823cbac0
	if (ctx.cr6.eq) goto loc_823CBAC0;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x823ccac0
	ctx.lr = 0x823CBAB4;
	sub_823CCAC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x823CBAC0;
	sub_82183E40(ctx, base);
loc_823CBAC0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r27,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r31.u32 = ea;
	// bne 0x823cbaa0
	if (!ctx.cr0.eq) goto loc_823CBAA0;
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// bl 0x823c30b8
	ctx.lr = 0x823CBAD4;
	sub_823C30B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821857f0
	ctx.lr = 0x823CBADC;
	sub_821857F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82185a50
	ctx.lr = 0x823CBAE4;
	sub_82185A50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823CBAEC"))) PPC_WEAK_FUNC(sub_823CBAEC);
PPC_FUNC_IMPL(__imp__sub_823CBAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CBAF0"))) PPC_WEAK_FUNC(sub_823CBAF0);
PPC_FUNC_IMPL(__imp__sub_823CBAF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x823cc1e0
	sub_823CC1E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CBAF8"))) PPC_WEAK_FUNC(sub_823CBAF8);
PPC_FUNC_IMPL(__imp__sub_823CBAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823cbb44
	if (!ctx.cr6.gt) goto loc_823CBB44;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x823c3160
	ctx.lr = 0x823CBB24;
	sub_823C3160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cbbc0
	if (ctx.cr6.eq) goto loc_823CBBC0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x823cbbc0
	goto loc_823CBBC0;
loc_823CBB44:
	// bl 0x8223ad48
	ctx.lr = 0x823CBB48;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cbb60
	if (!ctx.cr6.eq) goto loc_823CBB60;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823cbb64
	if (!ctx.cr6.eq) goto loc_823CBB64;
loc_823CBB60:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823CBB64:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,4292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4292, ctx.r9.u32);
	// lwz r7,524(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// and r4,r5,r30
	ctx.r4.u64 = ctx.r5.u64 & ctx.r30.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823cbba8
	if (ctx.cr6.eq) goto loc_823CBBA8;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82106eb0
	ctx.lr = 0x823CBB9C;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cbba8
	if (ctx.cr6.eq) goto loc_823CBBA8;
	// bl 0x821d38e8
	ctx.lr = 0x823CBBA8;
	sub_821D38E8(ctx, base);
loc_823CBBA8:
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ca808
	ctx.lr = 0x823CBBB8;
	sub_823CA808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cadb0
	ctx.lr = 0x823CBBC0;
	sub_823CADB0(ctx, base);
loc_823CBBC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CBBD8"))) PPC_WEAK_FUNC(sub_823CBBD8);
PPC_FUNC_IMPL(__imp__sub_823CBBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823CBBE0;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r30,r10,1696
	ctx.r30.s64 = ctx.r10.s64 + 1696;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163e58
	ctx.lr = 0x823CBC0C;
	sub_82163E58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8223aa28
	ctx.lr = 0x823CBC14;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cbc84
	if (ctx.cr6.eq) goto loc_823CBC84;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823CBC30:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823cbc30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CBC30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c8218
	ctx.lr = 0x823CBC44;
	sub_820C8218(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823cbc64
	if (ctx.cr6.eq) goto loc_823CBC64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca0d0
	ctx.lr = 0x823CBC64;
	sub_820CA0D0(ctx, base);
loc_823CBC64:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823cbc84
	if (ctx.cr6.eq) goto loc_823CBC84;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca128
	ctx.lr = 0x823CBC84;
	sub_820CA128(ctx, base);
loc_823CBC84:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823CBC8C"))) PPC_WEAK_FUNC(sub_823CBC8C);
PPC_FUNC_IMPL(__imp__sub_823CBC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CBC90"))) PPC_WEAK_FUNC(sub_823CBC90);
PPC_FUNC_IMPL(__imp__sub_823CBC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823CBC98;
	sub_8224877C(ctx, base);
	// stwu r1,-1744(r1)
	ea = -1744 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r27,r10,1696
	ctx.r27.s64 = ctx.r10.s64 + 1696;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163df0
	ctx.lr = 0x823CBCC8;
	sub_82163DF0(ctx, base);
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// bl 0x82164d80
	ctx.lr = 0x823CBCD8;
	sub_82164D80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x823cbda0
	if (!ctx.cr6.eq) goto loc_823CBDA0;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x8214a400
	ctx.lr = 0x823CBCEC;
	sub_8214A400(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82164060
	ctx.lr = 0x823CBCF4;
	sub_82164060(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82163e58
	ctx.lr = 0x823CBCFC;
	sub_82163E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x823CBD0C;
	sub_82248A40(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r1,818
	ctx.r8.s64 = ctx.r1.s64 + 818;
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,11
	ctx.r10.s64 = 11;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r7,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r7.u16);
	// lhz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// sth r6,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r6.u16);
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r5,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r5.u16);
	// lhz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// sth r4,6(r8)
	PPC_STORE_U16(ctx.r8.u32 + 6, ctx.r4.u16);
loc_823CBD54:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823cbd54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CBD54;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c8438
	ctx.lr = 0x823CBD6C;
	sub_820C8438(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823cbd8c
	if (ctx.cr6.eq) goto loc_823CBD8C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ca0d0
	ctx.lr = 0x823CBD8C;
	sub_820CA0D0(ctx, base);
loc_823CBD8C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823cbe7c
	if (ctx.cr6.eq) goto loc_823CBE7C;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x823cbe6c
	goto loc_823CBE6C;
loc_823CBDA0:
	// addi r3,r1,1568
	ctx.r3.s64 = ctx.r1.s64 + 1568;
	// bl 0x8214a400
	ctx.lr = 0x823CBDA8;
	sub_8214A400(ctx, base);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82164060
	ctx.lr = 0x823CBDB0;
	sub_82164060(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82163e58
	ctx.lr = 0x823CBDB8;
	sub_82163E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x823CBDC8;
	sub_82248A40(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r8,r1,1570
	ctx.r8.s64 = ctx.r1.s64 + 1570;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,11
	ctx.r10.s64 = 11;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sthx r6,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u16);
	// lhz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// sth r5,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r5.u16);
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r4,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r4.u16);
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// sth r3,6(r7)
	PPC_STORE_U16(ctx.r7.u32 + 6, ctx.r3.u16);
loc_823CBE10:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823cbe10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CBE10;
	// addi r5,r1,928
	ctx.r5.s64 = ctx.r1.s64 + 928;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c8438
	ctx.lr = 0x823CBE28;
	sub_820C8438(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// beq cr6,0x823cbe5c
	if (ctx.cr6.eq) goto loc_823CBE5C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ca0d0
	ctx.lr = 0x823CBE5C;
	sub_820CA0D0(ctx, base);
loc_823CBE5C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823cbe7c
	if (ctx.cr6.eq) goto loc_823CBE7C;
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_823CBE6C:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ca128
	ctx.lr = 0x823CBE7C;
	sub_820CA128(ctx, base);
loc_823CBE7C:
	// addi r1,r1,1744
	ctx.r1.s64 = ctx.r1.s64 + 1744;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823CBE84"))) PPC_WEAK_FUNC(sub_823CBE84);
PPC_FUNC_IMPL(__imp__sub_823CBE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CBE88"))) PPC_WEAK_FUNC(sub_823CBE88);
PPC_FUNC_IMPL(__imp__sub_823CBE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823CBE90;
	sub_8224877C(ctx, base);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r27,r10,1696
	ctx.r27.s64 = ctx.r10.s64 + 1696;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163df0
	ctx.lr = 0x823CBEC0;
	sub_82163DF0(ctx, base);
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// bl 0x82164d80
	ctx.lr = 0x823CBED0;
	sub_82164D80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8223aa28
	ctx.lr = 0x823CBED8;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cbfc8
	if (ctx.cr6.eq) goto loc_823CBFC8;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823CBEF4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823cbef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CBEF4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c8218
	ctx.lr = 0x823CBF08;
	sub_820C8218(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x8214a400
	ctx.lr = 0x823CBF10;
	sub_8214A400(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82164060
	ctx.lr = 0x823CBF18;
	sub_82164060(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82163e58
	ctx.lr = 0x823CBF20;
	sub_82163E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,752
	ctx.r5.s64 = 752;
	// bl 0x82248a40
	ctx.lr = 0x823CBF30;
	sub_82248A40(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r1,770
	ctx.r9.s64 = ctx.r1.s64 + 770;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// sth r7,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r7.u16);
	// blt cr6,0x823cbf88
	if (ctx.cr6.lt) goto loc_823CBF88;
	// bne cr6,0x823cbfc8
	if (!ctx.cr6.eq) goto loc_823CBFC8;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// ble cr6,0x823cbf84
	if (!ctx.cr6.gt) goto loc_823CBF84;
	// li r10,100
	ctx.r10.s64 = 100;
loc_823CBF84:
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
loc_823CBF88:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823cbfa8
	if (ctx.cr6.eq) goto loc_823CBFA8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ca0d0
	ctx.lr = 0x823CBFA8;
	sub_820CA0D0(ctx, base);
loc_823CBFA8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823cbfc8
	if (ctx.cr6.eq) goto loc_823CBFC8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ca128
	ctx.lr = 0x823CBFC8;
	sub_820CA128(ctx, base);
loc_823CBFC8:
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823CBFD0"))) PPC_WEAK_FUNC(sub_823CBFD0);
PPC_FUNC_IMPL(__imp__sub_823CBFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823CBFD8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x823CBFF4;
	sub_821859A0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82185740
	ctx.lr = 0x823CC004;
	sub_82185740(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-22088
	ctx.r9.s64 = ctx.r11.s64 + -22088;
	// addi r8,r10,-22096
	ctx.r8.s64 = ctx.r10.s64 + -22096;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c34c0
	ctx.lr = 0x823CC044;
	sub_823C34C0(ctx, base);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r6,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r6.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// lwz r11,-792(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -792);
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// lwz r11,-792(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -792);
	// lwz r4,136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// bl 0x823c3410
	ctx.lr = 0x823CC080;
	sub_823C3410(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x823CC084;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CC090;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x823CC094;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823cc0ac
	if (ctx.cr6.eq) goto loc_823CC0AC;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82183448
	ctx.lr = 0x823CC0A8;
	sub_82183448(ctx, base);
	// b 0x823cc0b4
	goto loc_823CC0B4;
loc_823CC0AC:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x823CC0B4;
	sub_821845A0(ctx, base);
loc_823CC0B4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc0d8
	if (ctx.cr6.eq) goto loc_823CC0D8;
	// bl 0x823ca6c8
	ctx.lr = 0x823CC0C4;
	sub_823CA6C8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r10,-22208
	ctx.r9.s64 = ctx.r10.s64 + -22208;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x823cc0dc
	goto loc_823CC0DC;
loc_823CC0D8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823CC0DC:
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x823CC0E4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823cc0fc
	if (ctx.cr6.eq) goto loc_823CC0FC;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82183448
	ctx.lr = 0x823CC0F8;
	sub_82183448(ctx, base);
	// b 0x823cc104
	goto loc_823CC104;
loc_823CC0FC:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x823CC104;
	sub_821845A0(ctx, base);
loc_823CC104:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc128
	if (ctx.cr6.eq) goto loc_823CC128;
	// bl 0x823ca6c8
	ctx.lr = 0x823CC114;
	sub_823CA6C8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r10,-22180
	ctx.r9.s64 = ctx.r10.s64 + -22180;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x823cc12c
	goto loc_823CC12C;
loc_823CC128:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823CC12C:
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x823CC134;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823cc14c
	if (ctx.cr6.eq) goto loc_823CC14C;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82183448
	ctx.lr = 0x823CC148;
	sub_82183448(ctx, base);
	// b 0x823cc154
	goto loc_823CC154;
loc_823CC14C:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x823CC154;
	sub_821845A0(ctx, base);
loc_823CC154:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc178
	if (ctx.cr6.eq) goto loc_823CC178;
	// bl 0x823ca6c8
	ctx.lr = 0x823CC164;
	sub_823CA6C8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r10,-22152
	ctx.r9.s64 = ctx.r10.s64 + -22152;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x823cc17c
	goto loc_823CC17C;
loc_823CC178:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823CC17C:
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x823CC184;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823cc19c
	if (ctx.cr6.eq) goto loc_823CC19C;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82183448
	ctx.lr = 0x823CC198;
	sub_82183448(ctx, base);
	// b 0x823cc1a4
	goto loc_823CC1A4;
loc_823CC19C:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x823CC1A4;
	sub_821845A0(ctx, base);
loc_823CC1A4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc1c4
	if (ctx.cr6.eq) goto loc_823CC1C4;
	// bl 0x823ca6c8
	ctx.lr = 0x823CC1B4;
	sub_823CA6C8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r10,r11,-22124
	ctx.r10.s64 = ctx.r11.s64 + -22124;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_823CC1C4:
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CC1D0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823CC1DC"))) PPC_WEAK_FUNC(sub_823CC1DC);
PPC_FUNC_IMPL(__imp__sub_823CC1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CC1E0"))) PPC_WEAK_FUNC(sub_823CC1E0);
PPC_FUNC_IMPL(__imp__sub_823CC1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823cba68
	ctx.lr = 0x823CC200;
	sub_823CBA68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc21c
	if (ctx.cr6.eq) goto loc_823CC21C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823CC218;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CC21C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC234"))) PPC_WEAK_FUNC(sub_823CC234);
PPC_FUNC_IMPL(__imp__sub_823CC234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CC238"))) PPC_WEAK_FUNC(sub_823CC238);
PPC_FUNC_IMPL(__imp__sub_823CC238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823CC240;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-22272
	ctx.r10.s64 = ctx.r11.s64 + -22272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lwsync 
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// stw r3,-4752(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4752, ctx.r3.u32);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82183078
	ctx.lr = 0x823CC278;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CC284;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x823CC288;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823cc2a0
	if (ctx.cr6.eq) goto loc_823CC2A0;
	// li r3,532
	ctx.r3.s64 = 532;
	// bl 0x82183448
	ctx.lr = 0x823CC29C;
	sub_82183448(ctx, base);
	// b 0x823cc2a8
	goto loc_823CC2A8;
loc_823CC2A0:
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x821845a0
	ctx.lr = 0x823CC2A8;
	sub_821845A0(ctx, base);
loc_823CC2A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc2bc
	if (ctx.cr6.eq) goto loc_823CC2BC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823ca210
	ctx.lr = 0x823CC2B8;
	sub_823CA210(ctx, base);
	// b 0x823cc2c0
	goto loc_823CC2C0;
loc_823CC2BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823CC2C0:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x823CC2C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823cc2e0
	if (ctx.cr6.eq) goto loc_823CC2E0;
	// li r3,568
	ctx.r3.s64 = 568;
	// bl 0x82183448
	ctx.lr = 0x823CC2DC;
	sub_82183448(ctx, base);
	// b 0x823cc2e8
	goto loc_823CC2E8;
loc_823CC2E0:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x821845a0
	ctx.lr = 0x823CC2E8;
	sub_821845A0(ctx, base);
loc_823CC2E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc2fc
	if (ctx.cr6.eq) goto loc_823CC2FC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823cbfd0
	ctx.lr = 0x823CC2F8;
	sub_823CBFD0(ctx, base);
	// b 0x823cc300
	goto loc_823CC300;
loc_823CC2FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823CC300:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CC30C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823CC318"))) PPC_WEAK_FUNC(sub_823CC318);
PPC_FUNC_IMPL(__imp__sub_823CC318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823CC320;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-4752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823cc384
	if (!ctx.cr6.eq) goto loc_823CC384;
	// bl 0x82183078
	ctx.lr = 0x823CC33C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CC348;
	sub_821837D0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82080000
	ctx.lr = 0x823CC350;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc374
	if (ctx.cr6.eq) goto loc_823CC374;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823cc238
	ctx.lr = 0x823CC360;
	sub_823CC238(ctx, base);
	// stw r3,-4752(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4752, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CC36C;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CC374:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-4752(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4752, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x823CC384;
	sub_821837D0(ctx, base);
loc_823CC384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823CC38C"))) PPC_WEAK_FUNC(sub_823CC38C);
PPC_FUNC_IMPL(__imp__sub_823CC38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CC390"))) PPC_WEAK_FUNC(sub_823CC390);
PPC_FUNC_IMPL(__imp__sub_823CC390) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
loc_823CC3D0:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823cc3d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CC3D0;
	// lwz r11,168(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// lwz r10,172(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// lwz r9,176(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r9,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// lwz r8,180(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r8,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r8.u32);
	// lwz r7,184(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// stw r7,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC40C"))) PPC_WEAK_FUNC(sub_823CC40C);
PPC_FUNC_IMPL(__imp__sub_823CC40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CC410"))) PPC_WEAK_FUNC(sub_823CC410);
PPC_FUNC_IMPL(__imp__sub_823CC410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// ori r11,r11,35904
	ctx.r11.u64 = ctx.r11.u64 | 35904;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC428"))) PPC_WEAK_FUNC(sub_823CC428);
PPC_FUNC_IMPL(__imp__sub_823CC428) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823cc530
	sub_823CC530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CC430"))) PPC_WEAK_FUNC(sub_823CC430);
PPC_FUNC_IMPL(__imp__sub_823CC430) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823cc530
	sub_823CC530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CC438"))) PPC_WEAK_FUNC(sub_823CC438);
PPC_FUNC_IMPL(__imp__sub_823CC438) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC440"))) PPC_WEAK_FUNC(sub_823CC440);
PPC_FUNC_IMPL(__imp__sub_823CC440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823CC448;
	sub_82248780(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823CC454;
	sub_823CD7E8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// ori r29,r11,37296
	ctx.r29.u64 = ctx.r11.u64 | 37296;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r28,r28,-28244
	ctx.r28.s64 = ctx.r28.s64 + -28244;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r10,-21936
	ctx.r7.s64 = ctx.r10.s64 + -21936;
	// addi r6,r9,-22072
	ctx.r6.s64 = ctx.r9.s64 + -22072;
	// stwx r30,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r30.u32);
	// addi r5,r8,-22080
	ctx.r5.s64 = ctx.r8.s64 + -22080;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lwz r26,644(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x82183078
	ctx.lr = 0x823CC49C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CC4A8;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c7118
	ctx.lr = 0x823CC4B0;
	sub_823C7118(ctx, base);
	// addi r4,r31,472
	ctx.r4.s64 = ctx.r31.s64 + 472;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823cc390
	ctx.lr = 0x823CC4BC;
	sub_823CC390(ctx, base);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x823CC4C4;
	sub_8215BD08(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x82183850
	ctx.lr = 0x823CC4D0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823cc4e8
	if (ctx.cr6.eq) goto loc_823CC4E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x823CC4E4;
	sub_82183448(ctx, base);
	// b 0x823cc4f0
	goto loc_823CC4F0;
loc_823CC4E8:
	// li r3,2331
	ctx.r3.s64 = 2331;
	// bl 0x821845a0
	ctx.lr = 0x823CC4F0;
	sub_821845A0(ctx, base);
loc_823CC4F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc504
	if (ctx.cr6.eq) goto loc_823CC504;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823cedf0
	ctx.lr = 0x823CC500;
	sub_823CEDF0(ctx, base);
	// b 0x823cc508
	goto loc_823CC508;
loc_823CC504:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823CC508:
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CC514;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ccf60
	ctx.lr = 0x823CC51C;
	sub_823CCF60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823CC52C"))) PPC_WEAK_FUNC(sub_823CC52C);
PPC_FUNC_IMPL(__imp__sub_823CC52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CC530"))) PPC_WEAK_FUNC(sub_823CC530);
PPC_FUNC_IMPL(__imp__sub_823CC530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-21936
	ctx.r8.s64 = ctx.r11.s64 + -21936;
	// addi r7,r10,-22072
	ctx.r7.s64 = ctx.r10.s64 + -22072;
	// addi r6,r9,-22080
	ctx.r6.s64 = ctx.r9.s64 + -22080;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823cda98
	ctx.lr = 0x823CC574;
	sub_823CDA98(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823cc590
	if (ctx.cr6.eq) goto loc_823CC590;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823CC58C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CC590:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CC5A8"))) PPC_WEAK_FUNC(sub_823CC5A8);
PPC_FUNC_IMPL(__imp__sub_823CC5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823CC5B0;
	sub_8224876C(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// ori r24,r11,37296
	ctx.r24.u64 = ctx.r11.u64 | 37296;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// lwzx r3,r3,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r24.u32);
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// ori r25,r10,37352
	ctx.r25.u64 = ctx.r10.u64 | 37352;
	// ori r28,r9,37292
	ctx.r28.u64 = ctx.r9.u64 | 37292;
	// add r21,r22,r24
	ctx.r21.u64 = ctx.r22.u64 + ctx.r24.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc69c
	if (ctx.cr6.eq) goto loc_823CC69C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CC5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ccab8
	if (ctx.cr6.eq) goto loc_823CCAB8;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,272(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// beq cr6,0x823cc628
	if (ctx.cr6.eq) goto loc_823CC628;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CC628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CC628:
	// stw r23,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c7118
	ctx.lr = 0x823CC634;
	sub_823C7118(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x8215bd08
	ctx.lr = 0x823CC644;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82183078
	ctx.lr = 0x823CC650;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CC65C;
	sub_821837D0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82080000
	ctx.lr = 0x823CC664;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc678
	if (ctx.cr6.eq) goto loc_823CC678;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823e0520
	ctx.lr = 0x823CC674;
	sub_823E0520(ctx, base);
	// b 0x823cc67c
	goto loc_823CC67C;
loc_823CC678:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_823CC67C:
	// stwx r3,r22,r28
	PPC_STORE_U32(ctx.r22.u32 + ctx.r28.u32, ctx.r3.u32);
	// lwz r11,-4752(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4752);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x823c3410
	ctx.lr = 0x823CC690;
	sub_823C3410(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CC69C;
	sub_821837D0(ctx, base);
loc_823CC69C:
	// lwzx r3,r22,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r28.u32);
	// add r30,r22,r28
	ctx.r30.u64 = ctx.r22.u64 + ctx.r28.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ccab8
	if (ctx.cr6.eq) goto loc_823CCAB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CC6BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ccab8
	if (ctx.cr6.eq) goto loc_823CCAB8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CC6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,644(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 644);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x823CC6E4;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CC6F0;
	sub_821837D0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// li r5,188
	ctx.r5.s64 = 188;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,472
	ctx.r4.s64 = ctx.r31.s64 + 472;
	// bl 0x82248a40
	ctx.lr = 0x823CC704;
	sub_82248A40(ctx, base);
	// addi r4,r31,660
	ctx.r4.s64 = ctx.r31.s64 + 660;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,188
	ctx.r5.s64 = 188;
	// bl 0x82248a40
	ctx.lr = 0x823CC714;
	sub_82248A40(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823cc734
	if (ctx.cr6.eq) goto loc_823CC734;
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
	ctx.lr = 0x823CC734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CC734:
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bgt cr6,0x823cc7f8
	if (ctx.cr6.gt) goto loc_823CC7F8;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14488
	ctx.r12.s64 = ctx.r12.s64 + -14488;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-14380(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14380);
	// lwz r17,-14296(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14296);
	// lwz r17,-14268(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14268);
	// lwz r17,-14268(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14268);
	// lwz r17,-14268(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14268);
	// lwz r17,-14268(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14268);
	// lwz r17,-14268(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14268);
	// lwz r17,-14268(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14268);
	// lwz r17,-14268(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14268);
	// lwz r17,-14236(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14236);
	// lwz r17,-14204(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14204);
	// lwz r17,-14044(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14044);
	// lwz r17,-14044(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14044);
	// lwz r17,-14044(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14044);
	// lwz r17,-14012(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14012);
	// lwz r17,-14172(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14172);
	// lwz r17,-14140(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14140);
	// lwz r17,-14108(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14108);
	// lwz r17,-14076(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -14076);
	// lwz r17,-13980(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13980);
	// lwz r17,-13948(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13948);
	// lwz r17,-13916(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13916);
	// lwz r17,-13884(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13884);
	// lwz r17,-13856(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13856);
	// lwz r17,-13828(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13828);
	// lwz r17,-13796(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13796);
	// lwz r17,-13764(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13764);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82080000
	ctx.lr = 0x823CC7DC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823cedf0
	ctx.lr = 0x823CC7EC;
	sub_823CEDF0(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
loc_823CC7F0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_823CC7F4:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_823CC7F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ccab0
	if (!ctx.cr6.eq) goto loc_823CCAB0;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ccab0
	if (!ctx.cr6.eq) goto loc_823CCAB0;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// beq cr6,0x823ccaa4
	if (ctx.cr6.eq) goto loc_823CCAA4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x823ccaa8
	goto loc_823CCAA8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82080000
	ctx.lr = 0x823CC830;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823e0520
	ctx.lr = 0x823CC840;
	sub_823E0520(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,45368
	ctx.r3.u64 = ctx.r3.u64 | 45368;
	// bl 0x82080000
	ctx.lr = 0x823CC850;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823df070
	ctx.lr = 0x823CC860;
	sub_823DF070(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37364
	ctx.r3.u64 = ctx.r3.u64 | 37364;
	// bl 0x82080000
	ctx.lr = 0x823CC870;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823ddb20
	ctx.lr = 0x823CC880;
	sub_823DDB20(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37344
	ctx.r3.u64 = ctx.r3.u64 | 37344;
	// bl 0x82080000
	ctx.lr = 0x823CC890;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823dc508
	ctx.lr = 0x823CC8A0;
	sub_823DC508(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37308
	ctx.r3.u64 = ctx.r3.u64 | 37308;
	// bl 0x82080000
	ctx.lr = 0x823CC8B0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823da578
	ctx.lr = 0x823CC8C0;
	sub_823DA578(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37360
	ctx.r3.u64 = ctx.r3.u64 | 37360;
	// bl 0x82080000
	ctx.lr = 0x823CC8D0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823d9650
	ctx.lr = 0x823CC8E0;
	sub_823D9650(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37524
	ctx.r3.u64 = ctx.r3.u64 | 37524;
	// bl 0x82080000
	ctx.lr = 0x823CC8F0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823d8638
	ctx.lr = 0x823CC900;
	sub_823D8638(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,41504
	ctx.r3.u64 = ctx.r3.u64 | 41504;
	// bl 0x82080000
	ctx.lr = 0x823CC910;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823d4230
	ctx.lr = 0x823CC920;
	sub_823D4230(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,45368
	ctx.r3.u64 = ctx.r3.u64 | 45368;
	// bl 0x82080000
	ctx.lr = 0x823CC930;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823d2f68
	ctx.lr = 0x823CC940;
	sub_823D2F68(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37348
	ctx.r3.u64 = ctx.r3.u64 | 37348;
	// bl 0x82080000
	ctx.lr = 0x823CC950;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823d1870
	ctx.lr = 0x823CC960;
	sub_823D1870(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,37624
	ctx.r3.u64 = ctx.r3.u64 | 37624;
	// bl 0x82080000
	ctx.lr = 0x823CC970;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823d0518
	ctx.lr = 0x823CC980;
	sub_823D0518(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,43632
	ctx.r3.u64 = ctx.r3.u64 | 43632;
	// bl 0x82080000
	ctx.lr = 0x823CC990;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823cf630
	ctx.lr = 0x823CC9A0;
	sub_823CF630(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,43632
	ctx.r3.u64 = ctx.r3.u64 | 43632;
	// bl 0x82080000
	ctx.lr = 0x823CC9B0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823cf5a8
	ctx.lr = 0x823CC9C0;
	sub_823CF5A8(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82080000
	ctx.lr = 0x823CC9CC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823cf490
	ctx.lr = 0x823CC9DC;
	sub_823CF490(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82080000
	ctx.lr = 0x823CC9E8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823cf3d0
	ctx.lr = 0x823CC9F8;
	sub_823CF3D0(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,43632
	ctx.r3.u64 = ctx.r3.u64 | 43632;
	// bl 0x82080000
	ctx.lr = 0x823CCA08;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823cf2e0
	ctx.lr = 0x823CCA18;
	sub_823CF2E0(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,43632
	ctx.r3.u64 = ctx.r3.u64 | 43632;
	// bl 0x82080000
	ctx.lr = 0x823CCA28;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cc7f0
	if (ctx.cr6.eq) goto loc_823CC7F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823cf258
	ctx.lr = 0x823CCA38;
	sub_823CF258(ctx, base);
	// b 0x823cc7f4
	goto loc_823CC7F4;
	// li r3,916
	ctx.r3.s64 = 916;
	// bl 0x82080000
	ctx.lr = 0x823CCA44;
	sub_82080000(ctx, base);
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cca68
	if (ctx.cr6.eq) goto loc_823CCA68;
	// lwz r11,-4760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4760);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8220e6d0
	ctx.lr = 0x823CCA64;
	sub_8220E6D0(ctx, base);
	// b 0x823cca6c
	goto loc_823CCA6C;
loc_823CCA68:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_823CCA6C:
	// stw r3,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
	// lwz r11,-4752(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4752);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x823c3468
	ctx.lr = 0x823CCA80;
	sub_823C3468(ctx, base);
	// bl 0x8223a9f8
	ctx.lr = 0x823CCA84;
	sub_8223A9F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223b4e8
	ctx.lr = 0x823CCA8C;
	sub_8223B4E8(ctx, base);
	// lwz r3,-4760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4760);
	// bl 0x823c8ed8
	ctx.lr = 0x823CCA94;
	sub_823C8ED8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CCA9C;
	sub_821837D0(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823CCAA4:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_823CCAA8:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CCAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CCAB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CCAB8;
	sub_821837D0(ctx, base);
loc_823CCAB8:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823CCAC0"))) PPC_WEAK_FUNC(sub_823CCAC0);
PPC_FUNC_IMPL(__imp__sub_823CCAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-21772
	ctx.r10.s64 = ctx.r11.s64 + -21772;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821857f0
	sub_821857F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CCAD0"))) PPC_WEAK_FUNC(sub_823CCAD0);
PPC_FUNC_IMPL(__imp__sub_823CCAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 * 76;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x82248a40
	ctx.lr = 0x823CCAFC;
	sub_82248A40(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCB18"))) PPC_WEAK_FUNC(sub_823CCB18);
PPC_FUNC_IMPL(__imp__sub_823CCB18) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 * 76;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCB28"))) PPC_WEAK_FUNC(sub_823CCB28);
PPC_FUNC_IMPL(__imp__sub_823CCB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCB40"))) PPC_WEAK_FUNC(sub_823CCB40);
PPC_FUNC_IMPL(__imp__sub_823CCB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-21772
	ctx.r10.s64 = ctx.r11.s64 + -21772;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821857f0
	ctx.lr = 0x823CCB6C;
	sub_821857F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823ccb88
	if (ctx.cr6.eq) goto loc_823CCB88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823CCB84;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CCB88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCBA0"))) PPC_WEAK_FUNC(sub_823CCBA0);
PPC_FUNC_IMPL(__imp__sub_823CCBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// lfs f10,8332(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8328(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8328);
	ctx.f11.f64 = double(temp.f32);
	// li r3,10
	ctx.r3.s64 = 10;
	// lfs f9,10340(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10340);
	ctx.f9.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f12,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f12.f64 = double(temp.f32);
	// ori r4,r6,65535
	ctx.r4.u64 = ctx.r6.u64 | 65535;
	// li r31,1
	ctx.r31.s64 = 1;
loc_823CCBDC:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r6,r11,-60
	ctx.r6.s64 = ctx.r11.s64 + -60;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bne cr6,0x823ccd1c
	if (!ctx.cr6.eq) goto loc_823CCD1C;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823ccc74
	if (ctx.cr6.lt) goto loc_823CCC74;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// blt cr6,0x823ccc70
	if (ctx.cr6.lt) goto loc_823CCC70;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x823ccc5c
	if (ctx.cr6.lt) goto loc_823CCC5C;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_823CCC5C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823ccc88
	if (ctx.cr6.eq) goto loc_823CCC88;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
loc_823CCC70:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
loc_823CCC74:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823ccc98
	if (!ctx.cr6.lt) goto loc_823CCC98;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x823ccc9c
	goto loc_823CCC9C;
loc_823CCC88:
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x823ccd1c
	goto loc_823CCD1C;
loc_823CCC98:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_823CCC9C:
	// fcmpu cr6,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bge cr6,0x823cccac
	if (!ctx.cr6.lt) goto loc_823CCCAC;
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x823ccd1c
	goto loc_823CCD1C;
loc_823CCCAC:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bge cr6,0x823ccd1c
	if (!ctx.cr6.lt) goto loc_823CCD1C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,-12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x823ccd08
	if (ctx.cr6.lt) goto loc_823CCD08;
	// bne cr6,0x823ccd1c
	if (!ctx.cr6.eq) goto loc_823CCD1C;
	// fnmsubs f13,f0,f11,f10
	ctx.f13.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfsx f6,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fmuls f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmadds f3,f4,f5,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f8.f64));
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x823ccd1c
	goto loc_823CCD1C;
loc_823CCD08:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f8,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmadds f6,f7,f0,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_823CCD1C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// bne 0x823ccbdc
	if (!ctx.cr0.eq) goto loc_823CCBDC;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCD30"))) PPC_WEAK_FUNC(sub_823CCD30);
PPC_FUNC_IMPL(__imp__sub_823CCD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 * 76;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lfs f0,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCD68"))) PPC_WEAK_FUNC(sub_823CCD68);
PPC_FUNC_IMPL(__imp__sub_823CCD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-7560
	ctx.r8.s64 = ctx.r9.s64 + -7560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lfs f13,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCE10"))) PPC_WEAK_FUNC(sub_823CCE10);
PPC_FUNC_IMPL(__imp__sub_823CCE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823CCE18;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x823CCE2C;
	sub_82185740(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r25,16
	ctx.r30.s64 = ctx.r25.s64 + 16;
	// addi r10,r11,-21772
	ctx.r10.s64 = ctx.r11.s64 + -21772;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,9
	ctx.r29.s64 = 9;
	// addi r31,r30,-32
	ctx.r31.s64 = ctx.r30.s64 + -32;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r11,-7560
	ctx.r26.s64 = ctx.r11.s64 + -7560;
loc_823CCE5C:
	// lis r11,-32195
	ctx.r11.s64 = -2109931520;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-13528
	ctx.r6.s64 = ctx.r11.s64 + -13528;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82080d28
	ctx.lr = 0x823CCE74;
	sub_82080D28(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lfs f0,60(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stfs f31,104(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfsu f31,76(r31)
	// bge 0x823cce5c
	if (!ctx.cr0.lt) goto loc_823CCE5C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823CCEE0"))) PPC_WEAK_FUNC(sub_823CCEE0);
PPC_FUNC_IMPL(__imp__sub_823CCEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823c3c60
	ctx.lr = 0x823CCEF8;
	sub_823C3C60(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCF14"))) PPC_WEAK_FUNC(sub_823CCF14);
PPC_FUNC_IMPL(__imp__sub_823CCF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CCF18"))) PPC_WEAK_FUNC(sub_823CCF18);
PPC_FUNC_IMPL(__imp__sub_823CCF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823c3c70
	ctx.lr = 0x823CCF30;
	sub_823C3C70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823CCF4C;
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

__attribute__((alias("__imp__sub_823CCF60"))) PPC_WEAK_FUNC(sub_823CCF60);
PPC_FUNC_IMPL(__imp__sub_823CCF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823c3c98
	ctx.lr = 0x823CCF78;
	sub_823C3C98(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CCF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCFA8"))) PPC_WEAK_FUNC(sub_823CCFA8);
PPC_FUNC_IMPL(__imp__sub_823CCFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823c3ca8
	ctx.lr = 0x823CCFC0;
	sub_823C3CA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CCFD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CCFF0"))) PPC_WEAK_FUNC(sub_823CCFF0);
PPC_FUNC_IMPL(__imp__sub_823CCFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823c3cd8
	ctx.lr = 0x823CD008;
	sub_823C3CD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CD01C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CD038"))) PPC_WEAK_FUNC(sub_823CD038);
PPC_FUNC_IMPL(__imp__sub_823CD038) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3d08
	sub_823C3D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CD03C"))) PPC_WEAK_FUNC(sub_823CD03C);
PPC_FUNC_IMPL(__imp__sub_823CD03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CD040"))) PPC_WEAK_FUNC(sub_823CD040);
PPC_FUNC_IMPL(__imp__sub_823CD040) {
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
	// bl 0x8223ad48
	ctx.lr = 0x823CD050;
	sub_8223AD48(ctx, base);
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

__attribute__((alias("__imp__sub_823CD068"))) PPC_WEAK_FUNC(sub_823CD068);
PPC_FUNC_IMPL(__imp__sub_823CD068) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,856
	ctx.r3.s64 = ctx.r3.s64 + 856;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8332);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// bl 0x823c3320
	ctx.lr = 0x823CD0B8;
	sub_823C3320(ctx, base);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823CD0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb380
	ctx.lr = 0x823CD0D4;
	sub_821EB380(ctx, base);
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

__attribute__((alias("__imp__sub_823CD0E8"))) PPC_WEAK_FUNC(sub_823CD0E8);
PPC_FUNC_IMPL(__imp__sub_823CD0E8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,856
	ctx.r3.s64 = ctx.r3.s64 + 856;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8332);
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
	// bl 0x823c3320
	ctx.lr = 0x823CD130;
	sub_823C3320(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CD140"))) PPC_WEAK_FUNC(sub_823CD140);
PPC_FUNC_IMPL(__imp__sub_823CD140) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r31,r3,856
	ctx.r31.s64 = ctx.r3.s64 + 856;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x823CD1A8;
	sub_823C3320(ctx, base);
	// lwz r7,856(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823CD1BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_823CD1D4"))) PPC_WEAK_FUNC(sub_823CD1D4);
PPC_FUNC_IMPL(__imp__sub_823CD1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CD1D8"))) PPC_WEAK_FUNC(sub_823CD1D8);
PPC_FUNC_IMPL(__imp__sub_823CD1D8) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r31,r3,856
	ctx.r31.s64 = ctx.r3.s64 + 856;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x823CD240;
	sub_823C3320(ctx, base);
	// lwz r7,856(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823CD254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_823CD26C"))) PPC_WEAK_FUNC(sub_823CD26C);
PPC_FUNC_IMPL(__imp__sub_823CD26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CD270"))) PPC_WEAK_FUNC(sub_823CD270);
PPC_FUNC_IMPL(__imp__sub_823CD270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,88(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// or r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 | ctx.r4.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x823c5728
	ctx.lr = 0x823CD29C;
	sub_823C5728(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CD2B8"))) PPC_WEAK_FUNC(sub_823CD2B8);
PPC_FUNC_IMPL(__imp__sub_823CD2B8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8223ae18
	ctx.lr = 0x823CD2CC;
	sub_8223AE18(ctx, base);
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

__attribute__((alias("__imp__sub_823CD2E0"))) PPC_WEAK_FUNC(sub_823CD2E0);
PPC_FUNC_IMPL(__imp__sub_823CD2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163e58
	ctx.lr = 0x823CD304;
	sub_82163E58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82163d90
	ctx.lr = 0x823CD30C;
	sub_82163D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CD320"))) PPC_WEAK_FUNC(sub_823CD320);
PPC_FUNC_IMPL(__imp__sub_823CD320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823CD328;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823cd34c
	if (!ctx.cr6.eq) goto loc_823CD34C;
loc_823CD340:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823CD34C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x823cd340
	if (!ctx.cr6.gt) goto loc_823CD340;
	// bl 0x8223a960
	ctx.lr = 0x823CD358;
	sub_8223A960(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8223aa28
	ctx.lr = 0x823CD360;
	sub_8223AA28(ctx, base);
	// bl 0x822e6048
	ctx.lr = 0x823CD364;
	sub_822E6048(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x822361c8
	ctx.lr = 0x823CD37C;
	sub_822361C8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822363c8
	ctx.lr = 0x823CD38C;
	sub_822363C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x823CD39C;
	sub_822AA648(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823cd3d0
	if (ctx.cr6.eq) goto loc_823CD3D0;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_823CD3B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82236148
	ctx.lr = 0x823CD3BC;
	sub_82236148(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stwu r27,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r30.u32 = ea;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823cd3b0
	if (ctx.cr6.lt) goto loc_823CD3B0;
loc_823CD3D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823CD3DC"))) PPC_WEAK_FUNC(sub_823CD3DC);
PPC_FUNC_IMPL(__imp__sub_823CD3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CD3E0"))) PPC_WEAK_FUNC(sub_823CD3E0);
PPC_FUNC_IMPL(__imp__sub_823CD3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823CD3E8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163e58
	ctx.lr = 0x823CD400;
	sub_82163E58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
loc_823CD408:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82163d90
	ctx.lr = 0x823CD414;
	sub_82163D90(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823cd434
	if (ctx.cr6.eq) goto loc_823CD434;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// blt cr6,0x823cd408
	if (ctx.cr6.lt) goto loc_823CD408;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CD434:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823CD440"))) PPC_WEAK_FUNC(sub_823CD440);
PPC_FUNC_IMPL(__imp__sub_823CD440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823CD448;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x821ebb58
	ctx.lr = 0x823CD464;
	sub_821EBB58(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CD488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823CD490"))) PPC_WEAK_FUNC(sub_823CD490);
PPC_FUNC_IMPL(__imp__sub_823CD490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// addi r9,r9,-28308
	ctx.r9.s64 = ctx.r9.s64 + -28308;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x823cd4ac
	if (!ctx.cr6.gt) goto loc_823CD4AC;
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
loc_823CD4AC:
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823cd4c4
	if (!ctx.cr0.lt) goto loc_823CD4C4;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823cd4fc
	goto loc_823CD4FC;
loc_823CD4C4:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// xoris r7,r10,32768
	ctx.r7.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addc r3,r4,r7
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x823cd4fc
	if (!ctx.cr6.gt) goto loc_823CD4FC;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addc r4,r7,r8
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_823CD4FC:
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823cd52c
	if (ctx.cr6.lt) goto loc_823CD52C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// xoris r6,r10,32768
	ctx.r6.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addc r3,r4,r6
	// subfe r6,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 & ctx.r11.u64;
	// stw r4,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r4.u32);
	// b 0x823cd53c
	goto loc_823CD53C;
loc_823CD52C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x823cd53c
	if (!ctx.cr6.lt) goto loc_823CD53C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
loc_823CD53C:
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// subf. r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823cd554
	if (!ctx.cr0.lt) goto loc_823CD554;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_823CD554:
	// subf r11,r7,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r7.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// xoris r7,r10,32768
	ctx.r7.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addc r5,r6,r7
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823cd598
	if (!ctx.cr6.gt) goto loc_823CD598;
	// li r10,0
	ctx.r10.s64 = 0;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addc r6,r7,r8
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 & ctx.r11.u64;
	// stw r3,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r3.u32);
	// blr 
	return;
loc_823CD598:
	// stw r8,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CD5A0"))) PPC_WEAK_FUNC(sub_823CD5A0);
PPC_FUNC_IMPL(__imp__sub_823CD5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823CD5A8;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// addis r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 65536;
	// addi r30,r30,-28308
	ctx.r30.s64 = ctx.r30.s64 + -28308;
	// addi r26,r26,-28296
	ctx.r26.s64 = ctx.r26.s64 + -28296;
	// addis r23,r3,1
	ctx.r23.s64 = ctx.r3.s64 + 65536;
	// addis r24,r3,1
	ctx.r24.s64 = ctx.r3.s64 + 65536;
	// addi r23,r23,-28292
	ctx.r23.s64 = ctx.r23.s64 + -28292;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r24,r24,-28280
	ctx.r24.s64 = ctx.r24.s64 + -28280;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r21,0(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addme r5,r6
	// and r27,r5,r8
	ctx.r27.u64 = ctx.r5.u64 & ctx.r8.u64;
	// ble cr6,0x823cd670
	if (!ctx.cr6.gt) goto loc_823CD670;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
loc_823CD610:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823cd66c
	if (!ctx.cr6.gt) goto loc_823CD66C;
	// subf r11,r29,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r29.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ce168
	ctx.lr = 0x823CD63C;
	sub_823CE168(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x823cd654
	if (ctx.cr6.gt) goto loc_823CD654;
	// li r22,1
	ctx.r22.s64 = 1;
loc_823CD654:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823cd610
	if (ctx.cr6.lt) goto loc_823CD610;
	// b 0x823cd670
	goto loc_823CD670;
loc_823CD66C:
	// li r22,1
	ctx.r22.s64 = 1;
loc_823CD670:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x823cd694
	if (ctx.cr6.eq) goto loc_823CD694;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,37248
	ctx.r8.u64 = ctx.r10.u64 | 37248;
	// stwx r9,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823CD694:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r21,r10
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823cd6a4
	if (!ctx.cr6.lt) goto loc_823CD6A4;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_823CD6A4:
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r7,r9,37248
	ctx.r7.u64 = ctx.r9.u64 | 37248;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823CD6C0"))) PPC_WEAK_FUNC(sub_823CD6C0);
PPC_FUNC_IMPL(__imp__sub_823CD6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823CD6C8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r26,4(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r29,1964(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
loc_823CD6EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163e58
	ctx.lr = 0x823CD6F4;
	sub_82163E58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82163d90
	ctx.lr = 0x823CD6FC;
	sub_82163D90(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823cd740
	if (ctx.cr6.eq) goto loc_823CD740;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x823cd74c
	if (ctx.cr6.eq) goto loc_823CD74C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// blt cr6,0x823cd6ec
	if (ctx.cr6.lt) goto loc_823CD6EC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823cd74c
	if (ctx.cr6.gt) goto loc_823CD74C;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823CD740:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823CD74C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823CD758"))) PPC_WEAK_FUNC(sub_823CD758);
PPC_FUNC_IMPL(__imp__sub_823CD758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823CD760;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r30,-28276
	ctx.r30.s64 = ctx.r30.s64 + -28276;
loc_823CD774:
	// li r28,2
	ctx.r28.s64 = 2;
loc_823CD778:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd7c8
	if (ctx.cr6.eq) goto loc_823CD7C8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_823CD788:
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8223a9f8
	ctx.lr = 0x823CD790;
	sub_8223A9F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8223b3e8
	ctx.lr = 0x823CD7A4;
	sub_8223B3E8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// blt cr6,0x823cd788
	if (ctx.cr6.lt) goto loc_823CD788;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cd7c4
	if (ctx.cr6.eq) goto loc_823CD7C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x823CD7C4;
	sub_82183E40(ctx, base);
loc_823CD7C4:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_823CD7C8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x823cd778
	if (!ctx.cr0.eq) goto loc_823CD778;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x823cd774
	if (ctx.cr6.lt) goto loc_823CD774;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823CD7E8"))) PPC_WEAK_FUNC(sub_823CD7E8);
PPC_FUNC_IMPL(__imp__sub_823CD7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823CD7F0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x823CD804;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x823c58b0
	ctx.lr = 0x823CD814;
	sub_823C58B0(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821859a0
	ctx.lr = 0x823CD828;
	sub_821859A0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-21616
	ctx.r8.s64 = ctx.r11.s64 + -21616;
	// addi r7,r10,-21752
	ctx.r7.s64 = ctx.r10.s64 + -21752;
	// addi r6,r9,-21764
	ctx.r6.s64 = ctx.r9.s64 + -21764;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r28,r31,472
	ctx.r28.s64 = ctx.r31.s64 + 472;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c7118
	ctx.lr = 0x823CD858;
	sub_823C7118(ctx, base);
	// addi r3,r31,660
	ctx.r3.s64 = ctx.r31.s64 + 660;
	// bl 0x823c7118
	ctx.lr = 0x823CD860;
	sub_823C7118(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x823c2ff0
	ctx.lr = 0x823CD86C;
	sub_823C2FF0(ctx, base);
	// addi r29,r31,904
	ctx.r29.s64 = ctx.r31.s64 + 904;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c35b8
	ctx.lr = 0x823CD880;
	sub_823C35B8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r30,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r30.u32);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r4,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r4.u32);
	// stw r5,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r5.u32);
	// bl 0x823c8398
	ctx.lr = 0x823CD8A0;
	sub_823C8398(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// ori r10,r3,35904
	ctx.r10.u64 = ctx.r3.u64 | 35904;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// addi r9,r9,-28308
	ctx.r9.s64 = ctx.r9.s64 + -28308;
	// ori r8,r11,65535
	ctx.r8.u64 = ctx.r11.u64 | 65535;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r30.u32);
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// stw r30,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r30.u32);
	// stw r30,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r30.u32);
	// stw r30,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r30.u32);
	// bl 0x823cc390
	ctx.lr = 0x823CD8EC;
	sub_823CC390(ctx, base);
	// lwz r7,480(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// li r4,1280
	ctx.r4.s64 = 1280;
	// addi r28,r28,-29628
	ctx.r28.s64 = ctx.r28.s64 + -29628;
	// stw r7,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822aa648
	ctx.lr = 0x823CD908;
	sub_822AA648(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r4,r6,37188
	ctx.r4.u64 = ctx.r6.u64 | 37188;
	// ori r3,r5,37192
	ctx.r3.u64 = ctx.r5.u64 | 37192;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29500
	ctx.r11.s64 = ctx.r11.s64 + -29500;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stwx r28,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r28.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// ori r7,r10,37196
	ctx.r7.u64 = ctx.r10.u64 | 37196;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r5,r8,37204
	ctx.r5.u64 = ctx.r8.u64 | 37204;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r6,r9,37200
	ctx.r6.u64 = ctx.r9.u64 | 37200;
	// ori r8,r4,37208
	ctx.r8.u64 = ctx.r4.u64 | 37208;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r4,r3,37212
	ctx.r4.u64 = ctx.r3.u64 | 37212;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r3,r11,37216
	ctx.r3.u64 = ctx.r11.u64 | 37216;
	// ori r11,r10,37220
	ctx.r11.u64 = ctx.r10.u64 | 37220;
	// ori r10,r9,37224
	ctx.r10.u64 = ctx.r9.u64 | 37224;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r9,r9,-29372
	ctx.r9.s64 = ctx.r9.s64 + -29372;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// stwx r9,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-29244
	ctx.r28.s64 = ctx.r28.s64 + -29244;
	// addi r7,r7,-28988
	ctx.r7.s64 = ctx.r7.s64 + -28988;
	// addi r27,r27,-29116
	ctx.r27.s64 = ctx.r27.s64 + -29116;
	// stwx r28,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r28.u32);
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// stwx r27,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r27.u32);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// addi r6,r6,-28860
	ctx.r6.s64 = ctx.r6.s64 + -28860;
	// addi r5,r5,-28732
	ctx.r5.s64 = ctx.r5.s64 + -28732;
	// addi r9,r9,-28604
	ctx.r9.s64 = ctx.r9.s64 + -28604;
	// stwx r6,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r8,r8,-28476
	ctx.r8.s64 = ctx.r8.s64 + -28476;
	// stwx r5,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,-792(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + -792);
	// bl 0x823c3240
	ctx.lr = 0x823CD9DC;
	sub_823C3240(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r7,30
	ctx.r7.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,2144(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2148(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823CD9FC;
	sub_823C31B0(ctx, base);
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// stw r11,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r11.u32);
	// bl 0x82109e00
	ctx.lr = 0x823CDA1C;
	sub_82109E00(ctx, base);
	// li r11,50
	ctx.r11.s64 = 50;
	// addi r10,r31,272
	ctx.r10.s64 = ctx.r31.s64 + 272;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823CDA30:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823cda30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDA30;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823c9d10
	ctx.lr = 0x823CDA48;
	sub_823C9D10(ctx, base);
	// li r9,9315
	ctx.r9.s64 = 9315;
loc_823CDA4C:
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823CDA58:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// bdnz 0x823cda58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CDA58;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r9,9323
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9323, ctx.xer);
	// blt cr6,0x823cda4c
	if (ctx.cr6.lt) goto loc_823CDA4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823CDA84"))) PPC_WEAK_FUNC(sub_823CDA84);
PPC_FUNC_IMPL(__imp__sub_823CDA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CDA88"))) PPC_WEAK_FUNC(sub_823CDA88);
PPC_FUNC_IMPL(__imp__sub_823CDA88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823ce8a8
	sub_823CE8A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CDA90"))) PPC_WEAK_FUNC(sub_823CDA90);
PPC_FUNC_IMPL(__imp__sub_823CDA90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823ce8a8
	sub_823CE8A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CDA98"))) PPC_WEAK_FUNC(sub_823CDA98);
PPC_FUNC_IMPL(__imp__sub_823CDA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823CDAA0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-21616
	ctx.r8.s64 = ctx.r11.s64 + -21616;
	// addi r7,r10,-21752
	ctx.r7.s64 = ctx.r10.s64 + -21752;
	// addi r6,r9,-21764
	ctx.r6.s64 = ctx.r9.s64 + -21764;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// addi r29,r3,256
	ctx.r29.s64 = ctx.r3.s64 + 256;
	// bl 0x823cd758
	ctx.lr = 0x823CDAD8;
	sub_823CD758(ctx, base);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// bl 0x823c7cf0
	ctx.lr = 0x823CDAE0;
	sub_823C7CF0(ctx, base);
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c31a0
	ctx.lr = 0x823CDAE8;
	sub_823C31A0(ctx, base);
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x823c3048
	ctx.lr = 0x823CDAF0;
	sub_823C3048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x823CDAF8;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x823CDB00;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x823CDB08;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823CDB10"))) PPC_WEAK_FUNC(sub_823CDB10);
PPC_FUNC_IMPL(__imp__sub_823CDB10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,876
	ctx.r3.s64 = ctx.r3.s64 + 876;
	// b 0x823c3240
	sub_823C3240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CDB34"))) PPC_WEAK_FUNC(sub_823CDB34);
PPC_FUNC_IMPL(__imp__sub_823CDB34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CDB38"))) PPC_WEAK_FUNC(sub_823CDB38);
PPC_FUNC_IMPL(__imp__sub_823CDB38) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r5.u32);
	// stw r9,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CDB58"))) PPC_WEAK_FUNC(sub_823CDB58);
PPC_FUNC_IMPL(__imp__sub_823CDB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823CDB60;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x823cdc38
	if (ctx.cr6.eq) goto loc_823CDC38;
	// lwz r11,-240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -240);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823cdc38
	if (ctx.cr6.eq) goto loc_823CDC38;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4756);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823cdc38
	if (!ctx.cr6.eq) goto loc_823CDC38;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x823CDBAC;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x823CDBBC;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x823CDBD0;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823CDBDC;
	sub_821AD498(ctx, base);
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823cdc20
	if (ctx.cr6.eq) goto loc_823CDC20;
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,592(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,132(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 132, temp.u32);
	// lwz r6,956(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// lwz r4,392(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// lwz r3,592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// bl 0x8210a9b0
	ctx.lr = 0x823CDC20;
	sub_8210A9B0(ctx, base);
loc_823CDC20:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x823CDC2C;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823CDC38;
	sub_821AD498(ctx, base);
loc_823CDC38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823CDC44"))) PPC_WEAK_FUNC(sub_823CDC44);
PPC_FUNC_IMPL(__imp__sub_823CDC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CDC48"))) PPC_WEAK_FUNC(sub_823CDC48);
PPC_FUNC_IMPL(__imp__sub_823CDC48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
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

__attribute__((alias("__imp__sub_823CDC64"))) PPC_WEAK_FUNC(sub_823CDC64);
PPC_FUNC_IMPL(__imp__sub_823CDC64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CDC68"))) PPC_WEAK_FUNC(sub_823CDC68);
PPC_FUNC_IMPL(__imp__sub_823CDC68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cdca4
	if (ctx.cr6.eq) goto loc_823CDCA4;
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823CDCA4:
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
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

__attribute__((alias("__imp__sub_823CDCB8"))) PPC_WEAK_FUNC(sub_823CDCB8);
PPC_FUNC_IMPL(__imp__sub_823CDCB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CDCBC"))) PPC_WEAK_FUNC(sub_823CDCBC);
PPC_FUNC_IMPL(__imp__sub_823CDCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CDCC0"))) PPC_WEAK_FUNC(sub_823CDCC0);
PPC_FUNC_IMPL(__imp__sub_823CDCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cdd20
	if (ctx.cr6.eq) goto loc_823CDD20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CDCF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r9.u32);
	// stw r11,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823cdd20
	if (ctx.cr6.lt) goto loc_823CDD20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CDD20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CDD20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CDD34"))) PPC_WEAK_FUNC(sub_823CDD34);
PPC_FUNC_IMPL(__imp__sub_823CDD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CDD38"))) PPC_WEAK_FUNC(sub_823CDD38);
PPC_FUNC_IMPL(__imp__sub_823CDD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8223ad48
	ctx.lr = 0x823CDD50;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cdd70
	if (!ctx.cr6.eq) goto loc_823CDD70;
loc_823CDD58:
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
loc_823CDD70:
	// bl 0x8223aa28
	ctx.lr = 0x823CDD74;
	sub_8223AA28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cdd58
	if (ctx.cr6.eq) goto loc_823CDD58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82237d70
	ctx.lr = 0x823CDD84;
	sub_82237D70(ctx, base);
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CDD9C"))) PPC_WEAK_FUNC(sub_823CDD9C);
PPC_FUNC_IMPL(__imp__sub_823CDD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CDDA0"))) PPC_WEAK_FUNC(sub_823CDDA0);
PPC_FUNC_IMPL(__imp__sub_823CDDA0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x823cddf8
	if (ctx.cr6.eq) goto loc_823CDDF8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x823cddf8
	if (ctx.cr6.eq) goto loc_823CDDF8;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x823cddf8
	if (ctx.cr6.eq) goto loc_823CDDF8;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x823cddf8
	if (ctx.cr6.eq) goto loc_823CDDF8;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x823cddf8
	if (ctx.cr6.eq) goto loc_823CDDF8;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x823cddf8
	if (ctx.cr6.eq) goto loc_823CDDF8;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x823cddfc
	if (!ctx.cr6.eq) goto loc_823CDDFC;
loc_823CDDF8:
	// li r4,1
	ctx.r4.s64 = 1;
loc_823CDDFC:
	// bl 0x8223af80
	ctx.lr = 0x823CDE00;
	sub_8223AF80(ctx, base);
	// bl 0x8223aa28
	ctx.lr = 0x823CDE04;
	sub_8223AA28(ctx, base);
	// bl 0x822e6048
	ctx.lr = 0x823CDE08;
	sub_822E6048(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8223a960
	ctx.lr = 0x823CDE10;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x822361c8
	ctx.lr = 0x823CDE24;
	sub_822361C8(ctx, base);
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r11,-4760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// addi r4,r11,1964
	ctx.r4.s64 = ctx.r11.s64 + 1964;
	// bl 0x82248a40
	ctx.lr = 0x823CDE3C;
	sub_82248A40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x8223aa28
	ctx.lr = 0x823CDE44;
	sub_8223AA28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82237d70
	ctx.lr = 0x823CDE4C;
	sub_82237D70(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r11,-4760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,1964
	ctx.r3.s64 = ctx.r11.s64 + 1964;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82248a40
	ctx.lr = 0x823CDE68;
	sub_82248A40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_823CDE84"))) PPC_WEAK_FUNC(sub_823CDE84);
PPC_FUNC_IMPL(__imp__sub_823CDE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CDE88"))) PPC_WEAK_FUNC(sub_823CDE88);
PPC_FUNC_IMPL(__imp__sub_823CDE88) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,276
	ctx.r11.s64 = ctx.r3.s64 + 276;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_823CDE94:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,220(r6)
	PPC_STORE_U32(ctx.r6.u32 + 220, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,220(r6)
	PPC_STORE_U32(ctx.r6.u32 + 220, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,220(r6)
	PPC_STORE_U32(ctx.r6.u32 + 220, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,220(r6)
	PPC_STORE_U32(ctx.r6.u32 + 220, ctx.r10.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r7,50
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 50, ctx.xer);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,220(r6)
	PPC_STORE_U32(ctx.r6.u32 + 220, ctx.r10.u32);
	// blt cr6,0x823cde94
	if (ctx.cr6.lt) goto loc_823CDE94;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CDF48"))) PPC_WEAK_FUNC(sub_823CDF48);
PPC_FUNC_IMPL(__imp__sub_823CDF48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,272
	ctx.r10.s64 = ctx.r3.s64 + 272;
loc_823CDF50:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x823cdf70
	if (ctx.cr6.eq) goto loc_823CDF70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// blt cr6,0x823cdf50
	if (ctx.cr6.lt) goto loc_823CDF50;
	// blr 
	return;
loc_823CDF70:
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CDF80"))) PPC_WEAK_FUNC(sub_823CDF80);
PPC_FUNC_IMPL(__imp__sub_823CDF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823CDF88;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823cdfac
	if (!ctx.cr6.eq) goto loc_823CDFAC;
loc_823CDFA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823CDFAC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x823cdfa0
	if (!ctx.cr6.gt) goto loc_823CDFA0;
	// rlwinm r26,r31,29,3,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8223a960
	ctx.lr = 0x823CDFC0;
	sub_8223A960(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8223aa28
	ctx.lr = 0x823CDFC8;
	sub_8223AA28(ctx, base);
	// bl 0x822e6048
	ctx.lr = 0x823CDFCC;
	sub_822E6048(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x822361c8
	ctx.lr = 0x823CDFE4;
	sub_822361C8(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x823CDFE8;
	sub_82163DF0(ctx, base);
	// addi r29,r3,96
	ctx.r29.s64 = ctx.r3.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x823CDFF8;
	sub_822AA648(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823ce078
	if (ctx.cr6.eq) goto loc_823CE078;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
loc_823CE00C:
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823ce078
	if (!ctx.cr6.lt) goto loc_823CE078;
	// lhz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x823ce068
	if (ctx.cr6.eq) goto loc_823CE068;
	// lhz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,65535
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 65535, ctx.xer);
	// beq cr6,0x823ce068
	if (ctx.cr6.eq) goto loc_823CE068;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x823ce068
	if (!ctx.cr6.eq) goto loc_823CE068;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822368d8
	ctx.lr = 0x823CE044;
	sub_822368D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce068
	if (ctx.cr6.eq) goto loc_823CE068;
	// lbz r11,43(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823ce068
	if (ctx.cr6.eq) goto loc_823CE068;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stwu r28,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
loc_823CE068:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823ce00c
	if (ctx.cr6.lt) goto loc_823CE00C;
loc_823CE078:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823CE084"))) PPC_WEAK_FUNC(sub_823CE084);
PPC_FUNC_IMPL(__imp__sub_823CE084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE088"))) PPC_WEAK_FUNC(sub_823CE088);
PPC_FUNC_IMPL(__imp__sub_823CE088) {
	PPC_FUNC_PROLOGUE();
	// b 0x823cdf80
	sub_823CDF80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CE08C"))) PPC_WEAK_FUNC(sub_823CE08C);
PPC_FUNC_IMPL(__imp__sub_823CE08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE090"))) PPC_WEAK_FUNC(sub_823CE090);
PPC_FUNC_IMPL(__imp__sub_823CE090) {
	PPC_FUNC_PROLOGUE();
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
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// addi r11,r11,-29632
	ctx.r11.s64 = ctx.r11.s64 + -29632;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823ce0cc
	if (ctx.cr6.eq) goto loc_823CE0CC;
loc_823CE0C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ce128
	goto loc_823CE128;
loc_823CE0CC:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r31,-784(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -784);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ce0c4
	if (ctx.cr6.eq) goto loc_823CE0C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CE0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x823CE0FC;
	sub_821EBB58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823CE10C;
	sub_82248A40(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823CE124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823CE128:
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

__attribute__((alias("__imp__sub_823CE140"))) PPC_WEAK_FUNC(sub_823CE140);
PPC_FUNC_IMPL(__imp__sub_823CE140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,-28308
	ctx.r10.s64 = ctx.r10.s64 + -28308;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823CE158:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ce158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823CE158;
	// b 0x823cd490
	sub_823CD490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CE168"))) PPC_WEAK_FUNC(sub_823CE168);
PPC_FUNC_IMPL(__imp__sub_823CE168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823CE170;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-28308
	ctx.r11.s64 = ctx.r11.s64 + -28308;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ce3dc
	if (ctx.cr6.eq) goto loc_823CE3DC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ce3dc
	if (ctx.cr6.eq) goto loc_823CE3DC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823ce284
	if (ctx.cr6.eq) goto loc_823CE284;
	// li r4,-1
	ctx.r4.s64 = -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823ce1b8
	if (ctx.cr6.eq) goto loc_823CE1B8;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
loc_823CE1B8:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823ce20c
	if (!ctx.cr6.lt) goto loc_823CE20C;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// bge 0x823ce27c
	if (!ctx.cr0.lt) goto loc_823CE27C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x823ce270
	if (!ctx.cr6.lt) goto loc_823CE270;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ce230
	if (ctx.cr6.eq) goto loc_823CE230;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
loc_823CE20C:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x823ce3dc
	if (ctx.cr6.eq) goto loc_823CE3DC;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CE228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CE230:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// beq cr6,0x823ce20c
	if (ctx.cr6.eq) goto loc_823CE20C;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CE268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CE270:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x823ce20c
	goto loc_823CE20C;
loc_823CE27C:
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// b 0x823ce20c
	goto loc_823CE20C;
loc_823CE284:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823ce3bc
	if (ctx.cr6.eq) goto loc_823CE3BC;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823ce2ac
	if (ctx.cr6.eq) goto loc_823CE2AC;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
loc_823CE2AC:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x823ce344
	if (!ctx.cr6.gt) goto loc_823CE344;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x823ce340
	if (!ctx.cr6.gt) goto loc_823CE340;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ce334
	if (ctx.cr6.lt) goto loc_823CE334;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823ce308
	if (ctx.cr6.eq) goto loc_823CE308;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// b 0x823ce344
	goto loc_823CE344;
loc_823CE308:
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// beq cr6,0x823ce344
	if (ctx.cr6.eq) goto loc_823CE344;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// b 0x823ce344
	goto loc_823CE344;
loc_823CE334:
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x823ce344
	goto loc_823CE344;
loc_823CE340:
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
loc_823CE344:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ce370
	if (ctx.cr6.lt) goto loc_823CE370;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823ce368
	if (ctx.cr6.eq) goto loc_823CE368;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// b 0x823ce370
	goto loc_823CE370;
loc_823CE368:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_823CE370:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x823ce394
	if (ctx.cr6.eq) goto loc_823CE394;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CE38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CE394:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x823ce3dc
	if (ctx.cr6.eq) goto loc_823CE3DC;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CE3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CE3BC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823ce3d0
	if (ctx.cr6.eq) goto loc_823CE3D0;
	// bl 0x823cd5a0
	ctx.lr = 0x823CE3C8;
	sub_823CD5A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CE3D0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823ce3dc
	if (ctx.cr6.eq) goto loc_823CE3DC;
	// bl 0x823ce3e8
	ctx.lr = 0x823CE3DC;
	sub_823CE3E8(ctx, base);
loc_823CE3DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823CE3E4"))) PPC_WEAK_FUNC(sub_823CE3E4);
PPC_FUNC_IMPL(__imp__sub_823CE3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE3E8"))) PPC_WEAK_FUNC(sub_823CE3E8);
PPC_FUNC_IMPL(__imp__sub_823CE3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823CE3F0;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// addis r22,r3,1
	ctx.r22.s64 = ctx.r3.s64 + 65536;
	// addi r30,r30,-28308
	ctx.r30.s64 = ctx.r30.s64 + -28308;
	// addis r24,r3,1
	ctx.r24.s64 = ctx.r3.s64 + 65536;
	// addis r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 65536;
	// addi r22,r22,-28284
	ctx.r22.s64 = ctx.r22.s64 + -28284;
	// addi r24,r24,-28296
	ctx.r24.s64 = ctx.r24.s64 + -28296;
	// addi r26,r26,-28300
	ctx.r26.s64 = ctx.r26.s64 + -28300;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addis r23,r3,1
	ctx.r23.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,0(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r23,r23,-28292
	ctx.r23.s64 = ctx.r23.s64 + -28292;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// lwz r20,0(r23)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// add r27,r6,r9
	ctx.r27.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// blt cr6,0x823ce460
	if (ctx.cr6.lt) goto loc_823CE460;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
loc_823CE460:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823ce4dc
	if (!ctx.cr6.gt) goto loc_823CE4DC;
loc_823CE470:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823ce4d8
	if (!ctx.cr6.lt) goto loc_823CE4D8;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r10,r11,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r11.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ce168
	ctx.lr = 0x823CE4AC;
	sub_823CE168(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x823ce4c4
	if (ctx.cr6.lt) goto loc_823CE4C4;
	// li r21,1
	ctx.r21.s64 = 1;
loc_823CE4C4:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ce470
	if (ctx.cr6.lt) goto loc_823CE470;
	// b 0x823ce4dc
	goto loc_823CE4DC;
loc_823CE4D8:
	// li r21,1
	ctx.r21.s64 = 1;
loc_823CE4DC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x823ce524
	if (ctx.cr6.eq) goto loc_823CE524;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r7,0
	ctx.r7.s64 = 0;
	// xoris r6,r10,32768
	ctx.r6.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// ori r4,r7,37248
	ctx.r4.u64 = ctx.r7.u64 | 37248;
	// subf r3,r10,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r10.s64;
	// addc r10,r3,r6
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 & ctx.r5.u64;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stwx r7,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// stw r6,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r6.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_823CE524:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpw cr6,r20,r10
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823ce534
	if (!ctx.cr6.gt) goto loc_823CE534;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_823CE534:
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r7,r9,37248
	ctx.r7.u64 = ctx.r9.u64 | 37248;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823CE550"))) PPC_WEAK_FUNC(sub_823CE550);
PPC_FUNC_IMPL(__imp__sub_823CE550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823CE558;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8223a960
	ctx.lr = 0x823CE570;
	sub_8223A960(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82236510
	ctx.lr = 0x823CE580;
	sub_82236510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82236510
	ctx.lr = 0x823CE594;
	sub_82236510(ctx, base);
	// lbz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// lbz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823ce5b0
	if (!ctx.cr6.lt) goto loc_823CE5B0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823CE5B0:
	// ble cr6,0x823ce5c0
	if (!ctx.cr6.gt) goto loc_823CE5C0;
loc_823CE5B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823CE5C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823ce5b4
	if (ctx.cr6.gt) goto loc_823CE5B4;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823CE5E8"))) PPC_WEAK_FUNC(sub_823CE5E8);
PPC_FUNC_IMPL(__imp__sub_823CE5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823CE5F0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8223a960
	ctx.lr = 0x823CE608;
	sub_8223A960(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x822368b0
	ctx.lr = 0x823CE618;
	sub_822368B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822368b0
	ctx.lr = 0x823CE62C;
	sub_822368B0(ctx, base);
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CE64C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4904(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823CE66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a360
	ctx.lr = 0x823CE678;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823ce68c
	if (!ctx.cr6.lt) goto loc_823CE68C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823CE68C:
	// ble cr6,0x823ce69c
	if (!ctx.cr6.gt) goto loc_823CE69C;
loc_823CE690:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823CE69C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823ce690
	if (ctx.cr6.gt) goto loc_823CE690;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823CE6C4"))) PPC_WEAK_FUNC(sub_823CE6C4);
PPC_FUNC_IMPL(__imp__sub_823CE6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE6C8"))) PPC_WEAK_FUNC(sub_823CE6C8);
PPC_FUNC_IMPL(__imp__sub_823CE6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823CE6D0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8223a960
	ctx.lr = 0x823CE6E8;
	sub_8223A960(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82236510
	ctx.lr = 0x823CE6F8;
	sub_82236510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82236510
	ctx.lr = 0x823CE70C;
	sub_82236510(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,17(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// bl 0x820c7888
	ctx.lr = 0x823CE71C;
	sub_820C7888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ce750
	if (!ctx.cr6.eq) goto loc_823CE750;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823ce740
	if (!ctx.cr6.gt) goto loc_823CE740;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823CE740:
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823CE750:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823CE758"))) PPC_WEAK_FUNC(sub_823CE758);
PPC_FUNC_IMPL(__imp__sub_823CE758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823CE760;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r27,1964(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// bl 0x82163df0
	ctx.lr = 0x823CE784;
	sub_82163DF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82164d00
	ctx.lr = 0x823CE790;
	sub_82164D00(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x823CE794;
	sub_82163DF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82164d38
	ctx.lr = 0x823CE7A0;
	sub_82164D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823CE7A8;
	sub_82163DF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82164d38
	ctx.lr = 0x823CE7B4;
	sub_82164D38(ctx, base);
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823ce7d0
	if (!ctx.cr6.gt) goto loc_823CE7D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823CE7D0:
	// bge cr6,0x823ce7e0
	if (!ctx.cr6.lt) goto loc_823CE7E0;
loc_823CE7D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823CE7E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823ce7d4
	if (ctx.cr6.gt) goto loc_823CE7D4;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823CE808"))) PPC_WEAK_FUNC(sub_823CE808);
PPC_FUNC_IMPL(__imp__sub_823CE808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823CE810;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823cd758
	ctx.lr = 0x823CE81C;
	sub_823CD758(ctx, base);
	// lwz r31,644(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 644);
	// bl 0x82183078
	ctx.lr = 0x823CE824;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CE830;
	sub_821837D0(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// li r29,9315
	ctx.r29.s64 = 9315;
	// addi r27,r11,2872
	ctx.r27.s64 = ctx.r11.s64 + 2872;
loc_823CE83C:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_823CE844:
	// bl 0x82183850
	ctx.lr = 0x823CE848;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x823ce860
	if (ctx.cr6.eq) goto loc_823CE860;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x823CE85C;
	sub_82183448(ctx, base);
	// b 0x823ce868
	goto loc_823CE868;
loc_823CE860:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x823CE868;
	sub_821845A0(ctx, base);
loc_823CE868:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r3.u32);
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8218a5f0
	ctx.lr = 0x823CE880;
	sub_8218A5F0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x823ce844
	if (ctx.cr6.lt) goto loc_823CE844;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplwi cr6,r29,9323
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 9323, ctx.xer);
	// blt cr6,0x823ce83c
	if (ctx.cr6.lt) goto loc_823CE83C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CE8A0;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823CE8A8"))) PPC_WEAK_FUNC(sub_823CE8A8);
PPC_FUNC_IMPL(__imp__sub_823CE8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823cda98
	ctx.lr = 0x823CE8C8;
	sub_823CDA98(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ce8e4
	if (ctx.cr6.eq) goto loc_823CE8E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823CE8E0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CE8E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CE8FC"))) PPC_WEAK_FUNC(sub_823CE8FC);
PPC_FUNC_IMPL(__imp__sub_823CE8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE900"))) PPC_WEAK_FUNC(sub_823CE900);
PPC_FUNC_IMPL(__imp__sub_823CE900) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23400
	ctx.r11.s64 = ctx.r11.s64 + -23400;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwzx r6,r7,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// lwzx r7,r7,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// and r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ctx.r9.u64;
	// addic r5,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 & ctx.r9.u64;
	// subfe r7,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// subfe r6,r10,r6
	temp.u8 = (~ctx.r10.u32 + ctx.r6.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// subfe r5,r9,r4
	temp.u8 = (~ctx.r9.u32 + ctx.r4.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// subfe r4,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x823ce168
	ctx.lr = 0x823CE980;
	sub_823CE168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c53c0
	ctx.lr = 0x823CE988;
	sub_823C53C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CE99C"))) PPC_WEAK_FUNC(sub_823CE99C);
PPC_FUNC_IMPL(__imp__sub_823CE99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE9A0"))) PPC_WEAK_FUNC(sub_823CE9A0);
PPC_FUNC_IMPL(__imp__sub_823CE9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823CE9A8;
	sub_8224878C(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8223ad48
	ctx.lr = 0x823CE9B8;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ce9cc
	if (!ctx.cr6.eq) goto loc_823CE9CC;
loc_823CE9C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CE9CC:
	// bl 0x8223aa28
	ctx.lr = 0x823CE9D0;
	sub_8223AA28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ce9c0
	if (ctx.cr6.eq) goto loc_823CE9C0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82237588
	ctx.lr = 0x823CE9E4;
	sub_82237588(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82238070
	ctx.lr = 0x823CEA00;
	sub_82238070(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82237370
	ctx.lr = 0x823CEA20;
	sub_82237370(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-4760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// bl 0x823c9090
	ctx.lr = 0x823CEA40;
	sub_823C9090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ce9c0
	if (ctx.cr6.eq) goto loc_823CE9C0;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x823cea84
	if (ctx.cr6.eq) goto loc_823CEA84;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x823cea84
	if (ctx.cr6.eq) goto loc_823CEA84;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x823cea84
	if (ctx.cr6.eq) goto loc_823CEA84;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// beq cr6,0x823cea84
	if (ctx.cr6.eq) goto loc_823CEA84;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// beq cr6,0x823cea84
	if (ctx.cr6.eq) goto loc_823CEA84;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// beq cr6,0x823cea84
	if (ctx.cr6.eq) goto loc_823CEA84;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// bne cr6,0x823cea88
	if (!ctx.cr6.eq) goto loc_823CEA88;
loc_823CEA84:
	// li r7,1
	ctx.r7.s64 = 1;
loc_823CEA88:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822392f8
	ctx.lr = 0x823CEAA4;
	sub_822392F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823CEAB0"))) PPC_WEAK_FUNC(sub_823CEAB0);
PPC_FUNC_IMPL(__imp__sub_823CEAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823CEAB8;
	sub_82248784(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8223ad48
	ctx.lr = 0x823CEAC8;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ceadc
	if (!ctx.cr6.eq) goto loc_823CEADC;
loc_823CEAD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823CEADC:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r29,-4760(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// bl 0x8223aa28
	ctx.lr = 0x823CEAE8;
	sub_8223AA28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cead0
	if (ctx.cr6.eq) goto loc_823CEAD0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82237588
	ctx.lr = 0x823CEAFC;
	sub_82237588(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,1964(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1964);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82238070
	ctx.lr = 0x823CEB18;
	sub_82238070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82237538
	ctx.lr = 0x823CEB24;
	sub_82237538(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8214a2d8
	ctx.lr = 0x823CEB30;
	sub_8214A2D8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8214a2d8
	ctx.lr = 0x823CEB3C;
	sub_8214A2D8(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823c9090
	ctx.lr = 0x823CEB58;
	sub_823C9090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cead0
	if (ctx.cr6.eq) goto loc_823CEAD0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8214a2d8
	ctx.lr = 0x823CEB6C;
	sub_8214A2D8(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x821847c0
	ctx.lr = 0x823CEB7C;
	sub_821847C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ceba4
	if (ctx.cr6.eq) goto loc_823CEBA4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822392f8
	ctx.lr = 0x823CEBA4;
	sub_822392F8(ctx, base);
loc_823CEBA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823CEBB0"))) PPC_WEAK_FUNC(sub_823CEBB0);
PPC_FUNC_IMPL(__imp__sub_823CEBB0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x8240a940
	sub_8240A940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEBCC"))) PPC_WEAK_FUNC(sub_823CEBCC);
PPC_FUNC_IMPL(__imp__sub_823CEBCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CEBD0"))) PPC_WEAK_FUNC(sub_823CEBD0);
PPC_FUNC_IMPL(__imp__sub_823CEBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823CEBD8;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823ced1c
	if (!ctx.cr6.gt) goto loc_823CED1C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bgt cr6,0x823ced1c
	if (ctx.cr6.gt) goto loc_823CED1C;
	// bl 0x82182e90
	ctx.lr = 0x823CEC00;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x823CEC08;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CEC14;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x823CEC18;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x823CEC24;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x823CEC2C;
	sub_821830F8(ctx, base);
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// ori r9,r10,21845
	ctx.r9.u64 = ctx.r10.u64 | 21845;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x823cec4c
	if (ctx.cr6.gt) goto loc_823CEC4C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x823cec50
	goto loc_823CEC50;
loc_823CEC4C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823CEC50:
	// bl 0x82080d68
	ctx.lr = 0x823CEC54;
	sub_82080D68(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82084748
	ctx.lr = 0x823CEC68;
	sub_82084748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823cecc4
	if (!ctx.cr6.gt) goto loc_823CECC4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_823CEC78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x82163df0
	ctx.lr = 0x823CEC84;
	sub_82163DF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x821651e0
	ctx.lr = 0x823CEC90;
	sub_821651E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cecb8
	if (ctx.cr6.eq) goto loc_823CECB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
loc_823CECB8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x823cec78
	if (!ctx.cr0.eq) goto loc_823CEC78;
loc_823CECC4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823cecd8
	if (ctx.cr6.eq) goto loc_823CECD8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x823CECD8;
	sub_82183E40(ctx, base);
loc_823CECD8:
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// blt cr6,0x823ced00
	if (ctx.cr6.lt) goto loc_823CED00;
	// bne cr6,0x823ced08
	if (!ctx.cr6.eq) goto loc_823CED08;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x823CECEC;
	sub_821830F8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CECF4;
	sub_821837D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823CED00:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x823CED08;
	sub_821830F8(ctx, base);
loc_823CED08:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x823CED10;
	sub_821837D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823CED1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82084748
	ctx.lr = 0x823CED30;
	sub_82084748(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823CED38"))) PPC_WEAK_FUNC(sub_823CED38);
PPC_FUNC_IMPL(__imp__sub_823CED38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823ccf60
	ctx.lr = 0x823CED50;
	sub_823CCF60(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,37292
	ctx.r11.u64 = ctx.r11.u64 | 37292;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CED74"))) PPC_WEAK_FUNC(sub_823CED74);
PPC_FUNC_IMPL(__imp__sub_823CED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CED78"))) PPC_WEAK_FUNC(sub_823CED78);
PPC_FUNC_IMPL(__imp__sub_823CED78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 828, ctx.r11.u32);
	// stw r10,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r10.u32);
	// b 0x823ccfa8
	sub_823CCFA8(ctx, base);
	return;
}

