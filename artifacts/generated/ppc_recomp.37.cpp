#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821AD56C"))) PPC_WEAK_FUNC(sub_821AD56C);
PPC_FUNC_IMPL(__imp__sub_821AD56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD570"))) PPC_WEAK_FUNC(sub_821AD570);
PPC_FUNC_IMPL(__imp__sub_821AD570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD58C;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD5A0;
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

__attribute__((alias("__imp__sub_821AD5B4"))) PPC_WEAK_FUNC(sub_821AD5B4);
PPC_FUNC_IMPL(__imp__sub_821AD5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD5B8"))) PPC_WEAK_FUNC(sub_821AD5B8);
PPC_FUNC_IMPL(__imp__sub_821AD5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD5D4;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD5E8;
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

__attribute__((alias("__imp__sub_821AD5FC"))) PPC_WEAK_FUNC(sub_821AD5FC);
PPC_FUNC_IMPL(__imp__sub_821AD5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD600"))) PPC_WEAK_FUNC(sub_821AD600);
PPC_FUNC_IMPL(__imp__sub_821AD600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD61C;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD630;
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

__attribute__((alias("__imp__sub_821AD644"))) PPC_WEAK_FUNC(sub_821AD644);
PPC_FUNC_IMPL(__imp__sub_821AD644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD648"))) PPC_WEAK_FUNC(sub_821AD648);
PPC_FUNC_IMPL(__imp__sub_821AD648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD66C;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD684;
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

__attribute__((alias("__imp__sub_821AD69C"))) PPC_WEAK_FUNC(sub_821AD69C);
PPC_FUNC_IMPL(__imp__sub_821AD69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD6A0"))) PPC_WEAK_FUNC(sub_821AD6A0);
PPC_FUNC_IMPL(__imp__sub_821AD6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD6C4;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD6DC;
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

__attribute__((alias("__imp__sub_821AD6F4"))) PPC_WEAK_FUNC(sub_821AD6F4);
PPC_FUNC_IMPL(__imp__sub_821AD6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD6F8"))) PPC_WEAK_FUNC(sub_821AD6F8);
PPC_FUNC_IMPL(__imp__sub_821AD6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD714;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD728;
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

__attribute__((alias("__imp__sub_821AD73C"))) PPC_WEAK_FUNC(sub_821AD73C);
PPC_FUNC_IMPL(__imp__sub_821AD73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD740"))) PPC_WEAK_FUNC(sub_821AD740);
PPC_FUNC_IMPL(__imp__sub_821AD740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD75C;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD770;
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

__attribute__((alias("__imp__sub_821AD784"))) PPC_WEAK_FUNC(sub_821AD784);
PPC_FUNC_IMPL(__imp__sub_821AD784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD788"))) PPC_WEAK_FUNC(sub_821AD788);
PPC_FUNC_IMPL(__imp__sub_821AD788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD7A4;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD7B8;
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

__attribute__((alias("__imp__sub_821AD7CC"))) PPC_WEAK_FUNC(sub_821AD7CC);
PPC_FUNC_IMPL(__imp__sub_821AD7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD7D0"))) PPC_WEAK_FUNC(sub_821AD7D0);
PPC_FUNC_IMPL(__imp__sub_821AD7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD7EC;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD800;
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

__attribute__((alias("__imp__sub_821AD814"))) PPC_WEAK_FUNC(sub_821AD814);
PPC_FUNC_IMPL(__imp__sub_821AD814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD818"))) PPC_WEAK_FUNC(sub_821AD818);
PPC_FUNC_IMPL(__imp__sub_821AD818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821AD820;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD83C;
	sub_821A25B8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821deb10
	ctx.lr = 0x821AD850;
	sub_821DEB10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821AD858"))) PPC_WEAK_FUNC(sub_821AD858);
PPC_FUNC_IMPL(__imp__sub_821AD858) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821AD86C;
	sub_821A25B8(ctx, base);
	// bl 0x821debb8
	ctx.lr = 0x821AD870;
	sub_821DEBB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AD880"))) PPC_WEAK_FUNC(sub_821AD880);
PPC_FUNC_IMPL(__imp__sub_821AD880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD8A4;
	sub_821A25B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821deb78
	ctx.lr = 0x821AD8B0;
	sub_821DEB78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AD8C8"))) PPC_WEAK_FUNC(sub_821AD8C8);
PPC_FUNC_IMPL(__imp__sub_821AD8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD8EC;
	sub_821A25B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821dfe50
	ctx.lr = 0x821AD8F8;
	sub_821DFE50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AD910"))) PPC_WEAK_FUNC(sub_821AD910);
PPC_FUNC_IMPL(__imp__sub_821AD910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821AD934;
	sub_821A25B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821deba0
	ctx.lr = 0x821AD940;
	sub_821DEBA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AD958"))) PPC_WEAK_FUNC(sub_821AD958);
PPC_FUNC_IMPL(__imp__sub_821AD958) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821AD96C;
	sub_821A25B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AD97C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AD98C"))) PPC_WEAK_FUNC(sub_821AD98C);
PPC_FUNC_IMPL(__imp__sub_821AD98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AD990"))) PPC_WEAK_FUNC(sub_821AD990);
PPC_FUNC_IMPL(__imp__sub_821AD990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821AD998;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-7488(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7488, ctx.r3.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821a2548
	ctx.lr = 0x821AD9B8;
	sub_821A2548(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8226fad8
	ctx.lr = 0x821AD9C4;
	sub_8226FAD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226faa0
	ctx.lr = 0x821AD9D0;
	sub_8226FAA0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226fbf8
	ctx.lr = 0x821AD9DC;
	sub_8226FBF8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226fc88
	ctx.lr = 0x821AD9E8;
	sub_8226FC88(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226ff60
	ctx.lr = 0x821AD9F4;
	sub_8226FF60(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226ff00
	ctx.lr = 0x821ADA00;
	sub_8226FF00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271000
	ctx.lr = 0x821ADA0C;
	sub_82271000(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x82271030
	ctx.lr = 0x821ADA1C;
	sub_82271030(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,48
	ctx.r29.s64 = 48;
	// addi r30,r31,1524
	ctx.r30.s64 = ctx.r31.s64 + 1524;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r25,1
	ctx.r25.s64 = 1;
	// rldicr r27,r11,63,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_821ADA34:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// addi r26,r29,-32
	ctx.r26.s64 = ctx.r29.s64 + -32;
	// rlwinm r9,r11,0,22,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE3FF;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// srd r23,r27,r10
	ctx.r23.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r27.u64 >> (ctx.r10.u8 & 0x7F));
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r7,r23,r8
	ctx.r7.u64 = ctx.r23.u64 | ctx.r8.u64;
	// std r7,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r7.u64);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r6,0,19,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r9,r23,r10
	ctx.r9.u64 = ctx.r23.u64 | ctx.r10.u64;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// bl 0x82271488
	ctx.lr = 0x821ADA80;
	sub_82271488(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822712e0
	ctx.lr = 0x821ADA90;
	sub_822712E0(ctx, base);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwimi r8,r25,23,7,8
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r25.u32, 23) & 0x1800000) | (ctx.r8.u64 & 0xFFFFFFFFFE7FFFFF);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r8,24(r30)
	ea = 24 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r6,r23,r7
	ctx.r6.u64 = ctx.r23.u64 | ctx.r7.u64;
	// std r6,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r6.u64);
	// bne 0x821ada34
	if (!ctx.cr0.eq) goto loc_821ADA34;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,1140
	ctx.r30.s64 = ctx.r31.s64 + 1140;
loc_821ADABC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r9,r11,0,22,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE3FF;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// srd r28,r27,r8
	ctx.r28.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r27.u64 >> (ctx.r8.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r6,r28,r7
	ctx.r6.u64 = ctx.r28.u64 | ctx.r7.u64;
	// std r6,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r6.u64);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,0,19,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r8,r28,r9
	ctx.r8.u64 = ctx.r28.u64 | ctx.r9.u64;
	// std r8,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// bl 0x82271488
	ctx.lr = 0x821ADB08;
	sub_82271488(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822712e0
	ctx.lr = 0x821ADB18;
	sub_822712E0(ctx, base);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwimi r7,r25,23,7,8
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r25.u32, 23) & 0x1800000) | (ctx.r7.u64 & 0xFFFFFFFFFE7FFFFF);
	// cmpwi cr6,r29,22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 22, ctx.xer);
	// stwu r7,24(r30)
	ea = 24 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// ld r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r5,r28,r6
	ctx.r5.u64 = ctx.r28.u64 | ctx.r6.u64;
	// std r5,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r5.u64);
	// blt cr6,0x821adabc
	if (ctx.cr6.lt) goto loc_821ADABC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270210
	ctx.lr = 0x821ADB48;
	sub_82270210(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270250
	ctx.lr = 0x821ADB54;
	sub_82270250(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270288
	ctx.lr = 0x821ADB60;
	sub_82270288(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270328
	ctx.lr = 0x821ADB6C;
	sub_82270328(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822702f0
	ctx.lr = 0x821ADB78;
	sub_822702F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822702b8
	ctx.lr = 0x821ADB84;
	sub_822702B8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270358
	ctx.lr = 0x821ADB90;
	sub_82270358(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822703f8
	ctx.lr = 0x821ADB9C;
	sub_822703F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822703c0
	ctx.lr = 0x821ADBA8;
	sub_822703C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270388
	ctx.lr = 0x821ADBB4;
	sub_82270388(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270428
	ctx.lr = 0x821ADBC0;
	sub_82270428(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82270448
	ctx.lr = 0x821ADBD0;
	sub_82270448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270468
	ctx.lr = 0x821ADBDC;
	sub_82270468(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270168
	ctx.lr = 0x821ADBE8;
	sub_82270168(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822701a8
	ctx.lr = 0x821ADBF4;
	sub_822701A8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822701d8
	ctx.lr = 0x821ADC00;
	sub_822701D8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270708
	ctx.lr = 0x821ADC0C;
	sub_82270708(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270c70
	ctx.lr = 0x821ADC18;
	sub_82270C70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822725b8
	ctx.lr = 0x821ADC24;
	sub_822725B8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821ADC30"))) PPC_WEAK_FUNC(sub_821ADC30);
PPC_FUNC_IMPL(__imp__sub_821ADC30) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADC44;
	sub_821A25B8(ctx, base);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADC58"))) PPC_WEAK_FUNC(sub_821ADC58);
PPC_FUNC_IMPL(__imp__sub_821ADC58) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADC6C;
	sub_821A25B8(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADC80"))) PPC_WEAK_FUNC(sub_821ADC80);
PPC_FUNC_IMPL(__imp__sub_821ADC80) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADC94;
	sub_821A25B8(ctx, base);
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADCA8"))) PPC_WEAK_FUNC(sub_821ADCA8);
PPC_FUNC_IMPL(__imp__sub_821ADCA8) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADCBC;
	sub_821A25B8(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADCD0"))) PPC_WEAK_FUNC(sub_821ADCD0);
PPC_FUNC_IMPL(__imp__sub_821ADCD0) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADCE4;
	sub_821A25B8(ctx, base);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADCF8"))) PPC_WEAK_FUNC(sub_821ADCF8);
PPC_FUNC_IMPL(__imp__sub_821ADCF8) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADD0C;
	sub_821A25B8(ctx, base);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADD20"))) PPC_WEAK_FUNC(sub_821ADD20);
PPC_FUNC_IMPL(__imp__sub_821ADD20) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADD34;
	sub_821A25B8(ctx, base);
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADD48"))) PPC_WEAK_FUNC(sub_821ADD48);
PPC_FUNC_IMPL(__imp__sub_821ADD48) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADD5C;
	sub_821A25B8(ctx, base);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADD70"))) PPC_WEAK_FUNC(sub_821ADD70);
PPC_FUNC_IMPL(__imp__sub_821ADD70) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADD84;
	sub_821A25B8(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADD98"))) PPC_WEAK_FUNC(sub_821ADD98);
PPC_FUNC_IMPL(__imp__sub_821ADD98) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADDAC;
	sub_821A25B8(ctx, base);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADDC0"))) PPC_WEAK_FUNC(sub_821ADDC0);
PPC_FUNC_IMPL(__imp__sub_821ADDC0) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADDD4;
	sub_821A25B8(ctx, base);
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADDE8"))) PPC_WEAK_FUNC(sub_821ADDE8);
PPC_FUNC_IMPL(__imp__sub_821ADDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821ADE04;
	sub_821A25B8(ctx, base);
	// addi r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 35;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADE24"))) PPC_WEAK_FUNC(sub_821ADE24);
PPC_FUNC_IMPL(__imp__sub_821ADE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ADE28"))) PPC_WEAK_FUNC(sub_821ADE28);
PPC_FUNC_IMPL(__imp__sub_821ADE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821a25b8
	ctx.lr = 0x821ADE44;
	sub_821A25B8(ctx, base);
	// addi r11,r31,55
	ctx.r11.s64 = ctx.r31.s64 + 55;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADE64"))) PPC_WEAK_FUNC(sub_821ADE64);
PPC_FUNC_IMPL(__imp__sub_821ADE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ADE68"))) PPC_WEAK_FUNC(sub_821ADE68);
PPC_FUNC_IMPL(__imp__sub_821ADE68) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADE7C;
	sub_821A25B8(ctx, base);
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADE90"))) PPC_WEAK_FUNC(sub_821ADE90);
PPC_FUNC_IMPL(__imp__sub_821ADE90) {
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
	// bl 0x821a25b8
	ctx.lr = 0x821ADEA4;
	sub_821A25B8(ctx, base);
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADEB8"))) PPC_WEAK_FUNC(sub_821ADEB8);
PPC_FUNC_IMPL(__imp__sub_821ADEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821ADEC0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,724
	ctx.r30.s64 = ctx.r3.s64 + 724;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821ADED4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,752
	ctx.r29.s64 = ctx.r31.s64 + 752;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821ADEE0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// stw r8,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r8.u32);
	// stw r7,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r7.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x821ADF08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821ADF10;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821ADF18"))) PPC_WEAK_FUNC(sub_821ADF18);
PPC_FUNC_IMPL(__imp__sub_821ADF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821ADF20;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r11,724
	ctx.r3.s64 = ctx.r11.s64 + 724;
	// bl 0x8241dd2c
	ctx.lr = 0x821ADF44;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r9,r11,42
	ctx.r9.s64 = ctx.r11.s64 + 42;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,46
	ctx.r7.s64 = ctx.r11.s64 + 46;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r5,r11,42
	ctx.r5.s64 = ctx.r11.s64 + 42;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r4,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,110
	ctx.r3.s64 = ctx.r11.s64 + 110;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r10,r11,42
	ctx.r10.s64 = ctx.r11.s64 + 42;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mulli r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,724
	ctx.r3.s64 = ctx.r11.s64 + 724;
	// bl 0x8241dd3c
	ctx.lr = 0x821ADFB8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821ADFC0"))) PPC_WEAK_FUNC(sub_821ADFC0);
PPC_FUNC_IMPL(__imp__sub_821ADFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821ADFC8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,696
	ctx.r30.s64 = ctx.r3.s64 + 696;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821ADFE4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r9,r11,21
	ctx.r9.s64 = ctx.r11.s64 + 21;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x821AE018;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821AE020"))) PPC_WEAK_FUNC(sub_821AE020);
PPC_FUNC_IMPL(__imp__sub_821AE020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821AE028;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae094
	if (ctx.cr6.eq) goto loc_821AE094;
	// addi r27,r3,696
	ctx.r27.s64 = ctx.r3.s64 + 696;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AE04C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ae084
	if (!ctx.cr6.gt) goto loc_821AE084;
	// addi r31,r29,80
	ctx.r31.s64 = ctx.r29.s64 + 80;
loc_821AE060:
	// lwz r11,-76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -76);
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AE070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,164(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821ae060
	if (ctx.cr6.lt) goto loc_821AE060;
loc_821AE084:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x821AE094;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_821AE094:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821AE0A0"))) PPC_WEAK_FUNC(sub_821AE0A0);
PPC_FUNC_IMPL(__imp__sub_821AE0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821AE0A8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r3,r11,724
	ctx.r3.s64 = ctx.r11.s64 + 724;
	// bl 0x8241dd2c
	ctx.lr = 0x821AE0CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r10,r11,42
	ctx.r10.s64 = ctx.r11.s64 + 42;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x821ae180
	if (!ctx.cr6.gt) goto loc_821AE180;
loc_821AE0E8:
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r9,r10,46
	ctx.r9.s64 = ctx.r10.s64 + 46;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821ae134
	if (ctx.cr6.eq) goto loc_821AE134;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r10,110
	ctx.r10.s64 = ctx.r10.s64 + 110;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,46
	ctx.r8.s64 = ctx.r11.s64 + 46;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821AE130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_821AE134:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,46
	ctx.r10.s64 = ctx.r11.s64 + 46;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r7,r11,110
	ctx.r7.s64 = ctx.r11.s64 + 110;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r5,r11,42
	ctx.r5.s64 = ctx.r11.s64 + 42;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x821ae0e8
	if (ctx.cr6.lt) goto loc_821AE0E8;
loc_821AE180:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r11,r11,42
	ctx.r11.s64 = ctx.r11.s64 + 42;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,724
	ctx.r3.s64 = ctx.r11.s64 + 724;
	// bl 0x8241dd3c
	ctx.lr = 0x821AE1A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821AE1B0"))) PPC_WEAK_FUNC(sub_821AE1B0);
PPC_FUNC_IMPL(__imp__sub_821AE1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AE1B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,-12248
	ctx.r29.s64 = ctx.r29.s64 + -12248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AE1D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r10,-12284
	ctx.r10.s64 = ctx.r10.s64 + -12284;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x821AE200;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821AE208"))) PPC_WEAK_FUNC(sub_821AE208);
PPC_FUNC_IMPL(__imp__sub_821AE208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AE210;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,-12248
	ctx.r29.s64 = ctx.r29.s64 + -12248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AE22C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r10,-12276
	ctx.r10.s64 = ctx.r10.s64 + -12276;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,2049
	ctx.r9.s64 = ctx.r11.s64 + 2049;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x821AE258;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821AE260"))) PPC_WEAK_FUNC(sub_821AE260);
PPC_FUNC_IMPL(__imp__sub_821AE260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AE268;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,-12248
	ctx.r29.s64 = ctx.r29.s64 + -12248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AE284;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r10,-12272
	ctx.r10.s64 = ctx.r10.s64 + -12272;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,3073
	ctx.r9.s64 = ctx.r11.s64 + 3073;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x821AE2B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821AE2B8"))) PPC_WEAK_FUNC(sub_821AE2B8);
PPC_FUNC_IMPL(__imp__sub_821AE2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AE2C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,-12248
	ctx.r29.s64 = ctx.r29.s64 + -12248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AE2DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r10,-12268
	ctx.r10.s64 = ctx.r10.s64 + -12268;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,4097
	ctx.r9.s64 = ctx.r11.s64 + 4097;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x821AE308;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821AE310"))) PPC_WEAK_FUNC(sub_821AE310);
PPC_FUNC_IMPL(__imp__sub_821AE310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821AE318;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r28,-12248
	ctx.r28.s64 = ctx.r28.s64 + -12248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AE338;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r10,-12256
	ctx.r10.s64 = ctx.r10.s64 + -12256;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,7169
	ctx.r9.s64 = ctx.r11.s64 + 7169;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,12289
	ctx.r7.s64 = ctx.r11.s64 + 12289;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x821AE374;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821AE37C"))) PPC_WEAK_FUNC(sub_821AE37C);
PPC_FUNC_IMPL(__imp__sub_821AE37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE380"))) PPC_WEAK_FUNC(sub_821AE380);
PPC_FUNC_IMPL(__imp__sub_821AE380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AE388;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,-12248
	ctx.r29.s64 = ctx.r29.s64 + -12248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AE3A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r10,-12252
	ctx.r10.s64 = ctx.r10.s64 + -12252;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,8193
	ctx.r9.s64 = ctx.r11.s64 + 8193;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x821AE3D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821AE3D8"))) PPC_WEAK_FUNC(sub_821AE3D8);
PPC_FUNC_IMPL(__imp__sub_821AE3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821AE3E0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-21412
	ctx.r10.s64 = ctx.r11.s64 + -21412;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r29.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r3,696
	ctx.r3.s64 = ctx.r3.s64 + 696;
	// stw r31,-7484(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7484, ctx.r31.u32);
	// bl 0x8241dd4c
	ctx.lr = 0x821AE414;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r28,r31,724
	ctx.r28.s64 = ctx.r31.s64 + 724;
loc_821AE41C:
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd4c
	ctx.lr = 0x821AE428;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r30,110
	ctx.r9.s64 = ctx.r30.s64 + 110;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821AE438:
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r10,46
	ctx.r7.s64 = ctx.r10.s64 + 46;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// stwx r29,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r29.u32);
	// bdnz 0x821ae438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AE438;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// blt cr6,0x821ae41c
	if (ctx.cr6.lt) goto loc_821AE41C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// stw r29,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821AE48C"))) PPC_WEAK_FUNC(sub_821AE48C);
PPC_FUNC_IMPL(__imp__sub_821AE48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE490"))) PPC_WEAK_FUNC(sub_821AE490);
PPC_FUNC_IMPL(__imp__sub_821AE490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-21412
	ctx.r10.s64 = ctx.r11.s64 + -21412;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,-7484(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7484, ctx.r11.u32);
	// beq cr6,0x821ae4d8
	if (ctx.cr6.eq) goto loc_821AE4D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821AE4D4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821AE4D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AE4EC"))) PPC_WEAK_FUNC(sub_821AE4EC);
PPC_FUNC_IMPL(__imp__sub_821AE4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE4F0"))) PPC_WEAK_FUNC(sub_821AE4F0);
PPC_FUNC_IMPL(__imp__sub_821AE4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AE4F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
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
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r29,r11,53252
	ctx.r29.u64 = ctx.r11.u64 | 53252;
	// lis r30,-32254
	ctx.r30.s64 = -2113798144;
	// ori r10,r10,53256
	ctx.r10.u64 = ctx.r10.u64 | 53256;
	// ori r9,r9,53260
	ctx.r9.u64 = ctx.r9.u64 | 53260;
	// ori r8,r8,53264
	ctx.r8.u64 = ctx.r8.u64 | 53264;
	// ori r7,r7,53268
	ctx.r7.u64 = ctx.r7.u64 | 53268;
	// ori r6,r6,53272
	ctx.r6.u64 = ctx.r6.u64 | 53272;
	// ori r5,r5,53276
	ctx.r5.u64 = ctx.r5.u64 | 53276;
	// ori r4,r4,53280
	ctx.r4.u64 = ctx.r4.u64 | 53280;
	// ori r3,r3,53284
	ctx.r3.u64 = ctx.r3.u64 | 53284;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,-21408
	ctx.r30.s64 = ctx.r30.s64 + -21408;
	// stwx r11,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r3,-12248
	ctx.r3.s64 = ctx.r3.s64 + -12248;
	// stw r31,-7480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7480, ctx.r31.u32);
	// bl 0x8241dd4c
	ctx.lr = 0x821AE598;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x822aa648
	ctx.lr = 0x821AE5A4;
	sub_822AA648(ctx, base);
	// addi r3,r31,4100
	ctx.r3.s64 = ctx.r31.s64 + 4100;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x822aa648
	ctx.lr = 0x821AE5B0;
	sub_822AA648(ctx, base);
	// addi r3,r31,8196
	ctx.r3.s64 = ctx.r31.s64 + 8196;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x822aa648
	ctx.lr = 0x821AE5BC;
	sub_822AA648(ctx, base);
	// addi r3,r31,12292
	ctx.r3.s64 = ctx.r31.s64 + 12292;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x822aa648
	ctx.lr = 0x821AE5C8;
	sub_822AA648(ctx, base);
	// addi r3,r31,16388
	ctx.r3.s64 = ctx.r31.s64 + 16388;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x822aa648
	ctx.lr = 0x821AE5D4;
	sub_822AA648(ctx, base);
	// addi r3,r31,20484
	ctx.r3.s64 = ctx.r31.s64 + 20484;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x822aa648
	ctx.lr = 0x821AE5E0;
	sub_822AA648(ctx, base);
	// addi r3,r31,24580
	ctx.r3.s64 = ctx.r31.s64 + 24580;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x822aa648
	ctx.lr = 0x821AE5EC;
	sub_822AA648(ctx, base);
	// addi r3,r31,28676
	ctx.r3.s64 = ctx.r31.s64 + 28676;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x822aa648
	ctx.lr = 0x821AE5F8;
	sub_822AA648(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r3,-32764
	ctx.r3.s64 = ctx.r3.s64 + -32764;
	// bl 0x822aa648
	ctx.lr = 0x821AE608;
	sub_822AA648(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// addi r3,r3,-28668
	ctx.r3.s64 = ctx.r3.s64 + -28668;
	// bl 0x822aa648
	ctx.lr = 0x821AE618;
	sub_822AA648(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r3,-20476
	ctx.r3.s64 = ctx.r3.s64 + -20476;
	// bl 0x822aa648
	ctx.lr = 0x821AE628;
	sub_822AA648(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r3,-16380
	ctx.r3.s64 = ctx.r3.s64 + -16380;
	// bl 0x822aa648
	ctx.lr = 0x821AE638;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821AE644"))) PPC_WEAK_FUNC(sub_821AE644);
PPC_FUNC_IMPL(__imp__sub_821AE644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE648"))) PPC_WEAK_FUNC(sub_821AE648);
PPC_FUNC_IMPL(__imp__sub_821AE648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-21408
	ctx.r10.s64 = ctx.r11.s64 + -21408;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,-7480(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7480, ctx.r11.u32);
	// beq cr6,0x821ae690
	if (ctx.cr6.eq) goto loc_821AE690;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821AE68C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821AE690:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AE6A4"))) PPC_WEAK_FUNC(sub_821AE6A4);
PPC_FUNC_IMPL(__imp__sub_821AE6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE6A8"))) PPC_WEAK_FUNC(sub_821AE6A8);
PPC_FUNC_IMPL(__imp__sub_821AE6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x821AE6B0;
	sub_82248764(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r27,-12284
	ctx.r27.s64 = ctx.r27.s64 + -12284;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ori r28,r11,53256
	ctx.r28.u64 = ctx.r11.u64 | 53256;
	// ori r23,r10,53260
	ctx.r23.u64 = ctx.r10.u64 | 53260;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// ori r22,r9,53264
	ctx.r22.u64 = ctx.r9.u64 | 53264;
	// ori r21,r7,53268
	ctx.r21.u64 = ctx.r7.u64 | 53268;
	// ori r20,r6,53284
	ctx.r20.u64 = ctx.r6.u64 | 53284;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ae744
	if (!ctx.cr6.eq) goto loc_821AE744;
	// lwzx r11,r3,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ae744
	if (!ctx.cr6.eq) goto loc_821AE744;
	// lwzx r11,r3,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ae744
	if (!ctx.cr6.eq) goto loc_821AE744;
	// lwzx r11,r3,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ae744
	if (!ctx.cr6.eq) goto loc_821AE744;
	// lwzx r11,r3,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ae744
	if (!ctx.cr6.eq) goto loc_821AE744;
	// lwzx r11,r3,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r20.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ae744
	if (!ctx.cr6.eq) goto loc_821AE744;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
loc_821AE744:
	// addis r19,r25,1
	ctx.r19.s64 = ctx.r25.s64 + 65536;
	// addi r19,r19,-12248
	ctx.r19.s64 = ctx.r19.s64 + -12248;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AE754;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AE760;
	sub_821A2548(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// rldicr r30,r11,63,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_821AE770:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srd r6,r30,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r30.u64 >> (ctx.r10.u8 & 0x7F));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226b640
	ctx.lr = 0x821AE78C;
	sub_8226B640(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x821ae770
	if (ctx.cr6.lt) goto loc_821AE770;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82271f70
	ctx.lr = 0x821AE7A4;
	sub_82271F70(ctx, base);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_821AE7A8:
	// subfic r11,r31,95
	ctx.xer.ca = ctx.r31.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r31.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r10,r11,21846
	ctx.r10.s64 = ctx.r11.s64 * 21846;
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srd r8,r30,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r30.u64 >> (ctx.r8.u8 & 0x7F));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82271e50
	ctx.lr = 0x821AE7D8;
	sub_82271E50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x821ae7a8
	if (ctx.cr6.lt) goto loc_821AE7A8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ae824
	if (!ctx.cr6.gt) goto loc_821AE824;
	// addi r31,r25,4
	ctx.r31.s64 = ctx.r25.s64 + 4;
loc_821AE7F8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ae80c
	if (ctx.cr6.eq) goto loc_821AE80C;
	// bl 0x82268fb0
	ctx.lr = 0x821AE808;
	sub_82268FB0(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_821AE80C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821ae7f8
	if (ctx.cr6.gt) goto loc_821AE7F8;
loc_821AE824:
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ae86c
	if (!ctx.cr6.gt) goto loc_821AE86C;
	// addi r31,r25,4100
	ctx.r31.s64 = ctx.r25.s64 + 4100;
loc_821AE840:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ae854
	if (ctx.cr6.eq) goto loc_821AE854;
	// bl 0x82268fb0
	ctx.lr = 0x821AE850;
	sub_82268FB0(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_821AE854:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821ae840
	if (ctx.cr6.gt) goto loc_821AE840;
loc_821AE86C:
	// lwzx r11,r25,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r23.u32);
	// add r29,r25,r23
	ctx.r29.u64 = ctx.r25.u64 + ctx.r23.u64;
	// stw r24,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ae8b4
	if (!ctx.cr6.gt) goto loc_821AE8B4;
	// addi r31,r25,8196
	ctx.r31.s64 = ctx.r25.s64 + 8196;
loc_821AE888:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ae89c
	if (ctx.cr6.eq) goto loc_821AE89C;
	// bl 0x82268fb0
	ctx.lr = 0x821AE898;
	sub_82268FB0(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_821AE89C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821ae888
	if (ctx.cr6.gt) goto loc_821AE888;
loc_821AE8B4:
	// lwzx r11,r25,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r22.u32);
	// add r28,r25,r22
	ctx.r28.u64 = ctx.r25.u64 + ctx.r22.u64;
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ae8fc
	if (!ctx.cr6.gt) goto loc_821AE8FC;
	// addi r31,r25,12292
	ctx.r31.s64 = ctx.r25.s64 + 12292;
loc_821AE8D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ae8e4
	if (ctx.cr6.eq) goto loc_821AE8E4;
	// bl 0x82268fb0
	ctx.lr = 0x821AE8E0;
	sub_82268FB0(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_821AE8E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821ae8d0
	if (ctx.cr6.gt) goto loc_821AE8D0;
loc_821AE8FC:
	// lwzx r11,r25,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r21.u32);
	// add r29,r25,r21
	ctx.r29.u64 = ctx.r25.u64 + ctx.r21.u64;
	// stw r24,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ae944
	if (!ctx.cr6.gt) goto loc_821AE944;
	// addi r31,r25,16388
	ctx.r31.s64 = ctx.r25.s64 + 16388;
loc_821AE918:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ae92c
	if (ctx.cr6.eq) goto loc_821AE92C;
	// bl 0x82268fb0
	ctx.lr = 0x821AE928;
	sub_82268FB0(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_821AE92C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821ae918
	if (ctx.cr6.gt) goto loc_821AE918;
loc_821AE944:
	// lwzx r11,r25,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r20.u32);
	// add r28,r25,r20
	ctx.r28.u64 = ctx.r25.u64 + ctx.r20.u64;
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821ae990
	if (!ctx.cr6.gt) goto loc_821AE990;
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// addi r31,r31,-32764
	ctx.r31.s64 = ctx.r31.s64 + -32764;
loc_821AE964:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ae978
	if (ctx.cr6.eq) goto loc_821AE978;
	// bl 0x82268fb0
	ctx.lr = 0x821AE974;
	sub_82268FB0(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_821AE978:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821ae964
	if (ctx.cr6.gt) goto loc_821AE964;
loc_821AE990:
	// stw r24,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r24.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821AE99C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_821AE9A8"))) PPC_WEAK_FUNC(sub_821AE9A8);
PPC_FUNC_IMPL(__imp__sub_821AE9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x821AE9B0;
	sub_82248760(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r23,r3,1
	ctx.r23.s64 = ctx.r3.s64 + 65536;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r23,r23,-12264
	ctx.r23.s64 = ctx.r23.s64 + -12264;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// ori r22,r11,53276
	ctx.r22.u64 = ctx.r11.u64 | 53276;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// ori r19,r10,53280
	ctx.r19.u64 = ctx.r10.u64 | 53280;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821aea08
	if (!ctx.cr6.eq) goto loc_821AEA08;
	// lwzx r11,r3,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aea08
	if (!ctx.cr6.eq) goto loc_821AEA08;
	// lwzx r11,r3,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aea08
	if (!ctx.cr6.eq) goto loc_821AEA08;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_821AEA08:
	// addis r18,r21,1
	ctx.r18.s64 = ctx.r21.s64 + 65536;
	// addi r18,r18,-12248
	ctx.r18.s64 = ctx.r18.s64 + -12248;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821AEA18;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821AEA24;
	sub_821A2548(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// rldicr r30,r11,63,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_821AEA34:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srd r6,r30,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r30.u64 >> (ctx.r10.u8 & 0x7F));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226b640
	ctx.lr = 0x821AEA50;
	sub_8226B640(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x821aea34
	if (ctx.cr6.lt) goto loc_821AEA34;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82271f70
	ctx.lr = 0x821AEA68;
	sub_82271F70(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_821AEA6C:
	// subfic r11,r31,95
	ctx.xer.ca = ctx.r31.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r31.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r10,r11,21846
	ctx.r10.s64 = ctx.r11.s64 * 21846;
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srd r8,r30,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r30.u64 >> (ctx.r8.u8 & 0x7F));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82271e50
	ctx.lr = 0x821AEA9C;
	sub_82271E50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x821aea6c
	if (ctx.cr6.lt) goto loc_821AEA6C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821aeba4
	if (!ctx.cr6.gt) goto loc_821AEBA4;
	// addis r26,r21,1
	ctx.r26.s64 = ctx.r21.s64 + 65536;
	// addi r29,r21,20484
	ctx.r29.s64 = ctx.r21.s64 + 20484;
	// addi r26,r26,-28672
	ctx.r26.s64 = ctx.r26.s64 + -28672;
loc_821AEAC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aeb84
	if (ctx.cr6.eq) goto loc_821AEB84;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aeb6c
	if (ctx.cr6.eq) goto loc_821AEB6C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_821AEAE4:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aeb34
	if (ctx.cr6.eq) goto loc_821AEB34;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_821AEAF8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821aeb20
	if (ctx.cr6.eq) goto loc_821AEB20;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82268fb0
	ctx.lr = 0x821AEB14;
	sub_82268FB0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stwx r27,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r27.u32);
loc_821AEB20:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821aeaf8
	if (ctx.cr6.lt) goto loc_821AEAF8;
loc_821AEB34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821aeb50
	if (ctx.cr6.eq) goto loc_821AEB50;
	// li r4,2
	ctx.r4.s64 = 2;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82183e40
	ctx.lr = 0x821AEB50;
	sub_82183E40(ctx, base);
loc_821AEB50:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stwx r27,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821aeae4
	if (ctx.cr6.lt) goto loc_821AEAE4;
loc_821AEB6C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aeb80
	if (ctx.cr6.eq) goto loc_821AEB80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821AEB80;
	sub_82183E40(ctx, base);
loc_821AEB80:
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_821AEB84:
	// stw r27,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stwu r27,8(r26)
	ea = 8 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r26.u32 = ea;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x821aeac4
	if (ctx.cr6.gt) goto loc_821AEAC4;
loc_821AEBA4:
	// lwzx r11,r21,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r22.u32);
	// add r26,r21,r22
	ctx.r26.u64 = ctx.r21.u64 + ctx.r22.u64;
	// stw r27,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r27.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821aec4c
	if (!ctx.cr6.gt) goto loc_821AEC4C;
	// addis r31,r21,1
	ctx.r31.s64 = ctx.r21.s64 + 65536;
	// addi r31,r31,-20480
	ctx.r31.s64 = ctx.r31.s64 + -20480;
loc_821AEBC4:
	// lwz r11,-20476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aec30
	if (ctx.cr6.eq) goto loc_821AEC30;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aec18
	if (ctx.cr6.eq) goto loc_821AEC18;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_821AEBE4:
	// lwz r11,-20476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20476);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821aec04
	if (ctx.cr6.eq) goto loc_821AEC04;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82268fb0
	ctx.lr = 0x821AEBFC;
	sub_82268FB0(ctx, base);
	// lwz r11,-20476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20476);
	// stwx r27,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
loc_821AEC04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821aebe4
	if (ctx.cr6.lt) goto loc_821AEBE4;
loc_821AEC18:
	// lwz r3,-20476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aec2c
	if (ctx.cr6.eq) goto loc_821AEC2C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821AEC2C;
	sub_82183E40(ctx, base);
loc_821AEC2C:
	// stw r27,-20476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20476, ctx.r27.u32);
loc_821AEC30:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r27,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r31.u32 = ea;
	// rotlwi r11,r27,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x821aebc4
	if (ctx.cr6.gt) goto loc_821AEBC4;
loc_821AEC4C:
	// lwzx r11,r21,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r19.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// add r26,r21,r19
	ctx.r26.u64 = ctx.r21.u64 + ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821aecec
	if (!ctx.cr6.gt) goto loc_821AECEC;
	// addis r31,r21,1
	ctx.r31.s64 = ctx.r21.s64 + 65536;
	// addi r31,r31,-16384
	ctx.r31.s64 = ctx.r31.s64 + -16384;
loc_821AEC68:
	// lwz r11,-20476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aecd4
	if (ctx.cr6.eq) goto loc_821AECD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aecbc
	if (ctx.cr6.eq) goto loc_821AECBC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_821AEC88:
	// lwz r11,-20476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20476);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821aeca8
	if (ctx.cr6.eq) goto loc_821AECA8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82268fb0
	ctx.lr = 0x821AECA0;
	sub_82268FB0(ctx, base);
	// lwz r11,-20476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20476);
	// stwx r27,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r27.u32);
loc_821AECA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821aec88
	if (ctx.cr6.lt) goto loc_821AEC88;
loc_821AECBC:
	// lwz r3,-20476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aecd0
	if (ctx.cr6.eq) goto loc_821AECD0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821AECD0;
	sub_82183E40(ctx, base);
loc_821AECD0:
	// stw r27,-20476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20476, ctx.r27.u32);
loc_821AECD4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r27,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r31.u32 = ea;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x821aec68
	if (ctx.cr6.gt) goto loc_821AEC68;
loc_821AECEC:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821AECF8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_821AED04"))) PPC_WEAK_FUNC(sub_821AED04);
PPC_FUNC_IMPL(__imp__sub_821AED04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AED08"))) PPC_WEAK_FUNC(sub_821AED08);
PPC_FUNC_IMPL(__imp__sub_821AED08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-7468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7468, ctx.r30.u32);
	// lwsync 
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r30,-7476(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7476, ctx.r30.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aed5c
	if (ctx.cr6.eq) goto loc_821AED5C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821AED50;
	sub_82183E40(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_821AED5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AED74"))) PPC_WEAK_FUNC(sub_821AED74);
PPC_FUNC_IMPL(__imp__sub_821AED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AED78"))) PPC_WEAK_FUNC(sub_821AED78);
PPC_FUNC_IMPL(__imp__sub_821AED78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-7472(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7472, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,-7464(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7464, ctx.r30.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aedd0
	if (ctx.cr6.eq) goto loc_821AEDD0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821AEDC4;
	sub_82183E40(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_821AEDD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEDE8"))) PPC_WEAK_FUNC(sub_821AEDE8);
PPC_FUNC_IMPL(__imp__sub_821AEDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821AEDF0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// beq cr6,0x821aeeb0
	if (ctx.cr6.eq) goto loc_821AEEB0;
	// bl 0x82183078
	ctx.lr = 0x821AEE34;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821AEE40;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820de428
	ctx.lr = 0x821AEE4C;
	sub_820DE428(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821aeea8
	if (!ctx.cr6.lt) goto loc_821AEEA8;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821AEE70:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r7,r9,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stdx r3,r8,r11
	PPC_STORE_U64(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x821aee70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AEE70;
loc_821AEEA8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821AEEB0;
	sub_821837D0(ctx, base);
loc_821AEEB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821AEEBC"))) PPC_WEAK_FUNC(sub_821AEEBC);
PPC_FUNC_IMPL(__imp__sub_821AEEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AEEC0"))) PPC_WEAK_FUNC(sub_821AEEC0);
PPC_FUNC_IMPL(__imp__sub_821AEEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x821aede8
	ctx.lr = 0x821AEED8;
	sub_821AEDE8(ctx, base);
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-7476(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7476, ctx.r31.u32);
	// stw r31,-7468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7468, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEF04"))) PPC_WEAK_FUNC(sub_821AEF04);
PPC_FUNC_IMPL(__imp__sub_821AEF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AEF08"))) PPC_WEAK_FUNC(sub_821AEF08);
PPC_FUNC_IMPL(__imp__sub_821AEF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x821aede8
	ctx.lr = 0x821AEF20;
	sub_821AEDE8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r31,-7464(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7464, ctx.r31.u32);
	// lwsync 
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-7472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7472, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEF4C"))) PPC_WEAK_FUNC(sub_821AEF4C);
PPC_FUNC_IMPL(__imp__sub_821AEF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AEF50"))) PPC_WEAK_FUNC(sub_821AEF50);
PPC_FUNC_IMPL(__imp__sub_821AEF50) {
	PPC_FUNC_PROLOGUE();
	// stw r4,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEF58"))) PPC_WEAK_FUNC(sub_821AEF58);
PPC_FUNC_IMPL(__imp__sub_821AEF58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEF68"))) PPC_WEAK_FUNC(sub_821AEF68);
PPC_FUNC_IMPL(__imp__sub_821AEF68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_821AEF80:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 + 1680;
	// stw r8,768(r9)
	PPC_STORE_U32(ctx.r9.u32 + 768, ctx.r8.u32);
	// lwz r7,276(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821aef80
	if (ctx.cr6.lt) goto loc_821AEF80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEFA4"))) PPC_WEAK_FUNC(sub_821AEFA4);
PPC_FUNC_IMPL(__imp__sub_821AEFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AEFA8"))) PPC_WEAK_FUNC(sub_821AEFA8);
PPC_FUNC_IMPL(__imp__sub_821AEFA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEFB4"))) PPC_WEAK_FUNC(sub_821AEFB4);
PPC_FUNC_IMPL(__imp__sub_821AEFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AEFB8"))) PPC_WEAK_FUNC(sub_821AEFB8);
PPC_FUNC_IMPL(__imp__sub_821AEFB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEFC0"))) PPC_WEAK_FUNC(sub_821AEFC0);
PPC_FUNC_IMPL(__imp__sub_821AEFC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEFC8"))) PPC_WEAK_FUNC(sub_821AEFC8);
PPC_FUNC_IMPL(__imp__sub_821AEFC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEFD0"))) PPC_WEAK_FUNC(sub_821AEFD0);
PPC_FUNC_IMPL(__imp__sub_821AEFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,168(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEFD8"))) PPC_WEAK_FUNC(sub_821AEFD8);
PPC_FUNC_IMPL(__imp__sub_821AEFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEFE0"))) PPC_WEAK_FUNC(sub_821AEFE0);
PPC_FUNC_IMPL(__imp__sub_821AEFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEFE8"))) PPC_WEAK_FUNC(sub_821AEFE8);
PPC_FUNC_IMPL(__imp__sub_821AEFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEFF0"))) PPC_WEAK_FUNC(sub_821AEFF0);
PPC_FUNC_IMPL(__imp__sub_821AEFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEFF8"))) PPC_WEAK_FUNC(sub_821AEFF8);
PPC_FUNC_IMPL(__imp__sub_821AEFF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF000"))) PPC_WEAK_FUNC(sub_821AF000);
PPC_FUNC_IMPL(__imp__sub_821AF000) {
	PPC_FUNC_PROLOGUE();
	// stw r4,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF008"))) PPC_WEAK_FUNC(sub_821AF008);
PPC_FUNC_IMPL(__imp__sub_821AF008) {
	PPC_FUNC_PROLOGUE();
	// stw r4,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF010"))) PPC_WEAK_FUNC(sub_821AF010);
PPC_FUNC_IMPL(__imp__sub_821AF010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,168(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF018"))) PPC_WEAK_FUNC(sub_821AF018);
PPC_FUNC_IMPL(__imp__sub_821AF018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF020"))) PPC_WEAK_FUNC(sub_821AF020);
PPC_FUNC_IMPL(__imp__sub_821AF020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF028"))) PPC_WEAK_FUNC(sub_821AF028);
PPC_FUNC_IMPL(__imp__sub_821AF028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF030"))) PPC_WEAK_FUNC(sub_821AF030);
PPC_FUNC_IMPL(__imp__sub_821AF030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF038"))) PPC_WEAK_FUNC(sub_821AF038);
PPC_FUNC_IMPL(__imp__sub_821AF038) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF040"))) PPC_WEAK_FUNC(sub_821AF040);
PPC_FUNC_IMPL(__imp__sub_821AF040) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF048"))) PPC_WEAK_FUNC(sub_821AF048);
PPC_FUNC_IMPL(__imp__sub_821AF048) {
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
	// bl 0x8208fbf8
	ctx.lr = 0x821AF068;
	sub_8208FBF8(ctx, base);
	// lwz r11,768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// addi r3,r31,912
	ctx.r3.s64 = ctx.r31.s64 + 912;
	// addi r4,r30,912
	ctx.r4.s64 = ctx.r30.s64 + 912;
	// stw r11,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r11.u32);
	// lfs f0,772(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 772);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 772, temp.u32);
	// lfs f13,776(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,776(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// lwz r10,780(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 780);
	// stw r10,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r10.u32);
	// lwz r9,784(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// stw r9,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r9.u32);
	// lwz r8,788(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// stw r8,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r8.u32);
	// lwz r7,792(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// stw r7,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r7.u32);
	// lwz r6,796(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// stw r6,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r6.u32);
	// lwz r5,800(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// stw r5,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r5.u32);
	// ld r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 816);
	// std r11,816(r31)
	PPC_STORE_U64(ctx.r31.u32 + 816, ctx.r11.u64);
	// ld r10,824(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 824);
	// std r10,824(r31)
	PPC_STORE_U64(ctx.r31.u32 + 824, ctx.r10.u64);
	// ld r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 832);
	// std r9,832(r31)
	PPC_STORE_U64(ctx.r31.u32 + 832, ctx.r9.u64);
	// ld r8,840(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 840);
	// std r8,840(r31)
	PPC_STORE_U64(ctx.r31.u32 + 840, ctx.r8.u64);
	// ld r7,848(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 848);
	// std r7,848(r31)
	PPC_STORE_U64(ctx.r31.u32 + 848, ctx.r7.u64);
	// ld r6,856(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 856);
	// std r6,856(r31)
	PPC_STORE_U64(ctx.r31.u32 + 856, ctx.r6.u64);
	// lwz r5,864(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// stw r5,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r5.u32);
	// lwz r11,868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// stw r11,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r11.u32);
	// ld r10,880(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 880);
	// std r10,880(r31)
	PPC_STORE_U64(ctx.r31.u32 + 880, ctx.r10.u64);
	// ld r9,888(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 888);
	// std r9,888(r31)
	PPC_STORE_U64(ctx.r31.u32 + 888, ctx.r9.u64);
	// lwz r8,896(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// stw r8,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r8.u32);
	// lwz r7,900(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// stw r7,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r7.u32);
	// lwz r6,904(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	// stw r6,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r6.u32);
	// bl 0x8208fbf8
	ctx.lr = 0x821AF124;
	sub_8208FBF8(ctx, base);
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

__attribute__((alias("__imp__sub_821AF140"))) PPC_WEAK_FUNC(sub_821AF140);
PPC_FUNC_IMPL(__imp__sub_821AF140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AF158;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af168
	if (ctx.cr6.eq) goto loc_821AF168;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af16c
	goto loc_821AF16C;
loc_821AF168:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF16C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF18C"))) PPC_WEAK_FUNC(sub_821AF18C);
PPC_FUNC_IMPL(__imp__sub_821AF18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF190"))) PPC_WEAK_FUNC(sub_821AF190);
PPC_FUNC_IMPL(__imp__sub_821AF190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821af1e0
	if (ctx.cr6.eq) goto loc_821AF1E0;
	// bl 0x8218d888
	ctx.lr = 0x821AF1B8;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af1c8
	if (ctx.cr6.eq) goto loc_821AF1C8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af1cc
	goto loc_821AF1CC;
loc_821AF1C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF1CC:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8208fbf8
	ctx.lr = 0x821AF1E0;
	sub_8208FBF8(ctx, base);
loc_821AF1E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF1F8"))) PPC_WEAK_FUNC(sub_821AF1F8);
PPC_FUNC_IMPL(__imp__sub_821AF1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821AF200;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r9,r10,-21404
	ctx.r9.s64 = ctx.r10.s64 + -21404;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821af260
	if (ctx.cr6.eq) goto loc_821AF260;
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r29,r11,-16
	ctx.r29.s64 = ctx.r11.s64 + -16;
	// mulli r10,r9,1680
	ctx.r10.s64 = ctx.r9.s64 * 1680;
	// addic. r31,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x821af254
	if (ctx.cr0.lt) goto loc_821AF254;
loc_821AF238:
	// addi r30,r30,-1680
	ctx.r30.s64 = ctx.r30.s64 + -1680;
	// addi r3,r30,912
	ctx.r3.s64 = ctx.r30.s64 + 912;
	// bl 0x821b0d28
	ctx.lr = 0x821AF244;
	sub_821B0D28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b0d28
	ctx.lr = 0x821AF24C;
	sub_821B0D28(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x821af238
	if (!ctx.cr0.lt) goto loc_821AF238;
loc_821AF254:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x821AF260;
	sub_82183E40(ctx, base);
loc_821AF260:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821AF270"))) PPC_WEAK_FUNC(sub_821AF270);
PPC_FUNC_IMPL(__imp__sub_821AF270) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8218d888
	ctx.lr = 0x821AF290;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af2a0
	if (ctx.cr6.eq) goto loc_821AF2A0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af2a4
	goto loc_821AF2A4;
loc_821AF2A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF2A4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,772(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 772, temp.u32);
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

__attribute__((alias("__imp__sub_821AF2CC"))) PPC_WEAK_FUNC(sub_821AF2CC);
PPC_FUNC_IMPL(__imp__sub_821AF2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF2D0"))) PPC_WEAK_FUNC(sub_821AF2D0);
PPC_FUNC_IMPL(__imp__sub_821AF2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d888
	ctx.lr = 0x821AF2F0;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af300
	if (ctx.cr6.eq) goto loc_821AF300;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af304
	goto loc_821AF304;
loc_821AF300:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF304:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 780, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF32C"))) PPC_WEAK_FUNC(sub_821AF32C);
PPC_FUNC_IMPL(__imp__sub_821AF32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF330"))) PPC_WEAK_FUNC(sub_821AF330);
PPC_FUNC_IMPL(__imp__sub_821AF330) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8218d888
	ctx.lr = 0x821AF350;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af360
	if (ctx.cr6.eq) goto loc_821AF360;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af364
	goto loc_821AF364;
loc_821AF360:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF364:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,776(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 776, temp.u32);
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

__attribute__((alias("__imp__sub_821AF38C"))) PPC_WEAK_FUNC(sub_821AF38C);
PPC_FUNC_IMPL(__imp__sub_821AF38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF390"))) PPC_WEAK_FUNC(sub_821AF390);
PPC_FUNC_IMPL(__imp__sub_821AF390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AF3A8;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af3b8
	if (ctx.cr6.eq) goto loc_821AF3B8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af3bc
	goto loc_821AF3BC;
loc_821AF3B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF3BC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF3E0"))) PPC_WEAK_FUNC(sub_821AF3E0);
PPC_FUNC_IMPL(__imp__sub_821AF3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AF3F8;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af408
	if (ctx.cr6.eq) goto loc_821AF408;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af40c
	goto loc_821AF40C;
loc_821AF408:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF40C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,768
	ctx.r10.s64 = ctx.r11.s64 + 768;
	// lwz r10,768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 768, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF43C"))) PPC_WEAK_FUNC(sub_821AF43C);
PPC_FUNC_IMPL(__imp__sub_821AF43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF440"))) PPC_WEAK_FUNC(sub_821AF440);
PPC_FUNC_IMPL(__imp__sub_821AF440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AF458;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af468
	if (ctx.cr6.eq) goto loc_821AF468;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af46c
	goto loc_821AF46C;
loc_821AF468:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF46C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 780);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF490"))) PPC_WEAK_FUNC(sub_821AF490);
PPC_FUNC_IMPL(__imp__sub_821AF490) {
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
	// bl 0x8218d888
	ctx.lr = 0x821AF4A8;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af4b8
	if (ctx.cr6.eq) goto loc_821AF4B8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af4bc
	goto loc_821AF4BC;
loc_821AF4B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF4BC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 772);
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

__attribute__((alias("__imp__sub_821AF4E0"))) PPC_WEAK_FUNC(sub_821AF4E0);
PPC_FUNC_IMPL(__imp__sub_821AF4E0) {
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
	// bl 0x8218d888
	ctx.lr = 0x821AF4F8;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af508
	if (ctx.cr6.eq) goto loc_821AF508;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af50c
	goto loc_821AF50C;
loc_821AF508:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF50C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 776);
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

__attribute__((alias("__imp__sub_821AF530"))) PPC_WEAK_FUNC(sub_821AF530);
PPC_FUNC_IMPL(__imp__sub_821AF530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d888
	ctx.lr = 0x821AF550;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af560
	if (ctx.cr6.eq) goto loc_821AF560;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af564
	goto loc_821AF564;
loc_821AF560:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF564:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 784, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF58C"))) PPC_WEAK_FUNC(sub_821AF58C);
PPC_FUNC_IMPL(__imp__sub_821AF58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF590"))) PPC_WEAK_FUNC(sub_821AF590);
PPC_FUNC_IMPL(__imp__sub_821AF590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AF5A8;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af5b8
	if (ctx.cr6.eq) goto loc_821AF5B8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af5bc
	goto loc_821AF5BC;
loc_821AF5B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF5BC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF5E0"))) PPC_WEAK_FUNC(sub_821AF5E0);
PPC_FUNC_IMPL(__imp__sub_821AF5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d888
	ctx.lr = 0x821AF600;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af610
	if (ctx.cr6.eq) goto loc_821AF610;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af614
	goto loc_821AF614;
loc_821AF610:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF614:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 788, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF63C"))) PPC_WEAK_FUNC(sub_821AF63C);
PPC_FUNC_IMPL(__imp__sub_821AF63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF640"))) PPC_WEAK_FUNC(sub_821AF640);
PPC_FUNC_IMPL(__imp__sub_821AF640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AF658;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af668
	if (ctx.cr6.eq) goto loc_821AF668;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af66c
	goto loc_821AF66C;
loc_821AF668:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF66C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF690"))) PPC_WEAK_FUNC(sub_821AF690);
PPC_FUNC_IMPL(__imp__sub_821AF690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d888
	ctx.lr = 0x821AF6B0;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af6c0
	if (ctx.cr6.eq) goto loc_821AF6C0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af6c4
	goto loc_821AF6C4;
loc_821AF6C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF6C4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r30,796(r11)
	PPC_STORE_U64(ctx.r11.u32 + 796, ctx.r30.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF6EC"))) PPC_WEAK_FUNC(sub_821AF6EC);
PPC_FUNC_IMPL(__imp__sub_821AF6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF6F0"))) PPC_WEAK_FUNC(sub_821AF6F0);
PPC_FUNC_IMPL(__imp__sub_821AF6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d888
	ctx.lr = 0x821AF710;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af720
	if (ctx.cr6.eq) goto loc_821AF720;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af724
	goto loc_821AF724;
loc_821AF720:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF724:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,796(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 796);
	// lwz r9,800(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF75C"))) PPC_WEAK_FUNC(sub_821AF75C);
PPC_FUNC_IMPL(__imp__sub_821AF75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF760"))) PPC_WEAK_FUNC(sub_821AF760);
PPC_FUNC_IMPL(__imp__sub_821AF760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d888
	ctx.lr = 0x821AF780;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af790
	if (ctx.cr6.eq) goto loc_821AF790;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af794
	goto loc_821AF794;
loc_821AF790:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF794:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,816
	ctx.r8.s64 = ctx.r11.s64 + 816;
	// std r9,816(r11)
	PPC_STORE_U64(ctx.r11.u32 + 816, ctx.r9.u64);
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r7,824(r11)
	PPC_STORE_U64(ctx.r11.u32 + 824, ctx.r7.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF7CC"))) PPC_WEAK_FUNC(sub_821AF7CC);
PPC_FUNC_IMPL(__imp__sub_821AF7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF7D0"))) PPC_WEAK_FUNC(sub_821AF7D0);
PPC_FUNC_IMPL(__imp__sub_821AF7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AF7E8;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af7f8
	if (ctx.cr6.eq) goto loc_821AF7F8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af7fc
	goto loc_821AF7FC;
loc_821AF7F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF7FC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF820"))) PPC_WEAK_FUNC(sub_821AF820);
PPC_FUNC_IMPL(__imp__sub_821AF820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d888
	ctx.lr = 0x821AF840;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af850
	if (ctx.cr6.eq) goto loc_821AF850;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af854
	goto loc_821AF854;
loc_821AF850:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF854:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,832
	ctx.r8.s64 = ctx.r11.s64 + 832;
	// std r9,832(r11)
	PPC_STORE_U64(ctx.r11.u32 + 832, ctx.r9.u64);
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r7,840(r11)
	PPC_STORE_U64(ctx.r11.u32 + 840, ctx.r7.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF88C"))) PPC_WEAK_FUNC(sub_821AF88C);
PPC_FUNC_IMPL(__imp__sub_821AF88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF890"))) PPC_WEAK_FUNC(sub_821AF890);
PPC_FUNC_IMPL(__imp__sub_821AF890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AF8A8;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af8b8
	if (ctx.cr6.eq) goto loc_821AF8B8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af8bc
	goto loc_821AF8BC;
loc_821AF8B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF8BC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,832
	ctx.r3.s64 = ctx.r11.s64 + 832;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF8E0"))) PPC_WEAK_FUNC(sub_821AF8E0);
PPC_FUNC_IMPL(__imp__sub_821AF8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d888
	ctx.lr = 0x821AF900;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af910
	if (ctx.cr6.eq) goto loc_821AF910;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af914
	goto loc_821AF914;
loc_821AF910:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF914:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,848
	ctx.r8.s64 = ctx.r11.s64 + 848;
	// std r9,848(r11)
	PPC_STORE_U64(ctx.r11.u32 + 848, ctx.r9.u64);
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r7,856(r11)
	PPC_STORE_U64(ctx.r11.u32 + 856, ctx.r7.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF94C"))) PPC_WEAK_FUNC(sub_821AF94C);
PPC_FUNC_IMPL(__imp__sub_821AF94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF950"))) PPC_WEAK_FUNC(sub_821AF950);
PPC_FUNC_IMPL(__imp__sub_821AF950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AF968;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af978
	if (ctx.cr6.eq) goto loc_821AF978;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af97c
	goto loc_821AF97C;
loc_821AF978:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF97C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,848
	ctx.r3.s64 = ctx.r11.s64 + 848;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF9A0"))) PPC_WEAK_FUNC(sub_821AF9A0);
PPC_FUNC_IMPL(__imp__sub_821AF9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d888
	ctx.lr = 0x821AF9C0;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af9d0
	if (ctx.cr6.eq) goto loc_821AF9D0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821af9d4
	goto loc_821AF9D4;
loc_821AF9D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF9D4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 864, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AF9FC"))) PPC_WEAK_FUNC(sub_821AF9FC);
PPC_FUNC_IMPL(__imp__sub_821AF9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AFA00"))) PPC_WEAK_FUNC(sub_821AFA00);
PPC_FUNC_IMPL(__imp__sub_821AFA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AFA18;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821afa28
	if (ctx.cr6.eq) goto loc_821AFA28;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821afa2c
	goto loc_821AFA2C;
loc_821AFA28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AFA2C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,864(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 864);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AFA50"))) PPC_WEAK_FUNC(sub_821AFA50);
PPC_FUNC_IMPL(__imp__sub_821AFA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AFA68;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821afa78
	if (ctx.cr6.eq) goto loc_821AFA78;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821afa7c
	goto loc_821AFA7C;
loc_821AFA78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AFA7C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,868(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AFAA0"))) PPC_WEAK_FUNC(sub_821AFAA0);
PPC_FUNC_IMPL(__imp__sub_821AFAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AFAB8;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821afac8
	if (ctx.cr6.eq) goto loc_821AFAC8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821afacc
	goto loc_821AFACC;
loc_821AFAC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AFACC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,880
	ctx.r3.s64 = ctx.r11.s64 + 880;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AFAF0"))) PPC_WEAK_FUNC(sub_821AFAF0);
PPC_FUNC_IMPL(__imp__sub_821AFAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d888
	ctx.lr = 0x821AFB10;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821afb20
	if (ctx.cr6.eq) goto loc_821AFB20;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821afb24
	goto loc_821AFB24;
loc_821AFB20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AFB24:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 904, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AFB4C"))) PPC_WEAK_FUNC(sub_821AFB4C);
PPC_FUNC_IMPL(__imp__sub_821AFB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AFB50"))) PPC_WEAK_FUNC(sub_821AFB50);
PPC_FUNC_IMPL(__imp__sub_821AFB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8218d888
	ctx.lr = 0x821AFB68;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821afb78
	if (ctx.cr6.eq) goto loc_821AFB78;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821afb7c
	goto loc_821AFB7C;
loc_821AFB78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AFB7C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AFBA0"))) PPC_WEAK_FUNC(sub_821AFBA0);
PPC_FUNC_IMPL(__imp__sub_821AFBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218d888
	ctx.lr = 0x821AFBC0;
	sub_8218D888(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821afbd0
	if (ctx.cr6.eq) goto loc_821AFBD0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x821afbd4
	goto loc_821AFBD4;
loc_821AFBD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AFBD4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 * 1680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 792, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AFBFC"))) PPC_WEAK_FUNC(sub_821AFBFC);
PPC_FUNC_IMPL(__imp__sub_821AFBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AFC00"))) PPC_WEAK_FUNC(sub_821AFC00);
PPC_FUNC_IMPL(__imp__sub_821AFC00) {
	PPC_FUNC_PROLOGUE();
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r10.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r8.u64);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r7,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r7.u64);
	// ld r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r6.u64);
	// ld r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r5,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.r5.u64);
	// ld r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r11,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.r11.u64);
	// ld r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r10,144(r3)
	PPC_STORE_U64(ctx.r3.u32 + 144, ctx.r10.u64);
	// ld r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r9,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AFC4C"))) PPC_WEAK_FUNC(sub_821AFC4C);
PPC_FUNC_IMPL(__imp__sub_821AFC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AFC50"))) PPC_WEAK_FUNC(sub_821AFC50);
PPC_FUNC_IMPL(__imp__sub_821AFC50) {
	PPC_FUNC_PROLOGUE();
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,192(r3)
	PPC_STORE_U64(ctx.r3.u32 + 192, ctx.r10.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,200(r3)
	PPC_STORE_U64(ctx.r3.u32 + 200, ctx.r8.u64);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r7,208(r3)
	PPC_STORE_U64(ctx.r3.u32 + 208, ctx.r7.u64);
	// ld r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,216(r3)
	PPC_STORE_U64(ctx.r3.u32 + 216, ctx.r6.u64);
	// ld r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r5,224(r3)
	PPC_STORE_U64(ctx.r3.u32 + 224, ctx.r5.u64);
	// ld r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r11,232(r3)
	PPC_STORE_U64(ctx.r3.u32 + 232, ctx.r11.u64);
	// ld r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r10,240(r3)
	PPC_STORE_U64(ctx.r3.u32 + 240, ctx.r10.u64);
	// ld r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r9,248(r3)
	PPC_STORE_U64(ctx.r3.u32 + 248, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AFC9C"))) PPC_WEAK_FUNC(sub_821AFC9C);
PPC_FUNC_IMPL(__imp__sub_821AFC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AFCA0"))) PPC_WEAK_FUNC(sub_821AFCA0);
PPC_FUNC_IMPL(__imp__sub_821AFCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821AFCA8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r31,r4,1680
	ctx.r31.s64 = ctx.r4.s64 * 1680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r29,904(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// bl 0x821af048
	ctx.lr = 0x821AFCC8;
	sub_821AF048(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 904, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821AFCDC"))) PPC_WEAK_FUNC(sub_821AFCDC);
PPC_FUNC_IMPL(__imp__sub_821AFCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AFCE0"))) PPC_WEAK_FUNC(sub_821AFCE0);
PPC_FUNC_IMPL(__imp__sub_821AFCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821af1f8
	ctx.lr = 0x821AFD00;
	sub_821AF1F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afd1c
	if (ctx.cr6.eq) goto loc_821AFD1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821AFD18;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821AFD1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AFD34"))) PPC_WEAK_FUNC(sub_821AFD34);
PPC_FUNC_IMPL(__imp__sub_821AFD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AFD38"))) PPC_WEAK_FUNC(sub_821AFD38);
PPC_FUNC_IMPL(__imp__sub_821AFD38) {
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
	// bl 0x821b1008
	ctx.lr = 0x821AFD54;
	sub_821B1008(ctx, base);
	// lwz r11,796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,912
	ctx.r3.s64 = ctx.r31.s64 + 912;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r10.u32);
	// lwz r9,796(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r8.u32);
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// lwz r7,896(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// stw r6,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r6.u32);
	// lwz r5,896(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r4,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r4.u32);
	// stw r30,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r30.u32);
	// bl 0x821b1008
	ctx.lr = 0x821AFD98;
	sub_821B1008(ctx, base);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// stw r30,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,2148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// stfs f0,820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 820, temp.u32);
	// stfs f0,816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 816, temp.u32);
	// stfs f13,828(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// stfs f0,840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// stfs f0,836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// stfs f0,832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// stfs f13,844(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// stfs f0,856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// stfs f0,852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// stfs f13,860(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 860, temp.u32);
	// stw r30,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// stw r30,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r30.u32);
	// stfs f0,880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// stfs f0,884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f0,888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 888, temp.u32);
	// stfs f0,892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 892, temp.u32);
	// stw r8,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r8.u32);
	// lfs f0,11284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11284);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r30.u32);
	// lfs f13,16996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16996);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// stfs f0,776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// stfs f13,772(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 772, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AFE3C"))) PPC_WEAK_FUNC(sub_821AFE3C);
PPC_FUNC_IMPL(__imp__sub_821AFE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AFE40"))) PPC_WEAK_FUNC(sub_821AFE40);
PPC_FUNC_IMPL(__imp__sub_821AFE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821AFE48;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r4.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-21404
	ctx.r10.s64 = ctx.r11.s64 + -21404;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x820804f8
	ctx.lr = 0x821AFE70;
	sub_820804F8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820804f8
	ctx.lr = 0x821AFE78;
	sub_820804F8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r28,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r28.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r28,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r28.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,13660(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13660);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-21400(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -21400);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f13,268(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f12,180(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f11,184(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x821AFEB8;
	sub_820804F8(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r28,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r28.u32);
	// lis r4,39
	ctx.r4.s64 = 2555904;
	// stw r28,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r28.u32);
	// ori r3,r4,624
	ctx.r3.u64 = ctx.r4.u64 | 624;
	// lfs f0,16996(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lwz r30,276(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x821afef4
	if (ctx.cr6.gt) goto loc_821AFEF4;
	// mulli r11,r30,1680
	ctx.r11.s64 = ctx.r30.s64 * 1680;
	// li r10,-17
	ctx.r10.s64 = -17;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821afef8
	if (!ctx.cr6.gt) goto loc_821AFEF8;
loc_821AFEF4:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_821AFEF8:
	// bl 0x82183850
	ctx.lr = 0x821AFEFC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821aff14
	if (ctx.cr6.eq) goto loc_821AFF14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x821AFF10;
	sub_82183448(ctx, base);
	// b 0x821aff20
	goto loc_821AFF20;
loc_821AFF14:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821AFF20;
	sub_821845A0(ctx, base);
loc_821AFF20:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aff60
	if (ctx.cr6.eq) goto loc_821AFF60;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// blt 0x821aff50
	if (ctx.cr0.lt) goto loc_821AFF50;
loc_821AFF3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821afd38
	ctx.lr = 0x821AFF44;
	sub_821AFD38(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1680
	ctx.r29.s64 = ctx.r29.s64 + 1680;
	// bge 0x821aff3c
	if (!ctx.cr0.lt) goto loc_821AFF3C;
loc_821AFF50:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821AFF60:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821AFF74"))) PPC_WEAK_FUNC(sub_821AFF74);
PPC_FUNC_IMPL(__imp__sub_821AFF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AFF78"))) PPC_WEAK_FUNC(sub_821AFF78);
PPC_FUNC_IMPL(__imp__sub_821AFF78) {
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
	ctx.lr = 0x821AFF88;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821affa0
	if (ctx.cr6.eq) goto loc_821AFFA0;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82183448
	ctx.lr = 0x821AFF9C;
	sub_82183448(ctx, base);
	// b 0x821affa8
	goto loc_821AFFA8;
loc_821AFFA0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821845a0
	ctx.lr = 0x821AFFA8;
	sub_821845A0(ctx, base);
loc_821AFFA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821affc4
	if (ctx.cr6.eq) goto loc_821AFFC4;
	// bl 0x821b7ca0
	ctx.lr = 0x821AFFB4;
	sub_821B7CA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821AFFC4:
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

__attribute__((alias("__imp__sub_821AFFD8"))) PPC_WEAK_FUNC(sub_821AFFD8);
PPC_FUNC_IMPL(__imp__sub_821AFFD8) {
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
	ctx.lr = 0x821AFFE8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821b0000
	if (ctx.cr6.eq) goto loc_821B0000;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x821AFFFC;
	sub_82183448(ctx, base);
	// b 0x821b0008
	goto loc_821B0008;
loc_821B0000:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x821B0008;
	sub_821845A0(ctx, base);
loc_821B0008:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b0024
	if (ctx.cr6.eq) goto loc_821B0024;
	// bl 0x821e0420
	ctx.lr = 0x821B0014;
	sub_821E0420(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B0024:
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

__attribute__((alias("__imp__sub_821B0038"))) PPC_WEAK_FUNC(sub_821B0038);
PPC_FUNC_IMPL(__imp__sub_821B0038) {
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
	// bl 0x821db8f8
	ctx.lr = 0x821B0050;
	sub_821DB8F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-21392
	ctx.r8.s64 = ctx.r9.s64 + -21392;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B00C0"))) PPC_WEAK_FUNC(sub_821B00C0);
PPC_FUNC_IMPL(__imp__sub_821B00C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b00d4
	if (!ctx.cr6.eq) goto loc_821B00D4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821B00D4:
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821B00E8"))) PPC_WEAK_FUNC(sub_821B00E8);
PPC_FUNC_IMPL(__imp__sub_821B00E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b00fc
	if (!ctx.cr6.eq) goto loc_821B00FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821B00FC:
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821B0110"))) PPC_WEAK_FUNC(sub_821B0110);
PPC_FUNC_IMPL(__imp__sub_821B0110) {
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
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0200
	if (ctx.cr6.eq) goto loc_821B0200;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821B013C:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821b0164
	if (ctx.cr6.eq) goto loc_821B0164;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x821b013c
	if (ctx.cr6.lt) goto loc_821B013C;
	// b 0x821b018c
	goto loc_821B018C;
loc_821B0164:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x821b018c
	if (!ctx.cr6.lt) goto loc_821B018C;
	// subfic r10,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b018c
	if (ctx.cr6.eq) goto loc_821B018C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B0184:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x821b0184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B0184;
loc_821B018C:
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B01A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821B01C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821b0200
	if (!ctx.cr6.gt) goto loc_821B0200;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_821B01D8:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpd cr6,r9,r8
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r8.s64, ctx.xer);
	// bne cr6,0x821b01f0
	if (!ctx.cr6.eq) goto loc_821B01F0;
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpd cr6,r10,r8
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r8.s64, ctx.xer);
	// beq cr6,0x821b0204
	if (ctx.cr6.eq) goto loc_821B0204;
loc_821B01F0:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x821b01d8
	if (ctx.cr6.lt) goto loc_821B01D8;
loc_821B0200:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821B0204:
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

__attribute__((alias("__imp__sub_821B0218"))) PPC_WEAK_FUNC(sub_821B0218);
PPC_FUNC_IMPL(__imp__sub_821B0218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821B0220;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b02a8
	if (ctx.cr6.eq) goto loc_821B02A8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B0250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821B0270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821b02a8
	if (!ctx.cr6.gt) goto loc_821B02A8;
loc_821B0280:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r30,r10
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x821b0298
	if (!ctx.cr6.eq) goto loc_821B0298;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r29,r10
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x821b02ac
	if (ctx.cr6.eq) goto loc_821B02AC;
loc_821B0298:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x821b0280
	if (ctx.cr6.lt) goto loc_821B0280;
loc_821B02A8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821B02AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821B02B4"))) PPC_WEAK_FUNC(sub_821B02B4);
PPC_FUNC_IMPL(__imp__sub_821B02B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B02B8"))) PPC_WEAK_FUNC(sub_821B02B8);
PPC_FUNC_IMPL(__imp__sub_821B02B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821B02C8"))) PPC_WEAK_FUNC(sub_821B02C8);
PPC_FUNC_IMPL(__imp__sub_821B02C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B02F0"))) PPC_WEAK_FUNC(sub_821B02F0);
PPC_FUNC_IMPL(__imp__sub_821B02F0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// bne cr6,0x821b0348
	if (!ctx.cr6.eq) goto loc_821B0348;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// ld r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// ld r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// std r6,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r6.u64);
	// ld r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// std r5,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r5.u64);
	// ld r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// std r11,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r11.u64);
	// ld r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 72);
	// std r10,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.r10.u64);
	// ld r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 80);
	// std r9,48(r4)
	PPC_STORE_U64(ctx.r4.u32 + 48, ctx.r9.u64);
	// ld r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 88);
	// std r8,56(r4)
	PPC_STORE_U64(ctx.r4.u32 + 56, ctx.r8.u64);
	// blr 
	return;
loc_821B0348:
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r7,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r6.u64);
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r5,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r5.u64);
	// ld r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r3,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r3.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r10.u64);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r9,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.r9.u64);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r8,48(r4)
	PPC_STORE_U64(ctx.r4.u32 + 48, ctx.r8.u64);
	// ld r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r7,56(r4)
	PPC_STORE_U64(ctx.r4.u32 + 56, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B039C"))) PPC_WEAK_FUNC(sub_821B039C);
PPC_FUNC_IMPL(__imp__sub_821B039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B03A0"))) PPC_WEAK_FUNC(sub_821B03A0);
PPC_FUNC_IMPL(__imp__sub_821B03A0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x821b03f4
	if (!ctx.cr6.eq) goto loc_821B03F4;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r8.u64);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r7,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r7.u64);
	// ld r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r6.u64);
	// ld r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r5,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r5.u64);
	// ld r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r11,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// ld r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r10,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r10.u64);
	// ld r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r9,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r9.u64);
	// blr 
	return;
loc_821B03F4:
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// ld r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r6,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r6.u64);
	// ld r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r5,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r5.u64);
	// ld r3,32(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r3,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r3.u64);
	// ld r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r9,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// ld r8,56(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r8,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B0448"))) PPC_WEAK_FUNC(sub_821B0448);
PPC_FUNC_IMPL(__imp__sub_821B0448) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r11,r5,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r7,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r6.u64);
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r5,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r5.u64);
	// ld r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r3,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r3.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r10.u64);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r9,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.r9.u64);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r8,48(r4)
	PPC_STORE_U64(ctx.r4.u32 + 48, ctx.r8.u64);
	// ld r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r7,56(r4)
	PPC_STORE_U64(ctx.r4.u32 + 56, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B04A0"))) PPC_WEAK_FUNC(sub_821B04A0);
PPC_FUNC_IMPL(__imp__sub_821B04A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// ld r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r6,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r6.u64);
	// ld r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r9,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r9.u64);
	// ld r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r8,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r8.u64);
	// ld r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r7,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r7.u64);
	// ld r6,48(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r6,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r6.u64);
	// ld r4,56(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r4,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r4.u64);
	// lwz r9,184(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82289c50
	sub_82289C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B0508"))) PPC_WEAK_FUNC(sub_821B0508);
PPC_FUNC_IMPL(__imp__sub_821B0508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// beq cr6,0x821b053c
	if (ctx.cr6.eq) goto loc_821B053C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821B053C;
	sub_82183E40(ctx, base);
loc_821B053C:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b0554
	if (ctx.cr6.eq) goto loc_821B0554;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821B0554;
	sub_82183E40(ctx, base);
loc_821B0554:
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b056c
	if (ctx.cr6.eq) goto loc_821B056C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821B056C;
	sub_82183E40(ctx, base);
loc_821B056C:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b0584
	if (ctx.cr6.eq) goto loc_821B0584;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821B0584;
	sub_82183E40(ctx, base);
loc_821B0584:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b059c
	if (ctx.cr6.eq) goto loc_821B059C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821B059C;
	sub_82183E40(ctx, base);
loc_821B059C:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b05b4
	if (ctx.cr6.eq) goto loc_821B05B4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821B05B4;
	sub_82183E40(ctx, base);
loc_821B05B4:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b05f8
	if (ctx.cr6.eq) goto loc_821B05F8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b05f0
	if (ctx.cr6.eq) goto loc_821B05F0;
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
	ctx.lr = 0x821B05EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821b05f8
	goto loc_821B05F8;
loc_821B05F0:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821B05F8;
	sub_82183E40(ctx, base);
loc_821B05F8:
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B0614"))) PPC_WEAK_FUNC(sub_821B0614);
PPC_FUNC_IMPL(__imp__sub_821B0614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0618"))) PPC_WEAK_FUNC(sub_821B0618);
PPC_FUNC_IMPL(__imp__sub_821B0618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821B0620;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0718
	if (ctx.cr6.eq) goto loc_821B0718;
	// bl 0x821dba40
	ctx.lr = 0x821B0638;
	sub_821DBA40(ctx, base);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B064C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821b06fc
	if (!ctx.cr6.gt) goto loc_821B06FC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821B0660:
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B0678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821b069c
	if (!ctx.cr6.eq) goto loc_821B069C;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// b 0x821b06b4
	goto loc_821B06B4;
loc_821B069C:
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r30,r10
	ctx.r4.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_821B06B4:
	// bl 0x82289c50
	ctx.lr = 0x821B06B8;
	sub_82289C50(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821b0660
	if (ctx.cr6.lt) goto loc_821B0660;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821b06fc
	if (!ctx.cr6.gt) goto loc_821B06FC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821B06D4:
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// add r5,r30,r9
	ctx.r5.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r4,r30,r10
	ctx.r4.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82289c50
	ctx.lr = 0x821B06F0;
	sub_82289C50(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne 0x821b06d4
	if (!ctx.cr0.eq) goto loc_821B06D4;
loc_821B06FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B0710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dbbf0
	ctx.lr = 0x821B0718;
	sub_821DBBF0(ctx, base);
loc_821B0718:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821B0720"))) PPC_WEAK_FUNC(sub_821B0720);
PPC_FUNC_IMPL(__imp__sub_821B0720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821B0728;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B0744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821b077c
	if (!ctx.cr6.gt) goto loc_821B077C;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821B0754:
	// lwz r9,180(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lwz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82289c50
	ctx.lr = 0x821B0770;
	sub_82289C50(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne 0x821b0754
	if (!ctx.cr0.eq) goto loc_821B0754;
loc_821B077C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821B0784"))) PPC_WEAK_FUNC(sub_821B0784);
PPC_FUNC_IMPL(__imp__sub_821B0784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0788"))) PPC_WEAK_FUNC(sub_821B0788);
PPC_FUNC_IMPL(__imp__sub_821B0788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821B0790;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,188(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// lfs f13,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r30,184(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,80(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lwz r29,180(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f8,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f9,84(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,88(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821B07EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x821b09a4
	if (ctx.cr6.lt) goto loc_821B09A4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r10,r29,-8
	ctx.r10.s64 = ctx.r29.s64 + -8;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 + ctx.r29.u64;
	// subf r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
loc_821B0820:
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,56(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,60(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f8,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f5,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,56(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lfs f2,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,64(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lfs f10,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,120(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lfs f7,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,124(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// lfs f4,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,128(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// lfs f1,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,120(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 120, temp.u32);
	// lfs f12,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,124(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 124, temp.u32);
	// lfs f9,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f7,128(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 128, temp.u32);
	// lfs f6,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f4,184(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// lfs f3,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f1,188(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// lfs f0,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,192(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lfs f11,184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,184(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 184, temp.u32);
	// lfs f8,188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,188(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 188, temp.u32);
	// lfs f5,192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,192(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 192, temp.u32);
	// lfs f2,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,248(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 248, temp.u32);
	// lfs f13,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,252(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 252, temp.u32);
	// lfs f10,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfsu f8,256(r11)
	// lfs f7,248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,248(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 248, temp.u32);
	// lfs f4,252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f2,252(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 252, temp.u32);
	// lfs f1,256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfsu f13,256(r10)
	// bdnz 0x821b0820
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B0820;
loc_821B09A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821b0a1c
	if (!ctx.cr6.gt) goto loc_821B0A1C;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r10,r29,-8
	ctx.r10.s64 = ctx.r29.s64 + -8;
loc_821B09B8:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,56(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,60(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f8,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfsu f6,64(r11)
	// lfs f3,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f2,56(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lfs f5,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// lfs f1,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// stfs f13,60(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfsu f11,64(r10)
	// bdnz 0x821b09b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B09B8;
loc_821B0A1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821B0A24"))) PPC_WEAK_FUNC(sub_821B0A24);
PPC_FUNC_IMPL(__imp__sub_821B0A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0A28"))) PPC_WEAK_FUNC(sub_821B0A28);
PPC_FUNC_IMPL(__imp__sub_821B0A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,-7456
	ctx.r31.s64 = ctx.r11.s64 + -7456;
	// lwz r11,-7408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7408);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b0a94
	if (!ctx.cr6.eq) goto loc_821B0A94;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,-7408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7408, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-21220
	ctx.r4.s64 = ctx.r9.s64 + -21220;
	// bl 0x8218a540
	ctx.lr = 0x821B0A74;
	sub_8218A540(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r8,-21228
	ctx.r4.s64 = ctx.r8.s64 + -21228;
	// bl 0x8218a540
	ctx.lr = 0x821B0A84;
	sub_8218A540(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r7,-21236
	ctx.r4.s64 = ctx.r7.s64 + -21236;
	// bl 0x8218a540
	ctx.lr = 0x821B0A94;
	sub_8218A540(ctx, base);
loc_821B0A94:
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B0A9C:
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821b0ab8
	if (!ctx.cr6.eq) goto loc_821B0AB8;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x821b0ae4
	if (ctx.cr6.eq) goto loc_821B0AE4;
loc_821B0AB8:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x821b0a9c
	if (ctx.cr6.lt) goto loc_821B0A9C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B0ACC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821B0AE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821b0acc
	goto loc_821B0ACC;
}

__attribute__((alias("__imp__sub_821B0AEC"))) PPC_WEAK_FUNC(sub_821B0AEC);
PPC_FUNC_IMPL(__imp__sub_821B0AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0AF0"))) PPC_WEAK_FUNC(sub_821B0AF0);
PPC_FUNC_IMPL(__imp__sub_821B0AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-21392
	ctx.r10.s64 = ctx.r11.s64 + -21392;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821b0508
	ctx.lr = 0x821B0B14;
	sub_821B0508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db958
	ctx.lr = 0x821B0B1C;
	sub_821DB958(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B0B30"))) PPC_WEAK_FUNC(sub_821B0B30);
PPC_FUNC_IMPL(__imp__sub_821B0B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-21392
	ctx.r10.s64 = ctx.r11.s64 + -21392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821b0508
	ctx.lr = 0x821B0B5C;
	sub_821B0508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db958
	ctx.lr = 0x821B0B64;
	sub_821DB958(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b0b80
	if (ctx.cr6.eq) goto loc_821B0B80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821B0B7C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B0B80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B0B98"))) PPC_WEAK_FUNC(sub_821B0B98);
PPC_FUNC_IMPL(__imp__sub_821B0B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f2,-12(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkd3d128 v63,v63,5,2,2
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[4] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[5] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r8,-14(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// sth r8,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B0BC8"))) PPC_WEAK_FUNC(sub_821B0BC8);
PPC_FUNC_IMPL(__imp__sub_821B0BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f2,-12(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkd3d128 v63,v63,5,2,2
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[4] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[5] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r8,-10(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lhz r6,-14(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// lhz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -12);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// sth r6,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r6.u16);
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B0C08"))) PPC_WEAK_FUNC(sub_821B0C08);
PPC_FUNC_IMPL(__imp__sub_821B0C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f2,-12(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkd3d128 v63,v63,5,2,2
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[4] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[5] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r8,-10(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// lhz r7,-8(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// lhz r6,-6(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -6);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lhz r4,-14(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// lhz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -12);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// sth r4,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r4.u16);
	// sth r5,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r5.u16);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// sth r7,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r7.u16);
	// sth r6,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r6.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B0C58"))) PPC_WEAK_FUNC(sub_821B0C58);
PPC_FUNC_IMPL(__imp__sub_821B0C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f2,-12(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkd3d128 v63,v63,5,2,2
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[4] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[5] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r8,-10(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// lhz r7,-8(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// lhz r6,-6(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -6);
	// lhz r5,-4(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -4);
	// lhz r4,-2(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -2);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lhz r10,-14(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// lhz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -12);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// sth r7,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r7.u16);
	// sth r6,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r6.u16);
	// sth r5,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r5.u16);
	// sth r4,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B0CB8"))) PPC_WEAK_FUNC(sub_821B0CB8);
PPC_FUNC_IMPL(__imp__sub_821B0CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// li r10,12
	ctx.r10.s64 = 12;
	// vspltisw128 v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x8)));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lvlx128 v59,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r9,-21200
	ctx.r7.s64 = ctx.r9.s64 + -21200;
	// lvrx128 v61,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v60,v61,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v56,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vsrw128 v58,v63,v62
	ctx.v58.u32[0] = ctx.v63.u32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v58.u32[1] = ctx.v63.u32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v58.u32[2] = ctx.v63.u32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v58.u32[3] = ctx.v63.u32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vpermwi128 v57,v63,192
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x3F));
	// vspltw128 v12,v58,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xAA));
	// vmulfp128 v55,v56,v57
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vspltw128 v10,v58,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0x55));
	// vrfin128 v54,v55
	simde_mm_store_ps(ctx.v54.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v55.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vcfpsxws128 v53,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v54.f32)));
	// vslw128 v52,v53,v63
	ctx.v52.u32[0] = ctx.v53.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v52.u32[1] = ctx.v53.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v52.u32[2] = ctx.v53.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v52.u32[3] = ctx.v53.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// vspltw128 v0,v52,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xAA));
	// vspltw128 v13,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xFF));
	// vspltw128 v11,v52,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0x55));
	// vsel v12,v0,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsel v0,v11,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvewx v0,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B0D28"))) PPC_WEAK_FUNC(sub_821B0D28);
PPC_FUNC_IMPL(__imp__sub_821B0D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-23652
	ctx.r10.s64 = ctx.r11.s64 + -23652;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B0D38"))) PPC_WEAK_FUNC(sub_821B0D38);
PPC_FUNC_IMPL(__imp__sub_821B0D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f11,-21176(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -21176);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f0,10928(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10928);
	ctx.f0.f64 = double(temp.f32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lfs f12,-21180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21180);
	ctx.f12.f64 = double(temp.f32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f12,260(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,264(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// addi r10,r3,140
	ctx.r10.s64 = ctx.r3.s64 + 140;
	// stfs f13,268(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// addi r11,r3,188
	ctx.r11.s64 = ctx.r3.s64 + 188;
	// lfs f0,8308(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8308);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-21184(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -21184);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stfs f0,272(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,276(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// stfs f12,280(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stfs f13,284(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// lfs f0,9852(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20948);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,9048(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9048);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f12,164(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f11,168(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f13,172(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f0,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,176(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f13,180(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f13,184(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f13,188(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
loc_821B0DE4:
	// stfs f0,-108(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -108, temp.u32);
	// stfs f0,-104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -104, temp.u32);
	// stfs f0,-100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -100, temp.u32);
	// stfs f13,-96(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -96, temp.u32);
	// stfs f0,-172(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -172, temp.u32);
	// stfs f0,-168(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -168, temp.u32);
	// stfs f13,-164(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -164, temp.u32);
	// stfs f13,-160(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -160, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f13,16(r11)
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b0de4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B0DE4;
	// stfs f0,288(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stfs f0,292(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// stfs f0,296(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// stfs f13,300(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stfs f0,448(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 448, temp.u32);
	// stfs f0,452(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 452, temp.u32);
	// stfs f0,456(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// stfs f13,460(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stfs f0,608(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 608, temp.u32);
	// stfs f0,612(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 612, temp.u32);
	// stfs f0,616(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 616, temp.u32);
	// stfs f13,620(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 620, temp.u32);
	// stfs f0,304(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stfs f0,308(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stfs f0,312(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// stfs f13,316(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// stfs f0,464(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// stfs f0,468(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// stfs f0,472(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// stfs f13,476(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 476, temp.u32);
	// stfs f0,624(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 624, temp.u32);
	// stfs f0,628(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 628, temp.u32);
	// stfs f0,632(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 632, temp.u32);
	// stfs f13,636(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 636, temp.u32);
	// stfs f0,320(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// stfs f0,324(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// stfs f0,328(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// stfs f13,332(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// stfs f0,480(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 480, temp.u32);
	// stfs f0,484(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 484, temp.u32);
	// stfs f0,488(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 488, temp.u32);
	// stfs f13,492(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 492, temp.u32);
	// stfs f0,640(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 640, temp.u32);
	// stfs f0,644(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 644, temp.u32);
	// stfs f0,648(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 648, temp.u32);
	// stfs f13,652(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 652, temp.u32);
	// stfs f0,336(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// stfs f0,340(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// stfs f0,344(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// stfs f13,348(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// stfs f0,496(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// stfs f0,500(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// stfs f0,504(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// stfs f13,508(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 508, temp.u32);
	// stfs f0,656(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 656, temp.u32);
	// stfs f0,660(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 660, temp.u32);
	// stfs f0,664(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 664, temp.u32);
	// stfs f13,668(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 668, temp.u32);
	// stfs f0,352(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 352, temp.u32);
	// stfs f0,356(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 356, temp.u32);
	// stfs f0,360(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 360, temp.u32);
	// stfs f13,364(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// stfs f0,512(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// stfs f0,516(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// stfs f0,520(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// stfs f13,524(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// stfs f0,672(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 672, temp.u32);
	// stfs f0,676(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 676, temp.u32);
	// stfs f0,680(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 680, temp.u32);
	// stfs f13,684(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 684, temp.u32);
	// stfs f0,368(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// stfs f0,372(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 372, temp.u32);
	// stfs f0,376(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 376, temp.u32);
	// stfs f13,380(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 380, temp.u32);
	// stfs f0,528(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// stfs f0,532(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// stfs f0,536(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 536, temp.u32);
	// stfs f13,540(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// stfs f0,688(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 688, temp.u32);
	// stfs f0,692(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 692, temp.u32);
	// stfs f0,696(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 696, temp.u32);
	// stfs f13,700(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 700, temp.u32);
	// stfs f0,384(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 384, temp.u32);
	// stfs f0,388(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 388, temp.u32);
	// stfs f0,392(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 392, temp.u32);
	// stfs f13,396(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// stfs f0,544(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// stfs f0,548(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// stfs f0,552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// stfs f13,556(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 556, temp.u32);
	// stfs f0,704(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 704, temp.u32);
	// stfs f0,708(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 708, temp.u32);
	// stfs f0,712(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 712, temp.u32);
	// stfs f13,716(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 716, temp.u32);
	// stfs f0,400(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// stfs f0,404(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// stfs f0,408(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// stfs f13,412(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// stfs f0,560(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 560, temp.u32);
	// stfs f0,564(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 564, temp.u32);
	// stfs f0,568(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 568, temp.u32);
	// stfs f13,572(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 572, temp.u32);
	// stfs f0,720(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 720, temp.u32);
	// stfs f0,724(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 724, temp.u32);
	// stfs f0,728(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 728, temp.u32);
	// stfs f13,732(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 732, temp.u32);
	// stfs f0,416(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// stfs f0,420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// stfs f0,424(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// stfs f13,428(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 428, temp.u32);
	// stfs f0,576(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 576, temp.u32);
	// stfs f0,580(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 580, temp.u32);
	// stfs f0,584(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 584, temp.u32);
	// stfs f13,588(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 588, temp.u32);
	// stfs f0,736(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 736, temp.u32);
	// stfs f0,740(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 740, temp.u32);
	// stfs f0,744(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 744, temp.u32);
	// stfs f13,748(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 748, temp.u32);
	// stfs f0,432(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 432, temp.u32);
	// stfs f0,436(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 436, temp.u32);
	// stfs f0,440(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 440, temp.u32);
	// stfs f13,444(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 444, temp.u32);
	// stfs f0,592(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 592, temp.u32);
	// stfs f0,596(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 596, temp.u32);
	// stfs f0,600(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 600, temp.u32);
	// stfs f13,604(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 604, temp.u32);
	// stfs f0,752(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 752, temp.u32);
	// stfs f0,756(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 756, temp.u32);
	// stfs f0,760(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 760, temp.u32);
	// stfs f13,764(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 764, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1008"))) PPC_WEAK_FUNC(sub_821B1008);
PPC_FUNC_IMPL(__imp__sub_821B1008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r10,r11,-23652
	ctx.r10.s64 = ctx.r11.s64 + -23652;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821b0d38
	ctx.lr = 0x821B102C;
	sub_821B0D38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1040"))) PPC_WEAK_FUNC(sub_821B1040);
PPC_FUNC_IMPL(__imp__sub_821B1040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x821a14e8
	ctx.lr = 0x821B1058;
	sub_821A14E8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-21168
	ctx.r9.s64 = ctx.r10.s64 + -21168;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1094"))) PPC_WEAK_FUNC(sub_821B1094);
PPC_FUNC_IMPL(__imp__sub_821B1094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1098"))) PPC_WEAK_FUNC(sub_821B1098);
PPC_FUNC_IMPL(__imp__sub_821B1098) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B10BC"))) PPC_WEAK_FUNC(sub_821B10BC);
PPC_FUNC_IMPL(__imp__sub_821B10BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B10C0"))) PPC_WEAK_FUNC(sub_821B10C0);
PPC_FUNC_IMPL(__imp__sub_821B10C0) {
	PPC_FUNC_PROLOGUE();
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B10EC"))) PPC_WEAK_FUNC(sub_821B10EC);
PPC_FUNC_IMPL(__imp__sub_821B10EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B10F0"))) PPC_WEAK_FUNC(sub_821B10F0);
PPC_FUNC_IMPL(__imp__sub_821B10F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B10F8"))) PPC_WEAK_FUNC(sub_821B10F8);
PPC_FUNC_IMPL(__imp__sub_821B10F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r3,7252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7252, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1104"))) PPC_WEAK_FUNC(sub_821B1104);
PPC_FUNC_IMPL(__imp__sub_821B1104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1108"))) PPC_WEAK_FUNC(sub_821B1108);
PPC_FUNC_IMPL(__imp__sub_821B1108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r3,7252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7252);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1114"))) PPC_WEAK_FUNC(sub_821B1114);
PPC_FUNC_IMPL(__imp__sub_821B1114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1118"))) PPC_WEAK_FUNC(sub_821B1118);
PPC_FUNC_IMPL(__imp__sub_821B1118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-21168
	ctx.r10.s64 = ctx.r11.s64 + -21168;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821a1488
	ctx.lr = 0x821B1144;
	sub_821A1488(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b1160
	if (ctx.cr6.eq) goto loc_821B1160;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821B115C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B1160:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1178"))) PPC_WEAK_FUNC(sub_821B1178);
PPC_FUNC_IMPL(__imp__sub_821B1178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821B1180;
	sub_82248780(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821b1208
	if (!ctx.cr6.eq) goto loc_821B1208;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// lwz r28,7252(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7252);
	// bl 0x821a2548
	ctx.lr = 0x821B11B4;
	sub_821A2548(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// bl 0x8228c1f8
	ctx.lr = 0x821B1204;
	sub_8228C1F8(ctx, base);
	// b 0x821b12e4
	goto loc_821B12E4;
loc_821B1208:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x821b1270
	if (!ctx.cr6.eq) goto loc_821B1270;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// lwz r28,7252(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7252);
	// bl 0x821a2548
	ctx.lr = 0x821B1224;
	sub_821A2548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8228c268
	ctx.lr = 0x821B126C;
	sub_8228C268(ctx, base);
	// b 0x821b12e4
	goto loc_821B12E4;
loc_821B1270:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x821b12e4
	if (!ctx.cr6.eq) goto loc_821B12E4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// lwz r28,7252(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7252);
	// bl 0x821a2548
	ctx.lr = 0x821B128C;
	sub_821A2548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8228c2e0
	ctx.lr = 0x821B12E4;
	sub_8228C2E0(ctx, base);
loc_821B12E4:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821B130C"))) PPC_WEAK_FUNC(sub_821B130C);
PPC_FUNC_IMPL(__imp__sub_821B130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1310"))) PPC_WEAK_FUNC(sub_821B1310);
PPC_FUNC_IMPL(__imp__sub_821B1310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b1340
	if (ctx.cr6.eq) goto loc_821B1340;
	// lwz r3,-7480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7480);
	// bl 0x821ae208
	ctx.lr = 0x821B1340;
	sub_821AE208(ctx, base);
loc_821B1340:
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b1354
	if (ctx.cr6.eq) goto loc_821B1354;
	// lwz r3,-7480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7480);
	// bl 0x821ae260
	ctx.lr = 0x821B1354;
	sub_821AE260(ctx, base);
loc_821B1354:
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b1368
	if (ctx.cr6.eq) goto loc_821B1368;
	// lwz r3,-7480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7480);
	// bl 0x821ae2b8
	ctx.lr = 0x821B1368;
	sub_821AE2B8(ctx, base);
loc_821B1368:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1390"))) PPC_WEAK_FUNC(sub_821B1390);
PPC_FUNC_IMPL(__imp__sub_821B1390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b13bc
	if (!ctx.cr6.eq) goto loc_821B13BC;
	// lwz r30,80(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x821b13d8
	goto loc_821B13D8;
loc_821B13BC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b13cc
	if (!ctx.cr6.eq) goto loc_821B13CC;
	// lwz r30,84(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x821b13d8
	goto loc_821B13D8;
loc_821B13CC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821b1404
	if (!ctx.cr6.eq) goto loc_821B1404;
	// lwz r30,88(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
loc_821B13D8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821B13E4;
	sub_821A2548(ctx, base);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r7,r9,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// srd r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r8.u8 & 0x7F));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8226b640
	ctx.lr = 0x821B1404;
	sub_8226B640(ctx, base);
loc_821B1404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B141C"))) PPC_WEAK_FUNC(sub_821B141C);
PPC_FUNC_IMPL(__imp__sub_821B141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1420"))) PPC_WEAK_FUNC(sub_821B1420);
PPC_FUNC_IMPL(__imp__sub_821B1420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821B1448;
	sub_821A2548(ctx, base);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,7252(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7252);
	// bl 0x8226b2c0
	ctx.lr = 0x821B1470;
	sub_8226B2C0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B14AC"))) PPC_WEAK_FUNC(sub_821B14AC);
PPC_FUNC_IMPL(__imp__sub_821B14AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B14B0"))) PPC_WEAK_FUNC(sub_821B14B0);
PPC_FUNC_IMPL(__imp__sub_821B14B0) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b14ec
	if (ctx.cr6.eq) goto loc_821B14EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8226b130
	ctx.lr = 0x821B14E8;
	sub_8226B130(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_821B14EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B14FC"))) PPC_WEAK_FUNC(sub_821B14FC);
PPC_FUNC_IMPL(__imp__sub_821B14FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1500"))) PPC_WEAK_FUNC(sub_821B1500);
PPC_FUNC_IMPL(__imp__sub_821B1500) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8226b130
	sub_8226B130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B1528"))) PPC_WEAK_FUNC(sub_821B1528);
PPC_FUNC_IMPL(__imp__sub_821B1528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B152C"))) PPC_WEAK_FUNC(sub_821B152C);
PPC_FUNC_IMPL(__imp__sub_821B152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1530"))) PPC_WEAK_FUNC(sub_821B1530);
PPC_FUNC_IMPL(__imp__sub_821B1530) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822696e0
	sub_822696E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B1544"))) PPC_WEAK_FUNC(sub_821B1544);
PPC_FUNC_IMPL(__imp__sub_821B1544) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1548"))) PPC_WEAK_FUNC(sub_821B1548);
PPC_FUNC_IMPL(__imp__sub_821B1548) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82276910
	sub_82276910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B1560"))) PPC_WEAK_FUNC(sub_821B1560);
PPC_FUNC_IMPL(__imp__sub_821B1560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1564"))) PPC_WEAK_FUNC(sub_821B1564);
PPC_FUNC_IMPL(__imp__sub_821B1564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1568"))) PPC_WEAK_FUNC(sub_821B1568);
PPC_FUNC_IMPL(__imp__sub_821B1568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821B1590;
	sub_821A2548(ctx, base);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82274ae8
	ctx.lr = 0x821B15A0;
	sub_82274AE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B15B8"))) PPC_WEAK_FUNC(sub_821B15B8);
PPC_FUNC_IMPL(__imp__sub_821B15B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821B15C0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r29,-8200(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821B15E4;
	sub_821AAF10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821B1600;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x82087ab0
	ctx.lr = 0x821B1628;
	sub_82087AB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aafd0
	ctx.lr = 0x821B1634;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821B163C"))) PPC_WEAK_FUNC(sub_821B163C);
PPC_FUNC_IMPL(__imp__sub_821B163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1640"))) PPC_WEAK_FUNC(sub_821B1640);
PPC_FUNC_IMPL(__imp__sub_821B1640) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821B1668;
	sub_821A2548(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r7,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srad r11,r8,r7
	temp.u64 = ctx.r7.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r11.s64 = ctx.r8.s64 >> temp.u64;
	// srd r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82274938
	ctx.lr = 0x821B16A0;
	sub_82274938(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B16B8"))) PPC_WEAK_FUNC(sub_821B16B8);
PPC_FUNC_IMPL(__imp__sub_821B16B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821B16C0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r29,-8200(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821B16E4;
	sub_821AAF10(ctx, base);
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821B16FC;
	sub_8209EDA0(ctx, base);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x82087ab0
	ctx.lr = 0x821B171C;
	sub_82087AB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aafd0
	ctx.lr = 0x821B1728;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821B1730"))) PPC_WEAK_FUNC(sub_821B1730);
PPC_FUNC_IMPL(__imp__sub_821B1730) {
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
	// bl 0x821a2548
	ctx.lr = 0x821B1750;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-7392
	ctx.r11.s64 = ctx.r9.s64 + -7392;
	// rldicr r7,r8,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r9,120
	ctx.r6.s64 = ctx.r9.s64 + 120;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r5,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srd r9,r7,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r4.u8 & 0x7F));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1924(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1928(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1932(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B17CC"))) PPC_WEAK_FUNC(sub_821B17CC);
PPC_FUNC_IMPL(__imp__sub_821B17CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B17D0"))) PPC_WEAK_FUNC(sub_821B17D0);
PPC_FUNC_IMPL(__imp__sub_821B17D0) {
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
	// bl 0x821a2548
	ctx.lr = 0x821B17F0;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-7392
	ctx.r11.s64 = ctx.r9.s64 + -7392;
	// rldicr r7,r8,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r9,120
	ctx.r6.s64 = ctx.r9.s64 + 120;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f13,r5,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srd r9,r7,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r4.u8 & 0x7F));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1924(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1928(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1932(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1870"))) PPC_WEAK_FUNC(sub_821B1870);
PPC_FUNC_IMPL(__imp__sub_821B1870) {
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
	// bl 0x821a2548
	ctx.lr = 0x821B1890;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-7392
	ctx.r11.s64 = ctx.r9.s64 + -7392;
	// rldicr r7,r8,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r9,120
	ctx.r6.s64 = ctx.r9.s64 + 120;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f13,r5,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srd r9,r7,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r4.u8 & 0x7F));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1924(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1928(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1932(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1910"))) PPC_WEAK_FUNC(sub_821B1910);
PPC_FUNC_IMPL(__imp__sub_821B1910) {
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
	// bl 0x821a2548
	ctx.lr = 0x821B1930;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-7392
	ctx.r11.s64 = ctx.r9.s64 + -7392;
	// rldicr r7,r8,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r9,120
	ctx.r6.s64 = ctx.r9.s64 + 120;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f13,r5,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srd r9,r7,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r4.u8 & 0x7F));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1924(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1928(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1932(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B19B0"))) PPC_WEAK_FUNC(sub_821B19B0);
PPC_FUNC_IMPL(__imp__sub_821B19B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821B19D8;
	sub_821A2548(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-7392
	ctx.r11.s64 = ctx.r9.s64 + -7392;
	// rldicr r5,r7,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ld r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r9,120
	ctx.r10.s64 = ctx.r9.s64 + 120;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r8,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// srd r6,r5,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1924(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1928(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1932(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// std r4,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r4.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1A70"))) PPC_WEAK_FUNC(sub_821B1A70);
PPC_FUNC_IMPL(__imp__sub_821B1A70) {
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
	ctx.lr = 0x821B1A80;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821b1a98
	if (ctx.cr6.eq) goto loc_821B1A98;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x82183448
	ctx.lr = 0x821B1A94;
	sub_82183448(ctx, base);
	// b 0x821b1aa0
	goto loc_821B1AA0;
loc_821B1A98:
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x821845a0
	ctx.lr = 0x821B1AA0;
	sub_821845A0(ctx, base);
loc_821B1AA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b1ac4
	if (ctx.cr6.eq) goto loc_821B1AC4;
	// bl 0x821d1298
	ctx.lr = 0x821B1AAC;
	sub_821D1298(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-1744(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B1AC4:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1744(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1744, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1AE0"))) PPC_WEAK_FUNC(sub_821B1AE0);
PPC_FUNC_IMPL(__imp__sub_821B1AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lwsync 
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-3296(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3296, ctx.r3.u32);
	// bl 0x821b1a70
	ctx.lr = 0x821B1B10;
	sub_821B1A70(ctx, base);
	// bl 0x821a25f8
	ctx.lr = 0x821B1B14;
	sub_821A25F8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821B1B34"))) PPC_WEAK_FUNC(sub_821B1B34);
PPC_FUNC_IMPL(__imp__sub_821B1B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1B38"))) PPC_WEAK_FUNC(sub_821B1B38);
PPC_FUNC_IMPL(__imp__sub_821B1B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821B1B40;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82183078
	ctx.lr = 0x821B1B58;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821B1B64;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821B1B68;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821b1b80
	if (ctx.cr6.eq) goto loc_821B1B80;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82183448
	ctx.lr = 0x821B1B7C;
	sub_82183448(ctx, base);
	// b 0x821b1b88
	goto loc_821B1B88;
loc_821B1B80:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x821B1B88;
	sub_821845A0(ctx, base);
loc_821B1B88:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b1ba0
	if (ctx.cr6.eq) goto loc_821B1BA0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821ddca0
	ctx.lr = 0x821B1B9C;
	sub_821DDCA0(ctx, base);
	// b 0x821b1ba4
	goto loc_821B1BA4;
loc_821B1BA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B1BA4:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// bl 0x821dd2f8
	ctx.lr = 0x821B1BAC;
	sub_821DD2F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821B1BBC;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821B1BC4"))) PPC_WEAK_FUNC(sub_821B1BC4);
PPC_FUNC_IMPL(__imp__sub_821B1BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1BC8"))) PPC_WEAK_FUNC(sub_821B1BC8);
PPC_FUNC_IMPL(__imp__sub_821B1BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821dd5c8
	ctx.lr = 0x821B1BF0;
	sub_821DD5C8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b1c10
	if (ctx.cr6.eq) goto loc_821B1C10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B1C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B1C10:
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

__attribute__((alias("__imp__sub_821B1C2C"))) PPC_WEAK_FUNC(sub_821B1C2C);
PPC_FUNC_IMPL(__imp__sub_821B1C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1C30"))) PPC_WEAK_FUNC(sub_821B1C30);
PPC_FUNC_IMPL(__imp__sub_821B1C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwsync 
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3296, ctx.r11.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b1c78
	if (ctx.cr6.eq) goto loc_821B1C78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B1C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B1C78:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r30,-12408(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12408);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b1ca4
	if (ctx.cr6.eq) goto loc_821B1CA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a8708
	ctx.lr = 0x821B1C98;
	sub_821A8708(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x821B1CA4;
	sub_82183E40(ctx, base);
loc_821B1CA4:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12408, ctx.r11.u32);
	// lwz r31,-1744(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1744);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b1cd0
	if (ctx.cr6.eq) goto loc_821B1CD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821B1CC4;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x821B1CD0;
	sub_82183E40(ctx, base);
loc_821B1CD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1744(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1744, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1CF0"))) PPC_WEAK_FUNC(sub_821B1CF0);
PPC_FUNC_IMPL(__imp__sub_821B1CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821b1b38
	sub_821B1B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B1D04"))) PPC_WEAK_FUNC(sub_821B1D04);
PPC_FUNC_IMPL(__imp__sub_821B1D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1D08"))) PPC_WEAK_FUNC(sub_821B1D08);
PPC_FUNC_IMPL(__imp__sub_821B1D08) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x821b1b38
	sub_821B1B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B1D1C"))) PPC_WEAK_FUNC(sub_821B1D1C);
PPC_FUNC_IMPL(__imp__sub_821B1D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1D20"))) PPC_WEAK_FUNC(sub_821B1D20);
PPC_FUNC_IMPL(__imp__sub_821B1D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r3,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// addi r4,r10,7408
	ctx.r4.s64 = ctx.r10.s64 + 7408;
	// lwz r3,-7484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7484);
	// b 0x821adfc0
	sub_821ADFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B1D48"))) PPC_WEAK_FUNC(sub_821B1D48);
PPC_FUNC_IMPL(__imp__sub_821B1D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-20848
	ctx.r10.s64 = ctx.r11.s64 + -20848;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d1708
	sub_821D1708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B1D58"))) PPC_WEAK_FUNC(sub_821B1D58);
PPC_FUNC_IMPL(__imp__sub_821B1D58) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,18
	ctx.r11.s64 = ctx.r4.s64 + 18;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// ld r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1D78"))) PPC_WEAK_FUNC(sub_821B1D78);
PPC_FUNC_IMPL(__imp__sub_821B1D78) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// addi r9,r4,18
	ctx.r9.s64 = ctx.r4.s64 + 18;
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stdx r8,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u64);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1DAC"))) PPC_WEAK_FUNC(sub_821B1DAC);
PPC_FUNC_IMPL(__imp__sub_821B1DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B1DB0"))) PPC_WEAK_FUNC(sub_821B1DB0);
PPC_FUNC_IMPL(__imp__sub_821B1DB0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1DC0"))) PPC_WEAK_FUNC(sub_821B1DC0);
PPC_FUNC_IMPL(__imp__sub_821B1DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-20768
	ctx.r10.s64 = ctx.r11.s64 + -20768;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d1708
	sub_821D1708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B1DD0"))) PPC_WEAK_FUNC(sub_821B1DD0);
PPC_FUNC_IMPL(__imp__sub_821B1DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-20672
	ctx.r10.s64 = ctx.r11.s64 + -20672;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d1708
	sub_821D1708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B1DE0"))) PPC_WEAK_FUNC(sub_821B1DE0);
PPC_FUNC_IMPL(__imp__sub_821B1DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-20592
	ctx.r10.s64 = ctx.r11.s64 + -20592;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d1708
	sub_821D1708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B1DF0"))) PPC_WEAK_FUNC(sub_821B1DF0);
PPC_FUNC_IMPL(__imp__sub_821B1DF0) {
	PPC_FUNC_PROLOGUE();
	// std r4,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1DF8"))) PPC_WEAK_FUNC(sub_821B1DF8);
PPC_FUNC_IMPL(__imp__sub_821B1DF8) {
	PPC_FUNC_PROLOGUE();
	// std r4,304(r3)
	PPC_STORE_U64(ctx.r3.u32 + 304, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1E00"))) PPC_WEAK_FUNC(sub_821B1E00);
PPC_FUNC_IMPL(__imp__sub_821B1E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-20512
	ctx.r10.s64 = ctx.r11.s64 + -20512;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d1708
	sub_821D1708(ctx, base);
	return;
}

