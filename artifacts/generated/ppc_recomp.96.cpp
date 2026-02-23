#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823CED8C"))) PPC_WEAK_FUNC(sub_823CED8C);
PPC_FUNC_IMPL(__imp__sub_823CED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CED90"))) PPC_WEAK_FUNC(sub_823CED90);
PPC_FUNC_IMPL(__imp__sub_823CED90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1216);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,1216
	ctx.r3.s64 = ctx.r3.s64 + 1216;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CEDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cedd4
	if (ctx.cr6.eq) goto loc_823CEDD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CEDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CEDD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CEDE8"))) PPC_WEAK_FUNC(sub_823CEDE8);
PPC_FUNC_IMPL(__imp__sub_823CEDE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823cdc48
	sub_823CDC48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEDEC"))) PPC_WEAK_FUNC(sub_823CEDEC);
PPC_FUNC_IMPL(__imp__sub_823CEDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEDF0"))) PPC_WEAK_FUNC(sub_823CEDF0);
PPC_FUNC_IMPL(__imp__sub_823CEDF0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823CEE0C;
	sub_823CD7E8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// ori r7,r11,37292
	ctx.r7.u64 = ctx.r11.u64 | 37292;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r5,r9,-21448
	ctx.r5.s64 = ctx.r9.s64 + -21448;
	// addi r4,r8,-21456
	ctx.r4.s64 = ctx.r8.s64 + -21456;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// addi r6,r10,-21312
	ctx.r6.s64 = ctx.r10.s64 + -21312;
	// stw r4,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r4.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r3,-4760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4760);
	// bl 0x823c8f60
	ctx.lr = 0x823CEE64;
	sub_823C8F60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// bl 0x8223a9f8
	ctx.lr = 0x823CEE98;
	sub_8223A9F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223b4e8
	ctx.lr = 0x823CEEA0;
	sub_8223B4E8(ctx, base);
	// lis r5,-32177
	ctx.r5.s64 = -2108751872;
	// lwz r11,-4752(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4752);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r30,536(r4)
	PPC_STORE_U32(ctx.r4.u32 + 536, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823CEEB4;
	sub_823C8DF0(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x823CEEB8;
	sub_821EB3E8(ctx, base);
	// lwz r11,1216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CEECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_823CEEEC"))) PPC_WEAK_FUNC(sub_823CEEEC);
PPC_FUNC_IMPL(__imp__sub_823CEEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEEF0"))) PPC_WEAK_FUNC(sub_823CEEF0);
PPC_FUNC_IMPL(__imp__sub_823CEEF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823cf098
	sub_823CF098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEEF8"))) PPC_WEAK_FUNC(sub_823CEEF8);
PPC_FUNC_IMPL(__imp__sub_823CEEF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823cf098
	sub_823CF098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEF00"))) PPC_WEAK_FUNC(sub_823CEF00);
PPC_FUNC_IMPL(__imp__sub_823CEF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-21312
	ctx.r8.s64 = ctx.r11.s64 + -21312;
	// addi r5,r9,-21456
	ctx.r5.s64 = ctx.r9.s64 + -21456;
	// addi r7,r10,-21448
	ctx.r7.s64 = ctx.r10.s64 + -21448;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823CEF50;
	sub_823C8F28(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,536(r9)
	PPC_STORE_U32(ctx.r9.u32 + 536, ctx.r10.u32);
	// bl 0x823c8e50
	ctx.lr = 0x823CEF68;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823CEF70;
	sub_823CDA98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CEF84"))) PPC_WEAK_FUNC(sub_823CEF84);
PPC_FUNC_IMPL(__imp__sub_823CEF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEF88"))) PPC_WEAK_FUNC(sub_823CEF88);
PPC_FUNC_IMPL(__imp__sub_823CEF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823CEF90;
	sub_8224878C(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-4760(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823cf090
	if (ctx.cr6.eq) goto loc_823CF090;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c7118
	ctx.lr = 0x823CEFB0;
	sub_823C7118(ctx, base);
	// addi r4,r31,472
	ctx.r4.s64 = ctx.r31.s64 + 472;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823cc390
	ctx.lr = 0x823CEFBC;
	sub_823CC390(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-28244
	ctx.r29.s64 = ctx.r29.s64 + -28244;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823cf090
	if (!ctx.cr6.eq) goto loc_823CF090;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CEFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823cf018
	if (!ctx.cr6.eq) goto loc_823CF018;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CF008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CF018:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r30,r31,1216
	ctx.r30.s64 = ctx.r31.s64 + 1216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CF02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x823cf070
	if (ctx.cr6.eq) goto loc_823CF070;
	// bctrl 
	ctx.lr = 0x823CF04C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823CF060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CF070:
	// bctrl 
	ctx.lr = 0x823CF074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823CF088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
loc_823CF090:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823CF098"))) PPC_WEAK_FUNC(sub_823CF098);
PPC_FUNC_IMPL(__imp__sub_823CF098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823cef00
	ctx.lr = 0x823CF0B8;
	sub_823CEF00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cf0d4
	if (ctx.cr6.eq) goto loc_823CF0D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823CF0D0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CF0D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CF0EC"))) PPC_WEAK_FUNC(sub_823CF0EC);
PPC_FUNC_IMPL(__imp__sub_823CF0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF0F0"))) PPC_WEAK_FUNC(sub_823CF0F0);
PPC_FUNC_IMPL(__imp__sub_823CF0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823CF0F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823CF104;
	sub_823CDC68(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-28244
	ctx.r29.s64 = ctx.r29.s64 + -28244;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823cf24c
	if (ctx.cr6.gt) goto loc_823CF24C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823cf140
	// bdzf 4*cr6+eq,0x823cf174
	// bne cr6,0x823cf21c
	if (!ctx.cr6.eq) goto loc_823CF21C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cef88
	ctx.lr = 0x823CF138;
	sub_823CEF88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CF140:
	// bl 0x8223ad48
	ctx.lr = 0x823CF144;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cf24c
	if (ctx.cr6.eq) goto loc_823CF24C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x823CF158;
	sub_821EA9B8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823CF16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CF174:
	// lwz r11,1216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// addi r30,r31,1216
	ctx.r30.s64 = ctx.r31.s64 + 1216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CF18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cf24c
	if (ctx.cr6.eq) goto loc_823CF24C;
	// bl 0x8223ad48
	ctx.lr = 0x823CF198;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cf24c
	if (ctx.cr6.eq) goto loc_823CF24C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x823CF1AC;
	sub_821EA9B8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823CF1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cf200
	if (ctx.cr6.eq) goto loc_823CF200;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823cf238
	if (!ctx.cr6.eq) goto loc_823CF238;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823CF1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CF200:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CF214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823CF21C:
	// lwz r11,1216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CF230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cf24c
	if (ctx.cr6.eq) goto loc_823CF24C;
loc_823CF238:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CF24C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CF24C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823CF254"))) PPC_WEAK_FUNC(sub_823CF254);
PPC_FUNC_IMPL(__imp__sub_823CF254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF258"))) PPC_WEAK_FUNC(sub_823CF258);
PPC_FUNC_IMPL(__imp__sub_823CF258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823e0ea8
	ctx.lr = 0x823CF274;
	sub_823E0EA8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-21000
	ctx.r8.s64 = ctx.r11.s64 + -21000;
	// addi r7,r10,-21136
	ctx.r7.s64 = ctx.r10.s64 + -21136;
	// addi r6,r9,-21148
	ctx.r6.s64 = ctx.r9.s64 + -21148;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r5,14081
	ctx.r5.s64 = 14081;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// li r4,703
	ctx.r4.s64 = 703;
	// bl 0x82106f58
	ctx.lr = 0x823CF2A8;
	sub_82106F58(ctx, base);
	// li r5,14081
	ctx.r5.s64 = 14081;
	// li r4,704
	ctx.r4.s64 = 704;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF2B8;
	sub_82106F58(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// ori r5,r5,43616
	ctx.r5.u64 = ctx.r5.u64 | 43616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CF2E0"))) PPC_WEAK_FUNC(sub_823CF2E0);
PPC_FUNC_IMPL(__imp__sub_823CF2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823e0ea8
	ctx.lr = 0x823CF2FC;
	sub_823E0EA8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-21000
	ctx.r8.s64 = ctx.r11.s64 + -21000;
	// addi r7,r10,-21136
	ctx.r7.s64 = ctx.r10.s64 + -21136;
	// addi r6,r9,-21148
	ctx.r6.s64 = ctx.r9.s64 + -21148;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r5,14080
	ctx.r5.s64 = 14080;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// li r4,703
	ctx.r4.s64 = 703;
	// bl 0x82106f58
	ctx.lr = 0x823CF330;
	sub_82106F58(ctx, base);
	// li r5,14080
	ctx.r5.s64 = 14080;
	// li r4,704
	ctx.r4.s64 = 704;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF340;
	sub_82106F58(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// ori r5,r5,43616
	ctx.r5.u64 = ctx.r5.u64 | 43616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CF368"))) PPC_WEAK_FUNC(sub_823CF368);
PPC_FUNC_IMPL(__imp__sub_823CF368) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823cf378
	sub_823CF378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CF370"))) PPC_WEAK_FUNC(sub_823CF370);
PPC_FUNC_IMPL(__imp__sub_823CF370) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823cf378
	sub_823CF378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CF378"))) PPC_WEAK_FUNC(sub_823CF378);
PPC_FUNC_IMPL(__imp__sub_823CF378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e0668
	ctx.lr = 0x823CF398;
	sub_823E0668(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cf3b4
	if (ctx.cr6.eq) goto loc_823CF3B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823CF3B0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CF3B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CF3CC"))) PPC_WEAK_FUNC(sub_823CF3CC);
PPC_FUNC_IMPL(__imp__sub_823CF3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF3D0"))) PPC_WEAK_FUNC(sub_823CF3D0);
PPC_FUNC_IMPL(__imp__sub_823CF3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823e1380
	ctx.lr = 0x823CF3E8;
	sub_823E1380(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-20672
	ctx.r8.s64 = ctx.r11.s64 + -20672;
	// addi r7,r10,-20808
	ctx.r7.s64 = ctx.r10.s64 + -20808;
	// addi r6,r9,-20820
	ctx.r6.s64 = ctx.r9.s64 + -20820;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r5,14081
	ctx.r5.s64 = 14081;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// li r4,632
	ctx.r4.s64 = 632;
	// bl 0x82106f58
	ctx.lr = 0x823CF41C;
	sub_82106F58(ctx, base);
	// li r5,14081
	ctx.r5.s64 = 14081;
	// li r4,633
	ctx.r4.s64 = 633;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF42C;
	sub_82106F58(ctx, base);
	// li r5,14074
	ctx.r5.s64 = 14074;
	// li r4,648
	ctx.r4.s64 = 648;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF43C;
	sub_82106F58(ctx, base);
	// li r5,14075
	ctx.r5.s64 = 14075;
	// li r4,649
	ctx.r4.s64 = 649;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF44C;
	sub_82106F58(ctx, base);
	// li r5,14076
	ctx.r5.s64 = 14076;
	// li r4,650
	ctx.r4.s64 = 650;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF45C;
	sub_82106F58(ctx, base);
	// li r5,14077
	ctx.r5.s64 = 14077;
	// li r4,651
	ctx.r4.s64 = 651;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF46C;
	sub_82106F58(ctx, base);
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

__attribute__((alias("__imp__sub_823CF484"))) PPC_WEAK_FUNC(sub_823CF484);
PPC_FUNC_IMPL(__imp__sub_823CF484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF488"))) PPC_WEAK_FUNC(sub_823CF488);
PPC_FUNC_IMPL(__imp__sub_823CF488) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823cf550
	sub_823CF550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CF490"))) PPC_WEAK_FUNC(sub_823CF490);
PPC_FUNC_IMPL(__imp__sub_823CF490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823e1380
	ctx.lr = 0x823CF4A8;
	sub_823E1380(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-20672
	ctx.r8.s64 = ctx.r11.s64 + -20672;
	// addi r7,r10,-20808
	ctx.r7.s64 = ctx.r10.s64 + -20808;
	// addi r6,r9,-20820
	ctx.r6.s64 = ctx.r9.s64 + -20820;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r5,14080
	ctx.r5.s64 = 14080;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// li r4,632
	ctx.r4.s64 = 632;
	// bl 0x82106f58
	ctx.lr = 0x823CF4DC;
	sub_82106F58(ctx, base);
	// li r5,14080
	ctx.r5.s64 = 14080;
	// li r4,633
	ctx.r4.s64 = 633;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF4EC;
	sub_82106F58(ctx, base);
	// li r5,14070
	ctx.r5.s64 = 14070;
	// li r4,648
	ctx.r4.s64 = 648;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF4FC;
	sub_82106F58(ctx, base);
	// li r5,14071
	ctx.r5.s64 = 14071;
	// li r4,649
	ctx.r4.s64 = 649;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF50C;
	sub_82106F58(ctx, base);
	// li r5,14072
	ctx.r5.s64 = 14072;
	// li r4,650
	ctx.r4.s64 = 650;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF51C;
	sub_82106F58(ctx, base);
	// li r5,14073
	ctx.r5.s64 = 14073;
	// li r4,651
	ctx.r4.s64 = 651;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF52C;
	sub_82106F58(ctx, base);
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

__attribute__((alias("__imp__sub_823CF544"))) PPC_WEAK_FUNC(sub_823CF544);
PPC_FUNC_IMPL(__imp__sub_823CF544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF548"))) PPC_WEAK_FUNC(sub_823CF548);
PPC_FUNC_IMPL(__imp__sub_823CF548) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823cf550
	sub_823CF550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CF550"))) PPC_WEAK_FUNC(sub_823CF550);
PPC_FUNC_IMPL(__imp__sub_823CF550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e1138
	ctx.lr = 0x823CF570;
	sub_823E1138(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cf58c
	if (ctx.cr6.eq) goto loc_823CF58C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823CF588;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CF58C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CF5A4"))) PPC_WEAK_FUNC(sub_823CF5A4);
PPC_FUNC_IMPL(__imp__sub_823CF5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF5A8"))) PPC_WEAK_FUNC(sub_823CF5A8);
PPC_FUNC_IMPL(__imp__sub_823CF5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823e0ea8
	ctx.lr = 0x823CF5C4;
	sub_823E0EA8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-21000
	ctx.r8.s64 = ctx.r11.s64 + -21000;
	// addi r7,r10,-21136
	ctx.r7.s64 = ctx.r10.s64 + -21136;
	// addi r6,r9,-21148
	ctx.r6.s64 = ctx.r9.s64 + -21148;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r5,14079
	ctx.r5.s64 = 14079;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// li r4,703
	ctx.r4.s64 = 703;
	// bl 0x82106f58
	ctx.lr = 0x823CF5F8;
	sub_82106F58(ctx, base);
	// li r5,14079
	ctx.r5.s64 = 14079;
	// li r4,704
	ctx.r4.s64 = 704;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF608;
	sub_82106F58(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// ori r5,r5,43616
	ctx.r5.u64 = ctx.r5.u64 | 43616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CF630"))) PPC_WEAK_FUNC(sub_823CF630);
PPC_FUNC_IMPL(__imp__sub_823CF630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823e0ea8
	ctx.lr = 0x823CF64C;
	sub_823E0EA8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-21000
	ctx.r8.s64 = ctx.r11.s64 + -21000;
	// addi r7,r10,-21136
	ctx.r7.s64 = ctx.r10.s64 + -21136;
	// addi r6,r9,-21148
	ctx.r6.s64 = ctx.r9.s64 + -21148;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r5,14078
	ctx.r5.s64 = 14078;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// li r4,703
	ctx.r4.s64 = 703;
	// bl 0x82106f58
	ctx.lr = 0x823CF680;
	sub_82106F58(ctx, base);
	// li r5,14078
	ctx.r5.s64 = 14078;
	// li r4,704
	ctx.r4.s64 = 704;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823CF690;
	sub_82106F58(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// ori r5,r5,43616
	ctx.r5.u64 = ctx.r5.u64 | 43616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CF6B8"))) PPC_WEAK_FUNC(sub_823CF6B8);
PPC_FUNC_IMPL(__imp__sub_823CF6B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823fbd40
	sub_823FBD40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CF6BC"))) PPC_WEAK_FUNC(sub_823CF6BC);
PPC_FUNC_IMPL(__imp__sub_823CF6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF6C0"))) PPC_WEAK_FUNC(sub_823CF6C0);
PPC_FUNC_IMPL(__imp__sub_823CF6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,37320
	ctx.r11.u64 = ctx.r11.u64 | 37320;
	// lwzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CF6D8"))) PPC_WEAK_FUNC(sub_823CF6D8);
PPC_FUNC_IMPL(__imp__sub_823CF6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823CF6E0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,-28184
	ctx.r29.s64 = ctx.r29.s64 + -28184;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-20352
	ctx.r8.s64 = ctx.r11.s64 + -20352;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r10,-20488
	ctx.r7.s64 = ctx.r10.s64 + -20488;
	// addi r6,r9,-20500
	ctx.r6.s64 = ctx.r9.s64 + -20500;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// beq cr6,0x823cf734
	if (ctx.cr6.eq) goto loc_823CF734;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CF734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CF734:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r30,-28180
	ctx.r30.s64 = ctx.r30.s64 + -28180;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cf764
	if (ctx.cr6.eq) goto loc_823CF764;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CF764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CF764:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,-4760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823CF780;
	sub_823C8F28(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823CF784;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823CF78C;
	sub_823CDA98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823CF794"))) PPC_WEAK_FUNC(sub_823CF794);
PPC_FUNC_IMPL(__imp__sub_823CF794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF798"))) PPC_WEAK_FUNC(sub_823CF798);
PPC_FUNC_IMPL(__imp__sub_823CF798) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823cff20
	sub_823CFF20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CF7A0"))) PPC_WEAK_FUNC(sub_823CF7A0);
PPC_FUNC_IMPL(__imp__sub_823CF7A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823cff20
	sub_823CFF20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CF7A8"))) PPC_WEAK_FUNC(sub_823CF7A8);
PPC_FUNC_IMPL(__imp__sub_823CF7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823cdb10
	ctx.lr = 0x823CF7C0;
	sub_823CDB10(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,2880
	ctx.r11.s64 = ctx.r11.s64 + 2880;
	// mulli r8,r9,52
	ctx.r8.s64 = ctx.r9.s64 * 52;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x821eb290
	ctx.lr = 0x823CF7E0;
	sub_821EB290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CF7F4"))) PPC_WEAK_FUNC(sub_823CF7F4);
PPC_FUNC_IMPL(__imp__sub_823CF7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF7F8"))) PPC_WEAK_FUNC(sub_823CF7F8);
PPC_FUNC_IMPL(__imp__sub_823CF7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x823CF800;
	sub_82248764(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x823CF814;
	sub_8218B408(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823CF820;
	sub_8218B408(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// ori r10,r11,37348
	ctx.r10.u64 = ctx.r11.u64 | 37348;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,11300
	ctx.r11.s64 = ctx.r11.s64 + 11300;
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r19,r8,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x823cf930
	if (ctx.cr6.eq) goto loc_823CF930;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r7,0(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f5,15240(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 15240, temp.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f4,15244(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15244, temp.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f3,15248(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 15248, temp.u32);
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r8,8(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// fcfid f12,f2
	ctx.f12.f64 = double(ctx.f2.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f7,20136(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20136, temp.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f6,20140(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20140, temp.u32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f5,20144(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20144, temp.u32);
	// b 0x823cfa08
	goto loc_823CFA08;
loc_823CF930:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r9,8(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r7,4(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f4,15240(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 15240, temp.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f7,15244(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15244, temp.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stfs f3,15248(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 15248, temp.u32);
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r9,4(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f2,88(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fmuls f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f5,20136(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20136, temp.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f8,20140(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20140, temp.u32);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f6,20144(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20144, temp.u32);
loc_823CFA08:
	// bl 0x8223a990
	ctx.lr = 0x823CFA0C;
	sub_8223A990(ctx, base);
	// bl 0x82243fd8
	ctx.lr = 0x823CFA10;
	sub_82243FD8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823CFA20;
	sub_823C3280(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// ori r8,r10,37296
	ctx.r8.u64 = ctx.r10.u64 | 37296;
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r4,r6,37304
	ctx.r4.u64 = ctx.r6.u64 | 37304;
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// ori r10,r5,37312
	ctx.r10.u64 = ctx.r5.u64 | 37312;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// ori r5,r7,37320
	ctx.r5.u64 = ctx.r7.u64 | 37320;
	// stwx r6,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r8,r4,37328
	ctx.r8.u64 = ctx.r4.u64 | 37328;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// ori r9,r4,37344
	ctx.r9.u64 = ctx.r4.u64 | 37344;
	// stwx r7,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// ori r10,r6,37336
	ctx.r10.u64 = ctx.r6.u64 | 37336;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// li r7,255
	ctx.r7.s64 = 255;
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// stwx r3,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stwx r6,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r11,-5
	ctx.r5.s64 = ctx.r11.s64 + -5;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r23,r11,3708
	ctx.r23.s64 = ctx.r11.s64 + 3708;
	// ori r25,r9,37292
	ctx.r25.u64 = ctx.r9.u64 | 37292;
	// addi r24,r10,2880
	ctx.r24.s64 = ctx.r10.s64 + 2880;
loc_823CFB14:
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r11,r27,52
	ctx.r11.s64 = ctx.r27.s64 * 52;
	// add r28,r10,r25
	ctx.r28.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// blt cr6,0x823cfb4c
	if (ctx.cr6.lt) goto loc_823CFB4C;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
loc_823CFB4C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cfb74
	if (ctx.cr6.lt) goto loc_823CFB74;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823CFB74:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// bne cr6,0x823cfb84
	if (!ctx.cr6.eq) goto loc_823CFB84;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_823CFB84:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cfc28
	if (ctx.cr6.lt) goto loc_823CFC28;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r26.u32);
loc_823CFC28:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823cfc3c
	if (!ctx.cr6.eq) goto loc_823CFC3C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_823CFC3C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f6,120(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823cfdc8
	if (ctx.cr6.eq) goto loc_823CFDC8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823cfce8
	if (ctx.cr6.lt) goto loc_823CFCE8;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r26.u32);
loc_823CFCE8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823cfcfc
	if (!ctx.cr6.eq) goto loc_823CFCFC;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_823CFCFC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f10,136(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// bne cr6,0x823cfdc8
	if (!ctx.cr6.eq) goto loc_823CFDC8;
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r6,r22,30
	ctx.r6.s64 = ctx.r22.s64 + 30;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823CFDA0;
	sub_8218A5F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r29.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r26.u32);
	// b 0x823cfe7c
	goto loc_823CFE7C;
loc_823CFDC8:
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// bne cr6,0x823cfe7c
	if (!ctx.cr6.eq) goto loc_823CFE7C;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x8218b408
	ctx.lr = 0x823CFDD8;
	sub_8218B408(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x8218b408
	ctx.lr = 0x823CFDE4;
	sub_8218B408(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cfdf8
	if (ctx.cr6.eq) goto loc_823CFDF8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_823CFDF8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// lfd f10,160(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f6,168(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
loc_823CFE7C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 7, ctx.xer);
	// blt cr6,0x823cfb14
	if (ctx.cr6.lt) goto loc_823CFB14;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_823CFE94"))) PPC_WEAK_FUNC(sub_823CFE94);
PPC_FUNC_IMPL(__imp__sub_823CFE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CFE98"))) PPC_WEAK_FUNC(sub_823CFE98);
PPC_FUNC_IMPL(__imp__sub_823CFE98) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r7,15001
	ctx.r7.s64 = 15001;
	// li r6,15002
	ctx.r6.s64 = 15002;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,15003
	ctx.r5.s64 = 15003;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// li r8,15000
	ctx.r8.s64 = 15000;
	// lwz r11,-4760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4760);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r4,15004
	ctx.r4.s64 = 15004;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r10,15005
	ctx.r10.s64 = 15005;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r8,15006
	ctx.r8.s64 = 15006;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CFF0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CFF1C"))) PPC_WEAK_FUNC(sub_823CFF1C);
PPC_FUNC_IMPL(__imp__sub_823CFF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CFF20"))) PPC_WEAK_FUNC(sub_823CFF20);
PPC_FUNC_IMPL(__imp__sub_823CFF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823cf6d8
	ctx.lr = 0x823CFF40;
	sub_823CF6D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cff5c
	if (ctx.cr6.eq) goto loc_823CFF5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823CFF58;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823CFF5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CFF74"))) PPC_WEAK_FUNC(sub_823CFF74);
PPC_FUNC_IMPL(__imp__sub_823CFF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CFF78"))) PPC_WEAK_FUNC(sub_823CFF78);
PPC_FUNC_IMPL(__imp__sub_823CFF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823CFF80;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,-28188
	ctx.r30.s64 = ctx.r30.s64 + -28188;
	// ori r28,r11,37352
	ctx.r28.u64 = ctx.r11.u64 | 37352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823cffb0
	if (!ctx.cr6.eq) goto loc_823CFFB0;
	// lwzx r3,r3,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// bl 0x8220be20
	ctx.lr = 0x823CFFB0;
	sub_8220BE20(ctx, base);
loc_823CFFB0:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x823d0110
	if (ctx.cr6.lt) goto loc_823D0110;
	// beq cr6,0x823d00a4
	if (ctx.cr6.eq) goto loc_823D00A4;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bge cr6,0x823d0150
	if (!ctx.cr6.lt) goto loc_823D0150;
	// bl 0x8223a990
	ctx.lr = 0x823CFFCC;
	sub_8223A990(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82243fd8
	ctx.lr = 0x823CFFD4;
	sub_82243FD8(ctx, base);
	// addi r29,r3,30
	ctx.r29.s64 = ctx.r3.s64 + 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfe98
	ctx.lr = 0x823CFFE0;
	sub_823CFE98(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8218a360
	ctx.lr = 0x823CFFE8;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d0008
	if (!ctx.cr6.eq) goto loc_823D0008;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r30,r30,-28176
	ctx.r30.s64 = ctx.r30.s64 + -28176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x823D0004;
	sub_822AA648(ctx, base);
	// b 0x823d0030
	goto loc_823D0030;
loc_823D0008:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28176
	ctx.r30.s64 = ctx.r30.s64 + -28176;
	// bl 0x82243fd8
	ctx.lr = 0x823D0018;
	sub_82243FD8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r3,30
	ctx.r6.s64 = ctx.r3.s64 + 30;
	// addi r5,r11,3708
	ctx.r5.s64 = ctx.r11.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823D0030;
	sub_8218A5F0(ctx, base);
loc_823D0030:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r4,480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// ori r3,r11,37356
	ctx.r3.u64 = ctx.r11.u64 | 37356;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,22
	ctx.r9.s64 = 22;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r7,-28048
	ctx.r7.s64 = ctx.r7.s64 + -28048;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x824088e8
	ctx.lr = 0x823D0060;
	sub_824088E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82244cb0
	ctx.lr = 0x823D006C;
	sub_82244CB0(ctx, base);
	// bl 0x82246f38
	ctx.lr = 0x823D0070;
	sub_82246F38(ctx, base);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r11,-4752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4752);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,532(r8)
	PPC_STORE_U32(ctx.r8.u32 + 532, ctx.r9.u32);
	// bl 0x821ebaa8
	ctx.lr = 0x823D008C;
	sub_821EBAA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb980
	ctx.lr = 0x823D0098;
	sub_821EB980(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x823D009C;
	sub_821EB3E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823D00A4:
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x8220bd80
	ctx.lr = 0x823D00AC;
	sub_8220BD80(ctx, base);
	// bl 0x8223a990
	ctx.lr = 0x823D00B0;
	sub_8223A990(ctx, base);
	// bl 0x82243fd8
	ctx.lr = 0x823D00B4;
	sub_82243FD8(ctx, base);
	// lwzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addic. r5,r3,30
	ctx.xer.ca = ctx.r3.u32 > 4294967265;
	ctx.r5.s64 = ctx.r3.s64 + 30;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r4,67
	ctx.r4.s64 = 67;
	// addi r3,r11,332
	ctx.r3.s64 = ctx.r11.s64 + 332;
	// beq 0x823d00d0
	if (ctx.cr0.eq) goto loc_823D00D0;
	// bl 0x8218a128
	ctx.lr = 0x823D00CC;
	sub_8218A128(ctx, base);
	// b 0x823d00d4
	goto loc_823D00D4;
loc_823D00D0:
	// bl 0x822aa648
	ctx.lr = 0x823D00D4;
	sub_822AA648(ctx, base);
loc_823D00D4:
	// bl 0x82244cb0
	ctx.lr = 0x823D00D8;
	sub_82244CB0(ctx, base);
	// bl 0x82246f38
	ctx.lr = 0x823D00DC;
	sub_82246F38(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,532(r9)
	PPC_STORE_U32(ctx.r9.u32 + 532, ctx.r10.u32);
	// bl 0x821ebaa8
	ctx.lr = 0x823D00F8;
	sub_821EBAA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb980
	ctx.lr = 0x823D0104;
	sub_821EB980(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x823D0108;
	sub_821EB3E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823D0110:
	// bl 0x82244cb0
	ctx.lr = 0x823D0114;
	sub_82244CB0(ctx, base);
	// bl 0x82246f10
	ctx.lr = 0x823D0118;
	sub_82246F10(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,532(r9)
	PPC_STORE_U32(ctx.r9.u32 + 532, ctx.r10.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823D0130;
	sub_823C8DF0(ctx, base);
	// lis r8,-32186
	ctx.r8.s64 = -2109341696;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r8,2880
	ctx.r11.s64 = ctx.r8.s64 + 2880;
	// mulli r5,r6,52
	ctx.r5.s64 = ctx.r6.s64 * 52;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// bl 0x821eb290
	ctx.lr = 0x823D0150;
	sub_821EB290(ctx, base);
loc_823D0150:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823D0158"))) PPC_WEAK_FUNC(sub_823D0158);
PPC_FUNC_IMPL(__imp__sub_823D0158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823cf7f8
	ctx.lr = 0x823D0170;
	sub_823CF7F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823D0178;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D018C"))) PPC_WEAK_FUNC(sub_823D018C);
PPC_FUNC_IMPL(__imp__sub_823D018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0190"))) PPC_WEAK_FUNC(sub_823D0190);
PPC_FUNC_IMPL(__imp__sub_823D0190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8223ad48
	ctx.lr = 0x823D01A8;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d01c0
	if (ctx.cr6.eq) goto loc_823D01C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cf7f8
	ctx.lr = 0x823D01B8;
	sub_823CF7F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc48
	ctx.lr = 0x823D01C0;
	sub_823CDC48(ctx, base);
loc_823D01C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D01D4"))) PPC_WEAK_FUNC(sub_823D01D4);
PPC_FUNC_IMPL(__imp__sub_823D01D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D01D8"))) PPC_WEAK_FUNC(sub_823D01D8);
PPC_FUNC_IMPL(__imp__sub_823D01D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823D01E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cf7f8
	ctx.lr = 0x823D01EC;
	sub_823CF7F8(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-28188
	ctx.r29.s64 = ctx.r29.s64 + -28188;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823d02c0
	if (!ctx.cr6.eq) goto loc_823D02C0;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28180
	ctx.r30.s64 = ctx.r30.s64 + -28180;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82405eb0
	ctx.lr = 0x823D0210;
	sub_82405EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d02c0
	if (ctx.cr6.eq) goto loc_823D02C0;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,63
	ctx.r10.u64 = ctx.r11.u64 | 63;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bl 0x82405eb0
	ctx.lr = 0x823D022C;
	sub_82405EB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823d0260
	if (!ctx.cr6.eq) goto loc_823D0260;
	// bl 0x8223a990
	ctx.lr = 0x823D0238;
	sub_8223A990(ctx, base);
	// bl 0x82243fd8
	ctx.lr = 0x823D023C;
	sub_82243FD8(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// li r4,67
	ctx.r4.s64 = 67;
	// addi r5,r5,-28048
	ctx.r5.s64 = ctx.r5.s64 + -28048;
	// addi r3,r3,30
	ctx.r3.s64 = ctx.r3.s64 + 30;
	// bl 0x8218a128
	ctx.lr = 0x823D0250;
	sub_8218A128(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// stw r10,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r10.u32);
loc_823D0260:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823d027c
	if (!ctx.cr6.eq) goto loc_823D027C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37352
	ctx.r10.u64 = ctx.r11.u64 | 37352;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8220be20
	ctx.lr = 0x823D027C;
	sub_8220BE20(ctx, base);
loc_823D027C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// bl 0x82244cb0
	ctx.lr = 0x823D0288;
	sub_82244CB0(ctx, base);
	// bl 0x82246f10
	ctx.lr = 0x823D028C;
	sub_82246F10(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r30,532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 532, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823D02A0;
	sub_823C8DF0(ctx, base);
	// lis r9,-32186
	ctx.r9.s64 = -2109341696;
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r9,2880
	ctx.r11.s64 = ctx.r9.s64 + 2880;
	// mulli r6,r7,52
	ctx.r6.s64 = ctx.r7.s64 * 52;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// lwzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// bl 0x821eb290
	ctx.lr = 0x823D02C0;
	sub_821EB290(ctx, base);
loc_823D02C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823D02C8;
	sub_823CDC68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823D02D0"))) PPC_WEAK_FUNC(sub_823D02D0);
PPC_FUNC_IMPL(__imp__sub_823D02D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823D02D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,37320
	ctx.r9.u64 = ctx.r10.u64 | 37320;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823d036c
	if (ctx.cr6.lt) goto loc_823D036C;
	// bne cr6,0x823d03f4
	if (!ctx.cr6.eq) goto loc_823D03F4;
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28188
	ctx.r30.s64 = ctx.r30.s64 + -28188;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823d0320
	if (!ctx.cr6.eq) goto loc_823D0320;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37352
	ctx.r10.u64 = ctx.r11.u64 | 37352;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8220be20
	ctx.lr = 0x823D0320;
	sub_8220BE20(ctx, base);
loc_823D0320:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x82244cb0
	ctx.lr = 0x823D032C;
	sub_82244CB0(ctx, base);
	// bl 0x82246f10
	ctx.lr = 0x823D0330;
	sub_82246F10(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 532, ctx.r29.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823D0344;
	sub_823C8DF0(ctx, base);
	// lis r9,-32186
	ctx.r9.s64 = -2109341696;
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r9,2880
	ctx.r11.s64 = ctx.r9.s64 + 2880;
	// mulli r6,r7,52
	ctx.r6.s64 = ctx.r7.s64 * 52;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// lwzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// bl 0x821eb290
	ctx.lr = 0x823D0364;
	sub_821EB290(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823D036C:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r9,r10,4658
	ctx.r9.s64 = ctx.r10.s64 + 4658;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823d03f4
	if (ctx.cr6.eq) goto loc_823D03F4;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x823d03f4
	if (ctx.cr6.gt) goto loc_823D03F4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d03c0
	// bdzf 4*cr6+eq,0x823d03fc
	// bdzf 4*cr6+eq,0x823d040c
	// bdzf 4*cr6+eq,0x823d0414
	// bdzf 4*cr6+eq,0x823d041c
	// bne cr6,0x823d0430
	if (!ctx.cr6.eq) goto loc_823D0430;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823cff78
	ctx.lr = 0x823D03B8;
	sub_823CFF78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823D03C0:
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,20
	ctx.r10.s64 = 20;
	// ori r8,r9,37592
	ctx.r8.u64 = ctx.r9.u64 | 37592;
loc_823D03CC:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r7,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r7.u32);
loc_823D03D4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 652, ctx.r10.u32);
	// lwz r8,-28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// stw r9,800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 800, ctx.r9.u32);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823D03F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D03F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823D03FC:
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,21
	ctx.r10.s64 = 21;
	// ori r8,r9,37588
	ctx.r8.u64 = ctx.r9.u64 | 37588;
	// b 0x823d03cc
	goto loc_823D03CC;
loc_823D040C:
	// li r10,22
	ctx.r10.s64 = 22;
	// b 0x823d03d4
	goto loc_823D03D4;
loc_823D0414:
	// li r10,23
	ctx.r10.s64 = 23;
	// b 0x823d03d4
	goto loc_823D03D4;
loc_823D041C:
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823cff78
	ctx.lr = 0x823D0428;
	sub_823CFF78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823D0430:
	// lwz r10,-28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D0444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823D044C"))) PPC_WEAK_FUNC(sub_823D044C);
PPC_FUNC_IMPL(__imp__sub_823D044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0450"))) PPC_WEAK_FUNC(sub_823D0450);
PPC_FUNC_IMPL(__imp__sub_823D0450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823D0458;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,37320
	ctx.r9.u64 = ctx.r10.u64 | 37320;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823d04ec
	if (ctx.cr6.lt) goto loc_823D04EC;
	// bne cr6,0x823d050c
	if (!ctx.cr6.eq) goto loc_823D050C;
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28188
	ctx.r30.s64 = ctx.r30.s64 + -28188;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823d04a0
	if (!ctx.cr6.eq) goto loc_823D04A0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37352
	ctx.r10.u64 = ctx.r11.u64 | 37352;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8220be20
	ctx.lr = 0x823D04A0;
	sub_8220BE20(ctx, base);
loc_823D04A0:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x82244cb0
	ctx.lr = 0x823D04AC;
	sub_82244CB0(ctx, base);
	// bl 0x82246f10
	ctx.lr = 0x823D04B0;
	sub_82246F10(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 532, ctx.r29.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823D04C4;
	sub_823C8DF0(ctx, base);
	// lis r9,-32186
	ctx.r9.s64 = -2109341696;
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r9,2880
	ctx.r11.s64 = ctx.r9.s64 + 2880;
	// mulli r6,r7,52
	ctx.r6.s64 = ctx.r7.s64 * 52;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// lwzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// bl 0x821eb290
	ctx.lr = 0x823D04E4;
	sub_821EB290(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823D04EC:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,-28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// stw r10,800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 800, ctx.r10.u32);
	// stw r10,652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 652, ctx.r10.u32);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D050C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D050C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823D0514"))) PPC_WEAK_FUNC(sub_823D0514);
PPC_FUNC_IMPL(__imp__sub_823D0514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0518"))) PPC_WEAK_FUNC(sub_823D0518);
PPC_FUNC_IMPL(__imp__sub_823D0518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823D0520;
	sub_8224877C(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823D052C;
	sub_823CD7E8(ctx, base);
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r26,r26,-28244
	ctx.r26.s64 = ctx.r26.s64 + -28244;
	// ori r3,r8,37348
	ctx.r3.u64 = ctx.r8.u64 | 37348;
	// addi r28,r28,-28184
	ctx.r28.s64 = ctx.r28.s64 + -28184;
	// addi r7,r11,-20352
	ctx.r7.s64 = ctx.r11.s64 + -20352;
	// addi r6,r10,-20488
	ctx.r6.s64 = ctx.r10.s64 + -20488;
	// addi r5,r9,-20500
	ctx.r5.s64 = ctx.r9.s64 + -20500;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r11,145
	ctx.r11.s64 = 145;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// stw r30,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r30.u32);
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// stw r30,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r30.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r29,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r29.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r29,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r29.u32);
	// stw r30,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r30.u32);
	// stw r29,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r29.u32);
	// stw r30,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r30.u32);
	// stw r29,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r29.u32);
	// stw r30,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r30.u32);
	// stw r29,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r29.u32);
	// stw r30,48(r26)
	PPC_STORE_U32(ctx.r26.u32 + 48, ctx.r30.u32);
	// stw r29,52(r26)
	PPC_STORE_U32(ctx.r26.u32 + 52, ctx.r29.u32);
	// stwx r29,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r29.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r3,-4760(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// bl 0x823c8f60
	ctx.lr = 0x823D05DC;
	sub_823C8F60(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r26,12(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// ori r7,r7,37308
	ctx.r7.u64 = ctx.r7.u64 | 37308;
	// ori r8,r8,37300
	ctx.r8.u64 = ctx.r8.u64 | 37300;
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// ori r6,r6,37316
	ctx.r6.u64 = ctx.r6.u64 | 37316;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// ori r5,r5,37324
	ctx.r5.u64 = ctx.r5.u64 | 37324;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// ori r9,r3,37332
	ctx.r9.u64 = ctx.r3.u64 | 37332;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// li r7,60
	ctx.r7.s64 = 60;
	// stwx r30,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// lfs f1,10376(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823D0668;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cf7f8
	ctx.lr = 0x823D0670;
	sub_823CF7F8(ctx, base);
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823D0678;
	sub_823C8DF0(ctx, base);
	// lis r8,-32186
	ctx.r8.s64 = -2109341696;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r8,2880
	ctx.r11.s64 = ctx.r8.s64 + 2880;
	// mulli r5,r6,52
	ctx.r5.s64 = ctx.r6.s64 * 52;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// bl 0x821eb290
	ctx.lr = 0x823D0698;
	sub_821EB290(ctx, base);
	// lwz r25,644(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x82183078
	ctx.lr = 0x823D06A0;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x823D06AC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x823D06B0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823d06c8
	if (ctx.cr6.eq) goto loc_823D06C8;
	// li r3,15104
	ctx.r3.s64 = 15104;
	// bl 0x82183448
	ctx.lr = 0x823D06C4;
	sub_82183448(ctx, base);
	// b 0x823d06d0
	goto loc_823D06D0;
loc_823D06C8:
	// li r3,944
	ctx.r3.s64 = 944;
	// bl 0x821845a0
	ctx.lr = 0x823D06D0;
	sub_821845A0(ctx, base);
loc_823D06D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d06e8
	if (ctx.cr6.eq) goto loc_823D06E8;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x8220e0b0
	ctx.lr = 0x823D06E0;
	sub_8220E0B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x823d06ec
	goto loc_823D06EC;
loc_823D06E8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823D06EC:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r30.u32);
	// lwz r11,-4760(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 328, ctx.r9.u32);
	// bl 0x821837d0
	ctx.lr = 0x823D070C;
	sub_821837D0(ctx, base);
	// lwz r28,644(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x82183078
	ctx.lr = 0x823D0714;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823D0720;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x823D0724;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823d073c
	if (ctx.cr6.eq) goto loc_823D073C;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82183448
	ctx.lr = 0x823D0738;
	sub_82183448(ctx, base);
	// b 0x823d0744
	goto loc_823D0744;
loc_823D073C:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x823D0744;
	sub_821845A0(ctx, base);
loc_823D0744:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d0758
	if (ctx.cr6.eq) goto loc_823D0758;
	// li r4,47
	ctx.r4.s64 = 47;
	// bl 0x82406fc8
	ctx.lr = 0x823D0754;
	sub_82406FC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_823D0758:
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,37356
	ctx.r10.u64 = ctx.r11.u64 | 37356;
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// bl 0x821837d0
	ctx.lr = 0x823D076C;
	sub_821837D0(ctx, base);
	// bl 0x8223a990
	ctx.lr = 0x823D0770;
	sub_8223A990(ctx, base);
	// bl 0x82243fd8
	ctx.lr = 0x823D0774;
	sub_82243FD8(ctx, base);
	// lwz r11,-4760(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-28176
	ctx.r3.s64 = ctx.r3.s64 + -28176;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822aa648
	ctx.lr = 0x823D0790;
	sub_822AA648(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-28048
	ctx.r3.s64 = ctx.r3.s64 + -28048;
	// bl 0x822aa648
	ctx.lr = 0x823D07A0;
	sub_822AA648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82164c98
	ctx.lr = 0x823D07A8;
	sub_82164C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d07c8
	if (!ctx.cr6.eq) goto loc_823D07C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfe98
	ctx.lr = 0x823D07B8;
	sub_823CFE98(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,67
	ctx.r4.s64 = 67;
	// addi r3,r30,30
	ctx.r3.s64 = ctx.r30.s64 + 30;
	// bl 0x8218a128
	ctx.lr = 0x823D07C8;
	sub_8218A128(ctx, base);
loc_823D07C8:
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x823D07D4;
	sub_822AA648(ctx, base);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822aa648
	ctx.lr = 0x823D07E0;
	sub_822AA648(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lhz r10,528(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 528);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-27916
	ctx.r11.s64 = ctx.r11.s64 + -27916;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r29,r29,-27920
	ctx.r29.s64 = ctx.r29.s64 + -27920;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lhz r8,420(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 420);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// bl 0x820845f0
	ctx.lr = 0x823D0818;
	sub_820845F0(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x820845f0
	ctx.lr = 0x823D0828;
	sub_820845F0(ctx, base);
	// li r4,407
	ctx.r4.s64 = 407;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lhz r5,194(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 194);
	// bl 0x82106f58
	ctx.lr = 0x823D0838;
	sub_82106F58(ctx, base);
	// li r4,408
	ctx.r4.s64 = 408;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lhz r5,322(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 322);
	// bl 0x82106f58
	ctx.lr = 0x823D0848;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823D0854"))) PPC_WEAK_FUNC(sub_823D0854);
PPC_FUNC_IMPL(__imp__sub_823D0854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0858"))) PPC_WEAK_FUNC(sub_823D0858);
PPC_FUNC_IMPL(__imp__sub_823D0858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, ctx.r10.u32);
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r11,1964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x823d0894
	if (ctx.cr6.eq) goto loc_823D0894;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823d088c
	if (ctx.cr6.eq) goto loc_823D088C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x823d089c
	if (!ctx.cr6.eq) goto loc_823D089C;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x823d0898
	goto loc_823D0898;
loc_823D088C:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x823d0898
	goto loc_823D0898;
loc_823D0894:
	// li r11,11
	ctx.r11.s64 = 11;
loc_823D0898:
	// stw r11,652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 652, ctx.r11.u32);
loc_823D089C:
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823D08B0"))) PPC_WEAK_FUNC(sub_823D08B0);
PPC_FUNC_IMPL(__imp__sub_823D08B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823D08B8;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,10011
	ctx.r3.s64 = 10011;
	// bl 0x8208f658
	ctx.lr = 0x823D08C8;
	sub_8208F658(ctx, base);
	// bl 0x8223a8c8
	ctx.lr = 0x823D08CC;
	sub_8223A8C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x823D08D4;
	sub_823CA688(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28220
	ctx.r30.s64 = ctx.r30.s64 + -28220;
	// addi r31,r31,-28228
	ctx.r31.s64 = ctx.r31.s64 + -28228;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823ca5c8
	ctx.lr = 0x823D0910;
	sub_823CA5C8(ctx, base);
	// lis r29,-32177
	ctx.r29.s64 = -2108751872;
	// lwz r11,-4760(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4760);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163e58
	ctx.lr = 0x823D0920;
	sub_82163E58(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82165798
	ctx.lr = 0x823D092C;
	sub_82165798(ctx, base);
	// lwz r11,-4760(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4760);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823D0940"))) PPC_WEAK_FUNC(sub_823D0940);
PPC_FUNC_IMPL(__imp__sub_823D0940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-20016
	ctx.r8.s64 = ctx.r11.s64 + -20016;
	// addi r5,r9,-20160
	ctx.r5.s64 = ctx.r9.s64 + -20160;
	// addi r7,r10,-20152
	ctx.r7.s64 = ctx.r10.s64 + -20152;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// lwz r3,-4760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823D0990;
	sub_823C8F28(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823D0994;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823D099C;
	sub_823CDA98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D09B0"))) PPC_WEAK_FUNC(sub_823D09B0);
PPC_FUNC_IMPL(__imp__sub_823D09B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823d0f88
	sub_823D0F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D09B8"))) PPC_WEAK_FUNC(sub_823D09B8);
PPC_FUNC_IMPL(__imp__sub_823D09B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823d0f88
	sub_823D0F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D09C0"))) PPC_WEAK_FUNC(sub_823D09C0);
PPC_FUNC_IMPL(__imp__sub_823D09C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823cdb10
	ctx.lr = 0x823D09D8;
	sub_823CDB10(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-20192
	ctx.r11.s64 = ctx.r11.s64 + -20192;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x821eb290
	ctx.lr = 0x823D09F8;
	sub_821EB290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D0A0C"))) PPC_WEAK_FUNC(sub_823D0A0C);
PPC_FUNC_IMPL(__imp__sub_823D0A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0A10"))) PPC_WEAK_FUNC(sub_823D0A10);
PPC_FUNC_IMPL(__imp__sub_823D0A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823D0A18;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x823D0A2C;
	sub_8218B408(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823D0A38;
	sub_8218B408(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823D0A48;
	sub_823C3280(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r11,r11,-28240
	ctx.r11.s64 = ctx.r11.s64 + -28240;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// ori r3,r6,37304
	ctx.r3.u64 = ctx.r6.u64 | 37304;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f31,11300(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// cntlzw r7,r4
	ctx.r7.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// addi r8,r9,-20192
	ctx.r8.s64 = ctx.r9.s64 + -20192;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r9,r8,-8
	ctx.r9.s64 = ctx.r8.s64 + -8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stwx r6,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u32);
	// li r28,0
	ctx.r28.s64 = 0;
loc_823D0AB8:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d0adc
	if (ctx.cr6.lt) goto loc_823D0ADC;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823D0ADC:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d0b08
	if (ctx.cr6.lt) goto loc_823D0B08;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r4.u32);
loc_823D0B08:
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,200(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,204(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d0b58
	if (ctx.cr6.lt) goto loc_823D0B58;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r28,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r28.u32);
loc_823D0B58:
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d0b6c
	if (!ctx.cr6.eq) goto loc_823D0B6C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_823D0B6C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// lwzu r11,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f10,200(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f6,204(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f2,208(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// bdnz 0x823d0ab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D0AB8;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,-28220
	ctx.r29.s64 = ctx.r29.s64 + -28220;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823cd3e0
	ctx.lr = 0x823D0C0C;
	sub_823CD3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,35
	ctx.r3.s64 = 35;
	// bne cr6,0x823d0c1c
	if (!ctx.cr6.eq) goto loc_823D0C1C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D0C1C:
	// bl 0x8218b408
	ctx.lr = 0x823D0C20;
	sub_8218B408(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// ori r6,r10,29896
	ctx.r6.u64 = ctx.r10.u64 | 29896;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ori r5,r8,29900
	ctx.r5.u64 = ctx.r8.u64 | 29900;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// ori r8,r11,29904
	ctx.r8.u64 = ctx.r11.u64 | 29904;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r4,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r4,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r11,r8
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r11,-4760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4760);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163e58
	ctx.lr = 0x823D0CBC;
	sub_82163E58(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r6,37308
	ctx.r5.u64 = ctx.r6.u64 | 37308;
	// lwzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// bl 0x82163d90
	ctx.lr = 0x823D0CCC;
	sub_82163D90(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r29,r11,-4644
	ctx.r29.s64 = ctx.r11.s64 + -4644;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// addi r5,r10,-19856
	ctx.r5.s64 = ctx.r10.s64 + -19856;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r30,r8,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x8218a5f0
	ctx.lr = 0x823D0CFC;
	sub_8218A5F0(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r4,r6,30700
	ctx.r4.u64 = ctx.r6.u64 | 30700;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r10,r3,30660
	ctx.r10.u64 = ctx.r3.u64 | 30660;
	// ori r5,r7,30680
	ctx.r5.u64 = ctx.r7.u64 | 30680;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r7,r9,30404
	ctx.r7.u64 = ctx.r9.u64 | 30404;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r29,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r29.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r28,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r28.u32);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r8,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r8,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823D0D5C"))) PPC_WEAK_FUNC(sub_823D0D5C);
PPC_FUNC_IMPL(__imp__sub_823D0D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0D60"))) PPC_WEAK_FUNC(sub_823D0D60);
PPC_FUNC_IMPL(__imp__sub_823D0D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823D0D68;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,37336
	ctx.r9.u64 = ctx.r11.u64 | 37336;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r30,r10,-4660
	ctx.r30.s64 = ctx.r10.s64 + -4660;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// bl 0x82084038
	ctx.lr = 0x823D0D9C;
	sub_82084038(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r5,r7,28888
	ctx.r5.u64 = ctx.r7.u64 | 28888;
	// ori r4,r6,28908
	ctx.r4.u64 = ctx.r6.u64 | 28908;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,37300
	ctx.r9.u64 = ctx.r10.u64 | 37300;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r30,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r30.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r11,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwzx r29,r31,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x8218b408
	ctx.lr = 0x823D0DD8;
	sub_8218B408(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823D0DE4;
	sub_8218B408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823d0df4
	if (ctx.cr6.eq) goto loc_823D0DF4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823D0DF4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ori r5,r7,28872
	ctx.r5.u64 = ctx.r7.u64 | 28872;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
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
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r3,28876
	ctx.r9.u64 = ctx.r3.u64 | 28876;
	// ori r7,r10,28880
	ctx.r7.u64 = ctx.r10.u64 | 28880;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsx f11,r4,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f7,r6,r9
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
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
	// stfsx f3,r3,r7
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823D0E8C"))) PPC_WEAK_FUNC(sub_823D0E8C);
PPC_FUNC_IMPL(__imp__sub_823D0E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0E90"))) PPC_WEAK_FUNC(sub_823D0E90);
PPC_FUNC_IMPL(__imp__sub_823D0E90) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,10009
	ctx.r3.s64 = 10009;
	// bl 0x8208f658
	ctx.lr = 0x823D0EB0;
	sub_8208F658(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37340
	ctx.r10.u64 = ctx.r11.u64 | 37340;
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82163df0
	ctx.lr = 0x823D0EC0;
	sub_82163DF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x823d0ed0
	if (!ctx.cr6.lt) goto loc_823D0ED0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823d0ee4
	goto loc_823D0EE4;
loc_823D0ED0:
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r11,r11,51612
	ctx.r11.u64 = ctx.r11.u64 | 51612;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823d0ee4
	if (ctx.cr6.gt) goto loc_823D0EE4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823D0EE4:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37332
	ctx.r10.u64 = ctx.r11.u64 | 37332;
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82163df0
	ctx.lr = 0x823D0EF8;
	sub_82163DF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82165a18
	ctx.lr = 0x823D0F00;
	sub_82165A18(ctx, base);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-4760(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4760);
	// stw r30,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r30.u32);
	// bl 0x8223a910
	ctx.lr = 0x823D0F18;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d0f44
	if (ctx.cr6.eq) goto loc_823D0F44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37308
	ctx.r9.u64 = ctx.r10.u64 | 37308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D0F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D0F44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x823D0F4C;
	sub_823CA688(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823ca5c8
	ctx.lr = 0x823D0F64;
	sub_823CA5C8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,37344
	ctx.r9.u64 = ctx.r10.u64 | 37344;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_823D0F88"))) PPC_WEAK_FUNC(sub_823D0F88);
PPC_FUNC_IMPL(__imp__sub_823D0F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823d0940
	ctx.lr = 0x823D0FA8;
	sub_823D0940(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d0fc4
	if (ctx.cr6.eq) goto loc_823D0FC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823D0FC0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D0FC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D0FDC"))) PPC_WEAK_FUNC(sub_823D0FDC);
PPC_FUNC_IMPL(__imp__sub_823D0FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0FE0"))) PPC_WEAK_FUNC(sub_823D0FE0);
PPC_FUNC_IMPL(__imp__sub_823D0FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823D0FE8;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823d1148
	if (ctx.cr6.lt) goto loc_823D1148;
	// bne cr6,0x823d1298
	if (!ctx.cr6.eq) goto loc_823D1298;
	// bl 0x82163df0
	ctx.lr = 0x823D1008;
	sub_82163DF0(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28252
	ctx.r30.s64 = ctx.r30.s64 + -28252;
	// addi r29,r29,-28256
	ctx.r29.s64 = ctx.r29.s64 + -28256;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r26,0(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8223a960
	ctx.lr = 0x823D1028;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x822368d8
	ctx.lr = 0x823D1038;
	sub_822368D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,52(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x821ebb58
	ctx.lr = 0x823D1048;
	sub_821EBB58(ctx, base);
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// li r9,30233
	ctx.r9.s64 = 30233;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r7,-28376
	ctx.r7.s64 = ctx.r7.s64 + -28376;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-4904(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4904);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D1088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r10,3708
	ctx.r5.s64 = ctx.r10.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29656
	ctx.r3.s64 = ctx.r3.s64 + -29656;
	// bl 0x8218a5f0
	ctx.lr = 0x823D10A4;
	sub_8218A5F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82164eb0
	ctx.lr = 0x823D10B4;
	sub_82164EB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r9,26232
	ctx.r5.s64 = ctx.r9.s64 + 26232;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29528
	ctx.r3.s64 = ctx.r3.s64 + -29528;
	// bl 0x8218a5f0
	ctx.lr = 0x823D10D0;
	sub_8218A5F0(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// ori r5,r8,37308
	ctx.r5.u64 = ctx.r8.u64 | 37308;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29400
	ctx.r3.s64 = ctx.r3.s64 + -29400;
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// bl 0x82084038
	ctx.lr = 0x823D10F8;
	sub_82084038(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// ori r9,r10,37312
	ctx.r9.u64 = ctx.r10.u64 | 37312;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29272
	ctx.r3.s64 = ctx.r3.s64 + -29272;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// bl 0x82084038
	ctx.lr = 0x823D1120;
	sub_82084038(ctx, base);
	// lwz r7,-28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823D113C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823D1148:
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addi r26,r31,-28
	ctx.r26.s64 = ctx.r31.s64 + -28;
	// addi r27,r27,-28256
	ctx.r27.s64 = ctx.r27.s64 + -28256;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D116C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,37288
	ctx.r8.u64 = ctx.r9.u64 | 37288;
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823d1298
	if (ctx.cr6.eq) goto loc_823D1298;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-28252
	ctx.r29.s64 = ctx.r29.s64 + -28252;
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
	ctx.lr = 0x823D11A8;
	sub_82163E58(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D11BC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823d11bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D11BC;
	// bl 0x8223aa28
	ctx.lr = 0x823D11C8;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c8218
	ctx.lr = 0x823D11D8;
	sub_820C8218(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x820c7290
	ctx.lr = 0x823D11F4;
	sub_820C7290(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca128
	ctx.lr = 0x823D120C;
	sub_820CA128(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820c7050
	ctx.lr = 0x823D1214;
	sub_820C7050(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820c7070
	ctx.lr = 0x823D1220;
	sub_820C7070(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x823d125c
	if (!ctx.cr6.gt) goto loc_823D125C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,30524
	ctx.r4.s64 = 30524;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D1250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823D125C:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823d1290
	if (!ctx.cr6.gt) goto loc_823D1290;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,30525
	ctx.r4.s64 = 30525;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D1284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823D1290:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823d08b0
	ctx.lr = 0x823D1298;
	sub_823D08B0(ctx, base);
loc_823D1298:
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823D12A4"))) PPC_WEAK_FUNC(sub_823D12A4);
PPC_FUNC_IMPL(__imp__sub_823D12A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D12A8"))) PPC_WEAK_FUNC(sub_823D12A8);
PPC_FUNC_IMPL(__imp__sub_823D12A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d0a10
	ctx.lr = 0x823D12C0;
	sub_823D0A10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d0d60
	ctx.lr = 0x823D12C8;
	sub_823D0D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823D12D0;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D12E4"))) PPC_WEAK_FUNC(sub_823D12E4);
PPC_FUNC_IMPL(__imp__sub_823D12E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D12E8"))) PPC_WEAK_FUNC(sub_823D12E8);
PPC_FUNC_IMPL(__imp__sub_823D12E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d0a10
	ctx.lr = 0x823D1300;
	sub_823D0A10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d0d60
	ctx.lr = 0x823D1308;
	sub_823D0D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc48
	ctx.lr = 0x823D1310;
	sub_823CDC48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D1324"))) PPC_WEAK_FUNC(sub_823D1324);
PPC_FUNC_IMPL(__imp__sub_823D1324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1328"))) PPC_WEAK_FUNC(sub_823D1328);
PPC_FUNC_IMPL(__imp__sub_823D1328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823D1330;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,-784(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ebb58
	ctx.lr = 0x823D1348;
	sub_821EBB58(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D135C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d1400
	if (ctx.cr6.eq) goto loc_823D1400;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,35904
	ctx.r9.u64 = ctx.r10.u64 | 35904;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwzx r29,r31,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D1384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x823d13cc
	if (ctx.cr6.lt) goto loc_823D13CC;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bge cr6,0x823d1400
	if (!ctx.cr6.lt) goto loc_823D1400;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D13A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d1400
	if (ctx.cr6.eq) goto loc_823D1400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ec830
	ctx.lr = 0x823D13B8;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823d1400
	if (!ctx.cr6.eq) goto loc_823D1400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d08b0
	ctx.lr = 0x823D13C8;
	sub_823D08B0(ctx, base);
	// b 0x823d1400
	goto loc_823D1400;
loc_823D13CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D13E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d1400
	if (ctx.cr6.eq) goto loc_823D1400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ec830
	ctx.lr = 0x823D13F0;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823d1400
	if (!ctx.cr6.eq) goto loc_823D1400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d0e90
	ctx.lr = 0x823D1400;
	sub_823D0E90(ctx, base);
loc_823D1400:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37344
	ctx.r10.u64 = ctx.r11.u64 | 37344;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823d1480
	if (!ctx.cr6.eq) goto loc_823D1480;
	// bl 0x8223ad48
	ctx.lr = 0x823D1418;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d1480
	if (ctx.cr6.eq) goto loc_823D1480;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r11,1964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x823d145c
	if (ctx.cr6.eq) goto loc_823D145C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823d1454
	if (ctx.cr6.eq) goto loc_823D1454;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x823d1464
	if (!ctx.cr6.eq) goto loc_823D1464;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x823d1460
	goto loc_823D1460;
loc_823D1454:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x823d1460
	goto loc_823D1460;
loc_823D145C:
	// li r11,11
	ctx.r11.s64 = 11;
loc_823D1460:
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
loc_823D1464:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D1478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823D1480:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,-28220
	ctx.r30.s64 = ctx.r30.s64 + -28220;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823cd3e0
	ctx.lr = 0x823D1494;
	sub_823CD3E0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// ori r9,r11,37292
	ctx.r9.u64 = ctx.r11.u64 | 37292;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// bl 0x823cd3e0
	ctx.lr = 0x823D14B4;
	sub_823CD3E0(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// ori r5,r7,37300
	ctx.r5.u64 = ctx.r7.u64 | 37300;
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// bl 0x823d0a10
	ctx.lr = 0x823D14D0;
	sub_823D0A10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d0d60
	ctx.lr = 0x823D14D8;
	sub_823D0D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823D14E0;
	sub_823CDC68(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823D14E8"))) PPC_WEAK_FUNC(sub_823D14E8);
PPC_FUNC_IMPL(__imp__sub_823D14E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823D14F0;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 65536;
	// lis r28,-32177
	ctx.r28.s64 = -2108751872;
	// addi r26,r26,-28228
	ctx.r26.s64 = ctx.r26.s64 + -28228;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4760(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4760);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823c8fa0
	ctx.lr = 0x823D1518;
	sub_823C8FA0(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,24796
	ctx.r9.u64 = ctx.r10.u64 | 24796;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x823e97f0
	ctx.lr = 0x823D1534;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,354
	ctx.r4.s64 = 354;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D1548;
	sub_82106F58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,353
	ctx.r4.s64 = 353;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D1558;
	sub_82106F58(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x823D155C;
	sub_8223A960(ctx, base);
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r25,r25,-28224
	ctx.r25.s64 = ctx.r25.s64 + -28224;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823D1574;
	sub_822368B0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82236510
	ctx.lr = 0x823D1588;
	sub_82236510(ctx, base);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r6,29124
	ctx.r4.u64 = ctx.r6.u64 | 29124;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// ori r10,r5,29380
	ctx.r10.u64 = ctx.r5.u64 | 29380;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r30,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r30.u32);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x8218b408
	ctx.lr = 0x823D15C0;
	sub_8218B408(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r11,r5,29384
	ctx.r11.u64 = ctx.r5.u64 | 29384;
	// ori r9,r4,29388
	ctx.r9.u64 = ctx.r4.u64 | 29388;
	// lfs f31,11300(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// ori r4,r5,29392
	ctx.r4.u64 = ctx.r5.u64 | 29392;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r8,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
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
	// stfsx f7,r11,r9
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,29636
	ctx.r10.u64 = ctx.r11.u64 | 29636;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r3,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,-4760(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4760);
	// bl 0x823c9120
	ctx.lr = 0x823D1674;
	sub_823C9120(ctx, base);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r11,r6,29660
	ctx.r11.u64 = ctx.r6.u64 | 29660;
	// ori r10,r5,29892
	ctx.r10.u64 = ctx.r5.u64 | 29892;
	// li r4,372
	ctx.r4.s64 = 372;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r3,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r30,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r5,52(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// bl 0x82106f58
	ctx.lr = 0x823D16AC;
	sub_82106F58(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r6,37316
	ctx.r5.u64 = ctx.r6.u64 | 37316;
	// lwzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// bl 0x823cd3e0
	ctx.lr = 0x823D16C0;
	sub_823CD3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,35
	ctx.r3.s64 = 35;
	// bne cr6,0x823d16d0
	if (!ctx.cr6.eq) goto loc_823D16D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D16D0:
	// bl 0x8218b408
	ctx.lr = 0x823D16D4;
	sub_8218B408(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ori r5,r9,29896
	ctx.r5.u64 = ctx.r9.u64 | 29896;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r9,30148
	ctx.r6.u64 = ctx.r9.u64 | 30148;
	// ori r4,r7,29900
	ctx.r4.u64 = ctx.r7.u64 | 29900;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r7,r3,29904
	ctx.r7.u64 = ctx.r3.u64 | 29904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r10,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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
	// stfsx f7,r5,r4
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
	// stfsx f3,r8,r7
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r30.u32);
	// lbz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 32);
	// bl 0x823c93f0
	ctx.lr = 0x823D1780;
	sub_823C93F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r8,30172
	ctx.r6.u64 = ctx.r8.u64 | 30172;
	// ori r4,r7,30404
	ctx.r4.u64 = ctx.r7.u64 | 30404;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,30660
	ctx.r8.u64 = ctx.r11.u64 | 30660;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// ori r11,r9,37320
	ctx.r11.u64 = ctx.r9.u64 | 37320;
	// addi r27,r7,26232
	ctx.r27.s64 = ctx.r7.s64 + 26232;
	// stwx r3,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r3.u32);
	// lis r5,-32177
	ctx.r5.s64 = -2108751872;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r29,r5,-4676
	ctx.r29.s64 = ctx.r5.s64 + -4676;
	// stwx r30,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r30.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r30,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r30.u32);
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x8218a5f0
	ctx.lr = 0x823D17E8;
	sub_8218A5F0(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,26328
	ctx.r8.u64 = ctx.r10.u64 | 26328;
	// addi r6,r29,8
	ctx.r6.s64 = ctx.r29.s64 + 8;
	// ori r7,r9,26348
	ctx.r7.u64 = ctx.r9.u64 | 26348;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r6,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r30.u32);
	// lwz r11,-4760(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4760);
	// lwz r11,1980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1980);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8218a5f0
	ctx.lr = 0x823D182C;
	sub_8218A5F0(ctx, base);
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r8,25816
	ctx.r6.u64 = ctx.r8.u64 | 25816;
	// ori r5,r7,25836
	ctx.r5.u64 = ctx.r7.u64 | 25836;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r29,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r29.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r30,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r30.u32);
	// bl 0x823d0a10
	ctx.lr = 0x823D1858;
	sub_823D0A10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d0d60
	ctx.lr = 0x823D1860;
	sub_823D0D60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823D186C"))) PPC_WEAK_FUNC(sub_823D186C);
PPC_FUNC_IMPL(__imp__sub_823D186C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1870"))) PPC_WEAK_FUNC(sub_823D1870);
PPC_FUNC_IMPL(__imp__sub_823D1870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823D1878;
	sub_82248768(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823D1884;
	sub_823CD7E8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r28,r28,-28244
	ctx.r28.s64 = ctx.r28.s64 + -28244;
	// lwz r25,8(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r6,-20160
	ctx.r6.s64 = ctx.r6.s64 + -20160;
	// lwz r23,12(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,-20016
	ctx.r8.s64 = ctx.r8.s64 + -20016;
	// addi r7,r7,-20152
	ctx.r7.s64 = ctx.r7.s64 + -20152;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addis r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 65536;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// addi r26,r26,-28228
	ctx.r26.s64 = ctx.r26.s64 + -28228;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// addi r24,r24,-28224
	ctx.r24.s64 = ctx.r24.s64 + -28224;
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r8,r8,-28216
	ctx.r8.s64 = ctx.r8.s64 + -28216;
	// addi r22,r22,-28212
	ctx.r22.s64 = ctx.r22.s64 + -28212;
	// li r7,11
	ctx.r7.s64 = 11;
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r6,r4,37344
	ctx.r6.u64 = ctx.r4.u64 | 37344;
	// stw r7,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r30,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r30.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// li r3,147
	ctx.r3.s64 = 147;
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// stw r29,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// stw r30,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r30.u32);
	// addi r27,r27,-28220
	ctx.r27.s64 = ctx.r27.s64 + -28220;
	// stw r30,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r30.u32);
	// lis r21,-32256
	ctx.r21.s64 = -2113929216;
	// stw r29,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r29.u32);
	// lis r20,-32256
	ctx.r20.s64 = -2113929216;
	// stw r29,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r29.u32);
	// li r7,60
	ctx.r7.s64 = 60;
	// stw r3,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r29,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// lfs f2,14876(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// addi r10,r11,1964
	ctx.r10.s64 = ctx.r11.s64 + 1964;
	// lwz r10,1964(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwz r6,1968(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r6,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r6.u32);
	// lwz r10,1972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1972);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r6,1984(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1984);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// stw r23,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r23.u32);
	// bl 0x823c31b0
	ctx.lr = 0x823D19B8;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d14e8
	ctx.lr = 0x823D19C0;
	sub_823D14E8(ctx, base);
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823D19C8;
	sub_823C8DF0(ctx, base);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r5,-20192
	ctx.r11.s64 = ctx.r5.s64 + -20192;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x821eb290
	ctx.lr = 0x823D19E8;
	sub_821EB290(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x823D19EC;
	sub_82163DF0(ctx, base);
	// stw r30,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r30.u32);
	// stw r30,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r30.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r29,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r29,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r29.u32);
	// ori r7,r9,37328
	ctx.r7.u64 = ctx.r9.u64 | 37328;
	// stw r29,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r29.u32);
	// ori r6,r8,37332
	ctx.r6.u64 = ctx.r8.u64 | 37332;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stwx r4,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// stwx r5,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// bl 0x82164fb0
	ctx.lr = 0x823D1A30;
	sub_82164FB0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,37336
	ctx.r9.u64 = ctx.r10.u64 | 37336;
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// add. r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823d1a50
	if (!ctx.cr0.lt) goto loc_823D1A50;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x823d1a64
	goto loc_823D1A64;
loc_823D1A50:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823d1a64
	if (!ctx.cr6.gt) goto loc_823D1A64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823D1A64:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,37340
	ctx.r9.u64 = ctx.r10.u64 | 37340;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x823cd3e0
	ctx.lr = 0x823D1A7C;
	sub_823CD3E0(ctx, base);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// bl 0x823cd3e0
	ctx.lr = 0x823D1A94;
	sub_823CD3E0(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// cntlzw r5,r3
	ctx.r5.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// ori r11,r6,37300
	ctx.r11.u64 = ctx.r6.u64 | 37300;
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r4,352
	ctx.r4.s64 = 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x823cdf48
	ctx.lr = 0x823D1AB4;
	sub_823CDF48(ctx, base);
	// li r4,371
	ctx.r4.s64 = 371;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823D1AC0;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823D1ACC"))) PPC_WEAK_FUNC(sub_823D1ACC);
PPC_FUNC_IMPL(__imp__sub_823D1ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1AD0"))) PPC_WEAK_FUNC(sub_823D1AD0);
PPC_FUNC_IMPL(__imp__sub_823D1AD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ccf60
	sub_823CCF60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D1AD4"))) PPC_WEAK_FUNC(sub_823D1AD4);
PPC_FUNC_IMPL(__imp__sub_823D1AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1AD8"))) PPC_WEAK_FUNC(sub_823D1AD8);
PPC_FUNC_IMPL(__imp__sub_823D1AD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ccff0
	sub_823CCFF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D1ADC"))) PPC_WEAK_FUNC(sub_823D1ADC);
PPC_FUNC_IMPL(__imp__sub_823D1ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1AE0"))) PPC_WEAK_FUNC(sub_823D1AE0);
PPC_FUNC_IMPL(__imp__sub_823D1AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823D1B00;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d1b2c
	if (ctx.cr6.eq) goto loc_823D1B2C;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// ori r9,r10,37328
	ctx.r9.u64 = ctx.r10.u64 | 37328;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D1B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D1B2C:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823D1B44;
	sub_823C8F28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// bl 0x823c8f28
	ctx.lr = 0x823D1B58;
	sub_823C8F28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D1B78;
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

__attribute__((alias("__imp__sub_823D1B90"))) PPC_WEAK_FUNC(sub_823D1B90);
PPC_FUNC_IMPL(__imp__sub_823D1B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823D1B98;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r30,r30,-28176
	ctx.r30.s64 = ctx.r30.s64 + -28176;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// ori r8,r8,37356
	ctx.r8.u64 = ctx.r8.u64 | 37356;
	// addi r29,r29,-28172
	ctx.r29.s64 = ctx.r29.s64 + -28172;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r5,8000
	ctx.r5.s64 = 8000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r6,r3,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// bl 0x823ce088
	ctx.lr = 0x823D1BD0;
	sub_823CE088(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,-32195
	ctx.r5.s64 = -2109931520;
	// ori r7,r7,45364
	ctx.r7.u64 = ctx.r7.u64 | 45364;
	// lis r4,-32195
	ctx.r4.s64 = -2109931520;
	// lis r11,-32195
	ctx.r11.s64 = -2109931520;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stwx r3,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r8,r5,-6832
	ctx.r8.s64 = ctx.r5.s64 + -6832;
	// addi r7,r4,-6680
	ctx.r7.s64 = ctx.r4.s64 + -6680;
	// addi r6,r11,-10560
	ctx.r6.s64 = ctx.r11.s64 + -10560;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x823cebb0
	ctx.lr = 0x823D1C20;
	sub_823CEBB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823D1C28"))) PPC_WEAK_FUNC(sub_823D1C28);
PPC_FUNC_IMPL(__imp__sub_823D1C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823D1C30;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-28308
	ctx.r11.s64 = ctx.r11.s64 + -28308;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823d1c58
	if (ctx.cr0.lt) goto loc_823D1C58;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823d1c60
	if (ctx.cr6.lt) goto loc_823D1C60;
loc_823D1C58:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// b 0x823d1c6c
	goto loc_823D1C6C;
loc_823D1C60:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
loc_823D1C6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r28,-28180
	ctx.r28.s64 = ctx.r28.s64 + -28180;
	// addi r30,r30,-28172
	ctx.r30.s64 = ctx.r30.s64 + -28172;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D1C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823d1ce0
	if (ctx.cr6.eq) goto loc_823D1CE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823D1CA4;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d1cc4
	if (!ctx.cr6.eq) goto loc_823D1CC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D1CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D1CC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D1CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D1CE0:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// addi r29,r11,1964
	ctx.r29.s64 = ctx.r11.s64 + 1964;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x823D1CFC;
	sub_82248A40(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r3,r10,37248
	ctx.r3.u64 = ctx.r10.u64 | 37248;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r10,r9,37244
	ctx.r10.u64 = ctx.r9.u64 | 37244;
	// ori r9,r7,45364
	ctx.r9.u64 = ctx.r7.u64 | 45364;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82248a40
	ctx.lr = 0x823D1D54;
	sub_82248A40(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r5.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D1D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823D1D80"))) PPC_WEAK_FUNC(sub_823D1D80);
PPC_FUNC_IMPL(__imp__sub_823D1D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823D1D88;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addis r16,r31,1
	ctx.r16.s64 = ctx.r31.s64 + 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r16,r16,-28308
	ctx.r16.s64 = ctx.r16.s64 + -28308;
	// lwz r15,-4760(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// bl 0x8218b408
	ctx.lr = 0x823D1DB0;
	sub_8218B408(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823D1DBC;
	sub_8218B408(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823D1DC8;
	sub_823C3280(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addis r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 65536;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r10,r10,-28292
	ctx.r10.s64 = ctx.r10.s64 + -28292;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r21,r21,-28240
	ctx.r21.s64 = ctx.r21.s64 + -28240;
	// ori r5,r8,37312
	ctx.r5.u64 = ctx.r8.u64 | 37312;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r7,r9,37304
	ctx.r7.u64 = ctx.r9.u64 | 37304;
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r3,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// ori r9,r4,37320
	ctx.r9.u64 = ctx.r4.u64 | 37320;
	// stw r8,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r8.u32);
	// ori r8,r6,37328
	ctx.r8.u64 = ctx.r6.u64 | 37328;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r3,r4,37336
	ctx.r3.u64 = ctx.r4.u64 | 37336;
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// ori r7,r7,37344
	ctx.r7.u64 = ctx.r7.u64 | 37344;
	// rlwinm r6,r4,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stwx r6,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lis r6,-32177
	ctx.r6.s64 = -2108751872;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r11,-3
	ctx.r5.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r30,r6,-4636
	ctx.r30.s64 = ctx.r6.s64 + -4636;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r28,r4,37352
	ctx.r28.u64 = ctx.r4.u64 | 37352;
	// stwx r5,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r27,r4,26232
	ctx.r27.s64 = ctx.r4.s64 + 26232;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// stwx r6,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,-5
	ctx.r8.s64 = ctx.r11.s64 + -5;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r29,r29,-20172
	ctx.r29.s64 = ctx.r29.s64 + -20172;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-6
	ctx.r9.s64 = ctx.r11.s64 + -6;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stwx r9,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8218a5f0
	ctx.lr = 0x823D1EE0;
	sub_8218A5F0(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r7,5336
	ctx.r4.u64 = ctx.r7.u64 | 5336;
	// ori r11,r5,5356
	ctx.r11.u64 = ctx.r5.u64 | 5356;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stwx r10,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r17,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r17.u32);
	// lwz r10,16(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8218a5f0
	ctx.lr = 0x823D1F2C;
	sub_8218A5F0(ctx, base);
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r8,4824
	ctx.r6.u64 = ctx.r8.u64 | 4824;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ori r5,r7,4844
	ctx.r5.u64 = ctx.r7.u64 | 4844;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// addi r7,r10,3248
	ctx.r7.s64 = ctx.r10.s64 + 3248;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stwx r30,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r30.u32);
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r17,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r17.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_823D1F68:
	// lwz r10,-8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d1f88
	if (ctx.cr6.lt) goto loc_823D1F88;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D1F88:
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d1fa8
	if (ctx.cr6.lt) goto loc_823D1FA8;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D1FA8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d1fc8
	if (ctx.cr6.lt) goto loc_823D1FC8;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D1FC8:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d1fe8
	if (ctx.cr6.lt) goto loc_823D1FE8;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D1FE8:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2008
	if (ctx.cr6.lt) goto loc_823D2008;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D2008:
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2028
	if (ctx.cr6.lt) goto loc_823D2028;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D2028:
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2048
	if (ctx.cr6.lt) goto loc_823D2048;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D2048:
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2068
	if (ctx.cr6.lt) goto loc_823D2068;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D2068:
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2088
	if (ctx.cr6.lt) goto loc_823D2088;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D2088:
	// lwz r10,36(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d20a8
	if (ctx.cr6.lt) goto loc_823D20A8;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D20A8:
	// lwz r10,40(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d20c8
	if (ctx.cr6.lt) goto loc_823D20C8;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D20C8:
	// lwz r10,44(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d20e8
	if (ctx.cr6.lt) goto loc_823D20E8;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D20E8:
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2108
	if (ctx.cr6.lt) goto loc_823D2108;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D2108:
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2128
	if (ctx.cr6.lt) goto loc_823D2128;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D2128:
	// lwz r10,64(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2148
	if (ctx.cr6.lt) goto loc_823D2148;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D2148:
	// lwz r10,68(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2168
	if (ctx.cr6.lt) goto loc_823D2168;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D2168:
	// lwz r10,72(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2188
	if (ctx.cr6.lt) goto loc_823D2188;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D2188:
	// lwz r10,76(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d21a8
	if (ctx.cr6.lt) goto loc_823D21A8;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D21A8:
	// lwz r10,80(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d21c8
	if (ctx.cr6.lt) goto loc_823D21C8;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D21C8:
	// lwz r10,84(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d21e8
	if (ctx.cr6.lt) goto loc_823D21E8;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D21E8:
	// lwz r10,88(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2208
	if (ctx.cr6.lt) goto loc_823D2208;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D2208:
	// lwz r10,100(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2228
	if (ctx.cr6.lt) goto loc_823D2228;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D2228:
	// lwz r10,104(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2248
	if (ctx.cr6.lt) goto loc_823D2248;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D2248:
	// lwz r10,108(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2268
	if (ctx.cr6.lt) goto loc_823D2268;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D2268:
	// lwz r10,112(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d2288
	if (ctx.cr6.lt) goto loc_823D2288;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D2288:
	// lwz r10,116(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d22a8
	if (ctx.cr6.lt) goto loc_823D22A8;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D22A8:
	// lwz r10,120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d22c8
	if (ctx.cr6.lt) goto loc_823D22C8;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D22C8:
	// lwz r10,124(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d22e8
	if (ctx.cr6.lt) goto loc_823D22E8;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D22E8:
	// addi r8,r8,144
	ctx.r8.s64 = ctx.r8.s64 + 144;
	// bdnz 0x823d1f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D1F68;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x823d230c
	if (ctx.cr6.lt) goto loc_823D230C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_823D230C:
	// lwz r18,0(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x823d26dc
	if (ctx.cr6.eq) goto loc_823D26DC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r7,8
	ctx.r28.s64 = ctx.r7.s64 + 8;
	// lfs f31,11300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// ori r22,r9,37364
	ctx.r22.u64 = ctx.r9.u64 | 37364;
	// ori r20,r8,37356
	ctx.r20.u64 = ctx.r8.u64 | 37356;
	// addi r19,r11,-19856
	ctx.r19.s64 = ctx.r11.s64 + -19856;
loc_823D2340:
	// addi r24,r28,-8
	ctx.r24.s64 = ctx.r28.s64 + -8;
	// bl 0x8223a960
	ctx.lr = 0x823D2348;
	sub_8223A960(ctx, base);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r25,r11,r23
	ctx.r25.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823D236C;
	sub_822368B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d26c8
	if (ctx.cr6.eq) goto loc_823D26C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82236510
	ctx.lr = 0x823D2388;
	sub_82236510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d26c8
	if (ctx.cr6.eq) goto loc_823D26C8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d23b8
	if (ctx.cr6.lt) goto loc_823D23B8;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r9.u32);
loc_823D23B8:
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d23e4
	if (ctx.cr6.lt) goto loc_823D23E4;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823D23E4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,-4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
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
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f11,204(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f11,208(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d2450
	if (ctx.cr6.lt) goto loc_823D2450;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r17,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r17.u32);
loc_823D2450:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r31,r20
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// add r27,r31,r20
	ctx.r27.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x823c9120
	ctx.lr = 0x823D2464;
	sub_823C9120(ctx, base);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r3.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d249c
	if (ctx.cr6.lt) goto loc_823D249C;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r17,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r17.u32);
loc_823D249C:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
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
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,4(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// lwz r9,8(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r5,52(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D2530;
	sub_82106F58(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d2550
	if (ctx.cr6.lt) goto loc_823D2550;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r17,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r17.u32);
loc_823D2550:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lbz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// bl 0x823c93f0
	ctx.lr = 0x823D255C;
	sub_823C93F0(ctx, base);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r8,r25,4671
	ctx.r8.s64 = ctx.r25.s64 + 4671;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r30,r8,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r7)
	PPC_STORE_U32(ctx.r7.u32 + 220, ctx.r3.u32);
loc_823D2580:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82163e58
	ctx.lr = 0x823D2588;
	sub_82163E58(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82163d90
	ctx.lr = 0x823D2590;
	sub_82163D90(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823d25ac
	if (ctx.cr6.eq) goto loc_823D25AC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// blt cr6,0x823d2580
	if (ctx.cr6.lt) goto loc_823D2580;
	// b 0x823d26c8
	goto loc_823D26C8;
loc_823D25AC:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d25cc
	if (ctx.cr6.lt) goto loc_823D25CC;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r17,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r17.u32);
loc_823D25CC:
	// addi r30,r24,28
	ctx.r30.s64 = ctx.r24.s64 + 28;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823D25E4;
	sub_8218A5F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,24(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
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
	// stw r17,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r17.u32);
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d2628
	if (ctx.cr6.lt) goto loc_823D2628;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r17,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r17.u32);
loc_823D2628:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823d26c8
	if (!ctx.cr6.eq) goto loc_823D26C8;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x8218b408
	ctx.lr = 0x823D2644;
	sub_8218B408(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r8,12(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f10,128(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f6,136(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
loc_823D26C8:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// cmplw cr6,r23,r18
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x823d2340
	if (ctx.cr6.lt) goto loc_823D2340;
loc_823D26DC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D26E8"))) PPC_WEAK_FUNC(sub_823D26E8);
PPC_FUNC_IMPL(__imp__sub_823D26E8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823d27a0
	if (ctx.cr6.eq) goto loc_823D27A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x823D270C;
	sub_823CA688(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,37356
	ctx.r10.u64 = ctx.r11.u64 | 37356;
	// lwz r8,132(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bctrl 
	ctx.lr = 0x823D2730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r7,r7,-28308
	ctx.r7.s64 = ctx.r7.s64 + -28308;
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823d2754
	if (ctx.cr0.lt) goto loc_823D2754;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823d275c
	if (ctx.cr6.lt) goto loc_823D275C;
loc_823D2754:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// b 0x823d2768
	goto loc_823D2768;
loc_823D275C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
loc_823D2768:
	// addi r11,r11,-28172
	ctx.r11.s64 = ctx.r11.s64 + -28172;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,-4752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823ca5c8
	ctx.lr = 0x823D278C;
	sub_823CA5C8(ctx, base);
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
loc_823D27A0:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823ca638
	ctx.lr = 0x823D27B4;
	sub_823CA638(ctx, base);
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

__attribute__((alias("__imp__sub_823D27C8"))) PPC_WEAK_FUNC(sub_823D27C8);
PPC_FUNC_IMPL(__imp__sub_823D27C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823D27D0;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r28,r28,-28308
	ctx.r28.s64 = ctx.r28.s64 + -28308;
	// addi r8,r11,-19704
	ctx.r8.s64 = ctx.r11.s64 + -19704;
	// addi r7,r10,-19840
	ctx.r7.s64 = ctx.r10.s64 + -19840;
	// addi r6,r9,-19848
	ctx.r6.s64 = ctx.r9.s64 + -19848;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823d281c
	if (ctx.cr0.lt) goto loc_823D281C;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823d282c
	if (ctx.cr6.lt) goto loc_823D282C;
loc_823D281C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,37364
	ctx.r29.u64 = ctx.r11.u64 | 37364;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x823d2840
	goto loc_823D2840;
loc_823D282C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r29,r10,37364
	ctx.r29.u64 = ctx.r10.u64 | 37364;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_823D2840:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823D2858;
	sub_823C8F28(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823d2870
	if (ctx.cr0.lt) goto loc_823D2870;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823d2878
	if (ctx.cr6.lt) goto loc_823D2878;
loc_823D2870:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x823d2884
	goto loc_823D2884;
loc_823D2878:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_823D2884:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823c8f28
	ctx.lr = 0x823D2898;
	sub_823C8F28(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r10,r11,45364
	ctx.r10.u64 = ctx.r11.u64 | 45364;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823c8f28
	ctx.lr = 0x823D28B4;
	sub_823C8F28(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r8,r9,37244
	ctx.r8.u64 = ctx.r9.u64 | 37244;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823c8f28
	ctx.lr = 0x823D28D0;
	sub_823C8F28(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r6,r7,37248
	ctx.r6.u64 = ctx.r7.u64 | 37248;
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x823c8f28
	ctx.lr = 0x823D28EC;
	sub_823C8F28(ctx, base);
	// lwz r11,-4760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r30,r11,1964
	ctx.r30.s64 = ctx.r11.s64 + 1964;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823D2904;
	sub_82248A40(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r5,37360
	ctx.r11.u64 = ctx.r5.u64 | 37360;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82248a40
	ctx.lr = 0x823D2924;
	sub_82248A40(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823D2928;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3d50
	ctx.lr = 0x823D2930;
	sub_823C3D50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d294c
	if (ctx.cr6.eq) goto loc_823D294C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823ca638
	ctx.lr = 0x823D294C;
	sub_823CA638(ctx, base);
loc_823D294C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823D2954;
	sub_823CDA98(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823D295C"))) PPC_WEAK_FUNC(sub_823D295C);
PPC_FUNC_IMPL(__imp__sub_823D295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D2960"))) PPC_WEAK_FUNC(sub_823D2960);
PPC_FUNC_IMPL(__imp__sub_823D2960) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823d2cb8
	sub_823D2CB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D2968"))) PPC_WEAK_FUNC(sub_823D2968);
PPC_FUNC_IMPL(__imp__sub_823D2968) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823d2cb8
	sub_823D2CB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D2970"))) PPC_WEAK_FUNC(sub_823D2970);
PPC_FUNC_IMPL(__imp__sub_823D2970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ori r10,r11,37332
	ctx.r10.u64 = ctx.r11.u64 | 37332;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addic. r4,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r4.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x823d29a4
	if (!ctx.cr0.lt) goto loc_823D29A4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x823d29b0
	goto loc_823D29B0;
loc_823D29A4:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// blt cr6,0x823d29b0
	if (ctx.cr6.lt) goto loc_823D29B0;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
loc_823D29B0:
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1b90
	ctx.lr = 0x823D29BC;
	sub_823D1B90(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823D29C4;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d29f0
	if (ctx.cr6.eq) goto loc_823D29F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37328
	ctx.r9.u64 = ctx.r10.u64 | 37328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D29F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D29F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de918
	ctx.lr = 0x823D29FC;
	sub_823DE918(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x823D2A04;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D2A1C"))) PPC_WEAK_FUNC(sub_823D2A1C);
PPC_FUNC_IMPL(__imp__sub_823D2A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D2A20"))) PPC_WEAK_FUNC(sub_823D2A20);
PPC_FUNC_IMPL(__imp__sub_823D2A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823D2A28;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-28
	ctx.r29.s64 = ctx.r3.s64 + -28;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-28308
	ctx.r11.s64 = ctx.r11.s64 + -28308;
	// lwz r10,-4760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4760);
	// lwz r9,-8540(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8540);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r24,r9,1696
	ctx.r24.s64 = ctx.r9.s64 + 1696;
	// lwz r27,8(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add. r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823d2a6c
	if (ctx.cr0.lt) goto loc_823D2A6C;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823d2a74
	if (ctx.cr6.lt) goto loc_823D2A74;
loc_823D2A6C:
	// addis r25,r29,1
	ctx.r25.s64 = ctx.r29.s64 + 65536;
	// b 0x823d2a80
	goto loc_823D2A80;
loc_823D2A74:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addis r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 65536;
loc_823D2A80:
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// addi r25,r25,-28172
	ctx.r25.s64 = ctx.r25.s64 + -28172;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-28208
	ctx.r28.s64 = ctx.r28.s64 + -28208;
loc_823D2A90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82163e58
	ctx.lr = 0x823D2A9C;
	sub_82163E58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82163d90
	ctx.lr = 0x823D2AA4;
	sub_82163D90(ctx, base);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x823d2ab8
	if (ctx.cr6.eq) goto loc_823D2AB8;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823d2bc0
	if (ctx.cr6.eq) goto loc_823D2BC0;
loc_823D2AB8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// blt cr6,0x823d2a90
	if (ctx.cr6.lt) goto loc_823D2A90;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D2AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82163e58
	ctx.lr = 0x823D2AE8;
	sub_82163E58(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823D2AFC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d2afc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D2AFC;
	// bl 0x8223aa28
	ctx.lr = 0x823D2B08;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820c8218
	ctx.lr = 0x823D2B18;
	sub_820C8218(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// li r31,10
	ctx.r31.s64 = 10;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
loc_823D2B34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6b60
	ctx.lr = 0x823D2B3C;
	sub_820C6B60(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// bge 0x823d2b34
	if (!ctx.cr0.lt) goto loc_823D2B34;
	// addi r3,r1,1096
	ctx.r3.s64 = ctx.r1.s64 + 1096;
	// bl 0x820c6b60
	ctx.lr = 0x823D2B50;
	sub_820C6B60(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820c6f50
	ctx.lr = 0x823D2B58;
	sub_820C6F50(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820ca128
	ctx.lr = 0x823D2B70;
	sub_820CA128(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820c7050
	ctx.lr = 0x823D2B78;
	sub_820C7050(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820c7070
	ctx.lr = 0x823D2B84;
	sub_820C7070(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-19544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x823d2be8
	if (!ctx.cr6.gt) goto loc_823D2BE8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30184
	ctx.r4.s64 = 30184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D2BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823D2BC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D2BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823D2BE8:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823d2c1c
	if (!ctx.cr6.gt) goto loc_823D2C1C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,30185
	ctx.r4.s64 = 30185;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D2C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823D2C1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d1c28
	ctx.lr = 0x823D2C24;
	sub_823D1C28(ctx, base);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823D2C30"))) PPC_WEAK_FUNC(sub_823D2C30);
PPC_FUNC_IMPL(__imp__sub_823D2C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823cdb10
	ctx.lr = 0x823D2C4C;
	sub_823CDB10(ctx, base);
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de918
	ctx.lr = 0x823D2C5C;
	sub_823DE918(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d26e8
	ctx.lr = 0x823D2C68;
	sub_823D26E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823D2C70;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d2c9c
	if (ctx.cr6.eq) goto loc_823D2C9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37328
	ctx.r9.u64 = ctx.r10.u64 | 37328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D2C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D2C9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D2CB4"))) PPC_WEAK_FUNC(sub_823D2CB4);
PPC_FUNC_IMPL(__imp__sub_823D2CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D2CB8"))) PPC_WEAK_FUNC(sub_823D2CB8);
PPC_FUNC_IMPL(__imp__sub_823D2CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823d27c8
	ctx.lr = 0x823D2CD8;
	sub_823D27C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2cf4
	if (ctx.cr6.eq) goto loc_823D2CF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823D2CF0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D2CF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D2D0C"))) PPC_WEAK_FUNC(sub_823D2D0C);
PPC_FUNC_IMPL(__imp__sub_823D2D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D2D10"))) PPC_WEAK_FUNC(sub_823D2D10);
PPC_FUNC_IMPL(__imp__sub_823D2D10) {
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
	// bl 0x823d1d80
	ctx.lr = 0x823D2D28;
	sub_823D1D80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,37360
	ctx.r11.u64 = ctx.r11.u64 | 37360;
	// li r9,13653
	ctx.r9.s64 = 13653;
	// li r8,13654
	ctx.r8.s64 = 13654;
	// li r7,15008
	ctx.r7.s64 = 15008;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r4,279
	ctx.r4.s64 = 279;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x823D2D64;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823D2D6C;
	sub_8213D730(ctx, base);
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

__attribute__((alias("__imp__sub_823D2D80"))) PPC_WEAK_FUNC(sub_823D2D80);
PPC_FUNC_IMPL(__imp__sub_823D2D80) {
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
	// bl 0x823d1d80
	ctx.lr = 0x823D2D98;
	sub_823D1D80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,37360
	ctx.r11.u64 = ctx.r11.u64 | 37360;
	// li r9,13653
	ctx.r9.s64 = 13653;
	// li r8,13654
	ctx.r8.s64 = 13654;
	// li r7,15008
	ctx.r7.s64 = 15008;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r4,279
	ctx.r4.s64 = 279;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x823D2DD4;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc48
	ctx.lr = 0x823D2DDC;
	sub_823CDC48(ctx, base);
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

__attribute__((alias("__imp__sub_823D2DF0"))) PPC_WEAK_FUNC(sub_823D2DF0);
PPC_FUNC_IMPL(__imp__sub_823D2DF0) {
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
	ctx.lr = 0x823D2E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d2e38
	if (ctx.cr6.eq) goto loc_823D2E38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D2E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D2E38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1d80
	ctx.lr = 0x823D2E40;
	sub_823D1D80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// ori r9,r11,37360
	ctx.r9.u64 = ctx.r11.u64 | 37360;
	// li r8,13653
	ctx.r8.s64 = 13653;
	// li r7,13654
	ctx.r7.s64 = 13654;
	// li r6,15008
	ctx.r6.s64 = 15008;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r4,279
	ctx.r4.s64 = 279;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x823D2E7C;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823D2E84;
	sub_823CDC68(ctx, base);
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

__attribute__((alias("__imp__sub_823D2E98"))) PPC_WEAK_FUNC(sub_823D2E98);
PPC_FUNC_IMPL(__imp__sub_823D2E98) {
	PPC_FUNC_PROLOGUE();
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
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r30,r30,-28180
	ctx.r30.s64 = ctx.r30.s64 + -28180;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823c8fa0
	ctx.lr = 0x823D2EC8;
	sub_823C8FA0(ctx, base);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,3804
	ctx.r8.u64 = ctx.r9.u64 | 3804;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r3,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823e97f0
	ctx.lr = 0x823D2EE4;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,272
	ctx.r4.s64 = 272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D2EF8;
	sub_82106F58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,271
	ctx.r4.s64 = 271;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D2F08;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d1d80
	ctx.lr = 0x823D2F10;
	sub_823D1D80(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// ori r11,r6,37360
	ctx.r11.u64 = ctx.r6.u64 | 37360;
	// li r10,13653
	ctx.r10.s64 = 13653;
	// li r9,13654
	ctx.r9.s64 = 13654;
	// li r8,15008
	ctx.r8.s64 = 15008;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,279
	ctx.r4.s64 = 279;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// bl 0x82106f58
	ctx.lr = 0x823D2F4C;
	sub_82106F58(ctx, base);
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

__attribute__((alias("__imp__sub_823D2F64"))) PPC_WEAK_FUNC(sub_823D2F64);
PPC_FUNC_IMPL(__imp__sub_823D2F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D2F68"))) PPC_WEAK_FUNC(sub_823D2F68);
PPC_FUNC_IMPL(__imp__sub_823D2F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823D2F70;
	sub_8224876C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823D2F7C;
	sub_823CD7E8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// ori r21,r10,37364
	ctx.r21.u64 = ctx.r10.u64 | 37364;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r5,r5,-28244
	ctx.r5.s64 = ctx.r5.s64 + -28244;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// ori r4,r9,37360
	ctx.r4.u64 = ctx.r9.u64 | 37360;
	// addi r3,r8,-19704
	ctx.r3.s64 = ctx.r8.s64 + -19704;
	// addi r10,r10,-28180
	ctx.r10.s64 = ctx.r10.s64 + -28180;
	// addi r9,r7,-19840
	ctx.r9.s64 = ctx.r7.s64 + -19840;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r8,r6,-19848
	ctx.r8.s64 = ctx.r6.s64 + -19848;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// add r22,r31,r21
	ctx.r22.u64 = ctx.r31.u64 + ctx.r21.u64;
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r29.u32);
	// addi r11,r22,-8
	ctx.r11.s64 = ctx.r22.s64 + -8;
	// stw r30,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r30.u32);
	// stw r29,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r29.u32);
	// stw r30,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r30.u32);
	// stw r29,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r29.u32);
	// stw r30,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r30.u32);
	// stw r29,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r29.u32);
	// stw r30,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r30.u32);
	// stw r29,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r29.u32);
	// stw r30,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r30.u32);
	// stw r29,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r29.u32);
	// stw r30,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r30.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stwx r6,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
loc_823D302C:
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d302c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D302C;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// ori r9,r11,128
	ctx.r9.u64 = ctx.r11.u64 | 128;
	// addi r28,r28,-20172
	ctx.r28.s64 = ctx.r28.s64 + -20172;
	// li r8,146
	ctx.r8.s64 = 146;
	// xori r7,r9,16
	ctx.r7.u64 = ctx.r9.u64 ^ 16;
	// stw r8,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lwz r11,-4760(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// lwz r6,1964(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r11,-4760(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// lwz r4,2004(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// bl 0x823d1b90
	ctx.lr = 0x823D307C;
	sub_823D1B90(ctx, base);
	// lwz r3,-4760(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4760);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x823c8f60
	ctx.lr = 0x823D3090;
	sub_823C8F60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x823c8f60
	ctx.lr = 0x823D30A4;
	sub_823C8F60(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x823c8f60
	ctx.lr = 0x823D30B8;
	sub_823C8F60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x823c8f60
	ctx.lr = 0x823D30CC;
	sub_823C8F60(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823c8f60
	ctx.lr = 0x823D30E0;
	sub_823C8F60(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x823d3108
	if (ctx.cr6.eq) goto loc_823D3108;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x823d3108
	if (ctx.cr6.eq) goto loc_823D3108;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823d3110
	if (ctx.cr6.eq) goto loc_823D3110;
loc_823D3108:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_823D3110:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x823ce140
	ctx.lr = 0x823D314C;
	sub_823CE140(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_823D3154:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823d316c
	if (!ctx.cr6.eq) goto loc_823D316C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823d3180
	if (ctx.cr6.eq) goto loc_823D3180;
loc_823D316C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r29,1000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1000, ctx.xer);
	// blt cr6,0x823d3154
	if (ctx.cr6.lt) goto loc_823D3154;
	// b 0x823d31cc
	goto loc_823D31CC;
loc_823D3180:
	// add r11,r24,r25
	ctx.r11.u64 = ctx.r24.u64 + ctx.r25.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823d31cc
	if (ctx.cr6.eq) goto loc_823D31CC;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ce140
	ctx.lr = 0x823D31A0;
	sub_823CE140(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823d31cc
	if (!ctx.cr6.gt) goto loc_823D31CC;
loc_823D31A8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ce168
	ctx.lr = 0x823D31C4;
	sub_823CE168(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823d31a8
	if (!ctx.cr0.eq) goto loc_823D31A8;
loc_823D31CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823D31EC;
	sub_823C31B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d26e8
	ctx.lr = 0x823D31F8;
	sub_823D26E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d2e98
	ctx.lr = 0x823D3200;
	sub_823D2E98(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823D3208;
	sub_823C8DF0(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x823D320C;
	sub_8223A960(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addi r9,r9,-28308
	ctx.r9.s64 = ctx.r9.s64 + -28308;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823d322c
	if (ctx.cr0.lt) goto loc_823D322C;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823d3234
	if (ctx.cr6.lt) goto loc_823D3234;
loc_823D322C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x823d3240
	goto loc_823D3240;
loc_823D3234:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_823D3240:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823D324C;
	sub_822368B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x821eb290
	ctx.lr = 0x823D3258;
	sub_821EB290(ctx, base);
	// li r4,270
	ctx.r4.s64 = 270;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823D3264;
	sub_823CDF48(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r11,r11,3248
	ctx.r11.s64 = ctx.r11.s64 + 3248;
	// addi r30,r11,-20
	ctx.r30.s64 = ctx.r11.s64 + -20;
loc_823D3274:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x823cdf48
	ctx.lr = 0x823D3280;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,36(r30)
	ea = 36 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x823cdf48
	ctx.lr = 0x823D328C;
	sub_823CDF48(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823d3274
	if (!ctx.cr0.eq) goto loc_823D3274;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823D32A0"))) PPC_WEAK_FUNC(sub_823D32A0);
PPC_FUNC_IMPL(__imp__sub_823D32A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-19248
	ctx.r8.s64 = ctx.r11.s64 + -19248;
	// addi r6,r9,-19392
	ctx.r6.s64 = ctx.r9.s64 + -19392;
	// addi r7,r10,-19384
	ctx.r7.s64 = ctx.r10.s64 + -19384;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// ori r11,r3,37244
	ctx.r11.u64 = ctx.r3.u64 | 37244;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x823c8f28
	ctx.lr = 0x823D32FC;
	sub_823C8F28(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,37248
	ctx.r9.u64 = ctx.r10.u64 | 37248;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x823c8f28
	ctx.lr = 0x823D3318;
	sub_823C8F28(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823D331C;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823D3324;
	sub_823CDA98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D333C"))) PPC_WEAK_FUNC(sub_823D333C);
PPC_FUNC_IMPL(__imp__sub_823D333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3340"))) PPC_WEAK_FUNC(sub_823D3340);
PPC_FUNC_IMPL(__imp__sub_823D3340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,-28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r30,r3,-28
	ctx.r30.s64 = ctx.r3.s64 + -28;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r9.u32);
	// lwz r8,128(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// addi r10,r11,1964
	ctx.r10.s64 = ctx.r11.s64 + 1964;
	// lwz r5,1964(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D338C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r7,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823D33A8;
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

__attribute__((alias("__imp__sub_823D33C0"))) PPC_WEAK_FUNC(sub_823D33C0);
PPC_FUNC_IMPL(__imp__sub_823D33C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823d33d0
	sub_823D33D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D33C8"))) PPC_WEAK_FUNC(sub_823D33C8);
PPC_FUNC_IMPL(__imp__sub_823D33C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823d33d0
	sub_823D33D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D33D0"))) PPC_WEAK_FUNC(sub_823D33D0);
PPC_FUNC_IMPL(__imp__sub_823D33D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823d32a0
	ctx.lr = 0x823D33F0;
	sub_823D32A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d340c
	if (ctx.cr6.eq) goto loc_823D340C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823D3408;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D340C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D3424"))) PPC_WEAK_FUNC(sub_823D3424);
PPC_FUNC_IMPL(__imp__sub_823D3424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3428"))) PPC_WEAK_FUNC(sub_823D3428);
PPC_FUNC_IMPL(__imp__sub_823D3428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823D3430;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,4658
	ctx.r11.s64 = ctx.r11.s64 + 4658;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823d34ec
	if (ctx.cr6.eq) goto loc_823D34EC;
	// li r11,17
	ctx.r11.s64 = 17;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 652, ctx.r11.u32);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// stw r28,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r11,-4760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4760);
	// addi r29,r11,1964
	ctx.r29.s64 = ctx.r11.s64 + 1964;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x823D347C;
	sub_82248A40(ctx, base);
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// ori r7,r9,37396
	ctx.r7.u64 = ctx.r9.u64 | 37396;
	// addi r8,r8,-28308
	ctx.r8.s64 = ctx.r8.s64 + -28308;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x82248a40
	ctx.lr = 0x823D34BC;
	sub_82248A40(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r9,41500
	ctx.r7.u64 = ctx.r9.u64 | 41500;
	// ori r6,r8,41496
	ctx.r6.u64 = ctx.r8.u64 | 41496;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r5,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// stwx r28,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r28.u32);
	// lwz r4,-28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823D34EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D34EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823D34F4"))) PPC_WEAK_FUNC(sub_823D34F4);
PPC_FUNC_IMPL(__imp__sub_823D34F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D34F8"))) PPC_WEAK_FUNC(sub_823D34F8);
PPC_FUNC_IMPL(__imp__sub_823D34F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823D3500;
	sub_8224876C(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// addi r25,r25,-28308
	ctx.r25.s64 = ctx.r25.s64 + -28308;
	// bl 0x8218b408
	ctx.lr = 0x823D351C;
	sub_8218B408(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823D3528;
	sub_8218B408(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823D3538;
	sub_823C3280(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r29,r29,-28240
	ctx.r29.s64 = ctx.r29.s64 + -28240;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r9,r9,-28292
	ctx.r9.s64 = ctx.r9.s64 + -28292;
	// addi r10,r29,-8
	ctx.r10.s64 = ctx.r29.s64 + -8;
loc_823D3560:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stwu r5,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823d3560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3560;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r28,r28,-24044
	ctx.r28.s64 = ctx.r28.s64 + -24044;
	// addi r27,r11,26232
	ctx.r27.s64 = ctx.r11.s64 + 26232;
	// addi r30,r10,-4620
	ctx.r30.s64 = ctx.r10.s64 + -4620;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8218a5f0
	ctx.lr = 0x823D35A8;
	sub_8218A5F0(ctx, base);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r9,19672
	ctx.r7.u64 = ctx.r9.u64 | 19672;
	// ori r6,r8,19692
	ctx.r6.u64 = ctx.r8.u64 | 19692;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r24,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r24.u32);
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8218a5f0
	ctx.lr = 0x823D35F0;
	sub_8218A5F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r7,19160
	ctx.r5.u64 = ctx.r7.u64 | 19160;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ori r4,r6,19180
	ctx.r4.u64 = ctx.r6.u64 | 19180;
	// addi r7,r10,-19536
	ctx.r7.s64 = ctx.r10.s64 + -19536;
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r30,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r24,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r24.u32);
loc_823D362C:
	// lwz r10,-8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d364c
	if (ctx.cr6.lt) goto loc_823D364C;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D364C:
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d366c
	if (ctx.cr6.lt) goto loc_823D366C;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D366C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d368c
	if (ctx.cr6.lt) goto loc_823D368C;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D368C:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d36ac
	if (ctx.cr6.lt) goto loc_823D36AC;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D36AC:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d36cc
	if (ctx.cr6.lt) goto loc_823D36CC;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D36CC:
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d36ec
	if (ctx.cr6.lt) goto loc_823D36EC;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D36EC:
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d370c
	if (ctx.cr6.lt) goto loc_823D370C;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823D370C:
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d372c
	if (ctx.cr6.lt) goto loc_823D372C;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D372C:
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d374c
	if (ctx.cr6.lt) goto loc_823D374C;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D374C:
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d376c
	if (ctx.cr6.lt) goto loc_823D376C;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D376C:
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d378c
	if (ctx.cr6.lt) goto loc_823D378C;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D378C:
	// lwz r10,36(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d37ac
	if (ctx.cr6.lt) goto loc_823D37AC;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D37AC:
	// lwz r10,40(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d37cc
	if (ctx.cr6.lt) goto loc_823D37CC;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D37CC:
	// lwz r10,44(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d37ec
	if (ctx.cr6.lt) goto loc_823D37EC;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D37EC:
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d380c
	if (ctx.cr6.lt) goto loc_823D380C;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D380C:
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d382c
	if (ctx.cr6.lt) goto loc_823D382C;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D382C:
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d384c
	if (ctx.cr6.lt) goto loc_823D384C;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D384C:
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d386c
	if (ctx.cr6.lt) goto loc_823D386C;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823D386C:
	// addi r8,r8,72
	ctx.r8.s64 = ctx.r8.s64 + 72;
	// bdnz 0x823d362c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D362C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x823d3890
	if (ctx.cr6.lt) goto loc_823D3890;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_823D3890:
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823d3a50
	if (ctx.cr6.eq) goto loc_823D3A50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r7,8
	ctx.r30.s64 = ctx.r7.s64 + 8;
	// ori r27,r10,37396
	ctx.r27.u64 = ctx.r10.u64 | 37396;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_823D38B4:
	// bl 0x8223a960
	ctx.lr = 0x823D38B8;
	sub_8223A960(ctx, base);
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x822368b0
	ctx.lr = 0x823D38D4;
	sub_822368B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3a3c
	if (ctx.cr6.eq) goto loc_823D3A3C;
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d3900
	if (ctx.cr6.lt) goto loc_823D3900;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r9.u32);
loc_823D3900:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d392c
	if (ctx.cr6.lt) goto loc_823D392C;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823D392C:
	// extsw r11,r23
	ctx.r11.s64 = ctx.r23.s32;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f11,204(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f11,208(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d3994
	if (ctx.cr6.lt) goto loc_823D3994;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_823D3994:
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D39A4;
	sub_82106F58(ctx, base);
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d39b8
	if (!ctx.cr6.eq) goto loc_823D39B8;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_823D39B8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f6,104(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
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
loc_823D3A3C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823d38b4
	if (ctx.cr6.lt) goto loc_823D38B4;
loc_823D3A50:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823D3A5C"))) PPC_WEAK_FUNC(sub_823D3A5C);
PPC_FUNC_IMPL(__imp__sub_823D3A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3A60"))) PPC_WEAK_FUNC(sub_823D3A60);
PPC_FUNC_IMPL(__imp__sub_823D3A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8223a960
	ctx.lr = 0x823D3A80;
	sub_8223A960(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-28308
	ctx.r10.s64 = ctx.r10.s64 + -28308;
	// ori r8,r9,37396
	ctx.r8.u64 = ctx.r9.u64 | 37396;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// bl 0x822368b0
	ctx.lr = 0x823D3AB0;
	sub_822368B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x821eb290
	ctx.lr = 0x823D3ABC;
	sub_821EB290(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D3AD4"))) PPC_WEAK_FUNC(sub_823D3AD4);
PPC_FUNC_IMPL(__imp__sub_823D3AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3AD8"))) PPC_WEAK_FUNC(sub_823D3AD8);
PPC_FUNC_IMPL(__imp__sub_823D3AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823cdb10
	ctx.lr = 0x823D3AF0;
	sub_823CDB10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x823d3a60
	ctx.lr = 0x823D3AFC;
	sub_823D3A60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D3B10"))) PPC_WEAK_FUNC(sub_823D3B10);
PPC_FUNC_IMPL(__imp__sub_823D3B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823D3B18;
	sub_82248788(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8223ad48
	ctx.lr = 0x823D3B24;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d3b38
	if (!ctx.cr6.eq) goto loc_823D3B38;
loc_823D3B2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823D3B38:
	// lis r29,-32177
	ctx.r29.s64 = -2108751872;
	// lwz r11,-4760(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4760);
	// addi r31,r11,1964
	ctx.r31.s64 = ctx.r11.s64 + 1964;
	// bl 0x8223aa28
	ctx.lr = 0x823D3B48;
	sub_8223AA28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d3b2c
	if (ctx.cr6.eq) goto loc_823D3B2C;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82237588
	ctx.lr = 0x823D3B5C;
	sub_82237588(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82238070
	ctx.lr = 0x823D3B78;
	sub_82238070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82237538
	ctx.lr = 0x823D3B84;
	sub_82237538(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8214a2d8
	ctx.lr = 0x823D3B90;
	sub_8214A2D8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8214a2d8
	ctx.lr = 0x823D3B9C;
	sub_8214A2D8(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r3,-4760(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4760);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823c9090
	ctx.lr = 0x823D3BB8;
	sub_823C9090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d3b2c
	if (ctx.cr6.eq) goto loc_823D3B2C;
	// addis r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 65536;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-28308
	ctx.r10.s64 = ctx.r10.s64 + -28308;
	// ori r8,r9,37396
	ctx.r8.u64 = ctx.r9.u64 | 37396;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// bl 0x82239960
	ctx.lr = 0x823D3BF8;
	sub_82239960(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x821847c0
	ctx.lr = 0x823D3C08;
	sub_821847C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d3c30
	if (ctx.cr6.eq) goto loc_823D3C30;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822392f8
	ctx.lr = 0x823D3C30;
	sub_822392F8(ctx, base);
loc_823D3C30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823D3C3C"))) PPC_WEAK_FUNC(sub_823D3C3C);
PPC_FUNC_IMPL(__imp__sub_823D3C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3C40"))) PPC_WEAK_FUNC(sub_823D3C40);
PPC_FUNC_IMPL(__imp__sub_823D3C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d34f8
	ctx.lr = 0x823D3C58;
	sub_823D34F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823D3C60;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D3C74"))) PPC_WEAK_FUNC(sub_823D3C74);
PPC_FUNC_IMPL(__imp__sub_823D3C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3C78"))) PPC_WEAK_FUNC(sub_823D3C78);
PPC_FUNC_IMPL(__imp__sub_823D3C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8223ad48
	ctx.lr = 0x823D3C90;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d3ca8
	if (ctx.cr6.eq) goto loc_823D3CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d34f8
	ctx.lr = 0x823D3CA0;
	sub_823D34F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc48
	ctx.lr = 0x823D3CA8;
	sub_823CDC48(ctx, base);
loc_823D3CA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D3CBC"))) PPC_WEAK_FUNC(sub_823D3CBC);
PPC_FUNC_IMPL(__imp__sub_823D3CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3CC0"))) PPC_WEAK_FUNC(sub_823D3CC0);
PPC_FUNC_IMPL(__imp__sub_823D3CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823D3CC8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r12,5
	ctx.r12.s64 = 327680;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r12,r12,3
	ctx.r12.u64 = ctx.r12.u64 | 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r10,41496
	ctx.r11.u64 = ctx.r10.u64 | 41496;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823d3cf8
	if (ctx.cr6.eq) goto loc_823D3CF8;
	// stwx r8,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r8.u32);
loc_823D3CF8:
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r10,r10,41500
	ctx.r10.u64 = ctx.r10.u64 | 41500;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d3d34
	if (!ctx.cr6.gt) goto loc_823D3D34;
	// lis r9,-32186
	ctx.r9.s64 = -2109341696;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lwz r9,3536(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3536);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823d3d34
	if (!ctx.cr6.gt) goto loc_823D3D34;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
loc_823D3D34:
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r29,r31,r10
	ctx.r29.u64 = ctx.r31.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d3d60
	if (ctx.cr6.eq) goto loc_823D3D60;
	// bl 0x8223ad48
	ctx.lr = 0x823D3D48;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d3d60
	if (ctx.cr6.eq) goto loc_823D3D60;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// bl 0x823d3b10
	ctx.lr = 0x823D3D60;
	sub_823D3B10(ctx, base);
loc_823D3D60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d34f8
	ctx.lr = 0x823D3D68;
	sub_823D34F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823D3D70;
	sub_823CDC68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823D3D78"))) PPC_WEAK_FUNC(sub_823D3D78);
PPC_FUNC_IMPL(__imp__sub_823D3D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823d34f8
	ctx.lr = 0x823D3D94;
	sub_823D34F8(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-24036
	ctx.r30.s64 = ctx.r30.s64 + -24036;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d3dd0
	if (ctx.cr6.eq) goto loc_823D3DD0;
	// bl 0x8223ad48
	ctx.lr = 0x823D3DAC;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d3dd8
	if (ctx.cr6.eq) goto loc_823D3DD8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,41496
	ctx.r9.u64 = ctx.r10.u64 | 41496;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x823d3b10
	ctx.lr = 0x823D3DD0;
	sub_823D3B10(ctx, base);
loc_823D3DD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdcc0
	ctx.lr = 0x823D3DD8;
	sub_823CDCC0(ctx, base);
loc_823D3DD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D3DF0"))) PPC_WEAK_FUNC(sub_823D3DF0);
PPC_FUNC_IMPL(__imp__sub_823D3DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d34f8
	ctx.lr = 0x823D3E08;
	sub_823D34F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdcc0
	ctx.lr = 0x823D3E10;
	sub_823CDCC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D3E24"))) PPC_WEAK_FUNC(sub_823D3E24);
PPC_FUNC_IMPL(__imp__sub_823D3E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3E28"))) PPC_WEAK_FUNC(sub_823D3E28);
PPC_FUNC_IMPL(__imp__sub_823D3E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d34f8
	ctx.lr = 0x823D3E40;
	sub_823D34F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fbd40
	ctx.lr = 0x823D3E48;
	sub_823FBD40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D3E5C"))) PPC_WEAK_FUNC(sub_823D3E5C);
PPC_FUNC_IMPL(__imp__sub_823D3E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3E60"))) PPC_WEAK_FUNC(sub_823D3E60);
PPC_FUNC_IMPL(__imp__sub_823D3E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823D3E68;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-4760(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d4220
	if (ctx.cr6.eq) goto loc_823D4220;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r28,-28148
	ctx.r28.s64 = ctx.r28.s64 + -28148;
	// addi r29,r30,1964
	ctx.r29.s64 = ctx.r30.s64 + 1964;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823c8fa0
	ctx.lr = 0x823D3E9C;
	sub_823C8FA0(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,18140
	ctx.r9.u64 = ctx.r10.u64 | 18140;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823e97f0
	ctx.lr = 0x823D3EB8;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,584
	ctx.r4.s64 = 584;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D3ECC;
	sub_82106F58(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,583
	ctx.r4.s64 = 583;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D3EDC;
	sub_82106F58(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x823D3EE0;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822368b0
	ctx.lr = 0x823D3EF0;
	sub_822368B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82236510
	ctx.lr = 0x823D3F04;
	sub_82236510(ctx, base);
	// lwz r29,1972(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823D3F10;
	sub_82163DF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82164d80
	ctx.lr = 0x823D3F18;
	sub_82164D80(ctx, base);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r29,31172(r6)
	PPC_STORE_U32(ctx.r6.u32 + 31172, ctx.r29.u32);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r29,31428(r4)
	PPC_STORE_U32(ctx.r4.u32 + 31428, ctx.r29.u32);
	// bl 0x8218b408
	ctx.lr = 0x823D3F40;
	sub_8218B408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f31,11300(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,31432(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 31432, temp.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
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
	// stfs f7,31436(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 31436, temp.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,31440(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 31440, temp.u32);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r29,31684(r4)
	PPC_STORE_U32(ctx.r4.u32 + 31684, ctx.r29.u32);
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r4,1964(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x823c9120
	ctx.lr = 0x823D3FD8;
	sub_823C9120(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,124
	ctx.r4.s64 = 124;
	// stw r3,31708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31708, ctx.r3.u32);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r29,31940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31940, ctx.r29.u32);
	// lwz r5,52(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D4000;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1972(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// bl 0x823cd3e0
	ctx.lr = 0x823D400C;
	sub_823CD3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,35
	ctx.r3.s64 = 35;
	// bne cr6,0x823d401c
	if (!ctx.cr6.eq) goto loc_823D401C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D401C:
	// bl 0x8218b408
	ctx.lr = 0x823D4020;
	sub_8218B408(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r26,r9,-4604
	ctx.r26.s64 = ctx.r9.s64 + -4604;
	// addi r5,r7,26232
	ctx.r5.s64 = ctx.r7.s64 + 26232;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,31944(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 31944, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,31948(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 31948, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,31952(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 31952, temp.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r29,32196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32196, ctx.r29.u32);
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r29,32452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32452, ctx.r29.u32);
	// lhz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// bl 0x8218a5f0
	ctx.lr = 0x823D40CC;
	sub_8218A5F0(ctx, base);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r26,32472(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32472, ctx.r26.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r29,32492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32492, ctx.r29.u32);
	// lhz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823D40E8;
	sub_822121D8(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f2,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,32456(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32456, temp.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
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
	// stfs f9,32460(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32460, temp.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,32464(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32464, temp.u32);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r29,32708(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32708, ctx.r29.u32);
	// lhz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823D416C;
	sub_822121D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r8,r9,32964
	ctx.r8.u64 = ctx.r9.u64 | 32964;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f4,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,32712(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32712, temp.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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
	// stfs f11,32716(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32716, temp.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
	// stfs f7,32720(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32720, temp.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r29,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r29.u32);
	// lbz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 32);
	// bl 0x823c93f0
	ctx.lr = 0x823D4200;
	sub_823C93F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r8,0
	ctx.r8.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ori r6,r8,32988
	ctx.r6.u64 = ctx.r8.u64 | 32988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r7,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// bl 0x823d34f8
	ctx.lr = 0x823D4220;
	sub_823D34F8(ctx, base);
loc_823D4220:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823D422C"))) PPC_WEAK_FUNC(sub_823D422C);
PPC_FUNC_IMPL(__imp__sub_823D422C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D4230"))) PPC_WEAK_FUNC(sub_823D4230);
PPC_FUNC_IMPL(__imp__sub_823D4230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823D4238;
	sub_8224877C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823D4244;
	sub_823CD7E8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r10,-19248
	ctx.r7.s64 = ctx.r10.s64 + -19248;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r9,-19384
	ctx.r6.s64 = ctx.r9.s64 + -19384;
	// addi r5,r8,-19392
	ctx.r5.s64 = ctx.r8.s64 + -19392;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r11,r11,-28248
	ctx.r11.s64 = ctx.r11.s64 + -28248;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823D4280:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d4280
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D4280;
	// li r11,512
	ctx.r11.s64 = 512;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// addi r4,r4,-28140
	ctx.r4.s64 = ctx.r4.s64 + -28140;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r4,-8
	ctx.r10.s64 = ctx.r4.s64 + -8;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_823D42A4:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823d42a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D42A4;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-24040
	ctx.r29.s64 = ctx.r29.s64 + -24040;
	// addi r28,r28,-24036
	ctx.r28.s64 = ctx.r28.s64 + -24036;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lis r26,-32177
	ctx.r26.s64 = -2108751872;
	// addi r10,r10,-28148
	ctx.r10.s64 = ctx.r10.s64 + -28148;
	// li r9,150
	ctx.r9.s64 = 150;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r9,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r9.u32);
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// ori r7,r8,37392
	ctx.r7.u64 = ctx.r8.u64 | 37392;
	// lwz r11,-4760(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4760);
	// lwz r6,1964(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-4760(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4760);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// addi r25,r25,-24044
	ctx.r25.s64 = ctx.r25.s64 + -24044;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x823cd320
	ctx.lr = 0x823D4314;
	sub_823CD320(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,-4760(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4760);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823c8f60
	ctx.lr = 0x823D4328;
	sub_823C8F60(ctx, base);
	// lwz r11,-4760(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4760);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823c8f60
	ctx.lr = 0x823D4340;
	sub_823C8F60(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x823ce140
	ctx.lr = 0x823D437C;
	sub_823CE140(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8223a910
	ctx.lr = 0x823D4384;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d4398
	if (!ctx.cr6.eq) goto loc_823D4398;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cd2b8
	ctx.lr = 0x823D4398;
	sub_823CD2B8(ctx, base);
loc_823D4398:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823D43B8;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d3e60
	ctx.lr = 0x823D43C0;
	sub_823D3E60(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823D43C8;
	sub_823C8DF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d3a60
	ctx.lr = 0x823D43D4;
	sub_823D3A60(ctx, base);
	// li r4,413
	ctx.r4.s64 = 413;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823D43E0;
	sub_823CDF48(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823D43EC;
	sub_823CDF48(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823D43F8;
	sub_823CDF48(ctx, base);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823D440C"))) PPC_WEAK_FUNC(sub_823D440C);
PPC_FUNC_IMPL(__imp__sub_823D440C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D4410"))) PPC_WEAK_FUNC(sub_823D4410);
PPC_FUNC_IMPL(__imp__sub_823D4410) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// li r3,4
	ctx.r3.s64 = 4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d443c
	// bdzf 4*cr6+eq,0x823d4444
	// bne cr6,0x823d444c
	if (!ctx.cr6.eq) goto loc_823D444C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823D443C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823D4444:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_823D444C:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D4454"))) PPC_WEAK_FUNC(sub_823D4454);
PPC_FUNC_IMPL(__imp__sub_823D4454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D4458"))) PPC_WEAK_FUNC(sub_823D4458);
PPC_FUNC_IMPL(__imp__sub_823D4458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37336
	ctx.r10.u64 = ctx.r11.u64 | 37336;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823d4474
	if (!ctx.cr6.eq) goto loc_823D4474;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823D4474:
	// b 0x823cd040
	sub_823CD040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D4478"))) PPC_WEAK_FUNC(sub_823D4478);
PPC_FUNC_IMPL(__imp__sub_823D4478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lis r9,0
	ctx.r9.s64 = 0;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lis r6,0
	ctx.r6.s64 = 0;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// ori r5,r8,37376
	ctx.r5.u64 = ctx.r8.u64 | 37376;
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// ori r4,r9,37380
	ctx.r4.u64 = ctx.r9.u64 | 37380;
	// ori r11,r6,37384
	ctx.r11.u64 = ctx.r6.u64 | 37384;
	// lfs f0,31104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31104);
	ctx.f0.f64 = double(temp.f32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfsx f2,r3,r5
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f3,r3,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f4,r3,r11
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D4500"))) PPC_WEAK_FUNC(sub_823D4500);
PPC_FUNC_IMPL(__imp__sub_823D4500) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r3,5
	ctx.r3.s64 = 5;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r31,-4760(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4760);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r31,1964
	ctx.r11.s64 = ctx.r31.s64 + 1964;
	// bl 0x822394b0
	ctx.lr = 0x823D4544;
	sub_822394B0(ctx, base);
	// lwz r30,1992(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1992);
	// lwz r31,1964(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// bl 0x8223a9f8
	ctx.lr = 0x823D4550;
	sub_8223A9F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8223b340
	ctx.lr = 0x823D455C;
	sub_8223B340(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x823d4574
	if (!ctx.cr6.lt) goto loc_823D4574;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x823d4580
	goto loc_823D4580;
loc_823D4574:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x823d4580
	if (!ctx.cr6.gt) goto loc_823D4580;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_823D4580:
	// fsubs f12,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
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

__attribute__((alias("__imp__sub_823D45B8"))) PPC_WEAK_FUNC(sub_823D45B8);
PPC_FUNC_IMPL(__imp__sub_823D45B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-18592
	ctx.r8.s64 = ctx.r11.s64 + -18592;
	// addi r5,r9,-18740
	ctx.r5.s64 = ctx.r9.s64 + -18740;
	// addi r7,r10,-18728
	ctx.r7.s64 = ctx.r10.s64 + -18728;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// lwz r3,-4760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823D4608;
	sub_823C8F28(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823D460C;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823D4614;
	sub_823CDA98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D4628"))) PPC_WEAK_FUNC(sub_823D4628);
PPC_FUNC_IMPL(__imp__sub_823D4628) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823d7620
	sub_823D7620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D4630"))) PPC_WEAK_FUNC(sub_823D4630);
PPC_FUNC_IMPL(__imp__sub_823D4630) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823d7620
	sub_823D7620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D4638"))) PPC_WEAK_FUNC(sub_823D4638);
PPC_FUNC_IMPL(__imp__sub_823D4638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823D4640;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cdb10
	ctx.lr = 0x823D464C;
	sub_823CDB10(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r29,-4760(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// lwz r28,28(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8223a960
	ctx.lr = 0x823D4660;
	sub_8223A960(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,6612
	ctx.r3.s64 = ctx.r3.s64 + 6612;
	// ori r9,r10,37336
	ctx.r9.u64 = ctx.r10.u64 | 37336;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x823d485c
	if (!ctx.cr6.eq) goto loc_823D485C;
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x823d46b8
	if (ctx.cr6.gt) goto loc_823D46B8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d46a4
	// bdzf 4*cr6+eq,0x823d46ac
	// bne cr6,0x823d46b4
	if (!ctx.cr6.eq) goto loc_823D46B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823d46b8
	goto loc_823D46B8;
loc_823D46A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823d46b8
	goto loc_823D46B8;
loc_823D46AC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823d46b8
	goto loc_823D46B8;
loc_823D46B4:
	// li r11,3
	ctx.r11.s64 = 3;
loc_823D46B8:
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// bgt cr6,0x823d485c
	if (ctx.cr6.gt) goto loc_823D485C;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d479c
	// bdzf 4*cr6+eq,0x823d47d8
	// bdzf 4*cr6+eq,0x823d47d8
	// bdzf 4*cr6+eq,0x823d47d8
	// bne cr6,0x823d481c
	if (!ctx.cr6.eq) goto loc_823D481C;
	// lwz r11,1988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1988);
	// li r4,3
	ctx.r4.s64 = 3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823d4708
	if (ctx.cr6.lt) goto loc_823D4708;
	// beq cr6,0x823d4700
	if (ctx.cr6.eq) goto loc_823D4700;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823d470c
	if (!ctx.cr6.lt) goto loc_823D470C;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x823d470c
	goto loc_823D470C;
loc_823D4700:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823d470c
	goto loc_823D470C;
loc_823D4708:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823D470C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822360e8
	ctx.lr = 0x823D4714;
	sub_822360E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r5,r9,37376
	ctx.r5.u64 = ctx.r9.u64 | 37376;
	// ori r3,r8,37380
	ctx.r3.u64 = ctx.r8.u64 | 37380;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,31104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31104);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// ori r10,r7,37384
	ctx.r10.u64 = ctx.r7.u64 | 37384;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f4,r11,r10
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f3,r11,r3
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfsx f2,r11,r5
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// b 0x823d485c
	goto loc_823D485C;
loc_823D479C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163e98
	ctx.lr = 0x823D47A4;
	sub_82163E98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823d4478
	ctx.lr = 0x823D47B4;
	sub_823D4478(ctx, base);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37360
	ctx.r10.u64 = ctx.r11.u64 | 37360;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r31,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// b 0x823d485c
	goto loc_823D485C;
loc_823D47D8:
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,-32186
	ctx.r8.s64 = -2109341696;
	// addi r9,r8,3544
	ctx.r9.s64 = ctx.r8.s64 + 3544;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r9,28
	ctx.r6.s64 = ctx.r9.s64 + 28;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,9337
	ctx.r4.s64 = ctx.r11.s64 + 9337;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r5,r6
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfsx f10,r3,r31
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, temp.u32);
	// b 0x823d485c
	goto loc_823D485C;
loc_823D481C:
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r8,-32186
	ctx.r8.s64 = -2109341696;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// addi r9,r8,3544
	ctx.r9.s64 = ctx.r8.s64 + 3544;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,28
	ctx.r5.s64 = ctx.r9.s64 + 28;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r3,r4,37360
	ctx.r3.u64 = ctx.r4.u64 | 37360;
	// lfsx f0,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfsx f10,r31,r3
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, temp.u32);
loc_823D485C:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r11,r10,-19088
	ctx.r11.s64 = ctx.r10.s64 + -19088;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x821eb290
	ctx.lr = 0x823D4880;
	sub_821EB290(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823D4888"))) PPC_WEAK_FUNC(sub_823D4888);
PPC_FUNC_IMPL(__imp__sub_823D4888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823D4890;
	sub_82248768(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x823D48A8;
	sub_8218B408(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823D48B4;
	sub_8218B408(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823D48C4;
	sub_823C3280(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r10,0
	ctx.r10.s64 = 0;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// ori r8,r10,37296
	ctx.r8.u64 = ctx.r10.u64 | 37296;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r4,r6,37304
	ctx.r4.u64 = ctx.r6.u64 | 37304;
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// ori r10,r5,37312
	ctx.r10.u64 = ctx.r5.u64 | 37312;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stwx r6,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ori r9,r5,37320
	ctx.r9.u64 = ctx.r5.u64 | 37320;
	// rlwinm r8,r3,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// ori r3,r7,37328
	ctx.r3.u64 = ctx.r7.u64 | 37328;
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r11,-3
	ctx.r5.s64 = ctx.r11.s64 + -3;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// ori r10,r6,37336
	ctx.r10.u64 = ctx.r6.u64 | 37336;
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// ori r6,r9,37344
	ctx.r6.u64 = ctx.r9.u64 | 37344;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// ori r8,r4,37352
	ctx.r8.u64 = ctx.r4.u64 | 37352;
	// stwx r5,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lfs f31,11300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// li r21,0
	ctx.r21.s64 = 0;
	// stwx r7,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// ori r10,r5,37360
	ctx.r10.u64 = ctx.r5.u64 | 37360;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r11,-6
	ctx.r4.s64 = ctx.r11.s64 + -6;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// stwx r9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r22,r22,-28172
	ctx.r22.s64 = ctx.r22.s64 + -28172;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r7,r11,-7
	ctx.r7.s64 = ctx.r11.s64 + -7;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stwx r5,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r23,r11,-19088
	ctx.r23.s64 = ctx.r11.s64 + -19088;
	// ori r24,r10,37292
	ctx.r24.u64 = ctx.r10.u64 | 37292;
loc_823D49FC:
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823d4a34
	if (ctx.cr6.eq) goto loc_823D4A34;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d4a38
	if (ctx.cr6.eq) goto loc_823D4A38;
loc_823D4A34:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_823D4A38:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823d4a54
	if (!ctx.cr6.eq) goto loc_823D4A54;
	// subfic r10,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r9.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ctx.r29.u64;
loc_823D4A54:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823d4a6c
	if (!ctx.cr6.eq) goto loc_823D4A6C;
	// addi r11,r27,-6
	ctx.r11.s64 = ctx.r27.s64 + -6;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ctx.r29.u64;
loc_823D4A6C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d4a8c
	if (ctx.cr6.lt) goto loc_823D4A8C;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r26.u32);
loc_823D4A8C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d4ab4
	if (ctx.cr6.lt) goto loc_823D4AB4;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r9,r26
	ctx.r9.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823D4AB4:
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,204(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d4b04
	if (ctx.cr6.lt) goto loc_823D4B04;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r21.u32);
loc_823D4B04:
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D4B14;
	sub_82106F58(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// bne cr6,0x823d4b24
	if (!ctx.cr6.eq) goto loc_823D4B24;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_823D4B24:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// bne cr6,0x823d4cf8
	if (!ctx.cr6.eq) goto loc_823D4CF8;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x8218b408
	ctx.lr = 0x823D4BB8;
	sub_8218B408(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x8218b408
	ctx.lr = 0x823D4BC4;
	sub_8218B408(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,70
	ctx.r3.s64 = 70;
	// bl 0x8222e0a8
	ctx.lr = 0x823D4BD4;
	sub_8222E0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d4c74
	if (ctx.cr6.eq) goto loc_823D4C74;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bne cr6,0x823d4bec
	if (!ctx.cr6.eq) goto loc_823D4BEC;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_823D4BEC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f6,120(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// b 0x823d4cf8
	goto loc_823D4CF8;
loc_823D4C74:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lfd f10,136(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
loc_823D4CF8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 9, ctx.xer);
	// blt cr6,0x823d49fc
	if (ctx.cr6.lt) goto loc_823D49FC;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823D4D14"))) PPC_WEAK_FUNC(sub_823D4D14);
PPC_FUNC_IMPL(__imp__sub_823D4D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D4D18"))) PPC_WEAK_FUNC(sub_823D4D18);
PPC_FUNC_IMPL(__imp__sub_823D4D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823D4D20;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// addi r17,r11,1964
	ctx.r17.s64 = ctx.r11.s64 + 1964;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// bl 0x8218b408
	ctx.lr = 0x823D4D44;
	sub_8218B408(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823D4D50;
	sub_8218B408(ctx, base);
	// lwz r10,848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r18,56(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// ori r8,r9,1732
	ctx.r8.u64 = ctx.r9.u64 | 1732;
	// lis r31,2
	ctx.r31.s64 = 131072;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r29,r31,3780
	ctx.r29.u64 = ctx.r31.u64 | 3780;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// lis r31,2
	ctx.r31.s64 = 131072;
	// ori r11,r6,1988
	ctx.r11.u64 = ctx.r6.u64 | 1988;
	// ori r27,r31,4036
	ctx.r27.u64 = ctx.r31.u64 | 4036;
	// stwx r24,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r24.u32);
	// lis r31,2
	ctx.r31.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r25,r31,7108
	ctx.r25.u64 = ctx.r31.u64 | 7108;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r4,2244
	ctx.r10.u64 = ctx.r4.u64 | 2244;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r9,2500
	ctx.r5.u64 = ctx.r9.u64 | 2500;
	// ori r4,r6,2756
	ctx.r4.u64 = ctx.r6.u64 | 2756;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r6,r9,3012
	ctx.r6.u64 = ctx.r9.u64 | 3012;
	// ori r9,r8,3268
	ctx.r9.u64 = ctx.r8.u64 | 3268;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r28,2
	ctx.r28.s64 = 131072;
	// ori r8,r8,3524
	ctx.r8.u64 = ctx.r8.u64 | 3524;
	// ori r28,r28,6852
	ctx.r28.u64 = ctx.r28.u64 | 6852;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// ori r26,r26,7364
	ctx.r26.u64 = ctx.r26.u64 | 7364;
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// ori r23,r23,7620
	ctx.r23.u64 = ctx.r23.u64 | 7620;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r24,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r24.u32);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r24,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r24.u32);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r24,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r24.u32);
	// lwz r5,848(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r24,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r24.u32);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r24,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r24.u32);
	// lwz r6,848(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r24,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r24.u32);
	// lwz r4,848(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r24,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r24.u32);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r24,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r24.u32);
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r24,r8,r27
	PPC_STORE_U32(ctx.r8.u32 + ctx.r27.u32, ctx.r24.u32);
	// lwz r6,848(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r24,r5,r28
	PPC_STORE_U32(ctx.r5.u32 + ctx.r28.u32, ctx.r24.u32);
	// lwz r4,848(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r24,r3,r25
	PPC_STORE_U32(ctx.r3.u32 + ctx.r25.u32, ctx.r24.u32);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r24,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r24.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ori r4,r6,8132
	ctx.r4.u64 = ctx.r6.u64 | 8132;
	// stwx r24,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r24.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r8,7876
	ctx.r5.u64 = ctx.r8.u64 | 7876;
	// ori r8,r10,8644
	ctx.r8.u64 = ctx.r10.u64 | 8644;
	// ori r10,r6,8900
	ctx.r10.u64 = ctx.r6.u64 | 8900;
	// lwz r6,848(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// stwx r24,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r24.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// addi r28,r11,3544
	ctx.r28.s64 = ctx.r11.s64 + 3544;
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r9,r3,8388
	ctx.r9.u64 = ctx.r3.u64 | 8388;
	// stwx r24,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r24.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r5,848(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// ori r3,r3,9156
	ctx.r3.u64 = ctx.r3.u64 | 9156;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r24,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r24.u32);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r24,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r24.u32);
	// lwz r8,848(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r24,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r24.u32);
	// lwz r5,848(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r24,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r24.u32);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823d4f20
	if (ctx.cr6.lt) goto loc_823D4F20;
	// lwz r10,848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r24.u32);
loc_823D4F20:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d4f44
	if (ctx.cr6.lt) goto loc_823D4F44;
	// lwz r10,848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
loc_823D4F44:
	// lwz r10,88(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d4f6c
	if (ctx.cr6.lt) goto loc_823D4F6C;
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r24.u32);
	// lwz r10,88(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
loc_823D4F6C:
	// lwz r9,124(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x823d4f98
	if (ctx.cr6.lt) goto loc_823D4F98;
	// lwz r10,848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
	// lwz r9,124(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// lwz r10,88(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
loc_823D4F98:
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r19,r8,-18824
	ctx.r19.s64 = ctx.r8.s64 + -18824;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r8,-784(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + -784);
	// ori r21,r5,37364
	ctx.r21.u64 = ctx.r5.u64 | 37364;
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823d4fc8
	if (ctx.cr6.eq) goto loc_823D4FC8;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x823d50d0
	if (!ctx.cr6.eq) goto loc_823D50D0;
loc_823D4FC8:
	// lwzx r8,r30,r21
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x823d5008
	if (ctx.cr6.eq) goto loc_823D5008;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x823d50d0
	if (!ctx.cr6.eq) goto loc_823D50D0;
loc_823D4FDC:
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r19,4
	ctx.r10.s64 = ctx.r19.s64 + 4;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d50d0
	if (ctx.cr6.lt) goto loc_823D50D0;
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r20.u32);
	// b 0x823d50d0
	goto loc_823D50D0;
loc_823D5008:
	// cmplwi cr6,r18,5
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 5, ctx.xer);
	// bgt cr6,0x823d50d0
	if (ctx.cr6.gt) goto loc_823D50D0;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d4fdc
	// bdzf 4*cr6+eq,0x823d505c
	// bdzf 4*cr6+eq,0x823d5084
	// bdzf 4*cr6+eq,0x823d5094
	// bne cr6,0x823d50b4
	if (!ctx.cr6.eq) goto loc_823D50B4;
	// addi r11,r19,-80
	ctx.r11.s64 = ctx.r19.s64 + -80;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d50d0
	if (ctx.cr6.lt) goto loc_823D50D0;
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r20.u32);
	// b 0x823d50d0
	goto loc_823D50D0;
loc_823D505C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d50d0
	if (ctx.cr6.lt) goto loc_823D50D0;
	// lwz r10,848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r20.u32);
	// b 0x823d50d0
	goto loc_823D50D0;
loc_823D5084:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d50d0
	if (ctx.cr6.lt) goto loc_823D50D0;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x823d50c0
	goto loc_823D50C0;
loc_823D5094:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d50d0
	if (ctx.cr6.lt) goto loc_823D50D0;
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r20.u32);
	// b 0x823d50d0
	goto loc_823D50D0;
loc_823D50B4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x823d50d0
	if (ctx.cr6.lt) goto loc_823D50D0;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
loc_823D50C0:
	// lwz r10,848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r20.u32);
loc_823D50D0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r27,r30,1
	ctx.r27.s64 = ctx.r30.s64 + 65536;
	// addi r29,r28,28
	ctx.r29.s64 = ctx.r28.s64 + 28;
	// addi r27,r27,-28164
	ctx.r27.s64 = ctx.r27.s64 + -28164;
	// lfs f13,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r26,4
	ctx.r26.s64 = 4;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r23,r11,-628
	ctx.r23.s64 = ctx.r11.s64 + -628;
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f31,11300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_823D510C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,-16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f9,-8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r25,r29,-24
	ctx.r25.s64 = ctx.r29.s64 + -24;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r7,r11,160
	ctx.r7.s64 = ctx.r11.s64 + 160;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fdivs f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmadds f5,f6,f7,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f9.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r6,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r6.u64);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,168(r11)
	PPC_STORE_U64(ctx.r11.u32 + 168, ctx.r10.u64);
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r7,-12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,160
	ctx.r7.s64 = ctx.r11.s64 + 160;
	// std r6,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r6.u64);
	// std r8,168(r11)
	PPC_STORE_U64(ctx.r11.u32 + 168, ctx.r8.u64);
	// lfsu f0,4(r27)
	// fctiwz f4,f0
	ctx.f4.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8218a5f0
	ctx.lr = 0x823D51B4;
	sub_8218A5F0(ctx, base);
	// lwz r6,848(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r5,-28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,216(r4)
	PPC_STORE_U32(ctx.r4.u32 + 216, ctx.r25.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r20,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r20.u32);
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r8,-28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f3,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,200(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f10,204(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 204, temp.u32);
	// lwz r8,8(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f9,112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// stfs f6,208(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// bne 0x823d510c
	if (!ctx.cr0.eq) goto loc_823D510C;
	// bl 0x8223a960
	ctx.lr = 0x823D526C;
	sub_8223A960(ctx, base);
	// lwz r11,24(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24);
	// addi r25,r3,6612
	ctx.r25.s64 = ctx.r3.s64 + 6612;
	// li r26,3
	ctx.r26.s64 = 3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823d529c
	if (ctx.cr6.lt) goto loc_823D529C;
	// beq cr6,0x823d5294
	if (ctx.cr6.eq) goto loc_823D5294;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823d52a0
	if (!ctx.cr6.lt) goto loc_823D52A0;
	// li r26,2
	ctx.r26.s64 = 2;
	// b 0x823d52a0
	goto loc_823D52A0;
loc_823D5294:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// b 0x823d52a0
	goto loc_823D52A0;
loc_823D529C:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_823D52A0:
	// addi r11,r19,-80
	ctx.r11.s64 = ctx.r19.s64 + -80;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// addi r27,r11,-8
	ctx.r27.s64 = ctx.r11.s64 + -8;
loc_823D52AC:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82236108
	ctx.lr = 0x823D52C0;
	sub_82236108(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwzu r11,8(r27)
	ea = 8 + ctx.r27.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 10, ctx.xer);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f2,88(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,212(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 212, temp.u32);
	// blt cr6,0x823d52ac
	if (ctx.cr6.lt) goto loc_823D52AC;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// addi r27,r19,-8
	ctx.r27.s64 = ctx.r19.s64 + -8;
loc_823D5380:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82163e98
	ctx.lr = 0x823D5388;
	sub_82163E98(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lwzu r11,8(r27)
	ea = 8 + ctx.r27.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 10, ctx.xer);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f2,88(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,212(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// blt cr6,0x823d5380
	if (ctx.cr6.lt) goto loc_823D5380;
	// add r26,r30,r21
	ctx.r26.u64 = ctx.r30.u64 + ctx.r21.u64;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// lis r24,2
	ctx.r24.s64 = 131072;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// lis r22,2
	ctx.r22.s64 = 131072;
	// ori r29,r10,6092
	ctx.r29.u64 = ctx.r10.u64 | 6092;
	// ori r4,r9,6096
	ctx.r4.u64 = ctx.r9.u64 | 6096;
	// ori r5,r8,6344
	ctx.r5.u64 = ctx.r8.u64 | 6344;
	// ori r6,r7,6348
	ctx.r6.u64 = ctx.r7.u64 | 6348;
	// ori r27,r11,6088
	ctx.r27.u64 = ctx.r11.u64 | 6088;
	// ori r7,r25,6352
	ctx.r7.u64 = ctx.r25.u64 | 6352;
	// ori r8,r24,6600
	ctx.r8.u64 = ctx.r24.u64 | 6600;
	// ori r9,r23,6604
	ctx.r9.u64 = ctx.r23.u64 | 6604;
	// ori r10,r22,6608
	ctx.r10.u64 = ctx.r22.u64 | 6608;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823d5fe4
	if (!ctx.cr6.eq) goto loc_823D5FE4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x823d59bc
	if (ctx.cr6.eq) goto loc_823D59BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r26,848(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lis r25,2
	ctx.r25.s64 = 131072;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ori r3,r3,4296
	ctx.r3.u64 = ctx.r3.u64 | 4296;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ori r11,r25,4300
	ctx.r11.u64 = ctx.r25.u64 | 4300;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r24,8(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lis r25,2
	ctx.r25.s64 = 131072;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// ori r25,r25,4304
	ctx.r25.u64 = ctx.r25.u64 | 4304;
	// ori r23,r23,4552
	ctx.r23.u64 = ctx.r23.u64 | 4552;
	// lis r22,2
	ctx.r22.s64 = 131072;
	// lis r21,2
	ctx.r21.s64 = 131072;
	// ori r22,r22,4556
	ctx.r22.u64 = ctx.r22.u64 | 4556;
	// ori r21,r21,4560
	ctx.r21.u64 = ctx.r21.u64 | 4560;
	// lis r20,2
	ctx.r20.s64 = 131072;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r24,r3
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r3.u32, temp.u32);
	// lis r19,2
	ctx.r19.s64 = 131072;
	// ori r20,r20,4808
	ctx.r20.u64 = ctx.r20.u64 | 4808;
	// ori r19,r19,4812
	ctx.r19.u64 = ctx.r19.u64 | 4812;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r3,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r11,r25
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r11,r23
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r11,r22
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r3,r21
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r21.u32, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r11,r20
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, temp.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// ori r11,r11,4816
	ctx.r11.u64 = ctx.r11.u64 | 4816;
	// ori r26,r26,5064
	ctx.r26.u64 = ctx.r26.u64 | 5064;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// lis r24,2
	ctx.r24.s64 = 131072;
	// ori r25,r25,5068
	ctx.r25.u64 = ctx.r25.u64 | 5068;
	// ori r24,r24,5072
	ctx.r24.u64 = ctx.r24.u64 | 5072;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// lis r22,2
	ctx.r22.s64 = 131072;
	// ori r23,r23,5320
	ctx.r23.u64 = ctx.r23.u64 | 5320;
	// lis r21,2
	ctx.r21.s64 = 131072;
	// lis r20,2
	ctx.r20.s64 = 131072;
	// lis r18,2
	ctx.r18.s64 = 131072;
	// lis r17,2
	ctx.r17.s64 = 131072;
	// lis r16,2
	ctx.r16.s64 = 131072;
	// ori r22,r22,5324
	ctx.r22.u64 = ctx.r22.u64 | 5324;
	// ori r21,r21,5328
	ctx.r21.u64 = ctx.r21.u64 | 5328;
	// ori r20,r20,5576
	ctx.r20.u64 = ctx.r20.u64 | 5576;
	// ori r18,r18,5580
	ctx.r18.u64 = ctx.r18.u64 | 5580;
	// lwz r15,4(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r17,r17,5584
	ctx.r17.u64 = ctx.r17.u64 | 5584;
	// lwz r14,8(r3)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r16,r16,5832
	ctx.r16.u64 = ctx.r16.u64 | 5832;
	// extsw r15,r15
	ctx.r15.s64 = ctx.r15.s32;
	// std r15,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r15.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r14,r19
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r14.u32 + ctx.r19.u32, temp.u32);
	// lwz r19,8(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r19,r19
	ctx.r19.s64 = ctx.r19.s32;
	// std r19,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r19.u64);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r3,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r11,r26
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r26,r25
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r25.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r3,r24
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r24.u32, temp.u32);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r11,r23
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// lis r25,2
	ctx.r25.s64 = 131072;
	// ori r11,r25,5836
	ctx.r11.u64 = ctx.r25.u64 | 5836;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// ori r25,r25,5840
	ctx.r25.u64 = ctx.r25.u64 | 5840;
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r26,r22
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r22.u32, temp.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r26,r26
	ctx.r26.s64 = ctx.r26.s32;
	// std r26,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r26.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r21
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r21.u32, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r26,848(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r3,r20
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r20.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r3,r18
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r18.u32, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r3,r17
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r17.u32, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r26,r16
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r16.u32, temp.u32);
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r26,r26
	ctx.r26.s64 = ctx.r26.s32;
	// std r26,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r26.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r26,r11
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r11,r25
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r20,0
	ctx.r20.s64 = 0;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r26,r27
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r27.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r26,r29
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r29.u32, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r11,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r26,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r5.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r26,r6
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r6.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r3,r7
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r3,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r11,r10
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r17,84(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823D59BC:
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 1, ctx.xer);
	// beq cr6,0x823d5f34
	if (ctx.cr6.eq) goto loc_823D5F34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r26,848(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lis r25,2
	ctx.r25.s64 = 131072;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ori r3,r3,9416
	ctx.r3.u64 = ctx.r3.u64 | 9416;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// ori r11,r25,9420
	ctx.r11.u64 = ctx.r25.u64 | 9420;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// lwz r24,8(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lis r23,2
	ctx.r23.s64 = 131072;
	// ori r25,r25,9424
	ctx.r25.u64 = ctx.r25.u64 | 9424;
	// ori r23,r23,9672
	ctx.r23.u64 = ctx.r23.u64 | 9672;
	// lis r22,2
	ctx.r22.s64 = 131072;
	// lis r21,2
	ctx.r21.s64 = 131072;
	// ori r22,r22,9676
	ctx.r22.u64 = ctx.r22.u64 | 9676;
	// ori r21,r21,9680
	ctx.r21.u64 = ctx.r21.u64 | 9680;
	// lis r20,2
	ctx.r20.s64 = 131072;
	// lis r19,2
	ctx.r19.s64 = 131072;
	// ori r20,r20,9928
	ctx.r20.u64 = ctx.r20.u64 | 9928;
	// ori r19,r19,9932
	ctx.r19.u64 = ctx.r19.u64 | 9932;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r24,r3
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r3.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r3,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r3,r25
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r25.u32, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r3,r23
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r23.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r26,r22
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r22.u32, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r11,r21
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r11,r20
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, temp.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// ori r11,r11,9936
	ctx.r11.u64 = ctx.r11.u64 | 9936;
	// ori r26,r26,10184
	ctx.r26.u64 = ctx.r26.u64 | 10184;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// lis r24,2
	ctx.r24.s64 = 131072;
	// ori r25,r25,10188
	ctx.r25.u64 = ctx.r25.u64 | 10188;
	// ori r24,r24,10192
	ctx.r24.u64 = ctx.r24.u64 | 10192;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// lis r22,2
	ctx.r22.s64 = 131072;
	// ori r23,r23,10440
	ctx.r23.u64 = ctx.r23.u64 | 10440;
	// lis r21,2
	ctx.r21.s64 = 131072;
	// lis r20,2
	ctx.r20.s64 = 131072;
	// lis r18,2
	ctx.r18.s64 = 131072;
	// lis r17,2
	ctx.r17.s64 = 131072;
	// lis r16,2
	ctx.r16.s64 = 131072;
	// ori r22,r22,10444
	ctx.r22.u64 = ctx.r22.u64 | 10444;
	// ori r21,r21,10448
	ctx.r21.u64 = ctx.r21.u64 | 10448;
	// ori r20,r20,10696
	ctx.r20.u64 = ctx.r20.u64 | 10696;
	// ori r18,r18,10700
	ctx.r18.u64 = ctx.r18.u64 | 10700;
	// lwz r15,4(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r17,r17,10704
	ctx.r17.u64 = ctx.r17.u64 | 10704;
	// lwz r14,8(r3)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r16,r16,10952
	ctx.r16.u64 = ctx.r16.u64 | 10952;
	// extsw r15,r15
	ctx.r15.s64 = ctx.r15.s32;
	// std r15,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r15.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r14,r19
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r14.u32 + ctx.r19.u32, temp.u32);
	// lwz r19,8(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r19,r19
	ctx.r19.s64 = ctx.r19.s32;
	// std r19,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r19.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r3,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r11,r26
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r26,r25
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r25.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r3,r24
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r24.u32, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r3,r23
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r23.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lis r15,2
	ctx.r15.s64 = 131072;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// lis r19,2
	ctx.r19.s64 = 131072;
	// lis r14,2
	ctx.r14.s64 = 131072;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r24,2
	ctx.r24.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r26,r22
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r22.u32, temp.u32);
	// ori r22,r15,11464
	ctx.r22.u64 = ctx.r15.u64 | 11464;
	// ori r15,r10,11472
	ctx.r15.u64 = ctx.r10.u64 | 11472;
	// ori r26,r23,11212
	ctx.r26.u64 = ctx.r23.u64 | 11212;
	// ori r23,r19,11216
	ctx.r23.u64 = ctx.r19.u64 | 11216;
	// ori r19,r14,11468
	ctx.r19.u64 = ctx.r14.u64 | 11468;
	// ori r25,r25,10956
	ctx.r25.u64 = ctx.r25.u64 | 10956;
	// ori r3,r3,10960
	ctx.r3.u64 = ctx.r3.u64 | 10960;
	// ori r24,r24,11208
	ctx.r24.u64 = ctx.r24.u64 | 11208;
	// ori r14,r9,11720
	ctx.r14.u64 = ctx.r9.u64 | 11720;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r11,r21
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r21,848(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r11,r20
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r20,8(r21)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r20,r18
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r18.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r21,8(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r21,r17
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r21.u32 + ctx.r17.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r21,848(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r11,r16
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r16.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lwz r20,8(r21)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r20,r25
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r25.u32, temp.u32);
	// lis r25,2
	ctx.r25.s64 = 131072;
	// ori r25,r25,11724
	ctx.r25.u64 = ctx.r25.u64 | 11724;
	// lwz r20,8(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lis r21,2
	ctx.r21.s64 = 131072;
	// extsw r20,r20
	ctx.r20.s64 = ctx.r20.s32;
	// ori r21,r21,11728
	ctx.r21.u64 = ctx.r21.u64 | 11728;
	// std r20,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r20.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r11,r3
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r11,r24
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r24,8(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r24,r26
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r26.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r3,r23
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r23.u32, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r3,r22
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r22.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r26,r19
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r19.u32, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r11,r15
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, temp.u32);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r11,r14
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r14.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r24,8(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r17,84(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r24,r25
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r25.u32, temp.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r3,r21
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r21.u32, temp.u32);
loc_823D5F34:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// bl 0x823d4410
	ctx.lr = 0x823D5F40;
	sub_823D4410(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823D5F4C:
	// cmpw cr6,r23,r3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823d5fd8
	if (ctx.cr6.eq) goto loc_823D5FD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r22,848(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// rlwinm r11,r25,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r25,8(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + 200, temp.u32);
	// lwz r25,4(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r25,r25
	ctx.r25.s64 = ctx.r25.s32;
	// std r25,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r25.u64);
	// lwz r25,8(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r25)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r25.u32 + 204, temp.u32);
	// lwz r21,8(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r25,8(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// extsw r22,r21
	ctx.r22.s64 = ctx.r21.s32;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// std r22,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r22.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
loc_823D5FD8:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,36
	ctx.r24.s64 = ctx.r24.s64 + 36;
	// bdnz 0x823d5f4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D5F4C;
loc_823D5FE4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823d6710
	if (!ctx.cr6.eq) goto loc_823D6710;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r26,848(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lis r25,2
	ctx.r25.s64 = 131072;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ori r3,r3,4296
	ctx.r3.u64 = ctx.r3.u64 | 4296;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// ori r11,r25,4300
	ctx.r11.u64 = ctx.r25.u64 | 4300;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// lwz r24,8(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lis r23,2
	ctx.r23.s64 = 131072;
	// ori r25,r25,4304
	ctx.r25.u64 = ctx.r25.u64 | 4304;
	// ori r23,r23,4552
	ctx.r23.u64 = ctx.r23.u64 | 4552;
	// lis r22,2
	ctx.r22.s64 = 131072;
	// lis r21,2
	ctx.r21.s64 = 131072;
	// ori r22,r22,4556
	ctx.r22.u64 = ctx.r22.u64 | 4556;
	// ori r21,r21,4560
	ctx.r21.u64 = ctx.r21.u64 | 4560;
	// lis r20,2
	ctx.r20.s64 = 131072;
	// lis r19,2
	ctx.r19.s64 = 131072;
	// ori r20,r20,4808
	ctx.r20.u64 = ctx.r20.u64 | 4808;
	// ori r19,r19,4812
	ctx.r19.u64 = ctx.r19.u64 | 4812;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r24,r3
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r3.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r24,8(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r24,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r3,r25
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r25.u32, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r26,r23
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r23.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r26,r22
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r22.u32, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r11,r21
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r11,r20
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, temp.u32);
	// std r17,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r17.u64);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// ori r11,r11,4816
	ctx.r11.u64 = ctx.r11.u64 | 4816;
	// ori r26,r26,5064
	ctx.r26.u64 = ctx.r26.u64 | 5064;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// lis r24,2
	ctx.r24.s64 = 131072;
	// ori r25,r25,5068
	ctx.r25.u64 = ctx.r25.u64 | 5068;
	// ori r24,r24,5072
	ctx.r24.u64 = ctx.r24.u64 | 5072;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// lis r22,2
	ctx.r22.s64 = 131072;
	// ori r23,r23,5320
	ctx.r23.u64 = ctx.r23.u64 | 5320;
	// lis r21,2
	ctx.r21.s64 = 131072;
	// lis r20,2
	ctx.r20.s64 = 131072;
	// lis r18,2
	ctx.r18.s64 = 131072;
	// lis r16,2
	ctx.r16.s64 = 131072;
	// lis r15,2
	ctx.r15.s64 = 131072;
	// ori r22,r22,5324
	ctx.r22.u64 = ctx.r22.u64 | 5324;
	// ori r21,r21,5328
	ctx.r21.u64 = ctx.r21.u64 | 5328;
	// ori r20,r20,5576
	ctx.r20.u64 = ctx.r20.u64 | 5576;
	// lwz r14,4(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r18,r18,5580
	ctx.r18.u64 = ctx.r18.u64 | 5580;
	// lwz r17,8(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r16,r16,5584
	ctx.r16.u64 = ctx.r16.u64 | 5584;
	// extsw r14,r14
	ctx.r14.s64 = ctx.r14.s32;
	// ori r15,r15,5832
	ctx.r15.u64 = ctx.r15.u64 | 5832;
	// std r14,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r14.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r17,r19
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r17.u32 + ctx.r19.u32, temp.u32);
	// lwz r19,8(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r19,r19
	ctx.r19.s64 = ctx.r19.s32;
	// std r19,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r19.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r3,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r11,r26
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r26,r25
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r25.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r3,r24
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r24.u32, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r26,r23
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r23.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r25,2
	ctx.r25.s64 = 131072;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// ori r25,r25,5836
	ctx.r25.u64 = ctx.r25.u64 | 5836;
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,5840
	ctx.r3.u64 = ctx.r3.u64 | 5840;
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r26,r22
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r22.u32, temp.u32);
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r26,r26
	ctx.r26.s64 = ctx.r26.s32;
	// std r26,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r26.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r11,r21
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r26,848(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r11,r20
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r24,8(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r24,r18
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r18.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r26,8(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r26,r16
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r16.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r26,848(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r11,r15
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r15.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r24,8(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r24,r25
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r25.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r26,8(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r26,r3
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r3.u32, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r11,r27
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r11,r29
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r3,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r4,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r5,r6
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r6,r7
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, temp.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r7,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r5,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r9,r10
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r5,848(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,200(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,204(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,208(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,200(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,204(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,208(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,200(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r17,104(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,204(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,208(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,200(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,204(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,208(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
loc_823D6710:
	// lwz r11,24(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823d6e7c
	if (!ctx.cr6.eq) goto loc_823D6E7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// ori r6,r10,9416
	ctx.r6.u64 = ctx.r10.u64 | 9416;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// ori r5,r8,9420
	ctx.r5.u64 = ctx.r8.u64 | 9420;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r4,9424
	ctx.r10.u64 = ctx.r4.u64 | 9424;
	// ori r8,r11,9672
	ctx.r8.u64 = ctx.r11.u64 | 9672;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r11,r7,9676
	ctx.r11.u64 = ctx.r7.u64 | 9676;
	// ori r7,r4,9680
	ctx.r7.u64 = ctx.r4.u64 | 9680;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// ori r4,r4,9928
	ctx.r4.u64 = ctx.r4.u64 | 9928;
	// ori r29,r29,9932
	ctx.r29.u64 = ctx.r29.u64 | 9932;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r6,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r5,r10
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r5,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r5,r7
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lwz r10,848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r8,r4
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r7,9936
	ctx.r5.u64 = ctx.r7.u64 | 9936;
	// ori r4,r6,10184
	ctx.r4.u64 = ctx.r6.u64 | 10184;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r3,10188
	ctx.r9.u64 = ctx.r3.u64 | 10188;
	// ori r8,r11,10192
	ctx.r8.u64 = ctx.r11.u64 | 10192;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r3,r7,10440
	ctx.r3.u64 = ctx.r7.u64 | 10440;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r27,2
	ctx.r27.s64 = 131072;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// ori r6,r6,10444
	ctx.r6.u64 = ctx.r6.u64 | 10444;
	// ori r11,r11,10448
	ctx.r11.u64 = ctx.r11.u64 | 10448;
	// ori r7,r7,10696
	ctx.r7.u64 = ctx.r7.u64 | 10696;
	// ori r27,r27,10700
	ctx.r27.u64 = ctx.r27.u64 | 10700;
	// lwz r24,4(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r26,r26,10704
	ctx.r26.u64 = ctx.r26.u64 | 10704;
	// lwz r23,8(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ori r25,r25,10952
	ctx.r25.u64 = ctx.r25.u64 | 10952;
	// extsw r24,r24
	ctx.r24.s64 = ctx.r24.s32;
	// std r24,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r24.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r23,r29
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r29.u32, temp.u32);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r29,r29
	ctx.r29.s64 = ctx.r29.s32;
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r10,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r5,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r5,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r5,r8
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r5,r3
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r8,r8,10956
	ctx.r8.u64 = ctx.r8.u64 | 10956;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// lis r24,2
	ctx.r24.s64 = 131072;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// lis r22,2
	ctx.r22.s64 = 131072;
	// lis r21,2
	ctx.r21.s64 = 131072;
	// ori r5,r5,10960
	ctx.r5.u64 = ctx.r5.u64 | 10960;
	// ori r4,r4,11208
	ctx.r4.u64 = ctx.r4.u64 | 11208;
	// ori r3,r3,11212
	ctx.r3.u64 = ctx.r3.u64 | 11212;
	// ori r29,r29,11216
	ctx.r29.u64 = ctx.r29.u64 | 11216;
	// ori r24,r24,11464
	ctx.r24.u64 = ctx.r24.u64 | 11464;
	// ori r23,r23,11468
	ctx.r23.u64 = ctx.r23.u64 | 11468;
	// ori r22,r22,11472
	ctx.r22.u64 = ctx.r22.u64 | 11472;
	// ori r21,r21,11720
	ctx.r21.u64 = ctx.r21.u64 | 11720;
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r10,r6
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r9,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r6,r7
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r9,r27
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, temp.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r11,r26
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,848(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r11,r25
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r9,r8
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r8,r10,11728
	ctx.r8.u64 = ctx.r10.u64 | 11728;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// ori r9,r11,11724
	ctx.r9.u64 = ctx.r11.u64 | 11724;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r11,r5
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,848(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r11,r4
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r7,r3
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r3,r29
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r29.u32, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,848(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r5,r24
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r24.u32, temp.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r3,r23
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r23.u32, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r7,r22
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r22.u32, temp.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r11,r21
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, temp.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r6,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r4,r8
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,200(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,204(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,208(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,848(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,200(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,204(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,208(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,200(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,204(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f2,112(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,208(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,848(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,200(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,204(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,208(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
loc_823D6E7C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D6E88"))) PPC_WEAK_FUNC(sub_823D6E88);
PPC_FUNC_IMPL(__imp__sub_823D6E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// ori r9,r10,37364
	ctx.r9.u64 = ctx.r10.u64 | 37364;
	// stwx r4,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r4.u32);
	// blt cr6,0x823d705c
	if (ctx.cr6.lt) goto loc_823D705C;
	// beq cr6,0x823d6efc
	if (ctx.cr6.eq) goto loc_823D6EFC;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// addi r7,r3,72
	ctx.r7.s64 = ctx.r3.s64 + 72;
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// stw r5,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// blr 
	return;
loc_823D6EFC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// stw r9,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r9.u32);
	// stw r9,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r9.u32);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// bgt cr6,0x823d7030
	if (ctx.cr6.gt) goto loc_823D7030;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d6f40
	// bdzf 4*cr6+eq,0x823d6f90
	// bdzf 4*cr6+eq,0x823d6f90
	// bdzf 4*cr6+eq,0x823d6f90
	// bne cr6,0x823d6f90
	if (!ctx.cr6.eq) goto loc_823D6F90;
loc_823D6F40:
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823d6f78
	if (ctx.cr6.lt) goto loc_823D6F78;
	// bne cr6,0x823d6f7c
	if (!ctx.cr6.eq) goto loc_823D6F7C;
	// addi r11,r8,9342
	ctx.r11.s64 = ctx.r8.s64 + 9342;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// b 0x823d7030
	goto loc_823D7030;
loc_823D6F78:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823D6F7C:
	// addi r11,r10,9342
	ctx.r11.s64 = ctx.r10.s64 + 9342;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// b 0x823d7030
	goto loc_823D7030;
loc_823D6F90:
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x823d6fd0
	if (ctx.cr6.gt) goto loc_823D6FD0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d6fbc
	// bdzf 4*cr6+eq,0x823d6fc4
	// bne cr6,0x823d6fcc
	if (!ctx.cr6.eq) goto loc_823D6FCC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x823d6fd0
	goto loc_823D6FD0;
loc_823D6FBC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x823d6fd0
	goto loc_823D6FD0;
loc_823D6FC4:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823d6fd0
	goto loc_823D6FD0;
loc_823D6FCC:
	// li r11,3
	ctx.r11.s64 = 3;
loc_823D6FD0:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r9.u32);
	// lis r5,-32186
	ctx.r5.s64 = -2109341696;
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r5,3544
	ctx.r10.s64 = ctx.r5.s64 + 3544;
	// addi r7,r11,9344
	ctx.r7.s64 = ctx.r11.s64 + 9344;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfsx f0,r6,r3
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f13.u64);
	// lwz r6,-20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f9.u64);
	// lwz r11,-28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
loc_823D7030:
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// blr 
	return;
loc_823D705C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D7070"))) PPC_WEAK_FUNC(sub_823D7070);
PPC_FUNC_IMPL(__imp__sub_823D7070) {
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-4760(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// bl 0x8223a960
	ctx.lr = 0x823D7094;
	sub_8223A960(ctx, base);
	// lwz r11,1988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1988);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823d722c
	if (ctx.cr6.lt) goto loc_823D722C;
	// beq cr6,0x823d7170
	if (ctx.cr6.eq) goto loc_823D7170;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823d72f8
	if (!ctx.cr6.lt) goto loc_823D72F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,1976(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1976);
	// bl 0x822363e0
	ctx.lr = 0x823D70B8;
	sub_822363E0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lbz r7,13(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lbz r5,14(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// ori r6,r10,37376
	ctx.r6.u64 = ctx.r10.u64 | 37376;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ori r4,r9,37380
	ctx.r4.u64 = ctx.r9.u64 | 37380;
	// lbz r9,15(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r8,0
	ctx.r8.s64 = 0;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// ori r9,r8,37384
	ctx.r9.u64 = ctx.r8.u64 | 37384;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lfs f0,31104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfsx f2,r31,r6
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f4,r31,r9
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f3,r31,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// lwz r11,1992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1992);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,34(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 34);
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bne cr6,0x823d7160
	if (!ctx.cr6.eq) goto loc_823D7160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4500
	ctx.lr = 0x823D7160;
	sub_823D4500(ctx, base);
loc_823D7160:
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x823d72e4
	goto loc_823D72E4;
loc_823D7170:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x822363e0
	ctx.lr = 0x823D717C;
	sub_822363E0(ctx, base);
	// lwz r11,1992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1992);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lfs f0,31104(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 31104);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lbz r10,31(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// lbzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lbz r4,30(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// ori r10,r6,37376
	ctx.r10.u64 = ctx.r6.u64 | 37376;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// ori r8,r5,37380
	ctx.r8.u64 = ctx.r5.u64 | 37380;
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// ori r7,r3,37384
	ctx.r7.u64 = ctx.r3.u64 | 37384;
	// ori r6,r9,37388
	ctx.r6.u64 = ctx.r9.u64 | 37388;
	// lfs f13,2148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r31,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f4,r31,r10
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfsx f2,r31,r7
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f3,r31,r8
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// b 0x823d72f8
	goto loc_823D72F8;
loc_823D722C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x822363e0
	ctx.lr = 0x823D7238;
	sub_822363E0(ctx, base);
	// lwz r11,1992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1992);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r7,r9,37384
	ctx.r7.u64 = ctx.r9.u64 | 37384;
	// lfs f0,31104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31104);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r6,r8,37376
	ctx.r6.u64 = ctx.r8.u64 | 37376;
	// lbz r9,13(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// ori r8,r4,37380
	ctx.r8.u64 = ctx.r4.u64 | 37380;
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r5,15(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f5,r31,r7
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f3,r31,r6
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfsx f2,r31,r8
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// lwz r11,1992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1992);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,34(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 34);
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bne cr6,0x823d72d8
	if (!ctx.cr6.eq) goto loc_823D72D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4500
	ctx.lr = 0x823D72D8;
	sub_823D4500(ctx, base);
loc_823D72D8:
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_823D72E4:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,37388
	ctx.r9.u64 = ctx.r10.u64 | 37388;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r31,r9
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
loc_823D72F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D7310"))) PPC_WEAK_FUNC(sub_823D7310);
PPC_FUNC_IMPL(__imp__sub_823D7310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// addi r11,r11,1964
	ctx.r11.s64 = ctx.r11.s64 + 1964;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823d74a0
	if (ctx.cr6.lt) goto loc_823D74A0;
	// beq cr6,0x823d73fc
	if (ctx.cr6.eq) goto loc_823D73FC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x823d755c
	if (!ctx.cr6.lt) goto loc_823D755C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r7,r10,9365
	ctx.r7.s64 = ctx.r10.s64 + 9365;
	// lis r8,0
	ctx.r8.s64 = 0;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,31104(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31104);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r6,37380
	ctx.r9.u64 = ctx.r6.u64 | 37380;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r10,r8,37376
	ctx.r10.u64 = ctx.r8.u64 | 37376;
	// lwzx r7,r5,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r8,r4,37384
	ctx.r8.u64 = ctx.r4.u64 | 37384;
	// ori r4,r6,37436
	ctx.r4.u64 = ctx.r6.u64 | 37436;
	// ori r6,r5,37388
	ctx.r6.u64 = ctx.r5.u64 | 37388;
	// stw r7,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// lbz r5,-31(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -31);
	// lbz r7,-30(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -30);
	// lbz r31,-29(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -29);
	// std r7,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r7.u64);
	// lfd f13,-32(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r5,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r5.u64);
	// lfd f12,-32(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r31.u64);
	// lfd f11,-32(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f3,r3,r9
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, temp.u32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f4,r3,r8
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfsx f2,r3,r10
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbzx r11,r5,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lfd f1,-32(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfsx f13,r3,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823D73FC:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,9364
	ctx.r8.s64 = ctx.r11.s64 + 9364;
	// lis r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,31104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31104);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r9,37376
	ctx.r10.u64 = ctx.r9.u64 | 37376;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwzx r9,r6,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// ori r6,r4,37388
	ctx.r6.u64 = ctx.r4.u64 | 37388;
	// ori r8,r7,37380
	ctx.r8.u64 = ctx.r7.u64 | 37380;
	// lfs f13,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// ori r7,r5,37384
	ctx.r7.u64 = ctx.r5.u64 | 37384;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// stfsx f13,r3,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, temp.u32);
	// lbz r11,-30(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -30);
	// lbz r4,-29(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -29);
	// lbz r9,-31(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -31);
	// std r4,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r4.u64);
	// lfd f13,-32(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lfd f12,-32(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// lfd f11,-32(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f4,r3,r10
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f3,r3,r7
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfsx f2,r3,r8
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823D74A0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,9360
	ctx.r7.s64 = ctx.r10.s64 + 9360;
	// lis r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,31104(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31104);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r4,r8,37380
	ctx.r4.u64 = ctx.r8.u64 | 37380;
	// ori r10,r6,37384
	ctx.r10.u64 = ctx.r6.u64 | 37384;
	// ori r6,r9,37376
	ctx.r6.u64 = ctx.r9.u64 | 37376;
	// lwzx r7,r5,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r5,r8,37436
	ctx.r5.u64 = ctx.r8.u64 | 37436;
	// ori r8,r9,37388
	ctx.r8.u64 = ctx.r9.u64 | 37388;
	// stw r7,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// lbz r7,-31(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -31);
	// lbz r9,-29(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -29);
	// lbz r31,-30(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -30);
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// lfd f13,-32(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r31.u64);
	// lfd f10,-32(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r7,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r7.u64);
	// lfd f8,-24(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsx f5,r3,r10
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsx f2,r3,r6
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, temp.u32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f4,r3,r4
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbzx r5,r7,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// std r5,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r5.u64);
	// lfd f1,-24(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfsx f13,r3,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, temp.u32);
loc_823D755C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D7564"))) PPC_WEAK_FUNC(sub_823D7564);
PPC_FUNC_IMPL(__imp__sub_823D7564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7568"))) PPC_WEAK_FUNC(sub_823D7568);
PPC_FUNC_IMPL(__imp__sub_823D7568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823D7570;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r31,-4760(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// addi r11,r31,1964
	ctx.r11.s64 = ctx.r31.s64 + 1964;
	// bl 0x8223aa28
	ctx.lr = 0x823D758C;
	sub_8223AA28(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82237560
	ctx.lr = 0x823D7598;
	sub_82237560(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,1964(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// bl 0x82237db0
	ctx.lr = 0x823D75A8;
	sub_82237DB0(ctx, base);
	// lwz r11,1988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1988);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823d75d8
	if (ctx.cr6.lt) goto loc_823D75D8;
	// beq cr6,0x823d75e0
	if (ctx.cr6.eq) goto loc_823D75E0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823d7610
	if (!ctx.cr6.lt) goto loc_823D7610;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x823d75e0
	if (!ctx.cr6.eq) goto loc_823D75E0;
	// li r30,18
	ctx.r30.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823D75D8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823d760c
	if (ctx.cr6.eq) goto loc_823D760C;
loc_823D75E0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823d75fc
	if (!ctx.cr6.eq) goto loc_823D75FC;
	// li r30,9
	ctx.r30.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823D75FC:
	// li r30,16
	ctx.r30.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823D760C:
	// li r30,15
	ctx.r30.s64 = 15;
loc_823D7610:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823D761C"))) PPC_WEAK_FUNC(sub_823D761C);
PPC_FUNC_IMPL(__imp__sub_823D761C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7620"))) PPC_WEAK_FUNC(sub_823D7620);
PPC_FUNC_IMPL(__imp__sub_823D7620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823d45b8
	ctx.lr = 0x823D7640;
	sub_823D45B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d765c
	if (ctx.cr6.eq) goto loc_823D765C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823D7658;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D765C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D7674"))) PPC_WEAK_FUNC(sub_823D7674);
PPC_FUNC_IMPL(__imp__sub_823D7674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7678"))) PPC_WEAK_FUNC(sub_823D7678);
PPC_FUNC_IMPL(__imp__sub_823D7678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823D7680;
	sub_82248780(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,-4760(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// bl 0x8223a960
	ctx.lr = 0x823D7694;
	sub_8223A960(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r26,r3,6612
	ctx.r26.s64 = ctx.r3.s64 + 6612;
	// ori r8,r11,37336
	ctx.r8.u64 = ctx.r11.u64 | 37336;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823d77b4
	if (ctx.cr6.lt) goto loc_823D77B4;
	// beq cr6,0x823d76e8
	if (ctx.cr6.eq) goto loc_823D76E8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823d7b34
	if (!ctx.cr6.lt) goto loc_823D7B34;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30182
	ctx.r4.s64 = 30182;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D76E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823D76E8:
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x823d7b34
	if (ctx.cr6.gt) goto loc_823D7B34;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d770c
	// bdzf 4*cr6+eq,0x823d7774
	// bdzf 4*cr6+eq,0x823d7774
	// bdzf 4*cr6+eq,0x823d7774
	// bne cr6,0x823d7774
	if (!ctx.cr6.eq) goto loc_823D7774;
loc_823D770C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823d772c
	if (ctx.cr6.lt) goto loc_823D772C;
	// bne cr6,0x823d7730
	if (!ctx.cr6.eq) goto loc_823D7730;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x823d7730
	goto loc_823D7730;
loc_823D772C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823D7730:
	// addi r11,r11,9335
	ctx.r11.s64 = ctx.r11.s64 + 9335;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// ori r5,r10,37364
	ctx.r5.u64 = ctx.r10.u64 | 37364;
	// ori r4,r8,37520
	ctx.r4.u64 = ctx.r8.u64 | 37520;
	// ori r3,r7,37516
	ctx.r3.u64 = ctx.r7.u64 | 37516;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stwx r29,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r29.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stwx r28,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r28.u32);
	// stwx r29,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r29.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823D7774:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// ori r7,r10,37364
	ctx.r7.u64 = ctx.r10.u64 | 37364;
	// ori r6,r9,37520
	ctx.r6.u64 = ctx.r9.u64 | 37520;
	// ori r5,r8,37516
	ctx.r5.u64 = ctx.r8.u64 | 37516;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stwx r29,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r29.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stwx r28,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r28.u32);
	// stwx r29,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r29.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823D77B4:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x823d7b34
	if (ctx.cr6.gt) goto loc_823D7B34;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823d7910
	// bdzf 4*cr6+eq,0x823d79ac
	// bdzf 4*cr6+eq,0x823d79ac
	// bdzf 4*cr6+eq,0x823d79ac
	// bdzf 4*cr6+eq,0x823d79ac
	// bdzf 4*cr6+eq,0x823d79ec
	// bdzf 4*cr6+eq,0x823d7a54
	// bne cr6,0x823d7a88
	if (!ctx.cr6.eq) goto loc_823D7A88;
	// addi r30,r31,-28
	ctx.r30.s64 = ctx.r31.s64 + -28;
	// li r9,6
	ctx.r9.s64 = 6;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// addi r10,r10,-28144
	ctx.r10.s64 = ctx.r10.s64 + -28144;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_823D7808:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823d7808
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7808;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d6e88
	ctx.lr = 0x823D7820;
	sub_823D6E88(ctx, base);
	// lwz r11,1988(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1988);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823d7858
	if (ctx.cr6.lt) goto loc_823D7858;
	// beq cr6,0x823d7850
	if (ctx.cr6.eq) goto loc_823D7850;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823d785c
	if (!ctx.cr6.lt) goto loc_823D785C;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x823d785c
	goto loc_823D785C;
loc_823D7850:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x823d785c
	goto loc_823D785C;
loc_823D7858:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823D785C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822360e8
	ctx.lr = 0x823D7864;
	sub_822360E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r11,r9,37376
	ctx.r11.u64 = ctx.r9.u64 | 37376;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lfs f0,31104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31104);
	ctx.f0.f64 = double(temp.f32);
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// ori r9,r8,37380
	ctx.r9.u64 = ctx.r8.u64 | 37380;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r4,0
	ctx.r4.s64 = 0;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// ori r8,r7,37384
	ctx.r8.u64 = ctx.r7.u64 | 37384;
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// ori r7,r6,37520
	ctx.r7.u64 = ctx.r6.u64 | 37520;
	// ori r6,r4,37516
	ctx.r6.u64 = ctx.r4.u64 | 37516;
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f3,r30,r9
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f4,r30,r8
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfsx f2,r30,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// stwx r28,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r28.u32);
	// stwx r29,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r29.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823D7910:
	// addi r30,r31,-28
	ctx.r30.s64 = ctx.r31.s64 + -28;
	// li r9,6
	ctx.r9.s64 = 6;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// addi r10,r10,-28144
	ctx.r10.s64 = ctx.r10.s64 + -28144;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_823D7934:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823d7934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7934;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d6e88
	ctx.lr = 0x823D794C;
	sub_823D6E88(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82163e98
	ctx.lr = 0x823D7954;
	sub_82163E98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823d4478
	ctx.lr = 0x823D7964;
	sub_823D4478(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,37360
	ctx.r8.u64 = ctx.r11.u64 | 37360;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r7,r10,37520
	ctx.r7.u64 = ctx.r10.u64 | 37520;
	// ori r6,r9,37516
	ctx.r6.u64 = ctx.r9.u64 | 37516;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r31,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// stwx r5,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r5.u32);
	// stwx r4,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r4.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823D79AC:
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// li r9,6
	ctx.r9.s64 = 6;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// addi r10,r10,-28144
	ctx.r10.s64 = ctx.r10.s64 + -28144;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_823D79D0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823d79d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D79D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823d6e88
	ctx.lr = 0x823D79E4;
	sub_823D6E88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823D79EC:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// ori r8,r9,37364
	ctx.r8.u64 = ctx.r9.u64 | 37364;
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823D7A54:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d7070
	ctx.lr = 0x823D7A60;
	sub_823D7070(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,37520
	ctx.r9.u64 = ctx.r11.u64 | 37520;
	// ori r8,r10,37516
	ctx.r8.u64 = ctx.r10.u64 | 37516;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwx r7,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r6,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823D7A88:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,70
	ctx.r3.s64 = 70;
	// bl 0x8222e0a8
	ctx.lr = 0x823D7A94;
	sub_8222E0A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d7ad8
	if (!ctx.cr6.eq) goto loc_823D7AD8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821ebb58
	ctx.lr = 0x823D7AA4;
	sub_821EBB58(ctx, base);
	// li r11,30520
	ctx.r11.s64 = 30520;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,148(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D7AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823D7AD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8223a910
	ctx.lr = 0x823D7AE0;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d7af0
	if (ctx.cr6.eq) goto loc_823D7AF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8223b0b8
	ctx.lr = 0x823D7AF0;
	sub_8223B0B8(ctx, base);
loc_823D7AF0:
	// lwz r11,-4760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r31,-28
	ctx.r30.s64 = ctx.r31.s64 + -28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r10.u32);
	// bl 0x823d7568
	ctx.lr = 0x823D7B0C;
	sub_823D7568(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823d7b34
	if (ctx.cr6.eq) goto loc_823D7B34;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r3.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D7B34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D7B34:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823D7B3C"))) PPC_WEAK_FUNC(sub_823D7B3C);
PPC_FUNC_IMPL(__imp__sub_823D7B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7B40"))) PPC_WEAK_FUNC(sub_823D7B40);
PPC_FUNC_IMPL(__imp__sub_823D7B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823D7B48;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// ori r10,r11,37336
	ctx.r10.u64 = ctx.r11.u64 | 37336;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-4760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823d7c18
	if (ctx.cr6.lt) goto loc_823D7C18;
	// beq cr6,0x823d7ba4
	if (ctx.cr6.eq) goto loc_823D7BA4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x823d7ccc
	if (!ctx.cr6.lt) goto loc_823D7CCC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// ori r9,r10,37364
	ctx.r9.u64 = ctx.r10.u64 | 37364;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823D7BA4:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bge cr6,0x823d7ccc
	if (!ctx.cr6.lt) goto loc_823D7CCC;
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// li r8,6
	ctx.r8.s64 = 6;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-28144
	ctx.r10.s64 = ctx.r10.s64 + -28144;
	// addi r9,r9,-28168
	ctx.r9.s64 = ctx.r9.s64 + -28168;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_823D7BD0:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823d7bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7BD0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r10,37520
	ctx.r7.u64 = ctx.r10.u64 | 37520;
	// ori r6,r9,37516
	ctx.r6.u64 = ctx.r9.u64 | 37516;
	// ori r5,r8,37364
	ctx.r5.u64 = ctx.r8.u64 | 37364;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r10,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u32);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823D7C18:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r29,r31,-28
	ctx.r29.s64 = ctx.r31.s64 + -28;
	// stw r10,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r10.u32);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,1964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// addi r5,r5,-28148
	ctx.r5.s64 = ctx.r5.s64 + -28148;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D7C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r30,-4760(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// addi r11,r30,1964
	ctx.r11.s64 = ctx.r30.s64 + 1964;
	// bl 0x8223aa28
	ctx.lr = 0x823D7C58;
	sub_8223AA28(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82237560
	ctx.lr = 0x823D7C64;
	sub_82237560(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,1964(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x82237db0
	ctx.lr = 0x823D7C74;
	sub_82237DB0(ctx, base);
	// lwz r11,1988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1988);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823d7cb0
	if (ctx.cr6.lt) goto loc_823D7CB0;
	// beq cr6,0x823d7c94
	if (ctx.cr6.eq) goto loc_823D7C94;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823d7cb4
	if (!ctx.cr6.lt) goto loc_823D7CB4;
	// li r28,18
	ctx.r28.s64 = 18;
	// b 0x823d7cb4
	goto loc_823D7CB4;
loc_823D7C94:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823d7ca8
	if (!ctx.cr6.eq) goto loc_823D7CA8;
	// li r28,9
	ctx.r28.s64 = 9;
	// b 0x823d7cb4
	goto loc_823D7CB4;
loc_823D7CA8:
	// li r28,16
	ctx.r28.s64 = 16;
	// b 0x823d7cb4
	goto loc_823D7CB4;
loc_823D7CB0:
	// li r28,15
	ctx.r28.s64 = 15;
loc_823D7CB4:
	// stw r28,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D7CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D7CCC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823D7CD4"))) PPC_WEAK_FUNC(sub_823D7CD4);
PPC_FUNC_IMPL(__imp__sub_823D7CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7CD8"))) PPC_WEAK_FUNC(sub_823D7CD8);
PPC_FUNC_IMPL(__imp__sub_823D7CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823D7CE0;
	sub_82248788(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8223ad48
	ctx.lr = 0x823D7CEC;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d7d00
	if (!ctx.cr6.eq) goto loc_823D7D00;
loc_823D7CF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823D7D00:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r11,-4760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// addi r31,r11,1964
	ctx.r31.s64 = ctx.r11.s64 + 1964;
	// bl 0x8223aa28
	ctx.lr = 0x823D7D10;
	sub_8223AA28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d7cf4
	if (ctx.cr6.eq) goto loc_823D7CF4;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82237588
	ctx.lr = 0x823D7D24;
	sub_82237588(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82238070
	ctx.lr = 0x823D7D40;
	sub_82238070(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82237538
	ctx.lr = 0x823D7D4C;
	sub_82237538(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8214a2d8
	ctx.lr = 0x823D7D58;
	sub_8214A2D8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8214a2d8
	ctx.lr = 0x823D7D64;
	sub_8214A2D8(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,304(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x823c9090
	ctx.lr = 0x823D7D80;
	sub_823C9090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d7cf4
	if (ctx.cr6.eq) goto loc_823D7CF4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,37380
	ctx.r9.u64 = ctx.r11.u64 | 37380;
	// ori r8,r10,37384
	ctx.r8.u64 = ctx.r10.u64 | 37384;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,0
	ctx.r6.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// lfsx f13,r28,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// ori r4,r6,37376
	ctx.r4.u64 = ctx.r6.u64 | 37376;
	// lfsx f12,r28,r8
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-18744(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18744);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfsx f9,r28,r4
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f7.u64);
	// fctidz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lbz r11,95(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r3,103(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// fctidz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lbz r10,95(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r3,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r3.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823d7e60
	if (ctx.cr6.lt) goto loc_823D7E60;
	// beq cr6,0x823d7e4c
	if (ctx.cr6.eq) goto loc_823D7E4C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823d7ea8
	if (!ctx.cr6.lt) goto loc_823D7EA8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82239948
	ctx.lr = 0x823D7E24;
	sub_82239948(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r10,r11,37388
	ctx.r10.u64 = ctx.r11.u64 | 37388;
	// lfsx f0,r28,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82239908
	ctx.lr = 0x823D7E48;
	sub_82239908(ctx, base);
	// b 0x823d7ea8
	goto loc_823D7EA8;
loc_823D7E4C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82239930
	ctx.lr = 0x823D7E5C;
	sub_82239930(ctx, base);
	// b 0x823d7ea8
	goto loc_823D7EA8;
loc_823D7E60:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82239918
	ctx.lr = 0x823D7E70;
	sub_82239918(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r10,r11,37388
	ctx.r10.u64 = ctx.r11.u64 | 37388;
	// lfsx f0,r28,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82239908
	ctx.lr = 0x823D7E94;
	sub_82239908(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82239960
	ctx.lr = 0x823D7EA8;
	sub_82239960(ctx, base);
loc_823D7EA8:
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x821847c0
	ctx.lr = 0x823D7EB8;
	sub_821847C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d7ee0
	if (ctx.cr6.eq) goto loc_823D7EE0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822392f8
	ctx.lr = 0x823D7EE0;
	sub_822392F8(ctx, base);
loc_823D7EE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823D7EEC"))) PPC_WEAK_FUNC(sub_823D7EEC);
PPC_FUNC_IMPL(__imp__sub_823D7EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7EF0"))) PPC_WEAK_FUNC(sub_823D7EF0);
PPC_FUNC_IMPL(__imp__sub_823D7EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d4888
	ctx.lr = 0x823D7F08;
	sub_823D4888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4d18
	ctx.lr = 0x823D7F10;
	sub_823D4D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823D7F18;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D7F2C"))) PPC_WEAK_FUNC(sub_823D7F2C);
PPC_FUNC_IMPL(__imp__sub_823D7F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7F30"))) PPC_WEAK_FUNC(sub_823D7F30);
PPC_FUNC_IMPL(__imp__sub_823D7F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8223ad48
	ctx.lr = 0x823D7F48;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d7f68
	if (ctx.cr6.eq) goto loc_823D7F68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4888
	ctx.lr = 0x823D7F58;
	sub_823D4888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4d18
	ctx.lr = 0x823D7F60;
	sub_823D4D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc48
	ctx.lr = 0x823D7F68;
	sub_823CDC48(ctx, base);
loc_823D7F68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D7F7C"))) PPC_WEAK_FUNC(sub_823D7F7C);
PPC_FUNC_IMPL(__imp__sub_823D7F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7F80"))) PPC_WEAK_FUNC(sub_823D7F80);
PPC_FUNC_IMPL(__imp__sub_823D7F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823D7F88;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	ctx.lr = 0x823D7FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// ori r29,r8,37364
	ctx.r29.u64 = ctx.r8.u64 | 37364;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d80ac
	if (ctx.cr6.eq) goto loc_823D80AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,35904
	ctx.r9.u64 = ctx.r10.u64 | 35904;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwzx r26,r31,r9
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D7FE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x823d80ac
	if (!ctx.cr6.eq) goto loc_823D80AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ec830
	ctx.lr = 0x823D7FF4;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823d80ac
	if (!ctx.cr6.eq) goto loc_823D80AC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r7,r10,37376
	ctx.r7.u64 = ctx.r10.u64 | 37376;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// ori r9,r11,37384
	ctx.r9.u64 = ctx.r11.u64 | 37384;
	// ori r11,r6,37380
	ctx.r11.u64 = ctx.r6.u64 | 37380;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lfsx f12,r31,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,-18744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18744);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r5,37388
	ctx.r10.u64 = ctx.r5.u64 | 37388;
	// lfsx f13,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfsx f9,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// li r9,255
	ctx.r9.s64 = 255;
	// lfsx f7,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// fctidz f4,f10
	ctx.f4.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lbz r6,95(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// fctidz f5,f11
	ctx.f5.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fctidz f3,f8
	ctx.f3.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// stfd f3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r5,95(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// bl 0x82164cc8
	ctx.lr = 0x823D8094;
	sub_82164CC8(ctx, base);
	// lis r4,-32177
	ctx.r4.s64 = -2108751872;
	// lwz r11,-4760(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4760);
	// stw r27,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r27.u32);
	// stwx r28,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
loc_823D80AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4888
	ctx.lr = 0x823D80B4;
	sub_823D4888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4d18
	ctx.lr = 0x823D80BC;
	sub_823D4D18(ctx, base);
	// lwzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ori r9,r11,37520
	ctx.r9.u64 = ctx.r11.u64 | 37520;
	// beq cr6,0x823d80dc
	if (ctx.cr6.eq) goto loc_823D80DC;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28020
	ctx.r30.s64 = ctx.r30.s64 + -28020;
	// b 0x823d812c
	goto loc_823D812C;
loc_823D80DC:
	// lis r12,10
	ctx.r12.s64 = 655360;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r12,r12,12
	ctx.r12.u64 = ctx.r12.u64 | 12;
	// and r8,r11,r12
	ctx.r8.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r10,37516
	ctx.r11.u64 = ctx.r10.u64 | 37516;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823d8100
	if (ctx.cr6.eq) goto loc_823D8100;
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
loc_823D8100:
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d8130
	if (!ctx.cr6.gt) goto loc_823D8130;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r10,3688(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3688);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823d8130
	if (!ctx.cr6.gt) goto loc_823D8130;
	// stwx r27,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r27.u32);
loc_823D812C:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_823D8130:
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r29,r31,r9
	ctx.r29.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d815c
	if (ctx.cr6.eq) goto loc_823D815C;
	// bl 0x8223ad48
	ctx.lr = 0x823D8144;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d815c
	if (ctx.cr6.eq) goto loc_823D815C;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// bl 0x823d7cd8
	ctx.lr = 0x823D815C;
	sub_823D7CD8(ctx, base);
loc_823D815C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823D8164;
	sub_823CDC68(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823D816C"))) PPC_WEAK_FUNC(sub_823D816C);
PPC_FUNC_IMPL(__imp__sub_823D816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D8170"))) PPC_WEAK_FUNC(sub_823D8170);
PPC_FUNC_IMPL(__imp__sub_823D8170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d4888
	ctx.lr = 0x823D8188;
	sub_823D4888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4d18
	ctx.lr = 0x823D8190;
	sub_823D4D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdcc0
	ctx.lr = 0x823D8198;
	sub_823CDCC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D81AC"))) PPC_WEAK_FUNC(sub_823D81AC);
PPC_FUNC_IMPL(__imp__sub_823D81AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D81B0"))) PPC_WEAK_FUNC(sub_823D81B0);
PPC_FUNC_IMPL(__imp__sub_823D81B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d4888
	ctx.lr = 0x823D81C8;
	sub_823D4888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4d18
	ctx.lr = 0x823D81D0;
	sub_823D4D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fbd40
	ctx.lr = 0x823D81D8;
	sub_823FBD40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D81EC"))) PPC_WEAK_FUNC(sub_823D81EC);
PPC_FUNC_IMPL(__imp__sub_823D81EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D81F0"))) PPC_WEAK_FUNC(sub_823D81F0);
PPC_FUNC_IMPL(__imp__sub_823D81F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823D81F8;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-4760(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d862c
	if (ctx.cr6.eq) goto loc_823D862C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1964(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x823c8fa0
	ctx.lr = 0x823D8220;
	sub_823C8FA0(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,55772
	ctx.r9.u64 = ctx.r10.u64 | 55772;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r3,1964(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x823e97f0
	ctx.lr = 0x823D823C;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,475
	ctx.r4.s64 = 475;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D8250;
	sub_82106F58(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,474
	ctx.r4.s64 = 474;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D8260;
	sub_82106F58(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x823D8264;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822368b0
	ctx.lr = 0x823D8274;
	sub_822368B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82236510
	ctx.lr = 0x823D8288;
	sub_82236510(ctx, base);
	// lwz r29,1972(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823D8294;
	sub_82163DF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82164d80
	ctx.lr = 0x823D829C;
	sub_82164D80(ctx, base);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r29,31172(r6)
	PPC_STORE_U32(ctx.r6.u32 + 31172, ctx.r29.u32);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r29,31428(r4)
	PPC_STORE_U32(ctx.r4.u32 + 31428, ctx.r29.u32);
	// bl 0x8218b408
	ctx.lr = 0x823D82C4;
	sub_8218B408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f31,11300(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,31432(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 31432, temp.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
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
	// stfs f7,31436(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 31436, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
	// stfs f3,31440(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 31440, temp.u32);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r29,31684(r4)
	PPC_STORE_U32(ctx.r4.u32 + 31684, ctx.r29.u32);
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r4,1964(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x823c9120
	ctx.lr = 0x823D835C;
	sub_823C9120(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r4,124
	ctx.r4.s64 = 124;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,31708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31708, ctx.r3.u32);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r29,31940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31940, ctx.r29.u32);
	// lwz r5,52(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D8384;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1972(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// bl 0x823cd3e0
	ctx.lr = 0x823D8390;
	sub_823CD3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,35
	ctx.r3.s64 = 35;
	// bne cr6,0x823d83a0
	if (!ctx.cr6.eq) goto loc_823D83A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D83A0:
	// bl 0x8218b408
	ctx.lr = 0x823D83A4;
	sub_8218B408(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r7,-32177
	ctx.r7.s64 = -2108751872;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r25,r9,26232
	ctx.r25.s64 = ctx.r9.s64 + 26232;
	// addi r28,r7,-4596
	ctx.r28.s64 = ctx.r7.s64 + -4596;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// li r4,8
	ctx.r4.s64 = 8;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,31944(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 31944, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,31948(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 31948, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
	// stfs f3,31952(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 31952, temp.u32);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r29,32196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32196, ctx.r29.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,32452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32452, ctx.r29.u32);
	// lhz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x8218a5f0
	ctx.lr = 0x823D8454;
	sub_8218A5F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,32472(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32472, ctx.r8.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r29,32492(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32492, ctx.r29.u32);
	// lhz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823D8474;
	sub_822121D8(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f2,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,32456(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32456, temp.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,32460(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32460, temp.u32);
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,32464(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32464, temp.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r29,32708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32708, ctx.r29.u32);
	// lhz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823D84F8;
	sub_822121D8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r8,0
	ctx.r8.s64 = 0;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f4,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// ori r5,r8,32964
	ctx.r5.u64 = ctx.r8.u64 | 32964;
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,32712(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32712, temp.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,32716(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32716, temp.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
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
	// stfs f7,32720(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32720, temp.u32);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r29,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r29.u32);
	// lbz r4,32(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// bl 0x823c93f0
	ctx.lr = 0x823D858C;
	sub_823C93F0(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,0
	ctx.r7.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ori r11,r7,32988
	ctx.r11.u64 = ctx.r7.u64 | 32988;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r6,1984(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1984);
	// bl 0x8218a5f0
	ctx.lr = 0x823D85B8;
	sub_8218A5F0(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r7,r9,57304
	ctx.r7.u64 = ctx.r9.u64 | 57304;
	// ori r10,r6,57324
	ctx.r10.u64 = ctx.r6.u64 | 57324;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r29,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,1980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1980);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8218a5f0
	ctx.lr = 0x823D85F8;
	sub_8218A5F0(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r5,r7,56792
	ctx.r5.u64 = ctx.r7.u64 | 56792;
	// ori r4,r6,56812
	ctx.r4.u64 = ctx.r6.u64 | 56812;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r28.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r29,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r29.u32);
	// bl 0x823d4888
	ctx.lr = 0x823D8624;
	sub_823D4888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4d18
	ctx.lr = 0x823D862C;
	sub_823D4D18(ctx, base);
loc_823D862C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823D8638"))) PPC_WEAK_FUNC(sub_823D8638);
PPC_FUNC_IMPL(__imp__sub_823D8638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823D8640;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823D864C;
	sub_823CD7E8(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r8,-28244
	ctx.r8.s64 = ctx.r8.s64 + -28244;
	// addi r25,r25,-28172
	ctx.r25.s64 = ctx.r25.s64 + -28172;
	// addi r7,r11,-18592
	ctx.r7.s64 = ctx.r11.s64 + -18592;
	// addi r6,r10,-18728
	ctx.r6.s64 = ctx.r10.s64 + -18728;
	// addi r5,r9,-18740
	ctx.r5.s64 = ctx.r9.s64 + -18740;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r29,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r29.u32);
	// addi r28,r28,-28168
	ctx.r28.s64 = ctx.r28.s64 + -28168;
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r30.u32);
	// stw r29,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r30.u32);
	// stw r29,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r29.u32);
	// stw r30,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r30.u32);
	// stw r29,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r29.u32);
	// stw r30,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r30.u32);
	// stw r29,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r29.u32);
	// stw r30,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r30.u32);
	// stw r29,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r29.u32);
	// stw r30,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r30.u32);
	// stw r29,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r29.u32);
	// stw r30,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r30.u32);
	// stw r29,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r29.u32);
	// stw r30,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r30.u32);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x823D86E8;
	sub_822AA648(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x823D86F4;
	sub_822AA648(ctx, base);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r28,r28,-28144
	ctx.r28.s64 = ctx.r28.s64 + -28144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822aa648
	ctx.lr = 0x823D8708;
	sub_822AA648(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x823D8714;
	sub_822AA648(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ori r9,r11,37516
	ctx.r9.u64 = ctx.r11.u64 | 37516;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r7,r10,37520
	ctx.r7.u64 = ctx.r10.u64 | 37520;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r5,-32177
	ctx.r5.s64 = -2108751872;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r11,149
	ctx.r11.s64 = 149;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// lwz r27,-4760(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4760);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// lwz r9,1988(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1988);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823d87cc
	if (!ctx.cr6.eq) goto loc_823D87CC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r11,37300
	ctx.r5.u64 = ctx.r11.u64 | 37300;
	// ori r4,r10,37308
	ctx.r4.u64 = ctx.r10.u64 | 37308;
	// ori r3,r9,37316
	ctx.r3.u64 = ctx.r9.u64 | 37316;
	// ori r11,r8,37324
	ctx.r11.u64 = ctx.r8.u64 | 37324;
	// ori r10,r7,37332
	ctx.r10.u64 = ctx.r7.u64 | 37332;
	// ori r9,r6,37340
	ctx.r9.u64 = ctx.r6.u64 | 37340;
	// stwx r30,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r30,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
	// stwx r30,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u32);
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
loc_823D87CC:
	// bl 0x8223aa28
	ctx.lr = 0x823D87D0;
	sub_8223AA28(ctx, base);
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// lwz r4,1964(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1964);
	// addi r26,r26,-28120
	ctx.r26.s64 = ctx.r26.s64 + -28120;
	// bl 0x82237d70
	ctx.lr = 0x823D87E0;
	sub_82237D70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8214a2d8
	ctx.lr = 0x823D87EC;
	sub_8214A2D8(ctx, base);
	// addis r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 65536;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// addi r24,r24,-28100
	ctx.r24.s64 = ctx.r24.s64 + -28100;
loc_823D87F8:
	// lbzx r11,r24,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x823d881c
	if (!ctx.cr6.eq) goto loc_823D881C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4500
	ctx.lr = 0x823D880C;
	sub_823D4500(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82239908
	ctx.lr = 0x823D881C;
	sub_82239908(ctx, base);
loc_823D881C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x823d87f8
	if (ctx.cr6.lt) goto loc_823D87F8;
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x823d7310
	ctx.lr = 0x823D883C;
	sub_823D7310(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823D885C;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d81f0
	ctx.lr = 0x823D8864;
	sub_823D81F0(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823D886C;
	sub_823C8DF0(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r9,-19088
	ctx.r11.s64 = ctx.r9.s64 + -19088;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// bl 0x821eb290
	ctx.lr = 0x823D8894;
	sub_821EB290(ctx, base);
	// li r4,473
	ctx.r4.s64 = 473;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823D88A0;
	sub_823CDF48(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823D88AC;
	sub_823CDF48(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823D88B8;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823D88C4"))) PPC_WEAK_FUNC(sub_823D88C4);
PPC_FUNC_IMPL(__imp__sub_823D88C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D88C8"))) PPC_WEAK_FUNC(sub_823D88C8);
PPC_FUNC_IMPL(__imp__sub_823D88C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ccee0
	sub_823CCEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D88CC"))) PPC_WEAK_FUNC(sub_823D88CC);
PPC_FUNC_IMPL(__imp__sub_823D88CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D88D0"))) PPC_WEAK_FUNC(sub_823D88D0);
PPC_FUNC_IMPL(__imp__sub_823D88D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ccf18
	sub_823CCF18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D88D4"))) PPC_WEAK_FUNC(sub_823D88D4);
PPC_FUNC_IMPL(__imp__sub_823D88D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D88D8"))) PPC_WEAK_FUNC(sub_823D88D8);
PPC_FUNC_IMPL(__imp__sub_823D88D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// addi r30,r11,1964
	ctx.r30.s64 = ctx.r11.s64 + 1964;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823D890C;
	sub_82248A40(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823D892C;
	sub_82248A40(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,9
	ctx.r7.s64 = 9;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// stw r8,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r8.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r7,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r7.u32);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823D8950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_823D8968"))) PPC_WEAK_FUNC(sub_823D8968);
PPC_FUNC_IMPL(__imp__sub_823D8968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-4760(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// addi r11,r30,1964
	ctx.r11.s64 = ctx.r30.s64 + 1964;
	// bl 0x8223aa28
	ctx.lr = 0x823D8990;
	sub_8223AA28(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x823D8994;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x822363e0
	ctx.lr = 0x823D89A0;
	sub_822363E0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x823d89e0
	if (!ctx.cr6.lt) goto loc_823D89E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,9
	ctx.r9.s64 = ctx.r10.s64 + 9;
loc_823D89B8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823d89dc
	if (ctx.cr6.eq) goto loc_823D89DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x823d89b8
	if (ctx.cr6.lt) goto loc_823D89B8;
	// b 0x823d89e0
	goto loc_823D89E0;
loc_823D89DC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_823D89E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D89F8"))) PPC_WEAK_FUNC(sub_823D89F8);
PPC_FUNC_IMPL(__imp__sub_823D89F8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-18008
	ctx.r8.s64 = ctx.r11.s64 + -18008;
	// addi r7,r10,-18144
	ctx.r7.s64 = ctx.r10.s64 + -18144;
	// addi r6,r9,-18152
	ctx.r6.s64 = ctx.r9.s64 + -18152;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r11,-4760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// addi r4,r11,1964
	ctx.r4.s64 = ctx.r11.s64 + 1964;
	// bl 0x82248a40
	ctx.lr = 0x823D8A4C;
	sub_82248A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3d48
	ctx.lr = 0x823D8A54;
	sub_823C3D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d8a70
	if (ctx.cr6.eq) goto loc_823D8A70;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c32a0
	ctx.lr = 0x823D8A68;
	sub_823C32A0(ctx, base);
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x823d8a7c
	goto loc_823D8A7C;
loc_823D8A70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_823D8A7C:
	// lwz r11,-4760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,1964
	ctx.r3.s64 = ctx.r11.s64 + 1964;
	// bl 0x82248a40
	ctx.lr = 0x823D8A90;
	sub_82248A40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823c8f28
	ctx.lr = 0x823D8AA4;
	sub_823C8F28(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823D8AA8;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823D8AB0;
	sub_823CDA98(ctx, base);
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

__attribute__((alias("__imp__sub_823D8AC8"))) PPC_WEAK_FUNC(sub_823D8AC8);
PPC_FUNC_IMPL(__imp__sub_823D8AC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823d8fe8
	sub_823D8FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D8AD0"))) PPC_WEAK_FUNC(sub_823D8AD0);
PPC_FUNC_IMPL(__imp__sub_823D8AD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823d8fe8
	sub_823D8FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D8AD8"))) PPC_WEAK_FUNC(sub_823D8AD8);
PPC_FUNC_IMPL(__imp__sub_823D8AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823D8AE0;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32177
	ctx.r29.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r11,-4760(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4760);
	// addi r30,r11,1964
	ctx.r30.s64 = ctx.r11.s64 + 1964;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823D8B04;
	sub_82248A40(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r8,r9,37264
	ctx.r8.u64 = ctx.r9.u64 | 37264;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823d8bb8
	if (ctx.cr6.eq) goto loc_823D8BB8;
	// addi r11,r11,3106
	ctx.r11.s64 = ctx.r11.s64 + 3106;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x823d8b74
	if (ctx.cr6.lt) goto loc_823D8B74;
	// bne cr6,0x823d8bb8
	if (!ctx.cr6.eq) goto loc_823D8BB8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r30,17
	ctx.r30.s64 = 17;
	// bl 0x82248a40
	ctx.lr = 0x823D8B70;
	sub_82248A40(ctx, base);
	// b 0x823d8b88
	goto loc_823D8B88;
loc_823D8B74:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x823d8968
	ctx.lr = 0x823D8B80;
	sub_823D8968(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r30,15
	ctx.r30.s64 = 15;
loc_823D8B88:
	// lwz r11,-4760(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4760);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,1964
	ctx.r3.s64 = ctx.r11.s64 + 1964;
	// bl 0x82248a40
	ctx.lr = 0x823D8B9C;
	sub_82248A40(ctx, base);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stw r28,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r28.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D8BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D8BB8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823D8BC0"))) PPC_WEAK_FUNC(sub_823D8BC0);
PPC_FUNC_IMPL(__imp__sub_823D8BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823cdb10
	ctx.lr = 0x823D8BD8;
	sub_823CDB10(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-18192
	ctx.r11.s64 = ctx.r11.s64 + -18192;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,3106
	ctx.r11.s64 = ctx.r11.s64 + 3106;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r5,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// bl 0x821eb290
	ctx.lr = 0x823D8C0C;
	sub_821EB290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D8C20"))) PPC_WEAK_FUNC(sub_823D8C20);
PPC_FUNC_IMPL(__imp__sub_823D8C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823D8C28;
	sub_82248770(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x823D8C40;
	sub_8218B408(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823D8C4C;
	sub_8218B408(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823D8C5C;
	sub_823C3280(ctx, base);
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r26,r26,-28184
	ctx.r26.s64 = ctx.r26.s64 + -28184;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823d8ca4
	if (!ctx.cr6.gt) goto loc_823D8CA4;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addi r9,r9,-28252
	ctx.r9.s64 = ctx.r9.s64 + -28252;
loc_823D8C80:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stwu r6,12(r9)
	ea = 12 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823d8c80
	if (ctx.cr6.lt) goto loc_823D8C80;
loc_823D8CA4:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823d8e70
	if (!ctx.cr6.gt) goto loc_823D8E70;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f31,11300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// addi r25,r25,-28180
	ctx.r25.s64 = ctx.r25.s64 + -28180;
	// addi r29,r29,-28240
	ctx.r29.s64 = ctx.r29.s64 + -28240;
	// addi r27,r11,-18432
	ctx.r27.s64 = ctx.r11.s64 + -18432;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_823D8CE8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d8d2c
	if (ctx.cr6.lt) goto loc_823D8D2C;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823D8D2C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d8d58
	if (ctx.cr6.lt) goto loc_823D8D58;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823D8D58:
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,204(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d8da8
	if (ctx.cr6.lt) goto loc_823D8DA8;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_823D8DA8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r27,240
	ctx.r10.s64 = ctx.r27.s64 + 240;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x823D8DC4;
	sub_82106F58(ctx, base);
	// lwz r8,-4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823d8dd8
	if (!ctx.cr6.eq) goto loc_823D8DD8;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_823D8DD8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x823d8ce8
	if (ctx.cr6.lt) goto loc_823D8CE8;
loc_823D8E70:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_823D8E80"))) PPC_WEAK_FUNC(sub_823D8E80);
PPC_FUNC_IMPL(__imp__sub_823D8E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823D8E88;
	sub_82248768(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32177
	ctx.r8.s64 = -2108751872;
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r25,-4760(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4760);
	// addi r9,r9,-28240
	ctx.r9.s64 = ctx.r9.s64 + -28240;
loc_823D8EAC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823d8ecc
	if (!ctx.cr6.eq) goto loc_823D8ECC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x823d8eac
	if (ctx.cr6.lt) goto loc_823D8EAC;
	// b 0x823d8ed0
	goto loc_823D8ED0;
loc_823D8ECC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823D8ED0:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r22,r29,1
	ctx.r22.s64 = ctx.r29.s64 + 65536;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r22,-28184
	ctx.r22.s64 = ctx.r22.s64 + -28184;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r23,r10,1
	ctx.r23.s64 = ctx.r10.s64 + 65536;
	// li r26,9315
	ctx.r26.s64 = 9315;
	// addi r23,r23,-28244
	ctx.r23.s64 = ctx.r23.s64 + -28244;
	// lis r24,-32186
	ctx.r24.s64 = -2109341696;
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
loc_823D8F04:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823d8fc8
	if (!ctx.cr6.lt) goto loc_823D8FC8;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bge cr6,0x823d8fc8
	if (!ctx.cr6.lt) goto loc_823D8FC8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823D8F1C:
	// add r11,r26,r28
	ctx.r11.u64 = ctx.r26.u64 + ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d8fbc
	if (ctx.cr6.eq) goto loc_823D8FBC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823d8968
	ctx.lr = 0x823D8F3C;
	sub_823D8968(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823d8f9c
	if (!ctx.cr6.eq) goto loc_823D8F9C;
	// lwz r21,0(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r20,1964(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1964);
	// bl 0x8223a9f8
	ctx.lr = 0x823D8F58;
	sub_8223A9F8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x8223b3e8
	ctx.lr = 0x823D8F6C;
	sub_8223B3E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,904
	ctx.r3.s64 = ctx.r29.s64 + 904;
	// bl 0x823c32a0
	ctx.lr = 0x823D8F78;
	sub_823C32A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,2868(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f1
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmadds f12,f0,f1,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f31.f64));
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// b 0x823d8fbc
	goto loc_823D8FBC;
loc_823D8F9C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r21,1964(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1964);
	// bl 0x8223a9f8
	ctx.lr = 0x823D8FA8;
	sub_8223A9F8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8223b3e8
	ctx.lr = 0x823D8FBC;
	sub_8223B3E8(ctx, base);
loc_823D8FBC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x823d8f1c
	if (ctx.cr6.lt) goto loc_823D8F1C;
loc_823D8FC8:
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r26,9323
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 9323, ctx.xer);
	// blt cr6,0x823d8f04
	if (ctx.cr6.lt) goto loc_823D8F04;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823D8FE4"))) PPC_WEAK_FUNC(sub_823D8FE4);
PPC_FUNC_IMPL(__imp__sub_823D8FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D8FE8"))) PPC_WEAK_FUNC(sub_823D8FE8);
PPC_FUNC_IMPL(__imp__sub_823D8FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823d89f8
	ctx.lr = 0x823D9008;
	sub_823D89F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d9024
	if (ctx.cr6.eq) goto loc_823D9024;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823D9020;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D9024:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D903C"))) PPC_WEAK_FUNC(sub_823D903C);
PPC_FUNC_IMPL(__imp__sub_823D903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9040"))) PPC_WEAK_FUNC(sub_823D9040);
PPC_FUNC_IMPL(__imp__sub_823D9040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d8c20
	ctx.lr = 0x823D9058;
	sub_823D8C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d8e80
	ctx.lr = 0x823D9060;
	sub_823D8E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823D9068;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D907C"))) PPC_WEAK_FUNC(sub_823D907C);
PPC_FUNC_IMPL(__imp__sub_823D907C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9080"))) PPC_WEAK_FUNC(sub_823D9080);
PPC_FUNC_IMPL(__imp__sub_823D9080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8223ad48
	ctx.lr = 0x823D9098;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d90b8
	if (ctx.cr6.eq) goto loc_823D90B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d8c20
	ctx.lr = 0x823D90A8;
	sub_823D8C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d8e80
	ctx.lr = 0x823D90B0;
	sub_823D8E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc48
	ctx.lr = 0x823D90B8;
	sub_823CDC48(ctx, base);
loc_823D90B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D90CC"))) PPC_WEAK_FUNC(sub_823D90CC);
PPC_FUNC_IMPL(__imp__sub_823D90CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D90D0"))) PPC_WEAK_FUNC(sub_823D90D0);
PPC_FUNC_IMPL(__imp__sub_823D90D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d8c20
	ctx.lr = 0x823D90E8;
	sub_823D8C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d8e80
	ctx.lr = 0x823D90F0;
	sub_823D8E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823D90F8;
	sub_823CDC68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D910C"))) PPC_WEAK_FUNC(sub_823D910C);
PPC_FUNC_IMPL(__imp__sub_823D910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9110"))) PPC_WEAK_FUNC(sub_823D9110);
PPC_FUNC_IMPL(__imp__sub_823D9110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d8c20
	ctx.lr = 0x823D9128;
	sub_823D8C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d8e80
	ctx.lr = 0x823D9130;
	sub_823D8E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdcc0
	ctx.lr = 0x823D9138;
	sub_823CDCC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D914C"))) PPC_WEAK_FUNC(sub_823D914C);
PPC_FUNC_IMPL(__imp__sub_823D914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9150"))) PPC_WEAK_FUNC(sub_823D9150);
PPC_FUNC_IMPL(__imp__sub_823D9150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d8c20
	ctx.lr = 0x823D9168;
	sub_823D8C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d8e80
	ctx.lr = 0x823D9170;
	sub_823D8E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fbd40
	ctx.lr = 0x823D9178;
	sub_823FBD40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D918C"))) PPC_WEAK_FUNC(sub_823D918C);
PPC_FUNC_IMPL(__imp__sub_823D918C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9190"))) PPC_WEAK_FUNC(sub_823D9190);
PPC_FUNC_IMPL(__imp__sub_823D9190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823D9198;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-4760(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823d9640
	if (ctx.cr6.eq) goto loc_823D9640;
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,848(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-28180
	ctx.r10.s64 = ctx.r10.s64 + -28180;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,17108(r7)
	PPC_STORE_U32(ctx.r7.u32 + 17108, ctx.r5.u32);
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subfe r7,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,17252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17252, ctx.r7.u32);
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subfe r11,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,17396(r4)
	PPC_STORE_U32(ctx.r4.u32 + 17396, ctx.r11.u32);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subfe r6,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,17540(r7)
	PPC_STORE_U32(ctx.r7.u32 + 17540, ctx.r6.u32);
	// lwz r4,1964(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x823c8fa0
	ctx.lr = 0x823D9234;
	sub_823C8FA0(ctx, base);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r11,r4,40412
	ctx.r11.u64 = ctx.r4.u64 | 40412;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,1964(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x823e97f0
	ctx.lr = 0x823D9250;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,415
	ctx.r4.s64 = 415;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D9264;
	sub_82106F58(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,414
	ctx.r4.s64 = 414;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D9274;
	sub_82106F58(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x823D9278;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822368b0
	ctx.lr = 0x823D9288;
	sub_822368B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82236510
	ctx.lr = 0x823D929C;
	sub_82236510(ctx, base);
	// lwz r29,1972(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823D92A8;
	sub_82163DF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82164d80
	ctx.lr = 0x823D92B0;
	sub_82164D80(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r29,31172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31172, ctx.r29.u32);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r29,31428(r6)
	PPC_STORE_U32(ctx.r6.u32 + 31428, ctx.r29.u32);
	// bl 0x8218b408
	ctx.lr = 0x823D92D8;
	sub_8218B408(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f31,11300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,31432(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 31432, temp.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,31436(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 31436, temp.u32);
	// lwz r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,31440(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 31440, temp.u32);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r29,31684(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31684, ctx.r29.u32);
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r4,1964(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x823c9120
	ctx.lr = 0x823D9370;
	sub_823C9120(ctx, base);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r4,124
	ctx.r4.s64 = 124;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r3,31708(r6)
	PPC_STORE_U32(ctx.r6.u32 + 31708, ctx.r3.u32);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r29,31940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 31940, ctx.r29.u32);
	// lwz r5,52(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D9398;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1972(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// bl 0x823cd3e0
	ctx.lr = 0x823D93A4;
	sub_823CD3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,35
	ctx.r3.s64 = 35;
	// bne cr6,0x823d93b4
	if (!ctx.cr6.eq) goto loc_823D93B4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D93B4:
	// bl 0x8218b408
	ctx.lr = 0x823D93B8;
	sub_8218B408(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,-32177
	ctx.r7.s64 = -2108751872;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// addi r28,r7,-4572
	ctx.r28.s64 = ctx.r7.s64 + -4572;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// addi r25,r9,26232
	ctx.r25.s64 = ctx.r9.s64 + 26232;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,31944(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 31944, temp.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,31948(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 31948, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
	// stfs f3,31952(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 31952, temp.u32);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r29,32196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32196, ctx.r29.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,32452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32452, ctx.r29.u32);
	// lhz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x8218a5f0
	ctx.lr = 0x823D9468;
	sub_8218A5F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,32472(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32472, ctx.r8.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r29,32492(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32492, ctx.r29.u32);
	// lhz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823D9488;
	sub_822121D8(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lfd f2,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,32456(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32456, temp.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,32460(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32460, temp.u32);
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,32464(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32464, temp.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r29,32708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32708, ctx.r29.u32);
	// lhz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823D950C;
	sub_822121D8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lis r8,0
	ctx.r8.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r8,32964
	ctx.r5.u64 = ctx.r8.u64 | 32964;
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfd f4,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,32712(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32712, temp.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,32716(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32716, temp.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,32720(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32720, temp.u32);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r29,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r29.u32);
	// lbz r4,32(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// bl 0x823c93f0
	ctx.lr = 0x823D95A0;
	sub_823C93F0(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,0
	ctx.r7.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ori r11,r7,32988
	ctx.r11.u64 = ctx.r7.u64 | 32988;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r6,1984(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1984);
	// bl 0x8218a5f0
	ctx.lr = 0x823D95CC;
	sub_8218A5F0(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r7,r9,41944
	ctx.r7.u64 = ctx.r9.u64 | 41944;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// ori r10,r6,41964
	ctx.r10.u64 = ctx.r6.u64 | 41964;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r29,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,1980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1980);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8218a5f0
	ctx.lr = 0x823D960C;
	sub_8218A5F0(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r5,r7,41432
	ctx.r5.u64 = ctx.r7.u64 | 41432;
	// ori r4,r6,41452
	ctx.r4.u64 = ctx.r6.u64 | 41452;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r28.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r29,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r29.u32);
	// bl 0x823d8c20
	ctx.lr = 0x823D9638;
	sub_823D8C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d8e80
	ctx.lr = 0x823D9640;
	sub_823D8E80(ctx, base);
loc_823D9640:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823D964C"))) PPC_WEAK_FUNC(sub_823D964C);
PPC_FUNC_IMPL(__imp__sub_823D964C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9650"))) PPC_WEAK_FUNC(sub_823D9650);
PPC_FUNC_IMPL(__imp__sub_823D9650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823D9658;
	sub_82248770(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823D9664;
	sub_823CD7E8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-18008
	ctx.r9.s64 = ctx.r11.s64 + -18008;
	// addi r8,r10,-18144
	ctx.r8.s64 = ctx.r10.s64 + -18144;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// ori r25,r7,37292
	ctx.r25.u64 = ctx.r7.u64 | 37292;
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// add r30,r31,r25
	ctx.r30.u64 = ctx.r31.u64 + ctx.r25.u64;
	// addi r27,r27,-28184
	ctx.r27.s64 = ctx.r27.s64 + -28184;
	// addi r23,r23,-28180
	ctx.r23.s64 = ctx.r23.s64 + -28180;
	// lis r5,-32177
	ctx.r5.s64 = -2108751872;
	// addi r4,r6,-18152
	ctx.r4.s64 = ctx.r6.s64 + -18152;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r4,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r4.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// li r24,4
	ctx.r24.s64 = 4;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r10,148
	ctx.r10.s64 = 148;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stwx r29,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r28,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
	// stw r28,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r28.u32);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// lwz r11,-4760(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4760);
	// addi r22,r11,1964
	ctx.r22.s64 = ctx.r11.s64 + 1964;
	// stw r10,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r10.u32);
	// lwz r26,-4760(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4760);
	// addi r11,r26,1964
	ctx.r11.s64 = ctx.r26.s64 + 1964;
	// bl 0x82237560
	ctx.lr = 0x823D971C;
	sub_82237560(ctx, base);
	// lwz r26,1964(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1964);
	// bl 0x8223aa28
	ctx.lr = 0x823D9724;
	sub_8223AA28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82237db0
	ctx.lr = 0x823D9730;
	sub_82237DB0(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// stwx r28,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r28.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r9,37304
	ctx.r5.u64 = ctx.r9.u64 | 37304;
	// ori r4,r8,37316
	ctx.r4.u64 = ctx.r8.u64 | 37316;
	// ori r3,r7,37328
	ctx.r3.u64 = ctx.r7.u64 | 37328;
	// ori r10,r6,37340
	ctx.r10.u64 = ctx.r6.u64 | 37340;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stwx r28,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// ori r26,r9,37300
	ctx.r26.u64 = ctx.r9.u64 | 37300;
	// stwx r28,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r28.u32);
	// stwx r28,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r28.u32);
	// stwx r28,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823d9794
	if (ctx.cr6.eq) goto loc_823D9794;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stwx r28,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r28.u32);
loc_823D9794:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d97c8
	if (ctx.cr6.eq) goto loc_823D97C8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stwx r29,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r29.u32);
	// stwx r29,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r29.u32);
loc_823D97C8:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,2
	ctx.r7.s64 = 2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d9800
	if (ctx.cr6.eq) goto loc_823D9800;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stwx r29,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r29.u32);
	// stwx r7,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r7.u32);
loc_823D9800:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r8,3
	ctx.r8.s64 = 3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d9838
	if (ctx.cr6.eq) goto loc_823D9838;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stwx r29,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r29.u32);
	// stwx r8,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r8.u32);
loc_823D9838:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d9868
	if (ctx.cr6.eq) goto loc_823D9868;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r29,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r29.u32);
	// stwx r24,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r24.u32);
loc_823D9868:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x823d98b0
	if (ctx.cr6.gt) goto loc_823D98B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d98b0
	if (ctx.cr6.eq) goto loc_823D98B0;
	// bdz 0x823d98b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823D98B0;
	// bdz 0x823d9894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823D9894;
	// bdz 0x823d989c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823D989C;
	// bdz 0x823d98a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823D98A4;
	// b 0x823d98ac
	goto loc_823D98AC;
loc_823D9894:
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// b 0x823d98b0
	goto loc_823D98B0;
loc_823D989C:
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// b 0x823d98b0
	goto loc_823D98B0;
loc_823D98A4:
	// stw r7,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r7.u32);
	// b 0x823d98b0
	goto loc_823D98B0;
loc_823D98AC:
	// stw r8,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r8.u32);
loc_823D98B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ce808
	ctx.lr = 0x823D98B8;
	sub_823CE808(ctx, base);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r30,r31,904
	ctx.r30.s64 = ctx.r31.s64 + 904;
	// lfs f2,14876(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// li r7,60
	ctx.r7.s64 = 60;
	// lfs f1,10376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x823c31b0
	ctx.lr = 0x823D9918;
	sub_823C31B0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f3,32(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lis r7,-32186
	ctx.r7.s64 = -2109341696;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2148(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,2864(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2864);
	// bl 0x823c31f8
	ctx.lr = 0x823D9940;
	sub_823C31F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d9190
	ctx.lr = 0x823D9948;
	sub_823D9190(ctx, base);
	// stw r28,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823D9950;
	sub_823C8DF0(ctx, base);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r3,-18192
	ctx.r11.s64 = ctx.r3.s64 + -18192;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r6,r7,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r5,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// bl 0x821eb290
	ctx.lr = 0x823D9984;
	sub_821EB290(ctx, base);
	// li r4,413
	ctx.r4.s64 = 413;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823D9990;
	sub_823CDF48(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823D999C;
	sub_823CDF48(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823D99A8;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_823D99B4"))) PPC_WEAK_FUNC(sub_823D99B4);
PPC_FUNC_IMPL(__imp__sub_823D99B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D99B8"))) PPC_WEAK_FUNC(sub_823D99B8);
PPC_FUNC_IMPL(__imp__sub_823D99B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823cd038
	sub_823CD038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D99BC"))) PPC_WEAK_FUNC(sub_823D99BC);
PPC_FUNC_IMPL(__imp__sub_823D99BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D99C0"))) PPC_WEAK_FUNC(sub_823D99C0);
PPC_FUNC_IMPL(__imp__sub_823D99C0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-17664
	ctx.r8.s64 = ctx.r11.s64 + -17664;
	// addi r7,r10,-17800
	ctx.r7.s64 = ctx.r10.s64 + -17800;
	// addi r6,r9,-17808
	ctx.r6.s64 = ctx.r9.s64 + -17808;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r11,-4760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// addi r4,r11,1964
	ctx.r4.s64 = ctx.r11.s64 + 1964;
	// bl 0x82248a40
	ctx.lr = 0x823D9A14;
	sub_82248A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3d48
	ctx.lr = 0x823D9A1C;
	sub_823C3D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d9a44
	if (!ctx.cr6.eq) goto loc_823D9A44;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d9a44
	if (!ctx.cr6.eq) goto loc_823D9A44;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c32a0
	ctx.lr = 0x823D9A3C;
	sub_823C32A0(ctx, base);
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x823d9a50
	goto loc_823D9A50;
loc_823D9A44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_823D9A50:
	// lwz r11,-4760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,1964
	ctx.r3.s64 = ctx.r11.s64 + 1964;
	// bl 0x82248a40
	ctx.lr = 0x823D9A64;
	sub_82248A40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-4760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823c8f28
	ctx.lr = 0x823D9A78;
	sub_823C8F28(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823D9A7C;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823D9A84;
	sub_823CDA98(ctx, base);
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

__attribute__((alias("__imp__sub_823D9A9C"))) PPC_WEAK_FUNC(sub_823D9A9C);
PPC_FUNC_IMPL(__imp__sub_823D9A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9AA0"))) PPC_WEAK_FUNC(sub_823D9AA0);
PPC_FUNC_IMPL(__imp__sub_823D9AA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823d9f50
	sub_823D9F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D9AA8"))) PPC_WEAK_FUNC(sub_823D9AA8);
PPC_FUNC_IMPL(__imp__sub_823D9AA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823d9f50
	sub_823D9F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D9AB0"))) PPC_WEAK_FUNC(sub_823D9AB0);
PPC_FUNC_IMPL(__imp__sub_823D9AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823D9AB8;
	sub_82248788(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r30,4658
	ctx.r11.s64 = ctx.r30.s64 + 4658;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823d9b84
	if (ctx.cr6.eq) goto loc_823D9B84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82237560
	ctx.lr = 0x823D9AE0;
	sub_82237560(ctx, base);
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r11,-4760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4760);
	// lwz r28,1964(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// bl 0x8223aa28
	ctx.lr = 0x823D9AF0;
	sub_8223AA28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82237db0
	ctx.lr = 0x823D9AFC;
	sub_82237DB0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x823d9b38
	if (ctx.cr6.lt) goto loc_823D9B38;
	// bne cr6,0x823d9b84
	if (!ctx.cr6.eq) goto loc_823D9B84;
	// lwz r11,-4760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4760);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r31,r11,1964
	ctx.r31.s64 = ctx.r11.s64 + 1964;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x823D9B24;
	sub_82248A40(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r31,18
	ctx.r31.s64 = 18;
	// b 0x823d9b5c
	goto loc_823D9B5C;
loc_823D9B38:
	// lwz r11,-4760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4760);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r31,r11,1964
	ctx.r31.s64 = ctx.r11.s64 + 1964;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x823D9B50;
	sub_82248A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// li r31,17
	ctx.r31.s64 = 17;
loc_823D9B5C:
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82248a40
	ctx.lr = 0x823D9B68;
	sub_82248A40(ctx, base);
	// stw r31,652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 652, ctx.r31.u32);
	// stw r28,800(r29)
	PPC_STORE_U32(ctx.r29.u32 + 800, ctx.r28.u32);
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// lwz r11,-28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D9B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D9B84:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823D9B8C"))) PPC_WEAK_FUNC(sub_823D9B8C);
PPC_FUNC_IMPL(__imp__sub_823D9B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9B90"))) PPC_WEAK_FUNC(sub_823D9B90);
PPC_FUNC_IMPL(__imp__sub_823D9B90) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,-4760(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// addi r11,r30,1964
	ctx.r11.s64 = ctx.r30.s64 + 1964;
	// bl 0x82237560
	ctx.lr = 0x823D9BBC;
	sub_82237560(ctx, base);
	// lwz r30,1964(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x8223aa28
	ctx.lr = 0x823D9BC4;
	sub_8223AA28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82237db0
	ctx.lr = 0x823D9BD0;
	sub_82237DB0(ctx, base);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// stw r10,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r10.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// bge cr6,0x823d9bec
	if (!ctx.cr6.lt) goto loc_823D9BEC;
	// li r11,9
	ctx.r11.s64 = 9;
loc_823D9BEC:
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823D9C04;
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

__attribute__((alias("__imp__sub_823D9C1C"))) PPC_WEAK_FUNC(sub_823D9C1C);
PPC_FUNC_IMPL(__imp__sub_823D9C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9C20"))) PPC_WEAK_FUNC(sub_823D9C20);
PPC_FUNC_IMPL(__imp__sub_823D9C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823cdb10
	ctx.lr = 0x823D9C38;
	sub_823CDB10(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-17848
	ctx.r11.s64 = ctx.r11.s64 + -17848;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x821eb290
	ctx.lr = 0x823D9C60;
	sub_821EB290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D9C74"))) PPC_WEAK_FUNC(sub_823D9C74);
PPC_FUNC_IMPL(__imp__sub_823D9C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9C78"))) PPC_WEAK_FUNC(sub_823D9C78);
PPC_FUNC_IMPL(__imp__sub_823D9C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823D9C80;
	sub_8224877C(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x823D9C98;
	sub_8218B408(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823D9CA4;
	sub_8218B408(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823D9CB4;
	sub_823C3280(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r29,r29,-28240
	ctx.r29.s64 = ctx.r29.s64 + -28240;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// ori r4,r7,37304
	ctx.r4.u64 = ctx.r7.u64 | 37304;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lfs f31,11300(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// addi r10,r3,-17848
	ctx.r10.s64 = ctx.r3.s64 + -17848;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// stwx r9,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
loc_823D9D1C:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d9d40
	if (ctx.cr6.lt) goto loc_823D9D40;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823D9D40:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d9d6c
	if (ctx.cr6.lt) goto loc_823D9D6C;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823D9D6C:
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,204(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d9dbc
	if (ctx.cr6.lt) goto loc_823D9DBC;
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r27,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r27.u32);
loc_823D9DBC:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823D9DCC;
	sub_82106F58(ctx, base);
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823d9de0
	if (!ctx.cr6.eq) goto loc_823D9DE0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_823D9DE0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// bne 0x823d9d1c
	if (!ctx.cr0.eq) goto loc_823D9D1C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823D9E84"))) PPC_WEAK_FUNC(sub_823D9E84);
PPC_FUNC_IMPL(__imp__sub_823D9E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9E88"))) PPC_WEAK_FUNC(sub_823D9E88);
PPC_FUNC_IMPL(__imp__sub_823D9E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823D9E90;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,-4760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// addi r28,r11,1964
	ctx.r28.s64 = ctx.r11.s64 + 1964;
	// lwz r11,1992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1992);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823d9f44
	if (ctx.cr6.lt) goto loc_823D9F44;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x823d9f44
	if (!ctx.cr6.lt) goto loc_823D9F44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r25,-32186
	ctx.r25.s64 = -2109341696;
	// lfs f31,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
loc_823D9ECC:
	// lwz r30,28(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,9315
	ctx.r11.s64 = ctx.r11.s64 + 9315;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwzx r29,r11,r27
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823d9f38
	if (ctx.cr6.eq) goto loc_823D9F38;
	// lwz r24,0(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8223a9f8
	ctx.lr = 0x823D9EF8;
	sub_8223A9F8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x8223b3e8
	ctx.lr = 0x823D9F0C;
	sub_8223B3E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,904
	ctx.r3.s64 = ctx.r27.s64 + 904;
	// bl 0x823c32a0
	ctx.lr = 0x823D9F18;
	sub_823C32A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,2868(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f1
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmadds f12,f0,f1,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f31.f64));
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_823D9F38:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// blt cr6,0x823d9ecc
	if (ctx.cr6.lt) goto loc_823D9ECC;
loc_823D9F44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823D9F50"))) PPC_WEAK_FUNC(sub_823D9F50);
PPC_FUNC_IMPL(__imp__sub_823D9F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823d99c0
	ctx.lr = 0x823D9F70;
	sub_823D99C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d9f8c
	if (ctx.cr6.eq) goto loc_823D9F8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823D9F88;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823D9F8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D9FA4"))) PPC_WEAK_FUNC(sub_823D9FA4);
PPC_FUNC_IMPL(__imp__sub_823D9FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9FA8"))) PPC_WEAK_FUNC(sub_823D9FA8);
PPC_FUNC_IMPL(__imp__sub_823D9FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d9c78
	ctx.lr = 0x823D9FC0;
	sub_823D9C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d9e88
	ctx.lr = 0x823D9FC8;
	sub_823D9E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823D9FD0;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D9FE4"))) PPC_WEAK_FUNC(sub_823D9FE4);
PPC_FUNC_IMPL(__imp__sub_823D9FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9FE8"))) PPC_WEAK_FUNC(sub_823D9FE8);
PPC_FUNC_IMPL(__imp__sub_823D9FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8223ad48
	ctx.lr = 0x823DA000;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823da020
	if (ctx.cr6.eq) goto loc_823DA020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d9c78
	ctx.lr = 0x823DA010;
	sub_823D9C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d9e88
	ctx.lr = 0x823DA018;
	sub_823D9E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc48
	ctx.lr = 0x823DA020;
	sub_823CDC48(ctx, base);
loc_823DA020:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DA034"))) PPC_WEAK_FUNC(sub_823DA034);
PPC_FUNC_IMPL(__imp__sub_823DA034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DA038"))) PPC_WEAK_FUNC(sub_823DA038);
PPC_FUNC_IMPL(__imp__sub_823DA038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d9c78
	ctx.lr = 0x823DA050;
	sub_823D9C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d9e88
	ctx.lr = 0x823DA058;
	sub_823D9E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdc68
	ctx.lr = 0x823DA060;
	sub_823CDC68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DA074"))) PPC_WEAK_FUNC(sub_823DA074);
PPC_FUNC_IMPL(__imp__sub_823DA074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DA078"))) PPC_WEAK_FUNC(sub_823DA078);
PPC_FUNC_IMPL(__imp__sub_823DA078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d9c78
	ctx.lr = 0x823DA090;
	sub_823D9C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d9e88
	ctx.lr = 0x823DA098;
	sub_823D9E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdcc0
	ctx.lr = 0x823DA0A0;
	sub_823CDCC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DA0B4"))) PPC_WEAK_FUNC(sub_823DA0B4);
PPC_FUNC_IMPL(__imp__sub_823DA0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DA0B8"))) PPC_WEAK_FUNC(sub_823DA0B8);
PPC_FUNC_IMPL(__imp__sub_823DA0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823d9c78
	ctx.lr = 0x823DA0D0;
	sub_823D9C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d9e88
	ctx.lr = 0x823DA0D8;
	sub_823D9E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fbd40
	ctx.lr = 0x823DA0E0;
	sub_823FBD40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DA0F4"))) PPC_WEAK_FUNC(sub_823DA0F4);
PPC_FUNC_IMPL(__imp__sub_823DA0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DA0F8"))) PPC_WEAK_FUNC(sub_823DA0F8);
PPC_FUNC_IMPL(__imp__sub_823DA0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823DA100;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-4760(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823da568
	if (ctx.cr6.eq) goto loc_823DA568;
	// lwz r10,848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,17108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17108, ctx.r29.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,17252(r7)
	PPC_STORE_U32(ctx.r7.u32 + 17252, ctx.r11.u32);
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,17396(r5)
	PPC_STORE_U32(ctx.r5.u32 + 17396, ctx.r11.u32);
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,17540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17540, ctx.r11.u32);
	// lwz r4,1964(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x823c8fa0
	ctx.lr = 0x823DA160;
	sub_823C8FA0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r8,40412
	ctx.r7.u64 = ctx.r8.u64 | 40412;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r3,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r3,1964(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x823e97f0
	ctx.lr = 0x823DA17C;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,415
	ctx.r4.s64 = 415;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DA190;
	sub_82106F58(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,414
	ctx.r4.s64 = 414;
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DA1A0;
	sub_82106F58(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x823DA1A4;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822368b0
	ctx.lr = 0x823DA1B4;
	sub_822368B0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82236510
	ctx.lr = 0x823DA1C8;
	sub_82236510(ctx, base);
	// lwz r28,1972(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823DA1D4;
	sub_82163DF0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82164d80
	ctx.lr = 0x823DA1DC;
	sub_82164D80(ctx, base);
	// lwz r5,848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r29,31172(r4)
	PPC_STORE_U32(ctx.r4.u32 + 31172, ctx.r29.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,31428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31428, ctx.r29.u32);
	// bl 0x8218b408
	ctx.lr = 0x823DA200;
	sub_8218B408(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f31,11300(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,31432(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 31432, temp.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,31436(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 31436, temp.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,31440(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 31440, temp.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,31684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31684, ctx.r29.u32);
	// lwz r5,1968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r4,1964(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// bl 0x823c9120
	ctx.lr = 0x823DA298;
	sub_823C9120(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r4,124
	ctx.r4.s64 = 124;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r3,31708(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31708, ctx.r3.u32);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r29,31940(r6)
	PPC_STORE_U32(ctx.r6.u32 + 31940, ctx.r29.u32);
	// lwz r5,52(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106f58
	ctx.lr = 0x823DA2C0;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1972(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// bl 0x823cd3e0
	ctx.lr = 0x823DA2CC;
	sub_823CD3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,35
	ctx.r3.s64 = 35;
	// bne cr6,0x823da2dc
	if (!ctx.cr6.eq) goto loc_823DA2DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DA2DC:
	// bl 0x8218b408
	ctx.lr = 0x823DA2E0;
	sub_8218B408(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,-32177
	ctx.r7.s64 = -2108751872;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// addi r28,r7,-4548
	ctx.r28.s64 = ctx.r7.s64 + -4548;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// addi r25,r9,26232
	ctx.r25.s64 = ctx.r9.s64 + 26232;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,31944(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 31944, temp.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,31948(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 31948, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,31952(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 31952, temp.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r29,32196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32196, ctx.r29.u32);
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r29,32452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32452, ctx.r29.u32);
	// lhz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x8218a5f0
	ctx.lr = 0x823DA390;
	sub_8218A5F0(ctx, base);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r9,r28,16
	ctx.r9.s64 = ctx.r28.s64 + 16;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,32472(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32472, ctx.r9.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r29,32492(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32492, ctx.r29.u32);
	// lhz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823DA3B0;
	sub_822121D8(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f2,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,32456(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32456, temp.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,32460(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32460, temp.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,32464(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32464, temp.u32);
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r29,32708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32708, ctx.r29.u32);
	// lhz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823DA434;
	sub_822121D8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r6,r9,32964
	ctx.r6.u64 = ctx.r9.u64 | 32964;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfd f4,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,32712(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32712, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,32716(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32716, temp.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,32720(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32720, temp.u32);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
	// lbz r4,32(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// bl 0x823c93f0
	ctx.lr = 0x823DA4C8;
	sub_823C93F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r8,0
	ctx.r8.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ori r6,r8,32988
	ctx.r6.u64 = ctx.r8.u64 | 32988;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r7,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r6,1984(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1984);
	// bl 0x8218a5f0
	ctx.lr = 0x823DA4F4;
	sub_8218A5F0(ctx, base);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r8,r10,41944
	ctx.r8.u64 = ctx.r10.u64 | 41944;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ori r11,r7,41964
	ctx.r11.u64 = ctx.r7.u64 | 41964;
	// addi r6,r28,8
	ctx.r6.s64 = ctx.r28.s64 + 8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r6,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r29,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,1980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1980);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8218a5f0
	ctx.lr = 0x823DA534;
	sub_8218A5F0(ctx, base);
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r8,41432
	ctx.r6.u64 = ctx.r8.u64 | 41432;
	// ori r5,r7,41452
	ctx.r5.u64 = ctx.r7.u64 | 41452;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r28.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r29,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r29.u32);
	// bl 0x823d9c78
	ctx.lr = 0x823DA560;
	sub_823D9C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d9e88
	ctx.lr = 0x823DA568;
	sub_823D9E88(ctx, base);
loc_823DA568:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823DA574"))) PPC_WEAK_FUNC(sub_823DA574);
PPC_FUNC_IMPL(__imp__sub_823DA574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DA578"))) PPC_WEAK_FUNC(sub_823DA578);
PPC_FUNC_IMPL(__imp__sub_823DA578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823DA580;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823cd7e8
	ctx.lr = 0x823DA58C;
	sub_823CD7E8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r29,r29,-28244
	ctx.r29.s64 = ctx.r29.s64 + -28244;
	// lwz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,-17664
	ctx.r8.s64 = ctx.r8.s64 + -17664;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// addi r7,r7,-17800
	ctx.r7.s64 = ctx.r7.s64 + -17800;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r6,-17808
	ctx.r6.s64 = ctx.r6.s64 + -17808;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r8,148
	ctx.r8.s64 = 148;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// lwz r27,-4760(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4760);
	// stw r8,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r8.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// bl 0x82237560
	ctx.lr = 0x823DA624;
	sub_82237560(ctx, base);
	// lwz r26,1964(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1964);
	// bl 0x8223aa28
	ctx.lr = 0x823DA62C;
	sub_8223AA28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82237db0
	ctx.lr = 0x823DA638;
	sub_82237DB0(ctx, base);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823da64c
	if (!ctx.cr6.eq) goto loc_823DA64C;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x823da668
	goto loc_823DA668;
loc_823DA64C:
	// lwz r29,1964(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1964);
	// bl 0x8223a960
	ctx.lr = 0x823DA654;
	sub_8223A960(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822363c8
	ctx.lr = 0x823DA660;
	sub_822363C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823da674
	if (!ctx.cr6.eq) goto loc_823DA674;
loc_823DA668:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37300
	ctx.r10.u64 = ctx.r11.u64 | 37300;
	// stwx r28,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
loc_823DA674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ce808
	ctx.lr = 0x823DA67C;
	sub_823CE808(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r31,904
	ctx.r29.s64 = ctx.r31.s64 + 904;
	// li r7,60
	ctx.r7.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823DA6A0;
	sub_823C31B0(ctx, base);
	// lis r9,-32186
	ctx.r9.s64 = -2109341696;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f3,1996(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,2864(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	// lfs f2,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31f8
	ctx.lr = 0x823DA6C8;
	sub_823C31F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da0f8
	ctx.lr = 0x823DA6D0;
	sub_823DA0F8(ctx, base);
	// stw r28,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823DA6D8;
	sub_823C8DF0(ctx, base);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r5,-17848
	ctx.r11.s64 = ctx.r5.s64 + -17848;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x821eb290
	ctx.lr = 0x823DA700;
	sub_821EB290(ctx, base);
	// li r4,413
	ctx.r4.s64 = 413;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823DA70C;
	sub_823CDF48(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823DA718;
	sub_823CDF48(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823DA724;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823DA730"))) PPC_WEAK_FUNC(sub_823DA730);
PPC_FUNC_IMPL(__imp__sub_823DA730) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,-28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r10,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, ctx.r10.u32);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwz r7,28(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r8,652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 652, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823DA758"))) PPC_WEAK_FUNC(sub_823DA758);
PPC_FUNC_IMPL(__imp__sub_823DA758) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x823da774
	if (!ctx.cr6.lt) goto loc_823DA774;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,37340
	ctx.r9.u64 = ctx.r10.u64 | 37340;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
loc_823DA774:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37336
	ctx.r10.u64 = ctx.r11.u64 | 37336;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823da798
	if (!ctx.cr6.gt) goto loc_823DA798;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,37340
	ctx.r9.u64 = ctx.r10.u64 | 37340;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
loc_823DA798:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37340
	ctx.r10.u64 = ctx.r11.u64 | 37340;
	// stwx r4,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DA7A8"))) PPC_WEAK_FUNC(sub_823DA7A8);
PPC_FUNC_IMPL(__imp__sub_823DA7A8) {
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
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-17312
	ctx.r8.s64 = ctx.r11.s64 + -17312;
	// addi r5,r9,-17456
	ctx.r5.s64 = ctx.r9.s64 + -17456;
	// addi r7,r10,-17448
	ctx.r7.s64 = ctx.r10.s64 + -17448;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// lwz r3,-4760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4760);
	// bl 0x823c8f28
	ctx.lr = 0x823DA7F8;
	sub_823C8F28(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823DA7FC;
	sub_823C8E50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x823DA804;
	sub_823CA688(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,37324
	ctx.r9.u64 = ctx.r11.u64 | 37324;
	// ori r8,r10,37316
	ctx.r8.u64 = ctx.r10.u64 | 37316;
	// lis r7,-32177
	ctx.r7.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r11,-4752(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823ca5c8
	ctx.lr = 0x823DA840;
	sub_823CA5C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cda98
	ctx.lr = 0x823DA848;
	sub_823CDA98(ctx, base);
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

__attribute__((alias("__imp__sub_823DA85C"))) PPC_WEAK_FUNC(sub_823DA85C);
PPC_FUNC_IMPL(__imp__sub_823DA85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DA860"))) PPC_WEAK_FUNC(sub_823DA860);
PPC_FUNC_IMPL(__imp__sub_823DA860) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823db950
	sub_823DB950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DA868"))) PPC_WEAK_FUNC(sub_823DA868);
PPC_FUNC_IMPL(__imp__sub_823DA868) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823db950
	sub_823DB950(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DA870"))) PPC_WEAK_FUNC(sub_823DA870);
PPC_FUNC_IMPL(__imp__sub_823DA870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823DA878;
	sub_8224877C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,28(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823DA888;
	sub_82163DF0(ctx, base);
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28244
	ctx.r30.s64 = ctx.r30.s64 + -28244;
	// addi r28,r28,-28248
	ctx.r28.s64 = ctx.r28.s64 + -28248;
	// lwz r11,-8540(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8540);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x820c79c8
	ctx.lr = 0x823DA8B8;
	sub_820C79C8(ctx, base);
	// lwz r25,0(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8223a960
	ctx.lr = 0x823DA8C8;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x822368d8
	ctx.lr = 0x823DA8D8;
	sub_822368D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x823daa28
	if (ctx.cr6.eq) goto loc_823DAA28;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x823dab2c
	if (!ctx.cr6.eq) goto loc_823DAB2C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x823DA8F4;
	sub_821EBB58(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r10,30227
	ctx.r10.s64 = 30227;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r8,-28376
	ctx.r8.s64 = ctx.r8.s64 + -28376;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823DA934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29656
	ctx.r3.s64 = ctx.r3.s64 + -29656;
	// bl 0x8218a128
	ctx.lr = 0x823DA948;
	sub_8218A128(ctx, base);
	// lwz r11,-8540(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8540);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// lwz r5,1648(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1648);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// bctrl 
	ctx.lr = 0x823DA970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r8,3708
	ctx.r5.s64 = ctx.r8.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29528
	ctx.r3.s64 = ctx.r3.s64 + -29528;
	// bl 0x8218a5f0
	ctx.lr = 0x823DA98C;
	sub_8218A5F0(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r7,37312
	ctx.r5.u64 = ctx.r7.u64 | 37312;
	// ori r11,r6,37308
	ctx.r11.u64 = ctx.r6.u64 | 37308;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r9,r31,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x820c77c0
	ctx.lr = 0x823DA9B4;
	sub_820C77C0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r28,r8,26232
	ctx.r28.s64 = ctx.r8.s64 + 26232;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29400
	ctx.r3.s64 = ctx.r3.s64 + -29400;
	// bl 0x8218a5f0
	ctx.lr = 0x823DA9D8;
	sub_8218A5F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82165128
	ctx.lr = 0x823DA9E4;
	sub_82165128(ctx, base);
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29272
	ctx.r3.s64 = ctx.r3.s64 + -29272;
	// subf r6,r30,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r30.s64;
	// bl 0x8218a5f0
	ctx.lr = 0x823DAA00;
	sub_8218A5F0(ctx, base);
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,148(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823DAA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,-784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -784);
	// b 0x823dab14
	goto loc_823DAB14;
loc_823DAA28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x823DAA30;
	sub_821EBB58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,30226
	ctx.r10.s64 = 30226;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r8,-28376
	ctx.r8.s64 = ctx.r8.s64 + -28376;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r3,-4904(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4904);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823DAA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29656
	ctx.r3.s64 = ctx.r3.s64 + -29656;
	// bl 0x8218a128
	ctx.lr = 0x823DAA84;
	sub_8218A128(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r11,r4,37340
	ctx.r11.u64 = ctx.r4.u64 | 37340;
	// ori r10,r3,37336
	ctx.r10.u64 = ctx.r3.u64 | 37336;
	// addi r30,r31,-28
	ctx.r30.s64 = ctx.r31.s64 + -28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// subf r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bl 0x820c7648
	ctx.lr = 0x823DAAAC;
	sub_820C7648(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29528
	ctx.r3.s64 = ctx.r3.s64 + -29528;
	// bl 0x82084038
	ctx.lr = 0x823DAACC;
	sub_82084038(ctx, base);
	// lwz r5,92(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// subf r11,r28,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r28.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29400
	ctx.r3.s64 = ctx.r3.s64 + -29400;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// bl 0x82084038
	ctx.lr = 0x823DAAF0;
	sub_82084038(ctx, base);
	// lwz r10,-28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823DAB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lwz r11,-784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -784);
loc_823DAB14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823dab2c
	if (ctx.cr6.eq) goto loc_823DAB2C;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// rlwinm r8,r9,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
loc_823DAB2C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823DAB34"))) PPC_WEAK_FUNC(sub_823DAB34);
PPC_FUNC_IMPL(__imp__sub_823DAB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DAB38"))) PPC_WEAK_FUNC(sub_823DAB38);
PPC_FUNC_IMPL(__imp__sub_823DAB38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,4658
	ctx.r11.s64 = ctx.r11.s64 + 4658;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823dab58
	if (!ctx.cr6.eq) goto loc_823DAB58;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823DAB58:
	// b 0x823cd040
	sub_823CD040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DAB5C"))) PPC_WEAK_FUNC(sub_823DAB5C);
PPC_FUNC_IMPL(__imp__sub_823DAB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DAB60"))) PPC_WEAK_FUNC(sub_823DAB60);
PPC_FUNC_IMPL(__imp__sub_823DAB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r11,-23400
	ctx.r11.s64 = ctx.r11.s64 + -23400;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823dab9c
	if (!ctx.cr6.eq) goto loc_823DAB9C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823dabb0
	if (ctx.cr6.eq) goto loc_823DABB0;
loc_823DAB9C:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823dabb0
	if (ctx.cr6.eq) goto loc_823DABB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823DABB0:
	// b 0x823cd040
	sub_823CD040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DABB4"))) PPC_WEAK_FUNC(sub_823DABB4);
PPC_FUNC_IMPL(__imp__sub_823DABB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DABB8"))) PPC_WEAK_FUNC(sub_823DABB8);
PPC_FUNC_IMPL(__imp__sub_823DABB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823DABC0;
	sub_82248768(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8218b408
	ctx.lr = 0x823DABD8;
	sub_8218B408(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823DABE4;
	sub_8218B408(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x823c3280
	ctx.lr = 0x823DABF4;
	sub_823C3280(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,0
	ctx.r8.s64 = 0;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// addi r9,r30,-2
	ctx.r9.s64 = ctx.r30.s64 + -2;
	// lfs f31,11300(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r3,r8,37304
	ctx.r3.u64 = ctx.r8.u64 | 37304;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r4,r10
	ctx.r4.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// ori r7,r7,37312
	ctx.r7.u64 = ctx.r7.u64 | 37312;
	// addi r11,r11,-28240
	ctx.r11.s64 = ctx.r11.s64 + -28240;
	// cntlzw r5,r30
	ctx.r5.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// addi r9,r6,-17504
	ctx.r9.s64 = ctx.r6.s64 + -17504;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// stwx r4,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r22,0
	ctx.r22.s64 = 0;
loc_823DAC74:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823dac98
	if (ctx.cr6.lt) goto loc_823DAC98;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r8.u32);
loc_823DAC98:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823dacc4
	if (ctx.cr6.lt) goto loc_823DACC4;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r5.u32);
loc_823DACC4:
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,200(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,204(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823dad14
	if (ctx.cr6.lt) goto loc_823DAD14;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r22,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r22.u32);
loc_823DAD14:
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823dad28
	if (!ctx.cr6.eq) goto loc_823DAD28;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_823DAD28:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// lwzu r11,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f10,200(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f6,204(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f2,208(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// bdnz 0x823dac74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DAC74;
	// bl 0x82163df0
	ctx.lr = 0x823DADB8;
	sub_82163DF0(ctx, base);
	// addis r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r24,r24,-28212
	ctx.r24.s64 = ctx.r24.s64 + -28212;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82164d80
	ctx.lr = 0x823DADCC;
	sub_82164D80(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// ori r9,r10,37320
	ctx.r9.u64 = ctx.r10.u64 | 37320;
	// addi r23,r23,-28220
	ctx.r23.s64 = ctx.r23.s64 + -28220;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// lwzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x820c79c8
	ctx.lr = 0x823DADFC;
	sub_820C79C8(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r30,r11,-4524
	ctx.r30.s64 = ctx.r11.s64 + -4524;
	// ori r6,r7,46788
	ctx.r6.u64 = ctx.r7.u64 | 46788;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r5,r10,26232
	ctx.r5.s64 = ctx.r10.s64 + 26232;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r22,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r22.u32);
	// lhz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// bl 0x8218a5f0
	ctx.lr = 0x823DAE34;
	sub_8218A5F0(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r9,46808
	ctx.r6.u64 = ctx.r9.u64 | 46808;
	// ori r5,r7,46828
	ctx.r5.u64 = ctx.r7.u64 | 46828;
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r30,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r30.u32);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r22,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r22.u32);
	// lhz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823DAE60;
	sub_822121D8(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r7,r9,46796
	ctx.r7.u64 = ctx.r9.u64 | 46796;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// ori r8,r10,46792
	ctx.r8.u64 = ctx.r10.u64 | 46792;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r6,r5,46800
	ctx.r6.u64 = ctx.r5.u64 | 46800;
	// ori r5,r10,47044
	ctx.r5.u64 = ctx.r10.u64 | 47044;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r4,r8
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, temp.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r4,r7
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, temp.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r4,r6
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r22,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r22.u32);
	// lhz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// bl 0x822121d8
	ctx.lr = 0x823DAF04;
	sub_822121D8(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r6,r8,47048
	ctx.r6.u64 = ctx.r8.u64 | 47048;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// ori r11,r7,47052
	ctx.r11.u64 = ctx.r7.u64 | 47052;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f2,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r28,8(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// ori r8,r7,47056
	ctx.r8.u64 = ctx.r7.u64 | 47056;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r29,r29,-28196
	ctx.r29.s64 = ctx.r29.s64 + -28196;
	// addi r5,r7,31108
	ctx.r5.s64 = ctx.r7.s64 + 31108;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// li r4,8
	ctx.r4.s64 = 8;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r28,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r6.u32, temp.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfsx f9,r6,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfsx f5,r11,r8
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8218a5f0
	ctx.lr = 0x823DAFB0;
	sub_8218A5F0(ctx, base);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r7,42712
	ctx.r5.u64 = ctx.r7.u64 | 42712;
	// ori r4,r6,42732
	ctx.r4.u64 = ctx.r6.u64 | 42732;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stwx r3,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r22,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r22.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822121d8
	ctx.lr = 0x823DAFE0;
	sub_822121D8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r11,r6,42700
	ctx.r11.u64 = ctx.r6.u64 | 42700;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// ori r5,r7,42696
	ctx.r5.u64 = ctx.r7.u64 | 42696;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f4,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// ori r7,r4,42704
	ctx.r7.u64 = ctx.r4.u64 | 42704;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r25,r25,-28200
	ctx.r25.s64 = ctx.r25.s64 + -28200;
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsx f1,r10,r5
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r5,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r5,r7
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// bl 0x820c7648
	ctx.lr = 0x823DB088;
	sub_820C7648(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ori r8,r10,37300
	ctx.r8.u64 = ctx.r10.u64 | 37300;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82084038
	ctx.lr = 0x823DB0B8;
	sub_82084038(ctx, base);
	// lwz r4,848(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r8,r30,24
	ctx.r8.s64 = ctx.r30.s64 + 24;
	// ori r7,r9,42968
	ctx.r7.u64 = ctx.r9.u64 | 42968;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ori r5,r6,42988
	ctx.r5.u64 = ctx.r6.u64 | 42988;
	// stwx r8,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r22,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r22.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x823db0f0
	if (!ctx.cr6.eq) goto loc_823DB0F0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823DB0F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ori r5,r9,42952
	ctx.r5.u64 = ctx.r9.u64 | 42952;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ori r4,r7,42956
	ctx.r4.u64 = ctx.r7.u64 | 42956;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ori r9,r3,42960
	ctx.r9.u64 = ctx.r3.u64 | 42960;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r10,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r6,r4
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r4,r9
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, temp.u32);
	// bne cr6,0x823db188
	if (!ctx.cr6.eq) goto loc_823DB188;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823DB188:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ori r5,r9,41928
	ctx.r5.u64 = ctx.r9.u64 | 41928;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// ori r10,r7,41932
	ctx.r10.u64 = ctx.r7.u64 | 41932;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r6,r7,41936
	ctx.r6.u64 = ctx.r7.u64 | 41936;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r9,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r5,r10
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r11,r6
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bl 0x820c77c0
	ctx.lr = 0x823DB228;
	sub_820C77C0(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r6,r7,37308
	ctx.r6.u64 = ctx.r7.u64 | 37308;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r5,r31,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82165128
	ctx.lr = 0x823DB24C;
	sub_82165128(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// addi r5,r9,-24992
	ctx.r5.s64 = ctx.r9.s64 + -24992;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// bl 0x8218a5f0
	ctx.lr = 0x823DB26C;
	sub_8218A5F0(ctx, base);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// ori r6,r8,43224
	ctx.r6.u64 = ctx.r8.u64 | 43224;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ori r4,r5,43244
	ctx.r4.u64 = ctx.r5.u64 | 43244;
	// stwx r7,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r22,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r22.u32);
	// bne cr6,0x823db2a4
	if (!ctx.cr6.eq) goto loc_823DB2A4;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823DB2A4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ori r5,r9,43208
	ctx.r5.u64 = ctx.r9.u64 | 43208;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ori r4,r7,43212
	ctx.r4.u64 = ctx.r7.u64 | 43212;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ori r9,r3,43216
	ctx.r9.u64 = ctx.r3.u64 | 43216;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r10,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r6,r4
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r4,r9
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, temp.u32);
	// bne cr6,0x823db33c
	if (!ctx.cr6.eq) goto loc_823DB33C;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823DB33C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ori r5,r9,42184
	ctx.r5.u64 = ctx.r9.u64 | 42184;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// ori r4,r7,42188
	ctx.r4.u64 = ctx.r7.u64 | 42188;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ori r9,r3,42192
	ctx.r9.u64 = ctx.r3.u64 | 42192;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r10,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r6,r4
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r3,r9
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, temp.u32);
	// bne cr6,0x823db3d4
	if (!ctx.cr6.eq) goto loc_823DB3D4;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823DB3D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ori r5,r9,42440
	ctx.r5.u64 = ctx.r9.u64 | 42440;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r4,r7,42444
	ctx.r4.u64 = ctx.r7.u64 | 42444;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// ori r7,r10,42448
	ctx.r7.u64 = ctx.r10.u64 | 42448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r9,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r5,r4
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r8,r7
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x823cd3e0
	ctx.lr = 0x823DB468;
	sub_823CD3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,35
	ctx.r3.s64 = 35;
	// bne cr6,0x823db478
	if (!ctx.cr6.eq) goto loc_823DB478;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DB478:
	// bl 0x8218b408
	ctx.lr = 0x823DB47C;
	sub_8218B408(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// ori r6,r10,46280
	ctx.r6.u64 = ctx.r10.u64 | 46280;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r5,r8,46284
	ctx.r5.u64 = ctx.r8.u64 | 46284;
	// ori r8,r4,46288
	ctx.r8.u64 = ctx.r4.u64 | 46288;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r11,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfsx f7,r7,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfsx f3,r11,r8
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r11,-4760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4760);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82163e58
	ctx.lr = 0x823DB518;
	sub_82163E58(ctx, base);
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82163d90
	ctx.lr = 0x823DB520;
	sub_82163D90(ctx, base);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// subf r6,r8,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r8.s64;
	// addi r5,r7,-19856
	ctx.r5.s64 = ctx.r7.s64 + -19856;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8218a5f0
	ctx.lr = 0x823DB548;
	sub_8218A5F0(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// cntlzw r4,r29
	ctx.r4.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// ori r3,r6,47812
	ctx.r3.u64 = ctx.r6.u64 | 47812;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// ori r8,r10,47832
	ctx.r8.u64 = ctx.r10.u64 | 47832;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r7,r9,47852
	ctx.r7.u64 = ctx.r9.u64 | 47852;
	// ori r9,r10,47556
	ctx.r9.u64 = ctx.r10.u64 | 47556;
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r5,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r22,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r22.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r11,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823DB5AC"))) PPC_WEAK_FUNC(sub_823DB5AC);
PPC_FUNC_IMPL(__imp__sub_823DB5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DB5B0"))) PPC_WEAK_FUNC(sub_823DB5B0);
PPC_FUNC_IMPL(__imp__sub_823DB5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823DB5B8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823DB5C4;
	sub_82163DF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,37324
	ctx.r10.u64 = ctx.r11.u64 | 37324;
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82164d80
	ctx.lr = 0x823DB5D8;
	sub_82164D80(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r8,37320
	ctx.r6.u64 = ctx.r8.u64 | 37320;
	// ori r5,r7,37316
	ctx.r5.u64 = ctx.r7.u64 | 37316;
	// lwz r11,-8540(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8540);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// bl 0x820c79c8
	ctx.lr = 0x823DB604;
	sub_820C79C8(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-28196
	ctx.r29.s64 = ctx.r29.s64 + -28196;
	// addi r28,r28,-28200
	ctx.r28.s64 = ctx.r28.s64 + -28200;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subf r4,r4,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r26,r9,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x820c7648
	ctx.lr = 0x823DB634;
	sub_820C7648(ctx, base);
	// lwz r8,92(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x823db64c
	if (ctx.cr6.gt) goto loc_823DB64C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823db650
	if (ctx.cr6.eq) goto loc_823DB650;
loc_823DB64C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823DB650:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r7,r10,37300
	ctx.r7.u64 = ctx.r10.u64 | 37300;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x820c77c0
	ctx.lr = 0x823DB674;
	sub_820C77C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82165128
	ctx.lr = 0x823DB684;
	sub_82165128(ctx, base);
	// lhz r6,2(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x823db69c
	if (ctx.cr6.gt) goto loc_823DB69C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823db6a0
	if (ctx.cr6.eq) goto loc_823DB6A0;
loc_823DB69C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823DB6A0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,37308
	ctx.r9.u64 = ctx.r10.u64 | 37308;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823DB6B4"))) PPC_WEAK_FUNC(sub_823DB6B4);
PPC_FUNC_IMPL(__imp__sub_823DB6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DB6B8"))) PPC_WEAK_FUNC(sub_823DB6B8);
PPC_FUNC_IMPL(__imp__sub_823DB6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823DB6C0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,37332
	ctx.r8.u64 = ctx.r11.u64 | 37332;
	// ori r29,r9,44484
	ctx.r29.u64 = ctx.r9.u64 | 44484;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r30,r7,44740
	ctx.r30.u64 = ctx.r7.u64 | 44740;
	// stwx r4,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r4.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r5,r29
	PPC_STORE_U32(ctx.r5.u32 + ctx.r29.u32, ctx.r11.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r8,r6,44996
	ctx.r8.u64 = ctx.r6.u64 | 44996;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u32);
	// ori r5,r7,43460
	ctx.r5.u64 = ctx.r7.u64 | 43460;
	// ori r3,r3,45252
	ctx.r3.u64 = ctx.r3.u64 | 45252;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// ori r9,r7,43972
	ctx.r9.u64 = ctx.r7.u64 | 43972;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ori r6,r6,43716
	ctx.r6.u64 = ctx.r6.u64 | 43716;
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r27,848(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
	// lwz r27,8(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// ori r7,r10,44228
	ctx.r7.u64 = ctx.r10.u64 | 44228;
	// stwx r11,r27,r5
	PPC_STORE_U32(ctx.r27.u32 + ctx.r5.u32, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r27,848(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// lwz r27,8(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stwx r11,r27,r6
	PPC_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r27,848(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r27,8(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stwx r11,r27,r9
	PPC_STORE_U32(ctx.r27.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r27,848(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r27,8(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stwx r11,r27,r7
	PPC_STORE_U32(ctx.r27.u32 + ctx.r7.u32, ctx.r11.u32);
	// bgt cr6,0x823db880
	if (ctx.cr6.gt) goto loc_823DB880;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823db7d4
	// bdzf 4*cr6+eq,0x823db7f0
	// bdzf 4*cr6+eq,0x823db81c
	// bne cr6,0x823db848
	if (!ctx.cr6.eq) goto loc_823DB848;
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r4,685
	ctx.r4.s64 = 685;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r10,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r10.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106eb0
	ctx.lr = 0x823DB7CC;
	sub_82106EB0(ctx, base);
	// li r4,681
	ctx.r4.s64 = 681;
	// b 0x823db870
	goto loc_823DB870;
loc_823DB7D4:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r6,848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r10,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x823db880
	goto loc_823DB880;
loc_823DB7F0:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r4,688
	ctx.r4.s64 = 688;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r7,848(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r10,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106eb0
	ctx.lr = 0x823DB814;
	sub_82106EB0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x823db880
	goto loc_823DB880;
loc_823DB81C:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r4,684
	ctx.r4.s64 = 684;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r10,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106eb0
	ctx.lr = 0x823DB840;
	sub_82106EB0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x823db880
	goto loc_823DB880;
loc_823DB848:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// li r4,686
	ctx.r4.s64 = 686;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r10,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r10,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106eb0
	ctx.lr = 0x823DB86C;
	sub_82106EB0(ctx, base);
	// li r4,682
	ctx.r4.s64 = 682;
loc_823DB870:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// bl 0x82106eb0
	ctx.lr = 0x823DB87C;
	sub_82106EB0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_823DB880:
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// li r30,2
	ctx.r30.s64 = 2;
loc_823DB888:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823db898
	if (ctx.cr6.eq) goto loc_823DB898;
	// bl 0x821d38e8
	ctx.lr = 0x823DB898;
	sub_821D38E8(ctx, base);
loc_823DB898:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x823db888
	if (!ctx.cr0.eq) goto loc_823DB888;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823DB8AC"))) PPC_WEAK_FUNC(sub_823DB8AC);
PPC_FUNC_IMPL(__imp__sub_823DB8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

