#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823EC978"))) PPC_WEAK_FUNC(sub_823EC978);
PPC_FUNC_IMPL(__imp__sub_823EC978) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2508
	ctx.r11.s64 = ctx.r4.s64 + 2508;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823EC9A0"))) PPC_WEAK_FUNC(sub_823EC9A0);
PPC_FUNC_IMPL(__imp__sub_823EC9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,2508
	ctx.r11.s64 = ctx.r4.s64 + 2508;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r8,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823EC9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x823eca04
	if (ctx.cr6.eq) goto loc_823ECA04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EC9F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x823eca08
	if (!ctx.cr6.eq) goto loc_823ECA08;
loc_823ECA04:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823ECA08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ECA1C"))) PPC_WEAK_FUNC(sub_823ECA1C);
PPC_FUNC_IMPL(__imp__sub_823ECA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ECA20"))) PPC_WEAK_FUNC(sub_823ECA20);
PPC_FUNC_IMPL(__imp__sub_823ECA20) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2508
	ctx.r11.s64 = ctx.r4.s64 + 2508;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ECA3C"))) PPC_WEAK_FUNC(sub_823ECA3C);
PPC_FUNC_IMPL(__imp__sub_823ECA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ECA40"))) PPC_WEAK_FUNC(sub_823ECA40);
PPC_FUNC_IMPL(__imp__sub_823ECA40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82403ab0
	sub_82403AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ECA48"))) PPC_WEAK_FUNC(sub_823ECA48);
PPC_FUNC_IMPL(__imp__sub_823ECA48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82403b58
	sub_82403B58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ECA50"))) PPC_WEAK_FUNC(sub_823ECA50);
PPC_FUNC_IMPL(__imp__sub_823ECA50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82403bf8
	sub_82403BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ECA58"))) PPC_WEAK_FUNC(sub_823ECA58);
PPC_FUNC_IMPL(__imp__sub_823ECA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82403830
	sub_82403830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ECA60"))) PPC_WEAK_FUNC(sub_823ECA60);
PPC_FUNC_IMPL(__imp__sub_823ECA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82403f60
	ctx.lr = 0x823ECA7C;
	sub_82403F60(ctx, base);
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

__attribute__((alias("__imp__sub_823ECA94"))) PPC_WEAK_FUNC(sub_823ECA94);
PPC_FUNC_IMPL(__imp__sub_823ECA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ECA98"))) PPC_WEAK_FUNC(sub_823ECA98);
PPC_FUNC_IMPL(__imp__sub_823ECA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82403fc8
	ctx.lr = 0x823ECAB4;
	sub_82403FC8(ctx, base);
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

__attribute__((alias("__imp__sub_823ECACC"))) PPC_WEAK_FUNC(sub_823ECACC);
PPC_FUNC_IMPL(__imp__sub_823ECACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ECAD0"))) PPC_WEAK_FUNC(sub_823ECAD0);
PPC_FUNC_IMPL(__imp__sub_823ECAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,-4308(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4308);
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823ECB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ECB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a448
	ctx.lr = 0x823ECB40;
	sub_8218A448(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ECB58"))) PPC_WEAK_FUNC(sub_823ECB58);
PPC_FUNC_IMPL(__imp__sub_823ECB58) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,-4308(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4308);
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823ECB98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ECBBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823ecbcc
	if (!ctx.cr6.gt) goto loc_823ECBCC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823ecbe0
	goto loc_823ECBE0;
loc_823ECBCC:
	// subfc r11,r3,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// eqv r10,r3,r30
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
loc_823ECBE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ECBF8"))) PPC_WEAK_FUNC(sub_823ECBF8);
PPC_FUNC_IMPL(__imp__sub_823ECBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823ECC00;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x823ECC14;
	sub_82185740(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-13272
	ctx.r10.s64 = ctx.r11.s64 + -13272;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r29,r31,12036
	ctx.r29.s64 = ctx.r31.s64 + 12036;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,12032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12032, ctx.r30.u32);
	// bl 0x8217f408
	ctx.lr = 0x823ECC44;
	sub_8217F408(ctx, base);
	// stw r30,12052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12052, ctx.r30.u32);
	// stw r30,12056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12056, ctx.r30.u32);
	// li r4,8000
	ctx.r4.s64 = 8000;
	// stw r30,12060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12060, ctx.r30.u32);
	// addi r3,r31,2032
	ctx.r3.s64 = ctx.r31.s64 + 2032;
	// bl 0x822aa648
	ctx.lr = 0x823ECC5C;
	sub_822AA648(ctx, base);
	// li r4,2000
	ctx.r4.s64 = 2000;
	// addi r3,r31,10032
	ctx.r3.s64 = ctx.r31.s64 + 10032;
	// bl 0x822aa648
	ctx.lr = 0x823ECC68;
	sub_822AA648(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x823ECC74;
	sub_822AA648(ctx, base);
	// li r4,2000
	ctx.r4.s64 = 2000;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x822aa648
	ctx.lr = 0x823ECC80;
	sub_822AA648(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x823ECC84;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x823ECC8C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823ECC98;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x823ECC9C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823eccb4
	if (ctx.cr6.eq) goto loc_823ECCB4;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82183448
	ctx.lr = 0x823ECCB0;
	sub_82183448(ctx, base);
	// b 0x823eccbc
	goto loc_823ECCBC;
loc_823ECCB4:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x823ECCBC;
	sub_821845A0(ctx, base);
loc_823ECCBC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ecccc
	if (ctx.cr6.eq) goto loc_823ECCCC;
	// bl 0x824037d0
	ctx.lr = 0x823ECCC8;
	sub_824037D0(ctx, base);
	// b 0x823eccd0
	goto loc_823ECCD0;
loc_823ECCCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823ECCD0:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x823ECCD8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823eccf0
	if (ctx.cr6.eq) goto loc_823ECCF0;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x823ECCEC;
	sub_82183448(ctx, base);
	// b 0x823eccf8
	goto loc_823ECCF8;
loc_823ECCF0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x823ECCF8;
	sub_821845A0(ctx, base);
loc_823ECCF8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ecd08
	if (ctx.cr6.eq) goto loc_823ECD08;
	// bl 0x82403cb8
	ctx.lr = 0x823ECD04;
	sub_82403CB8(ctx, base);
	// b 0x823ecd0c
	goto loc_823ECD0C;
loc_823ECD08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823ECD0C:
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x823ECD18;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823ECD24"))) PPC_WEAK_FUNC(sub_823ECD24);
PPC_FUNC_IMPL(__imp__sub_823ECD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ECD28"))) PPC_WEAK_FUNC(sub_823ECD28);
PPC_FUNC_IMPL(__imp__sub_823ECD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ec5f0
	ctx.lr = 0x823ECD48;
	sub_823EC5F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ecd64
	if (ctx.cr6.eq) goto loc_823ECD64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823ECD60;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823ECD64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ECD7C"))) PPC_WEAK_FUNC(sub_823ECD7C);
PPC_FUNC_IMPL(__imp__sub_823ECD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ECD80"))) PPC_WEAK_FUNC(sub_823ECD80);
PPC_FUNC_IMPL(__imp__sub_823ECD80) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x823ec820
	ctx.lr = 0x823ECD9C;
	sub_823EC820(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ECDAC"))) PPC_WEAK_FUNC(sub_823ECDAC);
PPC_FUNC_IMPL(__imp__sub_823ECDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ECDB0"))) PPC_WEAK_FUNC(sub_823ECDB0);
PPC_FUNC_IMPL(__imp__sub_823ECDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823ECDB8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r4,2508
	ctx.r10.s64 = ctx.r4.s64 + 2508;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// li r4,21000
	ctx.r4.s64 = 21000;
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,20(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwzx r29,r6,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823ECDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r30,127
	ctx.r11.s64 = ctx.r30.s64 + 127;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ECE1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r9,31668
	ctx.r5.s64 = ctx.r9.s64 + 31668;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823ECE38;
	sub_8218A5F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823ECE44"))) PPC_WEAK_FUNC(sub_823ECE44);
PPC_FUNC_IMPL(__imp__sub_823ECE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ECE48"))) PPC_WEAK_FUNC(sub_823ECE48);
PPC_FUNC_IMPL(__imp__sub_823ECE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823ECE50;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82182e90
	ctx.lr = 0x823ECE64;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x823ECE6C;
	sub_82183078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x823ECE78;
	sub_821837D0(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r31,-1
	ctx.r31.s64 = -1;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x823ece94
	if (!ctx.cr6.gt) goto loc_823ECE94;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_823ECE94:
	// bl 0x82183850
	ctx.lr = 0x823ECE98;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x823eceb0
	if (ctx.cr6.eq) goto loc_823ECEB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x823ECEAC;
	sub_82183448(ctx, base);
	// b 0x823ecebc
	goto loc_823ECEBC;
loc_823ECEB0:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x823ECEBC;
	sub_821845A0(ctx, base);
loc_823ECEBC:
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x823ececc
	if (ctx.cr6.gt) goto loc_823ECECC;
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_823ECECC:
	// bl 0x82183850
	ctx.lr = 0x823ECED0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x823ecee8
	if (ctx.cr6.eq) goto loc_823ECEE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x823ECEE4;
	sub_82183448(ctx, base);
	// b 0x823ecef4
	goto loc_823ECEF4;
loc_823ECEE8:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x823ECEF4;
	sub_821845A0(ctx, base);
loc_823ECEF4:
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x823ECF08;
	sub_822AA648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822aa648
	ctx.lr = 0x823ECF14;
	sub_822AA648(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823ecfe0
	if (ctx.cr6.eq) goto loc_823ECFE0;
	// addi r10,r22,-4
	ctx.r10.s64 = ctx.r22.s64 + -4;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r11,r28,10028
	ctx.r11.s64 = ctx.r28.s64 + 10028;
loc_823ECF28:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ecf28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823ECF28;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823ecfe0
	if (ctx.cr6.eq) goto loc_823ECFE0;
	// addi r24,r28,10032
	ctx.r24.s64 = ctx.r28.s64 + 10032;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// subf r26,r23,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r23.s64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
loc_823ECF4C:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_823ECF54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823ECF74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82403ab0
	ctx.lr = 0x823ECF84;
	sub_82403AB0(ctx, base);
	// lwzx r7,r26,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823ecfa8
	if (ctx.cr6.eq) goto loc_823ECFA8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823ecf54
	if (ctx.cr6.lt) goto loc_823ECF54;
	// b 0x823ecfb4
	goto loc_823ECFB4;
loc_823ECFA8:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_823ECFB4:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x823ecf4c
	if (!ctx.cr0.eq) goto loc_823ECF4C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823ecfe0
	if (ctx.cr6.eq) goto loc_823ECFE0;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r10,r28,10028
	ctx.r10.s64 = ctx.r28.s64 + 10028;
loc_823ECFD4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ecfd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823ECFD4;
loc_823ECFE0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823ecff4
	if (ctx.cr6.eq) goto loc_823ECFF4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82183e40
	ctx.lr = 0x823ECFF4;
	sub_82183E40(ctx, base);
loc_823ECFF4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x823ed008
	if (ctx.cr6.eq) goto loc_823ED008;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82183e40
	ctx.lr = 0x823ED008;
	sub_82183E40(ctx, base);
loc_823ED008:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821837d0
	ctx.lr = 0x823ED010;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823ED018"))) PPC_WEAK_FUNC(sub_823ED018);
PPC_FUNC_IMPL(__imp__sub_823ED018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lwz r4,12032(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12032);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-13616
	ctx.r6.s64 = ctx.r11.s64 + -13616;
	// addi r3,r3,10032
	ctx.r3.s64 = ctx.r3.s64 + 10032;
	// b 0x8224a2a0
	sub_8224A2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ED030"))) PPC_WEAK_FUNC(sub_823ED030);
PPC_FUNC_IMPL(__imp__sub_823ED030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lwz r4,12032(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12032);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-13480
	ctx.r6.s64 = ctx.r11.s64 + -13480;
	// addi r3,r3,10032
	ctx.r3.s64 = ctx.r3.s64 + 10032;
	// b 0x8224a2a0
	sub_8224A2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ED048"))) PPC_WEAK_FUNC(sub_823ED048);
PPC_FUNC_IMPL(__imp__sub_823ED048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823ED050;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r25,15472(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// bl 0x82182e90
	ctx.lr = 0x823ED064;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x823ED06C;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x823ED078;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x823ED07C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x823ed094
	if (ctx.cr6.eq) goto loc_823ED094;
	// li r3,800
	ctx.r3.s64 = 800;
	// bl 0x82183448
	ctx.lr = 0x823ED090;
	sub_82183448(ctx, base);
	// b 0x823ed09c
	goto loc_823ED09C;
loc_823ED094:
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x821845a0
	ctx.lr = 0x823ED09C;
	sub_821845A0(ctx, base);
loc_823ED09C:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r3,-8
	ctx.r28.s64 = ctx.r3.s64 + -8;
	// lwz r11,16664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	// addi r29,r11,20
	ctx.r29.s64 = ctx.r11.s64 + 20;
loc_823ED0B8:
	// bl 0x820855d8
	ctx.lr = 0x823ED0BC;
	sub_820855D8(ctx, base);
	// lwz r11,12052(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12052);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rldicr r10,r3,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823ed0fc
	if (!ctx.cr6.lt) goto loc_823ED0FC;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r31,100
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 100, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stdu r11,8(r28)
	ea = 8 + ctx.r28.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r28.u32 = ea;
	// blt cr6,0x823ed0b8
	if (ctx.cr6.lt) goto loc_823ED0B8;
loc_823ED0FC:
	// bl 0x82182e90
	ctx.lr = 0x823ED100;
	sub_82182E90(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r27,12036
	ctx.r6.s64 = ctx.r27.s64 + 12036;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82170818
	ctx.lr = 0x823ED118;
	sub_82170818(ctx, base);
	// lwz r11,12052(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12052);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r11,12052(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12052, ctx.r11.u32);
	// beq cr6,0x823ed13c
	if (ctx.cr6.eq) goto loc_823ED13C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82183e40
	ctx.lr = 0x823ED13C;
	sub_82183E40(ctx, base);
loc_823ED13C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r11,11
	ctx.r11.s64 = 11;
	// beq cr6,0x823ed150
	if (ctx.cr6.eq) goto loc_823ED150;
	// li r11,9
	ctx.r11.s64 = 9;
loc_823ED150:
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x823ED158;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823ED160"))) PPC_WEAK_FUNC(sub_823ED160);
PPC_FUNC_IMPL(__imp__sub_823ED160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823ED168;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,15472(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821707d0
	ctx.lr = 0x823ED180;
	sub_821707D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ed284
	if (ctx.cr6.eq) goto loc_823ED284;
	// addi r26,r30,12036
	ctx.r26.s64 = ctx.r30.s64 + 12036;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82229078
	ctx.lr = 0x823ED194;
	sub_82229078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821711c0
	ctx.lr = 0x823ED1A0;
	sub_821711C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ed1c8
	if (ctx.cr6.eq) goto loc_823ED1C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82170850
	ctx.lr = 0x823ED1B0;
	sub_82170850(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8217f598
	ctx.lr = 0x823ED1B8;
	sub_8217F598(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823ED1C8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823ed248
	if (ctx.cr6.eq) goto loc_823ED248;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823ED1D4:
	// lwz r11,12056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12056);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r29,500
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 500, ctx.xer);
	// bge cr6,0x823ed22c
	if (!ctx.cr6.lt) goto loc_823ED22C;
	// bl 0x82182e90
	ctx.lr = 0x823ED1E8;
	sub_82182E90(ctx, base);
	// bl 0x8217f498
	ctx.lr = 0x823ED1EC;
	sub_8217F498(ctx, base);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r10,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8217f468
	ctx.lr = 0x823ED20C;
	sub_8217F468(ctx, base);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823ED220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823ed1d4
	if (ctx.cr6.lt) goto loc_823ED1D4;
loc_823ED22C:
	// lwz r11,12056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12056);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,12056(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12056, ctx.r11.u32);
	// cmplwi cr6,r11,500
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 500, ctx.xer);
	// blt cr6,0x823ed248
	if (ctx.cr6.lt) goto loc_823ED248;
	// li r11,500
	ctx.r11.s64 = 500;
	// stw r11,12056(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12056, ctx.r11.u32);
loc_823ED248:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8217f598
	ctx.lr = 0x823ED250;
	sub_8217F598(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r10,12052(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12052);
	// mulli r8,r10,100
	ctx.r8.s64 = ctx.r10.s64 * 100;
	// lwz r11,16664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823ed27c
	if (!ctx.cr6.lt) goto loc_823ED27C;
	// lwz r11,12056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12056);
	// cmplwi cr6,r11,500
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 500, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// blt cr6,0x823ed280
	if (ctx.cr6.lt) goto loc_823ED280;
loc_823ED27C:
	// li r11,10
	ctx.r11.s64 = 10;
loc_823ED280:
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_823ED284:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823ED28C"))) PPC_WEAK_FUNC(sub_823ED28C);
PPC_FUNC_IMPL(__imp__sub_823ED28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ED290"))) PPC_WEAK_FUNC(sub_823ED290);
PPC_FUNC_IMPL(__imp__sub_823ED290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x823ed3c8
	if (ctx.cr6.gt) goto loc_823ED3C8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823ed300
	// bdzf 4*cr6+eq,0x823ed354
	// bdzf 4*cr6+eq,0x823ed378
	// bdzf 4*cr6+eq,0x823ed388
	// bdzf 4*cr6+eq,0x823ed388
	// bdzf 4*cr6+eq,0x823ed3c8
	// bdzf 4*cr6+eq,0x823ed3a4
	// bne cr6,0x823ed3c0
	if (!ctx.cr6.eq) goto loc_823ED3C0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82403820
	ctx.lr = 0x823ED2E4;
	sub_82403820(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823ED300:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ed3c8
	if (ctx.cr6.eq) goto loc_823ED3C8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823ed338
	if (!ctx.cr6.eq) goto loc_823ED338;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823ED338:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823ED354:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82403ca8
	ctx.lr = 0x823ED35C;
	sub_82403CA8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823ED378:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ed3c8
	if (ctx.cr6.eq) goto loc_823ED3C8;
loc_823ED388:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823ED3A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed048
	ctx.lr = 0x823ED3AC;
	sub_823ED048(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823ED3C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed160
	ctx.lr = 0x823ED3C8;
	sub_823ED160(ctx, base);
loc_823ED3C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ED3DC"))) PPC_WEAK_FUNC(sub_823ED3DC);
PPC_FUNC_IMPL(__imp__sub_823ED3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ED3E0"))) PPC_WEAK_FUNC(sub_823ED3E0);
PPC_FUNC_IMPL(__imp__sub_823ED3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823ED3E8;
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-13120
	ctx.r8.s64 = ctx.r11.s64 + -13120;
	// addi r7,r10,-13256
	ctx.r7.s64 = ctx.r10.s64 + -13256;
	// addi r6,r9,-13264
	ctx.r6.s64 = ctx.r9.s64 + -13264;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// addi r3,r3,1200
	ctx.r3.s64 = ctx.r3.s64 + 1200;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// bl 0x823e8668
	ctx.lr = 0x823ED424;
	sub_823E8668(ctx, base);
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c31a0
	ctx.lr = 0x823ED42C;
	sub_823C31A0(ctx, base);
	// addi r3,r31,840
	ctx.r3.s64 = ctx.r31.s64 + 840;
	// bl 0x823c3048
	ctx.lr = 0x823ED434;
	sub_823C3048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x823ED43C;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x823ED444;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x823ED44C;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823ED454"))) PPC_WEAK_FUNC(sub_823ED454);
PPC_FUNC_IMPL(__imp__sub_823ED454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ED458"))) PPC_WEAK_FUNC(sub_823ED458);
PPC_FUNC_IMPL(__imp__sub_823ED458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823ED470;
	sub_823C3C60(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ED48C"))) PPC_WEAK_FUNC(sub_823ED48C);
PPC_FUNC_IMPL(__imp__sub_823ED48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ED490"))) PPC_WEAK_FUNC(sub_823ED490);
PPC_FUNC_IMPL(__imp__sub_823ED490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823ED4A8;
	sub_823C3C70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r11.u32);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823ED4C4;
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

__attribute__((alias("__imp__sub_823ED4D8"))) PPC_WEAK_FUNC(sub_823ED4D8);
PPC_FUNC_IMPL(__imp__sub_823ED4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823ED4F0;
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
	ctx.lr = 0x823ED504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ED520"))) PPC_WEAK_FUNC(sub_823ED520);
PPC_FUNC_IMPL(__imp__sub_823ED520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823ED538;
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
	ctx.lr = 0x823ED54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ED568"))) PPC_WEAK_FUNC(sub_823ED568);
PPC_FUNC_IMPL(__imp__sub_823ED568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823ED580;
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
	ctx.lr = 0x823ED594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ED5B0"))) PPC_WEAK_FUNC(sub_823ED5B0);
PPC_FUNC_IMPL(__imp__sub_823ED5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823ED5C8;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ed5e4
	if (!ctx.cr6.eq) goto loc_823ED5E4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823ED5E4:
	// lwz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// addi r3,r31,1172
	ctx.r3.s64 = ctx.r31.s64 + 1172;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ED5F8;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ED614"))) PPC_WEAK_FUNC(sub_823ED614);
PPC_FUNC_IMPL(__imp__sub_823ED614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ED618"))) PPC_WEAK_FUNC(sub_823ED618);
PPC_FUNC_IMPL(__imp__sub_823ED618) {
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
	// addi r3,r3,840
	ctx.r3.s64 = ctx.r3.s64 + 840;
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
	ctx.lr = 0x823ED668;
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
	ctx.lr = 0x823ED67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb380
	ctx.lr = 0x823ED684;
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

__attribute__((alias("__imp__sub_823ED698"))) PPC_WEAK_FUNC(sub_823ED698);
PPC_FUNC_IMPL(__imp__sub_823ED698) {
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
	// addi r3,r3,840
	ctx.r3.s64 = ctx.r3.s64 + 840;
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
	ctx.lr = 0x823ED6E0;
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

__attribute__((alias("__imp__sub_823ED6F0"))) PPC_WEAK_FUNC(sub_823ED6F0);
PPC_FUNC_IMPL(__imp__sub_823ED6F0) {
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
	// addi r31,r3,840
	ctx.r31.s64 = ctx.r3.s64 + 840;
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
	ctx.lr = 0x823ED758;
	sub_823C3320(ctx, base);
	// lwz r7,840(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823ED76C;
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

__attribute__((alias("__imp__sub_823ED784"))) PPC_WEAK_FUNC(sub_823ED784);
PPC_FUNC_IMPL(__imp__sub_823ED784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ED788"))) PPC_WEAK_FUNC(sub_823ED788);
PPC_FUNC_IMPL(__imp__sub_823ED788) {
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
	// addi r31,r3,840
	ctx.r31.s64 = ctx.r3.s64 + 840;
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
	ctx.lr = 0x823ED7F0;
	sub_823C3320(ctx, base);
	// lwz r7,840(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823ED804;
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

__attribute__((alias("__imp__sub_823ED81C"))) PPC_WEAK_FUNC(sub_823ED81C);
PPC_FUNC_IMPL(__imp__sub_823ED81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ED820"))) PPC_WEAK_FUNC(sub_823ED820);
PPC_FUNC_IMPL(__imp__sub_823ED820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163e58
	ctx.lr = 0x823ED844;
	sub_82163E58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82163d90
	ctx.lr = 0x823ED84C;
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

__attribute__((alias("__imp__sub_823ED860"))) PPC_WEAK_FUNC(sub_823ED860);
PPC_FUNC_IMPL(__imp__sub_823ED860) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x82084748
	sub_82084748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ED874"))) PPC_WEAK_FUNC(sub_823ED874);
PPC_FUNC_IMPL(__imp__sub_823ED874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ED878"))) PPC_WEAK_FUNC(sub_823ED878);
PPC_FUNC_IMPL(__imp__sub_823ED878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// addi r9,r9,-28324
	ctx.r9.s64 = ctx.r9.s64 + -28324;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x823ed894
	if (!ctx.cr6.gt) goto loc_823ED894;
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
loc_823ED894:
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823ed8ac
	if (!ctx.cr0.lt) goto loc_823ED8AC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823ed8e4
	goto loc_823ED8E4;
loc_823ED8AC:
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
	// ble cr6,0x823ed8e4
	if (!ctx.cr6.gt) goto loc_823ED8E4;
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
loc_823ED8E4:
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823ed914
	if (ctx.cr6.lt) goto loc_823ED914;
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
	// b 0x823ed924
	goto loc_823ED924;
loc_823ED914:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x823ed924
	if (!ctx.cr6.lt) goto loc_823ED924;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
loc_823ED924:
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// subf. r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823ed93c
	if (!ctx.cr0.lt) goto loc_823ED93C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_823ED93C:
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
	// ble cr6,0x823ed980
	if (!ctx.cr6.gt) goto loc_823ED980;
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
loc_823ED980:
	// stw r8,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ED988"))) PPC_WEAK_FUNC(sub_823ED988);
PPC_FUNC_IMPL(__imp__sub_823ED988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823ED990;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// addis r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 65536;
	// addi r30,r30,-28324
	ctx.r30.s64 = ctx.r30.s64 + -28324;
	// addi r26,r26,-28312
	ctx.r26.s64 = ctx.r26.s64 + -28312;
	// addis r23,r3,1
	ctx.r23.s64 = ctx.r3.s64 + 65536;
	// addis r24,r3,1
	ctx.r24.s64 = ctx.r3.s64 + 65536;
	// addi r23,r23,-28308
	ctx.r23.s64 = ctx.r23.s64 + -28308;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r24,r24,-28296
	ctx.r24.s64 = ctx.r24.s64 + -28296;
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
	// ble cr6,0x823eda58
	if (!ctx.cr6.gt) goto loc_823EDA58;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
loc_823ED9F8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823eda54
	if (!ctx.cr6.gt) goto loc_823EDA54;
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
	// bl 0x823ee560
	ctx.lr = 0x823EDA24;
	sub_823EE560(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x823eda3c
	if (ctx.cr6.gt) goto loc_823EDA3C;
	// li r22,1
	ctx.r22.s64 = 1;
loc_823EDA3C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ed9f8
	if (ctx.cr6.lt) goto loc_823ED9F8;
	// b 0x823eda58
	goto loc_823EDA58;
loc_823EDA54:
	// li r22,1
	ctx.r22.s64 = 1;
loc_823EDA58:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x823eda7c
	if (ctx.cr6.eq) goto loc_823EDA7C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,37232
	ctx.r8.u64 = ctx.r10.u64 | 37232;
	// stwx r9,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823EDA7C:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r21,r10
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823eda8c
	if (!ctx.cr6.lt) goto loc_823EDA8C;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_823EDA8C:
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r7,r9,37232
	ctx.r7.u64 = ctx.r9.u64 | 37232;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823EDAA8"))) PPC_WEAK_FUNC(sub_823EDAA8);
PPC_FUNC_IMPL(__imp__sub_823EDAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823EDAB0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82163df0
	ctx.lr = 0x823EDAC0;
	sub_82163DF0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82164fb0
	ctx.lr = 0x823EDAD0;
	sub_82164FB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82164fb0
	ctx.lr = 0x823EDAE0;
	sub_82164FB0(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823edaf4
	if (!ctx.cr6.gt) goto loc_823EDAF4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823EDAF4:
	// bge cr6,0x823edb04
	if (!ctx.cr6.lt) goto loc_823EDB04;
loc_823EDAF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823EDB04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823edaf8
	if (ctx.cr6.gt) goto loc_823EDAF8;
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

__attribute__((alias("__imp__sub_823EDB2C"))) PPC_WEAK_FUNC(sub_823EDB2C);
PPC_FUNC_IMPL(__imp__sub_823EDB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EDB30"))) PPC_WEAK_FUNC(sub_823EDB30);
PPC_FUNC_IMPL(__imp__sub_823EDB30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823edb40
	sub_823EDB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EDB38"))) PPC_WEAK_FUNC(sub_823EDB38);
PPC_FUNC_IMPL(__imp__sub_823EDB38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823edb40
	sub_823EDB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EDB40"))) PPC_WEAK_FUNC(sub_823EDB40);
PPC_FUNC_IMPL(__imp__sub_823EDB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ed3e0
	ctx.lr = 0x823EDB60;
	sub_823ED3E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823edb7c
	if (ctx.cr6.eq) goto loc_823EDB7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823EDB78;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823EDB7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EDB94"))) PPC_WEAK_FUNC(sub_823EDB94);
PPC_FUNC_IMPL(__imp__sub_823EDB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EDB98"))) PPC_WEAK_FUNC(sub_823EDB98);
PPC_FUNC_IMPL(__imp__sub_823EDB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823EDBA0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x823EDBB4;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x823c58b0
	ctx.lr = 0x823EDBC4;
	sub_823C58B0(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821859a0
	ctx.lr = 0x823EDBD8;
	sub_821859A0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-13120
	ctx.r8.s64 = ctx.r11.s64 + -13120;
	// addi r7,r10,-13256
	ctx.r7.s64 = ctx.r10.s64 + -13256;
	// addi r6,r9,-13264
	ctx.r6.s64 = ctx.r9.s64 + -13264;
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
	// bl 0x823e79e0
	ctx.lr = 0x823EDC08;
	sub_823E79E0(ctx, base);
	// addi r3,r31,652
	ctx.r3.s64 = ctx.r31.s64 + 652;
	// bl 0x823e79e0
	ctx.lr = 0x823EDC10;
	sub_823E79E0(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r31,840
	ctx.r3.s64 = ctx.r31.s64 + 840;
	// bl 0x823c2ff0
	ctx.lr = 0x823EDC1C;
	sub_823C2FF0(ctx, base);
	// addi r29,r31,888
	ctx.r29.s64 = ctx.r31.s64 + 888;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c35b8
	ctx.lr = 0x823EDC30;
	sub_823C35B8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r30,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r30.u32);
	// addi r3,r31,1200
	ctx.r3.s64 = ctx.r31.s64 + 1200;
	// lwz r4,20(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r4,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r4.u32);
	// stw r5,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r5.u32);
	// bl 0x823e8620
	ctx.lr = 0x823EDC50;
	sub_823E8620(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// ori r10,r3,35888
	ctx.r10.u64 = ctx.r3.u64 | 35888;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// addi r9,r9,-28324
	ctx.r9.s64 = ctx.r9.s64 + -28324;
	// ori r8,r11,65535
	ctx.r8.u64 = ctx.r11.u64 | 65535;
	// li r27,1
	ctx.r27.s64 = 1;
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// stw r27,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r27.u32);
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
	// bl 0x823ebcd8
	ctx.lr = 0x823EDC9C;
	sub_823EBCD8(ctx, base);
	// lwz r7,480(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// li r4,1280
	ctx.r4.s64 = 1280;
	// addi r30,r30,-29644
	ctx.r30.s64 = ctx.r30.s64 + -29644;
	// stw r7,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x823EDCB8;
	sub_822AA648(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r4,r6,37172
	ctx.r4.u64 = ctx.r6.u64 | 37172;
	// ori r3,r5,37176
	ctx.r3.u64 = ctx.r5.u64 | 37176;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29516
	ctx.r11.s64 = ctx.r11.s64 + -29516;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stwx r30,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// ori r7,r10,37180
	ctx.r7.u64 = ctx.r10.u64 | 37180;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r5,r8,37188
	ctx.r5.u64 = ctx.r8.u64 | 37188;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r6,r9,37184
	ctx.r6.u64 = ctx.r9.u64 | 37184;
	// ori r8,r4,37192
	ctx.r8.u64 = ctx.r4.u64 | 37192;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r4,r3,37196
	ctx.r4.u64 = ctx.r3.u64 | 37196;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r3,r11,37200
	ctx.r3.u64 = ctx.r11.u64 | 37200;
	// ori r11,r10,37204
	ctx.r11.u64 = ctx.r10.u64 | 37204;
	// ori r10,r9,37208
	ctx.r10.u64 = ctx.r9.u64 | 37208;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r9,r9,-29388
	ctx.r9.s64 = ctx.r9.s64 + -29388;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// stwx r9,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-29260
	ctx.r30.s64 = ctx.r30.s64 + -29260;
	// addi r7,r7,-29004
	ctx.r7.s64 = ctx.r7.s64 + -29004;
	// addi r28,r28,-29132
	ctx.r28.s64 = ctx.r28.s64 + -29132;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// stwx r28,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u32);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// addi r6,r6,-28876
	ctx.r6.s64 = ctx.r6.s64 + -28876;
	// addi r5,r5,-28748
	ctx.r5.s64 = ctx.r5.s64 + -28748;
	// addi r9,r9,-28620
	ctx.r9.s64 = ctx.r9.s64 + -28620;
	// stwx r6,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r8,r8,-28492
	ctx.r8.s64 = ctx.r8.s64 + -28492;
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
	// lwz r30,-792(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + -792);
	// bl 0x823c3240
	ctx.lr = 0x823EDD8C;
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
	ctx.lr = 0x823EDDAC;
	sub_823C31B0(ctx, base);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
	// bl 0x82109e00
	ctx.lr = 0x823EDDCC;
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
loc_823EDDE0:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823edde0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EDDE0;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9740
	ctx.lr = 0x823EDDF8;
	sub_823E9740(ctx, base);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r27,4548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4548, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823EDE10"))) PPC_WEAK_FUNC(sub_823EDE10);
PPC_FUNC_IMPL(__imp__sub_823EDE10) {
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
	// addi r3,r3,860
	ctx.r3.s64 = ctx.r3.s64 + 860;
	// b 0x823c3240
	sub_823C3240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EDE34"))) PPC_WEAK_FUNC(sub_823EDE34);
PPC_FUNC_IMPL(__imp__sub_823EDE34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EDE38"))) PPC_WEAK_FUNC(sub_823EDE38);
PPC_FUNC_IMPL(__imp__sub_823EDE38) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,832(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
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

__attribute__((alias("__imp__sub_823EDE58"))) PPC_WEAK_FUNC(sub_823EDE58);
PPC_FUNC_IMPL(__imp__sub_823EDE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823EDE60;
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
	// lfs f31,604(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x823edf38
	if (ctx.cr6.eq) goto loc_823EDF38;
	// lwz r11,-240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -240);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823edf38
	if (ctx.cr6.eq) goto loc_823EDF38;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4388);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823edf38
	if (!ctx.cr6.eq) goto loc_823EDF38;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x823EDEAC;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x823EDEBC;
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
	ctx.lr = 0x823EDED0;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823EDEDC;
	sub_821AD498(ctx, base);
	// lwz r11,576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823edf20
	if (ctx.cr6.eq) goto loc_823EDF20;
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,576(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
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
	// lwz r6,940(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// lwz r4,392(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// lwz r3,576(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// bl 0x8210a9b0
	ctx.lr = 0x823EDF20;
	sub_8210A9B0(ctx, base);
loc_823EDF20:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x823EDF2C;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823EDF38;
	sub_821AD498(ctx, base);
loc_823EDF38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823EDF44"))) PPC_WEAK_FUNC(sub_823EDF44);
PPC_FUNC_IMPL(__imp__sub_823EDF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EDF48"))) PPC_WEAK_FUNC(sub_823EDF48);
PPC_FUNC_IMPL(__imp__sub_823EDF48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,880(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 880);
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

__attribute__((alias("__imp__sub_823EDF64"))) PPC_WEAK_FUNC(sub_823EDF64);
PPC_FUNC_IMPL(__imp__sub_823EDF64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EDF68"))) PPC_WEAK_FUNC(sub_823EDF68);
PPC_FUNC_IMPL(__imp__sub_823EDF68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,880(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823edfa4
	if (ctx.cr6.eq) goto loc_823EDFA4;
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
loc_823EDFA4:
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

__attribute__((alias("__imp__sub_823EDFB8"))) PPC_WEAK_FUNC(sub_823EDFB8);
PPC_FUNC_IMPL(__imp__sub_823EDFB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EDFBC"))) PPC_WEAK_FUNC(sub_823EDFBC);
PPC_FUNC_IMPL(__imp__sub_823EDFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EDFC0"))) PPC_WEAK_FUNC(sub_823EDFC0);
PPC_FUNC_IMPL(__imp__sub_823EDFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,880(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ee020
	if (ctx.cr6.eq) goto loc_823EE020;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EDFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r9.u32);
	// stw r11,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823ee020
	if (ctx.cr6.lt) goto loc_823EE020;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EE020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EE020:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EE034"))) PPC_WEAK_FUNC(sub_823EE034);
PPC_FUNC_IMPL(__imp__sub_823EE034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EE038"))) PPC_WEAK_FUNC(sub_823EE038);
PPC_FUNC_IMPL(__imp__sub_823EE038) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x823ee090
	if (ctx.cr6.eq) goto loc_823EE090;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x823ee090
	if (ctx.cr6.eq) goto loc_823EE090;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x823ee090
	if (ctx.cr6.eq) goto loc_823EE090;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x823ee090
	if (ctx.cr6.eq) goto loc_823EE090;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x823ee090
	if (ctx.cr6.eq) goto loc_823EE090;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x823ee090
	if (ctx.cr6.eq) goto loc_823EE090;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x823ee094
	if (!ctx.cr6.eq) goto loc_823EE094;
loc_823EE090:
	// li r4,1
	ctx.r4.s64 = 1;
loc_823EE094:
	// bl 0x8223af80
	ctx.lr = 0x823EE098;
	sub_8223AF80(ctx, base);
	// bl 0x8223aa28
	ctx.lr = 0x823EE09C;
	sub_8223AA28(ctx, base);
	// bl 0x822e6048
	ctx.lr = 0x823EE0A0;
	sub_822E6048(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8223a960
	ctx.lr = 0x823EE0A8;
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
	ctx.lr = 0x823EE0BC;
	sub_822361C8(ctx, base);
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r11,-4392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// addi r4,r11,2744
	ctx.r4.s64 = ctx.r11.s64 + 2744;
	// bl 0x82248a40
	ctx.lr = 0x823EE0D4;
	sub_82248A40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x8223aa28
	ctx.lr = 0x823EE0DC;
	sub_8223AA28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82237d70
	ctx.lr = 0x823EE0E4;
	sub_82237D70(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r11,-4392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r11,2744
	ctx.r3.s64 = ctx.r11.s64 + 2744;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82248a40
	ctx.lr = 0x823EE100;
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

__attribute__((alias("__imp__sub_823EE11C"))) PPC_WEAK_FUNC(sub_823EE11C);
PPC_FUNC_IMPL(__imp__sub_823EE11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EE120"))) PPC_WEAK_FUNC(sub_823EE120);
PPC_FUNC_IMPL(__imp__sub_823EE120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EE140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823EE148;
	sub_82163DF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82164d80
	ctx.lr = 0x823EE150;
	sub_82164D80(ctx, base);
	// lhz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EE168"))) PPC_WEAK_FUNC(sub_823EE168);
PPC_FUNC_IMPL(__imp__sub_823EE168) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,276
	ctx.r11.s64 = ctx.r3.s64 + 276;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_823EE174:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
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
	// lwz r8,832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
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
	// lwz r8,832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
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
	// lwz r8,832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
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
	// lwz r8,832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
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
	// blt cr6,0x823ee174
	if (ctx.cr6.lt) goto loc_823EE174;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EE228"))) PPC_WEAK_FUNC(sub_823EE228);
PPC_FUNC_IMPL(__imp__sub_823EE228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823EE230;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823ee254
	if (!ctx.cr6.eq) goto loc_823EE254;
loc_823EE248:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823EE254:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823ee248
	if (!ctx.cr6.gt) goto loc_823EE248;
	// rlwinm r26,r5,29,3,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x8223a960
	ctx.lr = 0x823EE268;
	sub_8223A960(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8223aa28
	ctx.lr = 0x823EE270;
	sub_8223AA28(ctx, base);
	// bl 0x822e6048
	ctx.lr = 0x823EE274;
	sub_822E6048(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x822361c8
	ctx.lr = 0x823EE28C;
	sub_822361C8(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x823EE290;
	sub_82163DF0(ctx, base);
	// addi r9,r3,96
	ctx.r9.s64 = ctx.r3.s64 + 96;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823ee2b4
	if (ctx.cr6.eq) goto loc_823EE2B4;
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_823EE2A8:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ee2a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EE2A8;
loc_823EE2B4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823ee364
	if (ctx.cr6.eq) goto loc_823EE364;
	// addi r27,r31,-4
	ctx.r27.s64 = ctx.r31.s64 + -4;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
loc_823EE2C8:
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823ee364
	if (!ctx.cr6.lt) goto loc_823EE364;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x823ee354
	if (ctx.cr6.eq) goto loc_823EE354;
	// lhz r6,2(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplwi cr6,r6,65535
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 65535, ctx.xer);
	// beq cr6,0x823ee354
	if (ctx.cr6.eq) goto loc_823EE354;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x823ee354
	if (!ctx.cr6.eq) goto loc_823EE354;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822368d8
	ctx.lr = 0x823EE300;
	sub_822368D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ee354
	if (ctx.cr6.eq) goto loc_823EE354;
	// lbz r11,43(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823ee354
	if (ctx.cr6.eq) goto loc_823EE354;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x823ee344
	if (ctx.cr6.eq) goto loc_823EE344;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823EE320:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163e58
	ctx.lr = 0x823EE328;
	sub_82163E58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82163d90
	ctx.lr = 0x823EE330;
	sub_82163D90(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823ee354
	if (ctx.cr6.eq) goto loc_823EE354;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// blt cr6,0x823ee320
	if (ctx.cr6.lt) goto loc_823EE320;
loc_823EE344:
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stwu r30,8(r27)
	ea = 8 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r27.u32 = ea;
loc_823EE354:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823ee2c8
	if (ctx.cr6.lt) goto loc_823EE2C8;
loc_823EE364:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823EE370"))) PPC_WEAK_FUNC(sub_823EE370);
PPC_FUNC_IMPL(__imp__sub_823EE370) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ee228
	sub_823EE228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EE374"))) PPC_WEAK_FUNC(sub_823EE374);
PPC_FUNC_IMPL(__imp__sub_823EE374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EE378"))) PPC_WEAK_FUNC(sub_823EE378);
PPC_FUNC_IMPL(__imp__sub_823EE378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823EE380;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823ee3a4
	if (!ctx.cr6.eq) goto loc_823EE3A4;
loc_823EE398:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823EE3A4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823ee398
	if (!ctx.cr6.gt) goto loc_823EE398;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x8223a960
	ctx.lr = 0x823EE3B4;
	sub_8223A960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8223aa28
	ctx.lr = 0x823EE3BC;
	sub_8223AA28(ctx, base);
	// bl 0x822e6048
	ctx.lr = 0x823EE3C0;
	sub_822E6048(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x822361c8
	ctx.lr = 0x823EE3D8;
	sub_822361C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234518
	ctx.lr = 0x823EE3E0;
	sub_82234518(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x823EE3F0;
	sub_822AA648(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823ee474
	if (ctx.cr6.eq) goto loc_823EE474;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r24,r30,-8
	ctx.r24.s64 = ctx.r30.s64 + -8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_823EE408:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82236148
	ctx.lr = 0x823EE414;
	sub_82236148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x822368d8
	ctx.lr = 0x823EE430;
	sub_822368D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ee468
	if (ctx.cr6.eq) goto loc_823EE468;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8222ead8
	ctx.lr = 0x823EE448;
	sub_8222EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ee468
	if (ctx.cr6.eq) goto loc_823EE468;
	// lbz r11,43(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 43);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823ee468
	if (ctx.cr6.eq) goto loc_823EE468;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stdu r11,8(r24)
	ea = 8 + ctx.r24.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r24.u32 = ea;
loc_823EE468:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823ee408
	if (ctx.cr6.lt) goto loc_823EE408;
loc_823EE474:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823EE480"))) PPC_WEAK_FUNC(sub_823EE480);
PPC_FUNC_IMPL(__imp__sub_823EE480) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ee378
	sub_823EE378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EE484"))) PPC_WEAK_FUNC(sub_823EE484);
PPC_FUNC_IMPL(__imp__sub_823EE484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EE488"))) PPC_WEAK_FUNC(sub_823EE488);
PPC_FUNC_IMPL(__imp__sub_823EE488) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,-29648
	ctx.r11.s64 = ctx.r11.s64 + -29648;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823ee4c4
	if (ctx.cr6.eq) goto loc_823EE4C4;
loc_823EE4BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ee520
	goto loc_823EE520;
loc_823EE4C4:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r31,-784(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -784);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ee4bc
	if (ctx.cr6.eq) goto loc_823EE4BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EE4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x823EE4F4;
	sub_821EBB58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823EE504;
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
	ctx.lr = 0x823EE51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823EE520:
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

__attribute__((alias("__imp__sub_823EE538"))) PPC_WEAK_FUNC(sub_823EE538);
PPC_FUNC_IMPL(__imp__sub_823EE538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,-28324
	ctx.r10.s64 = ctx.r10.s64 + -28324;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823EE550:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ee550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EE550;
	// b 0x823ed878
	sub_823ED878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EE560"))) PPC_WEAK_FUNC(sub_823EE560);
PPC_FUNC_IMPL(__imp__sub_823EE560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823EE568;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ee7d4
	if (ctx.cr6.eq) goto loc_823EE7D4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ee7d4
	if (ctx.cr6.eq) goto loc_823EE7D4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823ee67c
	if (ctx.cr6.eq) goto loc_823EE67C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823ee5b0
	if (ctx.cr6.eq) goto loc_823EE5B0;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
loc_823EE5B0:
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
	// bge cr6,0x823ee604
	if (!ctx.cr6.lt) goto loc_823EE604;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// bge 0x823ee674
	if (!ctx.cr0.lt) goto loc_823EE674;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x823ee668
	if (!ctx.cr6.lt) goto loc_823EE668;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ee628
	if (ctx.cr6.eq) goto loc_823EE628;
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
loc_823EE604:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x823ee7d4
	if (ctx.cr6.eq) goto loc_823EE7D4;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EE620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823EE628:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// beq cr6,0x823ee604
	if (ctx.cr6.eq) goto loc_823EE604;
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
	ctx.lr = 0x823EE660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823EE668:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x823ee604
	goto loc_823EE604;
loc_823EE674:
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// b 0x823ee604
	goto loc_823EE604;
loc_823EE67C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823ee7b4
	if (ctx.cr6.eq) goto loc_823EE7B4;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823ee6a4
	if (ctx.cr6.eq) goto loc_823EE6A4;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
loc_823EE6A4:
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
	// ble cr6,0x823ee73c
	if (!ctx.cr6.gt) goto loc_823EE73C;
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
	// ble cr6,0x823ee738
	if (!ctx.cr6.gt) goto loc_823EE738;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ee72c
	if (ctx.cr6.lt) goto loc_823EE72C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823ee700
	if (ctx.cr6.eq) goto loc_823EE700;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// b 0x823ee73c
	goto loc_823EE73C;
loc_823EE700:
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
	// beq cr6,0x823ee73c
	if (ctx.cr6.eq) goto loc_823EE73C;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// b 0x823ee73c
	goto loc_823EE73C;
loc_823EE72C:
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x823ee73c
	goto loc_823EE73C;
loc_823EE738:
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
loc_823EE73C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ee768
	if (ctx.cr6.lt) goto loc_823EE768;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823ee760
	if (ctx.cr6.eq) goto loc_823EE760;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// b 0x823ee768
	goto loc_823EE768;
loc_823EE760:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_823EE768:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x823ee78c
	if (ctx.cr6.eq) goto loc_823EE78C;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EE784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823EE78C:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x823ee7d4
	if (ctx.cr6.eq) goto loc_823EE7D4;
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
	ctx.lr = 0x823EE7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823EE7B4:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823ee7c8
	if (ctx.cr6.eq) goto loc_823EE7C8;
	// bl 0x823ed988
	ctx.lr = 0x823EE7C0;
	sub_823ED988(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823EE7C8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823ee7d4
	if (ctx.cr6.eq) goto loc_823EE7D4;
	// bl 0x823ee7e0
	ctx.lr = 0x823EE7D4;
	sub_823EE7E0(ctx, base);
loc_823EE7D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823EE7DC"))) PPC_WEAK_FUNC(sub_823EE7DC);
PPC_FUNC_IMPL(__imp__sub_823EE7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EE7E0"))) PPC_WEAK_FUNC(sub_823EE7E0);
PPC_FUNC_IMPL(__imp__sub_823EE7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823EE7E8;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// addis r22,r3,1
	ctx.r22.s64 = ctx.r3.s64 + 65536;
	// addi r30,r30,-28324
	ctx.r30.s64 = ctx.r30.s64 + -28324;
	// addis r24,r3,1
	ctx.r24.s64 = ctx.r3.s64 + 65536;
	// addis r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 65536;
	// addi r22,r22,-28300
	ctx.r22.s64 = ctx.r22.s64 + -28300;
	// addi r24,r24,-28312
	ctx.r24.s64 = ctx.r24.s64 + -28312;
	// addi r26,r26,-28316
	ctx.r26.s64 = ctx.r26.s64 + -28316;
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
	// addi r23,r23,-28308
	ctx.r23.s64 = ctx.r23.s64 + -28308;
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
	// blt cr6,0x823ee858
	if (ctx.cr6.lt) goto loc_823EE858;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
loc_823EE858:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823ee8d4
	if (!ctx.cr6.gt) goto loc_823EE8D4;
loc_823EE868:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823ee8d0
	if (!ctx.cr6.lt) goto loc_823EE8D0;
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
	// bl 0x823ee560
	ctx.lr = 0x823EE8A4;
	sub_823EE560(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x823ee8bc
	if (ctx.cr6.lt) goto loc_823EE8BC;
	// li r21,1
	ctx.r21.s64 = 1;
loc_823EE8BC:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ee868
	if (ctx.cr6.lt) goto loc_823EE868;
	// b 0x823ee8d4
	goto loc_823EE8D4;
loc_823EE8D0:
	// li r21,1
	ctx.r21.s64 = 1;
loc_823EE8D4:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x823ee91c
	if (ctx.cr6.eq) goto loc_823EE91C;
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
	// ori r4,r7,37232
	ctx.r4.u64 = ctx.r7.u64 | 37232;
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
loc_823EE91C:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpw cr6,r20,r10
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823ee92c
	if (!ctx.cr6.gt) goto loc_823EE92C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_823EE92C:
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r7,r9,37232
	ctx.r7.u64 = ctx.r9.u64 | 37232;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823EE948"))) PPC_WEAK_FUNC(sub_823EE948);
PPC_FUNC_IMPL(__imp__sub_823EE948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823EE950;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	ctx.lr = 0x823EE968;
	sub_8223A960(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r29,2744(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2744);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822365f0
	ctx.lr = 0x823EE988;
	sub_822365F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822365f0
	ctx.lr = 0x823EE9A0;
	sub_822365F0(ctx, base);
	// lbz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// lbz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823ee9bc
	if (!ctx.cr6.lt) goto loc_823EE9BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823EE9BC:
	// ble cr6,0x823ee9cc
	if (!ctx.cr6.gt) goto loc_823EE9CC;
loc_823EE9C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823EE9CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823ee9c0
	if (ctx.cr6.gt) goto loc_823EE9C0;
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
}

__attribute__((alias("__imp__sub_823EE9F4"))) PPC_WEAK_FUNC(sub_823EE9F4);
PPC_FUNC_IMPL(__imp__sub_823EE9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EE9F8"))) PPC_WEAK_FUNC(sub_823EE9F8);
PPC_FUNC_IMPL(__imp__sub_823EE9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823EEA00;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	ctx.lr = 0x823EEA18;
	sub_8223A960(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r29,2744(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2744);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822368d8
	ctx.lr = 0x823EEA38;
	sub_822368D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822368d8
	ctx.lr = 0x823EEA50;
	sub_822368D8(ctx, base);
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,52(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// lwz r3,-4904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823EEA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4904);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,52(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823EEA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a360
	ctx.lr = 0x823EEA9C;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823eeab0
	if (!ctx.cr6.lt) goto loc_823EEAB0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823EEAB0:
	// ble cr6,0x823eeac0
	if (!ctx.cr6.gt) goto loc_823EEAC0;
loc_823EEAB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823EEAC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823eeab4
	if (ctx.cr6.gt) goto loc_823EEAB4;
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
}

__attribute__((alias("__imp__sub_823EEAE8"))) PPC_WEAK_FUNC(sub_823EEAE8);
PPC_FUNC_IMPL(__imp__sub_823EEAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823EEAF0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	ctx.lr = 0x823EEB08;
	sub_8223A960(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r29,2744(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2744);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822365f0
	ctx.lr = 0x823EEB28;
	sub_822365F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822365f0
	ctx.lr = 0x823EEB40;
	sub_822365F0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r4,17(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// bl 0x820c7888
	ctx.lr = 0x823EEB50;
	sub_820C7888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823eeb84
	if (!ctx.cr6.eq) goto loc_823EEB84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823eeb74
	if (!ctx.cr6.gt) goto loc_823EEB74;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823EEB74:
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
loc_823EEB84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823EEB8C"))) PPC_WEAK_FUNC(sub_823EEB8C);
PPC_FUNC_IMPL(__imp__sub_823EEB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EEB90"))) PPC_WEAK_FUNC(sub_823EEB90);
PPC_FUNC_IMPL(__imp__sub_823EEB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823EEB98;
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
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r27,2744(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2744);
	// bl 0x82163df0
	ctx.lr = 0x823EEBBC;
	sub_82163DF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82164d00
	ctx.lr = 0x823EEBC8;
	sub_82164D00(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x823EEBCC;
	sub_82163DF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82164d38
	ctx.lr = 0x823EEBD8;
	sub_82164D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823EEBE0;
	sub_82163DF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82164d38
	ctx.lr = 0x823EEBEC;
	sub_82164D38(ctx, base);
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823eec08
	if (!ctx.cr6.gt) goto loc_823EEC08;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823EEC08:
	// bge cr6,0x823eec18
	if (!ctx.cr6.lt) goto loc_823EEC18;
loc_823EEC0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823EEC18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823eec0c
	if (ctx.cr6.gt) goto loc_823EEC0C;
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

__attribute__((alias("__imp__sub_823EEC40"))) PPC_WEAK_FUNC(sub_823EEC40);
PPC_FUNC_IMPL(__imp__sub_823EEC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823EEC48;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	ctx.lr = 0x823EEC60;
	sub_8223A960(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r29,2744(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2744);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822365f0
	ctx.lr = 0x823EEC80;
	sub_822365F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822365f0
	ctx.lr = 0x823EEC98;
	sub_822365F0(ctx, base);
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823eecb4
	if (!ctx.cr6.gt) goto loc_823EECB4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823EECB4:
	// bge cr6,0x823eecc4
	if (!ctx.cr6.lt) goto loc_823EECC4;
loc_823EECB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823EECC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823eecb8
	if (ctx.cr6.gt) goto loc_823EECB8;
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
}

__attribute__((alias("__imp__sub_823EECEC"))) PPC_WEAK_FUNC(sub_823EECEC);
PPC_FUNC_IMPL(__imp__sub_823EECEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EECF0"))) PPC_WEAK_FUNC(sub_823EECF0);
PPC_FUNC_IMPL(__imp__sub_823EECF0) {
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
	// bl 0x823ee560
	ctx.lr = 0x823EED70;
	sub_823EE560(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c53c0
	ctx.lr = 0x823EED78;
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

__attribute__((alias("__imp__sub_823EED8C"))) PPC_WEAK_FUNC(sub_823EED8C);
PPC_FUNC_IMPL(__imp__sub_823EED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EED90"))) PPC_WEAK_FUNC(sub_823EED90);
PPC_FUNC_IMPL(__imp__sub_823EED90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823EED98;
	sub_82248784(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8223ad48
	ctx.lr = 0x823EEDB0;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823eedc4
	if (!ctx.cr6.eq) goto loc_823EEDC4;
loc_823EEDB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823EEDC4:
	// bl 0x8223aa28
	ctx.lr = 0x823EEDC8;
	sub_8223AA28(ctx, base);
	// bl 0x822e6048
	ctx.lr = 0x823EEDCC;
	sub_822E6048(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8223a960
	ctx.lr = 0x823EEDD4;
	sub_8223A960(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x822361c8
	ctx.lr = 0x823EEDE8;
	sub_822361C8(ctx, base);
	// bl 0x8223aa28
	ctx.lr = 0x823EEDEC;
	sub_8223AA28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eedb8
	if (ctx.cr6.eq) goto loc_823EEDB8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82237588
	ctx.lr = 0x823EEE00;
	sub_82237588(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82238070
	ctx.lr = 0x823EEE1C;
	sub_82238070(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82237370
	ctx.lr = 0x823EEE3C;
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
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823c9090
	ctx.lr = 0x823EEE5C;
	sub_823C9090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823eedb8
	if (ctx.cr6.eq) goto loc_823EEDB8;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822392f8
	ctx.lr = 0x823EEE84;
	sub_822392F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823EEE90"))) PPC_WEAK_FUNC(sub_823EEE90);
PPC_FUNC_IMPL(__imp__sub_823EEE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823EEE98;
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
	ctx.lr = 0x823EEEA8;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823eeebc
	if (!ctx.cr6.eq) goto loc_823EEEBC;
loc_823EEEB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823EEEBC:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r29,-4392(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// bl 0x8223aa28
	ctx.lr = 0x823EEEC8;
	sub_8223AA28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eeeb0
	if (ctx.cr6.eq) goto loc_823EEEB0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82237588
	ctx.lr = 0x823EEEDC;
	sub_82237588(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,2744(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2744);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82238070
	ctx.lr = 0x823EEEF8;
	sub_82238070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82237538
	ctx.lr = 0x823EEF04;
	sub_82237538(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8214a2d8
	ctx.lr = 0x823EEF10;
	sub_8214A2D8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8214a2d8
	ctx.lr = 0x823EEF1C;
	sub_8214A2D8(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823c9090
	ctx.lr = 0x823EEF38;
	sub_823C9090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823eeeb0
	if (ctx.cr6.eq) goto loc_823EEEB0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8214a2d8
	ctx.lr = 0x823EEF4C;
	sub_8214A2D8(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x821847c0
	ctx.lr = 0x823EEF5C;
	sub_821847C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823eef84
	if (ctx.cr6.eq) goto loc_823EEF84;
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
	ctx.lr = 0x823EEF84;
	sub_822392F8(ctx, base);
loc_823EEF84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823EEF90"))) PPC_WEAK_FUNC(sub_823EEF90);
PPC_FUNC_IMPL(__imp__sub_823EEF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823EEF98;
	sub_8224877C(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ef09c
	if (ctx.cr6.eq) goto loc_823EF09C;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r3,-4904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EEFD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x82248f70
	ctx.lr = 0x823EEFEC;
	sub_82248F70(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82248f70
	ctx.lr = 0x823EF000;
	sub_82248F70(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8240ade0
	ctx.lr = 0x823EF010;
	sub_8240ADE0(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8240ade0
	ctx.lr = 0x823EF020;
	sub_8240ADE0(ctx, base);
	// lwz r3,-4904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4904);
	// li r4,30254
	ctx.r4.s64 = 30254;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823EF038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8218a1d8
	ctx.lr = 0x823EF050;
	sub_8218A1D8(ctx, base);
	// stb r31,367(r1)
	PPC_STORE_U8(ctx.r1.u32 + 367, ctx.r31.u8);
	// lis r7,-32186
	ctx.r7.s64 = -2109341696;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r7,5912
	ctx.r31.s64 = ctx.r7.s64 + 5912;
	// lwz r4,5912(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 5912);
	// bl 0x8218c730
	ctx.lr = 0x823EF06C;
	sub_8218C730(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8218c730
	ctx.lr = 0x823EF07C;
	sub_8218C730(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8218c730
	ctx.lr = 0x823EF08C;
	sub_8218C730(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a128
	ctx.lr = 0x823EF09C;
	sub_8218A128(ctx, base);
loc_823EF09C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823EF0A4"))) PPC_WEAK_FUNC(sub_823EF0A4);
PPC_FUNC_IMPL(__imp__sub_823EF0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF0A8"))) PPC_WEAK_FUNC(sub_823EF0A8);
PPC_FUNC_IMPL(__imp__sub_823EF0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r30,-28272
	ctx.r30.s64 = ctx.r30.s64 + -28272;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-12784
	ctx.r8.s64 = ctx.r11.s64 + -12784;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r10,-12920
	ctx.r7.s64 = ctx.r10.s64 + -12920;
	// addi r6,r9,-12932
	ctx.r6.s64 = ctx.r9.s64 + -12932;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// beq cr6,0x823ef10c
	if (ctx.cr6.eq) goto loc_823EF10C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EF10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EF10C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// lwz r3,-4308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4308);
	// lwz r30,-4392(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4392);
	// bl 0x823ec738
	ctx.lr = 0x823EF128;
	sub_823EC738(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ef184
	if (!ctx.cr6.eq) goto loc_823EF184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404088
	ctx.lr = 0x823EF138;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ef178
	if (ctx.cr6.eq) goto loc_823EF178;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e8918
	ctx.lr = 0x823EF154;
	sub_823E8918(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823e8918
	ctx.lr = 0x823EF178;
	sub_823E8918(ctx, base);
loc_823EF178:
	// bl 0x8223a9f8
	ctx.lr = 0x823EF17C;
	sub_8223A9F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223b4e8
	ctx.lr = 0x823EF184;
	sub_8223B4E8(ctx, base);
loc_823EF184:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// ori r10,r11,37384
	ctx.r10.u64 = ctx.r11.u64 | 37384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x823EF1A0;
	sub_823E8918(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r8,r9,37228
	ctx.r8.u64 = ctx.r9.u64 | 37228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823e8918
	ctx.lr = 0x823EF1BC;
	sub_823E8918(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r6,r7,37232
	ctx.r6.u64 = ctx.r7.u64 | 37232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x823e8918
	ctx.lr = 0x823EF1D8;
	sub_823E8918(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823EF1DC;
	sub_823C8E50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823e98d8
	ctx.lr = 0x823EF1E4;
	sub_823E98D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823e9980
	ctx.lr = 0x823EF1EC;
	sub_823E9980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824045e0
	ctx.lr = 0x823EF1F4;
	sub_824045E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EF20C"))) PPC_WEAK_FUNC(sub_823EF20C);
PPC_FUNC_IMPL(__imp__sub_823EF20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF210"))) PPC_WEAK_FUNC(sub_823EF210);
PPC_FUNC_IMPL(__imp__sub_823EF210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,1200
	ctx.r3.s64 = ctx.r3.s64 + 1200;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EF238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// ori r7,r9,37380
	ctx.r7.u64 = ctx.r9.u64 | 37380;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EF25C"))) PPC_WEAK_FUNC(sub_823EF25C);
PPC_FUNC_IMPL(__imp__sub_823EF25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF260"))) PPC_WEAK_FUNC(sub_823EF260);
PPC_FUNC_IMPL(__imp__sub_823EF260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,1200
	ctx.r3.s64 = ctx.r3.s64 + 1200;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EF288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ef2a0
	if (ctx.cr6.eq) goto loc_823EF2A0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r9,r11,37380
	ctx.r9.u64 = ctx.r11.u64 | 37380;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
loc_823EF2A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EF2B4"))) PPC_WEAK_FUNC(sub_823EF2B4);
PPC_FUNC_IMPL(__imp__sub_823EF2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF2B8"))) PPC_WEAK_FUNC(sub_823EF2B8);
PPC_FUNC_IMPL(__imp__sub_823EF2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823EF2C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r10,1200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// addi r31,r3,1200
	ctx.r31.s64 = ctx.r3.s64 + 1200;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823EF2F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823ef30c
	if (ctx.cr6.eq) goto loc_823EF30C;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x823ef310
	goto loc_823EF310;
loc_823EF30C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_823EF310:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EF318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r9,r11,37380
	ctx.r9.u64 = ctx.r11.u64 | 37380;
	// stwx r10,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823EF330"))) PPC_WEAK_FUNC(sub_823EF330);
PPC_FUNC_IMPL(__imp__sub_823EF330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8223ad48
	ctx.lr = 0x823EF34C;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ef3a8
	if (ctx.cr6.eq) goto loc_823EF3A8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-788(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea3e0
	ctx.lr = 0x823EF364;
	sub_821EA3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ef374
	if (ctx.cr6.eq) goto loc_823EF374;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea9b8
	ctx.lr = 0x823EF374;
	sub_821EA9B8(ctx, base);
loc_823EF374:
	// bl 0x8223a9f8
	ctx.lr = 0x823EF378;
	sub_8223A9F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223b4e8
	ctx.lr = 0x823EF380;
	sub_8223B4E8(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// bl 0x823ec710
	ctx.lr = 0x823EF38C;
	sub_823EC710(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r9,r11,37380
	ctx.r9.u64 = ctx.r11.u64 | 37380;
	// li r10,7
	ctx.r10.s64 = 7;
	// bne cr6,0x823ef3a4
	if (!ctx.cr6.eq) goto loc_823EF3A4;
	// li r10,5
	ctx.r10.s64 = 5;
loc_823EF3A4:
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
loc_823EF3A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EF3C0"))) PPC_WEAK_FUNC(sub_823EF3C0);
PPC_FUNC_IMPL(__imp__sub_823EF3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,15704
	ctx.r4.s64 = 15704;
	// ori r10,r11,37244
	ctx.r10.u64 = ctx.r11.u64 | 37244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// bl 0x82154c38
	ctx.lr = 0x823EF3E8;
	sub_82154C38(ctx, base);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// lwz r3,-4308(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4308);
	// bl 0x823ec6a8
	ctx.lr = 0x823EF3F4;
	sub_823EC6A8(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r7,6
	ctx.r7.s64 = 6;
	// ori r6,r8,37380
	ctx.r6.u64 = ctx.r8.u64 | 37380;
	// stwx r7,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EF418"))) PPC_WEAK_FUNC(sub_823EF418);
PPC_FUNC_IMPL(__imp__sub_823EF418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30551
	ctx.r4.s64 = 30551;
	// addi r3,r3,-28292
	ctx.r3.s64 = ctx.r3.s64 + -28292;
	// bl 0x82155c88
	ctx.lr = 0x823EF440;
	sub_82155C88(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// ori r10,r10,37380
	ctx.r10.u64 = ctx.r10.u64 | 37380;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EF464"))) PPC_WEAK_FUNC(sub_823EF464);
PPC_FUNC_IMPL(__imp__sub_823EF464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF468"))) PPC_WEAK_FUNC(sub_823EF468);
PPC_FUNC_IMPL(__imp__sub_823EF468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-28292
	ctx.r3.s64 = ctx.r3.s64 + -28292;
	// bl 0x82155dc0
	ctx.lr = 0x823EF488;
	sub_82155DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ef4a4
	if (!ctx.cr6.eq) goto loc_823EF4A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EF4A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EF4A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EF4B8"))) PPC_WEAK_FUNC(sub_823EF4B8);
PPC_FUNC_IMPL(__imp__sub_823EF4B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823ef4c8
	sub_823EF4C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EF4C0"))) PPC_WEAK_FUNC(sub_823EF4C0);
PPC_FUNC_IMPL(__imp__sub_823EF4C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823ef4c8
	sub_823EF4C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EF4C8"))) PPC_WEAK_FUNC(sub_823EF4C8);
PPC_FUNC_IMPL(__imp__sub_823EF4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ef0a8
	ctx.lr = 0x823EF4E8;
	sub_823EF0A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ef504
	if (ctx.cr6.eq) goto loc_823EF504;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823EF500;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823EF504:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EF51C"))) PPC_WEAK_FUNC(sub_823EF51C);
PPC_FUNC_IMPL(__imp__sub_823EF51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF520"))) PPC_WEAK_FUNC(sub_823EF520);
PPC_FUNC_IMPL(__imp__sub_823EF520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823EF528;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -240);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823ef628
	if (ctx.cr6.eq) goto loc_823EF628;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4388);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823ef628
	if (!ctx.cr6.eq) goto loc_823EF628;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x823EF55C;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x823EF56C;
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
	ctx.lr = 0x823EF580;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823EF58C;
	sub_821AD498(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37124
	ctx.r10.u64 = ctx.r11.u64 | 37124;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// blt cr6,0x823ef5f8
	if (ctx.cr6.lt) goto loc_823EF5F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,604(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 604);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823ef5f8
	if (!ctx.cr6.gt) goto loc_823EF5F8;
	// lwz r11,576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ef5f8
	if (ctx.cr6.eq) goto loc_823EF5F8;
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,576(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
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
	// stfs f0,132(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 132, temp.u32);
	// lwz r6,940(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// lwz r4,392(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// lwz r3,576(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// bl 0x8210a9b0
	ctx.lr = 0x823EF5F8;
	sub_8210A9B0(ctx, base);
loc_823EF5F8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,36988
	ctx.r10.u64 = ctx.r11.u64 | 36988;
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ef610
	if (ctx.cr6.eq) goto loc_823EF610;
	// bl 0x82154878
	ctx.lr = 0x823EF610;
	sub_82154878(ctx, base);
loc_823EF610:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x823EF61C;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x823EF628;
	sub_821AD498(ctx, base);
loc_823EF628:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823EF630"))) PPC_WEAK_FUNC(sub_823EF630);
PPC_FUNC_IMPL(__imp__sub_823EF630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x823EF638;
	sub_82248764(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r20,r31,1
	ctx.r20.s64 = ctx.r31.s64 + 65536;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r20,r20,-28324
	ctx.r20.s64 = ctx.r20.s64 + -28324;
	// bl 0x8218b408
	ctx.lr = 0x823EF658;
	sub_8218B408(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823EF664;
	sub_8218B408(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8218b408
	ctx.lr = 0x823EF66C;
	sub_8218B408(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x823EF678;
	sub_823C3280(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// ori r9,r11,37248
	ctx.r9.u64 = ctx.r11.u64 | 37248;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addis r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 65536;
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r24,r24,-28264
	ctx.r24.s64 = ctx.r24.s64 + -28264;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r8,r8,-28308
	ctx.r8.s64 = ctx.r8.s64 + -28308;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// addi r11,r24,-8
	ctx.r11.s64 = ctx.r24.s64 + -8;
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfic r6,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r9.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r4,r30
	ctx.r19.u64 = ctx.r4.u64 & ctx.r30.u64;
loc_823EF6E0:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stwu r5,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823ef6e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF6E0;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// li r4,722
	ctx.r4.s64 = 722;
	// addi r29,r29,-28152
	ctx.r29.s64 = ctx.r29.s64 + -28152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823ede38
	ctx.lr = 0x823EF714;
	sub_823EDE38(ctx, base);
	// lwz r10,16(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// li r4,720
	ctx.r4.s64 = 720;
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x823ede38
	ctx.lr = 0x823EF730;
	sub_823EDE38(ctx, base);
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r8,r10,5928
	ctx.r8.s64 = ctx.r10.s64 + 5928;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823EF744:
	// lwz r11,-8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ef764
	if (ctx.cr6.lt) goto loc_823EF764;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823EF764:
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ef784
	if (ctx.cr6.lt) goto loc_823EF784;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823EF784:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ef7a4
	if (ctx.cr6.lt) goto loc_823EF7A4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823EF7A4:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ef7c4
	if (ctx.cr6.lt) goto loc_823EF7C4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823EF7C4:
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ef7e4
	if (ctx.cr6.lt) goto loc_823EF7E4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823EF7E4:
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ef804
	if (ctx.cr6.lt) goto loc_823EF804;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823EF804:
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ef824
	if (ctx.cr6.lt) goto loc_823EF824;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823EF824:
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ef844
	if (ctx.cr6.lt) goto loc_823EF844;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823EF844:
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ef864
	if (ctx.cr6.lt) goto loc_823EF864;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823EF864:
	// lwz r11,92(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ef884
	if (ctx.cr6.lt) goto loc_823EF884;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823EF884:
	// addi r9,r9,104
	ctx.r9.s64 = ctx.r9.s64 + 104;
	// bdnz 0x823ef744
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF744;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x823ef8a8
	if (ctx.cr6.lt) goto loc_823EF8A8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_823EF8A8:
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823efc54
	if (ctx.cr6.eq) goto loc_823EFC54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r8,-48
	ctx.r30.s64 = ctx.r8.s64 + -48;
	// lis r22,-32177
	ctx.r22.s64 = -2108751872;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_823EF8C8:
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// lwz r29,-4308(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4308);
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823ec8d0
	ctx.lr = 0x823EF8E0;
	sub_823EC8D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ec978
	ctx.lr = 0x823EF8EC;
	sub_823EC978(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ef910
	if (ctx.cr6.lt) goto loc_823EF910;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r21,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r21.u32);
loc_823EF910:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ec8f8
	ctx.lr = 0x823EF91C;
	sub_823EC8F8(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r7.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r21.u32);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
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
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// bl 0x823ec9a0
	ctx.lr = 0x823EF9D4;
	sub_823EC9A0(ctx, base);
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// and r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 & ctx.r27.u64;
	// blt cr6,0x823efa00
	if (ctx.cr6.lt) goto loc_823EFA00;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r27.u32);
loc_823EFA00:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ecdb0
	ctx.lr = 0x823EFA0C;
	sub_823ECDB0(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r21.u32);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f6,120(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823efadc
	if (ctx.cr6.lt) goto loc_823EFADC;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r8,r27
	ctx.r8.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823EFADC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,96(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
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
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
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
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823efb84
	if (ctx.cr6.lt) goto loc_823EFB84;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823EFB84:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823efbb0
	if (ctx.cr6.lt) goto loc_823EFBB0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823EFBB0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// bne cr6,0x823efbc0
	if (!ctx.cr6.eq) goto loc_823EFBC0;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_823EFBC0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwzu r10,52(r30)
	ea = 52 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// fmuls f7,f11,f31
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f7,200(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// lfd f9,168(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fmuls f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// stfs f4,204(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 204, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f3,208(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 208, temp.u32);
	// blt cr6,0x823ef8c8
	if (ctx.cr6.lt) goto loc_823EF8C8;
loc_823EFC54:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_823EFC60"))) PPC_WEAK_FUNC(sub_823EFC60);
PPC_FUNC_IMPL(__imp__sub_823EFC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823EFC68;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-4308(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4308);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823ec8d0
	ctx.lr = 0x823EFC94;
	sub_823EC8D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823eca98
	ctx.lr = 0x823EFCA4;
	sub_823ECA98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82404088
	ctx.lr = 0x823EFCB0;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823efcf4
	if (ctx.cr6.eq) goto loc_823EFCF4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823eca50
	ctx.lr = 0x823EFCC4;
	sub_823ECA50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823efcf4
	if (ctx.cr6.eq) goto loc_823EFCF4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823eca48
	ctx.lr = 0x823EFCD8;
	sub_823ECA48(ctx, base);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823eca60
	ctx.lr = 0x823EFCE8;
	sub_823ECA60(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_823EFCF4:
	// lwz r11,832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,-28272
	ctx.r31.s64 = ctx.r31.s64 + -28272;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r28,4548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4548, ctx.r28.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x821d25f8
	ctx.lr = 0x823EFD14;
	sub_821D25F8(ctx, base);
	// lwz r8,832(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// ori r7,r9,51676
	ctx.r7.u64 = ctx.r9.u64 | 51676;
	// stwx r6,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823EFD34"))) PPC_WEAK_FUNC(sub_823EFD34);
PPC_FUNC_IMPL(__imp__sub_823EFD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EFD38"))) PPC_WEAK_FUNC(sub_823EFD38);
PPC_FUNC_IMPL(__imp__sub_823EFD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r30,-4308(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ec710
	ctx.lr = 0x823EFD60;
	sub_823EC710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823efdd8
	if (ctx.cr6.eq) goto loc_823EFDD8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37244
	ctx.r10.u64 = ctx.r11.u64 | 37244;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82154aa8
	ctx.lr = 0x823EFD78;
	sub_82154AA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ec738
	ctx.lr = 0x823EFD80;
	sub_823EC738(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823efdb4
	if (ctx.cr6.eq) goto loc_823EFDB4;
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,51652
	ctx.r8.u64 = ctx.r10.u64 | 51652;
	// ori r7,r9,37380
	ctx.r7.u64 = ctx.r9.u64 | 37380;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,9
	ctx.r4.s64 = 9;
	// stwx r6,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r4,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// b 0x823efdd8
	goto loc_823EFDD8;
loc_823EFDB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EFDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// ori r7,r9,37380
	ctx.r7.u64 = ctx.r9.u64 | 37380;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
loc_823EFDD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EFDF0"))) PPC_WEAK_FUNC(sub_823EFDF0);
PPC_FUNC_IMPL(__imp__sub_823EFDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821ebaa8
	ctx.lr = 0x823EFE0C;
	sub_821EBAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823efc60
	ctx.lr = 0x823EFE14;
	sub_823EFC60(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,37380
	ctx.r11.u64 = ctx.r11.u64 | 37380;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EFE40"))) PPC_WEAK_FUNC(sub_823EFE40);
PPC_FUNC_IMPL(__imp__sub_823EFE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823ef630
	ctx.lr = 0x823EFE58;
	sub_823EF630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823e98d8
	ctx.lr = 0x823EFE60;
	sub_823E98D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404130
	ctx.lr = 0x823EFE68;
	sub_82404130(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823EFE7C"))) PPC_WEAK_FUNC(sub_823EFE7C);
PPC_FUNC_IMPL(__imp__sub_823EFE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EFE80"))) PPC_WEAK_FUNC(sub_823EFE80);
PPC_FUNC_IMPL(__imp__sub_823EFE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823EFE88;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r10,6656
	ctx.r4.s64 = ctx.r10.s64 + 6656;
	// lwz r30,-4308(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ec768
	ctx.lr = 0x823EFEAC;
	sub_823EC768(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lwz r9,12032(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12032);
	// li r5,15706
	ctx.r5.s64 = 15706;
	// addi r29,r29,-28152
	ctx.r29.s64 = ctx.r29.s64 + -28152;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// li r4,718
	ctx.r4.s64 = 718;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// bl 0x82106f58
	ctx.lr = 0x823EFECC;
	sub_82106F58(ctx, base);
	// li r5,15706
	ctx.r5.s64 = 15706;
	// li r4,717
	ctx.r4.s64 = 717;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823EFEDC;
	sub_82106F58(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,168(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 168);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823EFEF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32177
	ctx.r6.s64 = -2108751872;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,-4392(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4392);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x823e8958
	ctx.lr = 0x823EFF08;
	sub_823E8958(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x823e8958
	ctx.lr = 0x823EFF1C;
	sub_823E8958(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x823e8958
	ctx.lr = 0x823EFF30;
	sub_823E8958(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x823e8958
	ctx.lr = 0x823EFF44;
	sub_823E8958(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823e8958
	ctx.lr = 0x823EFF58;
	sub_823E8958(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x823eff84
	if (ctx.cr6.eq) goto loc_823EFF84;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x823eff84
	if (ctx.cr6.eq) goto loc_823EFF84;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823eff8c
	if (ctx.cr6.eq) goto loc_823EFF8C;
loc_823EFF84:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_823EFF8C:
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// bl 0x823ee538
	ctx.lr = 0x823EFFCC;
	sub_823EE538(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823f0044
	if (!ctx.cr6.gt) goto loc_823F0044;
loc_823EFFDC:
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x823efff8
	if (ctx.cr6.eq) goto loc_823EFFF8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823effdc
	if (ctx.cr6.lt) goto loc_823EFFDC;
	// b 0x823f0044
	goto loc_823F0044;
loc_823EFFF8:
	// add r11,r25,r26
	ctx.r11.u64 = ctx.r25.u64 + ctx.r26.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823f0044
	if (ctx.cr6.eq) goto loc_823F0044;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee538
	ctx.lr = 0x823F0018;
	sub_823EE538(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x823f0044
	if (!ctx.cr6.gt) goto loc_823F0044;
loc_823F0020:
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
	// bl 0x823ee560
	ctx.lr = 0x823F003C;
	sub_823EE560(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x823f0020
	if (!ctx.cr0.eq) goto loc_823F0020;
loc_823F0044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823efc60
	ctx.lr = 0x823F004C;
	sub_823EFC60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F0064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed490
	ctx.lr = 0x823F006C;
	sub_823ED490(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823F0074"))) PPC_WEAK_FUNC(sub_823F0074);
PPC_FUNC_IMPL(__imp__sub_823F0074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F0078"))) PPC_WEAK_FUNC(sub_823F0078);
PPC_FUNC_IMPL(__imp__sub_823F0078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37380
	ctx.r10.u64 = ctx.r11.u64 | 37380;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32193
	ctx.r12.s64 = -2109800448;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,168
	ctx.r12.s64 = ctx.r12.s64 + 168;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823F00A8"))) PPC_WEAK_FUNC(sub_823F00A8);
PPC_FUNC_IMPL(__imp__sub_823F00A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,208(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r17,212(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r17,216(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r17,220(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r17,224(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r17,228(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r17,232(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r17,244(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r17,236(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r17,240(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// b 0x823ef210
	sub_823EF210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F00D4"))) PPC_WEAK_FUNC(sub_823F00D4);
PPC_FUNC_IMPL(__imp__sub_823F00D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ef260
	sub_823EF260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F00D8"))) PPC_WEAK_FUNC(sub_823F00D8);
PPC_FUNC_IMPL(__imp__sub_823F00D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ef2b8
	sub_823EF2B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F00DC"))) PPC_WEAK_FUNC(sub_823F00DC);
PPC_FUNC_IMPL(__imp__sub_823F00DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ef330
	sub_823EF330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F00E0"))) PPC_WEAK_FUNC(sub_823F00E0);
PPC_FUNC_IMPL(__imp__sub_823F00E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ef3c0
	sub_823EF3C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F00E4"))) PPC_WEAK_FUNC(sub_823F00E4);
PPC_FUNC_IMPL(__imp__sub_823F00E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x823efd38
	sub_823EFD38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F00E8"))) PPC_WEAK_FUNC(sub_823F00E8);
PPC_FUNC_IMPL(__imp__sub_823F00E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823efdf0
	sub_823EFDF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F00EC"))) PPC_WEAK_FUNC(sub_823F00EC);
PPC_FUNC_IMPL(__imp__sub_823F00EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ef418
	sub_823EF418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F00F0"))) PPC_WEAK_FUNC(sub_823F00F0);
PPC_FUNC_IMPL(__imp__sub_823F00F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ef468
	sub_823EF468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F00F4"))) PPC_WEAK_FUNC(sub_823F00F4);
PPC_FUNC_IMPL(__imp__sub_823F00F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F00F8"))) PPC_WEAK_FUNC(sub_823F00F8);
PPC_FUNC_IMPL(__imp__sub_823F00F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ede10
	ctx.lr = 0x823F0114;
	sub_823EDE10(ctx, base);
	// addi r30,r31,-28
	ctx.r30.s64 = ctx.r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823efc60
	ctx.lr = 0x823F0120;
	sub_823EFC60(ctx, base);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F0138;
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

__attribute__((alias("__imp__sub_823F0150"))) PPC_WEAK_FUNC(sub_823F0150);
PPC_FUNC_IMPL(__imp__sub_823F0150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823F0158;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82404480
	ctx.lr = 0x823F0168;
	sub_82404480(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// ori r11,r11,37264
	ctx.r11.u64 = ctx.r11.u64 | 37264;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r9,-12784
	ctx.r6.s64 = ctx.r9.s64 + -12784;
	// addi r5,r8,-12920
	ctx.r5.s64 = ctx.r8.s64 + -12920;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r4,r7,-12932
	ctx.r4.s64 = ctx.r7.s64 + -12932;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// add r27,r31,r11
	ctx.r27.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// stw r4,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r4.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_823F01B0:
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823f01b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F01B0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// ori r10,r11,37384
	ctx.r10.u64 = ctx.r11.u64 | 37384;
	// addi r29,r29,-28156
	ctx.r29.s64 = ctx.r29.s64 + -28156;
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r9,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r9.u32);
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// bl 0x82182e90
	ctx.lr = 0x823F01E0;
	sub_82182E90(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x823F01E8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x823F01F4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x823F01F8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823f0210
	if (ctx.cr6.eq) goto loc_823F0210;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82183448
	ctx.lr = 0x823F020C;
	sub_82183448(ctx, base);
	// b 0x823f0218
	goto loc_823F0218;
loc_823F0210:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x821845a0
	ctx.lr = 0x823F0218;
	sub_821845A0(ctx, base);
loc_823F0218:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f0228
	if (ctx.cr6.eq) goto loc_823F0228;
	// bl 0x821b29d0
	ctx.lr = 0x823F0224;
	sub_821B29D0(ctx, base);
	// b 0x823f022c
	goto loc_823F022C;
loc_823F0228:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823F022C:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823F0250;
	sub_823C31B0(ctx, base);
	// li r5,15706
	ctx.r5.s64 = 15706;
	// li r4,718
	ctx.r4.s64 = 718;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F0260;
	sub_82106F58(ctx, base);
	// li r5,15706
	ctx.r5.s64 = 15706;
	// li r4,717
	ctx.r4.s64 = 717;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F0270;
	sub_82106F58(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,168(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F0284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823F028C;
	sub_823C8DF0(ctx, base);
	// bl 0x8223a9f8
	ctx.lr = 0x823F0290;
	sub_8223A9F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223b4e8
	ctx.lr = 0x823F0298;
	sub_8223B4E8(ctx, base);
	// bl 0x8223a9f8
	ctx.lr = 0x823F029C;
	sub_8223A9F8(ctx, base);
	// bl 0x8223b2d8
	ctx.lr = 0x823F02A0;
	sub_8223B2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f02d0
	if (!ctx.cr6.eq) goto loc_823F02D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x823F02B0;
	sub_821EBAA8(ctx, base);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c98
	ctx.lr = 0x823F02BC;
	sub_823C3C98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823F02C4;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823F02D0:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// bl 0x823ec710
	ctx.lr = 0x823F02DC;
	sub_823EC710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f0310
	if (!ctx.cr6.eq) goto loc_823F0310;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x823F02EC;
	sub_821EBAA8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x823c3c98
	ctx.lr = 0x823F02FC;
	sub_823C3C98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823F0304;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823F0310:
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x823efe80
	ctx.lr = 0x823F0320;
	sub_823EFE80(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x823F0328;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823F0334"))) PPC_WEAK_FUNC(sub_823F0334);
PPC_FUNC_IMPL(__imp__sub_823F0334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F0338"))) PPC_WEAK_FUNC(sub_823F0338);
PPC_FUNC_IMPL(__imp__sub_823F0338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82244d00
	ctx.lr = 0x823F0350;
	sub_82244D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f035c
	if (ctx.cr6.eq) goto loc_823F035C;
	// bl 0x82244aa0
	ctx.lr = 0x823F035C;
	sub_82244AA0(ctx, base);
loc_823F035C:
	// bl 0x82244cb0
	ctx.lr = 0x823F0360;
	sub_82244CB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82247ac8
	ctx.lr = 0x823F0368;
	sub_82247AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404138
	ctx.lr = 0x823F0370;
	sub_82404138(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F0384"))) PPC_WEAK_FUNC(sub_823F0384);
PPC_FUNC_IMPL(__imp__sub_823F0384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F0388"))) PPC_WEAK_FUNC(sub_823F0388);
PPC_FUNC_IMPL(__imp__sub_823F0388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82244d00
	ctx.lr = 0x823F03A0;
	sub_82244D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f03ac
	if (ctx.cr6.eq) goto loc_823F03AC;
	// bl 0x82244aa0
	ctx.lr = 0x823F03AC;
	sub_82244AA0(ctx, base);
loc_823F03AC:
	// bl 0x82244cb0
	ctx.lr = 0x823F03B0;
	sub_82244CB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82247ac8
	ctx.lr = 0x823F03B8;
	sub_82247AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824047b0
	ctx.lr = 0x823F03C0;
	sub_824047B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F03D4"))) PPC_WEAK_FUNC(sub_823F03D4);
PPC_FUNC_IMPL(__imp__sub_823F03D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F03D8"))) PPC_WEAK_FUNC(sub_823F03D8);
PPC_FUNC_IMPL(__imp__sub_823F03D8) {
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
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bl 0x82404088
	ctx.lr = 0x823F03EC;
	sub_82404088(ctx, base);
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

__attribute__((alias("__imp__sub_823F0404"))) PPC_WEAK_FUNC(sub_823F0404);
PPC_FUNC_IMPL(__imp__sub_823F0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F0408"))) PPC_WEAK_FUNC(sub_823F0408);
PPC_FUNC_IMPL(__imp__sub_823F0408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823ede10
	ctx.lr = 0x823F0420;
	sub_823EDE10(ctx, base);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F0438;
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

__attribute__((alias("__imp__sub_823F044C"))) PPC_WEAK_FUNC(sub_823F044C);
PPC_FUNC_IMPL(__imp__sub_823F044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F0450"))) PPC_WEAK_FUNC(sub_823F0450);
PPC_FUNC_IMPL(__imp__sub_823F0450) {
	PPC_FUNC_PROLOGUE();
	// b 0x820f3a78
	sub_820F3A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F0454"))) PPC_WEAK_FUNC(sub_823F0454);
PPC_FUNC_IMPL(__imp__sub_823F0454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F0458"))) PPC_WEAK_FUNC(sub_823F0458);
PPC_FUNC_IMPL(__imp__sub_823F0458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823F0460;
	sub_82248780(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f04f0
	if (ctx.cr6.eq) goto loc_823F04F0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823f04f0
	if (!ctx.cr6.gt) goto loc_823F04F0;
	// li r4,400
	ctx.r4.s64 = 400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x823F0488;
	sub_822AA648(ctx, base);
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-26964
	ctx.r28.s64 = ctx.r28.s64 + -26964;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f04e4
	if (ctx.cr6.eq) goto loc_823F04E4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_823F04AC:
	// lwz r30,-4308(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4308);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ec8d0
	ctx.lr = 0x823F04BC;
	sub_823EC8D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823eca40
	ctx.lr = 0x823F04CC;
	sub_823ECA40(ctx, base);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823f04ac
	if (ctx.cr6.lt) goto loc_823F04AC;
loc_823F04E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82084850
	ctx.lr = 0x823F04F0;
	sub_82084850(ctx, base);
loc_823F04F0:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823F04F8"))) PPC_WEAK_FUNC(sub_823F04F8);
PPC_FUNC_IMPL(__imp__sub_823F04F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823F0500;
	sub_8224876C(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82404480
	ctx.lr = 0x823F0510;
	sub_82404480(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r10,-12440
	ctx.r7.s64 = ctx.r10.s64 + -12440;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r9,-12576
	ctx.r6.s64 = ctx.r9.s64 + -12576;
	// addi r5,r8,-12588
	ctx.r5.s64 = ctx.r8.s64 + -12588;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r11,r11,-28276
	ctx.r11.s64 = ctx.r11.s64 + -28276;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823F054C:
	// stw r21,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// stwu r28,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823f054c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F054C;
	// addis r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 65536;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r24,r24,-28168
	ctx.r24.s64 = ctx.r24.s64 + -28168;
	// addi r30,r30,-26964
	ctx.r30.s64 = ctx.r30.s64 + -26964;
	// lis r26,-32177
	ctx.r26.s64 = -2108751872;
	// li r11,134
	ctx.r11.s64 = 134;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r28,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r28.u32);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-4392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4392);
	// lwz r8,2756(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r29,-4308(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4308);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ec768
	ctx.lr = 0x823F05A8;
	sub_823EC768(ctx, base);
	// lwz r7,12032(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12032);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// li r5,1200
	ctx.r5.s64 = 1200;
	// addi r27,r27,-28164
	ctx.r27.s64 = ctx.r27.s64 + -28164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823f0458
	ctx.lr = 0x823F05C8;
	sub_823F0458(ctx, base);
	// lwz r3,-4392(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4392);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F05DC;
	sub_823E8958(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x823e8958
	ctx.lr = 0x823F05F0;
	sub_823E8958(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x823e8958
	ctx.lr = 0x823F0604;
	sub_823E8958(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x823e8958
	ctx.lr = 0x823F0618;
	sub_823E8958(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F062C;
	sub_823E8958(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// beq cr6,0x823f0654
	if (ctx.cr6.eq) goto loc_823F0654;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x823f0654
	if (ctx.cr6.eq) goto loc_823F0654;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823f065c
	if (ctx.cr6.eq) goto loc_823F065C;
loc_823F0654:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_823F065C:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// bl 0x823ee538
	ctx.lr = 0x823F0698;
	sub_823EE538(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823f0720
	if (!ctx.cr6.gt) goto loc_823F0720;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_823F06AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r25,r9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823f06d4
	if (ctx.cr6.eq) goto loc_823F06D4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823f06ac
	if (ctx.cr6.lt) goto loc_823F06AC;
	// b 0x823f0720
	goto loc_823F0720;
loc_823F06D4:
	// add r11,r22,r23
	ctx.r11.u64 = ctx.r22.u64 + ctx.r23.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823f0720
	if (ctx.cr6.eq) goto loc_823F0720;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee538
	ctx.lr = 0x823F06F4;
	sub_823EE538(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823f0720
	if (!ctx.cr6.gt) goto loc_823F0720;
loc_823F06FC:
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
	// bl 0x823ee560
	ctx.lr = 0x823F0718;
	sub_823EE560(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823f06fc
	if (!ctx.cr0.eq) goto loc_823F06FC;
loc_823F0720:
	// bl 0x82244cb0
	ctx.lr = 0x823F0724;
	sub_82244CB0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82247ac8
	ctx.lr = 0x823F072C;
	sub_82247AC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823F074C;
	sub_823C31B0(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x823eb238
	ctx.lr = 0x823F0754;
	sub_823EB238(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// li r4,567
	ctx.r4.s64 = 567;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82106f58
	ctx.lr = 0x823F0768;
	sub_82106F58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,566
	ctx.r4.s64 = 566;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F0778;
	sub_82106F58(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,168(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F078C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823F0794;
	sub_823C8DF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824040e0
	ctx.lr = 0x823F07A0;
	sub_824040E0(ctx, base);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r6,r7,64
	ctx.r6.u64 = ctx.r7.u64 | 64;
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// bl 0x823ed490
	ctx.lr = 0x823F07B4;
	sub_823ED490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823F07C0"))) PPC_WEAK_FUNC(sub_823F07C0);
PPC_FUNC_IMPL(__imp__sub_823F07C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823f0f40
	sub_823F0F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F07C8"))) PPC_WEAK_FUNC(sub_823F07C8);
PPC_FUNC_IMPL(__imp__sub_823F07C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823f0f40
	sub_823F0F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F07D0"))) PPC_WEAK_FUNC(sub_823F07D0);
PPC_FUNC_IMPL(__imp__sub_823F07D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r8,r11,-12440
	ctx.r8.s64 = ctx.r11.s64 + -12440;
	// addi r7,r10,-12576
	ctx.r7.s64 = ctx.r10.s64 + -12576;
	// addi r6,r9,-12588
	ctx.r6.s64 = ctx.r9.s64 + -12588;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r5,-32177
	ctx.r5.s64 = -2108751872;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-4392(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4392);
	// bl 0x82404088
	ctx.lr = 0x823F0818;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f0878
	if (ctx.cr6.eq) goto loc_823F0878;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f0840
	if (ctx.cr0.lt) goto loc_823F0840;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x823f0848
	if (ctx.cr6.lt) goto loc_823F0848;
loc_823F0840:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// b 0x823f085c
	goto loc_823F085C;
loc_823F0848:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
loc_823F085C:
	// addi r11,r11,-28164
	ctx.r11.s64 = ctx.r11.s64 + -28164;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x823e8918
	ctx.lr = 0x823F0878;
	sub_823E8918(ctx, base);
loc_823F0878:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// ori r10,r11,38572
	ctx.r10.u64 = ctx.r11.u64 | 38572;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F0894;
	sub_823E8918(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r8,r9,37228
	ctx.r8.u64 = ctx.r9.u64 | 37228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F08B0;
	sub_823E8918(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r6,r7,37232
	ctx.r6.u64 = ctx.r7.u64 | 37232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F08CC;
	sub_823E8918(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823F08D0;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824045e0
	ctx.lr = 0x823F08D8;
	sub_824045E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F08F0"))) PPC_WEAK_FUNC(sub_823F08F0);
PPC_FUNC_IMPL(__imp__sub_823F08F0) {
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
	// bl 0x82244d00
	ctx.lr = 0x823F0908;
	sub_82244D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f098c
	if (ctx.cr6.eq) goto loc_823F098C;
	// addi r10,r31,-28
	ctx.r10.s64 = ctx.r31.s64 + -28;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f0944
	if (ctx.cr0.lt) goto loc_823F0944;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x823f0944
	if (!ctx.cr6.lt) goto loc_823F0944;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823F0944:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-28164
	ctx.r11.s64 = ctx.r11.s64 + -28164;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,3692(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3692);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lbz r6,3(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r5,2(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lhz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// bl 0x82244938
	ctx.lr = 0x823F098C;
	sub_82244938(ctx, base);
loc_823F098C:
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

__attribute__((alias("__imp__sub_823F09A0"))) PPC_WEAK_FUNC(sub_823F09A0);
PPC_FUNC_IMPL(__imp__sub_823F09A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x823F09A8;
	sub_8224875C(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r18,r31,1
	ctx.r18.s64 = ctx.r31.s64 + 65536;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r18,r18,-28324
	ctx.r18.s64 = ctx.r18.s64 + -28324;
	// bl 0x8218b408
	ctx.lr = 0x823F09C8;
	sub_8218B408(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823F09D4;
	sub_8218B408(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8218b408
	ctx.lr = 0x823F09DC;
	sub_8218B408(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x823F09E8;
	sub_823C3280(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// ori r9,r11,37248
	ctx.r9.u64 = ctx.r11.u64 | 37248;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r28,r28,-28268
	ctx.r28.s64 = ctx.r28.s64 + -28268;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r8,r8,-28308
	ctx.r8.s64 = ctx.r8.s64 + -28308;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// addi r11,r28,-8
	ctx.r11.s64 = ctx.r28.s64 + -8;
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfic r6,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r9.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r17,r4,r30
	ctx.r17.u64 = ctx.r4.u64 & ctx.r30.u64;
loc_823F0A50:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stwu r5,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823f0a50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F0A50;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// li r4,571
	ctx.r4.s64 = 571;
	// addi r29,r29,-26964
	ctx.r29.s64 = ctx.r29.s64 + -26964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823ede38
	ctx.lr = 0x823F0A84;
	sub_823EDE38(ctx, base);
	// lwz r10,16(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// li r4,569
	ctx.r4.s64 = 569;
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x823ede38
	ctx.lr = 0x823F0AA0;
	sub_823EDE38(ctx, base);
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r8,r10,6696
	ctx.r8.s64 = ctx.r10.s64 + 6696;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F0AB4:
	// lwz r11,-8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f0ad4
	if (ctx.cr6.lt) goto loc_823F0AD4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823F0AD4:
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f0af4
	if (ctx.cr6.lt) goto loc_823F0AF4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823F0AF4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f0b14
	if (ctx.cr6.lt) goto loc_823F0B14;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823F0B14:
	// lwz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f0b34
	if (ctx.cr6.lt) goto loc_823F0B34;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823F0B34:
	// lwz r11,104(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f0b54
	if (ctx.cr6.lt) goto loc_823F0B54;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r30.u32);
loc_823F0B54:
	// addi r9,r9,116
	ctx.r9.s64 = ctx.r9.s64 + 116;
	// bdnz 0x823f0ab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F0AB4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,13
	ctx.r10.s64 = 13;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x823f0b78
	if (ctx.cr6.lt) goto loc_823F0B78;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_823F0B78:
	// lwz r20,0(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x823f0f34
	if (ctx.cr6.eq) goto loc_823F0F34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r8,8
	ctx.r30.s64 = ctx.r8.s64 + 8;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// lis r21,-32177
	ctx.r21.s64 = -2108751872;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// ori r22,r10,37372
	ctx.r22.u64 = ctx.r10.u64 | 37372;
loc_823F0BA4:
	// lwz r11,20(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// lwz r28,-4308(r21)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4308);
	// add r29,r25,r11
	ctx.r29.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823ec8d0
	ctx.lr = 0x823F0BBC;
	sub_823EC8D0(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r27,r10,r22
	ctx.r27.u64 = ctx.r10.u64 + ctx.r22.u64;
	// bl 0x823ec978
	ctx.lr = 0x823F0BDC;
	sub_823EC978(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f0c00
	if (ctx.cr6.lt) goto loc_823F0C00;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r19,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r19.u32);
loc_823F0C00:
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820844f8
	ctx.lr = 0x823F0C14;
	sub_820844F8(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
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
	// stw r19,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r19.u32);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f0cdc
	if (ctx.cr6.lt) goto loc_823F0CDC;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r24.u32);
loc_823F0CDC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ecdb0
	ctx.lr = 0x823F0CE8;
	sub_823ECDB0(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r19,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r19.u32);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f6,120(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f0db8
	if (ctx.cr6.lt) goto loc_823F0DB8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r8,r24
	ctx.r8.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823F0DB8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
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
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
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
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f0e60
	if (ctx.cr6.lt) goto loc_823F0E60;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823F0E60:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f0e8c
	if (ctx.cr6.lt) goto loc_823F0E8C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823F0E8C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// bne cr6,0x823f0e9c
	if (!ctx.cr6.eq) goto loc_823F0E9C;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
loc_823F0E9C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r30,r30,116
	ctx.r30.s64 = ctx.r30.s64 + 116;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lfd f12,168(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// cmplw cr6,r25,r20
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r20.u32, ctx.xer);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f7,200(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f4,204(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// blt cr6,0x823f0ba4
	if (ctx.cr6.lt) goto loc_823F0BA4;
loc_823F0F34:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_823F0F40"))) PPC_WEAK_FUNC(sub_823F0F40);
PPC_FUNC_IMPL(__imp__sub_823F0F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f07d0
	ctx.lr = 0x823F0F60;
	sub_823F07D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f0f7c
	if (ctx.cr6.eq) goto loc_823F0F7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823F0F78;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823F0F7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F0F94"))) PPC_WEAK_FUNC(sub_823F0F94);
PPC_FUNC_IMPL(__imp__sub_823F0F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F0F98"))) PPC_WEAK_FUNC(sub_823F0F98);
PPC_FUNC_IMPL(__imp__sub_823F0F98) {
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
	// bl 0x823f09a0
	ctx.lr = 0x823F0FB4;
	sub_823F09A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82404088
	ctx.lr = 0x823F0FC0;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f1054
	if (ctx.cr6.eq) goto loc_823F1054;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x823F0FD0;
	sub_8218B408(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r9,27592
	ctx.r7.u64 = ctx.r9.u64 | 27592;
	// ori r5,r8,27596
	ctx.r5.u64 = ctx.r8.u64 | 27596;
	// lfs f0,11300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// ori r8,r9,27600
	ctx.r8.u64 = ctx.r9.u64 | 27600;
	// li r30,1
	ctx.r30.s64 = 1;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsx f10,r4,r7
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f6,r7,r5
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x823f10d8
	goto loc_823F10D8;
loc_823F1054:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823F105C;
	sub_8218B408(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r9,27592
	ctx.r7.u64 = ctx.r9.u64 | 27592;
	// ori r5,r8,27596
	ctx.r5.u64 = ctx.r8.u64 | 27596;
	// lfs f0,11300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// ori r8,r9,27600
	ctx.r8.u64 = ctx.r9.u64 | 27600;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsx f10,r4,r7
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f6,r7,r5
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_823F10D8:
	// fcfid f4,f5
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(ctx.f5.s64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsx f2,r11,r8
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,4548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4548, ctx.r30.u32);
	// bl 0x82404130
	ctx.lr = 0x823F1100;
	sub_82404130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F1118"))) PPC_WEAK_FUNC(sub_823F1118);
PPC_FUNC_IMPL(__imp__sub_823F1118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// li r10,18
	ctx.r10.s64 = 18;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r30,-4308(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4308);
	// beq cr6,0x823f1174
	if (ctx.cr6.eq) goto loc_823F1174;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x823f1168
	if (ctx.cr6.eq) goto loc_823F1168;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// bne cr6,0x823f1178
	if (!ctx.cr6.eq) goto loc_823F1178;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x823f1178
	goto loc_823F1178;
loc_823F1168:
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x823f1178
	goto loc_823F1178;
loc_823F1174:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_823F1178:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ec768
	ctx.lr = 0x823F1188;
	sub_823EC768(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r9,12032(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12032);
	// ori r10,r11,45336
	ctx.r10.u64 = ctx.r11.u64 | 45336;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F11B0"))) PPC_WEAK_FUNC(sub_823F11B0);
PPC_FUNC_IMPL(__imp__sub_823F11B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,832(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// addi r30,r30,-28208
	ctx.r30.s64 = ctx.r30.s64 + -28208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,15812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15812, ctx.r11.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,15524(r6)
	PPC_STORE_U32(ctx.r6.u32 + 15524, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,-4392(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4392);
	// bl 0x823e89a0
	ctx.lr = 0x823F11FC;
	sub_823E89A0(ctx, base);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r11,r4,57564
	ctx.r11.u64 = ctx.r4.u64 | 57564;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823e97f0
	ctx.lr = 0x823F1218;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,482
	ctx.r4.s64 = 482;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F122C;
	sub_82106F58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,481
	ctx.r4.s64 = 481;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F123C;
	sub_82106F58(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,168(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F1250;
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

__attribute__((alias("__imp__sub_823F1268"))) PPC_WEAK_FUNC(sub_823F1268);
PPC_FUNC_IMPL(__imp__sub_823F1268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823F1270;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r15,-32177
	ctx.r15.s64 = -2108751872;
	// addis r16,r31,1
	ctx.r16.s64 = ctx.r31.s64 + 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r16,r16,-28324
	ctx.r16.s64 = ctx.r16.s64 + -28324;
	// lwz r14,-4392(r15)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4392);
	// bl 0x8218b408
	ctx.lr = 0x823F1298;
	sub_8218B408(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823F12A4;
	sub_8218B408(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8218b408
	ctx.lr = 0x823F12AC;
	sub_8218B408(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x823F12B8;
	sub_823C3280(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r8,r8,-28308
	ctx.r8.s64 = ctx.r8.s64 + -28308;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// ori r7,r11,37248
	ctx.r7.u64 = ctx.r11.u64 | 37248;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addis r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r21,r21,-28268
	ctx.r21.s64 = ctx.r21.s64 + -28268;
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// ori r7,r5,37284
	ctx.r7.u64 = ctx.r5.u64 | 37284;
	// cntlzw r5,r4
	ctx.r5.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// ori r6,r6,37276
	ctx.r6.u64 = ctx.r6.u64 | 37276;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r4,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r4.u32);
	// ori r4,r9,37292
	ctx.r4.u64 = ctx.r9.u64 | 37292;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// stwx r9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// ori r9,r5,37300
	ctx.r9.u64 = ctx.r5.u64 | 37300;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// rlwinm r6,r5,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// ori r5,r10,37308
	ctx.r5.u64 = ctx.r10.u64 | 37308;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// and r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 & ctx.r25.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// ori r7,r7,37316
	ctx.r7.u64 = ctx.r7.u64 | 37316;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// ori r6,r6,37324
	ctx.r6.u64 = ctx.r6.u64 | 37324;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stwx r4,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r11,-5
	ctx.r4.s64 = ctx.r11.s64 + -5;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-6
	ctx.r10.s64 = ctx.r11.s64 + -6;
	// addi r30,r30,-20200
	ctx.r30.s64 = ctx.r30.s64 + -20200;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,486
	ctx.r4.s64 = 486;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stwx r5,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stwx r9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823ede38
	ctx.lr = 0x823F13FC;
	sub_823EDE38(ctx, base);
	// lwz r10,16(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// li r4,484
	ctx.r4.s64 = 484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x823ede38
	ctx.lr = 0x823F1418;
	sub_823EDE38(ctx, base);
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r8,r10,8208
	ctx.r8.s64 = ctx.r10.s64 + 8208;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F142C:
	// lwz r11,-8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f144c
	if (ctx.cr6.lt) goto loc_823F144C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F144C:
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f146c
	if (ctx.cr6.lt) goto loc_823F146C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F146C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f148c
	if (ctx.cr6.lt) goto loc_823F148C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F148C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f14ac
	if (ctx.cr6.lt) goto loc_823F14AC;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F14AC:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f14cc
	if (ctx.cr6.lt) goto loc_823F14CC;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F14CC:
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f14ec
	if (ctx.cr6.lt) goto loc_823F14EC;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F14EC:
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f150c
	if (ctx.cr6.lt) goto loc_823F150C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F150C:
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f152c
	if (ctx.cr6.lt) goto loc_823F152C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F152C:
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f154c
	if (ctx.cr6.lt) goto loc_823F154C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F154C:
	// lwz r11,60(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f156c
	if (ctx.cr6.lt) goto loc_823F156C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F156C:
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f158c
	if (ctx.cr6.lt) goto loc_823F158C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F158C:
	// lwz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f15ac
	if (ctx.cr6.lt) goto loc_823F15AC;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F15AC:
	// lwz r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f15cc
	if (ctx.cr6.lt) goto loc_823F15CC;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F15CC:
	// lwz r11,108(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f15ec
	if (ctx.cr6.lt) goto loc_823F15EC;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F15EC:
	// lwz r11,112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f160c
	if (ctx.cr6.lt) goto loc_823F160C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F160C:
	// lwz r11,116(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f162c
	if (ctx.cr6.lt) goto loc_823F162C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F162C:
	// lwz r11,120(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f164c
	if (ctx.cr6.lt) goto loc_823F164C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F164C:
	// lwz r11,124(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f166c
	if (ctx.cr6.lt) goto loc_823F166C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F166C:
	// lwz r11,128(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f168c
	if (ctx.cr6.lt) goto loc_823F168C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F168C:
	// lwz r11,132(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f16ac
	if (ctx.cr6.lt) goto loc_823F16AC;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F16AC:
	// lwz r11,136(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f16cc
	if (ctx.cr6.lt) goto loc_823F16CC;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F16CC:
	// lwz r11,172(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f16ec
	if (ctx.cr6.lt) goto loc_823F16EC;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F16EC:
	// lwz r11,176(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f170c
	if (ctx.cr6.lt) goto loc_823F170C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F170C:
	// lwz r11,180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f172c
	if (ctx.cr6.lt) goto loc_823F172C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F172C:
	// lwz r11,184(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f174c
	if (ctx.cr6.lt) goto loc_823F174C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F174C:
	// lwz r11,188(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f176c
	if (ctx.cr6.lt) goto loc_823F176C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F176C:
	// lwz r11,192(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f178c
	if (ctx.cr6.lt) goto loc_823F178C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F178C:
	// lwz r11,196(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f17ac
	if (ctx.cr6.lt) goto loc_823F17AC;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F17AC:
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f17cc
	if (ctx.cr6.lt) goto loc_823F17CC;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F17CC:
	// lwz r11,236(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f17ec
	if (ctx.cr6.lt) goto loc_823F17EC;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F17EC:
	// lwz r11,240(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f180c
	if (ctx.cr6.lt) goto loc_823F180C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F180C:
	// lwz r11,244(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f182c
	if (ctx.cr6.lt) goto loc_823F182C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F182C:
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// bdnz 0x823f142c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F142C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x823f1850
	if (ctx.cr6.lt) goto loc_823F1850;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_823F1850:
	// lwz r17,0(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x823f1e40
	if (ctx.cr6.eq) goto loc_823F1E40;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r8,16
	ctx.r30.s64 = ctx.r8.s64 + 16;
	// lis r20,-32177
	ctx.r20.s64 = -2108751872;
	// ori r19,r10,37328
	ctx.r19.u64 = ctx.r10.u64 | 37328;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_823F187C:
	// bl 0x8223a960
	ctx.lr = 0x823F1880;
	sub_8223A960(ctx, base);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r28,-4308(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4308);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// add r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823ec8d0
	ctx.lr = 0x823F189C;
	sub_823EC8D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ec978
	ctx.lr = 0x823F18AC;
	sub_823EC978(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f18d0
	if (ctx.cr6.lt) goto loc_823F18D0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r23.u32);
loc_823F18D0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ec8f8
	ctx.lr = 0x823F18DC;
	sub_823EC8F8(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r23.u32);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r7,4(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// lfd f10,184(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,8(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// lfd f6,240(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f19a4
	if (ctx.cr6.lt) goto loc_823F19A4;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r27.u32);
loc_823F19A4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ecdb0
	ctx.lr = 0x823F19B0;
	sub_823ECDB0(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r23.u32);
	// lwz r5,0(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// std r4,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r4.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lfd f0,256(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f10,200(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r6,8(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lfd f6,152(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f1a80
	if (ctx.cr6.lt) goto loc_823F1A80;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r8,r27
	ctx.r8.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823F1A80:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
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
	// lwz r5,4(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lfd f10,168(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
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
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,8(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// lfd f6,216(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f1b28
	if (ctx.cr6.lt) goto loc_823F1B28;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823F1B28:
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f1b54
	if (ctx.cr6.lt) goto loc_823F1B54;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823F1B54:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x823f1b68
	if (!ctx.cr6.eq) goto loc_823F1B68;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_823F1B68:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r5,-12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r6,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r6.u64);
	// lfd f13,248(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f9,200(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfd f6,136(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f7,204(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f3,208(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// bl 0x823eca58
	ctx.lr = 0x823F1BF8;
	sub_823ECA58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f1dec
	if (ctx.cr6.eq) goto loc_823F1DEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823eca40
	ctx.lr = 0x823F1C10;
	sub_823ECA40(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r5,r31,r19
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r19.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r28,r31,r19
	ctx.r28.u64 = ctx.r31.u64 + ctx.r19.u64;
	// bl 0x822368d8
	ctx.lr = 0x823F1C2C;
	sub_822368D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f1e2c
	if (ctx.cr6.eq) goto loc_823F1E2C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822365f0
	ctx.lr = 0x823F1C48;
	sub_822365F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f1e2c
	if (ctx.cr6.eq) goto loc_823F1E2C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4392(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4392);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823e8a90
	ctx.lr = 0x823F1C64;
	sub_823E8A90(ctx, base);
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f1c84
	if (ctx.cr6.lt) goto loc_823F1C84;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r23.u32);
loc_823F1C84:
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r10,-8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 220, ctx.r3.u32);
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f10,160(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r7,8(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f6,176(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f1d40
	if (ctx.cr6.lt) goto loc_823F1D40;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r23.u32);
loc_823F1D40:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lbz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 32);
	// bl 0x823e8d60
	ctx.lr = 0x823F1D4C;
	sub_823E8D60(ctx, base);
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 220, ctx.r3.u32);
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// lfd f10,208(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,8(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lfd f6,224(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// b 0x823f1e2c
	goto loc_823F1E2C;
loc_823F1DEC:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f1e0c
	if (ctx.cr6.lt) goto loc_823F1E0C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r25.u32);
loc_823F1E0C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f1e2c
	if (ctx.cr6.lt) goto loc_823F1E2C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r25.u32);
loc_823F1E2C:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r22,r17
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x823f187c
	if (ctx.cr6.lt) goto loc_823F187C;
loc_823F1E40:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F1E4C"))) PPC_WEAK_FUNC(sub_823F1E4C);
PPC_FUNC_IMPL(__imp__sub_823F1E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F1E50"))) PPC_WEAK_FUNC(sub_823F1E50);
PPC_FUNC_IMPL(__imp__sub_823F1E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823F1E58;
	sub_8224876C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82404480
	ctx.lr = 0x823F1E68;
	sub_82404480(ctx, base);
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r6,-28272
	ctx.r6.s64 = ctx.r6.s64 + -28272;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// ori r5,r10,37332
	ctx.r5.u64 = ctx.r10.u64 | 37332;
	// addi r22,r22,-28208
	ctx.r22.s64 = ctx.r22.s64 + -28208;
	// addis r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 65536;
	// addi r4,r9,-12096
	ctx.r4.s64 = ctx.r9.s64 + -12096;
	// addi r3,r8,-12232
	ctx.r3.s64 = ctx.r8.s64 + -12232;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r7,-12244
	ctx.r10.s64 = ctx.r7.s64 + -12244;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r28,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r28.u32);
	// addi r21,r21,-28200
	ctx.r21.s64 = ctx.r21.s64 + -28200;
	// stw r30,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// stw r28,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r28.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r30.u32);
	// addi r11,r21,-8
	ctx.r11.s64 = ctx.r21.s64 + -8;
	// stw r28,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r28.u32);
	// stw r30,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r30.u32);
	// stw r28,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r28.u32);
	// stw r30,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r30.u32);
	// stw r28,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r28.u32);
	// stw r30,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r30.u32);
	// stw r28,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r28.u32);
	// stw r30,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r30.u32);
	// stw r28,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r28.u32);
	// stw r30,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r30.u32);
	// stw r28,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r28.u32);
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// stwx r8,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
loc_823F1F14:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823f1f14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F1F14;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// lis r29,-32177
	ctx.r29.s64 = -2108751872;
	// addi r27,r27,-20200
	ctx.r27.s64 = ctx.r27.s64 + -20200;
	// li r11,133
	ctx.r11.s64 = 133;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// lwz r11,-4392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4392);
	// lwz r10,2744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2744);
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// bl 0x823f1118
	ctx.lr = 0x823F1F4C;
	sub_823F1118(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4392);
	// ori r8,r9,37260
	ctx.r8.u64 = ctx.r9.u64 | 37260;
	// lwz r4,2788(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2788);
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823f1f7c
	if (!ctx.cr6.eq) goto loc_823F1F7C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823f1f78
	if (ctx.cr6.eq) goto loc_823F1F78;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x823f1f7c
	if (!ctx.cr6.eq) goto loc_823F1F7C;
loc_823F1F78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F1F7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f3558
	ctx.lr = 0x823F1F84;
	sub_823F3558(ctx, base);
	// lwz r3,-4392(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4392);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F1F98;
	sub_823E8958(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x823e8958
	ctx.lr = 0x823F1FAC;
	sub_823E8958(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x823e8958
	ctx.lr = 0x823F1FC0;
	sub_823E8958(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x823e8958
	ctx.lr = 0x823F1FD4;
	sub_823E8958(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F1FE8;
	sub_823E8958(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x823f2010
	if (ctx.cr6.eq) goto loc_823F2010;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x823f2010
	if (ctx.cr6.eq) goto loc_823F2010;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823f2018
	if (ctx.cr6.eq) goto loc_823F2018;
loc_823F2010:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_823F2018:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r29,8
	ctx.r29.s64 = 8;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// bl 0x823ee538
	ctx.lr = 0x823F2054;
	sub_823EE538(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823F205C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823f2074
	if (!ctx.cr6.eq) goto loc_823F2074;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823f2088
	if (ctx.cr6.eq) goto loc_823F2088;
loc_823F2074:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r30,1000
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1000, ctx.xer);
	// blt cr6,0x823f205c
	if (ctx.cr6.lt) goto loc_823F205C;
	// b 0x823f20d4
	goto loc_823F20D4;
loc_823F2088:
	// add r11,r24,r25
	ctx.r11.u64 = ctx.r24.u64 + ctx.r25.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823f20d4
	if (ctx.cr6.eq) goto loc_823F20D4;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee538
	ctx.lr = 0x823F20A8;
	sub_823EE538(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x823f20d4
	if (!ctx.cr6.gt) goto loc_823F20D4;
loc_823F20B0:
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
	// bl 0x823ee560
	ctx.lr = 0x823F20CC;
	sub_823EE560(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x823f20b0
	if (!ctx.cr0.eq) goto loc_823F20B0;
loc_823F20D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823F20F4;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404088
	ctx.lr = 0x823F20FC;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f2168
	if (ctx.cr6.eq) goto loc_823F2168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x823F210C;
	sub_823CA688(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt 0x823f2134
	if (ctx.cr0.lt) goto loc_823F2134;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f213c
	if (ctx.cr6.lt) goto loc_823F213C;
loc_823F2134:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x823f2148
	goto loc_823F2148;
loc_823F213C:
	// addi r11,r11,4667
	ctx.r11.s64 = ctx.r11.s64 + 4667;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823F2148:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,-4384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d10
	ctx.lr = 0x823F2168;
	sub_823E9D10(ctx, base);
loc_823F2168:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f11b0
	ctx.lr = 0x823F2170;
	sub_823F11B0(ctx, base);
	// stw r28,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823F2178;
	sub_823C8DF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824040e0
	ctx.lr = 0x823F2184;
	sub_824040E0(ctx, base);
	// li r4,480
	ctx.r4.s64 = 480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823F2190;
	sub_823CDF48(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r11,r11,8208
	ctx.r11.s64 = ctx.r11.s64 + 8208;
	// addi r30,r11,-12
	ctx.r30.s64 = ctx.r11.s64 + -12;
loc_823F219C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x823cdf48
	ctx.lr = 0x823F21A8;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,64(r30)
	ea = 64 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x823cdf48
	ctx.lr = 0x823F21B4;
	sub_823CDF48(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823f219c
	if (!ctx.cr0.eq) goto loc_823F219C;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bl 0x823ed490
	ctx.lr = 0x823F21D0;
	sub_823ED490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823F21DC"))) PPC_WEAK_FUNC(sub_823F21DC);
PPC_FUNC_IMPL(__imp__sub_823F21DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F21E0"))) PPC_WEAK_FUNC(sub_823F21E0);
PPC_FUNC_IMPL(__imp__sub_823F21E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823f2450
	sub_823F2450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F21E8"))) PPC_WEAK_FUNC(sub_823F21E8);
PPC_FUNC_IMPL(__imp__sub_823F21E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823f2450
	sub_823F2450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F21F0"))) PPC_WEAK_FUNC(sub_823F21F0);
PPC_FUNC_IMPL(__imp__sub_823F21F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823F21F8;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-12096
	ctx.r8.s64 = ctx.r11.s64 + -12096;
	// addi r7,r10,-12232
	ctx.r7.s64 = ctx.r10.s64 + -12232;
	// addi r6,r9,-12244
	ctx.r6.s64 = ctx.r9.s64 + -12244;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r5,-32177
	ctx.r5.s64 = -2108751872;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r29,-4392(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4392);
	// bl 0x823e98d8
	ctx.lr = 0x823F2234;
	sub_823E98D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404088
	ctx.lr = 0x823F223C;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f22d4
	if (ctx.cr6.eq) goto loc_823F22D4;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,-28324
	ctx.r30.s64 = ctx.r30.s64 + -28324;
	// ori r28,r11,37336
	ctx.r28.u64 = ctx.r11.u64 | 37336;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f226c
	if (ctx.cr0.lt) goto loc_823F226C;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f2274
	if (ctx.cr6.lt) goto loc_823F2274;
loc_823F226C:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// b 0x823f2280
	goto loc_823F2280;
loc_823F2274:
	// addi r11,r11,4667
	ctx.r11.s64 = ctx.r11.s64 + 4667;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823F2280:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823e8918
	ctx.lr = 0x823F2294;
	sub_823E8918(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f22ac
	if (ctx.cr0.lt) goto loc_823F22AC;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f22b4
	if (ctx.cr6.lt) goto loc_823F22B4;
loc_823F22AC:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// b 0x823f22c0
	goto loc_823F22C0;
loc_823F22B4:
	// addi r11,r11,4667
	ctx.r11.s64 = ctx.r11.s64 + 4667;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823F22C0:
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823e8918
	ctx.lr = 0x823F22D4;
	sub_823E8918(ctx, base);
loc_823F22D4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// ori r10,r11,45336
	ctx.r10.u64 = ctx.r11.u64 | 45336;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F22F0;
	sub_823E8918(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r8,r9,37228
	ctx.r8.u64 = ctx.r9.u64 | 37228;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F230C;
	sub_823E8918(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r6,r7,37232
	ctx.r6.u64 = ctx.r7.u64 | 37232;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F2328;
	sub_823E8918(ctx, base);
	// addi r30,r29,2744
	ctx.r30.s64 = ctx.r29.s64 + 2744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x823F233C;
	sub_82248A40(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r5,37332
	ctx.r11.u64 = ctx.r5.u64 | 37332;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x82248a40
	ctx.lr = 0x823F235C;
	sub_82248A40(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823F2360;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404088
	ctx.lr = 0x823F2368;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f2384
	if (ctx.cr6.eq) goto loc_823F2384;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d80
	ctx.lr = 0x823F2384;
	sub_823E9D80(ctx, base);
loc_823F2384:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824045e0
	ctx.lr = 0x823F238C;
	sub_824045E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823F2394"))) PPC_WEAK_FUNC(sub_823F2394);
PPC_FUNC_IMPL(__imp__sub_823F2394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F2398"))) PPC_WEAK_FUNC(sub_823F2398);
PPC_FUNC_IMPL(__imp__sub_823F2398) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x823f1268
	ctx.lr = 0x823F23B4;
	sub_823F1268(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ori r9,r11,37332
	ctx.r9.u64 = ctx.r11.u64 | 37332;
	// li r8,13653
	ctx.r8.s64 = 13653;
	// li r7,13654
	ctx.r7.s64 = 13654;
	// li r6,15007
	ctx.r6.s64 = 15007;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r5,13655
	ctx.r5.s64 = 13655;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r4,489
	ctx.r4.s64 = 489;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x823F23F8;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82404088
	ctx.lr = 0x823F2404;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f241c
	if (ctx.cr6.eq) goto loc_823F241C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823e98d8
	ctx.lr = 0x823F2414;
	sub_823E98D8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x823f2424
	goto loc_823F2424;
loc_823F241C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823e98d8
	ctx.lr = 0x823F2424;
	sub_823E98D8(ctx, base);
loc_823F2424:
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,4548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4548, ctx.r30.u32);
	// bl 0x82404130
	ctx.lr = 0x823F2438;
	sub_82404130(ctx, base);
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

__attribute__((alias("__imp__sub_823F2450"))) PPC_WEAK_FUNC(sub_823F2450);
PPC_FUNC_IMPL(__imp__sub_823F2450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f21f0
	ctx.lr = 0x823F2470;
	sub_823F21F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f248c
	if (ctx.cr6.eq) goto loc_823F248C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823F2488;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823F248C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F24A4"))) PPC_WEAK_FUNC(sub_823F24A4);
PPC_FUNC_IMPL(__imp__sub_823F24A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F24A8"))) PPC_WEAK_FUNC(sub_823F24A8);
PPC_FUNC_IMPL(__imp__sub_823F24A8) {
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
	// bl 0x823ed5b0
	ctx.lr = 0x823F24C0;
	sub_823ED5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f24dc
	if (!ctx.cr6.eq) goto loc_823F24DC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823F24DC:
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x82404088
	ctx.lr = 0x823F24E4;
	sub_82404088(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F2500"))) PPC_WEAK_FUNC(sub_823F2500);
PPC_FUNC_IMPL(__imp__sub_823F2500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8223a910
	ctx.lr = 0x823F251C;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f2548
	if (ctx.cr6.eq) goto loc_823F2548;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// ori r9,r10,37300
	ctx.r9.u64 = ctx.r10.u64 | 37300;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F2548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F2548:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404200
	ctx.lr = 0x823F2550;
	sub_82404200(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F2564"))) PPC_WEAK_FUNC(sub_823F2564);
PPC_FUNC_IMPL(__imp__sub_823F2564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F2568"))) PPC_WEAK_FUNC(sub_823F2568);
PPC_FUNC_IMPL(__imp__sub_823F2568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r11,-29
	ctx.r11.s64 = ctx.r11.s64 + -29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lwz r30,-4308(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4308);
	// bgt cr6,0x823f25f8
	if (ctx.cr6.gt) goto loc_823F25F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823f25c8
	// bdzf 4*cr6+eq,0x823f25d0
	// bdzf 4*cr6+eq,0x823f25d8
	// bdzf 4*cr6+eq,0x823f25e0
	// bdzf 4*cr6+eq,0x823f25e8
	// bne cr6,0x823f25f0
	if (!ctx.cr6.eq) goto loc_823F25F0;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x823f25f4
	goto loc_823F25F4;
loc_823F25C8:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x823f25f8
	goto loc_823F25F8;
loc_823F25D0:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x823f25f4
	goto loc_823F25F4;
loc_823F25D8:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x823f25f4
	goto loc_823F25F4;
loc_823F25E0:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x823f25f4
	goto loc_823F25F4;
loc_823F25E8:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823f25f4
	goto loc_823F25F4;
loc_823F25F0:
	// li r11,17
	ctx.r11.s64 = 17;
loc_823F25F4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_823F25F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ec768
	ctx.lr = 0x823F2608;
	sub_823EC768(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r9,12032(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12032);
	// ori r10,r11,45336
	ctx.r10.u64 = ctx.r11.u64 | 45336;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F2630"))) PPC_WEAK_FUNC(sub_823F2630);
PPC_FUNC_IMPL(__imp__sub_823F2630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823F2638;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f26ac
	if (ctx.cr6.eq) goto loc_823F26AC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823f26ac
	if (!ctx.cr6.gt) goto loc_823F26AC;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r27,-20200
	ctx.r27.s64 = ctx.r27.s64 + -20200;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823f26ac
	if (!ctx.cr6.gt) goto loc_823F26AC;
	// addi r29,r4,-4
	ctx.r29.s64 = ctx.r4.s64 + -4;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lis r26,-32177
	ctx.r26.s64 = -2108751872;
loc_823F2670:
	// lwz r30,-4308(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4308);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ec8d0
	ctx.lr = 0x823F2680;
	sub_823EC8D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823eca40
	ctx.lr = 0x823F2690;
	sub_823ECA40(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stwu r28,8(r29)
	ea = 8 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r29.u32 = ea;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f2670
	if (ctx.cr6.lt) goto loc_823F2670;
loc_823F26AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823F26B4"))) PPC_WEAK_FUNC(sub_823F26B4);
PPC_FUNC_IMPL(__imp__sub_823F26B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F26B8"))) PPC_WEAK_FUNC(sub_823F26B8);
PPC_FUNC_IMPL(__imp__sub_823F26B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823F26C0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r28,r28,-20200
	ctx.r28.s64 = ctx.r28.s64 + -20200;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,-4308(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823f2720
	if (!ctx.cr6.gt) goto loc_823F2720;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// addi r30,r30,-28208
	ctx.r30.s64 = ctx.r30.s64 + -28208;
loc_823F26EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ec8d0
	ctx.lr = 0x823F26F8;
	sub_823EC8D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823eca40
	ctx.lr = 0x823F2708;
	sub_823ECA40(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r11,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f26ec
	if (ctx.cr6.lt) goto loc_823F26EC;
loc_823F2720:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823F2728"))) PPC_WEAK_FUNC(sub_823F2728);
PPC_FUNC_IMPL(__imp__sub_823F2728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823F2730;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r10,r10,-28324
	ctx.r10.s64 = ctx.r10.s64 + -28324;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f275c
	if (ctx.cr0.lt) goto loc_823F275C;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f2768
	if (ctx.cr6.lt) goto loc_823F2768;
loc_823F275C:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28200
	ctx.r30.s64 = ctx.r30.s64 + -28200;
	// b 0x823f2774
	goto loc_823F2774;
loc_823F2768:
	// addi r11,r11,4667
	ctx.r11.s64 = ctx.r11.s64 + 4667;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823F2774:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,-28236
	ctx.r29.s64 = ctx.r29.s64 + -28236;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F2794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823f27dc
	if (ctx.cr6.eq) goto loc_823F27DC;
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
	ctx.lr = 0x823F27B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F27DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F27DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823F27E4"))) PPC_WEAK_FUNC(sub_823F27E4);
PPC_FUNC_IMPL(__imp__sub_823F27E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F27E8"))) PPC_WEAK_FUNC(sub_823F27E8);
PPC_FUNC_IMPL(__imp__sub_823F27E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,832(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// addi r30,r30,-28208
	ctx.r30.s64 = ctx.r30.s64 + -28208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,14228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14228, ctx.r11.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,15524(r6)
	PPC_STORE_U32(ctx.r6.u32 + 15524, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,-4392(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4392);
	// bl 0x823e89a0
	ctx.lr = 0x823F2834;
	sub_823E89A0(ctx, base);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r11,r4,25308
	ctx.r11.u64 = ctx.r4.u64 | 25308;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823e97f0
	ctx.lr = 0x823F2850;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,356
	ctx.r4.s64 = 356;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F2864;
	sub_82106F58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,355
	ctx.r4.s64 = 355;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F2874;
	sub_82106F58(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,168(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F2888;
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

__attribute__((alias("__imp__sub_823F28A0"))) PPC_WEAK_FUNC(sub_823F28A0);
PPC_FUNC_IMPL(__imp__sub_823F28A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823F28A8;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r15,-32177
	ctx.r15.s64 = -2108751872;
	// addis r16,r31,1
	ctx.r16.s64 = ctx.r31.s64 + 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r16,r16,-28324
	ctx.r16.s64 = ctx.r16.s64 + -28324;
	// lwz r14,-4392(r15)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4392);
	// bl 0x8218b408
	ctx.lr = 0x823F28D0;
	sub_8218B408(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823F28DC;
	sub_8218B408(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8218b408
	ctx.lr = 0x823F28E4;
	sub_8218B408(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x823F28F0;
	sub_823C3280(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r8,r8,-28308
	ctx.r8.s64 = ctx.r8.s64 + -28308;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// ori r7,r11,37248
	ctx.r7.u64 = ctx.r11.u64 | 37248;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addis r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r21,r21,-28268
	ctx.r21.s64 = ctx.r21.s64 + -28268;
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// ori r7,r5,37284
	ctx.r7.u64 = ctx.r5.u64 | 37284;
	// cntlzw r5,r4
	ctx.r5.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// ori r6,r6,37276
	ctx.r6.u64 = ctx.r6.u64 | 37276;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r4,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r4.u32);
	// ori r4,r9,37292
	ctx.r4.u64 = ctx.r9.u64 | 37292;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// stwx r9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// ori r9,r5,37300
	ctx.r9.u64 = ctx.r5.u64 | 37300;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// rlwinm r6,r5,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// ori r5,r10,37308
	ctx.r5.u64 = ctx.r10.u64 | 37308;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// and r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 & ctx.r25.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// ori r7,r7,37316
	ctx.r7.u64 = ctx.r7.u64 | 37316;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// ori r6,r6,37324
	ctx.r6.u64 = ctx.r6.u64 | 37324;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stwx r4,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r11,-5
	ctx.r4.s64 = ctx.r11.s64 + -5;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-6
	ctx.r10.s64 = ctx.r11.s64 + -6;
	// addi r30,r30,-20200
	ctx.r30.s64 = ctx.r30.s64 + -20200;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,360
	ctx.r4.s64 = 360;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stwx r5,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stwx r9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823ede38
	ctx.lr = 0x823F2A34;
	sub_823EDE38(ctx, base);
	// lwz r10,16(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// li r4,358
	ctx.r4.s64 = 358;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x823ede38
	ctx.lr = 0x823F2A50;
	sub_823EDE38(ctx, base);
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r8,r10,8720
	ctx.r8.s64 = ctx.r10.s64 + 8720;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F2A64:
	// lwz r11,-8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2a84
	if (ctx.cr6.lt) goto loc_823F2A84;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F2A84:
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2aa4
	if (ctx.cr6.lt) goto loc_823F2AA4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F2AA4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2ac4
	if (ctx.cr6.lt) goto loc_823F2AC4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F2AC4:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2ae4
	if (ctx.cr6.lt) goto loc_823F2AE4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F2AE4:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2b04
	if (ctx.cr6.lt) goto loc_823F2B04;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F2B04:
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2b24
	if (ctx.cr6.lt) goto loc_823F2B24;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F2B24:
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2b44
	if (ctx.cr6.lt) goto loc_823F2B44;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F2B44:
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2b64
	if (ctx.cr6.lt) goto loc_823F2B64;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F2B64:
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2b84
	if (ctx.cr6.lt) goto loc_823F2B84;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F2B84:
	// lwz r11,60(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2ba4
	if (ctx.cr6.lt) goto loc_823F2BA4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F2BA4:
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2bc4
	if (ctx.cr6.lt) goto loc_823F2BC4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F2BC4:
	// lwz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2be4
	if (ctx.cr6.lt) goto loc_823F2BE4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r25.u32);
loc_823F2BE4:
	// lwz r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2c04
	if (ctx.cr6.lt) goto loc_823F2C04;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2C04:
	// lwz r11,108(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2c24
	if (ctx.cr6.lt) goto loc_823F2C24;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2C24:
	// lwz r11,112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2c44
	if (ctx.cr6.lt) goto loc_823F2C44;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2C44:
	// lwz r11,116(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2c64
	if (ctx.cr6.lt) goto loc_823F2C64;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2C64:
	// lwz r11,120(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2c84
	if (ctx.cr6.lt) goto loc_823F2C84;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2C84:
	// lwz r11,124(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2ca4
	if (ctx.cr6.lt) goto loc_823F2CA4;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2CA4:
	// lwz r11,128(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2cc4
	if (ctx.cr6.lt) goto loc_823F2CC4;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2CC4:
	// lwz r11,132(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2ce4
	if (ctx.cr6.lt) goto loc_823F2CE4;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2CE4:
	// lwz r11,136(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2d04
	if (ctx.cr6.lt) goto loc_823F2D04;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2D04:
	// lwz r11,172(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2d24
	if (ctx.cr6.lt) goto loc_823F2D24;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2D24:
	// lwz r11,176(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2d44
	if (ctx.cr6.lt) goto loc_823F2D44;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2D44:
	// lwz r11,180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2d64
	if (ctx.cr6.lt) goto loc_823F2D64;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2D64:
	// lwz r11,184(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2d84
	if (ctx.cr6.lt) goto loc_823F2D84;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2D84:
	// lwz r11,188(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2da4
	if (ctx.cr6.lt) goto loc_823F2DA4;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2DA4:
	// lwz r11,192(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2dc4
	if (ctx.cr6.lt) goto loc_823F2DC4;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2DC4:
	// lwz r11,196(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2de4
	if (ctx.cr6.lt) goto loc_823F2DE4;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2DE4:
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2e04
	if (ctx.cr6.lt) goto loc_823F2E04;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2E04:
	// lwz r11,236(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2e24
	if (ctx.cr6.lt) goto loc_823F2E24;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2E24:
	// lwz r11,240(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2e44
	if (ctx.cr6.lt) goto loc_823F2E44;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2E44:
	// lwz r11,244(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2e64
	if (ctx.cr6.lt) goto loc_823F2E64;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r25.u32);
loc_823F2E64:
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// bdnz 0x823f2a64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F2A64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x823f2e88
	if (ctx.cr6.lt) goto loc_823F2E88;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_823F2E88:
	// lwz r17,0(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x823f3478
	if (ctx.cr6.eq) goto loc_823F3478;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r8,16
	ctx.r30.s64 = ctx.r8.s64 + 16;
	// lis r20,-32177
	ctx.r20.s64 = -2108751872;
	// ori r19,r10,37328
	ctx.r19.u64 = ctx.r10.u64 | 37328;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_823F2EB4:
	// bl 0x8223a960
	ctx.lr = 0x823F2EB8;
	sub_8223A960(ctx, base);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r28,-4308(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4308);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// add r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823ec8d0
	ctx.lr = 0x823F2ED4;
	sub_823EC8D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ec978
	ctx.lr = 0x823F2EE4;
	sub_823EC978(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2f08
	if (ctx.cr6.lt) goto loc_823F2F08;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r23.u32);
loc_823F2F08:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ec8f8
	ctx.lr = 0x823F2F14;
	sub_823EC8F8(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r23.u32);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r7,4(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// lfd f10,184(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,8(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// lfd f6,240(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f2fdc
	if (ctx.cr6.lt) goto loc_823F2FDC;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r27.u32);
loc_823F2FDC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ecdb0
	ctx.lr = 0x823F2FE8;
	sub_823ECDB0(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r23.u32);
	// lwz r5,0(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// std r4,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r4.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lfd f0,256(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f10,200(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r6,8(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lfd f6,152(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f30b8
	if (ctx.cr6.lt) goto loc_823F30B8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r8,r27
	ctx.r8.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823F30B8:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
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
	// lwz r5,4(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lfd f10,168(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
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
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,8(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// lfd f6,216(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f3160
	if (ctx.cr6.lt) goto loc_823F3160;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823F3160:
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f318c
	if (ctx.cr6.lt) goto loc_823F318C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823F318C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x823f31a0
	if (!ctx.cr6.eq) goto loc_823F31A0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_823F31A0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r5,-12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r6,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r6.u64);
	// lfd f13,248(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f9,200(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfd f6,136(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f7,204(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f3,208(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// bl 0x823eca58
	ctx.lr = 0x823F3230;
	sub_823ECA58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f3424
	if (ctx.cr6.eq) goto loc_823F3424;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823eca40
	ctx.lr = 0x823F3248;
	sub_823ECA40(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r5,r31,r19
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r19.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r28,r31,r19
	ctx.r28.u64 = ctx.r31.u64 + ctx.r19.u64;
	// bl 0x822368d8
	ctx.lr = 0x823F3264;
	sub_822368D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f3464
	if (ctx.cr6.eq) goto loc_823F3464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822365f0
	ctx.lr = 0x823F3280;
	sub_822365F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f3464
	if (ctx.cr6.eq) goto loc_823F3464;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,-4392(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4392);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823e8a90
	ctx.lr = 0x823F329C;
	sub_823E8A90(ctx, base);
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f32bc
	if (ctx.cr6.lt) goto loc_823F32BC;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r23.u32);
loc_823F32BC:
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r10,-8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 220, ctx.r3.u32);
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f10,160(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r7,8(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f6,176(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f3378
	if (ctx.cr6.lt) goto loc_823F3378;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r23.u32);
loc_823F3378:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lbz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 32);
	// bl 0x823e8d60
	ctx.lr = 0x823F3384;
	sub_823E8D60(ctx, base);
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 220, ctx.r3.u32);
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// lfd f10,208(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,8(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lfd f6,224(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// b 0x823f3464
	goto loc_823F3464;
loc_823F3424:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f3444
	if (ctx.cr6.lt) goto loc_823F3444;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r25.u32);
loc_823F3444:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f3464
	if (ctx.cr6.lt) goto loc_823F3464;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r25.u32);
loc_823F3464:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r22,r17
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x823f2eb4
	if (ctx.cr6.lt) goto loc_823F2EB4;
loc_823F3478:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F3484"))) PPC_WEAK_FUNC(sub_823F3484);
PPC_FUNC_IMPL(__imp__sub_823F3484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F3488"))) PPC_WEAK_FUNC(sub_823F3488);
PPC_FUNC_IMPL(__imp__sub_823F3488) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82404088
	ctx.lr = 0x823F34A8;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f3540
	if (ctx.cr6.eq) goto loc_823F3540;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x823f352c
	if (ctx.cr6.eq) goto loc_823F352C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x823F34C0;
	sub_823CA688(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// ori r8,r11,37328
	ctx.r8.u64 = ctx.r11.u64 | 37328;
	// addi r9,r9,-28324
	ctx.r9.s64 = ctx.r9.s64 + -28324;
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f34f0
	if (ctx.cr0.lt) goto loc_823F34F0;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f34fc
	if (ctx.cr6.lt) goto loc_823F34FC;
loc_823F34F0:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-28200
	ctx.r11.s64 = ctx.r11.s64 + -28200;
	// b 0x823f3508
	goto loc_823F3508;
loc_823F34FC:
	// addi r11,r11,4667
	ctx.r11.s64 = ctx.r11.s64 + 4667;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823F3508:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,-4384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d10
	ctx.lr = 0x823F3528;
	sub_823E9D10(ctx, base);
	// b 0x823f3540
	goto loc_823F3540;
loc_823F352C:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d80
	ctx.lr = 0x823F3540;
	sub_823E9D80(ctx, base);
loc_823F3540:
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

__attribute__((alias("__imp__sub_823F3558"))) PPC_WEAK_FUNC(sub_823F3558);
PPC_FUNC_IMPL(__imp__sub_823F3558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823F3560;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// addi r30,r30,-28204
	ctx.r30.s64 = ctx.r30.s64 + -28204;
	// addi r29,r29,-28200
	ctx.r29.s64 = ctx.r29.s64 + -28200;
	// li r5,8000
	ctx.r5.s64 = 8000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823f2630
	ctx.lr = 0x823F3588;
	sub_823F2630(ctx, base);
	// lis r9,-32193
	ctx.r9.s64 = -2109800448;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r8,-32193
	ctx.r8.s64 = -2109800448;
	// lis r7,-32193
	ctx.r7.s64 = -2109800448;
	// lis r6,-32193
	ctx.r6.s64 = -2109800448;
	// addi r5,r9,-5816
	ctx.r5.s64 = ctx.r9.s64 + -5816;
	// addi r4,r8,-5640
	ctx.r4.s64 = ctx.r8.s64 + -5640;
	// addi r3,r7,-5056
	ctx.r3.s64 = ctx.r7.s64 + -5056;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r9,r6,-5400
	ctx.r9.s64 = ctx.r6.s64 + -5400;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r28,-4308(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4308);
	// bgt cr6,0x823f36d0
	if (ctx.cr6.gt) goto loc_823F36D0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f3614
	if (ctx.cr6.eq) goto loc_823F3614;
	// bdz 0x823f35e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823F35E4;
	// bdz 0x823f35fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823F35FC;
	// b 0x823f3614
	goto loc_823F3614;
loc_823F35E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ed018
	ctx.lr = 0x823F35EC;
	sub_823ED018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f26b8
	ctx.lr = 0x823F35F4;
	sub_823F26B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823F35FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ed030
	ctx.lr = 0x823F3604;
	sub_823ED030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f26b8
	ctx.lr = 0x823F360C;
	sub_823F26B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823F3614:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,37260
	ctx.r9.u64 = ctx.r10.u64 | 37260;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823f36d0
	if (ctx.cr6.eq) goto loc_823F36D0;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,-20200
	ctx.r30.s64 = ctx.r30.s64 + -20200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823cebb0
	ctx.lr = 0x823F364C;
	sub_823CEBB0(ctx, base);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x823f3668
	if (!ctx.cr6.gt) goto loc_823F3668;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823F3668:
	// bl 0x82080d68
	ctx.lr = 0x823F366C;
	sub_82080D68(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822aa648
	ctx.lr = 0x823F367C;
	sub_822AA648(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823f36ac
	if (!ctx.cr6.gt) goto loc_823F36AC;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// addi r10,r29,-8
	ctx.r10.s64 = ctx.r29.s64 + -8;
loc_823F3694:
	// lwzu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823f3694
	if (ctx.cr6.lt) goto loc_823F3694;
loc_823F36AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ece48
	ctx.lr = 0x823F36BC;
	sub_823ECE48(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823f36d0
	if (ctx.cr6.eq) goto loc_823F36D0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x823F36D0;
	sub_82183E40(ctx, base);
loc_823F36D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823F36D8"))) PPC_WEAK_FUNC(sub_823F36D8);
PPC_FUNC_IMPL(__imp__sub_823F36D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823F36E0;
	sub_8224876C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82404480
	ctx.lr = 0x823F36F0;
	sub_82404480(ctx, base);
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r6,-28272
	ctx.r6.s64 = ctx.r6.s64 + -28272;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// ori r5,r10,37332
	ctx.r5.u64 = ctx.r10.u64 | 37332;
	// addi r22,r22,-28208
	ctx.r22.s64 = ctx.r22.s64 + -28208;
	// addis r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 65536;
	// addi r4,r9,-11752
	ctx.r4.s64 = ctx.r9.s64 + -11752;
	// addi r3,r8,-11888
	ctx.r3.s64 = ctx.r8.s64 + -11888;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r7,-11900
	ctx.r10.s64 = ctx.r7.s64 + -11900;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r28,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r28.u32);
	// addi r21,r21,-28200
	ctx.r21.s64 = ctx.r21.s64 + -28200;
	// stw r30,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// stw r28,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r28.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r30.u32);
	// addi r11,r21,-8
	ctx.r11.s64 = ctx.r21.s64 + -8;
	// stw r28,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r28.u32);
	// stw r30,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r30.u32);
	// stw r28,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r28.u32);
	// stw r30,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r30.u32);
	// stw r28,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r28.u32);
	// stw r30,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r30.u32);
	// stw r28,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r28.u32);
	// stw r30,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r30.u32);
	// stw r28,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r28.u32);
	// stw r30,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r30.u32);
	// stw r28,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r28.u32);
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// stwx r8,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
loc_823F379C:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823f379c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F379C;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// lis r29,-32177
	ctx.r29.s64 = -2108751872;
	// addi r27,r27,-20200
	ctx.r27.s64 = ctx.r27.s64 + -20200;
	// li r11,131
	ctx.r11.s64 = 131;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// lwz r11,-4392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4392);
	// lwz r10,2744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2744);
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// bl 0x823f2568
	ctx.lr = 0x823F37D4;
	sub_823F2568(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4392);
	// ori r8,r9,37260
	ctx.r8.u64 = ctx.r9.u64 | 37260;
	// lwz r4,2784(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2784);
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823f3804
	if (!ctx.cr6.eq) goto loc_823F3804;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823f3800
	if (ctx.cr6.eq) goto loc_823F3800;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x823f3804
	if (!ctx.cr6.eq) goto loc_823F3804;
loc_823F3800:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F3804:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f3558
	ctx.lr = 0x823F380C;
	sub_823F3558(ctx, base);
	// lwz r3,-4392(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4392);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F3820;
	sub_823E8958(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x823e8958
	ctx.lr = 0x823F3834;
	sub_823E8958(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x823e8958
	ctx.lr = 0x823F3848;
	sub_823E8958(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x823e8958
	ctx.lr = 0x823F385C;
	sub_823E8958(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F3870;
	sub_823E8958(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x823f3898
	if (ctx.cr6.eq) goto loc_823F3898;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x823f3898
	if (ctx.cr6.eq) goto loc_823F3898;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823f38a0
	if (ctx.cr6.eq) goto loc_823F38A0;
loc_823F3898:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_823F38A0:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r29,8
	ctx.r29.s64 = 8;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// bl 0x823ee538
	ctx.lr = 0x823F38DC;
	sub_823EE538(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823F38E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823f38fc
	if (!ctx.cr6.eq) goto loc_823F38FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823f3910
	if (ctx.cr6.eq) goto loc_823F3910;
loc_823F38FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r30,1000
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1000, ctx.xer);
	// blt cr6,0x823f38e4
	if (ctx.cr6.lt) goto loc_823F38E4;
	// b 0x823f395c
	goto loc_823F395C;
loc_823F3910:
	// add r11,r24,r25
	ctx.r11.u64 = ctx.r24.u64 + ctx.r25.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823f395c
	if (ctx.cr6.eq) goto loc_823F395C;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee538
	ctx.lr = 0x823F3930;
	sub_823EE538(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x823f395c
	if (!ctx.cr6.gt) goto loc_823F395C;
loc_823F3938:
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
	// bl 0x823ee560
	ctx.lr = 0x823F3954;
	sub_823EE560(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x823f3938
	if (!ctx.cr0.eq) goto loc_823F3938;
loc_823F395C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823F397C;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404088
	ctx.lr = 0x823F3984;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f39f0
	if (ctx.cr6.eq) goto loc_823F39F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x823F3994;
	sub_823CA688(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt 0x823f39bc
	if (ctx.cr0.lt) goto loc_823F39BC;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f39c4
	if (ctx.cr6.lt) goto loc_823F39C4;
loc_823F39BC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x823f39d0
	goto loc_823F39D0;
loc_823F39C4:
	// addi r11,r11,4667
	ctx.r11.s64 = ctx.r11.s64 + 4667;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823F39D0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,-4384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d10
	ctx.lr = 0x823F39F0;
	sub_823E9D10(ctx, base);
loc_823F39F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f27e8
	ctx.lr = 0x823F39F8;
	sub_823F27E8(ctx, base);
	// stw r28,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823F3A00;
	sub_823C8DF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824040e0
	ctx.lr = 0x823F3A0C;
	sub_824040E0(ctx, base);
	// li r4,354
	ctx.r4.s64 = 354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823F3A18;
	sub_823CDF48(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r11,r11,8720
	ctx.r11.s64 = ctx.r11.s64 + 8720;
	// addi r30,r11,-12
	ctx.r30.s64 = ctx.r11.s64 + -12;
loc_823F3A24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x823cdf48
	ctx.lr = 0x823F3A30;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,64(r30)
	ea = 64 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x823cdf48
	ctx.lr = 0x823F3A3C;
	sub_823CDF48(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823f3a24
	if (!ctx.cr0.eq) goto loc_823F3A24;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,192
	ctx.r10.u64 = ctx.r11.u64 | 192;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bl 0x823ed490
	ctx.lr = 0x823F3A58;
	sub_823ED490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823F3A64"))) PPC_WEAK_FUNC(sub_823F3A64);
PPC_FUNC_IMPL(__imp__sub_823F3A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F3A68"))) PPC_WEAK_FUNC(sub_823F3A68);
PPC_FUNC_IMPL(__imp__sub_823F3A68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823f3ef8
	sub_823F3EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F3A70"))) PPC_WEAK_FUNC(sub_823F3A70);
PPC_FUNC_IMPL(__imp__sub_823F3A70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823f3ef8
	sub_823F3EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F3A78"))) PPC_WEAK_FUNC(sub_823F3A78);
PPC_FUNC_IMPL(__imp__sub_823F3A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823F3A80;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-11752
	ctx.r8.s64 = ctx.r11.s64 + -11752;
	// addi r7,r10,-11888
	ctx.r7.s64 = ctx.r10.s64 + -11888;
	// addi r6,r9,-11900
	ctx.r6.s64 = ctx.r9.s64 + -11900;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r5,-32177
	ctx.r5.s64 = -2108751872;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r29,-4392(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4392);
	// bl 0x823e98d8
	ctx.lr = 0x823F3ABC;
	sub_823E98D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404088
	ctx.lr = 0x823F3AC4;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f3b5c
	if (ctx.cr6.eq) goto loc_823F3B5C;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,-28324
	ctx.r30.s64 = ctx.r30.s64 + -28324;
	// ori r28,r11,37336
	ctx.r28.u64 = ctx.r11.u64 | 37336;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f3af4
	if (ctx.cr0.lt) goto loc_823F3AF4;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f3afc
	if (ctx.cr6.lt) goto loc_823F3AFC;
loc_823F3AF4:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// b 0x823f3b08
	goto loc_823F3B08;
loc_823F3AFC:
	// addi r11,r11,4667
	ctx.r11.s64 = ctx.r11.s64 + 4667;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823F3B08:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823e8918
	ctx.lr = 0x823F3B1C;
	sub_823E8918(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f3b34
	if (ctx.cr0.lt) goto loc_823F3B34;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f3b3c
	if (ctx.cr6.lt) goto loc_823F3B3C;
loc_823F3B34:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// b 0x823f3b48
	goto loc_823F3B48;
loc_823F3B3C:
	// addi r11,r11,4667
	ctx.r11.s64 = ctx.r11.s64 + 4667;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823F3B48:
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823e8918
	ctx.lr = 0x823F3B5C;
	sub_823E8918(ctx, base);
loc_823F3B5C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// ori r10,r11,45336
	ctx.r10.u64 = ctx.r11.u64 | 45336;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F3B78;
	sub_823E8918(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r8,r9,37228
	ctx.r8.u64 = ctx.r9.u64 | 37228;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F3B94;
	sub_823E8918(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r6,r7,37232
	ctx.r6.u64 = ctx.r7.u64 | 37232;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F3BB0;
	sub_823E8918(ctx, base);
	// addi r30,r29,2744
	ctx.r30.s64 = ctx.r29.s64 + 2744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x823F3BC4;
	sub_82248A40(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r5,37332
	ctx.r11.u64 = ctx.r5.u64 | 37332;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82248a40
	ctx.lr = 0x823F3BE4;
	sub_82248A40(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823F3BE8;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404088
	ctx.lr = 0x823F3BF0;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f3c0c
	if (ctx.cr6.eq) goto loc_823F3C0C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d80
	ctx.lr = 0x823F3C0C;
	sub_823E9D80(ctx, base);
loc_823F3C0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824045e0
	ctx.lr = 0x823F3C14;
	sub_824045E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823F3C1C"))) PPC_WEAK_FUNC(sub_823F3C1C);
PPC_FUNC_IMPL(__imp__sub_823F3C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F3C20"))) PPC_WEAK_FUNC(sub_823F3C20);
PPC_FUNC_IMPL(__imp__sub_823F3C20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823f28a0
	ctx.lr = 0x823F3C3C;
	sub_823F28A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ori r9,r11,37332
	ctx.r9.u64 = ctx.r11.u64 | 37332;
	// li r8,13653
	ctx.r8.s64 = 13653;
	// li r7,13654
	ctx.r7.s64 = 13654;
	// li r6,15007
	ctx.r6.s64 = 15007;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r5,13655
	ctx.r5.s64 = 13655;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r4,364
	ctx.r4.s64 = 364;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x823F3C80;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82404088
	ctx.lr = 0x823F3C8C;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f3cbc
	if (ctx.cr6.eq) goto loc_823F3CBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x823F3C9C;
	sub_8218B408(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,363
	ctx.r4.s64 = 363;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x8212ef08
	ctx.lr = 0x823F3CAC;
	sub_8212EF08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823e98d8
	ctx.lr = 0x823F3CB4;
	sub_823E98D8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x823f3d60
	goto loc_823F3D60;
loc_823F3CBC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823F3CC4;
	sub_8218B408(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r4,r7,27596
	ctx.r4.u64 = ctx.r7.u64 | 27596;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// ori r6,r8,27592
	ctx.r6.u64 = ctx.r8.u64 | 27592;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r5,27600
	ctx.r9.u64 = ctx.r5.u64 | 27600;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsx f10,r8,r6
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsx f6,r8,r4
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
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
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsx f2,r5,r9
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
	// bl 0x823e98d8
	ctx.lr = 0x823F3D60;
	sub_823E98D8(ctx, base);
loc_823F3D60:
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,4548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4548, ctx.r30.u32);
	// bl 0x82404130
	ctx.lr = 0x823F3D74;
	sub_82404130(ctx, base);
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

__attribute__((alias("__imp__sub_823F3D8C"))) PPC_WEAK_FUNC(sub_823F3D8C);
PPC_FUNC_IMPL(__imp__sub_823F3D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F3D90"))) PPC_WEAK_FUNC(sub_823F3D90);
PPC_FUNC_IMPL(__imp__sub_823F3D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ori r10,r11,37304
	ctx.r10.u64 = ctx.r11.u64 | 37304;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addic. r4,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r4.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x823f3dc4
	if (!ctx.cr0.lt) goto loc_823F3DC4;
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// b 0x823f3dd0
	goto loc_823F3DD0;
loc_823F3DC4:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x823f3dd0
	if (ctx.cr6.lt) goto loc_823F3DD0;
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
loc_823F3DD0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37232
	ctx.r10.u64 = ctx.r11.u64 | 37232;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823f3df8
	if (!ctx.cr6.eq) goto loc_823F3DF8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823f3df4
	if (ctx.cr6.eq) goto loc_823F3DF4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x823f3df8
	if (!ctx.cr6.eq) goto loc_823F3DF8;
loc_823F3DF4:
	// li r4,1
	ctx.r4.s64 = 1;
loc_823F3DF8:
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f3558
	ctx.lr = 0x823F3E04;
	sub_823F3558(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823F3E0C;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f3e38
	if (ctx.cr6.eq) goto loc_823F3E38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37300
	ctx.r9.u64 = ctx.r10.u64 | 37300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F3E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F3E38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F3E50;
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

__attribute__((alias("__imp__sub_823F3E68"))) PPC_WEAK_FUNC(sub_823F3E68);
PPC_FUNC_IMPL(__imp__sub_823F3E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ede10
	ctx.lr = 0x823F3E84;
	sub_823EDE10(ctx, base);
	// lwz r11,-28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F3EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f3488
	ctx.lr = 0x823F3EAC;
	sub_823F3488(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823F3EB4;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f3ee0
	if (ctx.cr6.eq) goto loc_823F3EE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37300
	ctx.r9.u64 = ctx.r10.u64 | 37300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F3EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F3EE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F3EF8"))) PPC_WEAK_FUNC(sub_823F3EF8);
PPC_FUNC_IMPL(__imp__sub_823F3EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f3a78
	ctx.lr = 0x823F3F18;
	sub_823F3A78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f3f34
	if (ctx.cr6.eq) goto loc_823F3F34;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823F3F30;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823F3F34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F3F4C"))) PPC_WEAK_FUNC(sub_823F3F4C);
PPC_FUNC_IMPL(__imp__sub_823F3F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F3F50"))) PPC_WEAK_FUNC(sub_823F3F50);
PPC_FUNC_IMPL(__imp__sub_823F3F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8223a910
	ctx.lr = 0x823F3F6C;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f3f80
	if (ctx.cr6.eq) goto loc_823F3F80;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223af80
	ctx.lr = 0x823F3F80;
	sub_8223AF80(ctx, base);
loc_823F3F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404200
	ctx.lr = 0x823F3F88;
	sub_82404200(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F3F9C"))) PPC_WEAK_FUNC(sub_823F3F9C);
PPC_FUNC_IMPL(__imp__sub_823F3F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F3FA0"))) PPC_WEAK_FUNC(sub_823F3FA0);
PPC_FUNC_IMPL(__imp__sub_823F3FA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82404868
	sub_82404868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F3FA4"))) PPC_WEAK_FUNC(sub_823F3FA4);
PPC_FUNC_IMPL(__imp__sub_823F3FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F3FA8"))) PPC_WEAK_FUNC(sub_823F3FA8);
PPC_FUNC_IMPL(__imp__sub_823F3FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823F3FB0;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8223a9f8
	ctx.lr = 0x823F3FBC;
	sub_8223A9F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82404088
	ctx.lr = 0x823F3FC8;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x823f3fe4
	if (!ctx.cr6.eq) goto loc_823F3FE4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223b4e8
	ctx.lr = 0x823F3FDC;
	sub_8223B4E8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823F3FE4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223b4e8
	ctx.lr = 0x823F3FEC;
	sub_8223B4E8(ctx, base);
	// addis r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 65536;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,-4308(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4308);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ec8d0
	ctx.lr = 0x823F4010;
	sub_823EC8D0(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// li r31,0
	ctx.r31.s64 = 0;
loc_823F4068:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x823eca40
	ctx.lr = 0x823F407C;
	sub_823ECA40(ctx, base);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// cmplwi cr6,r31,9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 9, ctx.xer);
	// bne cr6,0x823f408c
	if (!ctx.cr6.eq) goto loc_823F408C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823F408C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F40B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10, ctx.xer);
	// blt cr6,0x823f4068
	if (ctx.cr6.lt) goto loc_823F4068;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823F40C8"))) PPC_WEAK_FUNC(sub_823F40C8);
PPC_FUNC_IMPL(__imp__sub_823F40C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r8,r11,-11376
	ctx.r8.s64 = ctx.r11.s64 + -11376;
	// addi r7,r10,-11512
	ctx.r7.s64 = ctx.r10.s64 + -11512;
	// addi r6,r9,-11524
	ctx.r6.s64 = ctx.r9.s64 + -11524;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r5,-32177
	ctx.r5.s64 = -2108751872;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r30,-4392(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4392);
	// bl 0x823e98d8
	ctx.lr = 0x823F4114;
	sub_823E98D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404088
	ctx.lr = 0x823F411C;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f4148
	if (ctx.cr6.eq) goto loc_823F4148;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823e8918
	ctx.lr = 0x823F4148;
	sub_823E8918(ctx, base);
loc_823F4148:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// ori r10,r11,37304
	ctx.r10.u64 = ctx.r11.u64 | 37304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F4164;
	sub_823E8918(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r8,r9,37228
	ctx.r8.u64 = ctx.r9.u64 | 37228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F4180;
	sub_823E8918(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r6,r7,37232
	ctx.r6.u64 = ctx.r7.u64 | 37232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F419C;
	sub_823E8918(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823F41A0;
	sub_823C8E50(ctx, base);
	// lis r5,-32177
	ctx.r5.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4384(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d80
	ctx.lr = 0x823F41B4;
	sub_823E9D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824045e0
	ctx.lr = 0x823F41BC;
	sub_824045E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F41D4"))) PPC_WEAK_FUNC(sub_823F41D4);
PPC_FUNC_IMPL(__imp__sub_823F41D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F41D8"))) PPC_WEAK_FUNC(sub_823F41D8);
PPC_FUNC_IMPL(__imp__sub_823F41D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823f4310
	sub_823F4310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F41E0"))) PPC_WEAK_FUNC(sub_823F41E0);
PPC_FUNC_IMPL(__imp__sub_823F41E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823f4310
	sub_823F4310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F41E8"))) PPC_WEAK_FUNC(sub_823F41E8);
PPC_FUNC_IMPL(__imp__sub_823F41E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823F41F0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r8,r4,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,-11556
	ctx.r10.s64 = ctx.r11.s64 + -11556;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f422c
	if (ctx.cr6.lt) goto loc_823F422C;
	// lwz r4,832(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
loc_823F422C:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f4250
	if (ctx.cr6.lt) goto loc_823F4250;
	// lwz r4,832(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
loc_823F4250:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f4274
	if (ctx.cr6.lt) goto loc_823F4274;
	// lwz r4,832(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r9,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
loc_823F4274:
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f4298
	if (ctx.cr6.lt) goto loc_823F4298;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r9.u32);
loc_823F4298:
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r9,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82106eb0
	ctx.lr = 0x823F42B0;
	sub_82106EB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f42e4
	if (ctx.cr6.eq) goto loc_823F42E4;
	// bl 0x821d38e8
	ctx.lr = 0x823F42C0;
	sub_821D38E8(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x821d2d38
	ctx.lr = 0x823F42E4;
	sub_821D2D38(ctx, base);
loc_823F42E4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x823f4304
	if (ctx.cr6.lt) goto loc_823F4304;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r29,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r9.u32);
loc_823F4304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823F430C"))) PPC_WEAK_FUNC(sub_823F430C);
PPC_FUNC_IMPL(__imp__sub_823F430C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F4310"))) PPC_WEAK_FUNC(sub_823F4310);
PPC_FUNC_IMPL(__imp__sub_823F4310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f40c8
	ctx.lr = 0x823F4330;
	sub_823F40C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f434c
	if (ctx.cr6.eq) goto loc_823F434C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823F4348;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823F434C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F4364"))) PPC_WEAK_FUNC(sub_823F4364);
PPC_FUNC_IMPL(__imp__sub_823F4364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F4368"))) PPC_WEAK_FUNC(sub_823F4368);
PPC_FUNC_IMPL(__imp__sub_823F4368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823ede10
	ctx.lr = 0x823F4380;
	sub_823EDE10(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823f4398
	if (ctx.cr6.eq) goto loc_823F4398;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823f43a8
	goto loc_823F43A8;
loc_823F4398:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f43b4
	if (ctx.cr6.eq) goto loc_823F43B4;
	// li r4,1
	ctx.r4.s64 = 1;
loc_823F43A8:
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x823f41e8
	ctx.lr = 0x823F43B4;
	sub_823F41E8(ctx, base);
loc_823F43B4:
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F43D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f3fa8
	ctx.lr = 0x823F43D8;
	sub_823F3FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F43EC"))) PPC_WEAK_FUNC(sub_823F43EC);
PPC_FUNC_IMPL(__imp__sub_823F43EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F43F0"))) PPC_WEAK_FUNC(sub_823F43F0);
PPC_FUNC_IMPL(__imp__sub_823F43F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x823F43F8;
	sub_82248764(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-1504(r1)
	ea = -1504 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r20,r31,1
	ctx.r20.s64 = ctx.r31.s64 + 65536;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r20,r20,-28324
	ctx.r20.s64 = ctx.r20.s64 + -28324;
	// bl 0x8218b408
	ctx.lr = 0x823F4418;
	sub_8218B408(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823F4424;
	sub_8218B408(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8218b408
	ctx.lr = 0x823F442C;
	sub_8218B408(ctx, base);
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c3280
	ctx.lr = 0x823F4438;
	sub_823C3280(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r8,r8,-28308
	ctx.r8.s64 = ctx.r8.s64 + -28308;
	// ori r7,r11,37248
	ctx.r7.u64 = ctx.r11.u64 | 37248;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r23,r23,-28268
	ctx.r23.s64 = ctx.r23.s64 + -28268;
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// ori r7,r5,37284
	ctx.r7.u64 = ctx.r5.u64 | 37284;
	// cntlzw r5,r4
	ctx.r5.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// ori r29,r9,37292
	ctx.r29.u64 = ctx.r9.u64 | 37292;
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r4,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r4.u32);
	// ori r6,r6,37276
	ctx.r6.u64 = ctx.r6.u64 | 37276;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// stwx r4,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// ori r6,r5,37300
	ctx.r6.u64 = ctx.r5.u64 | 37300;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r5,r10,-2
	ctx.r5.s64 = ctx.r10.s64 + -2;
	// li r11,255
	ctx.r11.s64 = 255;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// and r19,r9,r30
	ctx.r19.u64 = ctx.r9.u64 & ctx.r30.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r27,r27,-28232
	ctx.r27.s64 = ctx.r27.s64 + -28232;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r4,360
	ctx.r4.s64 = 360;
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stwx r11,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stwx r8,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x823ede38
	ctx.lr = 0x823F4528;
	sub_823EDE38(ctx, base);
	// lwz r10,16(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// li r4,358
	ctx.r4.s64 = 358;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x823ede38
	ctx.lr = 0x823F4544;
	sub_823EDE38(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r28,r11,9232
	ctx.r28.s64 = ctx.r11.s64 + 9232;
	// lwz r11,9232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f456c
	if (ctx.cr6.lt) goto loc_823F456C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
loc_823F456C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f458c
	if (ctx.cr6.lt) goto loc_823F458C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
loc_823F458C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f45ac
	if (ctx.cr6.lt) goto loc_823F45AC;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
loc_823F45AC:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f45cc
	if (ctx.cr6.lt) goto loc_823F45CC;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
loc_823F45CC:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f45ec
	if (ctx.cr6.lt) goto loc_823F45EC;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
loc_823F45EC:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f460c
	if (ctx.cr6.lt) goto loc_823F460C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
loc_823F460C:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f462c
	if (ctx.cr6.lt) goto loc_823F462C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
loc_823F462C:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f464c
	if (ctx.cr6.lt) goto loc_823F464C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
loc_823F464C:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f466c
	if (ctx.cr6.lt) goto loc_823F466C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
loc_823F466C:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f468c
	if (ctx.cr6.lt) goto loc_823F468C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
loc_823F468C:
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f46ac
	if (ctx.cr6.lt) goto loc_823F46AC;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
loc_823F46AC:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f46cc
	if (ctx.cr6.lt) goto loc_823F46CC;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F46CC:
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f46ec
	if (ctx.cr6.lt) goto loc_823F46EC;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F46EC:
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f470c
	if (ctx.cr6.lt) goto loc_823F470C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F470C:
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f472c
	if (ctx.cr6.lt) goto loc_823F472C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F472C:
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f474c
	if (ctx.cr6.lt) goto loc_823F474C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F474C:
	// lwz r11,160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f476c
	if (ctx.cr6.lt) goto loc_823F476C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F476C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f478c
	if (ctx.cr6.lt) goto loc_823F478C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F478C:
	// lwz r11,168(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f47ac
	if (ctx.cr6.lt) goto loc_823F47AC;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F47AC:
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f47cc
	if (ctx.cr6.lt) goto loc_823F47CC;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F47CC:
	// lwz r11,208(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f47ec
	if (ctx.cr6.lt) goto loc_823F47EC;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F47EC:
	// lwz r11,212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f480c
	if (ctx.cr6.lt) goto loc_823F480C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F480C:
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f482c
	if (ctx.cr6.lt) goto loc_823F482C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F482C:
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f484c
	if (ctx.cr6.lt) goto loc_823F484C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F484C:
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f486c
	if (ctx.cr6.lt) goto loc_823F486C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r30.u32);
loc_823F486C:
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,220
	ctx.r11.s64 = ctx.r1.s64 + 220;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823F487C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823f487c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F487C;
	// addi r29,r1,272
	ctx.r29.s64 = ctx.r1.s64 + 272;
	// li r30,10
	ctx.r30.s64 = 10;
loc_823F488C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820c6b60
	ctx.lr = 0x823F4894;
	sub_820C6B60(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// bge 0x823f488c
	if (!ctx.cr0.lt) goto loc_823F488C;
	// addi r3,r1,1240
	ctx.r3.s64 = ctx.r1.s64 + 1240;
	// bl 0x820c6b60
	ctx.lr = 0x823F48A8;
	sub_820C6B60(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x820c6f50
	ctx.lr = 0x823F48B0;
	sub_820C6F50(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822aa648
	ctx.lr = 0x823F48BC;
	sub_822AA648(ctx, base);
	// li r4,1100
	ctx.r4.s64 = 1100;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822aa648
	ctx.lr = 0x823F48C8;
	sub_822AA648(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r30,r11,1696
	ctx.r30.s64 = ctx.r11.s64 + 1696;
	// bl 0x8223aa28
	ctx.lr = 0x823F48D8;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x820c8218
	ctx.lr = 0x823F48E8;
	sub_820C8218(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca198
	ctx.lr = 0x823F48F8;
	sub_820CA198(ctx, base);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// blt cr6,0x823f4914
	if (ctx.cr6.lt) goto loc_823F4914;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_823F4914:
	// lwz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823f4da0
	if (ctx.cr6.eq) goto loc_823F4DA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 + 12;
	// lis r22,-32177
	ctx.r22.s64 = -2108751872;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_823F4938:
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// lwz r29,-4308(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4308);
	// add r28,r11,r24
	ctx.r28.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823ec8d0
	ctx.lr = 0x823F4950;
	sub_823EC8D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ec978
	ctx.lr = 0x823F495C;
	sub_823EC978(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f4980
	if (ctx.cr6.lt) goto loc_823F4980;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r26.u32);
loc_823F4980:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ec8f8
	ctx.lr = 0x823F498C;
	sub_823EC8F8(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r26.u32);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// lfd f10,168(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
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
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f6,160(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f4a54
	if (ctx.cr6.lt) goto loc_823F4A54;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r27.u32);
loc_823F4A54:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ecdb0
	ctx.lr = 0x823F4A60;
	sub_823ECDB0(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r26.u32);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// lfd f10,192(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r3.u64);
	// lfd f6,184(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f4b30
	if (ctx.cr6.lt) goto loc_823F4B30;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r8,r27
	ctx.r8.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823F4B30:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
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
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// lfd f10,208(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f6,128(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f4bd8
	if (ctx.cr6.lt) goto loc_823F4BD8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823F4BD8:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f4c04
	if (ctx.cr6.lt) goto loc_823F4C04;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823F4C04:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x823f4c14
	if (!ctx.cr6.eq) goto loc_823F4C14;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_823F4C14:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f12,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// lfd f0,200(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f9,200(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823f4d8c
	if (!ctx.cr6.eq) goto loc_823F4D8C;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x820c9e18
	ctx.lr = 0x823F4CAC;
	sub_820C9E18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,680
	ctx.r4.s64 = 680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ede38
	ctx.lr = 0x823F4CBC;
	sub_823EDE38(ctx, base);
	// lfs f0,1240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1240);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r4,702
	ctx.r4.s64 = 702;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823ede38
	ctx.lr = 0x823F4CD8;
	sub_823EDE38(ctx, base);
	// lfs f12,1244(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1244);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// li r4,703
	ctx.r4.s64 = 703;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823ede38
	ctx.lr = 0x823F4CF4;
	sub_823EDE38(ctx, base);
	// lfs f10,1248(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1248);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// li r4,704
	ctx.r4.s64 = 704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823ede38
	ctx.lr = 0x823F4D10;
	sub_823EDE38(ctx, base);
	// lfs f8,1252(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1252);
	ctx.f8.f64 = double(temp.f32);
	// li r4,705
	ctx.r4.s64 = 705;
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823ede38
	ctx.lr = 0x823F4D2C;
	sub_823EDE38(ctx, base);
	// li r4,706
	ctx.r4.s64 = 706;
	// lwz r5,1272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ede38
	ctx.lr = 0x823F4D3C;
	sub_823EDE38(ctx, base);
	// li r4,707
	ctx.r4.s64 = 707;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1276);
	// bl 0x823ede38
	ctx.lr = 0x823F4D4C;
	sub_823EDE38(ctx, base);
	// li r4,708
	ctx.r4.s64 = 708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1280);
	// bl 0x823ede38
	ctx.lr = 0x823F4D5C;
	sub_823EDE38(ctx, base);
	// li r4,709
	ctx.r4.s64 = 709;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1264);
	// bl 0x823ede38
	ctx.lr = 0x823F4D6C;
	sub_823EDE38(ctx, base);
	// li r4,710
	ctx.r4.s64 = 710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1260);
	// bl 0x823ede38
	ctx.lr = 0x823F4D7C;
	sub_823EDE38(ctx, base);
	// li r4,711
	ctx.r4.s64 = 711;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1256);
	// bl 0x823ede38
	ctx.lr = 0x823F4D8C;
	sub_823EDE38(ctx, base);
loc_823F4D8C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823f4938
	if (ctx.cr6.lt) goto loc_823F4938;
loc_823F4DA0:
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_823F4DAC"))) PPC_WEAK_FUNC(sub_823F4DAC);
PPC_FUNC_IMPL(__imp__sub_823F4DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F4DB0"))) PPC_WEAK_FUNC(sub_823F4DB0);
PPC_FUNC_IMPL(__imp__sub_823F4DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823F4DB8;
	sub_82248774(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82404480
	ctx.lr = 0x823F4DC8;
	sub_82404480(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r8,-28272
	ctx.r8.s64 = ctx.r8.s64 + -28272;
	// addi r28,r28,-28232
	ctx.r28.s64 = ctx.r28.s64 + -28232;
	// addi r7,r11,-11376
	ctx.r7.s64 = ctx.r11.s64 + -11376;
	// addi r6,r10,-11512
	ctx.r6.s64 = ctx.r10.s64 + -11512;
	// addi r5,r9,-11524
	ctx.r5.s64 = ctx.r9.s64 + -11524;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r3,135
	ctx.r3.s64 = 135;
	// stw r29,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r29.u32);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// stw r30,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r30.u32);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// stw r29,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r29.u32);
	// stw r30,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r30.u32);
	// stw r29,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r29.u32);
	// stw r30,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r30.u32);
	// stw r29,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r29.u32);
	// stw r3,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r3.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r27,-4308(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4308);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ec768
	ctx.lr = 0x823F4E58;
	sub_823EC768(ctx, base);
	// lwz r8,12032(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12032);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// lwz r3,-4392(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4392);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F4E78;
	sub_823E8958(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x823e8958
	ctx.lr = 0x823F4E8C;
	sub_823E8958(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x823e8958
	ctx.lr = 0x823F4EA0;
	sub_823E8958(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x823e8958
	ctx.lr = 0x823F4EB4;
	sub_823E8958(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F4EC8;
	sub_823E8958(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// beq cr6,0x823f4ef0
	if (ctx.cr6.eq) goto loc_823F4EF0;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x823f4ef0
	if (ctx.cr6.eq) goto loc_823F4EF0;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823f4ef8
	if (ctx.cr6.eq) goto loc_823F4EF8;
loc_823F4EF0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_823F4EF8:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// bl 0x823ee538
	ctx.lr = 0x823F4F30;
	sub_823EE538(ctx, base);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823f4fa8
	if (!ctx.cr6.gt) goto loc_823F4FA8;
loc_823F4F40:
	// cmpw cr6,r25,r30
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x823f4f5c
	if (ctx.cr6.eq) goto loc_823F4F5C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823f4f40
	if (ctx.cr6.lt) goto loc_823F4F40;
	// b 0x823f4fa8
	goto loc_823F4FA8;
loc_823F4F5C:
	// add r11,r23,r24
	ctx.r11.u64 = ctx.r23.u64 + ctx.r24.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823f4fa8
	if (ctx.cr6.eq) goto loc_823F4FA8;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee538
	ctx.lr = 0x823F4F7C;
	sub_823EE538(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x823f4fa8
	if (!ctx.cr6.gt) goto loc_823F4FA8;
loc_823F4F84:
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
	// bl 0x823ee560
	ctx.lr = 0x823F4FA0;
	sub_823EE560(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x823f4f84
	if (!ctx.cr0.eq) goto loc_823F4F84;
loc_823F4FA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823F4FC8;
	sub_823C31B0(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// li r5,15709
	ctx.r5.s64 = 15709;
	// li r4,356
	ctx.r4.s64 = 356;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r29,14228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14228, ctx.r29.u32);
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r29,15524(r6)
	PPC_STORE_U32(ctx.r6.u32 + 15524, ctx.r29.u32);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F4FF0;
	sub_82106F58(ctx, base);
	// li r5,15709
	ctx.r5.s64 = 15709;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// li r4,355
	ctx.r4.s64 = 355;
	// bl 0x82106f58
	ctx.lr = 0x823F5000;
	sub_82106F58(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 168);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x823F5014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f41e8
	ctx.lr = 0x823F5024;
	sub_823F41E8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f41e8
	ctx.lr = 0x823F5034;
	sub_823F41E8(ctx, base);
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823F503C;
	sub_823C8DF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824040e0
	ctx.lr = 0x823F5048;
	sub_824040E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ca688
	ctx.lr = 0x823F5050;
	sub_823CA688(ctx, base);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-4384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d10
	ctx.lr = 0x823F5068;
	sub_823E9D10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223ae18
	ctx.lr = 0x823F5070;
	sub_8223AE18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f3fa8
	ctx.lr = 0x823F5078;
	sub_823F3FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed490
	ctx.lr = 0x823F5080;
	sub_823ED490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823F508C"))) PPC_WEAK_FUNC(sub_823F508C);
PPC_FUNC_IMPL(__imp__sub_823F508C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F5090"))) PPC_WEAK_FUNC(sub_823F5090);
PPC_FUNC_IMPL(__imp__sub_823F5090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f43f0
	ctx.lr = 0x823F50AC;
	sub_823F43F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82404088
	ctx.lr = 0x823F50B8;
	sub_82404088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f50d0
	if (ctx.cr6.eq) goto loc_823F50D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823e98d8
	ctx.lr = 0x823F50C8;
	sub_823E98D8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x823f50d8
	goto loc_823F50D8;
loc_823F50D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823e98d8
	ctx.lr = 0x823F50D8;
	sub_823E98D8(ctx, base);
loc_823F50D8:
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,4548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4548, ctx.r30.u32);
	// bl 0x82404130
	ctx.lr = 0x823F50EC;
	sub_82404130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5104"))) PPC_WEAK_FUNC(sub_823F5104);
PPC_FUNC_IMPL(__imp__sub_823F5104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F5108"))) PPC_WEAK_FUNC(sub_823F5108);
PPC_FUNC_IMPL(__imp__sub_823F5108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-10600
	ctx.r8.s64 = ctx.r11.s64 + -10600;
	// addi r7,r10,-10736
	ctx.r7.s64 = ctx.r10.s64 + -10736;
	// addi r6,r9,-10748
	ctx.r6.s64 = ctx.r9.s64 + -10748;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// ori r10,r11,37336
	ctx.r10.u64 = ctx.r11.u64 | 37336;
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r3,-4392(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4392);
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F5160;
	sub_823E8918(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823F5164;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824045e0
	ctx.lr = 0x823F516C;
	sub_824045E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5180"))) PPC_WEAK_FUNC(sub_823F5180);
PPC_FUNC_IMPL(__imp__sub_823F5180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F51A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82404b80
	ctx.lr = 0x823F51AC;
	sub_82404B80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F51C0"))) PPC_WEAK_FUNC(sub_823F51C0);
PPC_FUNC_IMPL(__imp__sub_823F51C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823F51D8;
	sub_823C3C98(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r11.u32);
	// bl 0x8223a9f8
	ctx.lr = 0x823F51E4;
	sub_8223A9F8(ctx, base);
	// bl 0x8223b2d8
	ctx.lr = 0x823F51E8;
	sub_8223B2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f5200
	if (!ctx.cr6.eq) goto loc_823F5200;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x823F51F8;
	sub_821EBAA8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823f5228
	goto loc_823F5228;
loc_823F5200:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// bl 0x823ec710
	ctx.lr = 0x823F520C;
	sub_823EC710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f5224
	if (ctx.cr6.eq) goto loc_823F5224;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x823F521C;
	sub_821EBAA8(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x823f5228
	goto loc_823F5228;
loc_823F5224:
	// li r10,5
	ctx.r10.s64 = 5;
loc_823F5228:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,37340
	ctx.r9.u64 = ctx.r11.u64 | 37340;
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

__attribute__((alias("__imp__sub_823F5248"))) PPC_WEAK_FUNC(sub_823F5248);
PPC_FUNC_IMPL(__imp__sub_823F5248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823F5250;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r23,-4308(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ec710
	ctx.lr = 0x823F5268;
	sub_823EC710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f5424
	if (ctx.cr6.eq) goto loc_823F5424;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// addis r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 65536;
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// addis r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28272
	ctx.r30.s64 = ctx.r30.s64 + -28272;
	// addi r29,r29,-28264
	ctx.r29.s64 = ctx.r29.s64 + -28264;
	// addi r28,r28,-28256
	ctx.r28.s64 = ctx.r28.s64 + -28256;
	// addi r27,r27,-28248
	ctx.r27.s64 = ctx.r27.s64 + -28248;
	// addi r26,r26,-28240
	ctx.r26.s64 = ctx.r26.s64 + -28240;
	// addi r25,r25,-28232
	ctx.r25.s64 = ctx.r25.s64 + -28232;
	// addi r24,r24,-28224
	ctx.r24.s64 = ctx.r24.s64 + -28224;
	// addi r22,r22,-28216
	ctx.r22.s64 = ctx.r22.s64 + -28216;
	// addi r21,r21,-28208
	ctx.r21.s64 = ctx.r21.s64 + -28208;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,21
	ctx.r4.s64 = 21;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// bl 0x823ecd80
	ctx.lr = 0x823F52EC;
	sub_823ECD80(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f52fc
	if (!ctx.cr6.eq) goto loc_823F52FC;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_823F52FC:
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ecd80
	ctx.lr = 0x823F5308;
	sub_823ECD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f5314
	if (!ctx.cr6.eq) goto loc_823F5314;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_823F5314:
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ecd80
	ctx.lr = 0x823F5320;
	sub_823ECD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f532c
	if (!ctx.cr6.eq) goto loc_823F532C;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_823F532C:
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ecd80
	ctx.lr = 0x823F5338;
	sub_823ECD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f5344
	if (!ctx.cr6.eq) goto loc_823F5344;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_823F5344:
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ecd80
	ctx.lr = 0x823F5350;
	sub_823ECD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f535c
	if (!ctx.cr6.eq) goto loc_823F535C;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_823F535C:
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ecd80
	ctx.lr = 0x823F5368;
	sub_823ECD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f5374
	if (!ctx.cr6.eq) goto loc_823F5374;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_823F5374:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ecd80
	ctx.lr = 0x823F5380;
	sub_823ECD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f538c
	if (!ctx.cr6.eq) goto loc_823F538C;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_823F538C:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ecd80
	ctx.lr = 0x823F5398;
	sub_823ECD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f53a4
	if (!ctx.cr6.eq) goto loc_823F53A4;
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
loc_823F53A4:
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ecd80
	ctx.lr = 0x823F53B0;
	sub_823ECD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f53bc
	if (!ctx.cr6.eq) goto loc_823F53BC;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
loc_823F53BC:
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ecd80
	ctx.lr = 0x823F53C8;
	sub_823ECD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f53d4
	if (!ctx.cr6.eq) goto loc_823F53D4;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
loc_823F53D4:
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ecd80
	ctx.lr = 0x823F53E0;
	sub_823ECD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f53ec
	if (!ctx.cr6.eq) goto loc_823F53EC;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
loc_823F53EC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ecd80
	ctx.lr = 0x823F53F8;
	sub_823ECD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f5404
	if (!ctx.cr6.eq) goto loc_823F5404;
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
loc_823F5404:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,9492
	ctx.r4.s64 = ctx.r11.s64 + 9492;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ec820
	ctx.lr = 0x823F5418;
	sub_823EC820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f5424
	if (!ctx.cr6.eq) goto loc_823F5424;
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
loc_823F5424:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823F542C"))) PPC_WEAK_FUNC(sub_823F542C);
PPC_FUNC_IMPL(__imp__sub_823F542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F5430"))) PPC_WEAK_FUNC(sub_823F5430);
PPC_FUNC_IMPL(__imp__sub_823F5430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,1200
	ctx.r3.s64 = ctx.r3.s64 + 1200;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F5458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// ori r7,r9,37340
	ctx.r7.u64 = ctx.r9.u64 | 37340;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F547C"))) PPC_WEAK_FUNC(sub_823F547C);
PPC_FUNC_IMPL(__imp__sub_823F547C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F5480"))) PPC_WEAK_FUNC(sub_823F5480);
PPC_FUNC_IMPL(__imp__sub_823F5480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,1200
	ctx.r3.s64 = ctx.r3.s64 + 1200;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F54A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f54c0
	if (ctx.cr6.eq) goto loc_823F54C0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r9,r11,37340
	ctx.r9.u64 = ctx.r11.u64 | 37340;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
loc_823F54C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F54D4"))) PPC_WEAK_FUNC(sub_823F54D4);
PPC_FUNC_IMPL(__imp__sub_823F54D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F54D8"))) PPC_WEAK_FUNC(sub_823F54D8);
PPC_FUNC_IMPL(__imp__sub_823F54D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823F54E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r10,1200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// addi r31,r3,1200
	ctx.r31.s64 = ctx.r3.s64 + 1200;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823F5510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823f552c
	if (ctx.cr6.eq) goto loc_823F552C;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x823f5530
	goto loc_823F5530;
loc_823F552C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_823F5530:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F5538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r9,r11,37340
	ctx.r9.u64 = ctx.r11.u64 | 37340;
	// stwx r10,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823F5550"))) PPC_WEAK_FUNC(sub_823F5550);
PPC_FUNC_IMPL(__imp__sub_823F5550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8223ad48
	ctx.lr = 0x823F556C;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f55bc
	if (ctx.cr6.eq) goto loc_823F55BC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-788(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea3e0
	ctx.lr = 0x823F5584;
	sub_821EA3E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f5594
	if (ctx.cr6.eq) goto loc_823F5594;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea9b8
	ctx.lr = 0x823F5594;
	sub_821EA9B8(ctx, base);
loc_823F5594:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// bl 0x823ec710
	ctx.lr = 0x823F55A0;
	sub_823EC710(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r9,r11,37340
	ctx.r9.u64 = ctx.r11.u64 | 37340;
	// li r10,7
	ctx.r10.s64 = 7;
	// bne cr6,0x823f55b8
	if (!ctx.cr6.eq) goto loc_823F55B8;
	// li r10,5
	ctx.r10.s64 = 5;
loc_823F55B8:
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
loc_823F55BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F55D4"))) PPC_WEAK_FUNC(sub_823F55D4);
PPC_FUNC_IMPL(__imp__sub_823F55D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F55D8"))) PPC_WEAK_FUNC(sub_823F55D8);
PPC_FUNC_IMPL(__imp__sub_823F55D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x823F55F4;
	sub_821EBAA8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r4,15704
	ctx.r4.s64 = 15704;
	// ori r10,r11,37244
	ctx.r10.u64 = ctx.r11.u64 | 37244;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82154c38
	ctx.lr = 0x823F5608;
	sub_82154C38(ctx, base);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// lwz r3,-4308(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4308);
	// bl 0x823ec6a8
	ctx.lr = 0x823F5614;
	sub_823EC6A8(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r7,6
	ctx.r7.s64 = 6;
	// ori r6,r8,37340
	ctx.r6.u64 = ctx.r8.u64 | 37340;
	// stwx r7,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5638"))) PPC_WEAK_FUNC(sub_823F5638);
PPC_FUNC_IMPL(__imp__sub_823F5638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// bl 0x823ec710
	ctx.lr = 0x823F5658;
	sub_823EC710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f5680
	if (ctx.cr6.eq) goto loc_823F5680;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37244
	ctx.r10.u64 = ctx.r11.u64 | 37244;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82154aa8
	ctx.lr = 0x823F5670;
	sub_82154AA8(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// ori r7,r9,37340
	ctx.r7.u64 = ctx.r9.u64 | 37340;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
loc_823F5680:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5694"))) PPC_WEAK_FUNC(sub_823F5694);
PPC_FUNC_IMPL(__imp__sub_823F5694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F5698"))) PPC_WEAK_FUNC(sub_823F5698);
PPC_FUNC_IMPL(__imp__sub_823F5698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30527
	ctx.r4.s64 = 30527;
	// addi r3,r3,-28292
	ctx.r3.s64 = ctx.r3.s64 + -28292;
	// bl 0x82155c88
	ctx.lr = 0x823F56C0;
	sub_82155C88(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// ori r10,r10,37340
	ctx.r10.u64 = ctx.r10.u64 | 37340;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F56E4"))) PPC_WEAK_FUNC(sub_823F56E4);
PPC_FUNC_IMPL(__imp__sub_823F56E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F56E8"))) PPC_WEAK_FUNC(sub_823F56E8);
PPC_FUNC_IMPL(__imp__sub_823F56E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-28292
	ctx.r3.s64 = ctx.r3.s64 + -28292;
	// bl 0x82155dc0
	ctx.lr = 0x823F5708;
	sub_82155DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f5760
	if (!ctx.cr6.eq) goto loc_823F5760;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,-4308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// stw r10,12060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12060, ctx.r10.u32);
	// stw r8,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r8.u32);
	// lwz r11,-4392(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4392);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823f5748
	if (ctx.cr6.eq) goto loc_823F5748;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// b 0x823f574c
	goto loc_823F574C;
loc_823F5748:
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
loc_823F574C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F5760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F5760:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5774"))) PPC_WEAK_FUNC(sub_823F5774);
PPC_FUNC_IMPL(__imp__sub_823F5774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F5778"))) PPC_WEAK_FUNC(sub_823F5778);
PPC_FUNC_IMPL(__imp__sub_823F5778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30551
	ctx.r4.s64 = 30551;
	// addi r3,r3,-28292
	ctx.r3.s64 = ctx.r3.s64 + -28292;
	// bl 0x82155c88
	ctx.lr = 0x823F57A0;
	sub_82155C88(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// ori r10,r10,37340
	ctx.r10.u64 = ctx.r10.u64 | 37340;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F57C4"))) PPC_WEAK_FUNC(sub_823F57C4);
PPC_FUNC_IMPL(__imp__sub_823F57C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F57C8"))) PPC_WEAK_FUNC(sub_823F57C8);
PPC_FUNC_IMPL(__imp__sub_823F57C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-28292
	ctx.r3.s64 = ctx.r3.s64 + -28292;
	// bl 0x82155dc0
	ctx.lr = 0x823F57E8;
	sub_82155DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f582c
	if (!ctx.cr6.eq) goto loc_823F582C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r10.u32);
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bne cr6,0x823f5814
	if (!ctx.cr6.eq) goto loc_823F5814;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F5814:
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F582C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F582C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5840"))) PPC_WEAK_FUNC(sub_823F5840);
PPC_FUNC_IMPL(__imp__sub_823F5840) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823f5850
	sub_823F5850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F5848"))) PPC_WEAK_FUNC(sub_823F5848);
PPC_FUNC_IMPL(__imp__sub_823F5848) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823f5850
	sub_823F5850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F5850"))) PPC_WEAK_FUNC(sub_823F5850);
PPC_FUNC_IMPL(__imp__sub_823F5850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f5108
	ctx.lr = 0x823F5870;
	sub_823F5108(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f588c
	if (ctx.cr6.eq) goto loc_823F588C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823F5888;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823F588C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F58A4"))) PPC_WEAK_FUNC(sub_823F58A4);
PPC_FUNC_IMPL(__imp__sub_823F58A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F58A8"))) PPC_WEAK_FUNC(sub_823F58A8);
PPC_FUNC_IMPL(__imp__sub_823F58A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r9,r10,37336
	ctx.r9.u64 = ctx.r10.u64 | 37336;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823f58ec
	// bdzf 4*cr6+eq,0x823f5910
	// bne cr6,0x823f5934
	if (!ctx.cr6.eq) goto loc_823F5934;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r10,-11176
	ctx.r11.s64 = ctx.r10.s64 + -11176;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_823F58EC:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-11176
	ctx.r10.s64 = ctx.r10.s64 + -11176;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r10,288
	ctx.r11.s64 = ctx.r10.s64 + 288;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_823F5910:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-11176
	ctx.r9.s64 = ctx.r9.s64 + -11176;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,328
	ctx.r11.s64 = ctx.r9.s64 + 328;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_823F5934:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-11176
	ctx.r9.s64 = ctx.r9.s64 + -11176;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,368
	ctx.r11.s64 = ctx.r9.s64 + 368;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F5958"))) PPC_WEAK_FUNC(sub_823F5958);
PPC_FUNC_IMPL(__imp__sub_823F5958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F595C"))) PPC_WEAK_FUNC(sub_823F595C);
PPC_FUNC_IMPL(__imp__sub_823F595C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F5960"))) PPC_WEAK_FUNC(sub_823F5960);
PPC_FUNC_IMPL(__imp__sub_823F5960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37308
	ctx.r10.u64 = ctx.r11.u64 | 37308;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823f5998
	if (!ctx.cr6.eq) goto loc_823F5998;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r9,r10,37236
	ctx.r9.u64 = ctx.r10.u64 | 37236;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823F5998:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F59A0"))) PPC_WEAK_FUNC(sub_823F59A0);
PPC_FUNC_IMPL(__imp__sub_823F59A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x823F59A8;
	sub_82248760(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r24,56(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8218b408
	ctx.lr = 0x823F59C4;
	sub_8218B408(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823F59D0;
	sub_8218B408(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x823F59E0;
	sub_823C3280(ctx, base);
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// addi r10,r24,-2
	ctx.r10.s64 = ctx.r24.s64 + -2;
	// addi r9,r24,-3
	ctx.r9.s64 = ctx.r24.s64 + -3;
	// addi r8,r24,-4
	ctx.r8.s64 = ctx.r24.s64 + -4;
	// addi r7,r24,-5
	ctx.r7.s64 = ctx.r24.s64 + -5;
	// addi r6,r24,-6
	ctx.r6.s64 = ctx.r24.s64 + -6;
	// addi r5,r24,-7
	ctx.r5.s64 = ctx.r24.s64 + -7;
	// addi r4,r24,-8
	ctx.r4.s64 = ctx.r24.s64 + -8;
	// lis r30,0
	ctx.r30.s64 = 0;
	// lis r29,0
	ctx.r29.s64 = 0;
	// lis r28,0
	ctx.r28.s64 = 0;
	// lis r27,0
	ctx.r27.s64 = 0;
	// lis r23,0
	ctx.r23.s64 = 0;
	// lis r22,0
	ctx.r22.s64 = 0;
	// lis r21,0
	ctx.r21.s64 = 0;
	// lis r20,0
	ctx.r20.s64 = 0;
	// lis r19,0
	ctx.r19.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// ori r23,r23,37300
	ctx.r23.u64 = ctx.r23.u64 | 37300;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r18,r24
	ctx.r18.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// ori r30,r30,37268
	ctx.r30.u64 = ctx.r30.u64 | 37268;
	// ori r29,r29,37276
	ctx.r29.u64 = ctx.r29.u64 | 37276;
	// ori r28,r28,37284
	ctx.r28.u64 = ctx.r28.u64 | 37284;
	// ori r27,r27,37292
	ctx.r27.u64 = ctx.r27.u64 | 37292;
	// ori r22,r22,37308
	ctx.r22.u64 = ctx.r22.u64 | 37308;
	// ori r21,r21,37316
	ctx.r21.u64 = ctx.r21.u64 | 37316;
	// ori r20,r20,37324
	ctx.r20.u64 = ctx.r20.u64 | 37324;
	// ori r19,r19,37332
	ctx.r19.u64 = ctx.r19.u64 | 37332;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stwx r11,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stwx r10,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stwx r9,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stwx r8,r31,r23
	PPC_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r8.u32);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stwx r7,r31,r22
	PPC_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r7.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stwx r6,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r6.u32);
	// rlwinm r18,r18,27,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 27) & 0x1;
	// stwx r5,r31,r20
	PPC_STORE_U32(ctx.r31.u32 + ctx.r20.u32, ctx.r5.u32);
	// stwx r4,r31,r19
	PPC_STORE_U32(ctx.r31.u32 + ctx.r19.u32, ctx.r4.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stwx r18,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r18.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r23,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// bl 0x823f5248
	ctx.lr = 0x823F5AE4;
	sub_823F5248(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r21,r11,-11176
	ctx.r21.s64 = ctx.r11.s64 + -11176;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addis r20,r31,1
	ctx.r20.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addi r20,r20,-28200
	ctx.r20.s64 = ctx.r20.s64 + -28200;
	// addi r30,r21,-12
	ctx.r30.s64 = ctx.r21.s64 + -12;
	// addi r27,r27,-28272
	ctx.r27.s64 = ctx.r27.s64 + -28272;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_823F5B10:
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823f5b48
	if (ctx.cr6.eq) goto loc_823F5B48;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x823f5b40
	if (ctx.cr6.eq) goto loc_823F5B40;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x823f5b5c
	if (!ctx.cr6.eq) goto loc_823F5B5C;
	// addi r11,r29,-6
	ctx.r11.s64 = ctx.r29.s64 + -6;
	// b 0x823f5b4c
	goto loc_823F5B4C;
loc_823F5B40:
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// b 0x823f5b4c
	goto loc_823F5B4C;
loc_823F5B48:
	// addi r11,r29,-3
	ctx.r11.s64 = ctx.r29.s64 + -3;
loc_823F5B4C:
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_823F5B5C:
	// lwz r8,252(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 & ctx.r10.u64;
	// blt cr6,0x823f5b90
	if (ctx.cr6.lt) goto loc_823F5B90;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r11.u32);
loc_823F5B90:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f5bb8
	if (ctx.cr6.lt) goto loc_823F5BB8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823F5BB8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// bne cr6,0x823f5bc8
	if (!ctx.cr6.eq) goto loc_823F5BC8;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_823F5BC8:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwz r4,832(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f6,200(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f4,204(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823f5c74
	if (ctx.cr6.eq) goto loc_823F5C74;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f5c74
	if (ctx.cr6.lt) goto loc_823F5C74;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823F5C74:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823f5ca4
	if (ctx.cr6.eq) goto loc_823F5CA4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f5ca4
	if (ctx.cr6.lt) goto loc_823F5CA4;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823F5CA4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f5cc4
	if (ctx.cr6.lt) goto loc_823F5CC4;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r22,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r22.u32);
loc_823F5CC4:
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F5CD4;
	sub_82106F58(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bne cr6,0x823f5ce4
	if (!ctx.cr6.eq) goto loc_823F5CE4;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_823F5CE4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
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
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
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
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f5d88
	if (ctx.cr6.lt) goto loc_823F5D88;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r22,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r22.u32);
loc_823F5D88:
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F5D98;
	sub_82106F58(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bne cr6,0x823f5da8
	if (!ctx.cr6.eq) goto loc_823F5DA8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_823F5DA8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwzu r11,32(r30)
	ea = 32 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r29,9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 9, ctx.xer);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lfd f10,136(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
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
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// blt cr6,0x823f5b10
	if (ctx.cr6.lt) goto loc_823F5B10;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823f5f30
	if (!ctx.cr6.eq) goto loc_823F5F30;
	// extsw r10,r23
	ctx.r10.s64 = ctx.r23.s32;
	// addi r11,r21,288
	ctx.r11.s64 = ctx.r21.s64 + 288;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// li r28,2
	ctx.r28.s64 = 2;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_823F5E70:
	// subf r10,r29,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x823f5e9c
	if (ctx.cr6.lt) goto loc_823F5E9C;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r10.u32);
loc_823F5E9C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f5ec4
	if (ctx.cr6.lt) goto loc_823F5EC4;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823F5EC4:
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
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
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f5f14
	if (ctx.cr6.lt) goto loc_823F5F14;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r22,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r22.u32);
loc_823F5F14:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F5F24;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x823f5e70
	if (!ctx.cr0.eq) goto loc_823F5E70;
loc_823F5F30:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823f6024
	if (!ctx.cr6.eq) goto loc_823F6024;
	// extsw r10,r23
	ctx.r10.s64 = ctx.r23.s32;
	// addi r11,r21,328
	ctx.r11.s64 = ctx.r21.s64 + 328;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_823F5F64:
	// subf r10,r29,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x823f5f90
	if (ctx.cr6.lt) goto loc_823F5F90;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
loc_823F5F90:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f5fb8
	if (ctx.cr6.lt) goto loc_823F5FB8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823F5FB8:
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
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
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f6008
	if (ctx.cr6.lt) goto loc_823F6008;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r22,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r22.u32);
loc_823F6008:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F6018;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x823f5f64
	if (!ctx.cr0.eq) goto loc_823F5F64;
loc_823F6024:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823f6118
	if (!ctx.cr6.eq) goto loc_823F6118;
	// extsw r10,r23
	ctx.r10.s64 = ctx.r23.s32;
	// addi r11,r21,368
	ctx.r11.s64 = ctx.r21.s64 + 368;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// li r28,3
	ctx.r28.s64 = 3;
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_823F6058:
	// subf r10,r29,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x823f6084
	if (ctx.cr6.lt) goto loc_823F6084;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
loc_823F6084:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f60ac
	if (ctx.cr6.lt) goto loc_823F60AC;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823F60AC:
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,204(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,208(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f60fc
	if (ctx.cr6.lt) goto loc_823F60FC;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r22,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r22.u32);
loc_823F60FC:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F610C;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x823f6058
	if (!ctx.cr0.eq) goto loc_823F6058;
loc_823F6118:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_823F6128"))) PPC_WEAK_FUNC(sub_823F6128);
PPC_FUNC_IMPL(__imp__sub_823F6128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823F6130;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r24,r3,1
	ctx.r24.s64 = ctx.r3.s64 + 65536;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// addi r24,r24,-28200
	ctx.r24.s64 = ctx.r24.s64 + -28200;
	// lis r26,-32177
	ctx.r26.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4392(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4392);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x823e8958
	ctx.lr = 0x823F6178;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4392);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F6190;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4392);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x823e8958
	ctx.lr = 0x823F61A8;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4392);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x823e8958
	ctx.lr = 0x823F61C0;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4392);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F61D8;
	sub_823E8958(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823f6230
	if (ctx.cr6.gt) goto loc_823F6230;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823f6204
	// bdzf 4*cr6+eq,0x823f6210
	// bne cr6,0x823f621c
	if (!ctx.cr6.eq) goto loc_823F621C;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// b 0x823f6224
	goto loc_823F6224;
loc_823F6204:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x823f6224
	goto loc_823F6224;
loc_823F6210:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// b 0x823f6224
	goto loc_823F6224;
loc_823F621C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
loc_823F6224:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_823F6230:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,164(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823F626C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823F6274"))) PPC_WEAK_FUNC(sub_823F6274);
PPC_FUNC_IMPL(__imp__sub_823F6274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F6278"))) PPC_WEAK_FUNC(sub_823F6278);
PPC_FUNC_IMPL(__imp__sub_823F6278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x821ebaa8
	ctx.lr = 0x823F6294;
	sub_821EBAA8(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// bl 0x823ec738
	ctx.lr = 0x823F62A0;
	sub_823EC738(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r9,r11,37340
	ctx.r9.u64 = ctx.r11.u64 | 37340;
	// beq cr6,0x823f62cc
	if (ctx.cr6.eq) goto loc_823F62CC;
	// li r10,11
	ctx.r10.s64 = 11;
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
loc_823F62CC:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
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
}

__attribute__((alias("__imp__sub_823F62F0"))) PPC_WEAK_FUNC(sub_823F62F0);
PPC_FUNC_IMPL(__imp__sub_823F62F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// addi r10,r10,-28200
	ctx.r10.s64 = ctx.r10.s64 + -28200;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,17684(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17684, ctx.r6.u32);
	// lwz r5,832(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r8,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,17828(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17828, ctx.r8.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subfe r4,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,17972(r5)
	PPC_STORE_U32(ctx.r5.u32 + 17972, ctx.r4.u32);
	// b 0x823f59a0
	sub_823F59A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6350"))) PPC_WEAK_FUNC(sub_823F6350);
PPC_FUNC_IMPL(__imp__sub_823F6350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37340
	ctx.r10.u64 = ctx.r11.u64 | 37340;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32193
	ctx.r12.s64 = -2109800448;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25472
	ctx.r12.s64 = ctx.r12.s64 + 25472;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

