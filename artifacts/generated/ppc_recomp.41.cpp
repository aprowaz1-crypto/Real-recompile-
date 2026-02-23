#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821EAD24"))) PPC_WEAK_FUNC(sub_821EAD24);
PPC_FUNC_IMPL(__imp__sub_821EAD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAD28"))) PPC_WEAK_FUNC(sub_821EAD28);
PPC_FUNC_IMPL(__imp__sub_821EAD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-9776
	ctx.r9.s64 = ctx.r11.s64 + -9776;
	// addi r8,r10,-9912
	ctx.r8.s64 = ctx.r10.s64 + -9912;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823c52a0
	ctx.lr = 0x821EAD64;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x821EAD6C;
	sub_821857F0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821ead88
	if (ctx.cr6.eq) goto loc_821EAD88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821EAD84;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821EAD88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EADA0"))) PPC_WEAK_FUNC(sub_821EADA0);
PPC_FUNC_IMPL(__imp__sub_821EADA0) {
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eadf8
	if (ctx.cr6.eq) goto loc_821EADF8;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EADCC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eadf8
	if (ctx.cr6.eq) goto loc_821EADF8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eadf8
	if (ctx.cr6.eq) goto loc_821EADF8;
	// bl 0x821eacc8
	ctx.lr = 0x821EADE4;
	sub_821EACC8(ctx, base);
	// addi r3,r3,308
	ctx.r3.s64 = ctx.r3.s64 + 308;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821EADF8:
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

__attribute__((alias("__imp__sub_821EAE0C"))) PPC_WEAK_FUNC(sub_821EAE0C);
PPC_FUNC_IMPL(__imp__sub_821EAE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAE10"))) PPC_WEAK_FUNC(sub_821EAE10);
PPC_FUNC_IMPL(__imp__sub_821EAE10) {
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eae68
	if (ctx.cr6.eq) goto loc_821EAE68;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EAE3C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eae68
	if (ctx.cr6.eq) goto loc_821EAE68;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eae68
	if (ctx.cr6.eq) goto loc_821EAE68;
	// bl 0x821eacc8
	ctx.lr = 0x821EAE54;
	sub_821EACC8(ctx, base);
	// lwz r3,1720(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821EAE68:
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

__attribute__((alias("__imp__sub_821EAE7C"))) PPC_WEAK_FUNC(sub_821EAE7C);
PPC_FUNC_IMPL(__imp__sub_821EAE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAE80"))) PPC_WEAK_FUNC(sub_821EAE80);
PPC_FUNC_IMPL(__imp__sub_821EAE80) {
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eaf04
	if (ctx.cr6.eq) goto loc_821EAF04;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EAEAC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eaf04
	if (ctx.cr6.eq) goto loc_821EAF04;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eaf04
	if (ctx.cr6.eq) goto loc_821EAF04;
	// bl 0x821eacc8
	ctx.lr = 0x821EAEC4;
	sub_821EACC8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EAED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eaf04
	if (ctx.cr6.eq) goto loc_821EAF04;
	// bl 0x821eacc8
	ctx.lr = 0x821EAEE0;
	sub_821EACC8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EAEF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4904);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821EAF04:
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

__attribute__((alias("__imp__sub_821EAF18"))) PPC_WEAK_FUNC(sub_821EAF18);
PPC_FUNC_IMPL(__imp__sub_821EAF18) {
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eaf9c
	if (ctx.cr6.eq) goto loc_821EAF9C;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EAF44;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eaf9c
	if (ctx.cr6.eq) goto loc_821EAF9C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eaf9c
	if (ctx.cr6.eq) goto loc_821EAF9C;
	// bl 0x821eacc8
	ctx.lr = 0x821EAF5C;
	sub_821EACC8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EAF6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eaf9c
	if (ctx.cr6.eq) goto loc_821EAF9C;
	// bl 0x821eacc8
	ctx.lr = 0x821EAF78;
	sub_821EACC8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EAF88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4908(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4908);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821EAF9C:
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

__attribute__((alias("__imp__sub_821EAFB0"))) PPC_WEAK_FUNC(sub_821EAFB0);
PPC_FUNC_IMPL(__imp__sub_821EAFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821EAFB8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x82188378
	ctx.lr = 0x821EAFE0;
	sub_82188378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82185740
	ctx.lr = 0x821EAFF0;
	sub_82185740(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823c58b0
	ctx.lr = 0x821EB000;
	sub_823C58B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-9624
	ctx.r8.s64 = ctx.r11.s64 + -9624;
	// addi r7,r10,-9632
	ctx.r7.s64 = ctx.r10.s64 + -9632;
	// addi r6,r9,-9768
	ctx.r6.s64 = ctx.r9.s64 + -9768;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// bl 0x82188338
	ctx.lr = 0x821EB030;
	sub_82188338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// bl 0x82201ec8
	ctx.lr = 0x821EB040;
	sub_82201EC8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r29.u32);
	// li r5,84
	ctx.r5.s64 = 84;
	// addi r3,r31,1724
	ctx.r3.s64 = ctx.r31.s64 + 1724;
	// bl 0x82200b70
	ctx.lr = 0x821EB058;
	sub_82200B70(ctx, base);
	// addi r28,r31,2924
	ctx.r28.s64 = ctx.r31.s64 + 2924;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82185740
	ctx.lr = 0x821EB06C;
	sub_82185740(ctx, base);
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823c58b0
	ctx.lr = 0x821EB07C;
	sub_823C58B0(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r29,3168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3168, ctx.r29.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r29,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r29.u32);
	// addi r3,r5,-9776
	ctx.r3.s64 = ctx.r5.s64 + -9776;
	// stw r29,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r29.u32);
	// addi r11,r4,-9912
	ctx.r11.s64 = ctx.r4.s64 + -9912;
	// stw r28,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,2924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2924, ctx.r3.u32);
	// stw r11,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r11.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r10,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r10.u32);
	// beq cr6,0x821eb0e0
	if (ctx.cr6.eq) goto loc_821EB0E0;
	// li r3,5056
	ctx.r3.s64 = 5056;
	// bl 0x82080000
	ctx.lr = 0x821EB0C0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb0d8
	if (ctx.cr6.eq) goto loc_821EB0D8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822020f8
	ctx.lr = 0x821EB0D4;
	sub_822020F8(ctx, base);
	// b 0x821eb0dc
	goto loc_821EB0DC;
loc_821EB0D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821EB0DC:
	// stw r3,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r3.u32);
loc_821EB0E0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// stw r27,3184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3184, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3192, ctx.r29.u32);
	// stw r11,3188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3188, ctx.r11.u32);
	// stw r29,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r29.u32);
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r28,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821EB110"))) PPC_WEAK_FUNC(sub_821EB110);
PPC_FUNC_IMPL(__imp__sub_821EB110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821eab50
	ctx.lr = 0x821EB130;
	sub_821EAB50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb14c
	if (ctx.cr6.eq) goto loc_821EB14C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821EB148;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821EB14C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB164"))) PPC_WEAK_FUNC(sub_821EB164);
PPC_FUNC_IMPL(__imp__sub_821EB164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB168"))) PPC_WEAK_FUNC(sub_821EB168);
PPC_FUNC_IMPL(__imp__sub_821EB168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821EB170;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r31,-780(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821eb220
	if (ctx.cr6.eq) goto loc_821EB220;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB1A4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb1b8
	if (ctx.cr6.eq) goto loc_821EB1B8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821eb220
	if (!ctx.cr6.eq) goto loc_821EB220;
loc_821EB1B8:
	// lwz r31,-780(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821eb220
	if (ctx.cr6.eq) goto loc_821EB220;
	// bl 0x82183078
	ctx.lr = 0x821EB1C8;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EB1D4;
	sub_821837D0(ctx, base);
	// li r3,3196
	ctx.r3.s64 = 3196;
	// bl 0x82080000
	ctx.lr = 0x821EB1DC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb200
	if (ctx.cr6.eq) goto loc_821EB200;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821eafb0
	ctx.lr = 0x821EB1F8;
	sub_821EAFB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821eb204
	goto loc_821EB204;
loc_821EB200:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821EB204:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EB218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EB220;
	sub_821837D0(ctx, base);
loc_821EB220:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821EB228"))) PPC_WEAK_FUNC(sub_821EB228);
PPC_FUNC_IMPL(__imp__sub_821EB228) {
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb27c
	if (ctx.cr6.eq) goto loc_821EB27C;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB254;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb27c
	if (ctx.cr6.eq) goto loc_821EB27C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb27c
	if (ctx.cr6.eq) goto loc_821EB27C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EB27C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EB27C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB28C"))) PPC_WEAK_FUNC(sub_821EB28C);
PPC_FUNC_IMPL(__imp__sub_821EB28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB290"))) PPC_WEAK_FUNC(sub_821EB290);
PPC_FUNC_IMPL(__imp__sub_821EB290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb2f0
	if (ctx.cr6.eq) goto loc_821EB2F0;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB2CC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb2f0
	if (ctx.cr6.eq) goto loc_821EB2F0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb2f0
	if (ctx.cr6.eq) goto loc_821EB2F0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x822029e8
	ctx.lr = 0x821EB2F0;
	sub_822029E8(ctx, base);
loc_821EB2F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB308"))) PPC_WEAK_FUNC(sub_821EB308);
PPC_FUNC_IMPL(__imp__sub_821EB308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb368
	if (ctx.cr6.eq) goto loc_821EB368;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB344;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb368
	if (ctx.cr6.eq) goto loc_821EB368;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb368
	if (ctx.cr6.eq) goto loc_821EB368;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x82202528
	ctx.lr = 0x821EB368;
	sub_82202528(ctx, base);
loc_821EB368:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB380"))) PPC_WEAK_FUNC(sub_821EB380);
PPC_FUNC_IMPL(__imp__sub_821EB380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb3d4
	if (ctx.cr6.eq) goto loc_821EB3D4;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB3B4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb3d4
	if (ctx.cr6.eq) goto loc_821EB3D4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb3d4
	if (ctx.cr6.eq) goto loc_821EB3D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x82202a58
	ctx.lr = 0x821EB3D4;
	sub_82202A58(ctx, base);
loc_821EB3D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB3E8"))) PPC_WEAK_FUNC(sub_821EB3E8);
PPC_FUNC_IMPL(__imp__sub_821EB3E8) {
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb430
	if (ctx.cr6.eq) goto loc_821EB430;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB414;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb430
	if (ctx.cr6.eq) goto loc_821EB430;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb430
	if (ctx.cr6.eq) goto loc_821EB430;
	// addi r3,r11,1724
	ctx.r3.s64 = ctx.r11.s64 + 1724;
	// bl 0x82202778
	ctx.lr = 0x821EB430;
	sub_82202778(ctx, base);
loc_821EB430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB440"))) PPC_WEAK_FUNC(sub_821EB440);
PPC_FUNC_IMPL(__imp__sub_821EB440) {
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb4a4
	if (ctx.cr6.eq) goto loc_821EB4A4;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB46C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb4a4
	if (ctx.cr6.eq) goto loc_821EB4A4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb4a4
	if (ctx.cr6.eq) goto loc_821EB4A4;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// addi r3,r11,308
	ctx.r3.s64 = ctx.r11.s64 + 308;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821EB494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821EB4A4:
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

__attribute__((alias("__imp__sub_821EB4B8"))) PPC_WEAK_FUNC(sub_821EB4B8);
PPC_FUNC_IMPL(__imp__sub_821EB4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb514
	if (ctx.cr6.eq) goto loc_821EB514;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB4EC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb514
	if (ctx.cr6.eq) goto loc_821EB514;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb514
	if (ctx.cr6.eq) goto loc_821EB514;
	// lwz r10,1720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1720);
	// stw r31,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821eb514
	if (ctx.cr6.eq) goto loc_821EB514;
	// stw r31,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r31.u32);
loc_821EB514:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB528"))) PPC_WEAK_FUNC(sub_821EB528);
PPC_FUNC_IMPL(__imp__sub_821EB528) {
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb590
	if (ctx.cr6.eq) goto loc_821EB590;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB554;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb590
	if (ctx.cr6.eq) goto loc_821EB590;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb590
	if (ctx.cr6.eq) goto loc_821EB590;
	// bl 0x821eacc8
	ctx.lr = 0x821EB56C;
	sub_821EACC8(ctx, base);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821eb590
	if (ctx.cr6.eq) goto loc_821EB590;
	// bl 0x821eacc8
	ctx.lr = 0x821EB57C;
	sub_821EACC8(ctx, base);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EB590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EB590:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB5A0"))) PPC_WEAK_FUNC(sub_821EB5A0);
PPC_FUNC_IMPL(__imp__sub_821EB5A0) {
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb624
	if (ctx.cr6.eq) goto loc_821EB624;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB5CC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb624
	if (ctx.cr6.eq) goto loc_821EB624;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb624
	if (ctx.cr6.eq) goto loc_821EB624;
	// bl 0x821eacc8
	ctx.lr = 0x821EB5E4;
	sub_821EACC8(ctx, base);
	// lwz r11,1720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb624
	if (ctx.cr6.eq) goto loc_821EB624;
	// bl 0x821eacc8
	ctx.lr = 0x821EB5F4;
	sub_821EACC8(ctx, base);
	// lwz r3,1720(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EB60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821eacc8
	ctx.lr = 0x821EB610;
	sub_821EACC8(ctx, base);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821EB624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EB624:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB634"))) PPC_WEAK_FUNC(sub_821EB634);
PPC_FUNC_IMPL(__imp__sub_821EB634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB638"))) PPC_WEAK_FUNC(sub_821EB638);
PPC_FUNC_IMPL(__imp__sub_821EB638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb69c
	if (ctx.cr6.eq) goto loc_821EB69C;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB670;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb69c
	if (ctx.cr6.eq) goto loc_821EB69C;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821eb69c
	if (ctx.cr6.eq) goto loc_821EB69C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x823c5678
	ctx.lr = 0x821EB690;
	sub_823C5678(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2940
	ctx.r3.s64 = ctx.r31.s64 + 2940;
	// bl 0x823c5678
	ctx.lr = 0x821EB69C;
	sub_823C5678(ctx, base);
loc_821EB69C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB6B4"))) PPC_WEAK_FUNC(sub_821EB6B4);
PPC_FUNC_IMPL(__imp__sub_821EB6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB6B8"))) PPC_WEAK_FUNC(sub_821EB6B8);
PPC_FUNC_IMPL(__imp__sub_821EB6B8) {
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb6fc
	if (ctx.cr6.eq) goto loc_821EB6FC;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB6E4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb6fc
	if (ctx.cr6.eq) goto loc_821EB6FC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb6fc
	if (ctx.cr6.eq) goto loc_821EB6FC;
	// bl 0x821eacc8
	ctx.lr = 0x821EB6FC;
	sub_821EACC8(ctx, base);
loc_821EB6FC:
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

__attribute__((alias("__imp__sub_821EB710"))) PPC_WEAK_FUNC(sub_821EB710);
PPC_FUNC_IMPL(__imp__sub_821EB710) {
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb768
	if (ctx.cr6.eq) goto loc_821EB768;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB73C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb768
	if (ctx.cr6.eq) goto loc_821EB768;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb768
	if (ctx.cr6.eq) goto loc_821EB768;
	// bl 0x821eacc8
	ctx.lr = 0x821EB754;
	sub_821EACC8(ctx, base);
	// lwz r3,3172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3172);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821EB768:
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

__attribute__((alias("__imp__sub_821EB77C"))) PPC_WEAK_FUNC(sub_821EB77C);
PPC_FUNC_IMPL(__imp__sub_821EB77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB780"))) PPC_WEAK_FUNC(sub_821EB780);
PPC_FUNC_IMPL(__imp__sub_821EB780) {
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
	// lwz r11,3160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821eb844
	if (ctx.cr6.lt) goto loc_821EB844;
	// beq cr6,0x821eb81c
	if (ctx.cr6.eq) goto loc_821EB81C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821eb918
	if (!ctx.cr6.lt) goto loc_821EB918;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r3,r3,276
	ctx.r3.s64 = ctx.r3.s64 + 276;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EB7C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb7e8
	if (ctx.cr6.eq) goto loc_821EB7E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EB7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EB7E8:
	// lwz r3,1688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb918
	if (ctx.cr6.eq) goto loc_821EB918;
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821eb918
	if (ctx.cr6.eq) goto loc_821EB918;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,3148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// bl 0x822004b8
	ctx.lr = 0x821EB80C;
	sub_822004B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r11.u32);
	// stw r11,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r11.u32);
	// b 0x821eb918
	goto loc_821EB918;
loc_821EB81C:
	// lwz r11,3156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3156);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3156, ctx.r11.u32);
	// bne 0x821eb918
	if (!ctx.cr0.eq) goto loc_821EB918;
	// bl 0x821eacc8
	ctx.lr = 0x821EB830;
	sub_821EACC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb918
	if (ctx.cr6.eq) goto loc_821EB918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x821eb90c
	goto loc_821EB90C;
loc_821EB844:
	// lwz r3,1688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb8ec
	if (ctx.cr6.eq) goto loc_821EB8EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EB860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb8ec
	if (ctx.cr6.eq) goto loc_821EB8EC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821eb8b8
	if (ctx.cr6.eq) goto loc_821EB8B8;
	// addi r30,r31,276
	ctx.r30.s64 = ctx.r31.s64 + 276;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ff7f0
	ctx.lr = 0x821EB884;
	sub_821FF7F0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x821eb918
	if (ctx.cr6.eq) goto loc_821EB918;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EB8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb918
	if (ctx.cr6.eq) goto loc_821EB918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821eb908
	goto loc_821EB908;
loc_821EB8B8:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EB8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb918
	if (ctx.cr6.eq) goto loc_821EB918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x821eb910
	goto loc_821EB910;
loc_821EB8EC:
	// addi r31,r31,276
	ctx.r31.s64 = ctx.r31.s64 + 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ff7f0
	ctx.lr = 0x821EB8F8;
	sub_821FF7F0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821eb918
	if (ctx.cr6.eq) goto loc_821EB918;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821EB908:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
loc_821EB90C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_821EB910:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EB918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EB918:
	// bl 0x821eae80
	ctx.lr = 0x821EB91C;
	sub_821EAE80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eb92c
	if (ctx.cr6.eq) goto loc_821EB92C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821eb95c
	goto loc_821EB95C;
loc_821EB92C:
	// bl 0x821eaf18
	ctx.lr = 0x821EB930;
	sub_821EAF18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eb964
	if (ctx.cr6.eq) goto loc_821EB964;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,-784(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -784);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821eb95c
	if (ctx.cr6.eq) goto loc_821EB95C;
	// lwz r10,1812(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1812);
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_821EB95C:
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// stw r11,-4772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4772, ctx.r11.u32);
loc_821EB964:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB97C"))) PPC_WEAK_FUNC(sub_821EB97C);
PPC_FUNC_IMPL(__imp__sub_821EB97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB980"))) PPC_WEAK_FUNC(sub_821EB980);
PPC_FUNC_IMPL(__imp__sub_821EB980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821EB988;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebaa0
	if (ctx.cr6.eq) goto loc_821EBAA0;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EB9B4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ebaa0
	if (ctx.cr6.eq) goto loc_821EBAA0;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ebaa0
	if (ctx.cr6.eq) goto loc_821EBAA0;
	// lwz r3,1720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ebaa0
	if (ctx.cr6.eq) goto loc_821EBAA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EB9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x821eba88
	if (ctx.cr6.eq) goto loc_821EBA88;
	// lwz r11,-780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eba6c
	if (ctx.cr6.eq) goto loc_821EBA6C;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EBA08;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eba6c
	if (ctx.cr6.eq) goto loc_821EBA6C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eba6c
	if (ctx.cr6.eq) goto loc_821EBA6C;
	// lwz r10,1720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1720);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821eba6c
	if (ctx.cr6.eq) goto loc_821EBA6C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EBA3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eba6c
	if (ctx.cr6.eq) goto loc_821EBA6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r29.u32);
	// lwz r3,1720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3192, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821EBA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821eba88
	goto loc_821EBA88;
loc_821EBA6C:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,1720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3192, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822004b8
	ctx.lr = 0x821EBA84;
	sub_822004B8(ctx, base);
	// stw r30,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r30.u32);
loc_821EBA88:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821eba9c
	if (ctx.cr6.eq) goto loc_821EBA9C;
	// bl 0x821eb528
	ctx.lr = 0x821EBA94;
	sub_821EB528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821EBA9C:
	// bl 0x821eb5a0
	ctx.lr = 0x821EBAA0;
	sub_821EB5A0(ctx, base);
loc_821EBAA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821EBAA8"))) PPC_WEAK_FUNC(sub_821EBAA8);
PPC_FUNC_IMPL(__imp__sub_821EBAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebb3c
	if (ctx.cr6.eq) goto loc_821EBB3C;
	// lis r4,18509
	ctx.r4.s64 = 1213005824;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// bl 0x821882d0
	ctx.lr = 0x821EBAE0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ebb3c
	if (ctx.cr6.eq) goto loc_821EBB3C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebb3c
	if (ctx.cr6.eq) goto loc_821EBB3C;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// addi r31,r11,308
	ctx.r31.s64 = ctx.r11.s64 + 308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821EBB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x821ebb3c
	if (ctx.cr6.eq) goto loc_821EBB3C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb980
	ctx.lr = 0x821EBB20;
	sub_821EB980(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fffe0
	ctx.lr = 0x821EBB2C;
	sub_821FFFE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ffb38
	ctx.lr = 0x821EBB3C;
	sub_821FFB38(ctx, base);
loc_821EBB3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBB54"))) PPC_WEAK_FUNC(sub_821EBB54);
PPC_FUNC_IMPL(__imp__sub_821EBB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBB58"))) PPC_WEAK_FUNC(sub_821EBB58);
PPC_FUNC_IMPL(__imp__sub_821EBB58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,34463
	ctx.r9.u64 = ctx.r10.u64 | 34463;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,180
	ctx.r7.s64 = 180;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBB9C"))) PPC_WEAK_FUNC(sub_821EBB9C);
PPC_FUNC_IMPL(__imp__sub_821EBB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBBA0"))) PPC_WEAK_FUNC(sub_821EBBA0);
PPC_FUNC_IMPL(__imp__sub_821EBBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EBBA8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,6
	ctx.r10.s64 = 6;
	// ori r8,r11,34463
	ctx.r8.u64 = ctx.r11.u64 | 34463;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r8,1768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1768, ctx.r8.u32);
	// addi r11,r3,1788
	ctx.r11.s64 = ctx.r3.s64 + 1788;
	// stw r30,1772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1772, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,1764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1764, ctx.r29.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,1776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1776, ctx.r30.u32);
	// stw r30,1784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1784, ctx.r30.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821EBBE8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821ebbe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EBBE8;
	// stw r30,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r30.u32);
	// li r4,1358
	ctx.r4.s64 = 1358;
	// stw r9,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r9.u32);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// stw r29,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r29.u32);
	// stw r30,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r30.u32);
	// stw r30,2188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2188, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x821EBC14;
	sub_822AA648(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r10,r31,1640
	ctx.r10.s64 = ctx.r31.s64 + 1640;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821EBC28:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821ebc28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EBC28;
	// li r10,14
	ctx.r10.s64 = 14;
	// addi r11,r31,1696
	ctx.r11.s64 = ctx.r31.s64 + 1696;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821EBC44:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821ebc44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EBC44;
	// stw r30,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r30.u32);
	// stw r30,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EBC5C"))) PPC_WEAK_FUNC(sub_821EBC5C);
PPC_FUNC_IMPL(__imp__sub_821EBC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBC60"))) PPC_WEAK_FUNC(sub_821EBC60);
PPC_FUNC_IMPL(__imp__sub_821EBC60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ebca4
	if (ctx.cr6.eq) goto loc_821EBCA4;
	// bdz 0x821ebca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821EBCA4;
	// bdz 0x821ebc9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821EBC9C;
	// bdz 0x821ebc9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821EBC9C;
	// bdz 0x821ebc9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821EBC9C;
	// bdz 0x821ebc9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821EBC9C;
	// bdz 0x821ebca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821EBCA4;
	// bdz 0x821ebca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821EBCA4;
	// b 0x821ebcac
	goto loc_821EBCAC;
loc_821EBC9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821EBCA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821EBCAC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBCB4"))) PPC_WEAK_FUNC(sub_821EBCB4);
PPC_FUNC_IMPL(__imp__sub_821EBCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBCB8"))) PPC_WEAK_FUNC(sub_821EBCB8);
PPC_FUNC_IMPL(__imp__sub_821EBCB8) {
	PPC_FUNC_PROLOGUE();
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_821EBCC0:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ebd04
	if (ctx.cr6.eq) goto loc_821EBD04;
	// lwz r11,1760(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1760);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x821ebcf0
	if (ctx.cr6.eq) goto loc_821EBCF0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821ebce8
	if (!ctx.cr6.lt) goto loc_821EBCE8;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
loc_821EBCE8:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x821ebd08
	goto loc_821EBD08;
loc_821EBCF0:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821ebcfc
	if (!ctx.cr6.lt) goto loc_821EBCFC;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
loc_821EBCFC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x821ebd08
	goto loc_821EBD08;
loc_821EBD04:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_821EBD08:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821ebcc0
	if (!ctx.cr6.eq) goto loc_821EBCC0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBD1C"))) PPC_WEAK_FUNC(sub_821EBD1C);
PPC_FUNC_IMPL(__imp__sub_821EBD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBD20"))) PPC_WEAK_FUNC(sub_821EBD20);
PPC_FUNC_IMPL(__imp__sub_821EBD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,1640
	ctx.r11.s64 = ctx.r3.s64 + 1640;
	// stw r9,1752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1752, ctx.r9.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,1768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1768, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821EBD40:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821ebd40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EBD40;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,1788
	ctx.r11.s64 = ctx.r3.s64 + 1788;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821EBD5C:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821ebd5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EBD5C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x821ebd80
	if (ctx.cr6.lt) goto loc_821EBD80;
	// bne cr6,0x821ebd84
	if (!ctx.cr6.eq) goto loc_821EBD84;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1764, ctx.r11.u32);
	// b 0x821ebd84
	goto loc_821EBD84;
loc_821EBD80:
	// stw r9,1764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1764, ctx.r9.u32);
loc_821EBD84:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// blt cr6,0x821ebd9c
	if (ctx.cr6.lt) goto loc_821EBD9C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x821ebda0
	if (ctx.cr6.lt) goto loc_821EBDA0;
loc_821EBD9C:
	// stw r9,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r9.u32);
loc_821EBDA0:
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

__attribute__((alias("__imp__sub_821EBDB0"))) PPC_WEAK_FUNC(sub_821EBDB0);
PPC_FUNC_IMPL(__imp__sub_821EBDB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821ebdcc
	if (ctx.cr6.eq) goto loc_821EBDCC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821ebdcc
	if (ctx.cr6.eq) goto loc_821EBDCC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821ebde0
	if (!ctx.cr6.eq) goto loc_821EBDE0;
loc_821EBDCC:
	// lwz r11,1812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ebde0
	if (!ctx.cr6.gt) goto loc_821EBDE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1812, ctx.r11.u32);
loc_821EBDE0:
	// lwz r11,1812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821EBDFC"))) PPC_WEAK_FUNC(sub_821EBDFC);
PPC_FUNC_IMPL(__imp__sub_821EBDFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBE00"))) PPC_WEAK_FUNC(sub_821EBE00);
PPC_FUNC_IMPL(__imp__sub_821EBE00) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1856
	ctx.r3.s64 = ctx.r3.s64 + 1856;
	// b 0x823c3240
	sub_823C3240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EBE0C"))) PPC_WEAK_FUNC(sub_821EBE0C);
PPC_FUNC_IMPL(__imp__sub_821EBE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBE10"))) PPC_WEAK_FUNC(sub_821EBE10);
PPC_FUNC_IMPL(__imp__sub_821EBE10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1800);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBE18"))) PPC_WEAK_FUNC(sub_821EBE18);
PPC_FUNC_IMPL(__imp__sub_821EBE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x821EBE30;
	sub_823C3CA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EBE44;
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

__attribute__((alias("__imp__sub_821EBE58"))) PPC_WEAK_FUNC(sub_821EBE58);
PPC_FUNC_IMPL(__imp__sub_821EBE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x821EBE70;
	sub_823C3CD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EBE84;
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

__attribute__((alias("__imp__sub_821EBE98"))) PPC_WEAK_FUNC(sub_821EBE98);
PPC_FUNC_IMPL(__imp__sub_821EBE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ebecc
	if (ctx.cr6.eq) goto loc_821EBECC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EBECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EBECC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -784, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBEE8"))) PPC_WEAK_FUNC(sub_821EBEE8);
PPC_FUNC_IMPL(__imp__sub_821EBEE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x821ec020
	sub_821EC020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EBEF0"))) PPC_WEAK_FUNC(sub_821EBEF0);
PPC_FUNC_IMPL(__imp__sub_821EBEF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x821ec020
	sub_821EC020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EBEF8"))) PPC_WEAK_FUNC(sub_821EBEF8);
PPC_FUNC_IMPL(__imp__sub_821EBEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821EBF00;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x823c3b68
	ctx.lr = 0x821EBF18;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x823c58b0
	ctx.lr = 0x821EBF28;
	sub_823C58B0(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821859a0
	ctx.lr = 0x821EBF3C;
	sub_821859A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r10,-9440
	ctx.r7.s64 = ctx.r10.s64 + -9440;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r9,-9312
	ctx.r6.s64 = ctx.r9.s64 + -9312;
	// stfs f31,276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// addi r5,r8,-9452
	ctx.r5.s64 = ctx.r8.s64 + -9452;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// addi r3,r31,1836
	ctx.r3.s64 = ctx.r31.s64 + 1836;
	// stw r30,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r30.u32);
	// stw r30,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r30.u32);
	// stw r30,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r30.u32);
	// stw r28,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r28.u32);
	// stw r30,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r30.u32);
	// stw r30,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r30.u32);
	// stw r30,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r30.u32);
	// stw r30,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r30.u32);
	// stw r30,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r30.u32);
	// stw r30,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r30.u32);
	// stw r30,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r30.u32);
	// stw r30,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r30.u32);
	// stw r30,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r30.u32);
	// stw r30,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r30.u32);
	// stw r30,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r30.u32);
	// bl 0x823c2ff0
	ctx.lr = 0x821EBFC0;
	sub_823C2FF0(ctx, base);
	// addi r29,r31,1884
	ctx.r29.s64 = ctx.r31.s64 + 1884;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c35b8
	ctx.lr = 0x821EBFD4;
	sub_823C35B8(ctx, base);
	// stw r26,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r26.u32);
	// stw r30,2188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2188, ctx.r30.u32);
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r4,-7560
	ctx.r10.s64 = ctx.r4.s64 + -7560;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x823c31b0
	ctx.lr = 0x821EC000;
	sub_823C31B0(ctx, base);
	// stw r28,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ebba0
	ctx.lr = 0x821EC00C;
	sub_821EBBA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821EC01C"))) PPC_WEAK_FUNC(sub_821EC01C);
PPC_FUNC_IMPL(__imp__sub_821EC01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC020"))) PPC_WEAK_FUNC(sub_821EC020);
PPC_FUNC_IMPL(__imp__sub_821EC020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821EC028;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-9440
	ctx.r8.s64 = ctx.r11.s64 + -9440;
	// addi r7,r10,-9312
	ctx.r7.s64 = ctx.r10.s64 + -9312;
	// addi r6,r9,-9452
	ctx.r6.s64 = ctx.r9.s64 + -9452;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// addi r3,r3,1884
	ctx.r3.s64 = ctx.r3.s64 + 1884;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// bl 0x823c31a0
	ctx.lr = 0x821EC068;
	sub_823C31A0(ctx, base);
	// addi r3,r31,1836
	ctx.r3.s64 = ctx.r31.s64 + 1836;
	// bl 0x823c3048
	ctx.lr = 0x821EC070;
	sub_823C3048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x821EC078;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x821EC080;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x821EC088;
	sub_823C3BC0(ctx, base);
	// clrlwi r5,r28,31
	ctx.r5.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821ec0a4
	if (ctx.cr6.eq) goto loc_821EC0A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821EC0A0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821EC0A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821EC0AC"))) PPC_WEAK_FUNC(sub_821EC0AC);
PPC_FUNC_IMPL(__imp__sub_821EC0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC0B0"))) PPC_WEAK_FUNC(sub_821EC0B0);
PPC_FUNC_IMPL(__imp__sub_821EC0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC0CC"))) PPC_WEAK_FUNC(sub_821EC0CC);
PPC_FUNC_IMPL(__imp__sub_821EC0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC0D0"))) PPC_WEAK_FUNC(sub_821EC0D0);
PPC_FUNC_IMPL(__imp__sub_821EC0D0) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lfs f0,11300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ec20c
	if (ctx.cr6.eq) goto loc_821EC20C;
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821ec20c
	if (ctx.cr6.eq) goto loc_821EC20C;
	// bl 0x821ebc60
	ctx.lr = 0x821EC114;
	sub_821EBC60(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,1756(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1756);
	// addi r30,r11,-9476
	ctx.r30.s64 = ctx.r11.s64 + -9476;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r30,-72
	ctx.r8.s64 = ctx.r30.s64 + -72;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r3,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r3.s64 = temp.s64;
	// ble cr6,0x821ec188
	if (!ctx.cr6.gt) goto loc_821EC188;
	// addi r31,r30,-60
	ctx.r31.s64 = ctx.r30.s64 + -60;
loc_821EC148:
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821ec168
	if (ctx.cr0.lt) goto loc_821EC168;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r4.u32);
loc_821EC168:
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f0,212(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// lwz r9,1756(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1756);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821ec148
	if (ctx.cr6.lt) goto loc_821EC148;
loc_821EC188:
	// lwz r11,1772(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1772);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821ec20c
	if (ctx.cr6.gt) goto loc_821EC20C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821ec1ac
	// bdzf 4*cr6+eq,0x821ec1d8
	// bne cr6,0x821ec1d8
	if (!ctx.cr6.eq) goto loc_821EC1D8;
loc_821EC1AC:
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r6,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ec20c
	if (ctx.cr6.eq) goto loc_821EC20C;
	// blt cr6,0x821ec1d0
	if (ctx.cr6.lt) goto loc_821EC1D0;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
loc_821EC1D0:
	// lwzx r11,r6,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// b 0x821ec1fc
	goto loc_821EC1FC;
loc_821EC1D8:
	// lwzx r11,r6,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ec20c
	if (ctx.cr6.eq) goto loc_821EC20C;
	// blt cr6,0x821ec1f8
	if (ctx.cr6.lt) goto loc_821EC1F8;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
loc_821EC1F8:
	// lwzx r11,r6,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
loc_821EC1FC:
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,212(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 212, temp.u32);
loc_821EC20C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC224"))) PPC_WEAK_FUNC(sub_821EC224);
PPC_FUNC_IMPL(__imp__sub_821EC224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC228"))) PPC_WEAK_FUNC(sub_821EC228);
PPC_FUNC_IMPL(__imp__sub_821EC228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821EC230;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lwz r28,16(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,-4772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4772, ctx.r11.u32);
	// lwz r11,1776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,1780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1780, ctx.r11.u32);
	// rlwinm r29,r8,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x821ec2a0
	if (!ctx.cr6.eq) goto loc_821EC2A0;
	// bl 0x821eacc8
	ctx.lr = 0x821EC26C;
	sub_821EACC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ec290
	if (ctx.cr6.eq) goto loc_821EC290;
	// bl 0x821eacc8
	ctx.lr = 0x821EC278;
	sub_821EACC8(ctx, base);
	// addi r3,r3,308
	ctx.r3.s64 = ctx.r3.s64 + 308;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EC28C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821ec294
	goto loc_821EC294;
loc_821EC290:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EC294:
	// stw r3,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r3.u32);
	// bl 0x82140860
	ctx.lr = 0x821EC29C;
	sub_82140860(ctx, base);
	// stw r3,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r3.u32);
loc_821EC2A0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821ec2b8
	if (ctx.cr6.eq) goto loc_821EC2B8;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// beq cr6,0x821ec2b8
	if (ctx.cr6.eq) goto loc_821EC2B8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821ec3f4
	if (ctx.cr6.eq) goto loc_821EC3F4;
loc_821EC2B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EC2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// stw r9,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r9.u32);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r7,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r7.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r6,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r6.u32);
	// blt cr6,0x821ec2fc
	if (ctx.cr6.lt) goto loc_821EC2FC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r3,10005
	ctx.r3.s64 = 10005;
	// beq cr6,0x821ec300
	if (ctx.cr6.eq) goto loc_821EC300;
loc_821EC2FC:
	// li r3,10014
	ctx.r3.s64 = 10014;
loc_821EC300:
	// bl 0x8208f658
	ctx.lr = 0x821EC304;
	sub_8208F658(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EC31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821ec350
	if (ctx.cr6.gt) goto loc_821EC350;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821ec340
	// bdzf 4*cr6+eq,0x821ec348
	// bne cr6,0x821ec348
	if (!ctx.cr6.eq) goto loc_821EC348;
loc_821EC340:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821ec354
	goto loc_821EC354;
loc_821EC348:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// b 0x821ec354
	goto loc_821EC354;
loc_821EC350:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EC354:
	// stw r11,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ec39c
	if (ctx.cr6.eq) goto loc_821EC39C;
	// lwz r11,1784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ec39c
	if (!ctx.cr6.gt) goto loc_821EC39C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,1696
	ctx.r9.s64 = ctx.r31.s64 + 1696;
loc_821EC37C:
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,1784(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821ec37c
	if (ctx.cr6.lt) goto loc_821EC37C;
loc_821EC39C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,1772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// stw r11,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r11.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bne cr6,0x821ec3b8
	if (!ctx.cr6.eq) goto loc_821EC3B8;
	// li r4,1
	ctx.r4.s64 = 1;
loc_821EC3B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EC3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821EC3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821EC3F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EC3F4:
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823c67a8
	ctx.lr = 0x821EC3FC;
	sub_823C67A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bd0
	ctx.lr = 0x821EC404;
	sub_823C3BD0(ctx, base);
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// addi r3,r31,1836
	ctx.r3.s64 = ctx.r31.s64 + 1836;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EC418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1884(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// addi r3,r31,1884
	ctx.r3.s64 = ctx.r31.s64 + 1884;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821EC42C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821EC434"))) PPC_WEAK_FUNC(sub_821EC434);
PPC_FUNC_IMPL(__imp__sub_821EC434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC438"))) PPC_WEAK_FUNC(sub_821EC438);
PPC_FUNC_IMPL(__imp__sub_821EC438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1824(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1824);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// beq cr6,0x821ec498
	if (ctx.cr6.eq) goto loc_821EC498;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821ec498
	if (ctx.cr6.eq) goto loc_821EC498;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821ec4b0
	if (!ctx.cr6.eq) goto loc_821EC4B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EC488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x821ec4a4
	goto loc_821EC4A4;
loc_821EC498:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821EC4A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821EC4B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EC4B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC4C8"))) PPC_WEAK_FUNC(sub_821EC4C8);
PPC_FUNC_IMPL(__imp__sub_821EC4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821EC4D0;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r3,28
	ctx.r28.s64 = ctx.r3.s64 + 28;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1824(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1824);
	// bl 0x823c5678
	ctx.lr = 0x821EC4EC;
	sub_823C5678(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,1784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r30.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r10,1772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x821ec6c0
	if (ctx.cr6.gt) goto loc_821EC6C0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821ec558
	// bdzf 4*cr6+eq,0x821ec60c
	// bdzf 4*cr6+eq,0x821ec60c
	// bdzf 4*cr6+eq,0x821ec60c
	// bdzf 4*cr6+eq,0x821ec60c
	// bdzf 4*cr6+eq,0x821ec66c
	// bdzf 4*cr6+eq,0x821ec66c
	// bne cr6,0x821ec5b8
	if (!ctx.cr6.eq) goto loc_821EC5B8;
loc_821EC558:
	// subfic r8,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r30.s64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r6,30
	ctx.r11.u64 = ctx.r6.u32 & 0x3;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r29,r11,5
	ctx.r29.s64 = ctx.r11.s64 + 5;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x821ec6c0
	goto loc_821EC6C0;
loc_821EC5B8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// li r29,5
	ctx.r29.s64 = 5;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// stw r5,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// b 0x821ec6c0
	goto loc_821EC6C0;
loc_821EC60C:
	// subfic r8,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r30.s64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// addi r7,r31,72
	ctx.r7.s64 = ctx.r31.s64 + 72;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// stw r4,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r4.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x821ec6c0
	goto loc_821EC6C0;
loc_821EC66C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r11.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r11.u32);
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
loc_821EC6C0:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// lwz r10,1832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// ori r9,r11,63
	ctx.r9.u64 = ctx.r11.u64 | 63;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// bne cr6,0x821ec6e4
	if (!ctx.cr6.eq) goto loc_821EC6E4;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r10.u32);
loc_821EC6E4:
	// lwz r11,1828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1828);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ec6fc
	if (!ctx.cr6.eq) goto loc_821EC6FC;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r10,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r10.u32);
loc_821EC6FC:
	// bl 0x821eacc8
	ctx.lr = 0x821EC700;
	sub_821EACC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ec710
	if (ctx.cr6.eq) goto loc_821EC710;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ebaa8
	ctx.lr = 0x821EC710;
	sub_821EBAA8(ctx, base);
loc_821EC710:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821EC718"))) PPC_WEAK_FUNC(sub_821EC718);
PPC_FUNC_IMPL(__imp__sub_821EC718) {
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
	// lwz r11,1776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821ec744
	if (!ctx.cr6.eq) goto loc_821EC744;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,1856(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1856);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ec0d0
	ctx.lr = 0x821EC744;
	sub_821EC0D0(ctx, base);
loc_821EC744:
	// lwz r11,1876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ec764
	if (ctx.cr6.eq) goto loc_821EC764;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EC764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EC764:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC778"))) PPC_WEAK_FUNC(sub_821EC778);
PPC_FUNC_IMPL(__imp__sub_821EC778) {
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
	// lwz r11,1776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821ec7a4
	if (!ctx.cr6.eq) goto loc_821EC7A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,1856(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1856);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ec0d0
	ctx.lr = 0x821EC7A4;
	sub_821EC0D0(ctx, base);
loc_821EC7A4:
	// lwz r11,1876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ec7c4
	if (ctx.cr6.eq) goto loc_821EC7C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EC7C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EC7C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC7D8"))) PPC_WEAK_FUNC(sub_821EC7D8);
PPC_FUNC_IMPL(__imp__sub_821EC7D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ec7ec
	if (ctx.cr6.eq) goto loc_821EC7EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821ec7f4
	if (!ctx.cr6.eq) goto loc_821EC7F4;
loc_821EC7EC:
	// xori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 ^ 1;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
loc_821EC7F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1884
	ctx.r3.s64 = ctx.r3.s64 + 1884;
	// b 0x823c3240
	sub_823C3240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC800"))) PPC_WEAK_FUNC(sub_821EC800);
PPC_FUNC_IMPL(__imp__sub_821EC800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ec81c
	if (ctx.cr6.eq) goto loc_821EC81C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821ec81c
	if (ctx.cr6.eq) goto loc_821EC81C;
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// b 0x821ec820
	goto loc_821EC820;
loc_821EC81C:
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
loc_821EC820:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1884
	ctx.r3.s64 = ctx.r3.s64 + 1884;
	// b 0x823c3240
	sub_823C3240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC82C"))) PPC_WEAK_FUNC(sub_821EC82C);
PPC_FUNC_IMPL(__imp__sub_821EC82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC830"))) PPC_WEAK_FUNC(sub_821EC830);
PPC_FUNC_IMPL(__imp__sub_821EC830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ec84c
	if (ctx.cr6.eq) goto loc_821EC84C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821ec84c
	if (ctx.cr6.eq) goto loc_821EC84C;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
loc_821EC84C:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC858"))) PPC_WEAK_FUNC(sub_821EC858);
PPC_FUNC_IMPL(__imp__sub_821EC858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821ec878
	if (ctx.cr6.eq) goto loc_821EC878;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821ec878
	if (ctx.cr6.eq) goto loc_821EC878;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821EC878:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC880"))) PPC_WEAK_FUNC(sub_821EC880);
PPC_FUNC_IMPL(__imp__sub_821EC880) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x821ec8d4
	if (!ctx.cr6.gt) goto loc_821EC8D4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,1776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stw r11,1776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1776, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x821ec8c8
	if (!ctx.cr6.eq) goto loc_821EC8C8;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821EC8C8:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821EC8D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x821ec8ec
	if (!ctx.cr6.eq) goto loc_821EC8EC;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821EC8EC:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821EC8F8"))) PPC_WEAK_FUNC(sub_821EC8F8);
PPC_FUNC_IMPL(__imp__sub_821EC8F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC8FC"))) PPC_WEAK_FUNC(sub_821EC8FC);
PPC_FUNC_IMPL(__imp__sub_821EC8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC900"))) PPC_WEAK_FUNC(sub_821EC900);
PPC_FUNC_IMPL(__imp__sub_821EC900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x821ec940
	if (!ctx.cr6.gt) goto loc_821EC940;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,1776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1776, ctx.r10.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821EC940:
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

__attribute__((alias("__imp__sub_821EC950"))) PPC_WEAK_FUNC(sub_821EC950);
PPC_FUNC_IMPL(__imp__sub_821EC950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC954"))) PPC_WEAK_FUNC(sub_821EC954);
PPC_FUNC_IMPL(__imp__sub_821EC954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC958"))) PPC_WEAK_FUNC(sub_821EC958);
PPC_FUNC_IMPL(__imp__sub_821EC958) {
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
	// addi r30,r3,1836
	ctx.r30.s64 = ctx.r3.s64 + 1836;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c3058
	ctx.lr = 0x821EC980;
	sub_823C3058(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EC994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,14876(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ec0d0
	ctx.lr = 0x821EC9A8;
	sub_821EC0D0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823c67a8
	ctx.lr = 0x821EC9B0;
	sub_823C67A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bd0
	ctx.lr = 0x821EC9B8;
	sub_823C3BD0(ctx, base);
	// lwz r8,1836(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821EC9CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,1884(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// addi r3,r31,1884
	ctx.r3.s64 = ctx.r31.s64 + 1884;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821EC9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC9F8"))) PPC_WEAK_FUNC(sub_821EC9F8);
PPC_FUNC_IMPL(__imp__sub_821EC9F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1744(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821eca2c
	if (ctx.cr6.lt) goto loc_821ECA2C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x821eca2c
	if (ctx.cr6.gt) goto loc_821ECA2C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,417
	ctx.r11.s64 = ctx.r11.s64 + 417;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821eca2c
	if (!ctx.cr6.eq) goto loc_821ECA2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821ECA2C:
	// lwz r3,1804(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1804);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECA34"))) PPC_WEAK_FUNC(sub_821ECA34);
PPC_FUNC_IMPL(__imp__sub_821ECA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECA38"))) PPC_WEAK_FUNC(sub_821ECA38);
PPC_FUNC_IMPL(__imp__sub_821ECA38) {
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
	// bl 0x823c3c98
	ctx.lr = 0x821ECA50;
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
	ctx.lr = 0x821ECA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,14876(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ec0d0
	ctx.lr = 0x821ECA78;
	sub_821EC0D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECA8C"))) PPC_WEAK_FUNC(sub_821ECA8C);
PPC_FUNC_IMPL(__imp__sub_821ECA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECA90"))) PPC_WEAK_FUNC(sub_821ECA90);
PPC_FUNC_IMPL(__imp__sub_821ECA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821ecaf8
	if (ctx.cr6.gt) goto loc_821ECAF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ecaec
	if (ctx.cr6.eq) goto loc_821ECAEC;
	// bdz 0x821ecaec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECAEC;
	// bdz 0x821ecae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECAE4;
	// bdz 0x821ecae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECAE4;
	// bdz 0x821ecae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECAE4;
	// bdz 0x821ecae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECAE4;
	// bdz 0x821ecaec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECAEC;
	// bdz 0x821ecaec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECAEC;
	// b 0x821ecaf4
	goto loc_821ECAF4;
loc_821ECAE4:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x821ecaf8
	goto loc_821ECAF8;
loc_821ECAEC:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x821ecaf8
	goto loc_821ECAF8;
loc_821ECAF4:
	// li r30,2
	ctx.r30.s64 = 2;
loc_821ECAF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x821ECB00;
	sub_823C3C70(ctx, base);
	// addi r3,r31,1836
	ctx.r3.s64 = ctx.r31.s64 + 1836;
	// bl 0x823c3410
	ctx.lr = 0x821ECB08;
	sub_823C3410(ctx, base);
	// lwz r11,1776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ecb28
	if (ctx.cr6.eq) goto loc_821ECB28;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ecb4c
	if (!ctx.cr6.eq) goto loc_821ECB4C;
	// lwz r11,1780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ecb4c
	if (!ctx.cr6.eq) goto loc_821ECB4C;
loc_821ECB28:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-9512
	ctx.r8.s64 = ctx.r10.s64 + -9512;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82106eb0
	ctx.lr = 0x821ECB48;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x821ECB4C;
	sub_821D38E8(ctx, base);
loc_821ECB4C:
	// lwz r11,1772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ecb70
	if (ctx.cr6.eq) goto loc_821ECB70;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821ecb84
	if (!ctx.cr6.eq) goto loc_821ECB84;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ecb70
	if (ctx.cr6.eq) goto loc_821ECB70;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821ecb78
	if (!ctx.cr6.eq) goto loc_821ECB78;
loc_821ECB70:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_821ECB78:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1884
	ctx.r3.s64 = ctx.r31.s64 + 1884;
	// bl 0x823c3240
	ctx.lr = 0x821ECB84;
	sub_823C3240(ctx, base);
loc_821ECB84:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821ECB98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECBB0"))) PPC_WEAK_FUNC(sub_821ECBB0);
PPC_FUNC_IMPL(__imp__sub_821ECBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823c3d08
	ctx.lr = 0x821ECBC8;
	sub_823C3D08(ctx, base);
	// lwz r10,1776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821ecc08
	if (!ctx.cr6.eq) goto loc_821ECC08;
	// bl 0x821eacc8
	ctx.lr = 0x821ECBE0;
	sub_821EACC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ecbfc
	if (ctx.cr6.eq) goto loc_821ECBFC;
	// lwz r3,1816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// bl 0x821ebaa8
	ctx.lr = 0x821ECBF0;
	sub_821EBAA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	// bl 0x821eb980
	ctx.lr = 0x821ECBFC;
	sub_821EB980(ctx, base);
loc_821ECBFC:
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4772, ctx.r11.u32);
loc_821ECC08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECC1C"))) PPC_WEAK_FUNC(sub_821ECC1C);
PPC_FUNC_IMPL(__imp__sub_821ECC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECC20"))) PPC_WEAK_FUNC(sub_821ECC20);
PPC_FUNC_IMPL(__imp__sub_821ECC20) {
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
	// lwz r11,1772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821ecc88
	if (ctx.cr6.gt) goto loc_821ECC88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ecc7c
	if (ctx.cr6.eq) goto loc_821ECC7C;
	// bdz 0x821ecc7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECC7C;
	// bdz 0x821ecc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECC74;
	// bdz 0x821ecc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECC74;
	// bdz 0x821ecc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECC74;
	// bdz 0x821ecc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECC74;
	// bdz 0x821ecc7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECC7C;
	// bdz 0x821ecc7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ECC7C;
	// b 0x821ecc84
	goto loc_821ECC84;
loc_821ECC74:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x821ecc88
	goto loc_821ECC88;
loc_821ECC7C:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x821ecc88
	goto loc_821ECC88;
loc_821ECC84:
	// li r30,2
	ctx.r30.s64 = 2;
loc_821ECC88:
	// addi r3,r31,1836
	ctx.r3.s64 = ctx.r31.s64 + 1836;
	// bl 0x823c3468
	ctx.lr = 0x821ECC90;
	sub_823C3468(ctx, base);
	// lwz r11,1776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x821ecce8
	if (!ctx.cr6.lt) goto loc_821ECCE8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-9500
	ctx.r8.s64 = ctx.r10.s64 + -9500;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82106eb0
	ctx.lr = 0x821ECCBC;
	sub_82106EB0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x821ECCC0;
	sub_821D38E8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ec0d0
	ctx.lr = 0x821ECCD4;
	sub_821EC0D0(ctx, base);
	// lwz r6,1772(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x821ecce8
	if (ctx.cr6.lt) goto loc_821ECCE8;
	// li r3,10006
	ctx.r3.s64 = 10006;
	// bl 0x8208f658
	ctx.lr = 0x821ECCE8;
	sub_8208F658(ctx, base);
loc_821ECCE8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821ECCFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,180
	ctx.r8.s64 = 180;
	// stw r8,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r8.u32);
	// lfs f0,8328(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECD28"))) PPC_WEAK_FUNC(sub_821ECD28);
PPC_FUNC_IMPL(__imp__sub_821ECD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821ECD30;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ed0b0
	if (ctx.cr6.eq) goto loc_821ED0B0;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ed0b0
	if (ctx.cr6.eq) goto loc_821ED0B0;
	// bl 0x821ebc60
	ctx.lr = 0x821ECD58;
	sub_821EBC60(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,-9572
	ctx.r6.s64 = ctx.r11.s64 + -9572;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r8,r6,12
	ctx.r8.s64 = ctx.r6.s64 + 12;
	// lwzx r11,r4,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lwzx r10,r4,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821ecda8
	if (ctx.cr6.gt) goto loc_821ECDA8;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
loc_821ECD80:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821ecd94
	if (ctx.cr6.lt) goto loc_821ECD94;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r5.u32);
loc_821ECD94:
	// lwzx r9,r4,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x821ecd80
	if (!ctx.cr6.gt) goto loc_821ECD80;
loc_821ECDA8:
	// lwz r11,1764(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1764);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821ece18
	if (!ctx.cr6.lt) goto loc_821ECE18;
	// addi r11,r6,60
	ctx.r11.s64 = ctx.r6.s64 + 60;
	// lwzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821ecdd8
	if (ctx.cr6.lt) goto loc_821ECDD8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r30.u32);
loc_821ECDD8:
	// addi r11,r6,72
	ctx.r11.s64 = ctx.r6.s64 + 72;
	// lwzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821ecdf8
	if (ctx.cr6.lt) goto loc_821ECDF8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r30.u32);
loc_821ECDF8:
	// addi r11,r6,84
	ctx.r11.s64 = ctx.r6.s64 + 84;
	// lwzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821ece18
	if (ctx.cr6.lt) goto loc_821ECE18;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r30.u32);
loc_821ECE18:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r6,24
	ctx.r10.s64 = ctx.r6.s64 + 24;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lfs f0,-23532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23532);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,276(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 276, temp.u32);
	// lwzx r8,r4,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821ece64
	if (!ctx.cr6.gt) goto loc_821ECE64;
	// addi r7,r6,36
	ctx.r7.s64 = ctx.r6.s64 + 36;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_821ECE40:
	// lwzx r11,r4,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821ece5c
	if (ctx.cr0.lt) goto loc_821ECE5C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
loc_821ECE5C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x821ece40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821ECE40;
loc_821ECE64:
	// lwz r10,1756(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1756);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// ble cr6,0x821ecec4
	if (!ctx.cr6.gt) goto loc_821ECEC4;
	// addi r6,r6,36
	ctx.r6.s64 = ctx.r6.s64 + 36;
	// addi r9,r29,1636
	ctx.r9.s64 = ctx.r29.s64 + 1636;
loc_821ECE88:
	// lwzx r8,r4,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r8,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r8.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r30,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r30.u32);
	// lwz r10,1756(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1756);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821ece88
	if (ctx.cr6.lt) goto loc_821ECE88;
loc_821ECEC4:
	// lwz r11,1772(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1772);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821ecf80
	if (ctx.cr6.gt) goto loc_821ECF80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821ecee8
	// bdzf 4*cr6+eq,0x821ecf40
	// bne cr6,0x821ecf40
	if (!ctx.cr6.eq) goto loc_821ECF40;
loc_821ECEE8:
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// li r4,20030
	ctx.r4.s64 = 20030;
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821ECF04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,20031
	ctx.r4.s64 = 20031;
	// stw r3,16600(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16600, ctx.r3.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,16620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16620, ctx.r30.u32);
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821ECF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,16856(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16856, ctx.r3.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,16876(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16876, ctx.r30.u32);
	// b 0x821ecf80
	goto loc_821ECF80;
loc_821ECF40:
	// lwz r11,1788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1788);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,410
	ctx.r9.s64 = ctx.r11.s64 + 410;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// stw r7,16600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16600, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,16620(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16620, ctx.r30.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,1792(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1792);
	// addi r4,r11,410
	ctx.r4.s64 = ctx.r11.s64 + 410;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// stw r11,16856(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16856, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,16876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16876, ctx.r30.u32);
loc_821ECF80:
	// lwz r11,1772(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1772);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821ed0b0
	if (ctx.cr6.lt) goto loc_821ED0B0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x821ed0b0
	if (ctx.cr6.gt) goto loc_821ED0B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x821ECF9C;
	sub_8218B408(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x821ECFA8;
	sub_8218B408(ctx, base);
	// lwz r11,1696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x821ecfbc
	if (!ctx.cr6.eq) goto loc_821ECFBC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821ECFBC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
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
	// stfs f11,16584(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16584, temp.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,16588(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16588, temp.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,16592(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16592, temp.u32);
	// lwz r8,1700(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1700);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821ed044
	if (!ctx.cr6.eq) goto loc_821ED044;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821ED044:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,16840(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16840, temp.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,16844(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16844, temp.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,16848(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16848, temp.u32);
loc_821ED0B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821ED0B8"))) PPC_WEAK_FUNC(sub_821ED0B8);
PPC_FUNC_IMPL(__imp__sub_821ED0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821ED0C0;
	sub_8224877C(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249924
	ctx.lr = 0x821ED0C8;
	sub_82249924(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,1772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	// lwz r25,1784(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1784);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r10,-792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r26,52(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// beq cr6,0x821ed104
	if (ctx.cr6.eq) goto loc_821ED104;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821ed104
	if (ctx.cr6.eq) goto loc_821ED104;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821ed104
	if (ctx.cr6.eq) goto loc_821ED104;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821ed1a0
	if (!ctx.cr6.eq) goto loc_821ED1A0;
loc_821ED104:
	// lwz r28,72(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x821ed1a0
	if (!ctx.cr6.gt) goto loc_821ED1A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f27,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f27.f64 = double(temp.f32);
	// li r29,15872
	ctx.r29.s64 = 15872;
	// lfs f28,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,10376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10376);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,-32028(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32028);
	ctx.f29.f64 = double(temp.f32);
loc_821ED140:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne cr6,0x821ed18c
	if (!ctx.cr6.eq) goto loc_821ED18C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,1884
	ctx.r3.s64 = ctx.r27.s64 + 1884;
	// bl 0x823c32a0
	ctx.lr = 0x821ED15C;
	sub_823C32A0(ctx, base);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// stfs f28,52(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fmuls f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f9,44(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmuls f8,f11,f30
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f8,48(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x821ed190
	goto loc_821ED190;
loc_821ED18C:
	// stfs f27,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_821ED190:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x821ed140
	if (ctx.cr6.lt) goto loc_821ED140;
loc_821ED1A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249970
	ctx.lr = 0x821ED1AC;
	sub_82249970(ctx, base);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821ED1B0"))) PPC_WEAK_FUNC(sub_821ED1B0);
PPC_FUNC_IMPL(__imp__sub_821ED1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,276(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f12,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,276(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// stfs f0,276(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED210"))) PPC_WEAK_FUNC(sub_821ED210);
PPC_FUNC_IMPL(__imp__sub_821ED210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x821ebef8
	ctx.lr = 0x821ED228;
	sub_821EBEF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-9440
	ctx.r8.s64 = ctx.r11.s64 + -9440;
	// addi r7,r10,-9312
	ctx.r7.s64 = ctx.r10.s64 + -9312;
	// addi r6,r9,-9452
	ctx.r6.s64 = ctx.r9.s64 + -9452;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// bl 0x823c3c60
	ctx.lr = 0x821ED254;
	sub_823C3C60(ctx, base);
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

__attribute__((alias("__imp__sub_821ED26C"))) PPC_WEAK_FUNC(sub_821ED26C);
PPC_FUNC_IMPL(__imp__sub_821ED26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ED270"))) PPC_WEAK_FUNC(sub_821ED270);
PPC_FUNC_IMPL(__imp__sub_821ED270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ed2e8
	if (ctx.cr6.eq) goto loc_821ED2E8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-784(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ed2e8
	if (ctx.cr6.eq) goto loc_821ED2E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821ED2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ed2e8
	if (ctx.cr6.eq) goto loc_821ED2E8;
	// lwz r11,1772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ed2d8
	if (ctx.cr6.eq) goto loc_821ED2D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821ed2d8
	if (ctx.cr6.eq) goto loc_821ED2D8;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// b 0x821ed2e0
	goto loc_821ED2E0;
loc_821ED2D8:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_821ED2E0:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x821ed2ec
	if (!ctx.cr6.eq) goto loc_821ED2EC;
loc_821ED2E8:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_821ED2EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED300"))) PPC_WEAK_FUNC(sub_821ED300);
PPC_FUNC_IMPL(__imp__sub_821ED300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821ED308;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,-240(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + -240);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x821ed49c
	if (ctx.cr6.eq) goto loc_821ED49C;
	// cmpwi cr6,r25,5
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 5, ctx.xer);
	// bne cr6,0x821ed330
	if (!ctx.cr6.eq) goto loc_821ED330;
	// lwz r11,1520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ed49c
	if (ctx.cr6.eq) goto loc_821ED49C;
loc_821ED330:
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r11,-792(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ed49c
	if (ctx.cr6.eq) goto loc_821ED49C;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ed49c
	if (ctx.cr6.eq) goto loc_821ED49C;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x821ED358;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x821ED368;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x821ED37C;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x821ED388;
	sub_821AD498(ctx, base);
	// addi r31,r26,-256
	ctx.r31.s64 = ctx.r26.s64 + -256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ebc60
	ctx.lr = 0x821ED394;
	sub_821EBC60(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,-792(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -792);
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,-9524
	ctx.r28.s64 = ctx.r10.s64 + -9524;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lfs f0,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,132(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 132, temp.u32);
	// lwz r6,-256(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + -256);
	// lwz r5,108(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821ED3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821ed484
	if (ctx.cr6.gt) goto loc_821ED484;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821ed464
	// bdzf 4*cr6+eq,0x821ed438
	// bdzf 4*cr6+eq,0x821ed438
	// bne cr6,0x821ed458
	if (!ctx.cr6.eq) goto loc_821ED458;
	// lwz r11,1520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ed424
	if (ctx.cr6.eq) goto loc_821ED424;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ed464
	if (!ctx.cr6.eq) goto loc_821ED464;
	// lwz r11,1524(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ed464
	if (!ctx.cr6.eq) goto loc_821ED464;
loc_821ED424:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed1b0
	ctx.lr = 0x821ED430;
	sub_821ED1B0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x821ed474
	goto loc_821ED474;
loc_821ED438:
	// lwz r11,1520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1520);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ed468
	if (!ctx.cr6.eq) goto loc_821ED468;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ed1b0
	ctx.lr = 0x821ED450;
	sub_821ED1B0(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x821ed474
	goto loc_821ED474;
loc_821ED458:
	// lwz r11,1520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1520);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ed484
	if (!ctx.cr6.eq) goto loc_821ED484;
loc_821ED464:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821ED468:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ed1b0
	ctx.lr = 0x821ED470;
	sub_821ED1B0(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
loc_821ED474:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r4,r27,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210a9b0
	ctx.lr = 0x821ED484;
	sub_8210A9B0(ctx, base);
loc_821ED484:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x821ED490;
	sub_821AD600(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x821ED49C;
	sub_821AD498(ctx, base);
loc_821ED49C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821ED4A4"))) PPC_WEAK_FUNC(sub_821ED4A4);
PPC_FUNC_IMPL(__imp__sub_821ED4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ED4A8"))) PPC_WEAK_FUNC(sub_821ED4A8);
PPC_FUNC_IMPL(__imp__sub_821ED4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x821ED4B0;
	sub_82248764(ctx, base);
	// stwu r1,-1568(r1)
	ea = -1568 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r21,1752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1752, ctx.r21.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821ED4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1772(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1772);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x821ed534
	if (ctx.cr6.gt) goto loc_821ED534;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821ed528
	if (ctx.cr6.eq) goto loc_821ED528;
	// bdz 0x821ed528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ED528;
	// bdz 0x821ed520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ED520;
	// bdz 0x821ed520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ED520;
	// bdz 0x821ed520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ED520;
	// bdz 0x821ed520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ED520;
	// bdz 0x821ed528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ED528;
	// bdz 0x821ed528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821ED528;
	// b 0x821ed530
	goto loc_821ED530;
loc_821ED520:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821ed534
	goto loc_821ED534;
loc_821ED528:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x821ed534
	goto loc_821ED534;
loc_821ED530:
	// li r11,2
	ctx.r11.s64 = 2;
loc_821ED534:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r7,-9536
	ctx.r6.s64 = ctx.r7.s64 + -9536;
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r5,84(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// lwzx r4,r8,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821ED570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r31,1048(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1048);
	// lfs f3,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r21.u32);
	// lfs f2,16(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,148(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821ED5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,1454
	ctx.r6.s64 = ctx.r1.s64 + 1454;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r6,1760(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1760, ctx.r6.u32);
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// li r25,60
	ctx.r25.s64 = 60;
	// li r26,36
	ctx.r26.s64 = 36;
	// addi r27,r11,-9176
	ctx.r27.s64 = ctx.r11.s64 + -9176;
loc_821ED5BC:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ed6e8
	if (ctx.cr6.eq) goto loc_821ED6E8;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x821ed6cc
	if (ctx.cr6.eq) goto loc_821ED6CC;
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// beq cr6,0x821ed5f8
	if (ctx.cr6.eq) goto loc_821ED5F8;
	// lwz r11,1760(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1760);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821ed614
	if (!ctx.cr6.lt) goto loc_821ED614;
	// stb r10,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r10.u8);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x821ed5bc
	goto loc_821ED5BC;
loc_821ED5F8:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x821ed620
	if (ctx.cr6.eq) goto loc_821ED620;
	// lwz r11,1760(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1760);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821ed614
	if (!ctx.cr6.lt) goto loc_821ED614;
	// stb r10,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r10.u8);
loc_821ED614:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x821ed5bc
	goto loc_821ED5BC;
loc_821ED620:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8224b2a0
	ctx.lr = 0x821ED634;
	sub_8224B2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ed6a0
	if (!ctx.cr6.eq) goto loc_821ED6A0;
	// lbzu r11,3(r29)
	ea = 3 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,62
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 62, ctx.xer);
	// bne cr6,0x821ed658
	if (!ctx.cr6.eq) goto loc_821ED658;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x821ed680
	goto loc_821ED680;
loc_821ED658:
	// bl 0x8224b150
	ctx.lr = 0x821ED65C;
	sub_8224B150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ed680
	if (ctx.cr6.eq) goto loc_821ED680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8224a688
	ctx.lr = 0x821ED66C;
	sub_8224A688(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821ed680
	if (!ctx.cr6.gt) goto loc_821ED680;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_821ED680:
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x821ebcb8
	ctx.lr = 0x821ED698;
	sub_821EBCB8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x821ed5bc
	goto loc_821ED5BC;
loc_821ED6A0:
	// lwz r11,1760(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1760);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821ed6b0
	if (!ctx.cr6.lt) goto loc_821ED6B0;
	// stb r25,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r25.u8);
loc_821ED6B0:
	// lwz r10,1760(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1760);
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821ed6c4
	if (!ctx.cr6.lt) goto loc_821ED6C4;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
loc_821ED6C4:
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// b 0x821ed5bc
	goto loc_821ED5BC;
loc_821ED6CC:
	// lwz r11,1760(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1760);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821ed6dc
	if (!ctx.cr6.lt) goto loc_821ED6DC;
	// stb r21,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r21.u8);
loc_821ED6DC:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x821ed5bc
	goto loc_821ED5BC;
loc_821ED6E8:
	// lwz r11,1760(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1760);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821ed6f8
	if (!ctx.cr6.lt) goto loc_821ED6F8;
	// stb r21,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r21.u8);
loc_821ED6F8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x821ed850
	if (!ctx.cr6.lt) goto loc_821ED850;
	// addi r25,r31,420
	ctx.r25.s64 = ctx.r31.s64 + 420;
	// li r24,1024
	ctx.r24.s64 = 1024;
	// li r22,32
	ctx.r22.s64 = 32;
loc_821ED714:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821ED718:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ed718
	if (!ctx.cr6.eq) goto loc_821ED718;
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stw r21,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r21.u32);
	// stw r24,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r24.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r21,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r21.u32);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// rotlwi r29,r8,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// bl 0x821d9c10
	ctx.lr = 0x821ED758;
	sub_821D9C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9508
	ctx.lr = 0x821ED760;
	sub_821D9508(ctx, base);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lfs f0,20(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821ed820
	if (!ctx.cr6.gt) goto loc_821ED820;
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// add r26,r29,r30
	ctx.r26.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ed794
	if (ctx.cr6.eq) goto loc_821ED794;
	// stb r22,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r22.u8);
loc_821ED794:
	// addi r29,r26,-1
	ctx.r29.s64 = ctx.r26.s64 + -1;
	// li r27,1
	ctx.r27.s64 = 1;
loc_821ED79C:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821ed81c
	if (!ctx.cr6.lt) goto loc_821ED81C;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x821ed80c
	if (!ctx.cr6.eq) goto loc_821ED80C;
	// stb r21,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r21.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r21,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r21.u32);
	// stw r24,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r24.u32);
	// stw r21,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r21.u32);
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// bl 0x821d9c10
	ctx.lr = 0x821ED7D8;
	sub_821D9C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9508
	ctx.lr = 0x821ED7E0;
	sub_821D9508(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lfs f0,20(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x821ed808
	if (!ctx.cr6.lt) goto loc_821ED808;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// b 0x821ed80c
	goto loc_821ED80C;
loc_821ED808:
	// stb r22,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r22.u8);
loc_821ED80C:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x821ed79c
	if (!ctx.cr6.eq) goto loc_821ED79C;
	// b 0x821ed820
	goto loc_821ED820;
loc_821ED81C:
	// stb r21,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r21.u8);
loc_821ED820:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821ED824:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ed824
	if (!ctx.cr6.eq) goto loc_821ED824;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x821ed714
	if (ctx.cr6.lt) goto loc_821ED714;
loc_821ED850:
	// lwz r11,1752(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1752);
	// addi r4,r28,280
	ctx.r4.s64 = ctx.r28.s64 + 280;
	// addi r9,r28,1638
	ctx.r9.s64 = ctx.r28.s64 + 1638;
	// addi r8,r11,410
	ctx.r8.s64 = ctx.r11.s64 + 410;
	// li r6,-1
	ctx.r6.s64 = -1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r4,r7,r28
	PPC_STORE_U32(ctx.r7.u32 + ctx.r28.u32, ctx.r4.u32);
	// stw r9,1760(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1760, ctx.r9.u32);
	// stw r6,1756(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1756, ctx.r6.u32);
loc_821ED878:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ed8ac
	if (ctx.cr6.eq) goto loc_821ED8AC;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x821ed878
	if (ctx.cr6.eq) goto loc_821ED878;
	// lwz r11,1760(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1760);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821ed8a0
	if (!ctx.cr6.lt) goto loc_821ED8A0;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
loc_821ED8A0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x821ed878
	goto loc_821ED878;
loc_821ED8AC:
	// lwz r11,1760(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1760);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821ed8bc
	if (!ctx.cr6.lt) goto loc_821ED8BC;
	// stb r21,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r21.u8);
loc_821ED8BC:
	// lwz r11,1752(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1752);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1752(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1752, ctx.r11.u32);
	// bge cr6,0x821ed8e8
	if (!ctx.cr6.lt) goto loc_821ED8E8;
	// addi r11,r11,410
	ctx.r11.s64 = ctx.r11.s64 + 410;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r4.u32);
	// b 0x821ed878
	goto loc_821ED878;
loc_821ED8E8:
	// lwz r10,1756(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1756);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821ed8f8
	if (!ctx.cr6.eq) goto loc_821ED8F8;
	// stw r11,1756(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1756, ctx.r11.u32);
loc_821ED8F8:
	// lwz r11,1772(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1772);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821ed90c
	if (ctx.cr6.eq) goto loc_821ED90C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821ed990
	if (!ctx.cr6.eq) goto loc_821ED990;
loc_821ED90C:
	// lwz r10,1752(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1752);
	// lwz r11,28(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bgt cr6,0x821ed990
	if (ctx.cr6.gt) goto loc_821ED990;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ed990
	if (!ctx.cr6.gt) goto loc_821ED990;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r31,r28,1788
	ctx.r31.s64 = ctx.r28.s64 + 1788;
loc_821ED934:
	// lwz r11,1752(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1752);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,410
	ctx.r11.s64 = ctx.r11.s64 + 410;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r4.u32);
	// lwz r9,1752(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1752);
	// stwx r9,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,32(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x821ebcb8
	ctx.lr = 0x821ED95C;
	sub_821EBCB8(ctx, base);
	// lwz r5,1760(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1760);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x821ed96c
	if (!ctx.cr6.lt) goto loc_821ED96C;
	// stb r21,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r21.u8);
loc_821ED96C:
	// lwz r11,1752(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1752);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r11,1752(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1752, ctx.r11.u32);
	// lwz r10,28(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821ed934
	if (ctx.cr6.lt) goto loc_821ED934;
loc_821ED990:
	// addi r1,r1,1568
	ctx.r1.s64 = ctx.r1.s64 + 1568;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_821ED998"))) PPC_WEAK_FUNC(sub_821ED998);
PPC_FUNC_IMPL(__imp__sub_821ED998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ed9ec
	if (!ctx.cr6.eq) goto loc_821ED9EC;
	// li r3,2192
	ctx.r3.s64 = 2192;
	// bl 0x82080000
	ctx.lr = 0x821ED9C8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ed9e4
	if (ctx.cr6.eq) goto loc_821ED9E4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821ed210
	ctx.lr = 0x821ED9DC;
	sub_821ED210(ctx, base);
	// stw r3,-784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -784, ctx.r3.u32);
	// b 0x821ed9ec
	goto loc_821ED9EC;
loc_821ED9E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -784, ctx.r11.u32);
loc_821ED9EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDA04"))) PPC_WEAK_FUNC(sub_821EDA04);
PPC_FUNC_IMPL(__imp__sub_821EDA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EDA08"))) PPC_WEAK_FUNC(sub_821EDA08);
PPC_FUNC_IMPL(__imp__sub_821EDA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EDA10;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-9032
	ctx.r9.s64 = ctx.r11.s64 + -9032;
	// addi r8,r10,-9168
	ctx.r8.s64 = ctx.r10.s64 + -9168;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// bl 0x82163ee8
	ctx.lr = 0x821EDA38;
	sub_82163EE8(ctx, base);
	// addi r29,r3,2296
	ctx.r29.s64 = ctx.r3.s64 + 2296;
	// bl 0x8215bec8
	ctx.lr = 0x821EDA40;
	sub_8215BEC8(ctx, base);
	// addi r3,r3,580
	ctx.r3.s64 = ctx.r3.s64 + 580;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x821847a8
	ctx.lr = 0x821EDA50;
	sub_821847A8(ctx, base);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82107368
	ctx.lr = 0x821EDA58;
	sub_82107368(ctx, base);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eda78
	if (ctx.cr6.eq) goto loc_821EDA78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EDA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EDA78:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// bl 0x823c3048
	ctx.lr = 0x821EDA88;
	sub_823C3048(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x821EDA90;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x821EDA98;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EDAA0"))) PPC_WEAK_FUNC(sub_821EDAA0);
PPC_FUNC_IMPL(__imp__sub_821EDAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EDAC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x823c3468
	ctx.lr = 0x821EDAD0;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3cd8
	ctx.lr = 0x821EDAD8;
	sub_823C3CD8(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x821EDADC;
	sub_821EB3E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ebaa8
	ctx.lr = 0x821EDAE4;
	sub_821EBAA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDAF8"))) PPC_WEAK_FUNC(sub_821EDAF8);
PPC_FUNC_IMPL(__imp__sub_821EDAF8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,20044
	ctx.r10.s64 = 20044;
	// li r9,20045
	ctx.r9.s64 = 20045;
	// li r8,20046
	ctx.r8.s64 = 20046;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821EDB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r6,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// bl 0x821eb290
	ctx.lr = 0x821EDB48;
	sub_821EB290(ctx, base);
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

__attribute__((alias("__imp__sub_821EDB5C"))) PPC_WEAK_FUNC(sub_821EDB5C);
PPC_FUNC_IMPL(__imp__sub_821EDB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EDB60"))) PPC_WEAK_FUNC(sub_821EDB60);
PPC_FUNC_IMPL(__imp__sub_821EDB60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x821edb68
	sub_821EDB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EDB68"))) PPC_WEAK_FUNC(sub_821EDB68);
PPC_FUNC_IMPL(__imp__sub_821EDB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821eda08
	ctx.lr = 0x821EDB88;
	sub_821EDA08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821edba4
	if (ctx.cr6.eq) goto loc_821EDBA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821EDBA0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821EDBA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDBBC"))) PPC_WEAK_FUNC(sub_821EDBBC);
PPC_FUNC_IMPL(__imp__sub_821EDBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EDBC0"))) PPC_WEAK_FUNC(sub_821EDBC0);
PPC_FUNC_IMPL(__imp__sub_821EDBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821EDBC8;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821edcbc
	if (ctx.cr6.eq) goto loc_821EDCBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x821EDBEC;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x821EDBF8;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x821EDC08;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x821EDC14;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x821edca4
	if (!ctx.cr6.gt) goto loc_821EDCA4;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r10,55428
	ctx.r9.u64 = ctx.r10.u64 | 55428;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,384
	ctx.r4.s64 = 384;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f31,r8,r9
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x8210a9b0
	ctx.lr = 0x821EDC5C;
	sub_8210A9B0(ctx, base);
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r7,56436
	ctx.r11.u64 = ctx.r7.u64 | 56436;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,391
	ctx.r4.s64 = 391;
	// stfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x8210a9b0
	ctx.lr = 0x821EDC84;
	sub_8210A9B0(ctx, base);
	// lwz r9,256(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821edca4
	if (ctx.cr6.eq) goto loc_821EDCA4;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EDCA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EDCA4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x821EDCB0;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x821EDCBC;
	sub_821AD498(ctx, base);
loc_821EDCBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821EDCC8"))) PPC_WEAK_FUNC(sub_821EDCC8);
PPC_FUNC_IMPL(__imp__sub_821EDCC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
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

__attribute__((alias("__imp__sub_821EDCE4"))) PPC_WEAK_FUNC(sub_821EDCE4);
PPC_FUNC_IMPL(__imp__sub_821EDCE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDCE8"))) PPC_WEAK_FUNC(sub_821EDCE8);
PPC_FUNC_IMPL(__imp__sub_821EDCE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
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

__attribute__((alias("__imp__sub_821EDD04"))) PPC_WEAK_FUNC(sub_821EDD04);
PPC_FUNC_IMPL(__imp__sub_821EDD04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDD08"))) PPC_WEAK_FUNC(sub_821EDD08);
PPC_FUNC_IMPL(__imp__sub_821EDD08) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ede5c
	if (ctx.cr6.eq) goto loc_821EDE5C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ede5c
	if (ctx.cr6.eq) goto loc_821EDE5C;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r30,r11,-23400
	ctx.r30.s64 = ctx.r11.s64 + -23400;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821eddb4
	if (ctx.cr6.eq) goto loc_821EDDB4;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821EDD64:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x821edd70
	if (!ctx.cr0.lt) goto loc_821EDD70;
	// li r11,2
	ctx.r11.s64 = 2;
loc_821EDD70:
	// addi r9,r11,73
	ctx.r9.s64 = ctx.r11.s64 + 73;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x821edd64
	if (ctx.cr6.eq) goto loc_821EDD64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821eddb4
	if (ctx.cr6.eq) goto loc_821EDDB4;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EDDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_821EDDB4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821ede3c
	if (ctx.cr6.eq) goto loc_821EDE3C;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821EDDDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r5,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// addi r4,r11,73
	ctx.r4.s64 = ctx.r11.s64 + 73;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821edddc
	if (ctx.cr6.eq) goto loc_821EDDDC;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821ede3c
	if (ctx.cr6.eq) goto loc_821EDE3C;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EDE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_821EDE3C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ede5c
	if (ctx.cr6.eq) goto loc_821EDE5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EDE5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EDE5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDE74"))) PPC_WEAK_FUNC(sub_821EDE74);
PPC_FUNC_IMPL(__imp__sub_821EDE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EDE78"))) PPC_WEAK_FUNC(sub_821EDE78);
PPC_FUNC_IMPL(__imp__sub_821EDE78) {
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
	// addi r10,r5,80
	ctx.r10.s64 = ctx.r5.s64 + 80;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x821edecc
	if (!ctx.cr6.eq) goto loc_821EDECC;
loc_821EDE9C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x821ede9c
	if (ctx.cr6.eq) goto loc_821EDE9C;
loc_821EDECC:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,20044
	ctx.r7.s64 = 20044;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r6,20045
	ctx.r6.s64 = 20045;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r4,20046
	ctx.r4.s64 = 20046;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// lwz r8,44(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821EDF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// bl 0x821eb290
	ctx.lr = 0x821EDF40;
	sub_821EB290(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDF50"))) PPC_WEAK_FUNC(sub_821EDF50);
PPC_FUNC_IMPL(__imp__sub_821EDF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,260(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,1648(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1648);
	// stw r11,3012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3012, ctx.r11.u32);
	// lwz r7,260(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r5,1648(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1648);
	// stw r11,3268(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3268, ctx.r11.u32);
	// lwz r4,260(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,1648(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1648);
	// stw r11,3524(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3524, ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821EDFA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,260(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r5,r3,11
	ctx.r5.s64 = ctx.r3.s64 + 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r10,1648(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1648);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDFDC"))) PPC_WEAK_FUNC(sub_821EDFDC);
PPC_FUNC_IMPL(__imp__sub_821EDFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EDFE0"))) PPC_WEAK_FUNC(sub_821EDFE0);
PPC_FUNC_IMPL(__imp__sub_821EDFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EDFE8;
	sub_8224878C(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249928
	ctx.lr = 0x821EDFF0;
	sub_82249928(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,9052(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9052);
	ctx.f28.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f29,10388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10388);
	ctx.f29.f64 = double(temp.f32);
	// li r31,1536
	ctx.r31.s64 = 1536;
	// lfs f30,11308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	ctx.f30.f64 = double(temp.f32);
	// addi r29,r11,30956
	ctx.r29.s64 = ctx.r11.s64 + 30956;
	// lfs f31,-31244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31244);
	ctx.f31.f64 = double(temp.f32);
loc_821EE024:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	// bl 0x8224a7b8
	ctx.lr = 0x821EE040;
	sub_8224A7B8(ctx, base);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,-104
	ctx.r9.s64 = ctx.r10.s64 + -104;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x821ee094
	if (ctx.cr6.eq) goto loc_821EE094;
	// stfs f31,780(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 780, temp.u32);
	// stfs f31,784(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 784, temp.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,524(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f31,528(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r11,-104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -104);
	// stfs f30,524(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f30,528(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r11,-104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -104);
	// stfs f30,268(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f30,272(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// b 0x821ee0c0
	goto loc_821EE0C0;
loc_821EE094:
	// stfs f29,780(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r9.u32 + 780, temp.u32);
	// stfs f29,784(r9)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r9.u32 + 784, temp.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f29,524(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f29,528(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r11,-104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -104);
	// stfs f28,524(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f28,528(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r11,-104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -104);
	// stfs f28,268(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f28,272(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
loc_821EE0C0:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r31,1572
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1572, ctx.xer);
	// blt cr6,0x821ee024
	if (ctx.cr6.lt) goto loc_821EE024;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249974
	ctx.lr = 0x821EE0D8;
	sub_82249974(ctx, base);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EE0DC"))) PPC_WEAK_FUNC(sub_821EE0DC);
PPC_FUNC_IMPL(__imp__sub_821EE0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EE0E0"))) PPC_WEAK_FUNC(sub_821EE0E0);
PPC_FUNC_IMPL(__imp__sub_821EE0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EE0E8;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ee298
	if (!ctx.cr6.eq) goto loc_821EE298;
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// addi r29,r3,320
	ctx.r29.s64 = ctx.r3.s64 + 320;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// li r31,1428
	ctx.r31.s64 = 1428;
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_821EE11C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x821EE124;
	sub_8218B408(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// beq cr6,0x821ee160
	if (ctx.cr6.eq) goto loc_821EE160;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x821EE14C;
	sub_8218B408(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_821EE160:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r7,260(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f7,712(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 712, temp.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f6,716(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 716, temp.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,720(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 720, temp.u32);
	// lwz r5,260(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f7,968(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 968, temp.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f6,972(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 972, temp.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stfs f3,976(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 976, temp.u32);
	// lwz r6,260(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stfs f7,712(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 712, temp.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f6,716(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 716, temp.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f3,720(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 720, temp.u32);
	// lwz r8,260(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stfs f7,456(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 456, temp.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stfs f6,460(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 460, temp.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f3,464(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 464, temp.u32);
	// cmpwi cr6,r31,1464
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1464, ctx.xer);
	// blt cr6,0x821ee11c
	if (ctx.cr6.lt) goto loc_821EE11C;
loc_821EE298:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EE2A4"))) PPC_WEAK_FUNC(sub_821EE2A4);
PPC_FUNC_IMPL(__imp__sub_821EE2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EE2A8"))) PPC_WEAK_FUNC(sub_821EE2A8);
PPC_FUNC_IMPL(__imp__sub_821EE2A8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EE2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x821ee350
	if (!ctx.cr6.eq) goto loc_821EE350;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x821EE2E8;
	sub_821EBB58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821EE2F8;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821EE308;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x821EE30C;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ee31c
	if (!ctx.cr6.eq) goto loc_821EE31C;
	// li r11,30228
	ctx.r11.s64 = 30228;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_821EE31C:
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
	ctx.lr = 0x821EE338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_821EE350:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_821EE368"))) PPC_WEAK_FUNC(sub_821EE368);
PPC_FUNC_IMPL(__imp__sub_821EE368) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r31.u32);
	// bl 0x8218b408
	ctx.lr = 0x821EE390;
	sub_8218B408(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lfs f0,11300(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lwz r7,1432(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1432);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,456(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 456, temp.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,1432(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1432);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,460(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 460, temp.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,1432(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1432);
	// stfs f2,464(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,1432(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1432);
	// stfs f4,712(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 712, temp.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,1432(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1432);
	// stfs f3,716(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 716, temp.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,1432(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1432);
	// stfs f2,720(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 720, temp.u32);
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,1444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1444);
	// stfs f4,456(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 456, temp.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,1444(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1444);
	// stfs f3,460(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 460, temp.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,1444(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1444);
	// stfs f2,464(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 464, temp.u32);
	// lwz r6,260(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,1444(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1444);
	// stfs f4,712(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 712, temp.u32);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r11,1444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1444);
	// stfs f3,716(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 716, temp.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,1444(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1444);
	// stfs f2,720(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 720, temp.u32);
	// lwz r8,260(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,1456(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1456);
	// stfs f4,456(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 456, temp.u32);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r4,1456(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1456);
	// stfs f3,460(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 460, temp.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,1456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// stfs f2,464(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 464, temp.u32);
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,1456(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1456);
	// stfs f4,712(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 712, temp.u32);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r5,1456(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1456);
	// stfs f3,716(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 716, temp.u32);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,1456(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1456);
	// stfs f2,720(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 720, temp.u32);
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,1648(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1648);
	// stw r31,3012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3012, ctx.r31.u32);
	// lwz r7,260(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r5,1648(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1648);
	// stw r31,3268(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3268, ctx.r31.u32);
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,1648(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1648);
	// stw r31,3524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3524, ctx.r31.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821EE534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,260(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// addi r6,r3,11
	ctx.r6.s64 = ctx.r3.s64 + 11;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r10,1648(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1648);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
	// bl 0x821ee0e0
	ctx.lr = 0x821EE55C;
	sub_821EE0E0(ctx, base);
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

__attribute__((alias("__imp__sub_821EE574"))) PPC_WEAK_FUNC(sub_821EE574);
PPC_FUNC_IMPL(__imp__sub_821EE574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EE578"))) PPC_WEAK_FUNC(sub_821EE578);
PPC_FUNC_IMPL(__imp__sub_821EE578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821EE580;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1428
	ctx.r31.s64 = 1428;
	// stw r28,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r28.u32);
	// li r29,2816
	ctx.r29.s64 = 2816;
	// lfs f31,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
loc_821EE5A8:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,1648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1648);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r27,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r27.u32);
	// bl 0x8218b408
	ctx.lr = 0x821EE5C4;
	sub_8218B408(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,44(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// std r4,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// bctrl 
	ctx.lr = 0x821EE5F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821ee614
	if (!ctx.cr6.eq) goto loc_821EE614;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x821EE600;
	sub_8218B408(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_821EE614:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,260(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpwi cr6,r29,3584
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3584, ctx.xer);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f7,456(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f6,460(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 460, temp.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,464(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 464, temp.u32);
	// lwz r7,260(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stfs f7,712(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 712, temp.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f6,716(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 716, temp.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f3,720(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 720, temp.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// blt cr6,0x821ee5a8
	if (ctx.cr6.lt) goto loc_821EE5A8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821EE6F0"))) PPC_WEAK_FUNC(sub_821EE6F0);
PPC_FUNC_IMPL(__imp__sub_821EE6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x821EE71C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ee740
	if (ctx.cr6.eq) goto loc_821EE740;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821EE740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EE740:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE754"))) PPC_WEAK_FUNC(sub_821EE754);
PPC_FUNC_IMPL(__imp__sub_821EE754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EE758"))) PPC_WEAK_FUNC(sub_821EE758);
PPC_FUNC_IMPL(__imp__sub_821EE758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EE760;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x821EE76C;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821EE774;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EE780;
	sub_821837D0(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x823c3410
	ctx.lr = 0x821EE788;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x821EE790;
	sub_823C3C70(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821ebaa8
	ctx.lr = 0x821EE798;
	sub_821EBAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821edf50
	ctx.lr = 0x821EE7A0;
	sub_821EDF50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821edfe0
	ctx.lr = 0x821EE7A8;
	sub_821EDFE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EE7B0;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EE7B8"))) PPC_WEAK_FUNC(sub_821EE7B8);
PPC_FUNC_IMPL(__imp__sub_821EE7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x821ee0e0
	ctx.lr = 0x821EE7D0;
	sub_821EE0E0(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821ee7e4
	if (!ctx.cr6.eq) goto loc_821EE7E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee6f0
	ctx.lr = 0x821EE7E4;
	sub_821EE6F0(ctx, base);
loc_821EE7E4:
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ee890
	if (ctx.cr6.eq) goto loc_821EE890;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EE800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ee890
	if (ctx.cr6.eq) goto loc_821EE890;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EE81C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ee838
	if (!ctx.cr6.eq) goto loc_821EE838;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EE838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EE838:
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ee858
	if (ctx.cr6.eq) goto loc_821EE858;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EE858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EE858:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821EE874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821ebaa8
	ctx.lr = 0x821EE87C;
	sub_821EBAA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821edaf8
	ctx.lr = 0x821EE888;
	sub_821EDAF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee368
	ctx.lr = 0x821EE890;
	sub_821EE368(ctx, base);
loc_821EE890:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE8A4"))) PPC_WEAK_FUNC(sub_821EE8A4);
PPC_FUNC_IMPL(__imp__sub_821EE8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EE8A8"))) PPC_WEAK_FUNC(sub_821EE8A8);
PPC_FUNC_IMPL(__imp__sub_821EE8A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821edf50
	ctx.lr = 0x821EE8CC;
	sub_821EDF50(ctx, base);
	// lwz r8,-28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// li r11,20044
	ctx.r11.s64 = 20044;
	// li r10,20045
	ctx.r10.s64 = 20045;
	// li r9,20046
	ctx.r9.s64 = 20046;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821EE8F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r6,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// bl 0x821eb290
	ctx.lr = 0x821EE90C;
	sub_821EB290(ctx, base);
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

__attribute__((alias("__imp__sub_821EE924"))) PPC_WEAK_FUNC(sub_821EE924);
PPC_FUNC_IMPL(__imp__sub_821EE924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EE928"))) PPC_WEAK_FUNC(sub_821EE928);
PPC_FUNC_IMPL(__imp__sub_821EE928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EE958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,73
	ctx.r9.s64 = ctx.r3.s64 + 73;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x821ee974
	if (!ctx.cr6.eq) goto loc_821EE974;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ee9a0
	goto loc_821EE9A0;
loc_821EE974:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ee2a8
	ctx.lr = 0x821EE97C;
	sub_821EE2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ee99c
	if (ctx.cr6.eq) goto loc_821EE99C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
	// b 0x821ee9a0
	goto loc_821EE9A0;
loc_821EE99C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821EE9A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE9B8"))) PPC_WEAK_FUNC(sub_821EE9B8);
PPC_FUNC_IMPL(__imp__sub_821EE9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EE9C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r29,r3,-28
	ctx.r29.s64 = ctx.r3.s64 + -28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EE9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ee578
	ctx.lr = 0x821EE9EC;
	sub_821EE578(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x821eea98
	if (ctx.cr6.lt) goto loc_821EEA98;
	// beq cr6,0x821eea4c
	if (ctx.cr6.eq) goto loc_821EEA4C;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x821eeaec
	if (!ctx.cr6.lt) goto loc_821EEAEC;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eea20
	if (ctx.cr6.eq) goto loc_821EEA20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EEA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EEA20:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1172
	ctx.r3.s64 = 1172;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// bl 0x82080000
	ctx.lr = 0x821EEA30;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eeae4
	if (ctx.cr6.eq) goto loc_821EEAE4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,288(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82204320
	ctx.lr = 0x821EEA48;
	sub_82204320(ctx, base);
	// b 0x821eeae8
	goto loc_821EEAE8;
loc_821EEA4C:
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eea6c
	if (ctx.cr6.eq) goto loc_821EEA6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EEA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EEA6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,4972
	ctx.r3.s64 = 4972;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// bl 0x82080000
	ctx.lr = 0x821EEA7C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eeae4
	if (ctx.cr6.eq) goto loc_821EEAE4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,288(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82202f10
	ctx.lr = 0x821EEA94;
	sub_82202F10(ctx, base);
	// b 0x821eeae8
	goto loc_821EEAE8;
loc_821EEA98:
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eeab8
	if (ctx.cr6.eq) goto loc_821EEAB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EEAB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EEAB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,4972
	ctx.r3.s64 = 4972;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// bl 0x82080000
	ctx.lr = 0x821EEAC8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eeae4
	if (ctx.cr6.eq) goto loc_821EEAE4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,288(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82202b30
	ctx.lr = 0x821EEAE0;
	sub_82202B30(ctx, base);
	// b 0x821eeae8
	goto loc_821EEAE8;
loc_821EEAE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EEAE8:
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
loc_821EEAEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EEB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EEB08"))) PPC_WEAK_FUNC(sub_821EEB08);
PPC_FUNC_IMPL(__imp__sub_821EEB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821EEB10;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x823c3b68
	ctx.lr = 0x821EEB2C;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x823c58b0
	ctx.lr = 0x821EEB3C;
	sub_823C58B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r9,r11,-9032
	ctx.r9.s64 = ctx.r11.s64 + -9032;
	// addi r8,r10,-9168
	ctx.r8.s64 = ctx.r10.s64 + -9168;
	// stw r26,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r26.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r25,r31,264
	ctx.r25.s64 = ctx.r31.s64 + 264;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r26,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r26.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823c2ff0
	ctx.lr = 0x821EEB70;
	sub_823C2FF0(ctx, base);
	// stw r29,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r29.u32);
	// stw r26,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r26.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x822aa648
	ctx.lr = 0x821EEB84;
	sub_822AA648(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x822aa648
	ctx.lr = 0x821EEB90;
	sub_822AA648(ctx, base);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-792(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -792);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r6,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r6.u32);
	// bl 0x821ee0e0
	ctx.lr = 0x821EEBA8;
	sub_821EE0E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ede78
	ctx.lr = 0x821EEBB8;
	sub_821EDE78(ctx, base);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// li r29,119
	ctx.r29.s64 = 119;
	// addi r11,r5,8864
	ctx.r11.s64 = ctx.r5.s64 + 8864;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_821EEBCC:
	// addi r27,r29,9
	ctx.r27.s64 = ctx.r29.s64 + 9;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82106fc0
	ctx.lr = 0x821EEBE4;
	sub_82106FC0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82106fc0
	ctx.lr = 0x821EEBF8;
	sub_82106FC0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82106fc0
	ctx.lr = 0x821EEC0C;
	sub_82106FC0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82106fc0
	ctx.lr = 0x821EEC20;
	sub_82106FC0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x821eebcc
	if (!ctx.cr0.eq) goto loc_821EEBCC;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,1648(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1648);
	// stw r30,1476(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1476, ctx.r30.u32);
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,1648(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1648);
	// stw r30,3780(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3780, ctx.r30.u32);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r3,1648(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1648);
	// stw r30,1732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1732, ctx.r30.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,1648(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1648);
	// stw r30,4036(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4036, ctx.r30.u32);
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,1648(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1648);
	// stw r30,1988(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1988, ctx.r30.u32);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r3,1648(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1648);
	// stw r30,4292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4292, ctx.r30.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,1648(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1648);
	// stw r30,2244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2244, ctx.r30.u32);
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,1648(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1648);
	// stw r30,4548(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4548, ctx.r30.u32);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r3,1648(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1648);
	// stw r30,2500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2500, ctx.r30.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,1648(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1648);
	// stw r30,4804(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4804, ctx.r30.u32);
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,1648(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1648);
	// stw r30,2756(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2756, ctx.r30.u32);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r3,1648(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1648);
	// stw r30,5060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5060, ctx.r30.u32);
	// bl 0x82182e90
	ctx.lr = 0x821EECF4;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821EECFC;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EED08;
	sub_821837D0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823c3410
	ctx.lr = 0x821EED10;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x821EED18;
	sub_823C3C70(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821ebaa8
	ctx.lr = 0x821EED20;
	sub_821EBAA8(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,1648(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1648);
	// stw r30,3012(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3012, ctx.r30.u32);
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,1648(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1648);
	// stw r30,3268(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3268, ctx.r30.u32);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,1648(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1648);
	// stw r30,3524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3524, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821EED64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r3,11
	ctx.r6.s64 = ctx.r3.s64 + 11;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,1648(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1648);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r26.u32);
	// bl 0x821edfe0
	ctx.lr = 0x821EED88;
	sub_821EDFE0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EED90;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821EED9C"))) PPC_WEAK_FUNC(sub_821EED9C);
PPC_FUNC_IMPL(__imp__sub_821EED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EEDA0"))) PPC_WEAK_FUNC(sub_821EEDA0);
PPC_FUNC_IMPL(__imp__sub_821EEDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eedd4
	if (ctx.cr6.eq) goto loc_821EEDD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EEDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EEDD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -776, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EEDF0"))) PPC_WEAK_FUNC(sub_821EEDF0);
PPC_FUNC_IMPL(__imp__sub_821EEDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eee24
	if (ctx.cr6.eq) goto loc_821EEE24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EEE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EEE24:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-780(r31)
	PPC_STORE_U32(ctx.r31.u32 + -780, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EEE40"))) PPC_WEAK_FUNC(sub_821EEE40);
PPC_FUNC_IMPL(__imp__sub_821EEE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x821eef68
	if (ctx.cr6.gt) goto loc_821EEF68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821eeeb0
	// bdzf 4*cr6+eq,0x821eef68
	// bdzf 4*cr6+eq,0x821eeed4
	// bdzf 4*cr6+eq,0x821eef04
	// bne cr6,0x821eef28
	if (!ctx.cr6.eq) goto loc_821EEF28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EEE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821EEEB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EEEC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eef68
	if (ctx.cr6.eq) goto loc_821EEF68;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821eef64
	goto loc_821EEF64;
loc_821EEED4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EEEE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821EEF04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EEF18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eef68
	if (ctx.cr6.eq) goto loc_821EEF68;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821eef64
	goto loc_821EEF64;
loc_821EEF28:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821eef68
	if (ctx.cr6.eq) goto loc_821EEF68;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eef54
	if (ctx.cr6.eq) goto loc_821EEF54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EEF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EEF54:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_821EEF64:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_821EEF68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EEF7C"))) PPC_WEAK_FUNC(sub_821EEF7C);
PPC_FUNC_IMPL(__imp__sub_821EEF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EEF80"))) PPC_WEAK_FUNC(sub_821EEF80);
PPC_FUNC_IMPL(__imp__sub_821EEF80) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821eef98
	if (ctx.cr6.eq) goto loc_821EEF98;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821EEF98:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EEFAC"))) PPC_WEAK_FUNC(sub_821EEFAC);
PPC_FUNC_IMPL(__imp__sub_821EEFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EEFB0"))) PPC_WEAK_FUNC(sub_821EEFB0);
PPC_FUNC_IMPL(__imp__sub_821EEFB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821eefc8
	if (ctx.cr6.eq) goto loc_821EEFC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821EEFC8:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EEFE0"))) PPC_WEAK_FUNC(sub_821EEFE0);
PPC_FUNC_IMPL(__imp__sub_821EEFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ef024
	if (ctx.cr6.eq) goto loc_821EF024;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EF024:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EF038"))) PPC_WEAK_FUNC(sub_821EF038);
PPC_FUNC_IMPL(__imp__sub_821EF038) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ef058
	if (ctx.cr6.eq) goto loc_821EF058;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821ef058
	if (ctx.cr6.eq) goto loc_821EF058;
loc_821EF050:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821EF058:
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821ef050
	if (!ctx.cr6.eq) goto loc_821EF050;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// beq cr6,0x821ef078
	if (ctx.cr6.eq) goto loc_821EF078;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
loc_821EF078:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EF080"))) PPC_WEAK_FUNC(sub_821EF080);
PPC_FUNC_IMPL(__imp__sub_821EF080) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ef0a0
	if (ctx.cr6.eq) goto loc_821EF0A0;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821ef0a0
	if (ctx.cr6.eq) goto loc_821EF0A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821EF0A0:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EF0B4"))) PPC_WEAK_FUNC(sub_821EF0B4);
PPC_FUNC_IMPL(__imp__sub_821EF0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF0B8"))) PPC_WEAK_FUNC(sub_821EF0B8);
PPC_FUNC_IMPL(__imp__sub_821EF0B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// lwz r10,124(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EF0CC"))) PPC_WEAK_FUNC(sub_821EF0CC);
PPC_FUNC_IMPL(__imp__sub_821EF0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF0D0"))) PPC_WEAK_FUNC(sub_821EF0D0);
PPC_FUNC_IMPL(__imp__sub_821EF0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EF0D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ef114
	if (!ctx.cr6.gt) goto loc_821EF114;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EF0F4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82112820
	ctx.lr = 0x821EF100;
	sub_82112820(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1072
	ctx.r31.s64 = ctx.r31.s64 + 1072;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ef0f4
	if (ctx.cr6.lt) goto loc_821EF0F4;
loc_821EF114:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EF11C"))) PPC_WEAK_FUNC(sub_821EF11C);
PPC_FUNC_IMPL(__imp__sub_821EF11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF120"))) PPC_WEAK_FUNC(sub_821EF120);
PPC_FUNC_IMPL(__imp__sub_821EF120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x821EF140;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821ef158
	if (ctx.cr6.eq) goto loc_821EF158;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x821EF154;
	sub_82183448(ctx, base);
	// b 0x821ef160
	goto loc_821EF160;
loc_821EF158:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x821EF160;
	sub_821845A0(ctx, base);
loc_821EF160:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef180
	if (ctx.cr6.eq) goto loc_821EF180;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821efca0
	ctx.lr = 0x821EF174;
	sub_821EFCA0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-776(r11)
	PPC_STORE_U32(ctx.r11.u32 + -776, ctx.r3.u32);
	// b 0x821ef18c
	goto loc_821EF18C;
loc_821EF180:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -776, ctx.r11.u32);
loc_821EF18C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EF1A4"))) PPC_WEAK_FUNC(sub_821EF1A4);
PPC_FUNC_IMPL(__imp__sub_821EF1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF1A8"))) PPC_WEAK_FUNC(sub_821EF1A8);
PPC_FUNC_IMPL(__imp__sub_821EF1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x821EF1C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821ef1e0
	if (ctx.cr6.eq) goto loc_821EF1E0;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82183448
	ctx.lr = 0x821EF1DC;
	sub_82183448(ctx, base);
	// b 0x821ef1e8
	goto loc_821EF1E8;
loc_821EF1E0:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821845a0
	ctx.lr = 0x821EF1E8;
	sub_821845A0(ctx, base);
loc_821EF1E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef200
	if (ctx.cr6.eq) goto loc_821EF200;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82204ca0
	ctx.lr = 0x821EF1FC;
	sub_82204CA0(ctx, base);
	// b 0x821ef204
	goto loc_821EF204;
loc_821EF200:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EF204:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-780(r11)
	PPC_STORE_U32(ctx.r11.u32 + -780, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EF224"))) PPC_WEAK_FUNC(sub_821EF224);
PPC_FUNC_IMPL(__imp__sub_821EF224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF228"))) PPC_WEAK_FUNC(sub_821EF228);
PPC_FUNC_IMPL(__imp__sub_821EF228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EF230;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-8928
	ctx.r9.s64 = ctx.r11.s64 + -8928;
	// addi r8,r10,-8940
	ctx.r8.s64 = ctx.r10.s64 + -8940;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef274
	if (ctx.cr6.eq) goto loc_821EF274;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EF274:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef29c
	if (ctx.cr6.eq) goto loc_821EF29C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EF29C:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef2c0
	if (ctx.cr6.eq) goto loc_821EF2C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF2C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EF2C0:
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x821883b8
	ctx.lr = 0x821EF2CC;
	sub_821883B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x821EF2D4;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x821EF2DC;
	sub_821857F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EF2E4"))) PPC_WEAK_FUNC(sub_821EF2E4);
PPC_FUNC_IMPL(__imp__sub_821EF2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF2E8"))) PPC_WEAK_FUNC(sub_821EF2E8);
PPC_FUNC_IMPL(__imp__sub_821EF2E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821efb48
	sub_821EFB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EF2F0"))) PPC_WEAK_FUNC(sub_821EF2F0);
PPC_FUNC_IMPL(__imp__sub_821EF2F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821EF304"))) PPC_WEAK_FUNC(sub_821EF304);
PPC_FUNC_IMPL(__imp__sub_821EF304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF308"))) PPC_WEAK_FUNC(sub_821EF308);
PPC_FUNC_IMPL(__imp__sub_821EF308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821EF31C"))) PPC_WEAK_FUNC(sub_821EF31C);
PPC_FUNC_IMPL(__imp__sub_821EF31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF320"))) PPC_WEAK_FUNC(sub_821EF320);
PPC_FUNC_IMPL(__imp__sub_821EF320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821EF334"))) PPC_WEAK_FUNC(sub_821EF334);
PPC_FUNC_IMPL(__imp__sub_821EF334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF338"))) PPC_WEAK_FUNC(sub_821EF338);
PPC_FUNC_IMPL(__imp__sub_821EF338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821EF350"))) PPC_WEAK_FUNC(sub_821EF350);
PPC_FUNC_IMPL(__imp__sub_821EF350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821EF364"))) PPC_WEAK_FUNC(sub_821EF364);
PPC_FUNC_IMPL(__imp__sub_821EF364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF368"))) PPC_WEAK_FUNC(sub_821EF368);
PPC_FUNC_IMPL(__imp__sub_821EF368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821EF37C"))) PPC_WEAK_FUNC(sub_821EF37C);
PPC_FUNC_IMPL(__imp__sub_821EF37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF380"))) PPC_WEAK_FUNC(sub_821EF380);
PPC_FUNC_IMPL(__imp__sub_821EF380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821EF394"))) PPC_WEAK_FUNC(sub_821EF394);
PPC_FUNC_IMPL(__imp__sub_821EF394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF398"))) PPC_WEAK_FUNC(sub_821EF398);
PPC_FUNC_IMPL(__imp__sub_821EF398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_821EF3DC"))) PPC_WEAK_FUNC(sub_821EF3DC);
PPC_FUNC_IMPL(__imp__sub_821EF3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF3E0"))) PPC_WEAK_FUNC(sub_821EF3E0);
PPC_FUNC_IMPL(__imp__sub_821EF3E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821EF3F8"))) PPC_WEAK_FUNC(sub_821EF3F8);
PPC_FUNC_IMPL(__imp__sub_821EF3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EF400;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,96(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821EF410;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EF41C;
	sub_821837D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,84
	ctx.r4.s64 = 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ed998
	ctx.lr = 0x821EF440;
	sub_821ED998(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,86
	ctx.r7.s64 = 86;
	// li r6,19
	ctx.r6.s64 = 19;
	// li r5,85
	ctx.r5.s64 = 85;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821eb168
	ctx.lr = 0x821EF45C;
	sub_821EB168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea318
	ctx.lr = 0x821EF464;
	sub_821EA318(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,81
	ctx.r4.s64 = 81;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821ea498
	ctx.lr = 0x821EF474;
	sub_821EA498(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r3,-788(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -788);
	// bl 0x821ea520
	ctx.lr = 0x821EF480;
	sub_821EA520(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821EF484;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821ef49c
	if (ctx.cr6.eq) goto loc_821EF49C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x821EF498;
	sub_82183448(ctx, base);
	// b 0x821ef4a4
	goto loc_821EF4A4;
loc_821EF49C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x821EF4A4;
	sub_821845A0(ctx, base);
loc_821EF4A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef4b8
	if (ctx.cr6.eq) goto loc_821EF4B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821ff410
	ctx.lr = 0x821EF4B4;
	sub_821FF410(ctx, base);
	// b 0x821ef4bc
	goto loc_821EF4BC;
loc_821EF4B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EF4BC:
	// stw r3,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-21804
	ctx.r4.s64 = ctx.r11.s64 + -21804;
	// bl 0x821ff6b0
	ctx.lr = 0x821EF4CC;
	sub_821FF6B0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821EF4D0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821ef4e8
	if (ctx.cr6.eq) goto loc_821EF4E8;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x821EF4E4;
	sub_82183448(ctx, base);
	// b 0x821ef4f0
	goto loc_821EF4F0;
loc_821EF4E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x821EF4F0;
	sub_821845A0(ctx, base);
loc_821EF4F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef504
	if (ctx.cr6.eq) goto loc_821EF504;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821ff410
	ctx.lr = 0x821EF500;
	sub_821FF410(ctx, base);
	// b 0x821ef508
	goto loc_821EF508;
loc_821EF504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EF508:
	// stw r3,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-21816
	ctx.r4.s64 = ctx.r11.s64 + -21816;
	// bl 0x821ff550
	ctx.lr = 0x821EF518;
	sub_821FF550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ef120
	ctx.lr = 0x821EF524;
	sub_821EF120(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EF52C;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EF534"))) PPC_WEAK_FUNC(sub_821EF534);
PPC_FUNC_IMPL(__imp__sub_821EF534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF538"))) PPC_WEAK_FUNC(sub_821EF538);
PPC_FUNC_IMPL(__imp__sub_821EF538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EF540;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821eb228
	ctx.lr = 0x821EF54C;
	sub_821EB228(ctx, base);
	// bl 0x821ebe98
	ctx.lr = 0x821EF550;
	sub_821EBE98(ctx, base);
	// bl 0x821e8e40
	ctx.lr = 0x821EF554;
	sub_821E8E40(ctx, base);
	// bl 0x821ea390
	ctx.lr = 0x821EF558;
	sub_821EA390(ctx, base);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef57c
	if (ctx.cr6.eq) goto loc_821EF57C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EF57C:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,-776(r30)
	PPC_STORE_U32(ctx.r30.u32 + -776, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef5a8
	if (ctx.cr6.eq) goto loc_821EF5A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EF5A8:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef5cc
	if (ctx.cr6.eq) goto loc_821EF5CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EF5CC:
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-1736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// bl 0x821d1688
	ctx.lr = 0x821EF5DC;
	sub_821D1688(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,212(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821EF5F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32177
	ctx.r8.s64 = -2108751872;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-4772(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4772, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EF604"))) PPC_WEAK_FUNC(sub_821EF604);
PPC_FUNC_IMPL(__imp__sub_821EF604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF608"))) PPC_WEAK_FUNC(sub_821EF608);
PPC_FUNC_IMPL(__imp__sub_821EF608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EF610;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821ef640
	if (ctx.cr6.eq) goto loc_821EF640;
	// bl 0x820ed3d8
	ctx.lr = 0x821EF634;
	sub_820ED3D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// bne cr6,0x821ef644
	if (!ctx.cr6.eq) goto loc_821EF644;
loc_821EF640:
	// li r29,0
	ctx.r29.s64 = 0;
loc_821EF644:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ef6c0
	if (ctx.cr6.eq) goto loc_821EF6C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x821EF660;
	sub_821E90A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef674
	if (!ctx.cr6.eq) goto loc_821EF674;
loc_821EF668:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821EF674:
	// lwz r3,-792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -792);
	// bl 0x821e9108
	ctx.lr = 0x821EF67C;
	sub_821E9108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef68c
	if (!ctx.cr6.eq) goto loc_821EF68C;
	// lwz r3,-792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -792);
	// bl 0x821e92b8
	ctx.lr = 0x821EF68C;
	sub_821E92B8(ctx, base);
loc_821EF68C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea570
	ctx.lr = 0x821EF698;
	sub_821EA570(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ef668
	if (ctx.cr6.eq) goto loc_821EF668;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x821ff660
	ctx.lr = 0x821EF6A8;
	sub_821FF660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ef668
	if (ctx.cr6.eq) goto loc_821EF668;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x821ff660
	ctx.lr = 0x821EF6B8;
	sub_821FF660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ef668
	if (ctx.cr6.eq) goto loc_821EF668;
loc_821EF6C0:
	// bl 0x821eacc8
	ctx.lr = 0x821EF6C4;
	sub_821EACC8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ef734
	if (ctx.cr6.eq) goto loc_821EF734;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ef734
	if (ctx.cr6.eq) goto loc_821EF734;
	// lwz r11,1720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ef708
	if (ctx.cr6.eq) goto loc_821EF708;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ef734
	if (ctx.cr6.eq) goto loc_821EF734;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ef734
	if (ctx.cr6.eq) goto loc_821EF734;
loc_821EF708:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x821EF714;
	sub_821E90A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ef668
	if (ctx.cr6.eq) goto loc_821EF668;
	// lwz r3,-792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -792);
	// bl 0x821e9108
	ctx.lr = 0x821EF724;
	sub_821E9108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef734
	if (!ctx.cr6.eq) goto loc_821EF734;
	// lwz r3,-792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -792);
	// bl 0x821e92b8
	ctx.lr = 0x821EF734;
	sub_821E92B8(ctx, base);
loc_821EF734:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821ef758
	if (ctx.cr6.eq) goto loc_821EF758;
	// lwz r31,96(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x82183078
	ctx.lr = 0x821EF744;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EF750;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EF758;
	sub_821837D0(ctx, base);
loc_821EF758:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EF764"))) PPC_WEAK_FUNC(sub_821EF764);
PPC_FUNC_IMPL(__imp__sub_821EF764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF768"))) PPC_WEAK_FUNC(sub_821EF768);
PPC_FUNC_IMPL(__imp__sub_821EF768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821ef8cc
	if (ctx.cr6.gt) goto loc_821EF8CC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821ef7c0
	// bdzf 4*cr6+eq,0x821ef8cc
	// bdzf 4*cr6+eq,0x821ef7f8
	// bne cr6,0x821ef83c
	if (!ctx.cr6.eq) goto loc_821EF83C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF7B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x821ef8c8
	goto loc_821EF8C8;
loc_821EF7C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF7D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ef8cc
	if (ctx.cr6.eq) goto loc_821EF8CC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821EF7F8:
	// bl 0x821eacc8
	ctx.lr = 0x821EF7FC;
	sub_821EACC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef818
	if (ctx.cr6.eq) goto loc_821EF818;
	// bl 0x821eacc8
	ctx.lr = 0x821EF808;
	sub_821EACC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb4b8
	ctx.lr = 0x821EF810;
	sub_821EB4B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb6b8
	ctx.lr = 0x821EF818;
	sub_821EB6B8(ctx, base);
loc_821EF818:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821EF83C:
	// bl 0x821eb710
	ctx.lr = 0x821EF840;
	sub_821EB710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef8cc
	if (!ctx.cr6.eq) goto loc_821EF8CC;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x821ef878
	if (!ctx.cr6.eq) goto loc_821EF878;
	// bl 0x821eb228
	ctx.lr = 0x821EF860;
	sub_821EB228(ctx, base);
	// bl 0x821ebe98
	ctx.lr = 0x821EF864;
	sub_821EBE98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821EF878:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821ef8a8
	if (!ctx.cr6.eq) goto loc_821EF8A8;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x821ef0d0
	ctx.lr = 0x821EF888;
	sub_821EF0D0(ctx, base);
	// bl 0x821e8e40
	ctx.lr = 0x821EF88C;
	sub_821E8E40(ctx, base);
	// bl 0x821ea390
	ctx.lr = 0x821EF890;
	sub_821EA390(ctx, base);
	// bl 0x821eeda0
	ctx.lr = 0x821EF894;
	sub_821EEDA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821EF8A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ef8cc
	if (!ctx.cr6.eq) goto loc_821EF8CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EF8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,6
	ctx.r9.s64 = 6;
loc_821EF8C8:
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
loc_821EF8CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EF8E0"))) PPC_WEAK_FUNC(sub_821EF8E0);
PPC_FUNC_IMPL(__imp__sub_821EF8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821EF8E8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x821EF8F8;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EF904;
	sub_821837D0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x821EF908;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,120
	ctx.r3.s64 = 120;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ef99c
	if (ctx.cr6.eq) goto loc_821EF99C;
	// bl 0x82080000
	ctx.lr = 0x821EF91C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef954
	if (ctx.cr6.eq) goto loc_821EF954;
	// li r11,7680
	ctx.r11.s64 = 7680;
	// li r10,9723
	ctx.r10.s64 = 9723;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-8712
	ctx.r7.s64 = ctx.r9.s64 + -8712;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82113600
	ctx.lr = 0x821EF950;
	sub_82113600(ctx, base);
	// b 0x821ef958
	goto loc_821EF958;
loc_821EF954:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EF958:
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82112370
	ctx.lr = 0x821EF96C;
	sub_82112370(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82112370
	ctx.lr = 0x821EF980;
	sub_82112370(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82112370
	ctx.lr = 0x821EF994;
	sub_82112370(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x821efa04
	goto loc_821EFA04;
loc_821EF99C:
	// bl 0x82080000
	ctx.lr = 0x821EF9A0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef9d4
	if (ctx.cr6.eq) goto loc_821EF9D4;
	// li r11,7680
	ctx.r11.s64 = 7680;
	// li r10,9723
	ctx.r10.s64 = 9723;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r10.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82113600
	ctx.lr = 0x821EF9D0;
	sub_82113600(ctx, base);
	// b 0x821ef9d8
	goto loc_821EF9D8;
loc_821EF9D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EF9D8:
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82112370
	ctx.lr = 0x821EF9EC;
	sub_82112370(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82112370
	ctx.lr = 0x821EFA00;
	sub_82112370(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
loc_821EFA04:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82112370
	ctx.lr = 0x821EFA14;
	sub_82112370(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EFA1C;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821EFA24"))) PPC_WEAK_FUNC(sub_821EFA24);
PPC_FUNC_IMPL(__imp__sub_821EFA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EFA28"))) PPC_WEAK_FUNC(sub_821EFA28);
PPC_FUNC_IMPL(__imp__sub_821EFA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x821ef0d0
	ctx.lr = 0x821EFA44;
	sub_821EF0D0(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821efa80
	if (ctx.cr6.eq) goto loc_821EFA80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EFA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821EFA80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EFA9C"))) PPC_WEAK_FUNC(sub_821EFA9C);
PPC_FUNC_IMPL(__imp__sub_821EFA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EFAA0"))) PPC_WEAK_FUNC(sub_821EFAA0);
PPC_FUNC_IMPL(__imp__sub_821EFAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821EFAA8;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821efb3c
	if (!ctx.cr6.eq) goto loc_821EFB3C;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82182e90
	ctx.lr = 0x821EFAC8;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bgt cr6,0x821efafc
	if (ctx.cr6.gt) goto loc_821EFAFC;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821efaf0
	// bdzf 4*cr6+eq,0x821efaf0
	// bne cr6,0x821efaf0
	if (!ctx.cr6.eq) goto loc_821EFAF0;
	// bl 0x8215c0c0
	ctx.lr = 0x821EFAEC;
	sub_8215C0C0(ctx, base);
	// b 0x821efaf8
	goto loc_821EFAF8;
loc_821EFAF0:
	// bl 0x8215c0c0
	ctx.lr = 0x821EFAF4;
	sub_8215C0C0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821EFAF8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821EFAFC:
	// bl 0x82183078
	ctx.lr = 0x821EFB00;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EFB0C;
	sub_821837D0(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821EFB18;
	sub_822AA648(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x821ef1a8
	ctx.lr = 0x821EFB34;
	sub_821EF1A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EFB3C;
	sub_821837D0(ctx, base);
loc_821EFB3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821EFB44"))) PPC_WEAK_FUNC(sub_821EFB44);
PPC_FUNC_IMPL(__imp__sub_821EFB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EFB48"))) PPC_WEAK_FUNC(sub_821EFB48);
PPC_FUNC_IMPL(__imp__sub_821EFB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821ef228
	ctx.lr = 0x821EFB68;
	sub_821EF228(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821efb84
	if (ctx.cr6.eq) goto loc_821EFB84;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821EFB80;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821EFB84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EFB9C"))) PPC_WEAK_FUNC(sub_821EFB9C);
PPC_FUNC_IMPL(__imp__sub_821EFB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EFBA0"))) PPC_WEAK_FUNC(sub_821EFBA0);
PPC_FUNC_IMPL(__imp__sub_821EFBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821EFBA8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x821EFBC4;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,90
	ctx.r4.s64 = 90;
	// bl 0x821859a0
	ctx.lr = 0x821EFBD8;
	sub_821859A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-8928
	ctx.r9.s64 = ctx.r11.s64 + -8928;
	// addi r8,r10,-8940
	ctx.r8.s64 = ctx.r10.s64 + -8940;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// bl 0x82188378
	ctx.lr = 0x821EFC14;
	sub_82188378(ctx, base);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// stw r6,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r31,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r31.u32);
	// bl 0x821847a8
	ctx.lr = 0x821EFC58;
	sub_821847A8(ctx, base);
	// bl 0x82088650
	ctx.lr = 0x821EFC5C;
	sub_82088650(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// std r9,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r9.u64);
	// beq cr6,0x821efc7c
	if (ctx.cr6.eq) goto loc_821EFC7C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,15464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15464);
	// bl 0x8216db98
	ctx.lr = 0x821EFC7C;
	sub_8216DB98(ctx, base);
loc_821EFC7C:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821efc98
	if (ctx.cr6.eq) goto loc_821EFC98;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_821EFC98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821EFCA0"))) PPC_WEAK_FUNC(sub_821EFCA0);
PPC_FUNC_IMPL(__imp__sub_821EFCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x821EFCC4;
	sub_82185740(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r9,r10,-8700
	ctx.r9.s64 = ctx.r10.s64 + -8700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// stb r11,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r11.u8);
	// sth r11,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EFD08"))) PPC_WEAK_FUNC(sub_821EFD08);
PPC_FUNC_IMPL(__imp__sub_821EFD08) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EFD20"))) PPC_WEAK_FUNC(sub_821EFD20);
PPC_FUNC_IMPL(__imp__sub_821EFD20) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EFD38"))) PPC_WEAK_FUNC(sub_821EFD38);
PPC_FUNC_IMPL(__imp__sub_821EFD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-8700
	ctx.r10.s64 = ctx.r11.s64 + -8700;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821efd80
	if (ctx.cr6.eq) goto loc_821EFD80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EFD80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EFD80:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x821857f0
	ctx.lr = 0x821EFD90;
	sub_821857F0(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821efdac
	if (ctx.cr6.eq) goto loc_821EFDAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821EFDA8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821EFDAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EFDC4"))) PPC_WEAK_FUNC(sub_821EFDC4);
PPC_FUNC_IMPL(__imp__sub_821EFDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EFDC8"))) PPC_WEAK_FUNC(sub_821EFDC8);
PPC_FUNC_IMPL(__imp__sub_821EFDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821efe10
	if (!ctx.cr6.eq) goto loc_821EFE10;
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
loc_821EFE10:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821efe48
	if (ctx.cr6.eq) goto loc_821EFE48;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821efe60
	if (ctx.cr6.eq) goto loc_821EFE60;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821efe60
	if (ctx.cr6.eq) goto loc_821EFE60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144a70
	ctx.lr = 0x821EFE34;
	sub_82144A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x821efe60
	goto loc_821EFE60;
loc_821EFE48:
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r9,r7,r3
	PPC_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u8);
loc_821EFE60:
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

__attribute__((alias("__imp__sub_821EFE78"))) PPC_WEAK_FUNC(sub_821EFE78);
PPC_FUNC_IMPL(__imp__sub_821EFE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821efed8
	if (ctx.cr6.eq) goto loc_821EFED8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821efef8
	if (!ctx.cr6.eq) goto loc_821EFEF8;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821efef8
	if (!ctx.cr6.eq) goto loc_821EFEF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144a70
	ctx.lr = 0x821EFEB4;
	sub_82144A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821EFED8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821efef8
	if (ctx.cr6.eq) goto loc_821EFEF8;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821efef8
	if (ctx.cr6.eq) goto loc_821EFEF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_821EFEF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EFF0C"))) PPC_WEAK_FUNC(sub_821EFF0C);
PPC_FUNC_IMPL(__imp__sub_821EFF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EFF10"))) PPC_WEAK_FUNC(sub_821EFF10);
PPC_FUNC_IMPL(__imp__sub_821EFF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821EFF18;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821eff70
	if (ctx.cr6.eq) goto loc_821EFF70;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821eff70
	if (ctx.cr6.gt) goto loc_821EFF70;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821effd8
	// bdzf 4*cr6+eq,0x821effd8
	// bne cr6,0x821eff68
	if (!ctx.cr6.eq) goto loc_821EFF68;
loc_821EFF68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82144a70
	ctx.lr = 0x821EFF70;
	sub_82144A70(ctx, base);
loc_821EFF70:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// bge cr6,0x821effa8
	if (!ctx.cr6.lt) goto loc_821EFFA8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821effa8
	if (ctx.cr6.eq) goto loc_821EFFA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-8692
	ctx.r5.s64 = ctx.r11.s64 + -8692;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a5f0
	ctx.lr = 0x821EFFA8;
	sub_8218A5F0(ctx, base);
loc_821EFFA8:
	// lwz r30,28(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82183078
	ctx.lr = 0x821EFFB0;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821EFFBC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821EFFC0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821efffc
	if (ctx.cr6.eq) goto loc_821EFFFC;
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x82183448
	ctx.lr = 0x821EFFD4;
	sub_82183448(ctx, base);
	// b 0x821f0004
	goto loc_821F0004;
loc_821EFFD8:
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r9,r7,r30
	PPC_STORE_U8(ctx.r7.u32 + ctx.r30.u32, ctx.r9.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821EFFFC:
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x821845a0
	ctx.lr = 0x821F0004;
	sub_821845A0(ctx, base);
loc_821F0004:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f0014
	if (ctx.cr6.eq) goto loc_821F0014;
	// bl 0x823c4a98
	ctx.lr = 0x821F0010;
	sub_823C4A98(ctx, base);
	// b 0x821f0018
	goto loc_821F0018;
loc_821F0014:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821F0018:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821F0024;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823c4110
	ctx.lr = 0x821F0038;
	sub_823C4110(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821F004C"))) PPC_WEAK_FUNC(sub_821F004C);
PPC_FUNC_IMPL(__imp__sub_821F004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0050"))) PPC_WEAK_FUNC(sub_821F0050);
PPC_FUNC_IMPL(__imp__sub_821F0050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,-8460(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x8215bd08
	ctx.lr = 0x821F0074;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x820e5670
	ctx.lr = 0x821F0084;
	sub_820E5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821f0094
	if (!ctx.cr6.eq) goto loc_821F0094;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821F0094:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F00AC"))) PPC_WEAK_FUNC(sub_821F00AC);
PPC_FUNC_IMPL(__imp__sub_821F00AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F00B0"))) PPC_WEAK_FUNC(sub_821F00B0);
PPC_FUNC_IMPL(__imp__sub_821F00B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8215bd08
	ctx.lr = 0x821F00D0;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821f00e4
	if (ctx.cr6.eq) goto loc_821F00E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821F00E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F00FC"))) PPC_WEAK_FUNC(sub_821F00FC);
PPC_FUNC_IMPL(__imp__sub_821F00FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0100"))) PPC_WEAK_FUNC(sub_821F0100);
PPC_FUNC_IMPL(__imp__sub_821F0100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,-8460(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x8215bd08
	ctx.lr = 0x821F0124;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x820e5650
	ctx.lr = 0x821F0134;
	sub_820E5650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821f0144
	if (!ctx.cr6.eq) goto loc_821F0144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821F0144:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F015C"))) PPC_WEAK_FUNC(sub_821F015C);
PPC_FUNC_IMPL(__imp__sub_821F015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0160"))) PPC_WEAK_FUNC(sub_821F0160);
PPC_FUNC_IMPL(__imp__sub_821F0160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F0168;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,225
	ctx.r11.s64 = 225;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r4,97
	ctx.r4.s64 = 97;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x821F01A4;
	sub_822AA648(ctx, base);
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r31,125
	ctx.r3.s64 = ctx.r31.s64 + 125;
	// bl 0x822aa648
	ctx.lr = 0x821F01B0;
	sub_822AA648(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// stb r30,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r30.u8);
	// stw r29,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r29.u32);
	// stw r29,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r29.u32);
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
	// stw r29,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r29.u32);
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r29,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F0224"))) PPC_WEAK_FUNC(sub_821F0224);
PPC_FUNC_IMPL(__imp__sub_821F0224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0228"))) PPC_WEAK_FUNC(sub_821F0228);
PPC_FUNC_IMPL(__imp__sub_821F0228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,21480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21480, ctx.r11.u32);
	// stw r11,21484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21484, ctx.r11.u32);
	// addi r3,r3,22200
	ctx.r3.s64 = ctx.r3.s64 + 22200;
	// stw r11,21488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21488, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r11,21492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21492, ctx.r11.u32);
	// stw r11,21496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21496, ctx.r11.u32);
	// stw r11,21504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21504, ctx.r11.u32);
	// stw r11,21508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21508, ctx.r11.u32);
	// stw r11,21512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21512, ctx.r11.u32);
	// stw r11,21516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21516, ctx.r11.u32);
	// stw r11,21640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21640, ctx.r11.u32);
	// stw r10,22188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22188, ctx.r10.u32);
	// stw r9,22196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22196, ctx.r9.u32);
	// bl 0x822aa648
	ctx.lr = 0x821F0284;
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

__attribute__((alias("__imp__sub_821F029C"))) PPC_WEAK_FUNC(sub_821F029C);
PPC_FUNC_IMPL(__imp__sub_821F029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F02A0"))) PPC_WEAK_FUNC(sub_821F02A0);
PPC_FUNC_IMPL(__imp__sub_821F02A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,135
	ctx.r10.s64 = 135;
	// addi r11,r3,21648
	ctx.r11.s64 = ctx.r3.s64 + 21648;
	// li r9,135
	ctx.r9.s64 = 135;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F02B4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f02b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F02B4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F02C0"))) PPC_WEAK_FUNC(sub_821F02C0);
PPC_FUNC_IMPL(__imp__sub_821F02C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,21480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r4,336
	ctx.r11.s64 = ctx.r4.s64 * 336;
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F02DC"))) PPC_WEAK_FUNC(sub_821F02DC);
PPC_FUNC_IMPL(__imp__sub_821F02DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F02E0"))) PPC_WEAK_FUNC(sub_821F02E0);
PPC_FUNC_IMPL(__imp__sub_821F02E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F02F0"))) PPC_WEAK_FUNC(sub_821F02F0);
PPC_FUNC_IMPL(__imp__sub_821F02F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x821F02F8;
	sub_82248770(ctx, base);
	// stwu r1,-1984(r1)
	ea = -1984 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// bl 0x82230e68
	ctx.lr = 0x821F0314;
	sub_82230E68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821f039c
	if (!ctx.cr6.gt) goto loc_821F039C;
	// addi r30,r23,900
	ctx.r30.s64 = ctx.r23.s64 + 900;
loc_821F032C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82230e20
	ctx.lr = 0x821F0334;
	sub_82230E20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82230ce8
	ctx.lr = 0x821F033C;
	sub_82230CE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0390
	if (!ctx.cr6.eq) goto loc_821F0390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230d30
	ctx.lr = 0x821F034C;
	sub_82230D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0390
	if (!ctx.cr6.eq) goto loc_821F0390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822310b0
	ctx.lr = 0x821F035C;
	sub_822310B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f0390
	if (ctx.cr6.eq) goto loc_821F0390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230c20
	ctx.lr = 0x821F036C;
	sub_82230C20(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f0384
	if (!ctx.cr6.eq) goto loc_821F0384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f080
	ctx.lr = 0x821F037C;
	sub_8222F080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f0390
	if (ctx.cr6.eq) goto loc_821F0390;
loc_821F0384:
	// stw r31,-896(r30)
	PPC_STORE_U32(ctx.r30.u32 + -896, ctx.r31.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r25,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r30.u32 = ea;
loc_821F0390:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x821f032c
	if (ctx.cr6.lt) goto loc_821F032C;
loc_821F039C:
	// li r10,225
	ctx.r10.s64 = 225;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// addi r11,r1,980
	ctx.r11.s64 = ctx.r1.s64 + 980;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F03AC:
	// stw r22,-896(r11)
	PPC_STORE_U32(ctx.r11.u32 + -896, ctx.r22.u32);
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f03ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F03AC;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821f042c
	if (!ctx.cr6.gt) goto loc_821F042C;
	// addi r30,r1,980
	ctx.r30.s64 = ctx.r1.s64 + 980;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// addi r28,r23,4
	ctx.r28.s64 = ctx.r23.s64 + 4;
loc_821F03D4:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222f080
	ctx.lr = 0x821F03E0;
	sub_8222F080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f03fc
	if (ctx.cr6.eq) goto loc_821F03FC;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x821f0414
	goto loc_821F0414;
loc_821F03FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82230c20
	ctx.lr = 0x821F0404;
	sub_82230C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0418
	if (!ctx.cr6.eq) goto loc_821F0418;
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// stwu r22,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r30.u32 = ea;
loc_821F0414:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_821F0418:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f03d4
	if (ctx.cr6.lt) goto loc_821F03D4;
loc_821F042C:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x821f04c0
	if (!ctx.cr6.gt) goto loc_821F04C0;
	// addi r26,r1,84
	ctx.r26.s64 = ctx.r1.s64 + 84;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_821F0440:
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82230b90
	ctx.lr = 0x821F0450;
	sub_82230B90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f04b4
	if (ctx.cr6.eq) goto loc_821F04B4;
	// lhz r11,398(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 398);
	// addi r31,r1,84
	ctx.r31.s64 = ctx.r1.s64 + 84;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
loc_821F0468:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82230b90
	ctx.lr = 0x821F0470;
	sub_82230B90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f048c
	if (ctx.cr6.eq) goto loc_821F048C;
	// lhz r11,398(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 398);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821f048c
	if (!ctx.cr6.gt) goto loc_821F048C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_821F048C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821f0468
	if (!ctx.cr0.eq) goto loc_821F0468;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lwz r10,900(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 900);
	// addi r9,r29,226
	ctx.r9.s64 = ctx.r29.s64 + 226;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r8,r23
	PPC_STORE_U32(ctx.r8.u32 + ctx.r23.u32, ctx.r25.u32);
	// stwx r10,r7,r23
	PPC_STORE_U32(ctx.r7.u32 + ctx.r23.u32, ctx.r10.u32);
loc_821F04B4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x821f0440
	if (!ctx.cr0.eq) goto loc_821F0440;
loc_821F04C0:
	// stw r27,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r27.u32);
	// addi r1,r1,1984
	ctx.r1.s64 = ctx.r1.s64 + 1984;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_821F04CC"))) PPC_WEAK_FUNC(sub_821F04CC);
PPC_FUNC_IMPL(__imp__sub_821F04CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F04D0"))) PPC_WEAK_FUNC(sub_821F04D0);
PPC_FUNC_IMPL(__imp__sub_821F04D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x821F04D8;
	sub_82248770(ctx, base);
	// stwu r1,-1984(r1)
	ea = -1984 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// bl 0x82230e68
	ctx.lr = 0x821F04F4;
	sub_82230E68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821f054c
	if (!ctx.cr6.gt) goto loc_821F054C;
	// addi r30,r23,900
	ctx.r30.s64 = ctx.r23.s64 + 900;
loc_821F050C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82230e20
	ctx.lr = 0x821F0514;
	sub_82230E20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82230c00
	ctx.lr = 0x821F051C;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f0540
	if (ctx.cr6.eq) goto loc_821F0540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822310b0
	ctx.lr = 0x821F052C;
	sub_822310B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f0540
	if (ctx.cr6.eq) goto loc_821F0540;
	// stw r31,-896(r30)
	PPC_STORE_U32(ctx.r30.u32 + -896, ctx.r31.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r25,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r30.u32 = ea;
loc_821F0540:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x821f050c
	if (ctx.cr6.lt) goto loc_821F050C;
loc_821F054C:
	// li r10,225
	ctx.r10.s64 = 225;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// addi r11,r1,980
	ctx.r11.s64 = ctx.r1.s64 + 980;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F055C:
	// stw r22,-896(r11)
	PPC_STORE_U32(ctx.r11.u32 + -896, ctx.r22.u32);
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f055c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F055C;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821f05dc
	if (!ctx.cr6.gt) goto loc_821F05DC;
	// addi r30,r1,980
	ctx.r30.s64 = ctx.r1.s64 + 980;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// addi r28,r23,4
	ctx.r28.s64 = ctx.r23.s64 + 4;
loc_821F0584:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222f080
	ctx.lr = 0x821F0590;
	sub_8222F080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f05ac
	if (ctx.cr6.eq) goto loc_821F05AC;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x821f05c4
	goto loc_821F05C4;
loc_821F05AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82230c20
	ctx.lr = 0x821F05B4;
	sub_82230C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f05c8
	if (!ctx.cr6.eq) goto loc_821F05C8;
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// stwu r22,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r30.u32 = ea;
loc_821F05C4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_821F05C8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f0584
	if (ctx.cr6.lt) goto loc_821F0584;
loc_821F05DC:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x821f0670
	if (!ctx.cr6.gt) goto loc_821F0670;
	// addi r26,r1,84
	ctx.r26.s64 = ctx.r1.s64 + 84;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_821F05F0:
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82230b90
	ctx.lr = 0x821F0600;
	sub_82230B90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f0664
	if (ctx.cr6.eq) goto loc_821F0664;
	// lhz r11,398(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 398);
	// addi r31,r1,84
	ctx.r31.s64 = ctx.r1.s64 + 84;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
loc_821F0618:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82230b90
	ctx.lr = 0x821F0620;
	sub_82230B90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f063c
	if (ctx.cr6.eq) goto loc_821F063C;
	// lhz r11,398(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 398);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821f063c
	if (!ctx.cr6.gt) goto loc_821F063C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_821F063C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821f0618
	if (!ctx.cr0.eq) goto loc_821F0618;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lwz r10,900(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 900);
	// addi r9,r29,226
	ctx.r9.s64 = ctx.r29.s64 + 226;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r8,r23
	PPC_STORE_U32(ctx.r8.u32 + ctx.r23.u32, ctx.r25.u32);
	// stwx r10,r7,r23
	PPC_STORE_U32(ctx.r7.u32 + ctx.r23.u32, ctx.r10.u32);
loc_821F0664:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x821f05f0
	if (!ctx.cr0.eq) goto loc_821F05F0;
loc_821F0670:
	// stw r27,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r27.u32);
	// addi r1,r1,1984
	ctx.r1.s64 = ctx.r1.s64 + 1984;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_821F067C"))) PPC_WEAK_FUNC(sub_821F067C);
PPC_FUNC_IMPL(__imp__sub_821F067C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0680"))) PPC_WEAK_FUNC(sub_821F0680);
PPC_FUNC_IMPL(__imp__sub_821F0680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821F0688;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82230238
	ctx.lr = 0x821F069C;
	sub_82230238(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821f0704
	if (!ctx.cr6.gt) goto loc_821F0704;
	// addi r28,r25,900
	ctx.r28.s64 = ctx.r25.s64 + 900;
loc_821F06B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230248
	ctx.lr = 0x821F06B8;
	sub_82230248(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f06f8
	if (ctx.cr6.eq) goto loc_821F06F8;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// beq cr6,0x821f06f8
	if (ctx.cr6.eq) goto loc_821F06F8;
	// lwz r11,21480(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x822302d8
	ctx.lr = 0x821F06DC;
	sub_822302D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f06f8
	if (ctx.cr6.eq) goto loc_821F06F8;
	// stw r31,-896(r28)
	PPC_STORE_U32(ctx.r28.u32 + -896, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f210
	ctx.lr = 0x821F06F0;
	sub_8222F210(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
loc_821F06F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x821f06b0
	if (ctx.cr6.lt) goto loc_821F06B0;
loc_821F0704:
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821F0710"))) PPC_WEAK_FUNC(sub_821F0710);
PPC_FUNC_IMPL(__imp__sub_821F0710) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// stw r11,904(r4)
	PPC_STORE_U32(ctx.r4.u32 + 904, ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0724"))) PPC_WEAK_FUNC(sub_821F0724);
PPC_FUNC_IMPL(__imp__sub_821F0724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0728"))) PPC_WEAK_FUNC(sub_821F0728);
PPC_FUNC_IMPL(__imp__sub_821F0728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82163ee8
	ctx.lr = 0x821F0750;
	sub_82163EE8(ctx, base);
	// addi r4,r3,2296
	ctx.r4.s64 = ctx.r3.s64 + 2296;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x821847a8
	ctx.lr = 0x821F0760;
	sub_821847A8(ctx, base);
	// lwz r10,21480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r11,r10,2148
	ctx.r11.s64 = ctx.r10.s64 * 2148;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82163ee8
	ctx.lr = 0x821F0770;
	sub_82163EE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,342
	ctx.r11.s64 = ctx.r11.s64 + 342;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x822333c8
	ctx.lr = 0x821F078C;
	sub_822333C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F07A4"))) PPC_WEAK_FUNC(sub_821F07A4);
PPC_FUNC_IMPL(__imp__sub_821F07A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F07A8"))) PPC_WEAK_FUNC(sub_821F07A8);
PPC_FUNC_IMPL(__imp__sub_821F07A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F07BC"))) PPC_WEAK_FUNC(sub_821F07BC);
PPC_FUNC_IMPL(__imp__sub_821F07BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F07C0"))) PPC_WEAK_FUNC(sub_821F07C0);
PPC_FUNC_IMPL(__imp__sub_821F07C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F07D4"))) PPC_WEAK_FUNC(sub_821F07D4);
PPC_FUNC_IMPL(__imp__sub_821F07D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F07D8"))) PPC_WEAK_FUNC(sub_821F07D8);
PPC_FUNC_IMPL(__imp__sub_821F07D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F07EC"))) PPC_WEAK_FUNC(sub_821F07EC);
PPC_FUNC_IMPL(__imp__sub_821F07EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F07F0"))) PPC_WEAK_FUNC(sub_821F07F0);
PPC_FUNC_IMPL(__imp__sub_821F07F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,21480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r4,336
	ctx.r11.s64 = ctx.r4.s64 * 336;
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,124
	ctx.r10.s64 = ctx.r11.s64 + 124;
	// stw r5,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r5.u32);
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0818"))) PPC_WEAK_FUNC(sub_821F0818);
PPC_FUNC_IMPL(__imp__sub_821F0818) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,21480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r4,336
	ctx.r11.s64 = ctx.r4.s64 * 336;
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 412, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0838"))) PPC_WEAK_FUNC(sub_821F0838);
PPC_FUNC_IMPL(__imp__sub_821F0838) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,21480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r4,336
	ctx.r11.s64 = ctx.r4.s64 * 336;
	// lwz r9,21504(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21504);
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x821f0878
	if (ctx.cr6.eq) goto loc_821F0878;
	// lwz r10,21640(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21640);
	// li r8,512
	ctx.r8.s64 = 512;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r7,r10,5380
	ctx.r7.s64 = ctx.r10.s64 + 5380;
	// stw r10,21640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21640, ctx.r10.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r8.u32);
loc_821F0878:
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// stw r9,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0884"))) PPC_WEAK_FUNC(sub_821F0884);
PPC_FUNC_IMPL(__imp__sub_821F0884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0888"))) PPC_WEAK_FUNC(sub_821F0888);
PPC_FUNC_IMPL(__imp__sub_821F0888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821F0890;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r30,r4,336
	ctx.r30.s64 = ctx.r4.s64 * 336;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r25,124(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8222f080
	ctx.lr = 0x821F08BC;
	sub_8222F080(ctx, base);
	// lwz r9,21480(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mulli r11,r9,2148
	ctx.r11.s64 = ctx.r9.s64 * 2148;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r27,r28,124
	ctx.r27.s64 = ctx.r28.s64 + 124;
	// bne cr6,0x821f08e0
	if (!ctx.cr6.eq) goto loc_821F08E0;
loc_821F08D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_821F08E0:
	// lwz r11,21504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f09d8
	if (!ctx.cr6.eq) goto loc_821F09D8;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f08d4
	if (ctx.cr6.eq) goto loc_821F08D4;
	// cmpwi cr6,r25,225
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 225, ctx.xer);
	// beq cr6,0x821f08d4
	if (ctx.cr6.eq) goto loc_821F08D4;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f0954
	if (!ctx.cr6.gt) goto loc_821F0954;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_821F0918:
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x821f0940
	if (ctx.cr6.eq) goto loc_821F0940;
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f0940
	if (ctx.cr6.eq) goto loc_821F0940;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82230d50
	ctx.lr = 0x821F0938;
	sub_82230D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f09cc
	if (!ctx.cr6.eq) goto loc_821F09CC;
loc_821F0940:
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,336
	ctx.r30.s64 = ctx.r30.s64 + 336;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f0918
	if (ctx.cr6.lt) goto loc_821F0918;
loc_821F0954:
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f0a78
	if (!ctx.cr6.gt) goto loc_821F0A78;
	// mulli r11,r31,336
	ctx.r11.s64 = ctx.r31.s64 * 336;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_821F096C:
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x821f09a8
	if (ctx.cr6.eq) goto loc_821F09A8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f09a8
	if (ctx.cr6.eq) goto loc_821F09A8;
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f09a8
	if (ctx.cr6.eq) goto loc_821F09A8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r3,r25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x821f09cc
	if (ctx.cr6.eq) goto loc_821F09CC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82230d50
	ctx.lr = 0x821F09A0;
	sub_82230D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f09cc
	if (!ctx.cr6.eq) goto loc_821F09CC;
loc_821F09A8:
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,336
	ctx.r30.s64 = ctx.r30.s64 + 336;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f096c
	if (ctx.cr6.lt) goto loc_821F096C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_821F09CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_821F09D8:
	// cmpwi cr6,r25,225
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 225, ctx.xer);
	// beq cr6,0x821f0a78
	if (ctx.cr6.eq) goto loc_821F0A78;
	// lwz r9,21516(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21516);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x821f0a34
	if (!ctx.cr6.gt) goto loc_821F0A34;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_821F09FC:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x821f0a20
	if (ctx.cr6.eq) goto loc_821F0A20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x821f09fc
	if (ctx.cr6.lt) goto loc_821F09FC;
	// b 0x821f0a34
	goto loc_821F0A34;
loc_821F0A20:
	// addi r11,r10,226
	ctx.r11.s64 = ctx.r10.s64 + 226;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821f09cc
	if (ctx.cr6.eq) goto loc_821F09CC;
loc_821F0A34:
	// lwz r11,21640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21640);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f0a78
	if (!ctx.cr6.gt) goto loc_821F0A78;
	// addi r30,r31,21520
	ctx.r30.s64 = ctx.r31.s64 + 21520;
loc_821F0A48:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,225
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 225, ctx.xer);
	// beq cr6,0x821f0a64
	if (ctx.cr6.eq) goto loc_821F0A64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82230d50
	ctx.lr = 0x821F0A5C;
	sub_82230D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f09cc
	if (!ctx.cr6.eq) goto loc_821F09CC;
loc_821F0A64:
	// lwz r11,21640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21640);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f0a48
	if (ctx.cr6.lt) goto loc_821F0A48;
loc_821F0A78:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821F0A84"))) PPC_WEAK_FUNC(sub_821F0A84);
PPC_FUNC_IMPL(__imp__sub_821F0A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0A88"))) PPC_WEAK_FUNC(sub_821F0A88);
PPC_FUNC_IMPL(__imp__sub_821F0A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,21480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r4,336
	ctx.r11.s64 = ctx.r4.s64 * 336;
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 376, ctx.r5.u32);
	// beq cr6,0x821f0ab0
	if (ctx.cr6.eq) goto loc_821F0AB0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821F0AB0:
	// stw r10,380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 380, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0AB8"))) PPC_WEAK_FUNC(sub_821F0AB8);
PPC_FUNC_IMPL(__imp__sub_821F0AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,21480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r4,336
	ctx.r11.s64 = ctx.r4.s64 * 336;
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,97
	ctx.r4.s64 = 97;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// b 0x8218a128
	sub_8218A128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F0AD8"))) PPC_WEAK_FUNC(sub_821F0AD8);
PPC_FUNC_IMPL(__imp__sub_821F0AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,21480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r4,336
	ctx.r11.s64 = ctx.r4.s64 * 336;
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,97
	ctx.r4.s64 = 97;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,249
	ctx.r3.s64 = ctx.r11.s64 + 249;
	// b 0x8218a128
	sub_8218A128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F0AF8"))) PPC_WEAK_FUNC(sub_821F0AF8);
PPC_FUNC_IMPL(__imp__sub_821F0AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,21480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r4,336
	ctx.r11.s64 = ctx.r4.s64 * 336;
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,348(r9)
	PPC_STORE_U32(ctx.r9.u32 + 348, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0B14"))) PPC_WEAK_FUNC(sub_821F0B14);
PPC_FUNC_IMPL(__imp__sub_821F0B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0B18"))) PPC_WEAK_FUNC(sub_821F0B18);
PPC_FUNC_IMPL(__imp__sub_821F0B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,21480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r4,336
	ctx.r11.s64 = ctx.r4.s64 * 336;
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,352(r9)
	PPC_STORE_U8(ctx.r9.u32 + 352, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0B34"))) PPC_WEAK_FUNC(sub_821F0B34);
PPC_FUNC_IMPL(__imp__sub_821F0B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0B38"))) PPC_WEAK_FUNC(sub_821F0B38);
PPC_FUNC_IMPL(__imp__sub_821F0B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,21480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r4,336
	ctx.r11.s64 = ctx.r4.s64 * 336;
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,124
	ctx.r10.s64 = ctx.r11.s64 + 124;
	// stw r5,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r5.u32);
	// stw r6,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r6.u32);
	// stw r7,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0B60"))) PPC_WEAK_FUNC(sub_821F0B60);
PPC_FUNC_IMPL(__imp__sub_821F0B60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,21500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21500, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0B68"))) PPC_WEAK_FUNC(sub_821F0B68);
PPC_FUNC_IMPL(__imp__sub_821F0B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821F0B70;
	sub_82248780(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r29,21496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21496, ctx.r29.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_821F0B88:
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bne cr6,0x821f0ba4
	if (!ctx.cr6.eq) goto loc_821F0BA4;
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// b 0x821f0ba8
	goto loc_821F0BA8;
loc_821F0BA4:
	// lwz r11,92(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
loc_821F0BA8:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f0c38
	if (!ctx.cr6.gt) goto loc_821F0C38;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mulli r9,r4,336
	ctx.r9.s64 = ctx.r4.s64 * 336;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_821F0BC8:
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r10.u32);
	// stw r10,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r10.u32);
	// stw r10,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r10.u32);
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// stw r10,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r10.u32);
	// bne cr6,0x821f0c18
	if (!ctx.cr6.eq) goto loc_821F0C18;
	// lwz r7,21480(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r7,r7,2148
	ctx.r7.s64 = ctx.r7.s64 * 2148;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r7,2144(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r7,19(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 19);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// stw r7,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r7.u32);
	// b 0x821f0c1c
	goto loc_821F0C1C;
loc_821F0C18:
	// stw r6,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r6.u32);
loc_821F0C1C:
	// stw r31,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r31.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r10,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r10.u32);
	// addi r9,r9,336
	ctx.r9.s64 = ctx.r9.s64 + 336;
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// bdnz 0x821f0bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F0BC8;
loc_821F0C38:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x821f0b88
	if (ctx.cr6.lt) goto loc_821F0B88;
	// lwz r8,21500(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21500);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821f0cc4
	if (!ctx.cr6.eq) goto loc_821F0CC4;
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,96(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821f0cc4
	if (ctx.cr6.eq) goto loc_821F0CC4;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,88(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// add. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x821f0e88
	if (!ctx.cr0.gt) goto loc_821F0E88;
loc_821F0C7C:
	// lwz r9,21480(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,22192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22192);
	// mulli r9,r9,2148
	ctx.r9.s64 = ctx.r9.s64 * 2148;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r7,r29,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r8.u8 & 0x3F));
	// add r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// stw r7,396(r6)
	PPC_STORE_U32(ctx.r6.u32 + 396, ctx.r7.u32);
	// lwz r5,21480(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r9,r5,2148
	ctx.r9.s64 = ctx.r5.s64 * 2148;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// lwz r9,88(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x821f0c7c
	if (ctx.cr6.lt) goto loc_821F0C7C;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821F0CC4:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,-116
	ctx.r11.s64 = ctx.r1.s64 + -116;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821F0CD4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f0cd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F0CD4;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,-84
	ctx.r11.s64 = ctx.r1.s64 + -84;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821F0CE8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f0ce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F0CE8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821f0d00
	if (ctx.cr6.eq) goto loc_821F0D00;
	// li r30,15
	ctx.r30.s64 = 15;
	// b 0x821f0d9c
	goto loc_821F0D9C;
loc_821F0D00:
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mulli r5,r11,2148
	ctx.r5.s64 = ctx.r11.s64 * 2148;
	// add r9,r5,r3
	ctx.r9.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821f0d9c
	if (!ctx.cr6.gt) goto loc_821F0D9C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r31,88(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
loc_821F0D30:
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// lwz r7,252(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x821f0d8c
	if (ctx.cr6.eq) goto loc_821F0D8C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// rotlwi r28,r7,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r27,276(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r28,r29,r28
	ctx.r28.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r28.u8 & 0x3F));
	// lwzx r26,r9,r8
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// or r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 | ctx.r30.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// or r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 | ctx.r28.u64;
	// stwx r28,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r28.u32);
	// beq cr6,0x821f0d8c
	if (ctx.cr6.eq) goto loc_821F0D8C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// slw r8,r29,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r7.u8 & 0x3F));
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
loc_821F0D8C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r6,r6,336
	ctx.r6.s64 = ctx.r6.s64 + 336;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x821f0d30
	if (ctx.cr6.lt) goto loc_821F0D30;
loc_821F0D9C:
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821f0e18
	if (!ctx.cr6.gt) goto loc_821F0E18;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_821F0DBC:
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// lwz r9,252(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821f0de8
	if (ctx.cr6.eq) goto loc_821F0DE8;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// stw r9,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r9.u32);
	// b 0x821f0df8
	goto loc_821F0DF8;
loc_821F0DE8:
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821f0df8
	if (!ctx.cr6.eq) goto loc_821F0DF8;
	// stw r30,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r30.u32);
loc_821F0DF8:
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,336
	ctx.r8.s64 = ctx.r8.s64 + 336;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r6,88(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821f0dbc
	if (ctx.cr6.lt) goto loc_821F0DBC;
loc_821F0E18:
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821f0e88
	if (!ctx.cr6.gt) goto loc_821F0E88;
	// mulli r8,r7,336
	ctx.r8.s64 = ctx.r7.s64 * 336;
loc_821F0E34:
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,124
	ctx.r9.s64 = ctx.r11.s64 + 124;
	// lwz r6,136(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r4.u32);
	// bne cr6,0x821f0e68
	if (!ctx.cr6.eq) goto loc_821F0E68;
	// stw r30,272(r9)
	PPC_STORE_U32(ctx.r9.u32 + 272, ctx.r30.u32);
loc_821F0E68:
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,336
	ctx.r8.s64 = ctx.r8.s64 + 336;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,92(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821f0e34
	if (ctx.cr6.lt) goto loc_821F0E34;
loc_821F0E88:
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821F0E8C"))) PPC_WEAK_FUNC(sub_821F0E8C);
PPC_FUNC_IMPL(__imp__sub_821F0E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0E90"))) PPC_WEAK_FUNC(sub_821F0E90);
PPC_FUNC_IMPL(__imp__sub_821F0E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,21480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r4,336
	ctx.r11.s64 = ctx.r4.s64 * 336;
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,388(r9)
	PPC_STORE_U32(ctx.r9.u32 + 388, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0EAC"))) PPC_WEAK_FUNC(sub_821F0EAC);
PPC_FUNC_IMPL(__imp__sub_821F0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0EB0"))) PPC_WEAK_FUNC(sub_821F0EB0);
PPC_FUNC_IMPL(__imp__sub_821F0EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821F0EB8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,21480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r4,336
	ctx.r11.s64 = ctx.r4.s64 * 336;
	// mulli r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 * 2148;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r5,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r5.u32);
	// lwz r9,21480(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r9,2148
	ctx.r11.s64 = ctx.r9.s64 * 2148;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bl 0x82232d88
	ctx.lr = 0x821F0EEC;
	sub_82232D88(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x821f0f04
	if (!ctx.cr6.eq) goto loc_821F0F04;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821F0F04:
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// li r8,0
	ctx.r8.s64 = 0;
	// mulli r7,r11,2148
	ctx.r7.s64 = ctx.r11.s64 * 2148;
	// add r10,r7,r31
	ctx.r10.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lwz r6,88(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x821f0f64
	if (!ctx.cr6.gt) goto loc_821F0F64;
	// lwz r5,136(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,19
	ctx.r10.s64 = ctx.r3.s64 + 19;
loc_821F0F2C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821f0f50
	if (!ctx.cr6.eq) goto loc_821F0F50;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r4,400(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 400);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821f0f70
	if (!ctx.cr6.eq) goto loc_821F0F70;
loc_821F0F50:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r11,r11,336
	ctx.r11.s64 = ctx.r11.s64 + 336;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821f0f2c
	if (ctx.cr6.lt) goto loc_821F0F2C;
loc_821F0F64:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 404, ctx.r11.u32);
	// stw r11,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r11.u32);
loc_821F0F70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821F0F78"))) PPC_WEAK_FUNC(sub_821F0F78);
PPC_FUNC_IMPL(__imp__sub_821F0F78) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,5380
	ctx.r11.s64 = ctx.r4.s64 + 5380;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0F88"))) PPC_WEAK_FUNC(sub_821F0F88);
PPC_FUNC_IMPL(__imp__sub_821F0F88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,140(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0F9C"))) PPC_WEAK_FUNC(sub_821F0F9C);
PPC_FUNC_IMPL(__imp__sub_821F0F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0FA0"))) PPC_WEAK_FUNC(sub_821F0FA0);
PPC_FUNC_IMPL(__imp__sub_821F0FA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,144(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0FB4"))) PPC_WEAK_FUNC(sub_821F0FB4);
PPC_FUNC_IMPL(__imp__sub_821F0FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0FB8"))) PPC_WEAK_FUNC(sub_821F0FB8);
PPC_FUNC_IMPL(__imp__sub_821F0FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821F0FC0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// lwz r30,1092(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1092);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82232b60
	ctx.lr = 0x821F0FEC;
	sub_82232B60(ctx, base);
	// lwz r9,21480(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21480);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r9,2148
	ctx.r11.s64 = ctx.r9.s64 * 2148;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8209eda0
	ctx.lr = 0x821F1004;
	sub_8209EDA0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F1008:
	// lwz r11,21480(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21480);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r11,537
	ctx.r11.s64 = ctx.r11.s64 * 537;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,27
	ctx.r10.s64 = ctx.r11.s64 + 27;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// bl 0x82231b20
	ctx.lr = 0x821F102C;
	sub_82231B20(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x821f1008
	if (ctx.cr6.lt) goto loc_821F1008;
	// lwz r11,21480(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21480);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r4,84(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// bl 0x82232ac8
	ctx.lr = 0x821F1050;
	sub_82232AC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,22188(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22188);
	// bl 0x820ef480
	ctx.lr = 0x821F105C;
	sub_820EF480(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
loc_821F1064:
	// lwz r11,21480(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,124
	ctx.r31.s64 = ctx.r11.s64 + 124;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f116c
	if (ctx.cr6.eq) goto loc_821F116C;
	// lwz r27,22196(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22196);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82230b90
	ctx.lr = 0x821F1090;
	sub_82230B90(ctx, base);
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x821f10ac
	if (ctx.cr6.lt) goto loc_821F10AC;
	// beq cr6,0x821f10a4
	if (ctx.cr6.eq) goto loc_821F10A4;
	// li r8,2
	ctx.r8.s64 = 2;
	// b 0x821f10b0
	goto loc_821F10B0;
loc_821F10A4:
	// lbz r8,21(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// b 0x821f10b0
	goto loc_821F10B0;
loc_821F10AC:
	// lbz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
loc_821F10B0:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,252(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822327a8
	ctx.lr = 0x821F10D0;
	sub_822327A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231e78
	ctx.lr = 0x821F10E0;
	sub_82231E78(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82231e88
	ctx.lr = 0x821F10F0;
	sub_82231E88(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231e98
	ctx.lr = 0x821F1100;
	sub_82231E98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231e98
	ctx.lr = 0x821F1110;
	sub_82231E98(ctx, base);
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231b98
	ctx.lr = 0x821F1120;
	sub_82231B98(ctx, base);
	// addi r5,r31,125
	ctx.r5.s64 = ctx.r31.s64 + 125;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231bb0
	ctx.lr = 0x821F1130;
	sub_82231BB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,224(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82231ea8
	ctx.lr = 0x821F1140;
	sub_82231EA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r5,228(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 228);
	// bl 0x82231ec8
	ctx.lr = 0x821F1150;
	sub_82231EC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,240(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r6,236(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x82231bc8
	ctx.lr = 0x821F1168;
	sub_82231BC8(ctx, base);
	// b 0x821f11f4
	goto loc_821F11F4;
loc_821F116C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f11f4
	if (ctx.cr6.eq) goto loc_821F11F4;
	// lwz r27,22196(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22196);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82230b90
	ctx.lr = 0x821F1184;
	sub_82230B90(ctx, base);
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x821f11a0
	if (ctx.cr6.lt) goto loc_821F11A0;
	// beq cr6,0x821f1198
	if (ctx.cr6.eq) goto loc_821F1198;
	// li r8,2
	ctx.r8.s64 = 2;
	// b 0x821f11a4
	goto loc_821F11A4;
loc_821F1198:
	// lbz r8,21(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// b 0x821f11a4
	goto loc_821F11A4;
loc_821F11A0:
	// lbz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
loc_821F11A4:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,252(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822327a8
	ctx.lr = 0x821F11C4;
	sub_822327A8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231e78
	ctx.lr = 0x821F11D4;
	sub_82231E78(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82231e88
	ctx.lr = 0x821F11E4;
	sub_82231E88(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231e98
	ctx.lr = 0x821F11F4;
	sub_82231E98(ctx, base);
loc_821F11F4:
	// addi r26,r26,336
	ctx.r26.s64 = ctx.r26.s64 + 336;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r26,2016
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2016, ctx.xer);
	// blt cr6,0x821f1064
	if (ctx.cr6.lt) goto loc_821F1064;
	// bl 0x8215bd08
	ctx.lr = 0x821F1208;
	sub_8215BD08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r29,22200
	ctx.r31.s64 = ctx.r29.s64 + 22200;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r28,10
	ctx.r28.s64 = 10;
loc_821F1218:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f122c
	if (ctx.cr6.eq) goto loc_821F122C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F122C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F122C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821f1218
	if (!ctx.cr0.eq) goto loc_821F1218;
	// lwz r11,21480(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21480);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r4,100(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// bl 0x82231b30
	ctx.lr = 0x821F1250;
	sub_82231B30(ctx, base);
	// lwz r9,21480(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21480);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r9,2148
	ctx.r11.s64 = ctx.r9.s64 * 2148;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r4,104(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// bl 0x82231b38
	ctx.lr = 0x821F1268;
	sub_82231B38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82232530
	ctx.lr = 0x821F1270;
	sub_82232530(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x821F1274;
	sub_8215BEC8(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x8215be98
	ctx.lr = 0x821F127C;
	sub_8215BE98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821F1284"))) PPC_WEAK_FUNC(sub_821F1284);
PPC_FUNC_IMPL(__imp__sub_821F1284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F1288"))) PPC_WEAK_FUNC(sub_821F1288);
PPC_FUNC_IMPL(__imp__sub_821F1288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821F1290;
	sub_82248788(ctx, base);
	// stwu r1,-1936(r1)
	ea = -1936 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21492);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f1358
	if (!ctx.cr6.eq) goto loc_821F1358;
	// lwz r11,21480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,2144(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f1358
	if (ctx.cr0.eq) goto loc_821F1358;
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
loc_821F12E4:
	// stw r31,-896(r11)
	PPC_STORE_U32(ctx.r11.u32 + -896, ctx.r31.u32);
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f12e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F12E4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f0680
	ctx.lr = 0x821F12FC;
	sub_821F0680(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821f1358
	if (!ctx.cr6.gt) goto loc_821F1358;
	// addi r11,r1,984
	ctx.r11.s64 = ctx.r1.s64 + 984;
loc_821F1310:
	// lwz r8,-900(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -900);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x821f1330
	if (!ctx.cr6.eq) goto loc_821F1330;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821f1348
	if (!ctx.cr6.eq) goto loc_821F1348;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x821f1348
	if (!ctx.cr6.eq) goto loc_821F1348;
loc_821F1330:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821f1310
	if (ctx.cr6.lt) goto loc_821F1310;
	// addi r1,r1,1936
	ctx.r1.s64 = ctx.r1.s64 + 1936;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821F1348:
	// lwz r11,21480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21480);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r29,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r29.u32);
loc_821F1358:
	// addi r1,r1,1936
	ctx.r1.s64 = ctx.r1.s64 + 1936;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821F1360"))) PPC_WEAK_FUNC(sub_821F1360);
PPC_FUNC_IMPL(__imp__sub_821F1360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821f0888
	ctx.lr = 0x821F1380;
	sub_821F0888(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821f13dc
	if (!ctx.cr6.eq) goto loc_821F13DC;
	// lwz r11,21480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21480);
	// mulli r10,r30,336
	ctx.r10.s64 = ctx.r30.s64 * 336;
	// lwz r9,21504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21504);
	// mulli r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 * 2148;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x821f13b4
	if (!ctx.cr6.eq) goto loc_821F13B4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r10.u32);
	// b 0x821f13dc
	goto loc_821F13DC;
loc_821F13B4:
	// lwz r10,21640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21640);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r7,r10,5380
	ctx.r7.s64 = ctx.r10.s64 + 5380;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r10,21640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21640);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,21640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21640, ctx.r5.u32);
	// stw r9,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r9.u32);
loc_821F13DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F13F4"))) PPC_WEAK_FUNC(sub_821F13F4);
PPC_FUNC_IMPL(__imp__sub_821F13F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

