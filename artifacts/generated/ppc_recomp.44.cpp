#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822070EC"))) PPC_WEAK_FUNC(sub_822070EC);
PPC_FUNC_IMPL(__imp__sub_822070EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822070F0"))) PPC_WEAK_FUNC(sub_822070F0);
PPC_FUNC_IMPL(__imp__sub_822070F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r31,-784(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82207124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82207178
	if (ctx.cr6.eq) goto loc_82207178;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed270
	ctx.lr = 0x82207134;
	sub_821ED270(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82207178
	if (ctx.cr6.eq) goto loc_82207178;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82207160
	if (!ctx.cr6.eq) goto loc_82207160;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1116, ctx.r11.u32);
	// bl 0x82206b90
	ctx.lr = 0x82207154;
	sub_82206B90(ctx, base);
	// lwz r3,276(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// bl 0x82211bb0
	ctx.lr = 0x8220715C;
	sub_82211BB0(ctx, base);
	// b 0x82207178
	goto loc_82207178;
loc_82207160:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,1116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1116, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82207178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82207178:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82207190"))) PPC_WEAK_FUNC(sub_82207190);
PPC_FUNC_IMPL(__imp__sub_82207190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822071B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220721c
	if (ctx.cr6.eq) goto loc_8220721C;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822071D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82207204
	if (ctx.cr6.eq) goto loc_82207204;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822071F0;
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
loc_82207204:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206a30
	ctx.lr = 0x8220720C;
	sub_82206A30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// bl 0x82211c90
	ctx.lr = 0x8220721C;
	sub_82211C90(ctx, base);
loc_8220721C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82207230"))) PPC_WEAK_FUNC(sub_82207230);
PPC_FUNC_IMPL(__imp__sub_82207230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// bl 0x82157260
	ctx.lr = 0x82207250;
	sub_82157260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822072a8
	if (ctx.cr6.eq) goto loc_822072A8;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220726C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822072a8
	if (ctx.cr6.eq) goto loc_822072A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206a30
	ctx.lr = 0x8220727C;
	sub_82206A30(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
	// beq cr6,0x822072a4
	if (ctx.cr6.eq) goto loc_822072A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822072A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822072A4:
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
loc_822072A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822072C0"))) PPC_WEAK_FUNC(sub_822072C0);
PPC_FUNC_IMPL(__imp__sub_822072C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822072ec
	// bdzf 4*cr6+eq,0x822072f0
	// bdzf 4*cr6+eq,0x822072f4
	// bne cr6,0x822072f8
	if (!ctx.cr6.eq) goto loc_822072F8;
	// b 0x82207030
	sub_82207030(ctx, base);
	return;
loc_822072EC:
	// b 0x822070f0
	sub_822070F0(ctx, base);
	return;
loc_822072F0:
	// b 0x82207190
	sub_82207190(ctx, base);
	return;
loc_822072F4:
	// b 0x82207230
	sub_82207230(ctx, base);
	return;
loc_822072F8:
	// b 0x82205e10
	sub_82205E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822072FC"))) PPC_WEAK_FUNC(sub_822072FC);
PPC_FUNC_IMPL(__imp__sub_822072FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82207300"))) PPC_WEAK_FUNC(sub_82207300);
PPC_FUNC_IMPL(__imp__sub_82207300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207338
	if (ctx.cr6.eq) goto loc_82207338;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82207338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82207338:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220734C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x823c3468
	ctx.lr = 0x82207354;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3ca8
	ctx.lr = 0x8220735C;
	sub_823C3CA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82207370"))) PPC_WEAK_FUNC(sub_82207370);
PPC_FUNC_IMPL(__imp__sub_82207370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822073a8
	if (ctx.cr6.eq) goto loc_822073A8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822073A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822073A8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822073BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x823c3468
	ctx.lr = 0x822073C4;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3cd8
	ctx.lr = 0x822073CC;
	sub_823C3CD8(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x822073D0;
	sub_821EB3E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ebaa8
	ctx.lr = 0x822073D8;
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

__attribute__((alias("__imp__sub_822073EC"))) PPC_WEAK_FUNC(sub_822073EC);
PPC_FUNC_IMPL(__imp__sub_822073EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822073F0"))) PPC_WEAK_FUNC(sub_822073F0);
PPC_FUNC_IMPL(__imp__sub_822073F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822073F8"))) PPC_WEAK_FUNC(sub_822073F8);
PPC_FUNC_IMPL(__imp__sub_822073F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82207400"))) PPC_WEAK_FUNC(sub_82207400);
PPC_FUNC_IMPL(__imp__sub_82207400) {
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
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,49
	ctx.r9.s64 = 49;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,50
	ctx.r8.s64 = 50;
	// li r7,52
	ctx.r7.s64 = 52;
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// li r6,53
	ctx.r6.s64 = 53;
	// li r4,54
	ctx.r4.s64 = 54;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// li r11,97
	ctx.r11.s64 = 97;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// li r9,56
	ctx.r9.s64 = 56;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8220746C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x821eb290
	ctx.lr = 0x82207480;
	sub_821EB290(ctx, base);
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

__attribute__((alias("__imp__sub_82207494"))) PPC_WEAK_FUNC(sub_82207494);
PPC_FUNC_IMPL(__imp__sub_82207494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82207498"))) PPC_WEAK_FUNC(sub_82207498);
PPC_FUNC_IMPL(__imp__sub_82207498) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x822074ac
	if (ctx.cr6.eq) goto loc_822074AC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822074AC:
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x822074bc
	if (ctx.cr6.eq) goto loc_822074BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822074BC:
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x822074cc
	if (ctx.cr6.eq) goto loc_822074CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822074CC:
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x822074dc
	if (ctx.cr6.eq) goto loc_822074DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822074DC:
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x822074ec
	if (ctx.cr6.eq) goto loc_822074EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822074EC:
	// lwz r10,356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x822074fc
	if (ctx.cr6.eq) goto loc_822074FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822074FC:
	// lwz r10,360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8220750c
	if (ctx.cr6.eq) goto loc_8220750C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8220750C:
	// lwz r10,364(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8220751c
	if (ctx.cr6.eq) goto loc_8220751C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8220751C:
	// lwz r10,368(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8220752c
	if (ctx.cr6.eq) goto loc_8220752C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8220752C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,369
	ctx.r8.s64 = 369;
	// li r7,370
	ctx.r7.s64 = 370;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// li r6,371
	ctx.r6.s64 = 371;
	// stw r7,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r7.u32);
	// li r5,372
	ctx.r5.s64 = 372;
	// li r4,373
	ctx.r4.s64 = 373;
	// stw r6,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r6.u32);
	// li r11,374
	ctx.r11.s64 = 374;
	// stw r5,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r5.u32);
	// li r8,375
	ctx.r8.s64 = 375;
	// stw r4,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// li r7,376
	ctx.r7.s64 = 376;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r6,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220758C"))) PPC_WEAK_FUNC(sub_8220758C);
PPC_FUNC_IMPL(__imp__sub_8220758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82207590"))) PPC_WEAK_FUNC(sub_82207590);
PPC_FUNC_IMPL(__imp__sub_82207590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82207598;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-7488(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822076b8
	if (ctx.cr6.eq) goto loc_822076B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821addc0
	ctx.lr = 0x822075BC;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821add20
	ctx.lr = 0x822075C8;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad600
	ctx.lr = 0x822075D8;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad498
	ctx.lr = 0x822075E4;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
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
	// ble cr6,0x82207684
	if (!ctx.cr6.gt) goto loc_82207684;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,132(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 132, temp.u32);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8210a9b0
	ctx.lr = 0x82207638;
	sub_8210A9B0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r11,r6,54420
	ctx.r11.u64 = ctx.r6.u64 | 54420;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,377
	ctx.r4.s64 = 377;
	// stfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8210a9b0
	ctx.lr = 0x82207660;
	sub_8210A9B0(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82207684
	if (ctx.cr6.eq) goto loc_82207684;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82207684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82207684:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822076a0
	if (ctx.cr6.eq) goto loc_822076A0;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822076a0
	if (!ctx.cr6.eq) goto loc_822076A0;
	// bl 0x821477e8
	ctx.lr = 0x822076A0;
	sub_821477E8(ctx, base);
loc_822076A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad600
	ctx.lr = 0x822076AC;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad498
	ctx.lr = 0x822076B8;
	sub_821AD498(ctx, base);
loc_822076B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822076C4"))) PPC_WEAK_FUNC(sub_822076C4);
PPC_FUNC_IMPL(__imp__sub_822076C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822076C8"))) PPC_WEAK_FUNC(sub_822076C8);
PPC_FUNC_IMPL(__imp__sub_822076C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
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

__attribute__((alias("__imp__sub_822076E4"))) PPC_WEAK_FUNC(sub_822076E4);
PPC_FUNC_IMPL(__imp__sub_822076E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822076E8"))) PPC_WEAK_FUNC(sub_822076E8);
PPC_FUNC_IMPL(__imp__sub_822076E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82207710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// bl 0x823c3c98
	ctx.lr = 0x82207720;
	sub_823C3C98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82207734"))) PPC_WEAK_FUNC(sub_82207734);
PPC_FUNC_IMPL(__imp__sub_82207734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82207738"))) PPC_WEAK_FUNC(sub_82207738);
PPC_FUNC_IMPL(__imp__sub_82207738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82207740;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207768
	if (ctx.cr6.eq) goto loc_82207768;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82207768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82207768:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220777C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8222e080
	ctx.lr = 0x82207780;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822077a4
	if (!ctx.cr6.eq) goto loc_822077A4;
loc_82207788:
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220779C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_822077A4:
	// bl 0x8215bd08
	ctx.lr = 0x822077A8;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x822077AC;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82207788
	if (ctx.cr6.eq) goto loc_82207788;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x822077BC;
	sub_821EBB58(ctx, base);
	// li r11,30181
	ctx.r11.s64 = 30181;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x822077D8;
	sub_8215BD08(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lwz r3,-784(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -784);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r29,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r29.u32);
	// lwz r8,1812(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x82207818
	if (ctx.cr6.eq) goto loc_82207818;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82207810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82207818:
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82207824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8220782C"))) PPC_WEAK_FUNC(sub_8220782C);
PPC_FUNC_IMPL(__imp__sub_8220782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82207830"))) PPC_WEAK_FUNC(sub_82207830);
PPC_FUNC_IMPL(__imp__sub_82207830) {
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
	// beq cr6,0x82207984
	if (ctx.cr6.eq) goto loc_82207984;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82207984
	if (ctx.cr6.eq) goto loc_82207984;
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
	// beq cr6,0x822078dc
	if (ctx.cr6.eq) goto loc_822078DC;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8220788C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82207898
	if (!ctx.cr0.lt) goto loc_82207898;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82207898:
	// addi r9,r11,77
	ctx.r9.s64 = ctx.r11.s64 + 77;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8220788c
	if (ctx.cr6.eq) goto loc_8220788C;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822078dc
	if (ctx.cr6.eq) goto loc_822078DC;
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
	ctx.lr = 0x822078D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_822078DC:
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
	// beq cr6,0x82207964
	if (ctx.cr6.eq) goto loc_82207964;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82207904:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,9
	ctx.r10.s64 = 9;
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
	// addi r4,r11,77
	ctx.r4.s64 = ctx.r11.s64 + 77;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82207904
	if (ctx.cr6.eq) goto loc_82207904;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82207964
	if (ctx.cr6.eq) goto loc_82207964;
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
	ctx.lr = 0x82207958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_82207964:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207984
	if (ctx.cr6.eq) goto loc_82207984;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82207984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82207984:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220799C"))) PPC_WEAK_FUNC(sub_8220799C);
PPC_FUNC_IMPL(__imp__sub_8220799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822079A0"))) PPC_WEAK_FUNC(sub_822079A0);
PPC_FUNC_IMPL(__imp__sub_822079A0) {
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
	// addi r10,r4,84
	ctx.r10.s64 = ctx.r4.s64 + 84;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x822079f4
	if (!ctx.cr6.eq) goto loc_822079F4;
loc_822079C4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,9
	ctx.r10.s64 = 9;
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
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x822079c4
	if (ctx.cr6.eq) goto loc_822079C4;
loc_822079F4:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r7,r3,56
	ctx.r7.s64 = ctx.r3.s64 + 56;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// bl 0x82207400
	ctx.lr = 0x82207A3C;
	sub_82207400(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82207A4C"))) PPC_WEAK_FUNC(sub_82207A4C);
PPC_FUNC_IMPL(__imp__sub_82207A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82207A50"))) PPC_WEAK_FUNC(sub_82207A50);
PPC_FUNC_IMPL(__imp__sub_82207A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r10,384
	ctx.r10.s64 = 384;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82207A74:
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r9,r10,-12
	ctx.r9.s64 = ctx.r10.s64 + -12;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
	// lwz r5,280(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r11.u32);
	// lwz r7,280(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,708(r5)
	PPC_STORE_U32(ctx.r5.u32 + 708, ctx.r11.u32);
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 964, ctx.r11.u32);
	// lwz r7,280(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// lwz r7,280(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,708(r5)
	PPC_STORE_U32(ctx.r5.u32 + 708, ctx.r11.u32);
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// stw r11,964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 964, ctx.r11.u32);
	// lwz r7,280(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// lwz r7,280(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,708(r5)
	PPC_STORE_U32(ctx.r5.u32 + 708, ctx.r11.u32);
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 964, ctx.r11.u32);
	// bdnz 0x82207a74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82207A74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82207B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r10.u32);
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r10.u32);
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,708(r6)
	PPC_STORE_U32(ctx.r6.u32 + 708, ctx.r10.u32);
	// lwz r5,280(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 964, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82207C00"))) PPC_WEAK_FUNC(sub_82207C00);
PPC_FUNC_IMPL(__imp__sub_82207C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82207C08;
	sub_82248774(ctx, base);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,30472
	ctx.r8.u64 = ctx.r10.u64 | 30472;
	// ori r7,r9,30728
	ctx.r7.u64 = ctx.r9.u64 | 30728;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r6,r6,30984
	ctx.r6.u64 = ctx.r6.u64 | 30984;
	// ori r5,r5,31240
	ctx.r5.u64 = ctx.r5.u64 | 31240;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r4,r4,31496
	ctx.r4.u64 = ctx.r4.u64 | 31496;
	// stfs f0,372(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 372, temp.u32);
	// ori r30,r10,31752
	ctx.r30.u64 = ctx.r10.u64 | 31752;
	// lfsx f13,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stfs f13,376(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 376, temp.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfsx f12,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// ori r29,r9,32008
	ctx.r29.u64 = ctx.r9.u64 | 32008;
	// stfs f12,380(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 380, temp.u32);
	// ori r28,r10,32264
	ctx.r28.u64 = ctx.r10.u64 | 32264;
	// lfsx f11,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stfs f11,384(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 384, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfsx f10,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// ori r27,r10,32520
	ctx.r27.u64 = ctx.r10.u64 | 32520;
	// stfs f10,388(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 388, temp.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfsx f9,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,392(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 392, temp.u32);
	// lfsx f8,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,396(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// lfsx f7,r11,r28
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,400(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// lfsx f6,r11,r27
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,404(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// lwz r31,336(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82207cdc
	if (!ctx.cr6.eq) goto loc_82207CDC;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r26,1
	ctx.r26.s64 = 65536;
	// ori r8,r8,30660
	ctx.r8.u64 = ctx.r8.u64 | 30660;
	// li r31,1
	ctx.r31.s64 = 1;
	// ori r26,r26,28356
	ctx.r26.u64 = ctx.r26.u64 | 28356;
	// stwx r31,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r31.u32);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r8,r26
	PPC_STORE_U32(ctx.r8.u32 + ctx.r26.u32, ctx.r31.u32);
	// b 0x82207d24
	goto loc_82207D24;
loc_82207CDC:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r31,1
	ctx.r31.s64 = 65536;
	// ori r10,r10,30660
	ctx.r10.u64 = ctx.r10.u64 | 30660;
	// ori r26,r31,28356
	ctx.r26.u64 = ctx.r31.u64 | 28356;
	// lis r25,1
	ctx.r25.s64 = 65536;
	// li r31,1
	ctx.r31.s64 = 1;
	// ori r25,r25,28168
	ctx.r25.u64 = ctx.r25.u64 | 28168;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r9.u32);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lfs f0,372(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lfs f13,372(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r11,r25
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
loc_82207D24:
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// ori r8,r8,30916
	ctx.r8.u64 = ctx.r8.u64 | 30916;
	// bne cr6,0x82207d5c
	if (!ctx.cr6.eq) goto loc_82207D5C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r7,r7,28612
	ctx.r7.u64 = ctx.r7.u64 | 28612;
	// stwx r31,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r31.u32);
	// lwz r8,280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r31,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r31.u32);
	// b 0x82207da4
	goto loc_82207DA4;
loc_82207D5C:
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r26,1
	ctx.r26.s64 = 65536;
	// addi r25,r10,93
	ctx.r25.s64 = ctx.r10.s64 + 93;
	// ori r26,r26,28612
	ctx.r26.u64 = ctx.r26.u64 | 28612;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r23,1
	ctx.r23.s64 = 65536;
	// stwx r9,r24,r8
	PPC_STORE_U32(ctx.r24.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// ori r25,r23,28424
	ctx.r25.u64 = ctx.r23.u64 | 28424;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r9,r8,r26
	PPC_STORE_U32(ctx.r8.u32 + ctx.r26.u32, ctx.r9.u32);
	// lwz r8,280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfsx f0,r8,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r8,r25
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r25.u32, temp.u32);
loc_82207DA4:
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// bne cr6,0x82207ddc
	if (!ctx.cr6.eq) goto loc_82207DDC;
	// ori r6,r8,31172
	ctx.r6.u64 = ctx.r8.u64 | 31172;
	// ori r8,r7,28868
	ctx.r8.u64 = ctx.r7.u64 | 28868;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r6,280(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r31,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r31.u32);
	// b 0x82207e24
	goto loc_82207E24;
loc_82207DDC:
	// lwz r25,8(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r8,r8,31172
	ctx.r8.u64 = ctx.r8.u64 | 31172;
	// ori r7,r7,28868
	ctx.r7.u64 = ctx.r7.u64 | 28868;
	// addi r26,r10,93
	ctx.r26.s64 = ctx.r10.s64 + 93;
	// lis r24,1
	ctx.r24.s64 = 65536;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r25,r8
	PPC_STORE_U32(ctx.r25.u32 + ctx.r8.u32, ctx.r9.u32);
	// ori r26,r24,28680
	ctx.r26.u64 = ctx.r24.u64 | 28680;
	// lwz r8,280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r9,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,280(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfsx f0,r8,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r8,r26
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r26.u32, temp.u32);
loc_82207E24:
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// ori r6,r8,31428
	ctx.r6.u64 = ctx.r8.u64 | 31428;
	// bne cr6,0x82207e5c
	if (!ctx.cr6.eq) goto loc_82207E5C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r5,r7,29124
	ctx.r5.u64 = ctx.r7.u64 | 29124;
	// stwx r31,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r8,280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r31,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r31.u32);
	// b 0x82207ea0
	goto loc_82207EA0;
loc_82207E5C:
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r8,r7,29124
	ctx.r8.u64 = ctx.r7.u64 | 29124;
	// addi r7,r10,93
	ctx.r7.s64 = ctx.r10.s64 + 93;
	// lis r25,1
	ctx.r25.s64 = 65536;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r7,r25,28936
	ctx.r7.u64 = ctx.r25.u64 | 28936;
	// stwx r9,r26,r6
	PPC_STORE_U32(ctx.r26.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,280(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r9,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfsx f0,r6,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r6,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, temp.u32);
loc_82207EA0:
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// ori r6,r8,31684
	ctx.r6.u64 = ctx.r8.u64 | 31684;
	// ori r5,r7,29380
	ctx.r5.u64 = ctx.r7.u64 | 29380;
	// bne cr6,0x82207ed8
	if (!ctx.cr6.eq) goto loc_82207ED8;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r31.u32);
	// b 0x82207f18
	goto loc_82207F18;
loc_82207ED8:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,93
	ctx.r8.s64 = ctx.r10.s64 + 93;
	// lis r26,1
	ctx.r26.s64 = 65536;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r26,29192
	ctx.r8.u64 = ctx.r26.u64 | 29192;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r7,280(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r9,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r9.u32);
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,280(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfsx f0,r7,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r7,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
loc_82207F18:
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// ori r6,r8,31940
	ctx.r6.u64 = ctx.r8.u64 | 31940;
	// ori r5,r7,29636
	ctx.r5.u64 = ctx.r7.u64 | 29636;
	// bne cr6,0x82207f50
	if (!ctx.cr6.eq) goto loc_82207F50;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r31.u32);
	// b 0x82207f90
	goto loc_82207F90;
loc_82207F50:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r10,93
	ctx.r4.s64 = ctx.r10.s64 + 93;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r4,r7,29448
	ctx.r4.u64 = ctx.r7.u64 | 29448;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r8,280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r9,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r6,280(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfsx f0,r5,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r30.u32, temp.u32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r5,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
loc_82207F90:
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// ori r6,r8,32196
	ctx.r6.u64 = ctx.r8.u64 | 32196;
	// ori r5,r7,29892
	ctx.r5.u64 = ctx.r7.u64 | 29892;
	// bne cr6,0x82207fc8
	if (!ctx.cr6.eq) goto loc_82207FC8;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r31.u32);
	// b 0x82208008
	goto loc_82208008;
loc_82207FC8:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r10,93
	ctx.r4.s64 = ctx.r10.s64 + 93;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r4,r7,29704
	ctx.r4.u64 = ctx.r7.u64 | 29704;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r8,280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r9,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r9.u32);
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,280(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfsx f0,r5,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r29.u32, temp.u32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r5,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
loc_82208008:
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// ori r6,r8,32452
	ctx.r6.u64 = ctx.r8.u64 | 32452;
	// ori r5,r7,30148
	ctx.r5.u64 = ctx.r7.u64 | 30148;
	// bne cr6,0x82208040
	if (!ctx.cr6.eq) goto loc_82208040;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r31.u32);
	// b 0x82208080
	goto loc_82208080;
loc_82208040:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r10,93
	ctx.r4.s64 = ctx.r10.s64 + 93;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r4,r7,29960
	ctx.r4.u64 = ctx.r7.u64 | 29960;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r8,280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r9,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r6,280(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfsx f0,r5,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r28.u32, temp.u32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r5,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
loc_82208080:
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// bne cr6,0x822080b8
	if (!ctx.cr6.eq) goto loc_822080B8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,32708
	ctx.r8.u64 = ctx.r10.u64 | 32708;
	// ori r7,r9,30404
	ctx.r7.u64 = ctx.r9.u64 | 30404;
	// stwx r31,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r31.u32);
	// lwz r5,280(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r31,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r31.u32);
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_822080B8:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r4,r10,93
	ctx.r4.s64 = ctx.r10.s64 + 93;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r6,r8,32708
	ctx.r6.u64 = ctx.r8.u64 | 32708;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r7,30404
	ctx.r5.u64 = ctx.r7.u64 | 30404;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stwx r9,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r9.u32);
	// ori r7,r8,30216
	ctx.r7.u64 = ctx.r8.u64 | 30216;
	// lwz r6,280(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r9,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r10,280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfsx f0,r9,r27
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, temp.u32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r9,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82208108"))) PPC_WEAK_FUNC(sub_82208108);
PPC_FUNC_IMPL(__imp__sub_82208108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82208110;
	sub_8224877C(ctx, base);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfs f0,372(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,30472
	ctx.r10.u64 = ctx.r10.u64 | 30472;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r9,r9,28168
	ctx.r9.u64 = ctx.r9.u64 | 28168;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f0,r5,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r8,r8,30728
	ctx.r8.u64 = ctx.r8.u64 | 30728;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r7,r7,28424
	ctx.r7.u64 = ctx.r7.u64 | 28424;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r6,r6,30984
	ctx.r6.u64 = ctx.r6.u64 | 30984;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r4,r4,28680
	ctx.r4.u64 = ctx.r4.u64 | 28680;
	// lis r31,1
	ctx.r31.s64 = 65536;
	// ori r11,r11,31240
	ctx.r11.u64 = ctx.r11.u64 | 31240;
	// lis r30,1
	ctx.r30.s64 = 65536;
	// ori r31,r31,28936
	ctx.r31.u64 = ctx.r31.u64 | 28936;
	// lis r29,1
	ctx.r29.s64 = 65536;
	// ori r30,r30,31496
	ctx.r30.u64 = ctx.r30.u64 | 31496;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r29,r29,29192
	ctx.r29.u64 = ctx.r29.u64 | 29192;
	// lis r28,1
	ctx.r28.s64 = 65536;
	// ori r10,r10,31752
	ctx.r10.u64 = ctx.r10.u64 | 31752;
	// ori r28,r28,29448
	ctx.r28.u64 = ctx.r28.u64 | 29448;
	// lfs f13,372(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// lis r27,1
	ctx.r27.s64 = 65536;
	// stfsx f13,r5,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfs f12,376(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// ori r27,r27,29704
	ctx.r27.u64 = ctx.r27.u64 | 29704;
	// stfsx f12,r5,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// ori r9,r9,32008
	ctx.r9.u64 = ctx.r9.u64 | 32008;
	// lfs f11,376(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stfsx f11,r5,r7
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// lis r26,1
	ctx.r26.s64 = 65536;
	// lfs f10,380(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	ctx.f10.f64 = double(temp.f32);
	// ori r8,r8,32264
	ctx.r8.u64 = ctx.r8.u64 | 32264;
	// stfsx f10,r5,r6
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lfs f9,380(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	ctx.f9.f64 = double(temp.f32);
	// ori r26,r26,29960
	ctx.r26.u64 = ctx.r26.u64 | 29960;
	// stfsx f9,r5,r4
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
	// lis r25,1
	ctx.r25.s64 = 65536;
	// lfs f8,384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	ctx.f8.f64 = double(temp.f32);
	// ori r7,r7,32520
	ctx.r7.u64 = ctx.r7.u64 | 32520;
	// stfsx f8,r5,r11
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// ori r25,r25,30216
	ctx.r25.u64 = ctx.r25.u64 | 30216;
	// lfs f7,384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f7,r5,r31
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, temp.u32);
	// lfs f6,388(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	ctx.f6.f64 = double(temp.f32);
	// stfsx f6,r5,r30
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r30.u32, temp.u32);
	// lfs f5,388(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	ctx.f5.f64 = double(temp.f32);
	// stfsx f5,r5,r29
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r29.u32, temp.u32);
	// lfs f4,392(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	ctx.f4.f64 = double(temp.f32);
	// stfsx f4,r5,r10
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lfs f3,392(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	ctx.f3.f64 = double(temp.f32);
	// stfsx f3,r5,r28
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r28.u32, temp.u32);
	// lfs f2,396(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f2.f64 = double(temp.f32);
	// stfsx f2,r5,r9
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
	// lfs f1,396(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f1.f64 = double(temp.f32);
	// stfsx f1,r5,r27
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r27.u32, temp.u32);
	// lfs f0,400(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r5,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// lfs f13,400(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r5,r26
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r26.u32, temp.u32);
	// lfs f12,404(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r5,r7
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// lfs f11,404(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r5,r25
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r25.u32, temp.u32);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8220823C"))) PPC_WEAK_FUNC(sub_8220823C);
PPC_FUNC_IMPL(__imp__sub_8220823C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208240"))) PPC_WEAK_FUNC(sub_82208240);
PPC_FUNC_IMPL(__imp__sub_82208240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82208248;
	sub_8224878C(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249928
	ctx.lr = 0x82208250;
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
	// li r31,372
	ctx.r31.s64 = 372;
	// lfs f30,11308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	ctx.f30.f64 = double(temp.f32);
	// addi r29,r11,30956
	ctx.r29.s64 = ctx.r11.s64 + 30956;
	// lfs f31,-31244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31244);
	ctx.f31.f64 = double(temp.f32);
loc_82208284:
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
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
	ctx.lr = 0x822082A0;
	sub_8224A7B8(ctx, base);
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
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
	// beq cr6,0x822082f4
	if (ctx.cr6.eq) goto loc_822082F4;
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
	// b 0x82208320
	goto loc_82208320;
loc_822082F4:
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
loc_82208320:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r31,480
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 480, ctx.xer);
	// blt cr6,0x82208284
	if (ctx.cr6.lt) goto loc_82208284;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249974
	ctx.lr = 0x82208338;
	sub_82249974(ctx, base);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8220833C"))) PPC_WEAK_FUNC(sub_8220833C);
PPC_FUNC_IMPL(__imp__sub_8220833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208340"))) PPC_WEAK_FUNC(sub_82208340);
PPC_FUNC_IMPL(__imp__sub_82208340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82208348;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82208578
	if (!ctx.cr6.eq) goto loc_82208578;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r29,r3,336
	ctx.r29.s64 = ctx.r3.s64 + 336;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82208374:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82208374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82208374;
	// bl 0x8215bd08
	ctx.lr = 0x82208380;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x82208384;
	sub_8216CDF0(ctx, base);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220839c
	if (!ctx.cr6.eq) goto loc_8220839C;
	// stw r31,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r31.u32);
	// stw r31,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r31.u32);
	// stw r31,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r31.u32);
loc_8220839C:
	// bl 0x8222e080
	ctx.lr = 0x822083A0;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// bne cr6,0x822083bc
	if (!ctx.cr6.eq) goto loc_822083BC;
	// stw r31,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r31.u32);
	// stw r31,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r31.u32);
	// stw r11,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r11.u32);
	// b 0x822083c0
	goto loc_822083C0;
loc_822083BC:
	// stw r11,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r11.u32);
loc_822083C0:
	// bl 0x821f0050
	ctx.lr = 0x822083C4;
	sub_821F0050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822083d8
	if (!ctx.cr6.eq) goto loc_822083D8;
	// stw r31,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r31.u32);
	// stw r31,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r31.u32);
	// stw r31,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r31.u32);
loc_822083D8:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// bl 0x82170820
	ctx.lr = 0x822083E4;
	sub_82170820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822083f0
	if (ctx.cr6.eq) goto loc_822083F0;
	// stw r31,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r31.u32);
loc_822083F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,264
	ctx.r31.s64 = 264;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_822083FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x82208404;
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
	// beq cr6,0x82208440
	if (ctx.cr6.eq) goto loc_82208440;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x8220842C;
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
loc_82208440:
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
	// lwz r7,280(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
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
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f7,968(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 968, temp.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f6,972(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 972, temp.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,976(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 976, temp.u32);
	// lwz r5,280(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f7,712(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 712, temp.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f6,716(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 716, temp.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stfs f3,720(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 720, temp.u32);
	// lwz r6,280(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
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
	// lwz r8,280(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
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
	// cmpwi cr6,r31,372
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 372, ctx.xer);
	// blt cr6,0x822083fc
	if (ctx.cr6.lt) goto loc_822083FC;
loc_82208578:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82208584"))) PPC_WEAK_FUNC(sub_82208584);
PPC_FUNC_IMPL(__imp__sub_82208584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208588"))) PPC_WEAK_FUNC(sub_82208588);
PPC_FUNC_IMPL(__imp__sub_82208588) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822085B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,84
	ctx.r9.s64 = ctx.r3.s64 + 84;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x822086dc
	if (!ctx.cr6.eq) goto loc_822086DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x822085CC;
	sub_821EBB58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x822085DC;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x822085EC;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x822085F0;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82208600
	if (!ctx.cr6.eq) goto loc_82208600;
	// li r11,30228
	ctx.r11.s64 = 30228;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82208600:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82208614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82208654
	if (ctx.cr6.eq) goto loc_82208654;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82208630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82208654
	if (ctx.cr6.eq) goto loc_82208654;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220864C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x82208668
	if (!ctx.cr6.eq) goto loc_82208668;
loc_82208654:
	// bl 0x821f0050
	ctx.lr = 0x82208658;
	sub_821F0050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82208668
	if (!ctx.cr6.eq) goto loc_82208668;
	// li r11,30511
	ctx.r11.s64 = 30511;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82208668:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r31,15472(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15472);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82208684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x822086a4
	if (!ctx.cr6.eq) goto loc_822086A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170820
	ctx.lr = 0x82208694;
	sub_82170820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822086a4
	if (ctx.cr6.eq) goto loc_822086A4;
	// li r11,30536
	ctx.r11.s64 = 30536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_822086A4:
	// bl 0x8222e080
	ctx.lr = 0x822086A8;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822086b8
	if (!ctx.cr6.eq) goto loc_822086B8;
	// li r11,30522
	ctx.r11.s64 = 30522;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_822086B8:
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
	ctx.lr = 0x822086D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822086e0
	goto loc_822086E0;
loc_822086DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822086E0:
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

__attribute__((alias("__imp__sub_822086F8"))) PPC_WEAK_FUNC(sub_822086F8);
PPC_FUNC_IMPL(__imp__sub_822086F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220873c
	if (ctx.cr6.eq) goto loc_8220873C;
	// stw r10,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220873C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220873C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x82208744;
	sub_8218B408(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
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
	// lwz r7,268(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 268);
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
	// lwz r5,268(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 268);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,460(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 460, temp.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,268(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	// stfs f2,464(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,268(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// stfs f4,712(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 712, temp.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,268(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	// stfs f3,716(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 716, temp.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,268(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 268);
	// stfs f2,720(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 720, temp.u32);
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// stfs f4,456(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 456, temp.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// stfs f3,460(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 460, temp.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,280(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 280);
	// stfs f2,464(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 464, temp.u32);
	// lwz r6,280(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,280(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 280);
	// stfs f4,712(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 712, temp.u32);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// stfs f3,716(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 716, temp.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r9,280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// stfs f2,720(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 720, temp.u32);
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,292(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 292);
	// stfs f4,456(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 456, temp.u32);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r4,292(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 292);
	// stfs f3,460(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 460, temp.u32);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// stfs f2,464(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 464, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,292(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// stfs f4,712(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 712, temp.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,292(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 292);
	// stfs f3,716(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 716, temp.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,292(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 292);
	// stfs f2,720(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 720, temp.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,304(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// stfs f4,456(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 456, temp.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,304(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 304);
	// stfs f3,460(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 460, temp.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,304(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 304);
	// stfs f2,464(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 464, temp.u32);
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// stfs f4,712(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 712, temp.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r8,304(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// stfs f3,716(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 716, temp.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r6,304(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 304);
	// stfs f2,720(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 720, temp.u32);
	// lwz r5,280(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,316(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 316);
	// stfs f4,456(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 456, temp.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r9,316(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// stfs f3,460(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 460, temp.u32);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r7,316(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 316);
	// stfs f2,464(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 464, temp.u32);
	// lwz r6,280(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,316(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 316);
	// stfs f4,712(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 712, temp.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// stfs f3,716(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 716, temp.u32);
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r8,316(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	// stfs f2,720(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 720, temp.u32);
	// lwz r7,280(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r5,328(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 328);
	// stfs f4,456(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 456, temp.u32);
	// lwz r4,12(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r11,328(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	// stfs f3,460(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 460, temp.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r9,328(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// stfs f2,464(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 464, temp.u32);
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,328(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 328);
	// stfs f4,712(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 712, temp.u32);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r4,328(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 328);
	// stfs f3,716(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 716, temp.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// stfs f2,720(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 720, temp.u32);
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// stfs f4,456(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 456, temp.u32);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r5,340(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 340);
	// stfs f3,460(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 460, temp.u32);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,340(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	// stfs f2,464(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 464, temp.u32);
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// stfs f4,712(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 712, temp.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,340(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 340);
	// stfs f3,716(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 716, temp.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,340(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// stfs f2,720(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 720, temp.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,352(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// stfs f4,456(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 456, temp.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,352(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 352);
	// stfs f3,460(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 460, temp.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,352(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 352);
	// stfs f2,464(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 464, temp.u32);
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// stfs f4,712(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 712, temp.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r8,352(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 352);
	// stfs f3,716(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 716, temp.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r6,352(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 352);
	// stfs f2,720(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 720, temp.u32);
	// lwz r5,280(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,364(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	// stfs f4,456(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 456, temp.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r9,364(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 364);
	// stfs f3,460(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 460, temp.u32);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r7,364(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 364);
	// stfs f2,464(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 464, temp.u32);
	// lwz r6,280(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,364(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 364);
	// stfs f4,712(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 712, temp.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// stfs f3,716(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 716, temp.u32);
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r8,364(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 364);
	// stfs f2,720(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 720, temp.u32);
	// bl 0x82207a50
	ctx.lr = 0x82208A8C;
	sub_82207A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208340
	ctx.lr = 0x82208A94;
	sub_82208340(ctx, base);
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

__attribute__((alias("__imp__sub_82208AA8"))) PPC_WEAK_FUNC(sub_82208AA8);
PPC_FUNC_IMPL(__imp__sub_82208AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82208AB0;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208aec
	if (ctx.cr6.eq) goto loc_82208AEC;
	// stw r29,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r29.u32);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82208AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82208AEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,264
	ctx.r31.s64 = 264;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_82208AFC:
	// lwz r10,280(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r28,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r28.u32);
	// lwz r7,280(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r28,452(r5)
	PPC_STORE_U32(ctx.r5.u32 + 452, ctx.r28.u32);
	// lwz r4,280(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r28,708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 708, ctx.r28.u32);
	// lwz r8,280(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r28,964(r6)
	PPC_STORE_U32(ctx.r6.u32 + 964, ctx.r28.u32);
	// bl 0x8218b408
	ctx.lr = 0x82208B58;
	sub_8218B408(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// bctrl 
	ctx.lr = 0x82208B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82208ba8
	if (!ctx.cr6.eq) goto loc_82208BA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x82208B94;
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
loc_82208BA8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,280(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
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
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// stfs f8,456(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f6,460(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 460, temp.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,464(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 464, temp.u32);
	// lwz r7,280(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stfs f8,712(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 712, temp.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f6,716(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 716, temp.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f3,720(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 720, temp.u32);
	// cmpwi cr6,r31,372
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 372, ctx.xer);
	// blt cr6,0x82208afc
	if (ctx.cr6.lt) goto loc_82208AFC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82208C80"))) PPC_WEAK_FUNC(sub_82208C80);
PPC_FUNC_IMPL(__imp__sub_82208C80) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82208CA0;
	sub_821EBB58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,30517
	ctx.r10.s64 = 30517;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82208CBC;
	sub_8215BD08(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r3,-784(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -784);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,112(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82208CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208d04
	if (ctx.cr6.eq) goto loc_82208D04;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82208D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82208D04:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82208D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r9,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82208D38"))) PPC_WEAK_FUNC(sub_82208D38);
PPC_FUNC_IMPL(__imp__sub_82208D38) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x82208D58;
	sub_821EBB58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,30530
	ctx.r11.s64 = 30530;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82208D70;
	sub_8215BD08(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r3,-784(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -784);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82208D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208db8
	if (ctx.cr6.eq) goto loc_82208DB8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82208DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82208DB8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82208DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r9,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82208DEC"))) PPC_WEAK_FUNC(sub_82208DEC);
PPC_FUNC_IMPL(__imp__sub_82208DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208DF0"))) PPC_WEAK_FUNC(sub_82208DF0);
PPC_FUNC_IMPL(__imp__sub_82208DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,276(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821474f0
	ctx.lr = 0x82208E14;
	sub_821474F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82208e74
	if (ctx.cr6.eq) goto loc_82208E74;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82208E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82208e74
	if (ctx.cr6.eq) goto loc_82208E74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822086f8
	ctx.lr = 0x82208E40;
	sub_822086F8(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// beq cr6,0x82208e68
	if (ctx.cr6.eq) goto loc_82208E68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82208E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82208E68:
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208340
	ctx.lr = 0x82208E74;
	sub_82208340(ctx, base);
loc_82208E74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82208E8C"))) PPC_WEAK_FUNC(sub_82208E8C);
PPC_FUNC_IMPL(__imp__sub_82208E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208E90"))) PPC_WEAK_FUNC(sub_82208E90);
PPC_FUNC_IMPL(__imp__sub_82208E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r31,-784(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82208EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82208f10
	if (ctx.cr6.eq) goto loc_82208F10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed270
	ctx.lr = 0x82208ED4;
	sub_821ED270(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82208f10
	if (ctx.cr6.eq) goto loc_82208F10;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82208ef4
	if (!ctx.cr6.eq) goto loc_82208EF4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82208f08
	goto loc_82208F08;
loc_82208EF4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82208F08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82208F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82208F10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82208F28"))) PPC_WEAK_FUNC(sub_82208F28);
PPC_FUNC_IMPL(__imp__sub_82208F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82208F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82208f78
	if (ctx.cr6.eq) goto loc_82208F78;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82208F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82208F78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82208F8C"))) PPC_WEAK_FUNC(sub_82208F8C);
PPC_FUNC_IMPL(__imp__sub_82208F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82208F90"))) PPC_WEAK_FUNC(sub_82208F90);
PPC_FUNC_IMPL(__imp__sub_82208F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5218
	ctx.lr = 0x82208FB0;
	sub_820E5218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82208fd4
	if (!ctx.cr6.eq) goto loc_82208FD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82208FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82208FD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82208FE8"))) PPC_WEAK_FUNC(sub_82208FE8);
PPC_FUNC_IMPL(__imp__sub_82208FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-8460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8460);
	// bl 0x820e5218
	ctx.lr = 0x8220900C;
	sub_820E5218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220904c
	if (!ctx.cr6.eq) goto loc_8220904C;
	// lwz r11,-8460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8460);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82209030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r8.u32);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8220904C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220904C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209064"))) PPC_WEAK_FUNC(sub_82209064);
PPC_FUNC_IMPL(__imp__sub_82209064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209068"))) PPC_WEAK_FUNC(sub_82209068);
PPC_FUNC_IMPL(__imp__sub_82209068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822090A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82209108
	if (ctx.cr6.eq) goto loc_82209108;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822090C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822090d0
	if (ctx.cr6.eq) goto loc_822090D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8222e098
	ctx.lr = 0x822090D0;
	sub_8222E098(ctx, base);
loc_822090D0:
	// bl 0x8222e080
	ctx.lr = 0x822090D4;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822090ec
	if (ctx.cr6.eq) goto loc_822090EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82209100
	goto loc_82209100;
loc_822090EC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82209100:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82209108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82209108:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209120"))) PPC_WEAK_FUNC(sub_82209120);
PPC_FUNC_IMPL(__imp__sub_82209120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r30,-784(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82209154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822091e4
	if (ctx.cr6.eq) goto loc_822091E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ed270
	ctx.lr = 0x82209164;
	sub_821ED270(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822091e4
	if (ctx.cr6.eq) goto loc_822091E4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822091b4
	if (!ctx.cr6.eq) goto loc_822091B4;
	// bl 0x821ebaa8
	ctx.lr = 0x82209178;
	sub_821EBAA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821eb380
	ctx.lr = 0x82209180;
	sub_821EB380(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82209198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x822091dc
	goto loc_822091DC;
loc_822091B4:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822091c8
	if (ctx.cr6.eq) goto loc_822091C8;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
loc_822091C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r10.u32);
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822091DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x822091E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822091E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822091FC"))) PPC_WEAK_FUNC(sub_822091FC);
PPC_FUNC_IMPL(__imp__sub_822091FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209200"))) PPC_WEAK_FUNC(sub_82209200);
PPC_FUNC_IMPL(__imp__sub_82209200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82209208;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,-784(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220922C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822092b4
	if (ctx.cr6.eq) goto loc_822092B4;
	// bl 0x821f0050
	ctx.lr = 0x82209238;
	sub_821F0050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82209264
	if (ctx.cr6.eq) goto loc_82209264;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x82209248;
	sub_821EBAA8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220925C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82209264:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x8220926C;
	sub_821EBB58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8220927C;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,30511
	ctx.r10.s64 = 30511;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822092AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r6,332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 332, ctx.r6.u32);
loc_822092B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822092BC"))) PPC_WEAK_FUNC(sub_822092BC);
PPC_FUNC_IMPL(__imp__sub_822092BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822092C0"))) PPC_WEAK_FUNC(sub_822092C0);
PPC_FUNC_IMPL(__imp__sub_822092C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822092C8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-5944
	ctx.r8.s64 = ctx.r11.s64 + -5944;
	// addi r7,r10,-6080
	ctx.r7.s64 = ctx.r10.s64 + -6080;
	// addi r6,r9,-6092
	ctx.r6.s64 = ctx.r9.s64 + -6092;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220931c
	if (ctx.cr6.eq) goto loc_8220931C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220931C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220931C:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82209344
	if (ctx.cr6.eq) goto loc_82209344;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82209344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82209344:
	// stw r28,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208108
	ctx.lr = 0x82209350;
	sub_82208108(ctx, base);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x823c3048
	ctx.lr = 0x82209358;
	sub_823C3048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x82209360;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x82209368;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82209370;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82209378"))) PPC_WEAK_FUNC(sub_82209378);
PPC_FUNC_IMPL(__imp__sub_82209378) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x822099b0
	sub_822099B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82209380"))) PPC_WEAK_FUNC(sub_82209380);
PPC_FUNC_IMPL(__imp__sub_82209380) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x822099b0
	sub_822099B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82209388"))) PPC_WEAK_FUNC(sub_82209388);
PPC_FUNC_IMPL(__imp__sub_82209388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82209390;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x8220939C;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x822093A4;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x822093B0;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x822093B4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x822093cc
	if (ctx.cr6.eq) goto loc_822093CC;
	// li r3,276
	ctx.r3.s64 = 276;
	// bl 0x82183448
	ctx.lr = 0x822093C8;
	sub_82183448(ctx, base);
	// b 0x822093d4
	goto loc_822093D4;
loc_822093CC:
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x821845a0
	ctx.lr = 0x822093D4;
	sub_821845A0(ctx, base);
loc_822093D4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822093e4
	if (ctx.cr6.eq) goto loc_822093E4;
	// bl 0x82212140
	ctx.lr = 0x822093E0;
	sub_82212140(ctx, base);
	// b 0x822093e8
	goto loc_822093E8;
loc_822093E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822093E8:
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x823c3410
	ctx.lr = 0x822093F4;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x822093FC;
	sub_823C3C70(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x821ebaa8
	ctx.lr = 0x82209404;
	sub_821EBAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207a50
	ctx.lr = 0x8220940C;
	sub_82207A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208240
	ctx.lr = 0x82209414;
	sub_82208240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207c00
	ctx.lr = 0x8220941C;
	sub_82207C00(ctx, base);
	// bl 0x82207498
	ctx.lr = 0x82209420;
	sub_82207498(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82209428;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82209430"))) PPC_WEAK_FUNC(sub_82209430);
PPC_FUNC_IMPL(__imp__sub_82209430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82208340
	ctx.lr = 0x82209448;
	sub_82208340(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82209574
	if (ctx.cr6.gt) goto loc_82209574;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822094a8
	// bdzf 4*cr6+eq,0x822094c4
	// bdzf 4*cr6+eq,0x822094e0
	// bdzf 4*cr6+eq,0x822094fc
	// bdzf 4*cr6+eq,0x82209518
	// bdzf 4*cr6+eq,0x82209534
	// bdzf 4*cr6+eq,0x82209550
	// bne cr6,0x8220956c
	if (!ctx.cr6.eq) goto loc_8220956C;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82209574
	if (ctx.cr6.eq) goto loc_82209574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208c80
	ctx.lr = 0x82209494;
	sub_82208C80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822094A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208df0
	ctx.lr = 0x822094B0;
	sub_82208DF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822094C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208e90
	ctx.lr = 0x822094CC;
	sub_82208E90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822094E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208f28
	ctx.lr = 0x822094E8;
	sub_82208F28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822094FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208f90
	ctx.lr = 0x82209504;
	sub_82208F90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82209518:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208fe8
	ctx.lr = 0x82209520;
	sub_82208FE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82209534:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209068
	ctx.lr = 0x8220953C;
	sub_82209068(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82209550:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209120
	ctx.lr = 0x82209558;
	sub_82209120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8220956C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209200
	ctx.lr = 0x82209574;
	sub_82209200(ctx, base);
loc_82209574:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209588"))) PPC_WEAK_FUNC(sub_82209588);
PPC_FUNC_IMPL(__imp__sub_82209588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207a50
	ctx.lr = 0x822095A4;
	sub_82207A50(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207400
	ctx.lr = 0x822095B0;
	sub_82207400(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822095C4"))) PPC_WEAK_FUNC(sub_822095C4);
PPC_FUNC_IMPL(__imp__sub_822095C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822095C8"))) PPC_WEAK_FUNC(sub_822095C8);
PPC_FUNC_IMPL(__imp__sub_822095C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x822095F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,77
	ctx.r9.s64 = ctx.r3.s64 + 77;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82209614
	if (!ctx.cr6.eq) goto loc_82209614;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82209640
	goto loc_82209640;
loc_82209614:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82208588
	ctx.lr = 0x8220961C;
	sub_82208588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220963c
	if (ctx.cr6.eq) goto loc_8220963C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// b 0x82209640
	goto loc_82209640;
loc_8220963C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82209640:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209658"))) PPC_WEAK_FUNC(sub_82209658);
PPC_FUNC_IMPL(__imp__sub_82209658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82209660;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82209680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x822096e8
	if (!ctx.cr6.eq) goto loc_822096E8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,-8460(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x8215bd08
	ctx.lr = 0x82209694;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x820e5500
	ctx.lr = 0x822096A4;
	sub_820E5500(ctx, base);
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822096cc
	if (ctx.cr6.eq) goto loc_822096CC;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822096CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822096CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822096E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_822096E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822096FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82209770
	if (!ctx.cr6.eq) goto loc_82209770;
	// bl 0x82182e90
	ctx.lr = 0x82209708;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82209710;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8220971C;
	sub_821837D0(ctx, base);
	// li r3,1088
	ctx.r3.s64 = 1088;
	// bl 0x82080000
	ctx.lr = 0x82209724;
	sub_82080000(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82209748
	if (ctx.cr6.eq) goto loc_82209748;
	// bl 0x82182e90
	ctx.lr = 0x82209734;
	sub_82182E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82149188
	ctx.lr = 0x82209744;
	sub_82149188(ctx, base);
	// b 0x8220974c
	goto loc_8220974C;
loc_82209748:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220974C:
	// stw r3,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208aa8
	ctx.lr = 0x82209758;
	sub_82208AA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82209768;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82209770:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82209784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822097c0
	if (!ctx.cr6.eq) goto loc_822097C0;
	// lwz r3,15472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15472);
	// bl 0x821708b0
	ctx.lr = 0x82209798;
	sub_821708B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822097c0
	if (ctx.cr6.eq) goto loc_822097C0;
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822097c0
	if (!ctx.cr6.eq) goto loc_822097C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208d38
	ctx.lr = 0x822097B8;
	sub_82208D38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_822097C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822097D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x82209830
	if (!ctx.cr6.eq) goto loc_82209830;
	// lwz r3,15472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15472);
	// bl 0x821708b0
	ctx.lr = 0x822097E4;
	sub_821708B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220980c
	if (ctx.cr6.eq) goto loc_8220980C;
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8220980c
	if (!ctx.cr6.eq) goto loc_8220980C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208c80
	ctx.lr = 0x82209804;
	sub_82208C80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8220980C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82209820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x82209830
	if (!ctx.cr6.eq) goto loc_82209830;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r11.u32);
loc_82209830:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82209844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x822098ac
	if (!ctx.cr6.eq) goto loc_822098AC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,-8460(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x8215bd08
	ctx.lr = 0x82209858;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x820e5550
	ctx.lr = 0x82209868;
	sub_820E5550(ctx, base);
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822096cc
	if (ctx.cr6.eq) goto loc_822096CC;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82209890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822098A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_822098AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822098C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822098C8"))) PPC_WEAK_FUNC(sub_822098C8);
PPC_FUNC_IMPL(__imp__sub_822098C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822098D0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x822098E4;
	sub_823C3B68(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x822098E8;
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
	ctx.lr = 0x822098FC;
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
	ctx.lr = 0x82209910;
	sub_821859A0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r10,-5944
	ctx.r7.s64 = ctx.r10.s64 + -5944;
	// addi r6,r9,-6080
	ctx.r6.s64 = ctx.r9.s64 + -6080;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// addi r5,r8,-6092
	ctx.r5.s64 = ctx.r8.s64 + -6092;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// bl 0x823c2ff0
	ctx.lr = 0x82209950;
	sub_823C2FF0(ctx, base);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x8220996C;
	sub_822AA648(ctx, base);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x822aa648
	ctx.lr = 0x82209978;
	sub_822AA648(ctx, base);
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-792(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -792);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// bl 0x82208340
	ctx.lr = 0x82209990;
	sub_82208340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822079a0
	ctx.lr = 0x8220999C;
	sub_822079A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209388
	ctx.lr = 0x822099A4;
	sub_82209388(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822099B0"))) PPC_WEAK_FUNC(sub_822099B0);
PPC_FUNC_IMPL(__imp__sub_822099B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x822092c0
	ctx.lr = 0x822099D0;
	sub_822092C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822099ec
	if (ctx.cr6.eq) goto loc_822099EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x822099E8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822099EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209A04"))) PPC_WEAK_FUNC(sub_82209A04);
PPC_FUNC_IMPL(__imp__sub_82209A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209A08"))) PPC_WEAK_FUNC(sub_82209A08);
PPC_FUNC_IMPL(__imp__sub_82209A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,276
	ctx.r3.s64 = ctx.r3.s64 + 276;
	// bl 0x823c3468
	ctx.lr = 0x82209A24;
	sub_823C3468(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82209A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3ca8
	ctx.lr = 0x82209A40;
	sub_823C3CA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209A54"))) PPC_WEAK_FUNC(sub_82209A54);
PPC_FUNC_IMPL(__imp__sub_82209A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209A58"))) PPC_WEAK_FUNC(sub_82209A58);
PPC_FUNC_IMPL(__imp__sub_82209A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r3,276
	ctx.r3.s64 = ctx.r3.s64 + 276;
	// bl 0x823c3468
	ctx.lr = 0x82209A74;
	sub_823C3468(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82209A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3cd8
	ctx.lr = 0x82209A90;
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

__attribute__((alias("__imp__sub_82209AA4"))) PPC_WEAK_FUNC(sub_82209AA4);
PPC_FUNC_IMPL(__imp__sub_82209AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209AA8"))) PPC_WEAK_FUNC(sub_82209AA8);
PPC_FUNC_IMPL(__imp__sub_82209AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82209AB0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r28,332(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-5712
	ctx.r8.s64 = ctx.r11.s64 + -5712;
	// addi r7,r10,-5848
	ctx.r7.s64 = ctx.r10.s64 + -5848;
	// addi r6,r9,-5856
	ctx.r6.s64 = ctx.r9.s64 + -5856;
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
	// bl 0x8215bd08
	ctx.lr = 0x82209AEC;
	sub_8215BD08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// bl 0x821ebaa8
	ctx.lr = 0x82209AFC;
	sub_821EBAA8(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x82209B00;
	sub_821EB3E8(ctx, base);
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// bl 0x823c3048
	ctx.lr = 0x82209B08;
	sub_823C3048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x82209B10;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x82209B18;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82209B20;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82209B28"))) PPC_WEAK_FUNC(sub_82209B28);
PPC_FUNC_IMPL(__imp__sub_82209B28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82209c88
	sub_82209C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82209B30"))) PPC_WEAK_FUNC(sub_82209B30);
PPC_FUNC_IMPL(__imp__sub_82209B30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82209c88
	sub_82209C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82209B38"))) PPC_WEAK_FUNC(sub_82209B38);
PPC_FUNC_IMPL(__imp__sub_82209B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82209B40;
	sub_82248788(ctx, base);
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
	// beq cr6,0x82209be8
	if (ctx.cr6.eq) goto loc_82209BE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x82209B60;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x82209B6C;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82209B7C;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82209B88;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
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
	// ble cr6,0x82209bd0
	if (!ctx.cr6.gt) goto loc_82209BD0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r10,58452
	ctx.r9.u64 = ctx.r10.u64 | 58452;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,405
	ctx.r4.s64 = 405;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f0,r8,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8210a9b0
	ctx.lr = 0x82209BD0;
	sub_8210A9B0(ctx, base);
loc_82209BD0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82209BDC;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82209BE8;
	sub_821AD498(ctx, base);
loc_82209BE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82209BF0"))) PPC_WEAK_FUNC(sub_82209BF0);
PPC_FUNC_IMPL(__imp__sub_82209BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
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

__attribute__((alias("__imp__sub_82209C0C"))) PPC_WEAK_FUNC(sub_82209C0C);
PPC_FUNC_IMPL(__imp__sub_82209C0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209C10"))) PPC_WEAK_FUNC(sub_82209C10);
PPC_FUNC_IMPL(__imp__sub_82209C10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
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

__attribute__((alias("__imp__sub_82209C2C"))) PPC_WEAK_FUNC(sub_82209C2C);
PPC_FUNC_IMPL(__imp__sub_82209C2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209C30"))) PPC_WEAK_FUNC(sub_82209C30);
PPC_FUNC_IMPL(__imp__sub_82209C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82209C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r3,-8460(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8460);
	// bl 0x820e5550
	ctx.lr = 0x82209C70;
	sub_820E5550(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209C84"))) PPC_WEAK_FUNC(sub_82209C84);
PPC_FUNC_IMPL(__imp__sub_82209C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209C88"))) PPC_WEAK_FUNC(sub_82209C88);
PPC_FUNC_IMPL(__imp__sub_82209C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82209aa8
	ctx.lr = 0x82209CA8;
	sub_82209AA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82209cc4
	if (ctx.cr6.eq) goto loc_82209CC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82209CC0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82209CC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82209CDC"))) PPC_WEAK_FUNC(sub_82209CDC);
PPC_FUNC_IMPL(__imp__sub_82209CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209CE0"))) PPC_WEAK_FUNC(sub_82209CE0);
PPC_FUNC_IMPL(__imp__sub_82209CE0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ebaa8
	ctx.lr = 0x82209CFC;
	sub_821EBAA8(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x82209D00;
	sub_821EB3E8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// bl 0x823c3410
	ctx.lr = 0x82209D48;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x82209D50;
	sub_823C3C70(ctx, base);
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

__attribute__((alias("__imp__sub_82209D64"))) PPC_WEAK_FUNC(sub_82209D64);
PPC_FUNC_IMPL(__imp__sub_82209D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209D68"))) PPC_WEAK_FUNC(sub_82209D68);
PPC_FUNC_IMPL(__imp__sub_82209D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82209D70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lwz r3,-8460(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8460);
	// bgt cr6,0x82209f14
	if (ctx.cr6.gt) goto loc_82209F14;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82209e28
	// bdzf 4*cr6+eq,0x82209e58
	// bne cr6,0x82209e90
	if (!ctx.cr6.eq) goto loc_82209E90;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
loc_82209DAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218e938
	ctx.lr = 0x82209DB4;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82209DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82209ddc
	if (!ctx.cr6.eq) goto loc_82209DDC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82209dac
	if (ctx.cr6.lt) goto loc_82209DAC;
	// b 0x82209de0
	goto loc_82209DE0;
loc_82209DDC:
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
loc_82209DE0:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82209f14
	if (ctx.cr6.eq) goto loc_82209F14;
	// li r3,10000
	ctx.r3.s64 = 10000;
	// bl 0x8208f658
	ctx.lr = 0x82209DF4;
	sub_8208F658(ctx, base);
	// lwz r3,-8460(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8460);
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x820e5670
	ctx.lr = 0x82209E00;
	sub_820E5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82209e48
	if (!ctx.cr6.eq) goto loc_82209E48;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8460(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8460);
	// bl 0x820e5460
	ctx.lr = 0x82209E20;
	sub_820E5460(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82209E28:
	// bl 0x820e5218
	ctx.lr = 0x82209E2C;
	sub_820E5218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82209f14
	if (!ctx.cr6.eq) goto loc_82209F14;
	// lwz r3,-8460(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8460);
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x820e5670
	ctx.lr = 0x82209E40;
	sub_820E5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82209ef8
	if (ctx.cr6.eq) goto loc_82209EF8;
loc_82209E48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209c30
	ctx.lr = 0x82209E50;
	sub_82209C30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82209E58:
	// bl 0x820e5218
	ctx.lr = 0x82209E5C;
	sub_820E5218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82209f14
	if (!ctx.cr6.eq) goto loc_82209F14;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// lwz r11,-8460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8460);
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
	ctx.lr = 0x82209E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82209E90:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82209EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82209f14
	if (ctx.cr6.eq) goto loc_82209F14;
	// lwz r11,-8460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8460);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82209ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82209ef8
	if (ctx.cr6.eq) goto loc_82209EF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8222e098
	ctx.lr = 0x82209EDC;
	sub_8222E098(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82209EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82209EF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82209F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82209F14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82209F1C"))) PPC_WEAK_FUNC(sub_82209F1C);
PPC_FUNC_IMPL(__imp__sub_82209F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82209F20"))) PPC_WEAK_FUNC(sub_82209F20);
PPC_FUNC_IMPL(__imp__sub_82209F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82209F28;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82209F38;
	sub_823C3B68(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x82209F3C;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823c58b0
	ctx.lr = 0x82209F54;
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
	ctx.lr = 0x82209F68;
	sub_821859A0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r7,r10,-5712
	ctx.r7.s64 = ctx.r10.s64 + -5712;
	// addi r6,r9,-5848
	ctx.r6.s64 = ctx.r9.s64 + -5848;
	// addi r5,r8,-5856
	ctx.r5.s64 = ctx.r8.s64 + -5856;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823c2ff0
	ctx.lr = 0x82209FA0;
	sub_823C2FF0(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// stw r28,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r28.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82209FB0;
	sub_8215BD08(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r4.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82209FBC;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r8,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82209FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209ce0
	ctx.lr = 0x82209FF4;
	sub_82209CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8220A000"))) PPC_WEAK_FUNC(sub_8220A000);
PPC_FUNC_IMPL(__imp__sub_8220A000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8220A008;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,652(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 652);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-5056
	ctx.r8.s64 = ctx.r11.s64 + -5056;
	// addi r7,r10,-5192
	ctx.r7.s64 = ctx.r10.s64 + -5192;
	// addi r6,r9,-5204
	ctx.r6.s64 = ctx.r9.s64 + -5204;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220a05c
	if (ctx.cr6.eq) goto loc_8220A05C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220A05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220A05C:
	// lwz r3,700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220a084
	if (ctx.cr6.eq) goto loc_8220A084;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220A084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220A084:
	// stw r28,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r28.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x823c31a0
	ctx.lr = 0x8220A090;
	sub_823C31A0(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x823c3048
	ctx.lr = 0x8220A098;
	sub_823C3048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x8220A0A0;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x8220A0A8;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x8220A0B0;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8220A0B8"))) PPC_WEAK_FUNC(sub_8220A0B8);
PPC_FUNC_IMPL(__imp__sub_8220A0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8209eda0
	ctx.lr = 0x8220A0D0;
	sub_8209EDA0(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8220a16c
	if (ctx.cr6.lt) goto loc_8220A16C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bgt cr6,0x8220a16c
	if (ctx.cr6.gt) goto loc_8220A16C;
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x82164c98
	ctx.lr = 0x8220A0EC;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220a16c
	if (ctx.cr6.eq) goto loc_8220A16C;
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220A108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220a16c
	if (ctx.cr6.eq) goto loc_8220A16C;
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220A124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x8220a158
	if (ctx.cr6.eq) goto loc_8220A158;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220A144;
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
loc_8220A158:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220A164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220a180
	if (ctx.cr6.eq) goto loc_8220A180;
loc_8220A16C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220A180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220A180:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220A194"))) PPC_WEAK_FUNC(sub_8220A194);
PPC_FUNC_IMPL(__imp__sub_8220A194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A198"))) PPC_WEAK_FUNC(sub_8220A198);
PPC_FUNC_IMPL(__imp__sub_8220A198) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3c60
	sub_823C3C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220A19C"))) PPC_WEAK_FUNC(sub_8220A19C);
PPC_FUNC_IMPL(__imp__sub_8220A19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A1A0"))) PPC_WEAK_FUNC(sub_8220A1A0);
PPC_FUNC_IMPL(__imp__sub_8220A1A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x8220a1b0
	sub_8220A1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220A1A8"))) PPC_WEAK_FUNC(sub_8220A1A8);
PPC_FUNC_IMPL(__imp__sub_8220A1A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x8220a1b0
	sub_8220A1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220A1B0"))) PPC_WEAK_FUNC(sub_8220A1B0);
PPC_FUNC_IMPL(__imp__sub_8220A1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8220a000
	ctx.lr = 0x8220A1D0;
	sub_8220A000(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a1ec
	if (ctx.cr6.eq) goto loc_8220A1EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8220A1E8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220A1EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220A204"))) PPC_WEAK_FUNC(sub_8220A204);
PPC_FUNC_IMPL(__imp__sub_8220A204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A208"))) PPC_WEAK_FUNC(sub_8220A208);
PPC_FUNC_IMPL(__imp__sub_8220A208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8220A210;
	sub_82248768(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x823c3280
	ctx.lr = 0x8220A234;
	sub_823C3280(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x8220A240;
	sub_8218B408(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x8220A24C;
	sub_8218B408(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lfs f31,11300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// addi r20,r11,-5624
	ctx.r20.s64 = ctx.r11.s64 + -5624;
loc_8220A268:
	// lwz r10,56(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// addi r9,r27,164
	ctx.r9.s64 = ctx.r27.s64 + 164;
	// rlwinm r11,r27,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r8,r10,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r10.s64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r30,r11,r20
	ctx.r30.u64 = ctx.r11.u64 + ctx.r20.u64;
	// rlwinm r29,r6,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwzx r26,r7,r22
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r22.u32);
	// bl 0x82164c98
	ctx.lr = 0x8220A294;
	sub_82164C98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 7, ctx.xer);
	// beq cr6,0x8220a4dc
	if (ctx.cr6.eq) goto loc_8220A4DC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82163e58
	ctx.lr = 0x8220A2A8;
	sub_82163E58(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8220a2c4
	if (ctx.cr6.lt) goto loc_8220A2C4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r29.u32);
loc_8220A2C4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8220a2e8
	if (ctx.cr6.lt) goto loc_8220A2E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r9,r29
	ctx.r9.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r7,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r7.u32);
loc_8220A2E8:
	// extsw r11,r21
	ctx.r11.s64 = ctx.r21.s32;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f11,204(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f11,208(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// beq cr6,0x8220a3dc
	if (ctx.cr6.eq) goto loc_8220A3DC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r3,30
	ctx.r9.s64 = ctx.r3.s64 + 30;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r23.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f6,104(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// b 0x8220a46c
	goto loc_8220A46C;
loc_8220A3DC:
	// li r5,310
	ctx.r5.s64 = 310;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x8220A3EC;
	sub_82106F58(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f10,120(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f6,128(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
loc_8220A46C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8220a490
	if (ctx.cr6.lt) goto loc_8220A490;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r9,r26
	ctx.r9.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r7,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r7.u32);
loc_8220A490:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8220a4b4
	if (ctx.cr6.lt) goto loc_8220A4B4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r9,r26
	ctx.r9.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r7,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r7.u32);
loc_8220A4B4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r23.u32);
	// b 0x8220a5ac
	goto loc_8220A5AC;
loc_8220A4DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8220a4f8
	if (ctx.cr6.lt) goto loc_8220A4F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r29.u32);
loc_8220A4F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8220a51c
	if (ctx.cr6.lt) goto loc_8220A51C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r9,r29
	ctx.r9.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r7,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r7.u32);
loc_8220A51C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bne cr6,0x8220a52c
	if (!ctx.cr6.eq) goto loc_8220A52C;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_8220A52C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f6,152(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
loc_8220A5AC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 8, ctx.xer);
	// blt cr6,0x8220a268
	if (ctx.cr6.lt) goto loc_8220A268;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8220A5C4"))) PPC_WEAK_FUNC(sub_8220A5C4);
PPC_FUNC_IMPL(__imp__sub_8220A5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220A5C8"))) PPC_WEAK_FUNC(sub_8220A5C8);
PPC_FUNC_IMPL(__imp__sub_8220A5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8220A5D0;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x823c3280
	ctx.lr = 0x8220A5F4;
	sub_823C3280(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x8220A600;
	sub_8218B408(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x8220A60C;
	sub_8218B408(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,300(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// bl 0x82164c98
	ctx.lr = 0x8220A618;
	sub_82164C98(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lfs f31,11300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8220a6e0
	if (ctx.cr6.eq) goto loc_8220A6E0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r5,r8,23500
	ctx.r5.u64 = ctx.r8.u64 | 23500;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// ori r6,r10,23496
	ctx.r6.u64 = ctx.r10.u64 | 23496;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// ori r3,r4,23504
	ctx.r3.u64 = ctx.r4.u64 | 23504;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r9,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r11,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r8,r3
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// lwz r3,300(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// bl 0x82163e58
	ctx.lr = 0x8220A6B4;
	sub_82163E58(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r5,23512
	ctx.r10.u64 = ctx.r5.u64 | 23512;
	// ori r9,r4,23532
	ctx.r9.u64 = ctx.r4.u64 | 23532;
	// addi r8,r3,30
	ctx.r8.s64 = ctx.r3.s64 + 30;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r7,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x8220a724
	goto loc_8220A724;
loc_8220A6E0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r7,r11,23496
	ctx.r7.u64 = ctx.r11.u64 | 23496;
	// ori r3,r8,23500
	ctx.r3.u64 = ctx.r8.u64 | 23500;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// li r5,310
	ctx.r5.s64 = 310;
	// lfs f0,31104(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31104);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r6,23504
	ctx.r11.u64 = ctx.r6.u64 | 23504;
	// stfsx f0,r10,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfsx f0,r10,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// li r4,603
	ctx.r4.s64 = 603;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x8220A724;
	sub_82106F58(ctx, base);
loc_8220A724:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r5,688(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	// ori r3,r9,23748
	ctx.r3.u64 = ctx.r9.u64 | 23748;
	// ori r11,r6,24516
	ctx.r11.u64 = ctx.r6.u64 | 24516;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stwx r4,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r4.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r3,r9,24520
	ctx.r3.u64 = ctx.r9.u64 | 24520;
	// stwx r7,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r6,24524
	ctx.r9.u64 = ctx.r6.u64 | 24524;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r8,r11,24528
	ctx.r8.u64 = ctx.r11.u64 | 24528;
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f0,r10,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfsx f0,r7,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, temp.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfsx f0,r6,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x8220a7b4
	if (!ctx.cr6.eq) goto loc_8220A7B4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8220A7B4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ori r5,r9,25288
	ctx.r5.u64 = ctx.r9.u64 | 25288;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// ori r4,r7,25292
	ctx.r4.u64 = ctx.r7.u64 | 25292;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r3,25296
	ctx.r9.u64 = ctx.r3.u64 | 25296;
	// ori r6,r10,24004
	ctx.r6.u64 = ctx.r10.u64 | 24004;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r10,r7,24772
	ctx.r10.u64 = ctx.r7.u64 | 24772;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r3,r3,24776
	ctx.r3.u64 = ctx.r3.u64 | 24776;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfsx f10,r8,r5
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// ori r7,r7,24780
	ctx.r7.u64 = ctx.r7.u64 | 24780;
	// ori r5,r29,24784
	ctx.r5.u64 = ctx.r29.u64 | 24784;
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfsx f6,r8,r4
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfsx f2,r8,r9
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r4,692(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwinm r4,r8,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// stwx r4,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r4.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfsx f0,r6,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, temp.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfsx f0,r4,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfsx f0,r3,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, temp.u32);
	// bne cr6,0x8220a8b4
	if (!ctx.cr6.eq) goto loc_8220A8B4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8220A8B4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ori r5,r9,25544
	ctx.r5.u64 = ctx.r9.u64 | 25544;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// ori r4,r7,25548
	ctx.r4.u64 = ctx.r7.u64 | 25548;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r3,25552
	ctx.r9.u64 = ctx.r3.u64 | 25552;
	// ori r7,r10,24260
	ctx.r7.u64 = ctx.r10.u64 | 24260;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r10,r6,25028
	ctx.r10.u64 = ctx.r6.u64 | 25028;
	// ori r6,r3,25032
	ctx.r6.u64 = ctx.r3.u64 | 25032;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// ori r3,r3,25036
	ctx.r3.u64 = ctx.r3.u64 | 25036;
	// ori r29,r29,25040
	ctx.r29.u64 = ctx.r29.u64 | 25040;
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfsx f10,r8,r5
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfsx f6,r5,r4
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfsx f2,r4,r9
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, temp.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,696(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stwx r8,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfsx f0,r5,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfsx f0,r4,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfsx f0,r3,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r29.u32, temp.u32);
	// bne cr6,0x8220a9b4
	if (!ctx.cr6.eq) goto loc_8220A9B4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8220A9B4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ori r5,r9,25800
	ctx.r5.u64 = ctx.r9.u64 | 25800;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// ori r4,r7,25804
	ctx.r4.u64 = ctx.r7.u64 | 25804;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r10,r3,25808
	ctx.r10.u64 = ctx.r3.u64 | 25808;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r8,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r7,r4
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r6,r10
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8220AA44"))) PPC_WEAK_FUNC(sub_8220AA44);
PPC_FUNC_IMPL(__imp__sub_8220AA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220AA48"))) PPC_WEAK_FUNC(sub_8220AA48);
PPC_FUNC_IMPL(__imp__sub_8220AA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8220AA50;
	sub_82248778(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821ebb58
	ctx.lr = 0x8220AA68;
	sub_821EBB58(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8220af98
	if (ctx.cr6.gt) goto loc_8220AF98;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220ab50
	// bdzf 4*cr6+eq,0x8220acd8
	// bdzf 4*cr6+eq,0x8220aed8
	// bne cr6,0x8220aeec
	if (!ctx.cr6.eq) goto loc_8220AEEC;
	// addi r11,r31,852
	ctx.r11.s64 = ctx.r31.s64 + 852;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,30223
	ctx.r9.s64 = 30223;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r4,30224
	ctx.r4.s64 = 30224;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8220AAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r3.u32);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,30225
	ctx.r4.s64 = 30225;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220AAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r31,836
	ctx.r9.s64 = ctx.r31.s64 + 836;
	// stw r3,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r3.u32);
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x82163e58
	ctx.lr = 0x8220AB00;
	sub_82163E58(ctx, base);
	// addi r5,r3,30
	ctx.r5.s64 = ctx.r3.s64 + 30;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,708
	ctx.r3.s64 = ctx.r31.s64 + 708;
	// bl 0x8218a128
	ctx.lr = 0x8220AB10;
	sub_8218A128(ctx, base);
	// addi r11,r31,860
	ctx.r11.s64 = ctx.r31.s64 + 860;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82163df0
	ctx.lr = 0x8220AB1C;
	sub_82163DF0(ctx, base);
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// neg r7,r8
	ctx.r7.s64 = -ctx.r8.s64;
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// stw r5,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r5.u32);
	// bl 0x82163df0
	ctx.lr = 0x8220AB34;
	sub_82163DF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82165b50
	ctx.lr = 0x8220AB3C;
	sub_82165B50(ctx, base);
	// lhz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r11,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// b 0x8220af7c
	goto loc_8220AF7C;
loc_8220AB50:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r31,872
	ctx.r11.s64 = ctx.r31.s64 + 872;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r24,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r24.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8220AB6C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8220ab6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220AB6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r24,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r24.u32);
	// li r10,30226
	ctx.r10.s64 = 30226;
	// stw r24,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r24.u32);
	// addi r9,r31,836
	ctx.r9.s64 = ctx.r31.s64 + 836;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x82163e58
	ctx.lr = 0x8220ABA4;
	sub_82163E58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r5,r3,30
	ctx.r5.s64 = ctx.r3.s64 + 30;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,708
	ctx.r3.s64 = ctx.r31.s64 + 708;
	// bl 0x8218a128
	ctx.lr = 0x8220ABB8;
	sub_8218A128(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x8220ABBC;
	sub_82163DF0(ctx, base);
	// lwz r28,92(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82164280
	ctx.lr = 0x8220ABD0;
	sub_82164280(ctx, base);
	// stw r3,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r3.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8220aca4
	if (!ctx.cr6.lt) goto loc_8220ACA4;
	// addi r26,r31,876
	ctx.r26.s64 = ctx.r31.s64 + 876;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r26,-4
	ctx.r29.s64 = ctx.r26.s64 + -4;
loc_8220ABE8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82164138
	ctx.lr = 0x8220ABF8;
	sub_82164138(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x8220abe8
	if (ctx.cr6.lt) goto loc_8220ABE8;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r24,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r24.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8220aca4
	if (!ctx.cr6.gt) goto loc_8220ACA4;
loc_8220AC18:
	// addi r11,r29,218
	ctx.r11.s64 = ctx.r29.s64 + 218;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8220ac64
	if (!ctx.cr6.gt) goto loc_8220AC64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821641b0
	ctx.lr = 0x8220AC40;
	sub_821641B0(ctx, base);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x8220aca4
	if (ctx.cr6.gt) goto loc_8220ACA4;
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// subf r28,r3,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r3.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r11.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8220AC64:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x8220ac9c
	if (ctx.cr6.lt) goto loc_8220AC9C;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8220AC7C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8220ac9c
	if (ctx.cr6.gt) goto loc_8220AC9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8220ac7c
	if (ctx.cr6.lt) goto loc_8220AC7C;
	// b 0x8220aca4
	goto loc_8220ACA4;
loc_8220AC9C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x8220ac18
	if (ctx.cr6.gt) goto loc_8220AC18;
loc_8220ACA4:
	// lwz r11,868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,740
	ctx.r3.s64 = ctx.r31.s64 + 740;
	// bl 0x82084038
	ctx.lr = 0x8220ACC0;
	sub_82084038(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x8220ACC4;
	sub_82163DF0(ctx, base);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r9,868(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// b 0x8220af68
	goto loc_8220AF68;
loc_8220ACD8:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r31,872
	ctx.r11.s64 = ctx.r31.s64 + 872;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r24,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r24.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8220ACF4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8220acf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220ACF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r24,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r24.u32);
	// li r10,30227
	ctx.r10.s64 = 30227;
	// stw r24,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r24.u32);
	// addi r9,r31,836
	ctx.r9.s64 = ctx.r31.s64 + 836;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82163df0
	ctx.lr = 0x8220AD28;
	sub_82163DF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x82163e58
	ctx.lr = 0x8220AD34;
	sub_82163E58(ctx, base);
	// addi r25,r31,876
	ctx.r25.s64 = ctx.r31.s64 + 876;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r25,-4
	ctx.r29.s64 = ctx.r25.s64 + -4;
loc_8220AD44:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82164138
	ctx.lr = 0x8220AD54;
	sub_82164138(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x8220ad44
	if (ctx.cr6.lt) goto loc_8220AD44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// bl 0x821650f8
	ctx.lr = 0x8220AD74;
	sub_821650F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8220ad8c
	if (ctx.cr6.eq) goto loc_8220AD8C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82165128
	ctx.lr = 0x8220AD88;
	sub_82165128(ctx, base);
	// lhz r27,2(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
loc_8220AD8C:
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r27,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r27.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8220ae48
	if (ctx.cr6.eq) goto loc_8220AE48;
loc_8220AD9C:
	// addi r11,r29,218
	ctx.r11.s64 = ctx.r29.s64 + 218;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8220ae08
	if (!ctx.cr6.gt) goto loc_8220AE08;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82164350
	ctx.lr = 0x8220ADC8;
	sub_82164350(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8220addc
	if (!ctx.cr0.lt) goto loc_8220ADDC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8220ade8
	goto loc_8220ADE8;
loc_8220ADDC:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// ble cr6,0x8220ade8
	if (!ctx.cr6.gt) goto loc_8220ADE8;
	// li r11,100
	ctx.r11.s64 = 100;
loc_8220ADE8:
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,9999
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9999, ctx.xer);
	// ble cr6,0x8220ae00
	if (!ctx.cr6.gt) goto loc_8220AE00;
	// li r11,9999
	ctx.r11.s64 = 9999;
loc_8220AE00:
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
loc_8220AE08:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x8220ae40
	if (ctx.cr6.lt) goto loc_8220AE40;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8220AE20:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8220ae40
	if (ctx.cr6.gt) goto loc_8220AE40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8220ae20
	if (ctx.cr6.lt) goto loc_8220AE20;
	// b 0x8220ae48
	goto loc_8220AE48;
loc_8220AE40:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8220ad9c
	if (!ctx.cr6.eq) goto loc_8220AD9C;
loc_8220AE48:
	// stw r27,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r27.u32);
	// addi r5,r26,30
	ctx.r5.s64 = ctx.r26.s64 + 30;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,708
	ctx.r3.s64 = ctx.r31.s64 + 708;
	// bl 0x8218a128
	ctx.lr = 0x8220AE5C;
	sub_8218A128(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r3,-4904(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4904);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lwz r9,1648(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1648);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lhz r5,12(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 12);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// bctrl 
	ctx.lr = 0x8220AE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r4,3708
	ctx.r5.s64 = ctx.r4.s64 + 3708;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,740
	ctx.r3.s64 = ctx.r31.s64 + 740;
	// bl 0x8218a5f0
	ctx.lr = 0x8220AEA4;
	sub_8218A5F0(ctx, base);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r6,904(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// addi r30,r3,26232
	ctx.r30.s64 = ctx.r3.s64 + 26232;
	// addi r3,r31,772
	ctx.r3.s64 = ctx.r31.s64 + 772;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8220AEC0;
	sub_8218A5F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r6,908(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// addi r3,r31,804
	ctx.r3.s64 = ctx.r31.s64 + 804;
	// bl 0x8218a5f0
	ctx.lr = 0x8220AED4;
	sub_8218A5F0(ctx, base);
	// b 0x8220af7c
	goto loc_8220AF7C;
loc_8220AED8:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,30546
	ctx.r10.s64 = 30546;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x8220af7c
	goto loc_8220AF7C;
loc_8220AEEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,30521
	ctx.r9.s64 = 30521;
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r31,836
	ctx.r7.s64 = ctx.r31.s64 + 836;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// bl 0x82163e58
	ctx.lr = 0x8220AF1C;
	sub_82163E58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r3,30
	ctx.r5.s64 = ctx.r3.s64 + 30;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,708
	ctx.r3.s64 = ctx.r31.s64 + 708;
	// bl 0x8218a128
	ctx.lr = 0x8220AF30;
	sub_8218A128(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x8220AF34;
	sub_82163DF0(ctx, base);
	// lwz r29,92(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821658a0
	ctx.lr = 0x8220AF40;
	sub_821658A0(ctx, base);
	// stw r3,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r3.u32);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,740
	ctx.r3.s64 = ctx.r31.s64 + 740;
	// bl 0x82084038
	ctx.lr = 0x8220AF5C;
	sub_82084038(ctx, base);
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
loc_8220AF68:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,772
	ctx.r3.s64 = ctx.r31.s64 + 772;
	// bl 0x82084038
	ctx.lr = 0x8220AF7C;
	sub_82084038(ctx, base);
loc_8220AF7C:
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
	ctx.lr = 0x8220AF98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220AF98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8220AFA0"))) PPC_WEAK_FUNC(sub_8220AFA0);
PPC_FUNC_IMPL(__imp__sub_8220AFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8220AFB8;
	sub_823C3C70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// bl 0x823c3410
	ctx.lr = 0x8220AFC8;
	sub_823C3410(ctx, base);
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x82164c98
	ctx.lr = 0x8220AFD0;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220aff0
	if (ctx.cr6.eq) goto loc_8220AFF0;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// addi r3,r11,228
	ctx.r3.s64 = ctx.r11.s64 + 228;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220AFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220AFF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B004"))) PPC_WEAK_FUNC(sub_8220B004);
PPC_FUNC_IMPL(__imp__sub_8220B004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B008"))) PPC_WEAK_FUNC(sub_8220B008);
PPC_FUNC_IMPL(__imp__sub_8220B008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8220B020;
	sub_823C3C98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220B03C;
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

__attribute__((alias("__imp__sub_8220B050"))) PPC_WEAK_FUNC(sub_8220B050);
PPC_FUNC_IMPL(__imp__sub_8220B050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8220B068;
	sub_823C3CA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220B084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x823c3468
	ctx.lr = 0x8220B08C;
	sub_823C3468(ctx, base);
	// lwz r8,704(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x8220b0b0
	if (!ctx.cr6.eq) goto loc_8220B0B0;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// addi r3,r11,228
	ctx.r3.s64 = ctx.r11.s64 + 228;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220B0B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220B0B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B0C4"))) PPC_WEAK_FUNC(sub_8220B0C4);
PPC_FUNC_IMPL(__imp__sub_8220B0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B0C8"))) PPC_WEAK_FUNC(sub_8220B0C8);
PPC_FUNC_IMPL(__imp__sub_8220B0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8220B0E0;
	sub_823C3CD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220B0FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x823c3468
	ctx.lr = 0x8220B104;
	sub_823C3468(ctx, base);
	// lwz r8,704(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x8220b128
	if (!ctx.cr6.eq) goto loc_8220B128;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// addi r3,r11,228
	ctx.r3.s64 = ctx.r11.s64 + 228;
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220B128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220B128:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B13C"))) PPC_WEAK_FUNC(sub_8220B13C);
PPC_FUNC_IMPL(__imp__sub_8220B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B140"))) PPC_WEAK_FUNC(sub_8220B140);
PPC_FUNC_IMPL(__imp__sub_8220B140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8220B158;
	sub_823C3D08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220B174;
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

__attribute__((alias("__imp__sub_8220B188"))) PPC_WEAK_FUNC(sub_8220B188);
PPC_FUNC_IMPL(__imp__sub_8220B188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8209eda0
	ctx.lr = 0x8220B1A0;
	sub_8209EDA0(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220b1c0
	if (ctx.cr6.eq) goto loc_8220B1C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220B1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220B1C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B1D4"))) PPC_WEAK_FUNC(sub_8220B1D4);
PPC_FUNC_IMPL(__imp__sub_8220B1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B1D8"))) PPC_WEAK_FUNC(sub_8220B1D8);
PPC_FUNC_IMPL(__imp__sub_8220B1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8209eda0
	ctx.lr = 0x8220B1F0;
	sub_8209EDA0(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220b210
	if (ctx.cr6.eq) goto loc_8220B210;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220B210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220B210:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B224"))) PPC_WEAK_FUNC(sub_8220B224);
PPC_FUNC_IMPL(__imp__sub_8220B224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B228"))) PPC_WEAK_FUNC(sub_8220B228);
PPC_FUNC_IMPL(__imp__sub_8220B228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220b2fc
	if (ctx.cr6.lt) goto loc_8220B2FC;
	// bne cr6,0x8220b3d8
	if (!ctx.cr6.eq) goto loc_8220B3D8;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8220b278
	if (!ctx.cr6.eq) goto loc_8220B278;
	// lwz r10,-28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8220b3d4
	goto loc_8220B3D4;
loc_8220B278:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8220b2cc
	if (ctx.cr6.lt) goto loc_8220B2CC;
	// beq cr6,0x8220b2ac
	if (ctx.cr6.eq) goto loc_8220B2AC;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x8220b3d8
	if (!ctx.cr6.lt) goto loc_8220B3D8;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8220aa48
	ctx.lr = 0x8220B298;
	sub_8220AA48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8220B2AC:
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8220aa48
	ctx.lr = 0x8220B2B8;
	sub_8220AA48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8220B2CC:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x82164c98
	ctx.lr = 0x8220B2D4;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8220b2e4
	if (ctx.cr6.eq) goto loc_8220B2E4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8220B2E4:
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8220b3d4
	goto loc_8220B3D4;
loc_8220B2FC:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8220b3d8
	if (ctx.cr6.gt) goto loc_8220B3D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220b32c
	// bdzf 4*cr6+eq,0x8220b39c
	// bdzf 4*cr6+eq,0x8220b39c
	// bdzf 4*cr6+eq,0x8220b39c
	// bdzf 4*cr6+eq,0x8220b39c
	// bne cr6,0x8220b39c
	if (!ctx.cr6.eq) goto loc_8220B39C;
loc_8220B32C:
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x8220b380
	if (ctx.cr6.eq) goto loc_8220B380;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x82164c98
	ctx.lr = 0x8220B33C;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// beq cr6,0x8220b368
	if (ctx.cr6.eq) goto loc_8220B368;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// stw r10,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r10.u32);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x8220b3d4
	goto loc_8220B3D4;
loc_8220B368:
	// lwz r10,-28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8220b3d4
	goto loc_8220B3D4;
loc_8220B380:
	// lwz r10,-28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8220b3d4
	goto loc_8220B3D4;
loc_8220B39C:
	// bl 0x82164c98
	ctx.lr = 0x8220B3A0;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220b3d8
	if (ctx.cr6.eq) goto loc_8220B3D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220B3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8220B3D4:
	// bctrl 
	ctx.lr = 0x8220B3D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220B3D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B3EC"))) PPC_WEAK_FUNC(sub_8220B3EC);
PPC_FUNC_IMPL(__imp__sub_8220B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B3F0"))) PPC_WEAK_FUNC(sub_8220B3F0);
PPC_FUNC_IMPL(__imp__sub_8220B3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220b450
	if (ctx.cr6.lt) goto loc_8220B450;
	// bne cr6,0x8220b4d4
	if (!ctx.cr6.eq) goto loc_8220B4D4;
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// lwz r10,-28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8220b43c
	if (!ctx.cr6.eq) goto loc_8220B43C;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8220b4d0
	goto loc_8220B4D0;
loc_8220B43C:
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8220b4d0
	goto loc_8220B4D0;
loc_8220B450:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8220b4d4
	if (ctx.cr6.gt) goto loc_8220B4D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220b480
	// bdzf 4*cr6+eq,0x8220b49c
	// bdzf 4*cr6+eq,0x8220b49c
	// bdzf 4*cr6+eq,0x8220b49c
	// bdzf 4*cr6+eq,0x8220b49c
	// bne cr6,0x8220b49c
	if (!ctx.cr6.eq) goto loc_8220B49C;
loc_8220B480:
	// lwz r10,-28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8220b4d0
	goto loc_8220B4D0;
loc_8220B49C:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8220B4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8220B4D0:
	// bctrl 
	ctx.lr = 0x8220B4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220B4D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B4E8"))) PPC_WEAK_FUNC(sub_8220B4E8);
PPC_FUNC_IMPL(__imp__sub_8220B4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
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

__attribute__((alias("__imp__sub_8220B4FC"))) PPC_WEAK_FUNC(sub_8220B4FC);
PPC_FUNC_IMPL(__imp__sub_8220B4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B500"))) PPC_WEAK_FUNC(sub_8220B500);
PPC_FUNC_IMPL(__imp__sub_8220B500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220b530
	if (ctx.cr6.lt) goto loc_8220B530;
	// bne cr6,0x8220b548
	if (!ctx.cr6.eq) goto loc_8220B548;
	// addi r11,r10,165
	ctx.r11.s64 = ctx.r10.s64 + 165;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8220b548
	if (!ctx.cr6.eq) goto loc_8220B548;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8220B530:
	// addi r11,r10,157
	ctx.r11.s64 = ctx.r10.s64 + 157;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8220B548:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B550"))) PPC_WEAK_FUNC(sub_8220B550);
PPC_FUNC_IMPL(__imp__sub_8220B550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8220B558;
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
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
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
	// beq cr6,0x8220b630
	if (ctx.cr6.eq) goto loc_8220B630;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x8220B590;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x8220B5A0;
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
	ctx.lr = 0x8220B5B4;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8220B5C0;
	sub_821AD498(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r10,-792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// blt cr6,0x8220b5f8
	if (ctx.cr6.lt) goto loc_8220B5F8;
	// bne cr6,0x8220b618
	if (!ctx.cr6.eq) goto loc_8220B618;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8220b618
	if (ctx.cr6.eq) goto loc_8220B618;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r4,393
	ctx.r4.s64 = 393;
	// ori r9,r11,56724
	ctx.r9.u64 = ctx.r11.u64 | 56724;
	// b 0x8220b604
	goto loc_8220B604;
loc_8220B5F8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r4,392
	ctx.r4.s64 = 392;
	// ori r9,r11,56580
	ctx.r9.u64 = ctx.r11.u64 | 56580;
loc_8220B604:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stfsx f31,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// bl 0x8210a9b0
	ctx.lr = 0x8220B618;
	sub_8210A9B0(ctx, base);
loc_8220B618:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x8220B624;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8220B630;
	sub_821AD498(ctx, base);
loc_8220B630:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8220B63C"))) PPC_WEAK_FUNC(sub_8220B63C);
PPC_FUNC_IMPL(__imp__sub_8220B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B640"))) PPC_WEAK_FUNC(sub_8220B640);
PPC_FUNC_IMPL(__imp__sub_8220B640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8220B648;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r7,r10,-4960
	ctx.r7.s64 = ctx.r10.s64 + -4960;
	// addi r6,r9,-4972
	ctx.r6.s64 = ctx.r9.s64 + -4972;
	// addi r8,r11,-4872
	ctx.r8.s64 = ctx.r11.s64 + -4872;
	// stw r7,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r7.u32);
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r26,r10,45020
	ctx.r26.u64 = ctx.r10.u64 | 45020;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r9,r4,27100
	ctx.r9.u64 = ctx.r4.u64 | 27100;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r3,39900
	ctx.r7.u64 = ctx.r3.u64 | 39900;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r4,r8,40924
	ctx.r4.u64 = ctx.r8.u64 | 40924;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r8,r6,41948
	ctx.r8.u64 = ctx.r6.u64 | 41948;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r3,r3,42972
	ctx.r3.u64 = ctx.r3.u64 | 42972;
	// ori r6,r6,43996
	ctx.r6.u64 = ctx.r6.u64 | 43996;
	// lis r30,2
	ctx.r30.s64 = 131072;
	// addi r28,r31,228
	ctx.r28.s64 = ctx.r31.s64 + 228;
	// ori r25,r30,46044
	ctx.r25.u64 = ctx.r30.u64 | 46044;
	// addi r27,r31,256
	ctx.r27.s64 = ctx.r31.s64 + 256;
	// lwz r10,-792(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -792);
	// addi r30,r31,15104
	ctx.r30.s64 = ctx.r31.s64 + 15104;
	// li r29,41
	ctx.r29.s64 = 41;
	// lwz r5,52(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r8,r26
	PPC_STORE_U32(ctx.r8.u32 + ctx.r26.u32, ctx.r11.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r11,r7,r25
	PPC_STORE_U32(ctx.r7.u32 + ctx.r25.u32, ctx.r11.u32);
loc_8220B714:
	// addi r30,r30,-336
	ctx.r30.s64 = ctx.r30.s64 + -336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1dc0
	ctx.lr = 0x8220B720;
	sub_821B1DC0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8220b714
	if (!ctx.cr0.lt) goto loc_8220B714;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x823c3048
	ctx.lr = 0x8220B730;
	sub_823C3048(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82185a50
	ctx.lr = 0x8220B738;
	sub_82185A50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x8220B740;
	sub_823C3BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c52a0
	ctx.lr = 0x8220B748;
	sub_823C52A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8220B750"))) PPC_WEAK_FUNC(sub_8220B750);
PPC_FUNC_IMPL(__imp__sub_8220B750) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x8220bd28
	sub_8220BD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B758"))) PPC_WEAK_FUNC(sub_8220B758);
PPC_FUNC_IMPL(__imp__sub_8220B758) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-228
	ctx.r3.s64 = ctx.r3.s64 + -228;
	// b 0x8220bd28
	sub_8220BD28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220B760"))) PPC_WEAK_FUNC(sub_8220B760);
PPC_FUNC_IMPL(__imp__sub_8220B760) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8220b984
	if (ctx.cr6.gt) goto loc_8220B984;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220b7d4
	// bdzf 4*cr6+eq,0x8220b81c
	// bdzf 4*cr6+eq,0x8220b864
	// bdzf 4*cr6+eq,0x8220b8ac
	// bdzf 4*cr6+eq,0x8220b8f4
	// bne cr6,0x8220b93c
	if (!ctx.cr6.eq) goto loc_8220B93C;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x8220b984
	if (ctx.cr6.gt) goto loc_8220B984;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220b7b4
	// bdzf 4*cr6+eq,0x8220b7bc
	// bdzf 4*cr6+eq,0x8220b7c4
	// bne cr6,0x8220b7cc
	if (!ctx.cr6.eq) goto loc_8220B7CC;
	// addi r3,r3,992
	ctx.r3.s64 = ctx.r3.s64 + 992;
	// blr 
	return;
loc_8220B7B4:
	// addi r3,r3,1328
	ctx.r3.s64 = ctx.r3.s64 + 1328;
	// blr 
	return;
loc_8220B7BC:
	// addi r3,r3,1664
	ctx.r3.s64 = ctx.r3.s64 + 1664;
	// blr 
	return;
loc_8220B7C4:
	// addi r3,r3,2000
	ctx.r3.s64 = ctx.r3.s64 + 2000;
	// blr 
	return;
loc_8220B7CC:
	// addi r3,r3,2336
	ctx.r3.s64 = ctx.r3.s64 + 2336;
	// blr 
	return;
loc_8220B7D4:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x8220b984
	if (ctx.cr6.gt) goto loc_8220B984;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220b7fc
	// bdzf 4*cr6+eq,0x8220b804
	// bdzf 4*cr6+eq,0x8220b80c
	// bne cr6,0x8220b814
	if (!ctx.cr6.eq) goto loc_8220B814;
	// addi r3,r3,2672
	ctx.r3.s64 = ctx.r3.s64 + 2672;
	// blr 
	return;
loc_8220B7FC:
	// addi r3,r3,3008
	ctx.r3.s64 = ctx.r3.s64 + 3008;
	// blr 
	return;
loc_8220B804:
	// addi r3,r3,3344
	ctx.r3.s64 = ctx.r3.s64 + 3344;
	// blr 
	return;
loc_8220B80C:
	// addi r3,r3,3680
	ctx.r3.s64 = ctx.r3.s64 + 3680;
	// blr 
	return;
loc_8220B814:
	// addi r3,r3,4016
	ctx.r3.s64 = ctx.r3.s64 + 4016;
	// blr 
	return;
loc_8220B81C:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x8220b984
	if (ctx.cr6.gt) goto loc_8220B984;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220b844
	// bdzf 4*cr6+eq,0x8220b84c
	// bdzf 4*cr6+eq,0x8220b854
	// bne cr6,0x8220b85c
	if (!ctx.cr6.eq) goto loc_8220B85C;
	// addi r3,r3,4352
	ctx.r3.s64 = ctx.r3.s64 + 4352;
	// blr 
	return;
loc_8220B844:
	// addi r3,r3,4688
	ctx.r3.s64 = ctx.r3.s64 + 4688;
	// blr 
	return;
loc_8220B84C:
	// addi r3,r3,5024
	ctx.r3.s64 = ctx.r3.s64 + 5024;
	// blr 
	return;
loc_8220B854:
	// addi r3,r3,5360
	ctx.r3.s64 = ctx.r3.s64 + 5360;
	// blr 
	return;
loc_8220B85C:
	// addi r3,r3,5696
	ctx.r3.s64 = ctx.r3.s64 + 5696;
	// blr 
	return;
loc_8220B864:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x8220b984
	if (ctx.cr6.gt) goto loc_8220B984;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220b88c
	// bdzf 4*cr6+eq,0x8220b894
	// bdzf 4*cr6+eq,0x8220b89c
	// bne cr6,0x8220b8a4
	if (!ctx.cr6.eq) goto loc_8220B8A4;
	// addi r3,r3,6032
	ctx.r3.s64 = ctx.r3.s64 + 6032;
	// blr 
	return;
loc_8220B88C:
	// addi r3,r3,6368
	ctx.r3.s64 = ctx.r3.s64 + 6368;
	// blr 
	return;
loc_8220B894:
	// addi r3,r3,6704
	ctx.r3.s64 = ctx.r3.s64 + 6704;
	// blr 
	return;
loc_8220B89C:
	// addi r3,r3,7040
	ctx.r3.s64 = ctx.r3.s64 + 7040;
	// blr 
	return;
loc_8220B8A4:
	// addi r3,r3,7376
	ctx.r3.s64 = ctx.r3.s64 + 7376;
	// blr 
	return;
loc_8220B8AC:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x8220b984
	if (ctx.cr6.gt) goto loc_8220B984;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220b8d4
	// bdzf 4*cr6+eq,0x8220b8dc
	// bdzf 4*cr6+eq,0x8220b8e4
	// bne cr6,0x8220b8ec
	if (!ctx.cr6.eq) goto loc_8220B8EC;
	// addi r3,r3,7712
	ctx.r3.s64 = ctx.r3.s64 + 7712;
	// blr 
	return;
loc_8220B8D4:
	// addi r3,r3,8048
	ctx.r3.s64 = ctx.r3.s64 + 8048;
	// blr 
	return;
loc_8220B8DC:
	// addi r3,r3,8384
	ctx.r3.s64 = ctx.r3.s64 + 8384;
	// blr 
	return;
loc_8220B8E4:
	// addi r3,r3,8720
	ctx.r3.s64 = ctx.r3.s64 + 8720;
	// blr 
	return;
loc_8220B8EC:
	// addi r3,r3,9056
	ctx.r3.s64 = ctx.r3.s64 + 9056;
	// blr 
	return;
loc_8220B8F4:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x8220b984
	if (ctx.cr6.gt) goto loc_8220B984;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220b91c
	// bdzf 4*cr6+eq,0x8220b924
	// bdzf 4*cr6+eq,0x8220b92c
	// bne cr6,0x8220b934
	if (!ctx.cr6.eq) goto loc_8220B934;
	// addi r3,r3,9392
	ctx.r3.s64 = ctx.r3.s64 + 9392;
	// blr 
	return;
loc_8220B91C:
	// addi r3,r3,9728
	ctx.r3.s64 = ctx.r3.s64 + 9728;
	// blr 
	return;
loc_8220B924:
	// addi r3,r3,10064
	ctx.r3.s64 = ctx.r3.s64 + 10064;
	// blr 
	return;
loc_8220B92C:
	// addi r3,r3,10400
	ctx.r3.s64 = ctx.r3.s64 + 10400;
	// blr 
	return;
loc_8220B934:
	// addi r3,r3,10736
	ctx.r3.s64 = ctx.r3.s64 + 10736;
	// blr 
	return;
loc_8220B93C:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x8220b984
	if (ctx.cr6.gt) goto loc_8220B984;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220b964
	// bdzf 4*cr6+eq,0x8220b96c
	// bdzf 4*cr6+eq,0x8220b974
	// bne cr6,0x8220b97c
	if (!ctx.cr6.eq) goto loc_8220B97C;
	// addi r3,r3,11072
	ctx.r3.s64 = ctx.r3.s64 + 11072;
	// blr 
	return;
loc_8220B964:
	// addi r3,r3,11408
	ctx.r3.s64 = ctx.r3.s64 + 11408;
	// blr 
	return;
loc_8220B96C:
	// addi r3,r3,11744
	ctx.r3.s64 = ctx.r3.s64 + 11744;
	// blr 
	return;
loc_8220B974:
	// addi r3,r3,12080
	ctx.r3.s64 = ctx.r3.s64 + 12080;
	// blr 
	return;
loc_8220B97C:
	// addi r3,r3,12416
	ctx.r3.s64 = ctx.r3.s64 + 12416;
	// blr 
	return;
loc_8220B984:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220B98C"))) PPC_WEAK_FUNC(sub_8220B98C);
PPC_FUNC_IMPL(__imp__sub_8220B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220B990"))) PPC_WEAK_FUNC(sub_8220B990);
PPC_FUNC_IMPL(__imp__sub_8220B990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8220B9A8;
	sub_823C3C98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,-228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -228);
	// addi r3,r31,-228
	ctx.r3.s64 = ctx.r31.s64 + -228;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220B9C4;
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

__attribute__((alias("__imp__sub_8220B9D8"))) PPC_WEAK_FUNC(sub_8220B9D8);
PPC_FUNC_IMPL(__imp__sub_8220B9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8220B9F0;
	sub_823C3D08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -228);
	// addi r3,r31,-228
	ctx.r3.s64 = ctx.r31.s64 + -228;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220BA0C;
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

__attribute__((alias("__imp__sub_8220BA20"))) PPC_WEAK_FUNC(sub_8220BA20);
PPC_FUNC_IMPL(__imp__sub_8220BA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8209eda0
	ctx.lr = 0x8220BA38;
	sub_8209EDA0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220ba58
	if (ctx.cr6.eq) goto loc_8220BA58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220BA58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220BA58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220BA6C"))) PPC_WEAK_FUNC(sub_8220BA6C);
PPC_FUNC_IMPL(__imp__sub_8220BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BA70"))) PPC_WEAK_FUNC(sub_8220BA70);
PPC_FUNC_IMPL(__imp__sub_8220BA70) {
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
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8220ba98
	if (!ctx.cr0.lt) goto loc_8220BA98;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// b 0x8220baa4
	goto loc_8220BAA4;
loc_8220BA98:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8220baa4
	if (ctx.cr6.lt) goto loc_8220BAA4;
	// addi r11,r10,-6
	ctx.r11.s64 = ctx.r10.s64 + -6;
loc_8220BAA4:
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8220bae4
	if (ctx.cr6.eq) goto loc_8220BAE4;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220bae4
	if (ctx.cr6.eq) goto loc_8220BAE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220bae4
	if (ctx.cr6.lt) goto loc_8220BAE4;
	// li r3,10004
	ctx.r3.s64 = 10004;
	// bl 0x8208f658
	ctx.lr = 0x8220BADC;
	sub_8208F658(ctx, base);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
loc_8220BAE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220BAF8"))) PPC_WEAK_FUNC(sub_8220BAF8);
PPC_FUNC_IMPL(__imp__sub_8220BAF8) {
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
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r11.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8220bb20
	if (!ctx.cr0.lt) goto loc_8220BB20;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// b 0x8220bb2c
	goto loc_8220BB2C;
loc_8220BB20:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8220bb2c
	if (ctx.cr6.lt) goto loc_8220BB2C;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_8220BB2C:
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8220bb6c
	if (ctx.cr6.eq) goto loc_8220BB6C;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220bb6c
	if (ctx.cr6.eq) goto loc_8220BB6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8220bb6c
	if (ctx.cr6.lt) goto loc_8220BB6C;
	// li r3,10004
	ctx.r3.s64 = 10004;
	// bl 0x8208f658
	ctx.lr = 0x8220BB64;
	sub_8208F658(ctx, base);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
loc_8220BB6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220BB80"))) PPC_WEAK_FUNC(sub_8220BB80);
PPC_FUNC_IMPL(__imp__sub_8220BB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220bbb0
	if (ctx.cr6.eq) goto loc_8220BBB0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,292(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8220bbb8
	if (!ctx.cr6.eq) goto loc_8220BBB8;
loc_8220BBB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8220BBB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220BBC0"))) PPC_WEAK_FUNC(sub_8220BBC0);
PPC_FUNC_IMPL(__imp__sub_8220BBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8220BBC8;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
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
	// beq cr6,0x8220bc70
	if (ctx.cr6.eq) goto loc_8220BC70;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x8220BBFC;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x8220BC0C;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x8220BC20;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8220BC2C;
	sub_821AD498(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r10,56868
	ctx.r9.u64 = ctx.r10.u64 | 56868;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,394
	ctx.r4.s64 = 394;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfsx f31,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// bl 0x8210a9b0
	ctx.lr = 0x8220BC58;
	sub_8210A9B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x8220BC64;
	sub_821AD600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8220BC70;
	sub_821AD498(ctx, base);
loc_8220BC70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8220BC7C"))) PPC_WEAK_FUNC(sub_8220BC7C);
PPC_FUNC_IMPL(__imp__sub_8220BC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BC80"))) PPC_WEAK_FUNC(sub_8220BC80);
PPC_FUNC_IMPL(__imp__sub_8220BC80) {
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
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8220bd14
	if (!ctx.cr6.eq) goto loc_8220BD14;
	// lwz r3,300(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// bl 0x82164c98
	ctx.lr = 0x8220BCA8;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220bcd8
	if (ctx.cr6.eq) goto loc_8220BCD8;
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x82163e58
	ctx.lr = 0x8220BCB8;
	sub_82163E58(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82164280
	ctx.lr = 0x8220BCC4;
	sub_82164280(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r9.u32);
	// b 0x8220bce0
	goto loc_8220BCE0;
loc_8220BCD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
loc_8220BCE0:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220bd0c
	if (ctx.cr6.lt) goto loc_8220BD0C;
	// bne cr6,0x8220bd14
	if (!ctx.cr6.eq) goto loc_8220BD14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a5c8
	ctx.lr = 0x8220BCF8;
	sub_8220A5C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8220BD0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a208
	ctx.lr = 0x8220BD14;
	sub_8220A208(ctx, base);
loc_8220BD14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220BD28"))) PPC_WEAK_FUNC(sub_8220BD28);
PPC_FUNC_IMPL(__imp__sub_8220BD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8220b640
	ctx.lr = 0x8220BD48;
	sub_8220B640(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220bd64
	if (ctx.cr6.eq) goto loc_8220BD64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8220BD60;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220BD64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220BD7C"))) PPC_WEAK_FUNC(sub_8220BD7C);
PPC_FUNC_IMPL(__imp__sub_8220BD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BD80"))) PPC_WEAK_FUNC(sub_8220BD80);
PPC_FUNC_IMPL(__imp__sub_8220BD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8220BD88;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,312(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8220bdac
	if (ctx.cr6.eq) goto loc_8220BDAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,296(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8220be14
	if (!ctx.cr6.lt) goto loc_8220BE14;
loc_8220BDAC:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r31,r3,288
	ctx.r31.s64 = ctx.r3.s64 + 288;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8220BDC4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8220bdc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220BDC4;
	// addi r30,r3,272
	ctx.r30.s64 = ctx.r3.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3410
	ctx.lr = 0x8220BDDC;
	sub_823C3410(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8220BDEC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8220bdec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220BDEC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8220be08
	if (!ctx.cr6.eq) goto loc_8220BE08;
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8220BE08:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3320
	ctx.lr = 0x8220BE14;
	sub_823C3320(ctx, base);
loc_8220BE14:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8220BE1C"))) PPC_WEAK_FUNC(sub_8220BE1C);
PPC_FUNC_IMPL(__imp__sub_8220BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BE20"))) PPC_WEAK_FUNC(sub_8220BE20);
PPC_FUNC_IMPL(__imp__sub_8220BE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8220BE28;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,312(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8220be4c
	if (ctx.cr6.eq) goto loc_8220BE4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,296(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10420);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220beb4
	if (!ctx.cr6.gt) goto loc_8220BEB4;
loc_8220BE4C:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r31,r3,288
	ctx.r31.s64 = ctx.r3.s64 + 288;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8220BE64:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8220be64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220BE64;
	// addi r30,r3,272
	ctx.r30.s64 = ctx.r3.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3468
	ctx.lr = 0x8220BE7C;
	sub_823C3468(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8220BE8C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8220be8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220BE8C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8220bea8
	if (!ctx.cr6.eq) goto loc_8220BEA8;
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8220BEA8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3320
	ctx.lr = 0x8220BEB4;
	sub_823C3320(ctx, base);
loc_8220BEB4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8220BEBC"))) PPC_WEAK_FUNC(sub_8220BEBC);
PPC_FUNC_IMPL(__imp__sub_8220BEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220BEC0"))) PPC_WEAK_FUNC(sub_8220BEC0);
PPC_FUNC_IMPL(__imp__sub_8220BEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x8220BEC8;
	sub_8224875C(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-2512(r1)
	ea = -2512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// bl 0x82230c00
	ctx.lr = 0x8220BEDC;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220d374
	if (ctx.cr6.eq) goto loc_8220D374;
	// lwz r28,328(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82164c98
	ctx.lr = 0x8220BEF0;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220d374
	if (ctx.cr6.eq) goto loc_8220D374;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r9,-792(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -792);
	// lwz r8,-8540(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8540);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r30,r8,1696
	ctx.r30.s64 = ctx.r8.s64 + 1696;
	// lwz r31,52(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
loc_8220BF20:
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8220bf20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220BF20;
	// lwz r11,400(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220bf50
	if (ctx.cr6.lt) goto loc_8220BF50;
	// bne cr6,0x8220bf60
	if (!ctx.cr6.eq) goto loc_8220BF60;
	// bl 0x8223aa28
	ctx.lr = 0x8220BF3C;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c8218
	ctx.lr = 0x8220BF4C;
	sub_820C8218(ctx, base);
	// b 0x8220bf60
	goto loc_8220BF60;
loc_8220BF50:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c8260
	ctx.lr = 0x8220BF60;
	sub_820C8260(ctx, base);
loc_8220BF60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82163e58
	ctx.lr = 0x8220BF68;
	sub_82163E58(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820c7290
	ctx.lr = 0x8220BF74;
	sub_820C7290(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca128
	ctx.lr = 0x8220BF8C;
	sub_820CA128(ctx, base);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x820c7290
	ctx.lr = 0x8220BF94;
	sub_820C7290(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,1264
	ctx.r4.s64 = ctx.r1.s64 + 1264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca198
	ctx.lr = 0x8220BFA4;
	sub_820CA198(ctx, base);
	// mulli r11,r28,336
	ctx.r11.s64 = ctx.r28.s64 * 336;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// ori r8,r9,27100
	ctx.r8.u64 = ctx.r9.u64 | 27100;
	// addi r7,r10,12752
	ctx.r7.s64 = ctx.r10.s64 + 12752;
	// addi r11,r29,332
	ctx.r11.s64 = ctx.r29.s64 + 332;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwx r7,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u32);
	// lbz r5,332(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 332);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220bfd8
	if (!ctx.cr6.eq) goto loc_8220BFD8;
	// addi r10,r23,30
	ctx.r10.s64 = ctx.r23.s64 + 30;
loc_8220BFD8:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r9,27352
	ctx.r6.u64 = ctx.r9.u64 | 27352;
	// ori r5,r7,27372
	ctx.r5.u64 = ctx.r7.u64 | 27372;
	// li r30,0
	ctx.r30.s64 = 0;
	// stwx r10,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r30.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220c00c
	if (!ctx.cr6.eq) goto loc_8220C00C;
	// addi r11,r23,30
	ctx.r11.s64 = ctx.r23.s64 + 30;
loc_8220C00C:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r10,27608
	ctx.r7.u64 = ctx.r10.u64 | 27608;
	// ori r6,r8,27628
	ctx.r6.u64 = ctx.r8.u64 | 27628;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r28,r29,404
	ctx.r28.s64 = ctx.r29.s64 + 404;
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r30.u32);
	// bl 0x820c9e18
	ctx.lr = 0x8220C038;
	sub_820C9E18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r27,r11,26232
	ctx.r27.s64 = ctx.r11.s64 + 26232;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8220C054;
	sub_8218A5F0(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r4,28376
	ctx.r11.u64 = ctx.r4.u64 | 28376;
	// ori r10,r3,28396
	ctx.r10.u64 = ctx.r3.u64 | 28396;
	// addi r26,r29,436
	ctx.r26.s64 = ctx.r29.s64 + 436;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// stwx r28,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r28,556(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 556);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8220C090;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r7,30936
	ctx.r11.u64 = ctx.r7.u64 | 30936;
	// ori r10,r6,30956
	ctx.r10.u64 = ctx.r6.u64 | 30956;
	// addi r25,r29,468
	ctx.r25.s64 = ctx.r29.s64 + 468;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// stwx r26,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r26.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r24,560(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 560);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8220C0CC;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r7,31192
	ctx.r11.u64 = ctx.r7.u64 | 31192;
	// ori r10,r6,31212
	ctx.r10.u64 = ctx.r6.u64 | 31212;
	// addi r26,r29,500
	ctx.r26.s64 = ctx.r29.s64 + 500;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// stwx r25,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r25.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r6,564(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 564);
	// bl 0x8218a5f0
	ctx.lr = 0x8220C104;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r4,r7,31448
	ctx.r4.u64 = ctx.r7.u64 | 31448;
	// ori r3,r5,31468
	ctx.r3.u64 = ctx.r5.u64 | 31468;
	// add. r11,r24,r28
	ctx.r11.u64 = ctx.r24.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r26,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r26.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r30.u32);
	// ble 0x8220c15c
	if (!ctx.cr0.gt) goto loc_8220C15C;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// b 0x8220c164
	goto loc_8220C164;
loc_8220C15C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
loc_8220C164:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r29,532
	ctx.r28.s64 = ctx.r29.s64 + 532;
	// addi r24,r11,31108
	ctx.r24.s64 = ctx.r11.s64 + 31108;
	// li r4,32
	ctx.r4.s64 = 32;
	// lfs f0,10376(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8218a5f0
	ctx.lr = 0x8220C198;
	sub_8218A5F0(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// ori r6,r9,31704
	ctx.r6.u64 = ctx.r9.u64 | 31704;
	// addi r11,r4,-5320
	ctx.r11.s64 = ctx.r4.s64 + -5320;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// li r25,7
	ctx.r25.s64 = 7;
	// ori r5,r7,31724
	ctx.r5.u64 = ctx.r7.u64 | 31724;
	// stwx r28,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r28.u32);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r1,204
	ctx.r9.s64 = ctx.r1.s64 + 204;
	// stwx r30,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r30.u32);
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_8220C1D4:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r11,r4,88
	ctx.r11.s64 = ctx.r4.s64 * 88;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8220b760
	ctx.lr = 0x8220C1E8;
	sub_8220B760(ctx, base);
	// lwz r10,-8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 220, ctx.r3.u32);
	// lwz r11,400(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220c210
	if (ctx.cr6.lt) goto loc_8220C210;
	// bne cr6,0x8220c224
	if (!ctx.cr6.eq) goto loc_8220C224;
loc_8220C210:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82164138
	ctx.lr = 0x8220C220;
	sub_82164138(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8220C224:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,32
	ctx.r4.s64 = 32;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,404
	ctx.r3.s64 = ctx.r11.s64 + 404;
	// bl 0x8218a5f0
	ctx.lr = 0x8220C244;
	sub_8218A5F0(ctx, base);
	// lwz r9,-4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r6,r10,404
	ctx.r6.s64 = ctx.r10.s64 + 404;
	// stw r6,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r6.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r30.u32);
	// bl 0x822121d8
	ctx.lr = 0x8220C27C;
	sub_822121D8(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r9,r1,204
	ctx.r9.s64 = ctx.r1.s64 + 204;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 204, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// bne 0x8220c1d4
	if (!ctx.cr0.eq) goto loc_8220C1D4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r9,r11,26564
	ctx.r9.u64 = ctx.r11.u64 | 26564;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r24,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r24.u32);
	// bl 0x8218b408
	ctx.lr = 0x8220C328;
	sub_8218B408(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8218b408
	ctx.lr = 0x8220C334;
	sub_8218B408(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r5,r8,36292
	ctx.r5.u64 = ctx.r8.u64 | 36292;
	// ori r4,r7,37828
	ctx.r4.u64 = ctx.r7.u64 | 37828;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r8,r10,37836
	ctx.r8.u64 = ctx.r10.u64 | 37836;
	// stwx r30,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r30.u32);
	// ori r9,r11,37832
	ctx.r9.u64 = ctx.r11.u64 | 37832;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stwx r30,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r30.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r6,37840
	ctx.r11.u64 = ctx.r6.u64 | 37840;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r5,36548
	ctx.r5.u64 = ctx.r5.u64 | 36548;
	// ori r10,r6,38084
	ctx.r10.u64 = ctx.r6.u64 | 38084;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r7,r7,38088
	ctx.r7.u64 = ctx.r7.u64 | 38088;
	// ori r6,r6,38092
	ctx.r6.u64 = ctx.r6.u64 | 38092;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r4,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, temp.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r4,r8
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r8,r11
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r30.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,0(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r8,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// lwz r3,4(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lis r3,2
	ctx.r3.s64 = 131072;
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// ori r7,r9,38096
	ctx.r7.u64 = ctx.r9.u64 | 38096;
	// stfsx f9,r10,r6
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// ori r9,r3,38344
	ctx.r9.u64 = ctx.r3.u64 | 38344;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r5,r8,36804
	ctx.r5.u64 = ctx.r8.u64 | 36804;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r11,r4,38340
	ctx.r11.u64 = ctx.r4.u64 | 38340;
	// ori r3,r8,38348
	ctx.r3.u64 = ctx.r8.u64 | 38348;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r10,r4,38352
	ctx.r10.u64 = ctx.r4.u64 | 38352;
	// ori r8,r8,37060
	ctx.r8.u64 = ctx.r8.u64 | 37060;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// ori r4,r4,38596
	ctx.r4.u64 = ctx.r4.u64 | 38596;
	// ori r26,r26,38600
	ctx.r26.u64 = ctx.r26.u64 | 38600;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// ori r18,r25,38604
	ctx.r18.u64 = ctx.r25.u64 | 38604;
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r6,r7
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r30.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r5,0(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r7,r9
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, temp.u32);
	// lwz r6,4(r17)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r11,r3
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// lwz r9,8(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r6,r10
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r30.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r30.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r9,r26
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r26.u32, temp.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r17)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// ori r19,r5,38608
	ctx.r19.u64 = ctx.r5.u64 | 38608;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r25,r5,37572
	ctx.r25.u64 = ctx.r5.u64 | 37572;
	// ori r11,r4,37316
	ctx.r11.u64 = ctx.r4.u64 | 37316;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r26,r4,39108
	ctx.r26.u64 = ctx.r4.u64 | 39108;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r6,r18
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r18.u32, temp.u32);
	// lwz r6,8(r17)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// ori r10,r3,38852
	ctx.r10.u64 = ctx.r3.u64 | 38852;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r21,r8,38860
	ctx.r21.u64 = ctx.r8.u64 | 38860;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r22,r7,38864
	ctx.r22.u64 = ctx.r7.u64 | 38864;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r20,r9,38856
	ctx.r20.u64 = ctx.r9.u64 | 38856;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r9,r3,39112
	ctx.r9.u64 = ctx.r3.u64 | 39112;
	// ori r3,r8,39116
	ctx.r3.u64 = ctx.r8.u64 | 39116;
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r4,r19
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r19.u32, temp.u32);
	// ori r8,r7,39120
	ctx.r8.u64 = ctx.r7.u64 | 39120;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r5,0(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r11,r20
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, temp.u32);
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r6,r21
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r21.u32, temp.u32);
	// lwz r5,8(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r4,r22
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r22.u32, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r30.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r7,r26
	PPC_STORE_U32(ctx.r7.u32 + ctx.r26.u32, ctx.r30.u32);
	// lwz r6,0(r17)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r4,r9
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, temp.u32);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r23,r7,39364
	ctx.r23.u64 = ctx.r7.u64 | 39364;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r9,r3
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// lwz r5,8(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r6,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r24,r3,r23
	PPC_STORE_U32(ctx.r3.u32 + ctx.r23.u32, ctx.r24.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8220d374
	if (ctx.cr6.gt) goto loc_8220D374;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220c940
	// bdzf 4*cr6+eq,0x8220cb48
	// bdzf 4*cr6+eq,0x8220cd00
	// bne cr6,0x8220cf08
	if (!ctx.cr6.eq) goto loc_8220CF08;
	// li r5,324
	ctx.r5.s64 = 324;
	// li r4,644
	ctx.r4.s64 = 644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x8220C754;
	sub_82106F58(ctx, base);
	// li r5,329
	ctx.r5.s64 = 329;
	// li r4,653
	ctx.r4.s64 = 653;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x8220C764;
	sub_82106F58(ctx, base);
	// lfs f0,1128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1128);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// addi r28,r29,788
	ctx.r28.s64 = ctx.r29.s64 + 788;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220C788;
	sub_8218A5F0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,37848
	ctx.r8.u64 = ctx.r11.u64 | 37848;
	// ori r7,r9,37868
	ctx.r7.u64 = ctx.r9.u64 | 37868;
	// li r5,330
	ctx.r5.s64 = 330;
	// li r4,654
	ctx.r4.s64 = 654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r28.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220C7B8;
	sub_82106F58(ctx, base);
	// lfs f12,1136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// addi r28,r29,820
	ctx.r28.s64 = ctx.r29.s64 + 820;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220C7DC;
	sub_8218A5F0(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r11,r5,38104
	ctx.r11.u64 = ctx.r5.u64 | 38104;
	// ori r10,r4,38124
	ctx.r10.u64 = ctx.r4.u64 | 38124;
	// li r5,331
	ctx.r5.s64 = 331;
	// li r4,655
	ctx.r4.s64 = 655;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220C80C;
	sub_82106F58(ctx, base);
	// lfs f10,1140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// addi r28,r29,852
	ctx.r28.s64 = ctx.r29.s64 + 852;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220C830;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r11,r7,38360
	ctx.r11.u64 = ctx.r7.u64 | 38360;
	// ori r10,r6,38380
	ctx.r10.u64 = ctx.r6.u64 | 38380;
	// li r5,332
	ctx.r5.s64 = 332;
	// li r4,656
	ctx.r4.s64 = 656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220C860;
	sub_82106F58(ctx, base);
	// lfs f8,1132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	ctx.f8.f64 = double(temp.f32);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// addi r28,r29,884
	ctx.r28.s64 = ctx.r29.s64 + 884;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220C884;
	sub_8218A5F0(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r11,r6,38616
	ctx.r11.u64 = ctx.r6.u64 | 38616;
	// ori r10,r5,38636
	ctx.r10.u64 = ctx.r5.u64 | 38636;
	// li r5,334
	ctx.r5.s64 = 334;
	// li r4,657
	ctx.r4.s64 = 657;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220C8B4;
	sub_82106F58(ctx, base);
	// addi r28,r29,916
	ctx.r28.s64 = ctx.r29.s64 + 916;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,1168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8220C8CC;
	sub_8218A5F0(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r8,38872
	ctx.r6.u64 = ctx.r8.u64 | 38872;
	// ori r11,r7,38892
	ctx.r11.u64 = ctx.r7.u64 | 38892;
	// li r5,333
	ctx.r5.s64 = 333;
	// li r4,658
	ctx.r4.s64 = 658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r28.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220C8FC;
	sub_82106F58(ctx, base);
	// addi r29,r29,948
	ctx.r29.s64 = ctx.r29.s64 + 948;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,1144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1144);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8220C914;
	sub_8218A5F0(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r8,39128
	ctx.r6.u64 = ctx.r8.u64 | 39128;
	// ori r5,r7,39148
	ctx.r5.u64 = ctx.r7.u64 | 39148;
	// stwx r29,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r30.u32);
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
loc_8220C940:
	// li r5,325
	ctx.r5.s64 = 325;
	// li r4,644
	ctx.r4.s64 = 644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x8220C950;
	sub_82106F58(ctx, base);
	// li r5,329
	ctx.r5.s64 = 329;
	// li r4,653
	ctx.r4.s64 = 653;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x8220C960;
	sub_82106F58(ctx, base);
	// addi r28,r29,788
	ctx.r28.s64 = ctx.r29.s64 + 788;
	// lfs f0,1128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1128);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220C984;
	sub_8218A5F0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r8,r11,37848
	ctx.r8.u64 = ctx.r11.u64 | 37848;
	// ori r7,r9,37868
	ctx.r7.u64 = ctx.r9.u64 | 37868;
	// li r5,335
	ctx.r5.s64 = 335;
	// li r4,654
	ctx.r4.s64 = 654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r28.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220C9B4;
	sub_82106F58(ctx, base);
	// addi r28,r29,820
	ctx.r28.s64 = ctx.r29.s64 + 820;
	// lfs f12,424(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220C9D8;
	sub_8218A5F0(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r5,38104
	ctx.r11.u64 = ctx.r5.u64 | 38104;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r5,336
	ctx.r5.s64 = 336;
	// ori r10,r4,38124
	ctx.r10.u64 = ctx.r4.u64 | 38124;
	// li r4,655
	ctx.r4.s64 = 655;
	// stwx r28,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CA08;
	sub_82106F58(ctx, base);
	// addi r28,r29,852
	ctx.r28.s64 = ctx.r29.s64 + 852;
	// lfs f10,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220CA2C;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r7,38360
	ctx.r11.u64 = ctx.r7.u64 | 38360;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// li r5,337
	ctx.r5.s64 = 337;
	// ori r10,r6,38380
	ctx.r10.u64 = ctx.r6.u64 | 38380;
	// li r4,656
	ctx.r4.s64 = 656;
	// stwx r28,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CA5C;
	sub_82106F58(ctx, base);
	// addi r28,r29,884
	ctx.r28.s64 = ctx.r29.s64 + 884;
	// lfs f8,600(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	ctx.f8.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220CA80;
	sub_8218A5F0(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r11,r6,38616
	ctx.r11.u64 = ctx.r6.u64 | 38616;
	// ori r10,r5,38636
	ctx.r10.u64 = ctx.r5.u64 | 38636;
	// li r5,338
	ctx.r5.s64 = 338;
	// li r4,657
	ctx.r4.s64 = 657;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CAB0;
	sub_82106F58(ctx, base);
	// lfs f6,512(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	ctx.f6.f64 = double(temp.f32);
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// addi r28,r29,916
	ctx.r28.s64 = ctx.r29.s64 + 916;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220CAD4;
	sub_8218A5F0(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r8,38872
	ctx.r6.u64 = ctx.r8.u64 | 38872;
	// ori r11,r7,38892
	ctx.r11.u64 = ctx.r7.u64 | 38892;
	// li r5,339
	ctx.r5.s64 = 339;
	// li r4,658
	ctx.r4.s64 = 658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r28.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CB04;
	sub_82106F58(ctx, base);
	// addi r29,r29,948
	ctx.r29.s64 = ctx.r29.s64 + 948;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,1164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1164);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8220CB1C;
	sub_8218A5F0(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r8,39128
	ctx.r6.u64 = ctx.r8.u64 | 39128;
	// ori r5,r7,39148
	ctx.r5.u64 = ctx.r7.u64 | 39148;
	// stwx r29,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r30.u32);
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
loc_8220CB48:
	// li r5,326
	ctx.r5.s64 = 326;
	// li r4,644
	ctx.r4.s64 = 644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x8220CB58;
	sub_82106F58(ctx, base);
	// li r5,330
	ctx.r5.s64 = 330;
	// li r4,653
	ctx.r4.s64 = 653;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x8220CB68;
	sub_82106F58(ctx, base);
	// lfs f0,1136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// addi r28,r29,788
	ctx.r28.s64 = ctx.r29.s64 + 788;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220CB8C;
	sub_8218A5F0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,37848
	ctx.r9.u64 = ctx.r11.u64 | 37848;
	// ori r8,r10,37868
	ctx.r8.u64 = ctx.r10.u64 | 37868;
	// li r5,340
	ctx.r5.s64 = 340;
	// li r4,654
	ctx.r4.s64 = 654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r28.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CBBC;
	sub_82106F58(ctx, base);
	// lfs f12,608(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// addi r28,r29,820
	ctx.r28.s64 = ctx.r29.s64 + 820;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220CBE0;
	sub_8218A5F0(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r5,38104
	ctx.r9.u64 = ctx.r5.u64 | 38104;
	// ori r8,r10,38124
	ctx.r8.u64 = ctx.r10.u64 | 38124;
	// li r5,341
	ctx.r5.s64 = 341;
	// li r4,655
	ctx.r4.s64 = 655;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CC10;
	sub_82106F58(ctx, base);
	// lfs f10,520(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// addi r28,r29,852
	ctx.r28.s64 = ctx.r29.s64 + 852;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220CC34;
	sub_8218A5F0(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r11,r6,38360
	ctx.r11.u64 = ctx.r6.u64 | 38360;
	// ori r10,r5,38380
	ctx.r10.u64 = ctx.r5.u64 | 38380;
	// li r5,342
	ctx.r5.s64 = 342;
	// li r4,656
	ctx.r4.s64 = 656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CC64;
	sub_82106F58(ctx, base);
	// addi r28,r29,884
	ctx.r28.s64 = ctx.r29.s64 + 884;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,1220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1220);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8220CC7C;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r11,r7,38616
	ctx.r11.u64 = ctx.r7.u64 | 38616;
	// ori r10,r6,38636
	ctx.r10.u64 = ctx.r6.u64 | 38636;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,343
	ctx.r5.s64 = 343;
	// li r4,657
	ctx.r4.s64 = 657;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CCAC;
	sub_82106F58(ctx, base);
	// addi r29,r29,916
	ctx.r29.s64 = ctx.r29.s64 + 916;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,1216(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1216);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8220CCC4;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r5,r7,38872
	ctx.r5.u64 = ctx.r7.u64 | 38872;
	// ori r4,r6,38892
	ctx.r4.u64 = ctx.r6.u64 | 38892;
	// stwx r29,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r30.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r24,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r24.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r24,r9,r26
	PPC_STORE_U32(ctx.r9.u32 + ctx.r26.u32, ctx.r24.u32);
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
loc_8220CD00:
	// li r5,327
	ctx.r5.s64 = 327;
	// li r4,644
	ctx.r4.s64 = 644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x8220CD10;
	sub_82106F58(ctx, base);
	// li r5,331
	ctx.r5.s64 = 331;
	// li r4,653
	ctx.r4.s64 = 653;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x8220CD20;
	sub_82106F58(ctx, base);
	// lfs f0,1140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// addi r28,r29,788
	ctx.r28.s64 = ctx.r29.s64 + 788;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220CD44;
	sub_8218A5F0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,37848
	ctx.r8.u64 = ctx.r11.u64 | 37848;
	// ori r7,r9,37868
	ctx.r7.u64 = ctx.r9.u64 | 37868;
	// li r5,344
	ctx.r5.s64 = 344;
	// li r4,654
	ctx.r4.s64 = 654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r28.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CD74;
	sub_82106F58(ctx, base);
	// lfs f12,436(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// addi r28,r29,820
	ctx.r28.s64 = ctx.r29.s64 + 820;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220CD98;
	sub_8218A5F0(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r11,r5,38104
	ctx.r11.u64 = ctx.r5.u64 | 38104;
	// ori r10,r4,38124
	ctx.r10.u64 = ctx.r4.u64 | 38124;
	// li r5,345
	ctx.r5.s64 = 345;
	// li r4,655
	ctx.r4.s64 = 655;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CDC8;
	sub_82106F58(ctx, base);
	// lfs f10,260(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// addi r28,r29,852
	ctx.r28.s64 = ctx.r29.s64 + 852;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220CDEC;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r11,r7,38360
	ctx.r11.u64 = ctx.r7.u64 | 38360;
	// ori r10,r6,38380
	ctx.r10.u64 = ctx.r6.u64 | 38380;
	// li r5,346
	ctx.r5.s64 = 346;
	// li r4,656
	ctx.r4.s64 = 656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CE1C;
	sub_82106F58(ctx, base);
	// lfs f8,612(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	ctx.f8.f64 = double(temp.f32);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// addi r28,r29,884
	ctx.r28.s64 = ctx.r29.s64 + 884;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220CE40;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r7,38616
	ctx.r10.u64 = ctx.r7.u64 | 38616;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// li r5,347
	ctx.r5.s64 = 347;
	// ori r9,r6,38636
	ctx.r9.u64 = ctx.r6.u64 | 38636;
	// li r4,657
	ctx.r4.s64 = 657;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CE70;
	sub_82106F58(ctx, base);
	// addi r28,r29,916
	ctx.r28.s64 = ctx.r29.s64 + 916;
	// lfs f6,524(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	ctx.f6.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220CE94;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r7,38872
	ctx.r11.u64 = ctx.r7.u64 | 38872;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// li r5,348
	ctx.r5.s64 = 348;
	// ori r10,r6,38892
	ctx.r10.u64 = ctx.r6.u64 | 38892;
	// li r4,658
	ctx.r4.s64 = 658;
	// stwx r28,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220CEC4;
	sub_82106F58(ctx, base);
	// addi r29,r29,948
	ctx.r29.s64 = ctx.r29.s64 + 948;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,1160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8220CEDC;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r7,39128
	ctx.r5.u64 = ctx.r7.u64 | 39128;
	// ori r4,r6,39148
	ctx.r4.u64 = ctx.r6.u64 | 39148;
	// stwx r29,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r30.u32);
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
loc_8220CF08:
	// li r5,328
	ctx.r5.s64 = 328;
	// li r4,644
	ctx.r4.s64 = 644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x8220CF18;
	sub_82106F58(ctx, base);
	// li r5,329
	ctx.r5.s64 = 329;
	// li r4,653
	ctx.r4.s64 = 653;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106f58
	ctx.lr = 0x8220CF28;
	sub_82106F58(ctx, base);
	// lfs f0,1128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2232);
	ctx.f13.f64 = double(temp.f32);
	// addi r17,r29,788
	ctx.r17.s64 = ctx.r29.s64 + 788;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220CF54;
	sub_8218A5F0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r9,r11,37848
	ctx.r9.u64 = ctx.r11.u64 | 37848;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r7,37832
	ctx.r11.u64 = ctx.r7.u64 | 37832;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r8,r10,37868
	ctx.r8.u64 = ctx.r10.u64 | 37868;
	// ori r10,r6,37836
	ctx.r10.u64 = ctx.r6.u64 | 37836;
	// ori r6,r7,37840
	ctx.r6.u64 = ctx.r7.u64 | 37840;
	// li r5,330
	ctx.r5.s64 = 330;
	// li r4,654
	ctx.r4.s64 = 654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r17,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r17.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r30.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r8,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r11,r10
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r8,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220D008;
	sub_82106F58(ctx, base);
	// lfs f12,1136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2240);
	ctx.f11.f64 = double(temp.f32);
	// addi r17,r29,820
	ctx.r17.s64 = ctx.r29.s64 + 820;
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220D034;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r4,r7,38104
	ctx.r4.u64 = ctx.r7.u64 | 38104;
	// ori r11,r5,38124
	ctx.r11.u64 = ctx.r5.u64 | 38124;
	// stwx r17,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r17.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r7,r9,38092
	ctx.r7.u64 = ctx.r9.u64 | 38092;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r8,r10,38088
	ctx.r8.u64 = ctx.r10.u64 | 38088;
	// ori r10,r6,38096
	ctx.r10.u64 = ctx.r6.u64 | 38096;
	// li r5,331
	ctx.r5.s64 = 331;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// li r4,655
	ctx.r4.s64 = 655;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r11,r8
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r6,r7
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, temp.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r8,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220D0E8;
	sub_82106F58(ctx, base);
	// lfs f10,1140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,2244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2244);
	ctx.f9.f64 = double(temp.f32);
	// addi r17,r29,852
	ctx.r17.s64 = ctx.r29.s64 + 852;
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220D114;
	sub_8218A5F0(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r11,r6,38360
	ctx.r11.u64 = ctx.r6.u64 | 38360;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r7,r9,38344
	ctx.r7.u64 = ctx.r9.u64 | 38344;
	// ori r9,r8,38348
	ctx.r9.u64 = ctx.r8.u64 | 38348;
	// ori r8,r6,38352
	ctx.r8.u64 = ctx.r6.u64 | 38352;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,656
	ctx.r4.s64 = 656;
	// ori r10,r5,38380
	ctx.r10.u64 = ctx.r5.u64 | 38380;
	// li r5,332
	ctx.r5.s64 = 332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r17,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r17.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f6,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r10,r7
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r6,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r10,r8
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220D1C8;
	sub_82106F58(ctx, base);
	// lfs f8,1132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,2236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2236);
	ctx.f7.f64 = double(temp.f32);
	// addi r17,r29,884
	ctx.r17.s64 = ctx.r29.s64 + 884;
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8218a5f0
	ctx.lr = 0x8220D1F4;
	sub_8218A5F0(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r8,38616
	ctx.r6.u64 = ctx.r8.u64 | 38616;
	// ori r11,r7,38636
	ctx.r11.u64 = ctx.r7.u64 | 38636;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r5,349
	ctx.r5.s64 = 349;
	// ori r9,r10,38600
	ctx.r9.u64 = ctx.r10.u64 | 38600;
	// li r4,657
	ctx.r4.s64 = 657;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r17,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r17.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfd f4,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r11,r9
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r8,r18
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r18.u32, temp.u32);
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r11,r19
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r19.u32, temp.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220D298;
	sub_82106F58(ctx, base);
	// lwz r9,1148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// lwz r8,2252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2252);
	// addi r29,r29,916
	ctx.r29.s64 = ctx.r29.s64 + 916;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bl 0x8218a5f0
	ctx.lr = 0x8220D2B8;
	sub_8218A5F0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r7,38872
	ctx.r5.u64 = ctx.r7.u64 | 38872;
	// ori r4,r6,38892
	ctx.r4.u64 = ctx.r6.u64 | 38892;
	// stwx r29,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r30.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfd f6,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r9,r20
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r20.u32, temp.u32);
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r7,r21
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r21.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r11,r22
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r24,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r24.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r24,r9,r26
	PPC_STORE_U32(ctx.r9.u32 + ctx.r26.u32, ctx.r24.u32);
	// lwz r3,1212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1212);
	// bl 0x820c32f8
	ctx.lr = 0x8220D35C;
	sub_820C32F8(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,665
	ctx.r4.s64 = 665;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r30,r8,r23
	PPC_STORE_U32(ctx.r8.u32 + ctx.r23.u32, ctx.r30.u32);
	// bl 0x82106f58
	ctx.lr = 0x8220D374;
	sub_82106F58(ctx, base);
loc_8220D374:
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_8220D380"))) PPC_WEAK_FUNC(sub_8220D380);
PPC_FUNC_IMPL(__imp__sub_8220D380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8220D398;
	sub_823C3C70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,-228
	ctx.r3.s64 = ctx.r31.s64 + -228;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8220bd80
	ctx.lr = 0x8220D3A8;
	sub_8220BD80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D3BC"))) PPC_WEAK_FUNC(sub_8220D3BC);
PPC_FUNC_IMPL(__imp__sub_8220D3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D3C0"))) PPC_WEAK_FUNC(sub_8220D3C0);
PPC_FUNC_IMPL(__imp__sub_8220D3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c3ca8
	ctx.lr = 0x8220D3DC;
	sub_823C3CA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,-228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -228);
	// addi r30,r31,-228
	ctx.r30.s64 = ctx.r31.s64 + -228;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220D3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220be20
	ctx.lr = 0x8220D404;
	sub_8220BE20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D41C"))) PPC_WEAK_FUNC(sub_8220D41C);
PPC_FUNC_IMPL(__imp__sub_8220D41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D420"))) PPC_WEAK_FUNC(sub_8220D420);
PPC_FUNC_IMPL(__imp__sub_8220D420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c3cd8
	ctx.lr = 0x8220D43C;
	sub_823C3CD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,-228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -228);
	// addi r30,r31,-228
	ctx.r30.s64 = ctx.r31.s64 + -228;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220D45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220be20
	ctx.lr = 0x8220D464;
	sub_8220BE20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D47C"))) PPC_WEAK_FUNC(sub_8220D47C);
PPC_FUNC_IMPL(__imp__sub_8220D47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D480"))) PPC_WEAK_FUNC(sub_8220D480);
PPC_FUNC_IMPL(__imp__sub_8220D480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8209eda0
	ctx.lr = 0x8220D498;
	sub_8209EDA0(ctx, base);
	// addi r3,r31,-228
	ctx.r3.s64 = ctx.r31.s64 + -228;
	// bl 0x8220bec0
	ctx.lr = 0x8220D4A0;
	sub_8220BEC0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220d4c0
	if (ctx.cr6.eq) goto loc_8220D4C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220D4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220D4C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D4D4"))) PPC_WEAK_FUNC(sub_8220D4D4);
PPC_FUNC_IMPL(__imp__sub_8220D4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D4D8"))) PPC_WEAK_FUNC(sub_8220D4D8);
PPC_FUNC_IMPL(__imp__sub_8220D4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8209eda0
	ctx.lr = 0x8220D4F0;
	sub_8209EDA0(ctx, base);
	// addi r3,r31,-228
	ctx.r3.s64 = ctx.r31.s64 + -228;
	// bl 0x8220bec0
	ctx.lr = 0x8220D4F8;
	sub_8220BEC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220D50C"))) PPC_WEAK_FUNC(sub_8220D50C);
PPC_FUNC_IMPL(__imp__sub_8220D50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220D510"))) PPC_WEAK_FUNC(sub_8220D510);
PPC_FUNC_IMPL(__imp__sub_8220D510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8220D518;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r4,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r4.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// blt cr6,0x8220d55c
	if (ctx.cr6.lt) goto loc_8220D55C;
	// bne cr6,0x8220d568
	if (!ctx.cr6.eq) goto loc_8220D568;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x8220d568
	goto loc_8220D568;
loc_8220D55C:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8220D568:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rotlwi r27,r8,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// stw r5,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// blt cr6,0x8220d5d4
	if (ctx.cr6.lt) goto loc_8220D5D4;
	// bne cr6,0x8220d698
	if (!ctx.cr6.eq) goto loc_8220D698;
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// bl 0x82164c50
	ctx.lr = 0x8220D5AC;
	sub_82164C50(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x8220d5cc
	if (ctx.cr6.lt) goto loc_8220D5CC;
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x82164c98
	ctx.lr = 0x8220D5BC;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220d5cc
	if (ctx.cr6.eq) goto loc_8220D5CC;
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// b 0x8220d698
	goto loc_8220D698;
loc_8220D5CC:
	// stw r28,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r28.u32);
	// b 0x8220d698
	goto loc_8220D698;
loc_8220D5D4:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8220d698
	if (ctx.cr6.gt) goto loc_8220D698;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220d63c
	if (ctx.cr6.eq) goto loc_8220D63C;
	// bdz 0x8220d63c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220D63C;
	// bdz 0x8220d608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220D608;
	// bdz 0x8220d668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220D668;
	// bdz 0x8220d668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220D668;
	// bdz 0x8220d668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220D668;
	// b 0x8220d668
	goto loc_8220D668;
loc_8220D608:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r31,656
	ctx.r29.s64 = ctx.r31.s64 + 656;
loc_8220D610:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// beq cr6,0x8220d624
	if (ctx.cr6.eq) goto loc_8220D624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82164c98
	ctx.lr = 0x8220D620;
	sub_82164C98(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_8220D624:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r28,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r28.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8220d610
	if (ctx.cr6.lt) goto loc_8220D610;
	// b 0x8220d698
	goto loc_8220D698;
loc_8220D63C:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r31,656
	ctx.r11.s64 = ctx.r31.s64 + 656;
loc_8220D648:
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8220d654
	if (ctx.cr6.eq) goto loc_8220D654;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8220D654:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8220d648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220D648;
	// b 0x8220d698
	goto loc_8220D698;
loc_8220D668:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r31,656
	ctx.r29.s64 = ctx.r31.s64 + 656;
loc_8220D670:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// beq cr6,0x8220d684
	if (ctx.cr6.eq) goto loc_8220D684;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82164c98
	ctx.lr = 0x8220D680;
	sub_82164C98(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_8220D684:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r28,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r28.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8220d670
	if (ctx.cr6.lt) goto loc_8220D670;
loc_8220D698:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220d6cc
	if (ctx.cr6.lt) goto loc_8220D6CC;
	// bne cr6,0x8220d6e8
	if (!ctx.cr6.eq) goto loc_8220D6E8;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8220d6e8
	if (ctx.cr6.eq) goto loc_8220D6E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-5624
	ctx.r11.s64 = ctx.r11.s64 + -5624;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// b 0x8220d6dc
	goto loc_8220D6DC;
loc_8220D6CC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r27,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-5624
	ctx.r11.s64 = ctx.r11.s64 + -5624;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
loc_8220D6DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x821eb290
	ctx.lr = 0x8220D6E8;
	sub_821EB290(ctx, base);
loc_8220D6E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220bc80
	ctx.lr = 0x8220D6F0;
	sub_8220BC80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a208
	ctx.lr = 0x8220D6F8;
	sub_8220A208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a5c8
	ctx.lr = 0x8220D700;
	sub_8220A5C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8220D708"))) PPC_WEAK_FUNC(sub_8220D708);
PPC_FUNC_IMPL(__imp__sub_8220D708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8220D710;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8220D71C;
	sub_8209EDA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220bc80
	ctx.lr = 0x8220D724;
	sub_8220BC80(ctx, base);
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8220d7a4
	if (ctx.cr6.eq) goto loc_8220D7A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8220d770
	if (ctx.cr6.eq) goto loc_8220D770;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8220d7e0
	if (!ctx.cr6.eq) goto loc_8220D7E0;
	// lwz r3,652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r4,300(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220D758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8220D76C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220d7e0
	goto loc_8220D7E0;
loc_8220D770:
	// lwz r3,652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220D784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220d7e0
	if (ctx.cr6.eq) goto loc_8220D7E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220D7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8220d7e0
	goto loc_8220D7E0;
loc_8220D7A4:
	// lwz r3,652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220D7B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220d7e0
	if (ctx.cr6.eq) goto loc_8220D7E0;
	// lwz r3,652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r4,300(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220D7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r9.u32);
loc_8220D7E0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r26,-784(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220D7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220db68
	if (ctx.cr6.eq) goto loc_8220DB68;
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r25.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8220db68
	if (ctx.cr6.gt) goto loc_8220DB68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220db68
	if (ctx.cr6.eq) goto loc_8220DB68;
	// bdz 0x8220d838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220D838;
	// bdz 0x8220d88c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220D88C;
	// bdz 0x8220d994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220D994;
	// bdz 0x8220db68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220DB68;
	// b 0x8220da74
	goto loc_8220DA74;
loc_8220D838:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220D84C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220db68
	if (ctx.cr6.eq) goto loc_8220DB68;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82349038
	ctx.lr = 0x8220D85C;
	sub_82349038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8220d870
	if (ctx.cr6.eq) goto loc_8220D870;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8220D870:
	// bl 0x8220aa48
	ctx.lr = 0x8220D874;
	sub_8220AA48(ctx, base);
	// lwz r10,88(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// addi r11,r26,28
	ctx.r11.s64 = ctx.r26.s64 + 28;
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r9,88(r26)
	PPC_STORE_U32(ctx.r26.u32 + 88, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8220D88C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220D8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220d980
	if (ctx.cr6.eq) goto loc_8220D980;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821ec830
	ctx.lr = 0x8220D8B0;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8220d95c
	if (!ctx.cr6.eq) goto loc_8220D95C;
	// lwz r3,300(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// bl 0x82163e58
	ctx.lr = 0x8220D8C0;
	sub_82163E58(ctx, base);
	// lwz r11,868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// neg r31,r11
	ctx.r31.s64 = -ctx.r11.s64;
	// bl 0x82163df0
	ctx.lr = 0x8220D8D0;
	sub_82163DF0(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8220d8e4
	if (!ctx.cr0.lt) goto loc_8220D8E4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8220d8f8
	goto loc_8220D8F8;
loc_8220D8E4:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8220d8f8
	if (!ctx.cr6.gt) goto loc_8220D8F8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8220D8F8:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r30,872
	ctx.r30.s64 = ctx.r30.s64 + 872;
loc_8220D904:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82165710
	ctx.lr = 0x8220D918;
	sub_82165710(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x8220d904
	if (ctx.cr6.lt) goto loc_8220D904;
	// li r3,10010
	ctx.r3.s64 = 10010;
	// bl 0x8208f658
	ctx.lr = 0x8220D92C;
	sub_8208F658(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5208
	ctx.r4.s64 = ctx.r10.s64 + -5208;
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82163e18
	ctx.lr = 0x8220D944;
	sub_82163E18(ctx, base);
	// lwz r10,88(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// addi r11,r26,28
	ctx.r11.s64 = ctx.r26.s64 + 28;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,88(r26)
	PPC_STORE_U32(ctx.r26.u32 + 88, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8220D95C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_8220D960:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220aa48
	ctx.lr = 0x8220D968;
	sub_8220AA48(ctx, base);
loc_8220D968:
	// lwz r10,88(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// addi r11,r26,28
	ctx.r11.s64 = ctx.r26.s64 + 28;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,88(r26)
	PPC_STORE_U32(ctx.r26.u32 + 88, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8220D980:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220aa48
	ctx.lr = 0x8220D98C;
	sub_8220AA48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8220D994:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220D9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220d980
	if (ctx.cr6.eq) goto loc_8220D980;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821ec830
	ctx.lr = 0x8220D9B8;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8220d95c
	if (!ctx.cr6.eq) goto loc_8220D95C;
	// lwz r3,300(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// bl 0x82163e58
	ctx.lr = 0x8220D9C8;
	sub_82163E58(ctx, base);
	// lwz r11,904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8220d9f8
	if (!ctx.cr6.gt) goto loc_8220D9F8;
	// lwz r31,908(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 908);
	// bl 0x82163df0
	ctx.lr = 0x8220D9E0;
	sub_82163DF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82165b50
	ctx.lr = 0x8220D9E8;
	sub_82165B50(ctx, base);
	// cmplwi cr6,r31,9999
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 9999, ctx.xer);
	// ble cr6,0x8220d9f4
	if (!ctx.cr6.gt) goto loc_8220D9F4;
	// li r31,9999
	ctx.r31.s64 = 9999;
loc_8220D9F4:
	// sth r31,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r31.u16);
loc_8220D9F8:
	// addi r28,r30,876
	ctx.r28.s64 = ctx.r30.s64 + 876;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
loc_8220DA04:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzu r6,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82165710
	ctx.lr = 0x8220DA18;
	sub_82165710(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x8220da04
	if (ctx.cr6.lt) goto loc_8220DA04;
	// li r3,10010
	ctx.r3.s64 = 10010;
	// bl 0x8208f658
	ctx.lr = 0x8220DA2C;
	sub_8208F658(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5208
	ctx.r4.s64 = ctx.r10.s64 + -5208;
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82163e18
	ctx.lr = 0x8220DA44;
	sub_82163E18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8220DA4C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8220da6c
	if (ctx.cr6.gt) goto loc_8220DA6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8220da4c
	if (ctx.cr6.lt) goto loc_8220DA4C;
	// b 0x8220d968
	goto loc_8220D968;
loc_8220DA6C:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8220d960
	goto loc_8220D960;
loc_8220DA74:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220DA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220db68
	if (ctx.cr6.eq) goto loc_8220DB68;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821ec830
	ctx.lr = 0x8220DA98;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8220db68
	if (!ctx.cr6.eq) goto loc_8220DB68;
	// lwz r3,300(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// bl 0x82163e58
	ctx.lr = 0x8220DAA8;
	sub_82163E58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,10009
	ctx.r3.s64 = 10009;
	// bl 0x8208f658
	ctx.lr = 0x8220DAB4;
	sub_8208F658(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,-5052(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8220daf4
	if (ctx.cr6.eq) goto loc_8220DAF4;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82230de8
	ctx.lr = 0x8220DACC;
	sub_82230DE8(ctx, base);
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8220daf4
	if (!ctx.cr6.eq) goto loc_8220DAF4;
	// addi r31,r31,596
	ctx.r31.s64 = ctx.r31.s64 + 596;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163ef8
	ctx.lr = 0x8220DAE8;
	sub_82163EF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156f00
	ctx.lr = 0x8220DAF4;
	sub_82156F00(ctx, base);
loc_8220DAF4:
	// lwz r31,912(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// bl 0x82163df0
	ctx.lr = 0x8220DAFC;
	sub_82163DF0(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8220db10
	if (!ctx.cr0.lt) goto loc_8220DB10;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8220db24
	goto loc_8220DB24;
loc_8220DB10:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8220db24
	if (!ctx.cr6.gt) goto loc_8220DB24;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8220DB24:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82165d30
	ctx.lr = 0x8220DB30;
	sub_82165D30(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-5208
	ctx.r4.s64 = ctx.r10.s64 + -5208;
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82163e18
	ctx.lr = 0x8220DB48;
	sub_82163E18(ctx, base);
	// stw r25,704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 704, ctx.r25.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8220DB60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,700(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// bl 0x8220be20
	ctx.lr = 0x8220DB68;
	sub_8220BE20(ctx, base);
loc_8220DB68:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8220DB70"))) PPC_WEAK_FUNC(sub_8220DB70);
PPC_FUNC_IMPL(__imp__sub_8220DB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8209eda0
	ctx.lr = 0x8220DB88;
	sub_8209EDA0(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220dbd4
	if (ctx.cr6.eq) goto loc_8220DBD4;
	// lwz r4,704(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8220dbc0
	if (ctx.cr6.eq) goto loc_8220DBC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220d510
	ctx.lr = 0x8220DBA8;
	sub_8220D510(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8220dbcc
	goto loc_8220DBCC;
loc_8220DBC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8220DBCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8220DBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220DBD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220DBE8"))) PPC_WEAK_FUNC(sub_8220DBE8);
PPC_FUNC_IMPL(__imp__sub_8220DBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8220dcb4
	if (ctx.cr6.eq) goto loc_8220DCB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,324
	ctx.r3.s64 = ctx.r3.s64 + 324;
	// bl 0x823c3240
	ctx.lr = 0x8220DC18;
	sub_823C3240(ctx, base);
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// blt cr6,0x8220dc50
	if (ctx.cr6.lt) goto loc_8220DC50;
	// bne cr6,0x8220dcb4
	if (!ctx.cr6.eq) goto loc_8220DCB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-5624
	ctx.r11.s64 = ctx.r11.s64 + -5624;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x821eb290
	ctx.lr = 0x8220DC4C;
	sub_821EB290(ctx, base);
	// b 0x8220dcb4
	goto loc_8220DCB4;
loc_8220DC50:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-5624
	ctx.r11.s64 = ctx.r11.s64 + -5624;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x821eb290
	ctx.lr = 0x8220DC6C;
	sub_821EB290(ctx, base);
	// cmplwi cr6,r30,7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 7, ctx.xer);
	// blt cr6,0x8220dc84
	if (ctx.cr6.lt) goto loc_8220DC84;
	// bne cr6,0x8220dcb4
	if (!ctx.cr6.eq) goto loc_8220DCB4;
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// bl 0x8220be20
	ctx.lr = 0x8220DC80;
	sub_8220BE20(ctx, base);
	// b 0x8220dcb4
	goto loc_8220DCB4;
loc_8220DC84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82164c98
	ctx.lr = 0x8220DC8C;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220dca8
	if (ctx.cr6.eq) goto loc_8220DCA8;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// stw r30,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r30.u32);
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// bl 0x8220bd80
	ctx.lr = 0x8220DCA4;
	sub_8220BD80(ctx, base);
	// b 0x8220dcb0
	goto loc_8220DCB0;
loc_8220DCA8:
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// bl 0x8220be20
	ctx.lr = 0x8220DCB0;
	sub_8220BE20(ctx, base);
loc_8220DCB0:
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
loc_8220DCB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220DCCC"))) PPC_WEAK_FUNC(sub_8220DCCC);
PPC_FUNC_IMPL(__imp__sub_8220DCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220DCD0"))) PPC_WEAK_FUNC(sub_8220DCD0);
PPC_FUNC_IMPL(__imp__sub_8220DCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8220DCD8;
	sub_82248750(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r3.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r4,31200
	ctx.r4.s64 = ctx.r4.s64 + 31200;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// addi r4,r27,31240
	ctx.r4.s64 = ctx.r27.s64 + 31240;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r31,31280
	ctx.r5.s64 = ctx.r31.s64 + 31280;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r4,r29,31288
	ctx.r4.s64 = ctx.r29.s64 + 31288;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r11,r11,31232
	ctx.r11.s64 = ctx.r11.s64 + 31232;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r3,31248
	ctx.r3.s64 = ctx.r3.s64 + 31248;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r10,31256
	ctx.r10.s64 = ctx.r10.s64 + 31256;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r8,31264
	ctx.r8.s64 = ctx.r8.s64 + 31264;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r6,r6,31272
	ctx.r6.s64 = ctx.r6.s64 + 31272;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
	// lis r22,-32256
	ctx.r22.s64 = -2113929216;
	// lis r21,-32256
	ctx.r21.s64 = -2113929216;
	// lis r20,-32256
	ctx.r20.s64 = -2113929216;
	// lis r19,-32256
	ctx.r19.s64 = -2113929216;
	// lis r18,-32254
	ctx.r18.s64 = -2113798144;
	// lis r17,-32254
	ctx.r17.s64 = -2113798144;
	// lis r16,-32254
	ctx.r16.s64 = -2113798144;
	// lis r15,-32254
	ctx.r15.s64 = -2113798144;
	// lis r14,-32254
	ctx.r14.s64 = -2113798144;
	// addi r7,r7,31208
	ctx.r7.s64 = ctx.r7.s64 + 31208;
	// addi r30,r30,31216
	ctx.r30.s64 = ctx.r30.s64 + 31216;
	// stw r14,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r14.u32);
	// lis r14,-32178
	ctx.r14.s64 = -2108817408;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r16.u32);
	// addi r24,r24,31296
	ctx.r24.s64 = ctx.r24.s64 + 31296;
	// lwz r16,92(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r9,31380
	ctx.r9.s64 = ctx.r9.s64 + 31380;
	// stw r15,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r15.u32);
	// addi r11,r11,31356
	ctx.r11.s64 = ctx.r11.s64 + 31356;
	// lwz r15,80(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r8,31392
	ctx.r8.s64 = ctx.r8.s64 + 31392;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r24,r16,31312
	ctx.r24.s64 = ctx.r16.s64 + 31312;
	// lwz r16,-792(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -792);
	// addi r15,r15,31304
	ctx.r15.s64 = ctx.r15.s64 + 31304;
	// stw r18,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r18.u32);
	// addi r18,r1,176
	ctx.r18.s64 = ctx.r1.s64 + 176;
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// li r14,42
	ctx.r14.s64 = 42;
	// stw r17,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r17.u32);
	// addi r3,r3,31344
	ctx.r3.s64 = ctx.r3.s64 + 31344;
	// lwz r15,84(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r28,31224
	ctx.r28.s64 = ctx.r28.s64 + 31224;
	// lwz r17,88(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r10,31368
	ctx.r10.s64 = ctx.r10.s64 + 31368;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// addi r16,r15,31332
	ctx.r16.s64 = ctx.r15.s64 + 31332;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r6,r6,31404
	ctx.r6.s64 = ctx.r6.s64 + 31404;
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// addi r5,r5,31416
	ctx.r5.s64 = ctx.r5.s64 + 31416;
	// stw r14,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r14.u32);
	// addi r17,r17,31320
	ctx.r17.s64 = ctx.r17.s64 + 31320;
	// lwz r14,100(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r18,-32254
	ctx.r18.s64 = -2113798144;
	// lwz r15,96(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r24,-32254
	ctx.r24.s64 = -2113798144;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r4,31428
	ctx.r4.s64 = ctx.r4.s64 + 31428;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r31,r31,31440
	ctx.r31.s64 = ctx.r31.s64 + 31440;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r29,r29,31452
	ctx.r29.s64 = ctx.r29.s64 + 31452;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r27,r27,31464
	ctx.r27.s64 = ctx.r27.s64 + 31464;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r23,r23,31500
	ctx.r23.s64 = ctx.r23.s64 + 31500;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r22,r22,31512
	ctx.r22.s64 = ctx.r22.s64 + 31512;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r21,r21,31524
	ctx.r21.s64 = ctx.r21.s64 + 31524;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r20,r20,31536
	ctx.r20.s64 = ctx.r20.s64 + 31536;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r19,r19,31548
	ctx.r19.s64 = ctx.r19.s64 + 31548;
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// stw r14,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r14.u32);
	// stw r15,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r15.u32);
	// lwz r15,152(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r14,160(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,516(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// addi r15,r15,-4664
	ctx.r15.s64 = ctx.r15.s64 + -4664;
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r14,r14,-4676
	ctx.r14.s64 = ctx.r14.s64 + -4676;
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// addi r10,r10,992
	ctx.r10.s64 = ctx.r10.s64 + 992;
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// addi r7,r26,31476
	ctx.r7.s64 = ctx.r26.s64 + 31476;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r26,r25,31488
	ctx.r26.s64 = ctx.r25.s64 + 31488;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r17,156(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r16,84(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// addi r11,r11,-4688
	ctx.r11.s64 = ctx.r11.s64 + -4688;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r18,r18,-4724
	ctx.r18.s64 = ctx.r18.s64 + -4724;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// addi r24,r24,-4736
	ctx.r24.s64 = ctx.r24.s64 + -4736;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// addi r9,r9,-4712
	ctx.r9.s64 = ctx.r9.s64 + -4712;
	// lwz r28,104(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r6,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r6.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r10,r10,-4700
	ctx.r10.s64 = ctx.r10.s64 + -4700;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r5,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r5.u32);
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r8,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stw r29,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r29.u32);
	// stw r27,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r27.u32);
	// addi r27,r11,31164
	ctx.r27.s64 = ctx.r11.s64 + 31164;
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// stw r17,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r17.u32);
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// stw r8,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// stw r6,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// stw r4,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r4.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stw r7,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r7.u32);
	// stw r23,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r23.u32);
	// stw r22,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r22.u32);
	// stw r21,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r21.u32);
	// stw r20,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r20.u32);
	// stw r19,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r19.u32);
	// stw r15,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r15.u32);
	// stw r14,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r14.u32);
	// stw r10,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
	// stw r9,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r9.u32);
	// stw r18,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r18.u32);
	// stw r24,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r24.u32);
loc_8220E060:
	// lwzu r31,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82110430
	ctx.lr = 0x8220E074;
	sub_82110430(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x8209eda0
	ctx.lr = 0x8220E084;
	sub_8209EDA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x821d25f8
	ctx.lr = 0x8220E090;
	sub_821D25F8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,336
	ctx.r29.s64 = ctx.r29.s64 + 336;
	// bne 0x8220e060
	if (!ctx.cr0.eq) goto loc_8220E060;
	// lwz r3,516(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// bl 0x8220bec0
	ctx.lr = 0x8220E0A4;
	sub_8220BEC0(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220E0AC"))) PPC_WEAK_FUNC(sub_8220E0AC);
PPC_FUNC_IMPL(__imp__sub_8220E0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E0B0"))) PPC_WEAK_FUNC(sub_8220E0B0);
PPC_FUNC_IMPL(__imp__sub_8220E0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8220E0B8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x823c5a60
	ctx.lr = 0x8220E0C8;
	sub_823C5A60(ctx, base);
	// addi r30,r31,228
	ctx.r30.s64 = ctx.r31.s64 + 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3b68
	ctx.lr = 0x8220E0D8;
	sub_823C3B68(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821859a0
	ctx.lr = 0x8220E0EC;
	sub_821859A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-4872
	ctx.r8.s64 = ctx.r11.s64 + -4872;
	// addi r7,r10,-4960
	ctx.r7.s64 = ctx.r10.s64 + -4960;
	// addi r6,r9,-4972
	ctx.r6.s64 = ctx.r9.s64 + -4972;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r7.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x823c2ff0
	ctx.lr = 0x8220E11C;
	sub_823C2FF0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r31,992
	ctx.r27.s64 = ctx.r31.s64 + 992;
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// li r28,41
	ctx.r28.s64 = 41;
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// stw r29,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
	// stw r29,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r29.u32);
loc_8220E138:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b29d0
	ctx.lr = 0x8220E140;
	sub_821B29D0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,336
	ctx.r27.s64 = ctx.r27.s64 + 336;
	// bge 0x8220e138
	if (!ctx.cr0.lt) goto loc_8220E138;
	// li r4,67
	ctx.r4.s64 = 67;
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x822aa648
	ctx.lr = 0x8220E158;
	sub_822AA648(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x8220E15C;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823c5678
	ctx.lr = 0x8220E16C;
	sub_823C5678(ctx, base);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220dcd0
	ctx.lr = 0x8220E178;
	sub_8220DCD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3c98
	ctx.lr = 0x8220E180;
	sub_823C3C98(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,-228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -228);
	// addi r3,r30,-228
	ctx.r3.s64 = ctx.r30.s64 + -228;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8220E19C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8220E1A8"))) PPC_WEAK_FUNC(sub_8220E1A8);
PPC_FUNC_IMPL(__imp__sub_8220E1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8220E1B0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r5.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r4,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r4.u32);
	// blt cr6,0x8220e1d4
	if (ctx.cr6.lt) goto loc_8220E1D4;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// bge cr6,0x8220e1d4
	if (!ctx.cr6.lt) goto loc_8220E1D4;
	// stw r5,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r5.u32);
loc_8220E1D4:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821ebaa8
	ctx.lr = 0x8220E1DC;
	sub_821EBAA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb980
	ctx.lr = 0x8220E1E8;
	sub_821EB980(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x8220E1EC;
	sub_821EB3E8(ctx, base);
	// lwz r29,272(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x82183078
	ctx.lr = 0x8220E1F4;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8220E200;
	sub_821837D0(ctx, base);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220e220
	if (ctx.cr6.eq) goto loc_8220E220;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220E220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220E220:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r28.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8220e244
	if (ctx.cr6.lt) goto loc_8220E244;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x8220e264
	if (!ctx.cr6.gt) goto loc_8220E264;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8220e2a0
	if (ctx.cr6.eq) goto loc_8220E2A0;
loc_8220E244:
	// bl 0x82183850
	ctx.lr = 0x8220E248;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8220e280
	if (ctx.cr6.eq) goto loc_8220E280;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,34688
	ctx.r3.u64 = ctx.r3.u64 | 34688;
	// bl 0x82183448
	ctx.lr = 0x8220E260;
	sub_82183448(ctx, base);
	// b 0x8220e288
	goto loc_8220E288;
loc_8220E264:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,34688
	ctx.r3.u64 = ctx.r3.u64 | 34688;
	// bl 0x82080000
	ctx.lr = 0x8220E270;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220e298
	if (ctx.cr6.eq) goto loc_8220E298;
	// bl 0x823e8620
	ctx.lr = 0x8220E27C;
	sub_823E8620(ctx, base);
	// b 0x8220e29c
	goto loc_8220E29C;
loc_8220E280:
	// li r3,2168
	ctx.r3.s64 = 2168;
	// bl 0x821845a0
	ctx.lr = 0x8220E288;
	sub_821845A0(ctx, base);
loc_8220E288:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220e298
	if (ctx.cr6.eq) goto loc_8220E298;
	// bl 0x823c8398
	ctx.lr = 0x8220E294;
	sub_823C8398(ctx, base);
	// b 0x8220e29c
	goto loc_8220E29C;
loc_8220E298:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8220E29C:
	// stw r3,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r3.u32);
loc_8220E2A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8220E2A8;
	sub_821837D0(ctx, base);
	// lwz r30,272(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x82183078
	ctx.lr = 0x8220E2B0;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8220E2BC;
	sub_821837D0(ctx, base);
	// lwz r3,700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220e2dc
	if (ctx.cr6.eq) goto loc_8220E2DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220E2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220E2DC:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r30,51
	ctx.r30.s64 = 51;
	// stw r28,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r28.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8220e2f4
	if (!ctx.cr6.eq) goto loc_8220E2F4;
	// li r30,84
	ctx.r30.s64 = 84;
loc_8220E2F4:
	// bl 0x82183850
	ctx.lr = 0x8220E2F8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8220e310
	if (ctx.cr6.eq) goto loc_8220E310;
	// li r3,15104
	ctx.r3.s64 = 15104;
	// bl 0x82183448
	ctx.lr = 0x8220E30C;
	sub_82183448(ctx, base);
	// b 0x8220e318
	goto loc_8220E318;
loc_8220E310:
	// li r3,944
	ctx.r3.s64 = 944;
	// bl 0x821845a0
	ctx.lr = 0x8220E318;
	sub_821845A0(ctx, base);
loc_8220E318:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220e330
	if (ctx.cr6.eq) goto loc_8220E330;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8220e0b0
	ctx.lr = 0x8220E328;
	sub_8220E0B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8220e334
	goto loc_8220E334;
loc_8220E330:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8220E334:
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r11.u32);
	// stw r10,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r10.u32);
	// bl 0x821837d0
	ctx.lr = 0x8220E348;
	sub_821837D0(ctx, base);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x8220e410
	if (!ctx.cr6.eq) goto loc_8220E410;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821ebaa8
	ctx.lr = 0x8220E35C;
	sub_821EBAA8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r29,r5,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// bl 0x82164c50
	ctx.lr = 0x8220E3B0;
	sub_82164C50(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x8220e3d0
	if (ctx.cr6.lt) goto loc_8220E3D0;
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x82164c98
	ctx.lr = 0x8220E3C0;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220e3d0
	if (ctx.cr6.eq) goto loc_8220E3D0;
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// b 0x8220e3d4
	goto loc_8220E3D4;
loc_8220E3D0:
	// stw r28,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r28.u32);
loc_8220E3D4:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220e408
	if (ctx.cr6.lt) goto loc_8220E408;
	// bne cr6,0x8220e678
	if (!ctx.cr6.eq) goto loc_8220E678;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8220e678
	if (ctx.cr6.eq) goto loc_8220E678;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-5624
	ctx.r11.s64 = ctx.r11.s64 + -5624;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// b 0x8220e66c
	goto loc_8220E66C;
loc_8220E408:
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x8220e660
	goto loc_8220E660;
loc_8220E410:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8220e51c
	if (!ctx.cr6.eq) goto loc_8220E51C;
	// bl 0x82163df0
	ctx.lr = 0x8220E41C;
	sub_82163DF0(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r29,r7,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r8,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r8.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// bl 0x82164c50
	ctx.lr = 0x8220E480;
	sub_82164C50(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x8220e4a0
	if (ctx.cr6.lt) goto loc_8220E4A0;
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// bl 0x82164c98
	ctx.lr = 0x8220E490;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220e4a0
	if (ctx.cr6.eq) goto loc_8220E4A0;
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// b 0x8220e4a4
	goto loc_8220E4A4;
loc_8220E4A0:
	// stw r28,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r28.u32);
loc_8220E4A4:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220e4d8
	if (ctx.cr6.lt) goto loc_8220E4D8;
	// bne cr6,0x8220e4f4
	if (!ctx.cr6.eq) goto loc_8220E4F4;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8220e4f4
	if (ctx.cr6.eq) goto loc_8220E4F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-5624
	ctx.r11.s64 = ctx.r11.s64 + -5624;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// b 0x8220e4e8
	goto loc_8220E4E8;
loc_8220E4D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-5624
	ctx.r11.s64 = ctx.r11.s64 + -5624;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
loc_8220E4E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x821eb290
	ctx.lr = 0x8220E4F4;
	sub_821EB290(ctx, base);
loc_8220E4F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220bc80
	ctx.lr = 0x8220E4FC;
	sub_8220BC80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a208
	ctx.lr = 0x8220E504;
	sub_8220A208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a5c8
	ctx.lr = 0x8220E50C;
	sub_8220A5C8(ctx, base);
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r10,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r10.u32);
	// b 0x8220e690
	goto loc_8220E690;
loc_8220E51C:
	// lwz r8,300(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r28,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r28.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rotlwi r27,r6,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,12(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// bgt cr6,0x8220e628
	if (ctx.cr6.gt) goto loc_8220E628;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8220e5cc
	if (ctx.cr6.eq) goto loc_8220E5CC;
	// bdz 0x8220e5cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220E5CC;
	// bdz 0x8220e598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220E598;
	// bdz 0x8220e5f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220E5F8;
	// bdz 0x8220e5f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220E5F8;
	// bdz 0x8220e5f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8220E5F8;
	// b 0x8220e5f8
	goto loc_8220E5F8;
loc_8220E598:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r31,656
	ctx.r29.s64 = ctx.r31.s64 + 656;
loc_8220E5A0:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// beq cr6,0x8220e5b4
	if (ctx.cr6.eq) goto loc_8220E5B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82164c98
	ctx.lr = 0x8220E5B0;
	sub_82164C98(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_8220E5B4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r28,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r28.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8220e5a0
	if (ctx.cr6.lt) goto loc_8220E5A0;
	// b 0x8220e628
	goto loc_8220E628;
loc_8220E5CC:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r31,656
	ctx.r11.s64 = ctx.r31.s64 + 656;
loc_8220E5D8:
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8220e5e4
	if (ctx.cr6.eq) goto loc_8220E5E4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8220E5E4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8220e5d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220E5D8;
	// b 0x8220e628
	goto loc_8220E628;
loc_8220E5F8:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r31,656
	ctx.r29.s64 = ctx.r31.s64 + 656;
loc_8220E600:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// beq cr6,0x8220e614
	if (ctx.cr6.eq) goto loc_8220E614;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82164c98
	ctx.lr = 0x8220E610;
	sub_82164C98(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_8220E614:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r28,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r28.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8220e600
	if (ctx.cr6.lt) goto loc_8220E600;
loc_8220E628:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8220e65c
	if (ctx.cr6.lt) goto loc_8220E65C;
	// bne cr6,0x8220e678
	if (!ctx.cr6.eq) goto loc_8220E678;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8220e678
	if (ctx.cr6.eq) goto loc_8220E678;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-5624
	ctx.r11.s64 = ctx.r11.s64 + -5624;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// b 0x8220e66c
	goto loc_8220E66C;
loc_8220E65C:
	// rlwinm r10,r27,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
loc_8220E660:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-5624
	ctx.r11.s64 = ctx.r11.s64 + -5624;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
loc_8220E66C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x821eb290
	ctx.lr = 0x8220E678;
	sub_821EB290(ctx, base);
loc_8220E678:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220bc80
	ctx.lr = 0x8220E680;
	sub_8220BC80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a208
	ctx.lr = 0x8220E688;
	sub_8220A208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a5c8
	ctx.lr = 0x8220E690;
	sub_8220A5C8(ctx, base);
loc_8220E690:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x8220E6B0;
	sub_823C31B0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8220E6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8220E6CC"))) PPC_WEAK_FUNC(sub_8220E6CC);
PPC_FUNC_IMPL(__imp__sub_8220E6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E6D0"))) PPC_WEAK_FUNC(sub_8220E6D0);
PPC_FUNC_IMPL(__imp__sub_8220E6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8220E6D8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x823c3b68
	ctx.lr = 0x8220E6F4;
	sub_823C3B68(ctx, base);
	// addi r26,r31,28
	ctx.r26.s64 = ctx.r31.s64 + 28;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c5a60
	ctx.lr = 0x8220E700;
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
	ctx.lr = 0x8220E714;
	sub_821859A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r27,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r27.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,-5056
	ctx.r8.s64 = ctx.r11.s64 + -5056;
	// addi r7,r10,-5192
	ctx.r7.s64 = ctx.r10.s64 + -5192;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// addi r6,r9,-5204
	ctx.r6.s64 = ctx.r9.s64 + -5204;
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// bl 0x823c2ff0
	ctx.lr = 0x8220E768;
	sub_823C2FF0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x823c35b8
	ctx.lr = 0x8220E778;
	sub_823C35B8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,868
	ctx.r11.s64 = ctx.r31.s64 + 868;
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r29,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r29.u32);
	// stw r29,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r29.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r29,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r29.u32);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// stw r29,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r29.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r29,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r29.u32);
	// stw r29,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r29.u32);
	// stw r29,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r29.u32);
	// stw r29,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r29.u32);
	// stw r29,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r29.u32);
	// stw r29,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r29.u32);
	// stw r29,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r29.u32);
	// stw r30,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r30.u32);
	// stw r5,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r5.u32);
	// stw r30,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r30.u32);
loc_8220E7D4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8220e7d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220E7D4;
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// addi r28,r31,708
	ctx.r28.s64 = ctx.r31.s64 + 708;
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r30,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822aa648
	ctx.lr = 0x8220E7F8;
	sub_822AA648(ctx, base);
	// addi r11,r31,740
	ctx.r11.s64 = ctx.r31.s64 + 740;
	// addi r10,r31,772
	ctx.r10.s64 = ctx.r31.s64 + 772;
	// stw r28,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r28.u32);
	// addi r9,r31,804
	ctx.r9.s64 = ctx.r31.s64 + 804;
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// stw r10,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r10.u32);
	// addi r11,r31,852
	ctx.r11.s64 = ctx.r31.s64 + 852;
	// stw r9,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r9.u32);
	// addi r11,r31,860
	ctx.r11.s64 = ctx.r31.s64 + 860;
	// stw r30,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r30.u32);
	// stw r30,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r30.u32);
	// stw r29,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r29.u32);
	// stw r29,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r29.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8220E830;
	sub_8215BD08(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x823c5678
	ctx.lr = 0x8220E840;
	sub_823C5678(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e1a8
	ctx.lr = 0x8220E850;
	sub_8220E1A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8220E85C"))) PPC_WEAK_FUNC(sub_8220E85C);
PPC_FUNC_IMPL(__imp__sub_8220E85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E860"))) PPC_WEAK_FUNC(sub_8220E860);
PPC_FUNC_IMPL(__imp__sub_8220E860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,-256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -256);
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8220E880"))) PPC_WEAK_FUNC(sub_8220E880);
PPC_FUNC_IMPL(__imp__sub_8220E880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220E884"))) PPC_WEAK_FUNC(sub_8220E884);
PPC_FUNC_IMPL(__imp__sub_8220E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E888"))) PPC_WEAK_FUNC(sub_8220E888);
PPC_FUNC_IMPL(__imp__sub_8220E888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8220E89C"))) PPC_WEAK_FUNC(sub_8220E89C);
PPC_FUNC_IMPL(__imp__sub_8220E89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E8A0"))) PPC_WEAK_FUNC(sub_8220E8A0);
PPC_FUNC_IMPL(__imp__sub_8220E8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8220E8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x823c3468
	ctx.lr = 0x8220E8D0;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3cd8
	ctx.lr = 0x8220E8D8;
	sub_823C3CD8(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x8220E8DC;
	sub_821EB3E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ebaa8
	ctx.lr = 0x8220E8E4;
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

__attribute__((alias("__imp__sub_8220E8F8"))) PPC_WEAK_FUNC(sub_8220E8F8);
PPC_FUNC_IMPL(__imp__sub_8220E8F8) {
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
	// li r7,20047
	ctx.r7.s64 = 20047;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8220E93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r5,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// bl 0x821eb290
	ctx.lr = 0x8220E950;
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

__attribute__((alias("__imp__sub_8220E964"))) PPC_WEAK_FUNC(sub_8220E964);
PPC_FUNC_IMPL(__imp__sub_8220E964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220E968"))) PPC_WEAK_FUNC(sub_8220E968);
PPC_FUNC_IMPL(__imp__sub_8220E968) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8220e97c
	if (ctx.cr6.eq) goto loc_8220E97C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8220E97C:
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8220e98c
	if (ctx.cr6.eq) goto loc_8220E98C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8220E98C:
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8220e99c
	if (ctx.cr6.eq) goto loc_8220E99C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8220E99C:
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8220e9ac
	if (ctx.cr6.eq) goto loc_8220E9AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8220E9AC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,369
	ctx.r8.s64 = 369;
	// li r7,370
	ctx.r7.s64 = 370;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// li r6,371
	ctx.r6.s64 = 371;
	// stw r7,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r7.u32);
	// li r5,372
	ctx.r5.s64 = 372;
	// li r4,373
	ctx.r4.s64 = 373;
	// stw r6,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r6.u32);
	// li r11,374
	ctx.r11.s64 = 374;
	// stw r5,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r5.u32);
	// li r8,375
	ctx.r8.s64 = 375;
	// stw r4,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// li r7,376
	ctx.r7.s64 = 376;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r6,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EA0C"))) PPC_WEAK_FUNC(sub_8220EA0C);
PPC_FUNC_IMPL(__imp__sub_8220EA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220EA10"))) PPC_WEAK_FUNC(sub_8220EA10);
PPC_FUNC_IMPL(__imp__sub_8220EA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8220EA18;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-7488(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8220eb18
	if (ctx.cr6.eq) goto loc_8220EB18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821addc0
	ctx.lr = 0x8220EA3C;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821add20
	ctx.lr = 0x8220EA48;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad600
	ctx.lr = 0x8220EA58;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad498
	ctx.lr = 0x8220EA64;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
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
	// ble cr6,0x8220eb00
	if (!ctx.cr6.gt) goto loc_8220EB00;
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,132(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 132, temp.u32);
	// lwz r4,368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x8210a9b0
	ctx.lr = 0x8220EAB8;
	sub_8210A9B0(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r11,r6,58308
	ctx.r11.u64 = ctx.r6.u64 | 58308;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,404
	ctx.r4.s64 = 404;
	// stfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x8210a9b0
	ctx.lr = 0x8220EAE0;
	sub_8210A9B0(ctx, base);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220eb00
	if (ctx.cr6.eq) goto loc_8220EB00;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220EB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220EB00:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad600
	ctx.lr = 0x8220EB0C;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad498
	ctx.lr = 0x8220EB18;
	sub_821AD498(ctx, base);
loc_8220EB18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8220EB24"))) PPC_WEAK_FUNC(sub_8220EB24);
PPC_FUNC_IMPL(__imp__sub_8220EB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220EB28"))) PPC_WEAK_FUNC(sub_8220EB28);
PPC_FUNC_IMPL(__imp__sub_8220EB28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
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

__attribute__((alias("__imp__sub_8220EB44"))) PPC_WEAK_FUNC(sub_8220EB44);
PPC_FUNC_IMPL(__imp__sub_8220EB44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EB48"))) PPC_WEAK_FUNC(sub_8220EB48);
PPC_FUNC_IMPL(__imp__sub_8220EB48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
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

__attribute__((alias("__imp__sub_8220EB64"))) PPC_WEAK_FUNC(sub_8220EB64);
PPC_FUNC_IMPL(__imp__sub_8220EB64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EB68"))) PPC_WEAK_FUNC(sub_8220EB68);
PPC_FUNC_IMPL(__imp__sub_8220EB68) {
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
	// beq cr6,0x8220ecbc
	if (ctx.cr6.eq) goto loc_8220ECBC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220ecbc
	if (ctx.cr6.eq) goto loc_8220ECBC;
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
	// beq cr6,0x8220ec14
	if (ctx.cr6.eq) goto loc_8220EC14;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8220EBC4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8220ebd0
	if (!ctx.cr0.lt) goto loc_8220EBD0;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8220EBD0:
	// addi r9,r11,77
	ctx.r9.s64 = ctx.r11.s64 + 77;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8220ebc4
	if (ctx.cr6.eq) goto loc_8220EBC4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8220ec14
	if (ctx.cr6.eq) goto loc_8220EC14;
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
	ctx.lr = 0x8220EC08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_8220EC14:
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
	// beq cr6,0x8220ec9c
	if (ctx.cr6.eq) goto loc_8220EC9C;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8220EC3C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,4
	ctx.r10.s64 = 4;
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
	// addi r4,r11,77
	ctx.r4.s64 = ctx.r11.s64 + 77;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8220ec3c
	if (ctx.cr6.eq) goto loc_8220EC3C;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8220ec9c
	if (ctx.cr6.eq) goto loc_8220EC9C;
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
	ctx.lr = 0x8220EC90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_8220EC9C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220ecbc
	if (ctx.cr6.eq) goto loc_8220ECBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220ECBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220ECBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220ECD4"))) PPC_WEAK_FUNC(sub_8220ECD4);
PPC_FUNC_IMPL(__imp__sub_8220ECD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220ECD8"))) PPC_WEAK_FUNC(sub_8220ECD8);
PPC_FUNC_IMPL(__imp__sub_8220ECD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// addi r10,r5,84
	ctx.r10.s64 = ctx.r5.s64 + 84;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x8220ed30
	if (!ctx.cr6.eq) goto loc_8220ED30;
loc_8220ED00:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,4
	ctx.r10.s64 = 4;
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
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8220ed00
	if (ctx.cr6.eq) goto loc_8220ED00;
loc_8220ED30:
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
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r6,20045
	ctx.r6.s64 = 20045;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r4,20046
	ctx.r4.s64 = 20046;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r10,20047
	ctx.r10.s64 = 20047;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
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
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8220ED98;
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
	ctx.lr = 0x8220EDAC;
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

__attribute__((alias("__imp__sub_8220EDC0"))) PPC_WEAK_FUNC(sub_8220EDC0);
PPC_FUNC_IMPL(__imp__sub_8220EDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,376(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 376);
	// stw r11,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r11.u32);
	// lwz r7,276(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r5,376(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 376);
	// stw r11,452(r5)
	PPC_STORE_U32(ctx.r5.u32 + 452, ctx.r11.u32);
	// lwz r4,276(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,376(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	// stw r11,708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 708, ctx.r11.u32);
	// lwz r8,276(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,376(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 376);
	// stw r11,964(r6)
	PPC_STORE_U32(ctx.r6.u32 + 964, ctx.r11.u32);
	// lwz r5,276(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,388(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	// stw r11,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r11.u32);
	// lwz r9,276(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,388(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 388);
	// stw r11,452(r7)
	PPC_STORE_U32(ctx.r7.u32 + 452, ctx.r11.u32);
	// lwz r6,276(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,388(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 388);
	// stw r11,708(r4)
	PPC_STORE_U32(ctx.r4.u32 + 708, ctx.r11.u32);
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,388(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 388);
	// stw r11,964(r8)
	PPC_STORE_U32(ctx.r8.u32 + 964, ctx.r11.u32);
	// lwz r7,276(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r5,400(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 400);
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
	// lwz r4,276(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,400(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 400);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// lwz r8,276(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,400(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 400);
	// stw r11,708(r6)
	PPC_STORE_U32(ctx.r6.u32 + 708, ctx.r11.u32);
	// lwz r5,276(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,400(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 400);
	// stw r11,964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 964, ctx.r11.u32);
	// lwz r9,276(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,412(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 412);
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
	// lwz r6,276(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,412(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 412);
	// stw r11,452(r4)
	PPC_STORE_U32(ctx.r4.u32 + 452, ctx.r11.u32);
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,412(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 412);
	// stw r11,708(r8)
	PPC_STORE_U32(ctx.r8.u32 + 708, ctx.r11.u32);
	// lwz r7,276(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r5,412(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 412);
	// stw r11,964(r5)
	PPC_STORE_U32(ctx.r5.u32 + 964, ctx.r11.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220EEE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// lwz r8,276(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r10.u32);
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r10.u32);
	// lwz r8,276(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,708(r6)
	PPC_STORE_U32(ctx.r6.u32 + 708, ctx.r10.u32);
	// lwz r5,276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 964, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220EF60"))) PPC_WEAK_FUNC(sub_8220EF60);
PPC_FUNC_IMPL(__imp__sub_8220EF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r9,r10,47368
	ctx.r9.u64 = ctx.r10.u64 | 47368;
	// ori r8,r8,47624
	ctx.r8.u64 = ctx.r8.u64 | 47624;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r7,r7,47880
	ctx.r7.u64 = ctx.r7.u64 | 47880;
	// ori r6,r6,48136
	ctx.r6.u64 = ctx.r6.u64 | 48136;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,352(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 352, temp.u32);
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,356(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 356, temp.u32);
	// lfsx f12,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,360(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 360, temp.u32);
	// lfsx f11,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,364(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// lwz r5,336(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8220efe4
	if (!ctx.cr6.eq) goto loc_8220EFE4;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r9,47556
	ctx.r4.u64 = ctx.r9.u64 | 47556;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r5,r5,46532
	ctx.r5.u64 = ctx.r5.u64 | 46532;
	// stwx r9,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r4,276(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// b 0x8220f010
	goto loc_8220F010;
loc_8220EFE4:
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lfs f0,352(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// ori r4,r10,46344
	ctx.r4.u64 = ctx.r10.u64 | 46344;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stfsx f0,r11,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// lfs f13,352(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r11,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
loc_8220F010:
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8220f048
	if (!ctx.cr6.eq) goto loc_8220F048;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r8,47812
	ctx.r4.u64 = ctx.r8.u64 | 47812;
	// ori r8,r5,46788
	ctx.r8.u64 = ctx.r5.u64 | 46788;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r4,276(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x8220f074
	goto loc_8220F074;
loc_8220F048:
	// lwz r5,276(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r4,r10,88
	ctx.r4.s64 = ctx.r10.s64 + 88;
	// lis r31,1
	ctx.r31.s64 = 65536;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r4,r31,46600
	ctx.r4.u64 = ctx.r31.u64 | 46600;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r5,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r5,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
loc_8220F074:
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8220f0ac
	if (!ctx.cr6.eq) goto loc_8220F0AC;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r5,r8,48068
	ctx.r5.u64 = ctx.r8.u64 | 48068;
	// ori r4,r7,47044
	ctx.r4.u64 = ctx.r7.u64 | 47044;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r8,276(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r9,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r9.u32);
	// b 0x8220f0d8
	goto loc_8220F0D8;
loc_8220F0AC:
	// lwz r8,276(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r5,r10,88
	ctx.r5.s64 = ctx.r10.s64 + 88;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r4,46856
	ctx.r5.u64 = ctx.r4.u64 | 46856;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r4,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, temp.u32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r4,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
loc_8220F0D8:
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8220f114
	if (!ctx.cr6.eq) goto loc_8220F114;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r10,48324
	ctx.r7.u64 = ctx.r10.u64 | 48324;
	// ori r6,r8,47300
	ctx.r6.u64 = ctx.r8.u64 | 47300;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r4,276(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r9,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8220F114:
	// lwz r9,276(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r8,r10,88
	ctx.r8.s64 = ctx.r10.s64 + 88;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r7,47112
	ctx.r5.u64 = ctx.r7.u64 | 47112;
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r4,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r4,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220F144"))) PPC_WEAK_FUNC(sub_8220F144);
PPC_FUNC_IMPL(__imp__sub_8220F144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220F148"))) PPC_WEAK_FUNC(sub_8220F148);
PPC_FUNC_IMPL(__imp__sub_8220F148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8220F150;
	sub_8224878C(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249928
	ctx.lr = 0x8220F158;
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
	// li r31,372
	ctx.r31.s64 = 372;
	// lfs f30,11308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	ctx.f30.f64 = double(temp.f32);
	// addi r29,r11,30956
	ctx.r29.s64 = ctx.r11.s64 + 30956;
	// lfs f31,-31244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31244);
	ctx.f31.f64 = double(temp.f32);
loc_8220F18C:
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
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
	ctx.lr = 0x8220F1A8;
	sub_8224A7B8(ctx, base);
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
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
	// beq cr6,0x8220f1fc
	if (ctx.cr6.eq) goto loc_8220F1FC;
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
	// b 0x8220f228
	goto loc_8220F228;
loc_8220F1FC:
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
loc_8220F228:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r31,420
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 420, ctx.xer);
	// blt cr6,0x8220f18c
	if (ctx.cr6.lt) goto loc_8220F18C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249974
	ctx.lr = 0x8220F240;
	sub_82249974(ctx, base);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8220F244"))) PPC_WEAK_FUNC(sub_8220F244);
PPC_FUNC_IMPL(__imp__sub_8220F244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220F248"))) PPC_WEAK_FUNC(sub_8220F248);
PPC_FUNC_IMPL(__imp__sub_8220F248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8220F250;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220f430
	if (!ctx.cr6.eq) goto loc_8220F430;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// addi r29,r3,336
	ctx.r29.s64 = ctx.r3.s64 + 336;
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// stw r11,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r11.u32);
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8220F280;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x8220F284;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220f294
	if (!ctx.cr6.eq) goto loc_8220F294;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r11.u32);
loc_8220F294:
	// bl 0x8222e080
	ctx.lr = 0x8220F298;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220f2a8
	if (!ctx.cr6.eq) goto loc_8220F2A8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r11.u32);
loc_8220F2A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,264
	ctx.r31.s64 = 264;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_8220F2B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x8220F2BC;
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
	// beq cr6,0x8220f2f8
	if (ctx.cr6.eq) goto loc_8220F2F8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x8220F2E4;
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
loc_8220F2F8:
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
	// lwz r7,276(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
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
	// stfs f7,968(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 968, temp.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f6,972(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 972, temp.u32);
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
	// stfs f3,976(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 976, temp.u32);
	// lwz r5,276(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f7,712(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 712, temp.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f6,716(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 716, temp.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stfs f3,720(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 720, temp.u32);
	// lwz r6,276(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
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
	// lwz r8,276(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
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
	// cmpwi cr6,r31,312
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 312, ctx.xer);
	// blt cr6,0x8220f2b4
	if (ctx.cr6.lt) goto loc_8220F2B4;
loc_8220F430:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8220F43C"))) PPC_WEAK_FUNC(sub_8220F43C);
PPC_FUNC_IMPL(__imp__sub_8220F43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220F440"))) PPC_WEAK_FUNC(sub_8220F440);
PPC_FUNC_IMPL(__imp__sub_8220F440) {
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
	ctx.lr = 0x8220F464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,84
	ctx.r9.s64 = ctx.r3.s64 + 84;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8220f4e8
	if (!ctx.cr6.eq) goto loc_8220F4E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x8220F480;
	sub_821EBB58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8220F490;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8220F4A0;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x8220F4A4;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220f4b4
	if (!ctx.cr6.eq) goto loc_8220F4B4;
	// li r11,30228
	ctx.r11.s64 = 30228;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8220F4B4:
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
	ctx.lr = 0x8220F4D0;
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
loc_8220F4E8:
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

__attribute__((alias("__imp__sub_8220F500"))) PPC_WEAK_FUNC(sub_8220F500);
PPC_FUNC_IMPL(__imp__sub_8220F500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x8218b408
	ctx.lr = 0x8220F524;
	sub_8218B408(ctx, base);
	// ld r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f0,11300(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lwz r6,268(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 268);
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
	// stfs f4,456(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 456, temp.u32);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r4,268(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 268);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,460(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 460, temp.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// stfs f2,464(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 464, temp.u32);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,268(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	// stfs f4,712(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 712, temp.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,268(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 268);
	// stfs f3,716(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 716, temp.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,268(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 268);
	// stfs f2,720(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 720, temp.u32);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// stfs f4,456(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 456, temp.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,280(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// stfs f3,460(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 460, temp.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,280(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 280);
	// stfs f2,464(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 464, temp.u32);
	// lwz r5,276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r3,280(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	// stfs f4,712(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 712, temp.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// stfs f3,716(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 716, temp.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r8,280(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// stfs f2,720(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 720, temp.u32);
	// lwz r7,276(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r5,292(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 292);
	// stfs f4,456(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 456, temp.u32);
	// lwz r4,12(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r11,292(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 292);
	// stfs f3,460(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 460, temp.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// stfs f2,464(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 464, temp.u32);
	// lwz r8,276(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,292(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 292);
	// stfs f4,712(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 712, temp.u32);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r4,292(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 292);
	// stfs f3,716(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 716, temp.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stfs f2,720(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 720, temp.u32);
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,304(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 304);
	// stfs f4,456(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 456, temp.u32);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r5,304(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 304);
	// stfs f3,460(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 460, temp.u32);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,304(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 304);
	// stfs f2,464(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 464, temp.u32);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,304(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// stfs f4,712(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 712, temp.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,304(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 304);
	// stfs f3,716(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 716, temp.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,304(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 304);
	// stfs f2,720(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 720, temp.u32);
	// bl 0x8220edc0
	ctx.lr = 0x8220F6DC;
	sub_8220EDC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f248
	ctx.lr = 0x8220F6E4;
	sub_8220F248(ctx, base);
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

__attribute__((alias("__imp__sub_8220F6F8"))) PPC_WEAK_FUNC(sub_8220F6F8);
PPC_FUNC_IMPL(__imp__sub_8220F6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8220F700;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,264
	ctx.r31.s64 = 264;
	// stw r29,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r29.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f31,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_8220F724:
	// lwz r10,276(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r28,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r28.u32);
	// lwz r7,276(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r28,452(r5)
	PPC_STORE_U32(ctx.r5.u32 + 452, ctx.r28.u32);
	// lwz r4,276(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r28,708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 708, ctx.r28.u32);
	// lwz r8,276(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r28,964(r6)
	PPC_STORE_U32(ctx.r6.u32 + 964, ctx.r28.u32);
	// bl 0x8218b408
	ctx.lr = 0x8220F780;
	sub_8218B408(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// bctrl 
	ctx.lr = 0x8220F7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8220f7d0
	if (!ctx.cr6.eq) goto loc_8220F7D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x8220F7BC;
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
loc_8220F7D0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,276(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
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
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// stfs f8,456(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f6,460(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 460, temp.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,464(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 464, temp.u32);
	// lwz r7,276(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stfs f8,712(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 712, temp.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f6,716(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 716, temp.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f3,720(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 720, temp.u32);
	// cmpwi cr6,r31,312
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 312, ctx.xer);
	// blt cr6,0x8220f724
	if (ctx.cr6.lt) goto loc_8220F724;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8220F8A8"))) PPC_WEAK_FUNC(sub_8220F8A8);
PPC_FUNC_IMPL(__imp__sub_8220F8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8220F8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220f8f8
	if (ctx.cr6.eq) goto loc_8220F8F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220F8F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220F8F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220F90C"))) PPC_WEAK_FUNC(sub_8220F90C);
PPC_FUNC_IMPL(__imp__sub_8220F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220F910"))) PPC_WEAK_FUNC(sub_8220F910);
PPC_FUNC_IMPL(__imp__sub_8220F910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8220F918;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-4504
	ctx.r8.s64 = ctx.r11.s64 + -4504;
	// addi r7,r10,-4640
	ctx.r7.s64 = ctx.r10.s64 + -4640;
	// addi r6,r9,-4652
	ctx.r6.s64 = ctx.r9.s64 + -4652;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// bl 0x82107368
	ctx.lr = 0x8220F954;
	sub_82107368(ctx, base);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220f974
	if (ctx.cr6.eq) goto loc_8220F974;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220F974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220F974:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,47368
	ctx.r9.u64 = ctx.r11.u64 | 47368;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// lfs f0,352(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,276(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r7,46344
	ctx.r4.u64 = ctx.r7.u64 | 46344;
	// stfsx f0,r6,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// ori r11,r5,47624
	ctx.r11.u64 = ctx.r5.u64 | 47624;
	// lfs f13,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfsx f13,r9,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r10,46600
	ctx.r7.u64 = ctx.r10.u64 | 46600;
	// lwz r6,276(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lfs f12,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfsx f12,r5,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// ori r4,r8,47880
	ctx.r4.u64 = ctx.r8.u64 | 47880;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lfs f11,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfsx f11,r10,r7
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,276(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// ori r9,r3,46856
	ctx.r9.u64 = ctx.r3.u64 | 46856;
	// lfs f10,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfsx f10,r6,r4
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r5,r8,48136
	ctx.r5.u64 = ctx.r8.u64 | 48136;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lfs f9,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfsx f9,r11,r9
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// ori r10,r4,47112
	ctx.r10.u64 = ctx.r4.u64 | 47112;
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lfs f8,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f8.f64 = double(temp.f32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfsx f8,r8,r5
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// lwz r7,276(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lfs f7,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f7.f64 = double(temp.f32);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfsx f7,r6,r10
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x823c3048
	ctx.lr = 0x8220FA44;
	sub_823C3048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x8220FA4C;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x8220FA54;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x8220FA5C;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8220FA64"))) PPC_WEAK_FUNC(sub_8220FA64);
PPC_FUNC_IMPL(__imp__sub_8220FA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220FA68"))) PPC_WEAK_FUNC(sub_8220FA68);
PPC_FUNC_IMPL(__imp__sub_8220FA68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x822100f8
	sub_822100F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220FA70"))) PPC_WEAK_FUNC(sub_8220FA70);
PPC_FUNC_IMPL(__imp__sub_8220FA70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x822100f8
	sub_822100F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8220FA78"))) PPC_WEAK_FUNC(sub_8220FA78);
PPC_FUNC_IMPL(__imp__sub_8220FA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8220FA80;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x8220FA8C;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8220FA94;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8220FAA0;
	sub_821837D0(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x823c3410
	ctx.lr = 0x8220FAA8;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x8220FAB0;
	sub_823C3C70(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821ebaa8
	ctx.lr = 0x8220FAB8;
	sub_821EBAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220edc0
	ctx.lr = 0x8220FAC0;
	sub_8220EDC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f148
	ctx.lr = 0x8220FAC8;
	sub_8220F148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ef60
	ctx.lr = 0x8220FAD0;
	sub_8220EF60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e968
	ctx.lr = 0x8220FAD8;
	sub_8220E968(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8220FAE0;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8220FAE8"))) PPC_WEAK_FUNC(sub_8220FAE8);
PPC_FUNC_IMPL(__imp__sub_8220FAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8220f248
	ctx.lr = 0x8220FB00;
	sub_8220F248(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8220fb14
	if (!ctx.cr6.eq) goto loc_8220FB14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f8a8
	ctx.lr = 0x8220FB14;
	sub_8220F8A8(ctx, base);
loc_8220FB14:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fc2c
	if (ctx.cr6.eq) goto loc_8220FC2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220FB30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220fc2c
	if (ctx.cr6.eq) goto loc_8220FC2C;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220FB4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220fbc0
	if (ctx.cr6.eq) goto loc_8220FBC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220FB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8220fbd4
	if (!ctx.cr6.eq) goto loc_8220FBD4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// ori r9,r11,33820
	ctx.r9.u64 = ctx.r11.u64 | 33820;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8220fbd4
	if (ctx.cr6.eq) goto loc_8220FBD4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220FBA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3ca8
	ctx.lr = 0x8220FBAC;
	sub_823C3CA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8220FBC0:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220FBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220FBD4:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fbf4
	if (ctx.cr6.eq) goto loc_8220FBF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220FBF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220FBF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220FC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821ebaa8
	ctx.lr = 0x8220FC18;
	sub_821EBAA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e8f8
	ctx.lr = 0x8220FC24;
	sub_8220E8F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f500
	ctx.lr = 0x8220FC2C;
	sub_8220F500(ctx, base);
loc_8220FC2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220FC40"))) PPC_WEAK_FUNC(sub_8220FC40);
PPC_FUNC_IMPL(__imp__sub_8220FC40) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8220edc0
	ctx.lr = 0x8220FC64;
	sub_8220EDC0(ctx, base);
	// lwz r7,-28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// li r11,20044
	ctx.r11.s64 = 20044;
	// li r10,20045
	ctx.r10.s64 = 20045;
	// li r9,20046
	ctx.r9.s64 = 20046;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,20047
	ctx.r8.s64 = 20047;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8220FC98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r5,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// bl 0x821eb290
	ctx.lr = 0x8220FCAC;
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

__attribute__((alias("__imp__sub_8220FCC4"))) PPC_WEAK_FUNC(sub_8220FCC4);
PPC_FUNC_IMPL(__imp__sub_8220FCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8220FCC8"))) PPC_WEAK_FUNC(sub_8220FCC8);
PPC_FUNC_IMPL(__imp__sub_8220FCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8220FCF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,77
	ctx.r9.s64 = ctx.r3.s64 + 77;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8220fd14
	if (!ctx.cr6.eq) goto loc_8220FD14;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220fd40
	goto loc_8220FD40;
loc_8220FD14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220f440
	ctx.lr = 0x8220FD1C;
	sub_8220F440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220fd3c
	if (ctx.cr6.eq) goto loc_8220FD3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// b 0x8220fd40
	goto loc_8220FD40;
loc_8220FD3C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8220FD40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220FD58"))) PPC_WEAK_FUNC(sub_8220FD58);
PPC_FUNC_IMPL(__imp__sub_8220FD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8220FD60;
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
	ctx.lr = 0x8220FD80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220f6f8
	ctx.lr = 0x8220FD8C;
	sub_8220F6F8(ctx, base);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bgt cr6,0x8220ff24
	if (ctx.cr6.gt) goto loc_8220FF24;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8220fe04
	// bdzf 4*cr6+eq,0x8220fe60
	// bne cr6,0x8220febc
	if (!ctx.cr6.eq) goto loc_8220FEBC;
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fdc8
	if (ctx.cr6.eq) goto loc_8220FDC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220FDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220FDC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,4972
	ctx.r3.s64 = 4972;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// bl 0x82080000
	ctx.lr = 0x8220FDD8;
	sub_82080000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220ff1c
	if (ctx.cr6.eq) goto loc_8220FF1C;
	// bl 0x8215bd08
	ctx.lr = 0x8220FDE8;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82202b30
	ctx.lr = 0x8220FE00;
	sub_82202B30(ctx, base);
	// b 0x8220ff20
	goto loc_8220FF20;
loc_8220FE04:
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fe24
	if (ctx.cr6.eq) goto loc_8220FE24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220FE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220FE24:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,4972
	ctx.r3.s64 = 4972;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// bl 0x82080000
	ctx.lr = 0x8220FE34;
	sub_82080000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220ff1c
	if (ctx.cr6.eq) goto loc_8220FF1C;
	// bl 0x8215bd08
	ctx.lr = 0x8220FE44;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82202f10
	ctx.lr = 0x8220FE5C;
	sub_82202F10(ctx, base);
	// b 0x8220ff20
	goto loc_8220FF20;
loc_8220FE60:
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fe80
	if (ctx.cr6.eq) goto loc_8220FE80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220FE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220FE80:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1172
	ctx.r3.s64 = 1172;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// bl 0x82080000
	ctx.lr = 0x8220FE90;
	sub_82080000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220ff1c
	if (ctx.cr6.eq) goto loc_8220FF1C;
	// bl 0x8215bd08
	ctx.lr = 0x8220FEA0;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82204320
	ctx.lr = 0x8220FEB8;
	sub_82204320(ctx, base);
	// b 0x8220ff20
	goto loc_8220FF20;
loc_8220FEBC:
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220fedc
	if (ctx.cr6.eq) goto loc_8220FEDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220FEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220FEDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// ori r3,r3,33824
	ctx.r3.u64 = ctx.r3.u64 | 33824;
	// bl 0x82080000
	ctx.lr = 0x8220FEF0;
	sub_82080000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220ff1c
	if (ctx.cr6.eq) goto loc_8220FF1C;
	// bl 0x8215bd08
	ctx.lr = 0x8220FF00;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82212bf8
	ctx.lr = 0x8220FF18;
	sub_82212BF8(ctx, base);
	// b 0x8220ff20
	goto loc_8220FF20;
loc_8220FF1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220FF20:
	// stw r3,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r3.u32);
loc_8220FF24:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220FF38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8220FF40"))) PPC_WEAK_FUNC(sub_8220FF40);
PPC_FUNC_IMPL(__imp__sub_8220FF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8220FF48;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x823c3b68
	ctx.lr = 0x8220FF68;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823c58b0
	ctx.lr = 0x8220FF78;
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
	ctx.lr = 0x8220FF8C;
	sub_821859A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,-4504
	ctx.r8.s64 = ctx.r11.s64 + -4504;
	// addi r7,r10,-4640
	ctx.r7.s64 = ctx.r10.s64 + -4640;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// addi r6,r9,-4652
	ctx.r6.s64 = ctx.r9.s64 + -4652;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r26,r31,280
	ctx.r26.s64 = ctx.r31.s64 + 280;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c2ff0
	ctx.lr = 0x8220FFCC;
	sub_823C2FF0(ctx, base);
	// stw r28,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r28.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x8220FFE8;
	sub_822AA648(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x8220FFF4;
	sub_822AA648(ctx, base);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-792(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -792);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r4,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r4.u32);
	// bl 0x8220f248
	ctx.lr = 0x8221000C;
	sub_8220F248(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ecd8
	ctx.lr = 0x8221001C;
	sub_8220ECD8(ctx, base);
	// lis r3,-32187
	ctx.r3.s64 = -2109407232;
	// li r29,22
	ctx.r29.s64 = 22;
	// addi r11,r3,9588
	ctx.r11.s64 = ctx.r3.s64 + 9588;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82210030:
	// addi r27,r29,9
	ctx.r27.s64 = ctx.r29.s64 + 9;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82106fc0
	ctx.lr = 0x82210048;
	sub_82106FC0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82106fc0
	ctx.lr = 0x8221005C;
	sub_82106FC0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82106fc0
	ctx.lr = 0x82210070;
	sub_82106FC0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82106fc0
	ctx.lr = 0x82210084;
	sub_82106FC0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x82210030
	if (!ctx.cr0.eq) goto loc_82210030;
	// bl 0x82182e90
	ctx.lr = 0x82210094;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8221009C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x822100A8;
	sub_821837D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c3410
	ctx.lr = 0x822100B0;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x822100B8;
	sub_823C3C70(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821ebaa8
	ctx.lr = 0x822100C0;
	sub_821EBAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220edc0
	ctx.lr = 0x822100C8;
	sub_8220EDC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f148
	ctx.lr = 0x822100D0;
	sub_8220F148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ef60
	ctx.lr = 0x822100D8;
	sub_8220EF60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e968
	ctx.lr = 0x822100E0;
	sub_8220E968(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x822100E8;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822100F4"))) PPC_WEAK_FUNC(sub_822100F4);
PPC_FUNC_IMPL(__imp__sub_822100F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822100F8"))) PPC_WEAK_FUNC(sub_822100F8);
PPC_FUNC_IMPL(__imp__sub_822100F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8220f910
	ctx.lr = 0x82210118;
	sub_8220F910(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210134
	if (ctx.cr6.eq) goto loc_82210134;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82210130;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82210134:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221014C"))) PPC_WEAK_FUNC(sub_8221014C);
PPC_FUNC_IMPL(__imp__sub_8221014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210150"))) PPC_WEAK_FUNC(sub_82210150);
PPC_FUNC_IMPL(__imp__sub_82210150) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82210184
	if (!ctx.cr6.gt) goto loc_82210184;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82210168:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8221018c
	if (ctx.cr6.eq) goto loc_8221018C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82210168
	if (ctx.cr6.lt) goto loc_82210168;
loc_82210184:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8221018C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210194"))) PPC_WEAK_FUNC(sub_82210194);
PPC_FUNC_IMPL(__imp__sub_82210194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210198"))) PPC_WEAK_FUNC(sub_82210198);
PPC_FUNC_IMPL(__imp__sub_82210198) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822101A8"))) PPC_WEAK_FUNC(sub_822101A8);
PPC_FUNC_IMPL(__imp__sub_822101A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822101B0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-4412
	ctx.r10.s64 = ctx.r11.s64 + -4412;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// bl 0x82183078
	ctx.lr = 0x822101E0;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x822101EC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x822101F0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82210208
	if (ctx.cr6.eq) goto loc_82210208;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x82210204;
	sub_82183448(ctx, base);
	// b 0x82210210
	goto loc_82210210;
loc_82210208:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82210210;
	sub_821845A0(ctx, base);
loc_82210210:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82210220
	if (ctx.cr6.eq) goto loc_82210220;
	// bl 0x821a1580
	ctx.lr = 0x8221021C;
	sub_821A1580(ctx, base);
	// b 0x82210224
	goto loc_82210224;
loc_82210220:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82210224:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82210230;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8221023C"))) PPC_WEAK_FUNC(sub_8221023C);
PPC_FUNC_IMPL(__imp__sub_8221023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210240"))) PPC_WEAK_FUNC(sub_82210240);
PPC_FUNC_IMPL(__imp__sub_82210240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-4412
	ctx.r10.s64 = ctx.r11.s64 + -4412;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82210278
	if (ctx.cr6.eq) goto loc_82210278;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82210278;
	sub_82183E40(ctx, base);
loc_82210278:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822102a0
	if (ctx.cr6.eq) goto loc_822102A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822102A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822102A0:
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

__attribute__((alias("__imp__sub_822102BC"))) PPC_WEAK_FUNC(sub_822102BC);
PPC_FUNC_IMPL(__imp__sub_822102BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822102C0"))) PPC_WEAK_FUNC(sub_822102C0);
PPC_FUNC_IMPL(__imp__sub_822102C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822102E4"))) PPC_WEAK_FUNC(sub_822102E4);
PPC_FUNC_IMPL(__imp__sub_822102E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822102E8"))) PPC_WEAK_FUNC(sub_822102E8);
PPC_FUNC_IMPL(__imp__sub_822102E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822102F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,16(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x82210308;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82210314;
	sub_821837D0(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8221032c
	if (!ctx.cr6.gt) goto loc_8221032C;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8221032C:
	// bl 0x82183850
	ctx.lr = 0x82210330;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82210358
	if (ctx.cr6.eq) goto loc_82210358;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x82210344;
	sub_82183448(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82210350;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82210358:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82210364;
	sub_821845A0(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82210370;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82210378"))) PPC_WEAK_FUNC(sub_82210378);
PPC_FUNC_IMPL(__imp__sub_82210378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82210240
	ctx.lr = 0x82210398;
	sub_82210240(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822103b4
	if (ctx.cr6.eq) goto loc_822103B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x822103B0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822103B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822103CC"))) PPC_WEAK_FUNC(sub_822103CC);
PPC_FUNC_IMPL(__imp__sub_822103CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822103D0"))) PPC_WEAK_FUNC(sub_822103D0);
PPC_FUNC_IMPL(__imp__sub_822103D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218b1e8
	ctx.lr = 0x822103F0;
	sub_8218B1E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-4408
	ctx.r9.s64 = ctx.r11.s64 + -4408;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210424"))) PPC_WEAK_FUNC(sub_82210424);
PPC_FUNC_IMPL(__imp__sub_82210424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210428"))) PPC_WEAK_FUNC(sub_82210428);
PPC_FUNC_IMPL(__imp__sub_82210428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-4408
	ctx.r10.s64 = ctx.r11.s64 + -4408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x82210454;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82210470
	if (ctx.cr6.eq) goto loc_82210470;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8221046C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82210470:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210488"))) PPC_WEAK_FUNC(sub_82210488);
PPC_FUNC_IMPL(__imp__sub_82210488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82210490;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,52(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x822104A8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x822104B4;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x822104C8;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x822104D4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822105c0
	if (ctx.cr6.eq) goto loc_822105C0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x822104E8;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822105c0
	if (ctx.cr6.eq) goto loc_822105C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x822104FC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82210518
	if (ctx.cr6.eq) goto loc_82210518;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x82210510;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8221051c
	goto loc_8221051C;
loc_82210518:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221051C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82210528;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82210544
	if (ctx.cr6.eq) goto loc_82210544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x8221053C;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82210548
	goto loc_82210548;
loc_82210544:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82210548:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218aa18
	ctx.lr = 0x82210558;
	sub_8218AA18(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a2038
	ctx.lr = 0x82210574;
	sub_821A2038(ctx, base);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822102e8
	ctx.lr = 0x82210584;
	sub_822102E8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x822105b8
	if (!ctx.cr6.gt) goto loc_822105B8;
loc_82210590:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218aa58
	ctx.lr = 0x8221059C;
	sub_8218AA58(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82210198
	ctx.lr = 0x822105AC;
	sub_82210198(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82210590
	if (ctx.cr6.lt) goto loc_82210590;
loc_822105B8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a7f0
	ctx.lr = 0x822105C0;
	sub_8218A7F0(ctx, base);
loc_822105C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x822105C8;
	sub_8218A7F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x822105D0;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822105DC"))) PPC_WEAK_FUNC(sub_822105DC);
PPC_FUNC_IMPL(__imp__sub_822105DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822105E0"))) PPC_WEAK_FUNC(sub_822105E0);
PPC_FUNC_IMPL(__imp__sub_822105E0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stwx r6,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822105F8"))) PPC_WEAK_FUNC(sub_822105F8);
PPC_FUNC_IMPL(__imp__sub_822105F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82210600;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-4388
	ctx.r9.s64 = ctx.r11.s64 + -4388;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x82210630;
	sub_822AA648(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x822aa648
	ctx.lr = 0x8221063C;
	sub_822AA648(ctx, base);
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82183078
	ctx.lr = 0x82210644;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82210650;
	sub_821837D0(ctx, base);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82210658:
	// bl 0x82183850
	ctx.lr = 0x8221065C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82210674
	if (ctx.cr6.eq) goto loc_82210674;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x82210670;
	sub_82183448(ctx, base);
	// b 0x8221067c
	goto loc_8221067C;
loc_82210674:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8221067C;
	sub_821845A0(ctx, base);
loc_8221067C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221068c
	if (ctx.cr6.eq) goto loc_8221068C;
	// bl 0x821a1580
	ctx.lr = 0x82210688;
	sub_821A1580(ctx, base);
	// b 0x82210690
	goto loc_82210690;
loc_8221068C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82210690:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bne 0x82210658
	if (!ctx.cr0.eq) goto loc_82210658;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x822106A4;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822106B0"))) PPC_WEAK_FUNC(sub_822106B0);
PPC_FUNC_IMPL(__imp__sub_822106B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822106B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4388
	ctx.r10.s64 = ctx.r11.s64 + -4388;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
loc_822106D4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822106e8
	if (ctx.cr6.eq) goto loc_822106E8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x822106E8;
	sub_82183E40(ctx, base);
loc_822106E8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221070c
	if (ctx.cr6.eq) goto loc_8221070C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221070C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221070C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x822106d4
	if (!ctx.cr0.eq) goto loc_822106D4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82210720"))) PPC_WEAK_FUNC(sub_82210720);
PPC_FUNC_IMPL(__imp__sub_82210720) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221074C"))) PPC_WEAK_FUNC(sub_8221074C);
PPC_FUNC_IMPL(__imp__sub_8221074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210750"))) PPC_WEAK_FUNC(sub_82210750);
PPC_FUNC_IMPL(__imp__sub_82210750) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8221079c
	if (!ctx.cr6.gt) goto loc_8221079C;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
loc_82210780:
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82210780
	if (ctx.cr6.lt) goto loc_82210780;
loc_8221079C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822107A4"))) PPC_WEAK_FUNC(sub_822107A4);
PPC_FUNC_IMPL(__imp__sub_822107A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822107A8"))) PPC_WEAK_FUNC(sub_822107A8);
PPC_FUNC_IMPL(__imp__sub_822107A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822107B0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,32(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x822107C8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x822107D4;
	sub_821837D0(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x822107ec
	if (!ctx.cr6.gt) goto loc_822107EC;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_822107EC:
	// bl 0x82183850
	ctx.lr = 0x822107F0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82210808
	if (ctx.cr6.eq) goto loc_82210808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x82210804;
	sub_82183448(ctx, base);
	// b 0x82210814
	goto loc_82210814;
loc_82210808:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82210814;
	sub_821845A0(ctx, base);
loc_82210814:
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r11,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8221082C;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82210834"))) PPC_WEAK_FUNC(sub_82210834);
PPC_FUNC_IMPL(__imp__sub_82210834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210838"))) PPC_WEAK_FUNC(sub_82210838);
PPC_FUNC_IMPL(__imp__sub_82210838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x822106b0
	ctx.lr = 0x82210858;
	sub_822106B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210874
	if (ctx.cr6.eq) goto loc_82210874;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82210870;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82210874:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221088C"))) PPC_WEAK_FUNC(sub_8221088C);
PPC_FUNC_IMPL(__imp__sub_8221088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210890"))) PPC_WEAK_FUNC(sub_82210890);
PPC_FUNC_IMPL(__imp__sub_82210890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218b1e8
	ctx.lr = 0x822108B0;
	sub_8218B1E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-4384
	ctx.r9.s64 = ctx.r11.s64 + -4384;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822108E4"))) PPC_WEAK_FUNC(sub_822108E4);
PPC_FUNC_IMPL(__imp__sub_822108E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822108E8"))) PPC_WEAK_FUNC(sub_822108E8);
PPC_FUNC_IMPL(__imp__sub_822108E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8218b2d0
	sub_8218B2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822108FC"))) PPC_WEAK_FUNC(sub_822108FC);
PPC_FUNC_IMPL(__imp__sub_822108FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210900"))) PPC_WEAK_FUNC(sub_82210900);
PPC_FUNC_IMPL(__imp__sub_82210900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-4384
	ctx.r10.s64 = ctx.r11.s64 + -4384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x8221092C;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82210948
	if (ctx.cr6.eq) goto loc_82210948;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82210944;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82210948:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210960"))) PPC_WEAK_FUNC(sub_82210960);
PPC_FUNC_IMPL(__imp__sub_82210960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82210968;
	sub_8224877C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,52(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82210980;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8221098C;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x822109A0;
	sub_8218AA18(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
loc_822109B8:
	// clrlwi r30,r29,16
	ctx.r30.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x822109C8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82210ac4
	if (ctx.cr6.eq) goto loc_82210AC4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x822109DC;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82210ac4
	if (ctx.cr6.eq) goto loc_82210AC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x822109F0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82210a0c
	if (ctx.cr6.eq) goto loc_82210A0C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x82210A04;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82210a10
	goto loc_82210A10;
loc_82210A0C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82210A10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82210A1C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82210a38
	if (ctx.cr6.eq) goto loc_82210A38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x82210A30;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82210a3c
	goto loc_82210A3C;
loc_82210A38:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_82210A3C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8218aa18
	ctx.lr = 0x82210A4C;
	sub_8218AA18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82166180
	ctx.lr = 0x82210A58;
	sub_82166180(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821a2038
	ctx.lr = 0x82210A6C;
	sub_821A2038(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822107a8
	ctx.lr = 0x82210A80;
	sub_822107A8(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82210ab8
	if (!ctx.cr6.gt) goto loc_82210AB8;
loc_82210A8C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8218aa58
	ctx.lr = 0x82210A98;
	sub_8218AA58(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822105e0
	ctx.lr = 0x82210AAC;
	sub_822105E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82210a8c
	if (ctx.cr6.lt) goto loc_82210A8C;
loc_82210AB8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// bl 0x8218a7f0
	ctx.lr = 0x82210AC4;
	sub_8218A7F0(ctx, base);
loc_82210AC4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x822109b8
	if (ctx.cr6.lt) goto loc_822109B8;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// bl 0x8218a7f0
	ctx.lr = 0x82210AE8;
	sub_8218A7F0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x82210AF0;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82210AFC"))) PPC_WEAK_FUNC(sub_82210AFC);
PPC_FUNC_IMPL(__imp__sub_82210AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210B00"))) PPC_WEAK_FUNC(sub_82210B00);
PPC_FUNC_IMPL(__imp__sub_82210B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-4224
	ctx.r9.s64 = ctx.r11.s64 + -4224;
	// addi r8,r10,-4360
	ctx.r8.s64 = ctx.r10.s64 + -4360;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,316
	ctx.r3.s64 = ctx.r3.s64 + 316;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// bl 0x823c31a0
	ctx.lr = 0x82210B3C;
	sub_823C31A0(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x823c3048
	ctx.lr = 0x82210B44;
	sub_823C3048(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x82210B4C;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82210B54;
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

__attribute__((alias("__imp__sub_82210B6C"))) PPC_WEAK_FUNC(sub_82210B6C);
PPC_FUNC_IMPL(__imp__sub_82210B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210B70"))) PPC_WEAK_FUNC(sub_82210B70);
PPC_FUNC_IMPL(__imp__sub_82210B70) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,316
	ctx.r3.s64 = ctx.r3.s64 + 316;
	// b 0x823c3280
	sub_823C3280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210B7C"))) PPC_WEAK_FUNC(sub_82210B7C);
PPC_FUNC_IMPL(__imp__sub_82210B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210B80"))) PPC_WEAK_FUNC(sub_82210B80);
PPC_FUNC_IMPL(__imp__sub_82210B80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82210B94"))) PPC_WEAK_FUNC(sub_82210B94);
PPC_FUNC_IMPL(__imp__sub_82210B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210B98"))) PPC_WEAK_FUNC(sub_82210B98);
PPC_FUNC_IMPL(__imp__sub_82210B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8218b408
	ctx.lr = 0x82210BBC;
	sub_8218B408(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82210c08
	if (ctx.cr6.eq) goto loc_82210C08;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82210c08
	if (ctx.cr6.eq) goto loc_82210C08;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bne cr6,0x82210c08
	if (!ctx.cr6.eq) goto loc_82210C08;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x82210c08
	if (!ctx.cr6.eq) goto loc_82210C08;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,121
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 121, ctx.xer);
	// bne cr6,0x82210bfc
	if (!ctx.cr6.eq) goto loc_82210BFC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8218b408
	ctx.lr = 0x82210BFC;
	sub_8218B408(ctx, base);
loc_82210BFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82210C08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210C20"))) PPC_WEAK_FUNC(sub_82210C20);
PPC_FUNC_IMPL(__imp__sub_82210C20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82210c28
	sub_82210C28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210C28"))) PPC_WEAK_FUNC(sub_82210C28);
PPC_FUNC_IMPL(__imp__sub_82210C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82210C30;
	sub_8224878C(ctx, base);
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
	// addi r9,r11,-4224
	ctx.r9.s64 = ctx.r11.s64 + -4224;
	// addi r8,r10,-4360
	ctx.r8.s64 = ctx.r10.s64 + -4360;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,316
	ctx.r3.s64 = ctx.r3.s64 + 316;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// bl 0x823c31a0
	ctx.lr = 0x82210C60;
	sub_823C31A0(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x823c3048
	ctx.lr = 0x82210C68;
	sub_823C3048(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x82210C70;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82210C78;
	sub_823C3BC0(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82210c94
	if (ctx.cr6.eq) goto loc_82210C94;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82210C90;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82210C94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82210C9C"))) PPC_WEAK_FUNC(sub_82210C9C);
PPC_FUNC_IMPL(__imp__sub_82210C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210CA0"))) PPC_WEAK_FUNC(sub_82210CA0);
PPC_FUNC_IMPL(__imp__sub_82210CA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

