#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8232E4D0"))) PPC_WEAK_FUNC(sub_8232E4D0);
PPC_FUNC_IMPL(__imp__sub_8232E4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8232fab8
	ctx.lr = 0x8232E4E8;
	sub_8232FAB8(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22600
	ctx.r9.s64 = ctx.r10.s64 + 22600;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E520"))) PPC_WEAK_FUNC(sub_8232E520);
PPC_FUNC_IMPL(__imp__sub_8232E520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232E560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,41(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 41);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E580"))) PPC_WEAK_FUNC(sub_8232E580);
PPC_FUNC_IMPL(__imp__sub_8232E580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8232E588;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E5A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232E5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1FFFE;
	// lwz r9,45(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 45);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8232E5E0"))) PPC_WEAK_FUNC(sub_8232E5E0);
PPC_FUNC_IMPL(__imp__sub_8232E5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232E620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,49(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 49);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E640"))) PPC_WEAK_FUNC(sub_8232E640);
PPC_FUNC_IMPL(__imp__sub_8232E640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8232E648;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232E67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1FFFE;
	// lwz r9,53(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 53);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8232E6A0"))) PPC_WEAK_FUNC(sub_8232E6A0);
PPC_FUNC_IMPL(__imp__sub_8232E6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8232E6A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232E6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FFFC;
	// lwz r9,33(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 33);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8232E700"))) PPC_WEAK_FUNC(sub_8232E700);
PPC_FUNC_IMPL(__imp__sub_8232E700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8232E708;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E72C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,21(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 21);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8232e748
	if (ctx.cr6.lt) goto loc_8232E748;
	// lis r3,-30009
	ctx.r3.s64 = -1966669824;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8232E748:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232E774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,37(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 37);
	// mulli r11,r30,13
	ctx.r11.s64 = ctx.r30.s64 * 13;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8232E794"))) PPC_WEAK_FUNC(sub_8232E794);
PPC_FUNC_IMPL(__imp__sub_8232E794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232E798"))) PPC_WEAK_FUNC(sub_8232E798);
PPC_FUNC_IMPL(__imp__sub_8232E798) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E7C8"))) PPC_WEAK_FUNC(sub_8232E7C8);
PPC_FUNC_IMPL(__imp__sub_8232E7C8) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E7E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r3,r9,29,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E7FC"))) PPC_WEAK_FUNC(sub_8232E7FC);
PPC_FUNC_IMPL(__imp__sub_8232E7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232E800"))) PPC_WEAK_FUNC(sub_8232E800);
PPC_FUNC_IMPL(__imp__sub_8232E800) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E81C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E830"))) PPC_WEAK_FUNC(sub_8232E830);
PPC_FUNC_IMPL(__imp__sub_8232E830) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E84C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E860"))) PPC_WEAK_FUNC(sub_8232E860);
PPC_FUNC_IMPL(__imp__sub_8232E860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8232E868;
	sub_8224878C(ctx, base);
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
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r29,23(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 23);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232E89C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rotlwi r7,r29,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// li r6,6
	ctx.r6.s64 = 6;
	// subf r5,r7,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r7.s64;
	// subf r4,r3,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r3.s64;
	// divwu r3,r4,r6
	ctx.r3.u32 = ctx.r4.u32 / ctx.r6.u32;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8232E8BC"))) PPC_WEAK_FUNC(sub_8232E8BC);
PPC_FUNC_IMPL(__imp__sub_8232E8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232E8C0"))) PPC_WEAK_FUNC(sub_8232E8C0);
PPC_FUNC_IMPL(__imp__sub_8232E8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8232E8C8;
	sub_8224878C(ctx, base);
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
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E8E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r29,25(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 25);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232E8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rotlwi r7,r29,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// li r6,6
	ctx.r6.s64 = 6;
	// subf r5,r7,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r7.s64;
	// subf r4,r3,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r3.s64;
	// divwu r3,r4,r6
	ctx.r3.u32 = ctx.r4.u32 / ctx.r6.u32;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8232E91C"))) PPC_WEAK_FUNC(sub_8232E91C);
PPC_FUNC_IMPL(__imp__sub_8232E91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232E920"))) PPC_WEAK_FUNC(sub_8232E920);
PPC_FUNC_IMPL(__imp__sub_8232E920) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E954"))) PPC_WEAK_FUNC(sub_8232E954);
PPC_FUNC_IMPL(__imp__sub_8232E954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232E958"))) PPC_WEAK_FUNC(sub_8232E958);
PPC_FUNC_IMPL(__imp__sub_8232E958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232E97C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E994"))) PPC_WEAK_FUNC(sub_8232E994);
PPC_FUNC_IMPL(__imp__sub_8232E994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232E998"))) PPC_WEAK_FUNC(sub_8232E998);
PPC_FUNC_IMPL(__imp__sub_8232E998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,22600
	ctx.r9.s64 = ctx.r10.s64 + 22600;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8232e9f4
	if (ctx.cr6.eq) goto loc_8232E9F4;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8232e9f0
	if (ctx.cr6.eq) goto loc_8232E9F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8232E9EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8232e9f4
	goto loc_8232E9F4;
loc_8232E9F0:
	// bl 0x82080060
	ctx.lr = 0x8232E9F4;
	sub_82080060(ctx, base);
loc_8232E9F4:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232ea0c
	if (ctx.cr6.eq) goto loc_8232EA0C;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82086968
	ctx.lr = 0x8232EA0C;
	sub_82086968(ctx, base);
loc_8232EA0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232f170
	ctx.lr = 0x8232EA14;
	sub_8232F170(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EA28"))) PPC_WEAK_FUNC(sub_8232EA28);
PPC_FUNC_IMPL(__imp__sub_8232EA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8232EA30;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r7.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r5.u32);
	// stw r4,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232EA5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,27(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 27);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8232eb00
	if (ctx.cr6.eq) goto loc_8232EB00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232EA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232EA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,65(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 65);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r7,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r7.u16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232EAA4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8232EABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,27(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 27);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8232eb00
	if (!ctx.cr6.lt) goto loc_8232EB00;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lhz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// ble cr6,0x8232eaf0
	if (!ctx.cr6.gt) goto loc_8232EAF0;
	// lhz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 108);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r10.u16);
loc_8232EAF0:
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x8232eaa4
	goto loc_8232EAA4;
loc_8232EB00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232f528
	ctx.lr = 0x8232EB08;
	sub_8232F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8232EB10"))) PPC_WEAK_FUNC(sub_8232EB10);
PPC_FUNC_IMPL(__imp__sub_8232EB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8232EB18;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r30,36(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8232EB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,29(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 29);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8232ec2c
	if (ctx.cr6.eq) goto loc_8232EC2C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ec50
	if (!ctx.cr6.eq) goto loc_8232EC50;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232EB70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8232ec54
	if (ctx.cr6.lt) goto loc_8232EC54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232EB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,73(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 73);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232EBB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r7,31(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 31);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8232ec0c
	if (ctx.cr6.eq) goto loc_8232EC0C;
loc_8232EBBC:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8232ef80
	ctx.lr = 0x8232EBE0;
	sub_8232EF80(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r30,r8,16
	ctx.r30.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8232EC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r5,31(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 31);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8232ebbc
	if (ctx.cr6.lt) goto loc_8232EBBC;
loc_8232EC0C:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232EC24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8232EC2C:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232ec50
	if (ctx.cr6.eq) goto loc_8232EC50;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232EC4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_8232EC50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8232EC54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8232EC5C"))) PPC_WEAK_FUNC(sub_8232EC5C);
PPC_FUNC_IMPL(__imp__sub_8232EC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232EC60"))) PPC_WEAK_FUNC(sub_8232EC60);
PPC_FUNC_IMPL(__imp__sub_8232EC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8232EC68;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r30,108(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8232ede4
	if (ctx.cr6.eq) goto loc_8232EDE4;
	// lis r11,1365
	ctx.r11.s64 = 89456640;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8232ecb4
	if (ctx.cr6.gt) goto loc_8232ECB4;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,-5
	ctx.r10.s64 = -5;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x8232ecb8
	if (!ctx.cr6.gt) goto loc_8232ECB8;
loc_8232ECB4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8232ECB8:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,93
	ctx.r4.u64 = ctx.r4.u64 | 93;
	// bl 0x8232d150
	ctx.lr = 0x8232ECCC;
	sub_8232D150(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232ed04
	if (ctx.cr6.eq) goto loc_8232ED04;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// blt 0x8232ecfc
	if (ctx.cr0.lt) goto loc_8232ECFC;
loc_8232ECE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339528
	ctx.lr = 0x8232ECF0;
	sub_82339528(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// bge 0x8232ece8
	if (!ctx.cr0.lt) goto loc_8232ECE8;
loc_8232ECFC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8232ed08
	goto loc_8232ED08;
loc_8232ED04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232ED08:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// beq cr6,0x8232edf0
	if (ctx.cr6.eq) goto loc_8232EDF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232ED28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232ED3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,65(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 65);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r30,r10,r27
	ctx.r30.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_8232ED48:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r25,r11,16
	ctx.r25.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8232ED60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,27(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 27);
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8232ede4
	if (!ctx.cr6.lt) goto loc_8232EDE4;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lhz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r27,r11,5
	ctx.r27.s64 = ctx.r11.s64 + 5;
	// ble cr6,0x8232edd0
	if (!ctx.cr6.gt) goto loc_8232EDD0;
	// rlwinm r10,r24,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x1FE;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// clrlwi r28,r24,24
	ctx.r28.u64 = ctx.r24.u32 & 0xFF;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r29,r10,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82339780
	ctx.lr = 0x8232EDB0;
	sub_82339780(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8232edc8
	if (ctx.cr6.lt) goto loc_8232EDC8;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82339278
	ctx.lr = 0x8232EDC8;
	sub_82339278(ctx, base);
loc_8232EDC8:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
loc_8232EDD0:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x8232ed48
	if (!ctx.cr6.lt) goto loc_8232ED48;
loc_8232EDE4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8232EDF0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8232EE00"))) PPC_WEAK_FUNC(sub_8232EE00);
PPC_FUNC_IMPL(__imp__sub_8232EE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8232EE08;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ee7c
	if (ctx.cr6.eq) goto loc_8232EE7C;
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x8232ee54
	if (ctx.cr0.lt) goto loc_8232EE54;
loc_8232EE40:
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339628
	ctx.lr = 0x8232EE4C;
	sub_82339628(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8232ee40
	if (!ctx.cr0.lt) goto loc_8232EE40;
loc_8232EE54:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ee70
	if (ctx.cr6.eq) goto loc_8232EE70;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,93
	ctx.r4.u64 = ctx.r4.u64 | 93;
	// bl 0x8232d158
	ctx.lr = 0x8232EE70;
	sub_8232D158(ctx, base);
loc_8232EE70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8232EE7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339628
	ctx.lr = 0x8232EE84;
	sub_82339628(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232eea0
	if (ctx.cr6.eq) goto loc_8232EEA0;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32814
	ctx.r4.u64 = ctx.r4.u64 | 32814;
	// bl 0x8232d158
	ctx.lr = 0x8232EEA0;
	sub_8232D158(ctx, base);
loc_8232EEA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8232EEAC"))) PPC_WEAK_FUNC(sub_8232EEAC);
PPC_FUNC_IMPL(__imp__sub_8232EEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232EEB0"))) PPC_WEAK_FUNC(sub_8232EEB0);
PPC_FUNC_IMPL(__imp__sub_8232EEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8232e998
	ctx.lr = 0x8232EED0;
	sub_8232E998(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232eef0
	if (ctx.cr6.eq) goto loc_8232EEF0;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32806
	ctx.r4.u64 = ctx.r4.u64 | 32806;
	// bl 0x8232d158
	ctx.lr = 0x8232EEEC;
	sub_8232D158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8232EEF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EF08"))) PPC_WEAK_FUNC(sub_8232EF08);
PPC_FUNC_IMPL(__imp__sub_8232EF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8232ef5c
	if (ctx.cr6.eq) goto loc_8232EF5C;
	// clrlwi r30,r5,16
	ctx.r30.u64 = ctx.r5.u32 & 0xFFFF;
loc_8232EF30:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8232ef78
	if (ctx.cr6.eq) goto loc_8232EF78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232EF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8232ef30
	if (!ctx.cr6.eq) goto loc_8232EF30;
loc_8232EF5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232EF60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8232EF78:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8232ef60
	goto loc_8232EF60;
}

__attribute__((alias("__imp__sub_8232EF80"))) PPC_WEAK_FUNC(sub_8232EF80);
PPC_FUNC_IMPL(__imp__sub_8232EF80) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4196
	ctx.r12.s64 = ctx.r12.s64 + -4196;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8232EF9C"))) PPC_WEAK_FUNC(sub_8232EF9C);
PPC_FUNC_IMPL(__imp__sub_8232EF9C) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-4108(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4108);
	// lwz r17,-4092(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4092);
	// lwz r17,-4076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4076);
	// lwz r17,-4060(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4060);
	// lwz r17,-4044(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4044);
	// lwz r17,-4028(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4028);
	// lwz r17,-4012(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4012);
	// lwz r17,-3996(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3996);
	// lwz r17,-3980(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3980);
	// lwz r17,-3964(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3964);
	// lwz r17,-3948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3948);
	// lwz r17,-3932(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3932);
	// lwz r17,-3916(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3916);
	// lwz r17,-3900(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3900);
	// lwz r17,-3892(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3892);
	// lwz r17,-3884(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3884);
	// lwz r17,-3876(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3876);
	// lwz r17,-3868(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3868);
	// lwz r17,-3860(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3860);
	// lwz r17,-3852(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3852);
	// lwz r17,-3844(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3844);
	// lwz r17,-3836(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3836);
	// li r11,20
	ctx.r11.s64 = 20;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F004"))) PPC_WEAK_FUNC(sub_8232F004);
PPC_FUNC_IMPL(__imp__sub_8232F004) {
	PPC_FUNC_PROLOGUE();
	// li r11,24
	ctx.r11.s64 = 24;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F014"))) PPC_WEAK_FUNC(sub_8232F014);
PPC_FUNC_IMPL(__imp__sub_8232F014) {
	PPC_FUNC_PROLOGUE();
	// li r11,28
	ctx.r11.s64 = 28;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F024"))) PPC_WEAK_FUNC(sub_8232F024);
PPC_FUNC_IMPL(__imp__sub_8232F024) {
	PPC_FUNC_PROLOGUE();
	// li r11,32
	ctx.r11.s64 = 32;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F034"))) PPC_WEAK_FUNC(sub_8232F034);
PPC_FUNC_IMPL(__imp__sub_8232F034) {
	PPC_FUNC_PROLOGUE();
	// li r11,36
	ctx.r11.s64 = 36;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F044"))) PPC_WEAK_FUNC(sub_8232F044);
PPC_FUNC_IMPL(__imp__sub_8232F044) {
	PPC_FUNC_PROLOGUE();
	// li r11,40
	ctx.r11.s64 = 40;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F054"))) PPC_WEAK_FUNC(sub_8232F054);
PPC_FUNC_IMPL(__imp__sub_8232F054) {
	PPC_FUNC_PROLOGUE();
	// li r11,44
	ctx.r11.s64 = 44;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F064"))) PPC_WEAK_FUNC(sub_8232F064);
PPC_FUNC_IMPL(__imp__sub_8232F064) {
	PPC_FUNC_PROLOGUE();
	// li r11,48
	ctx.r11.s64 = 48;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F074"))) PPC_WEAK_FUNC(sub_8232F074);
PPC_FUNC_IMPL(__imp__sub_8232F074) {
	PPC_FUNC_PROLOGUE();
	// li r11,52
	ctx.r11.s64 = 52;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F084"))) PPC_WEAK_FUNC(sub_8232F084);
PPC_FUNC_IMPL(__imp__sub_8232F084) {
	PPC_FUNC_PROLOGUE();
	// li r11,56
	ctx.r11.s64 = 56;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F094"))) PPC_WEAK_FUNC(sub_8232F094);
PPC_FUNC_IMPL(__imp__sub_8232F094) {
	PPC_FUNC_PROLOGUE();
	// li r11,60
	ctx.r11.s64 = 60;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F0A4"))) PPC_WEAK_FUNC(sub_8232F0A4);
PPC_FUNC_IMPL(__imp__sub_8232F0A4) {
	PPC_FUNC_PROLOGUE();
	// li r11,64
	ctx.r11.s64 = 64;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F0B4"))) PPC_WEAK_FUNC(sub_8232F0B4);
PPC_FUNC_IMPL(__imp__sub_8232F0B4) {
	PPC_FUNC_PROLOGUE();
	// li r11,68
	ctx.r11.s64 = 68;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F0C4"))) PPC_WEAK_FUNC(sub_8232F0C4);
PPC_FUNC_IMPL(__imp__sub_8232F0C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F0CC"))) PPC_WEAK_FUNC(sub_8232F0CC);
PPC_FUNC_IMPL(__imp__sub_8232F0CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F0D4"))) PPC_WEAK_FUNC(sub_8232F0D4);
PPC_FUNC_IMPL(__imp__sub_8232F0D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F0DC"))) PPC_WEAK_FUNC(sub_8232F0DC);
PPC_FUNC_IMPL(__imp__sub_8232F0DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F0E4"))) PPC_WEAK_FUNC(sub_8232F0E4);
PPC_FUNC_IMPL(__imp__sub_8232F0E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F0EC"))) PPC_WEAK_FUNC(sub_8232F0EC);
PPC_FUNC_IMPL(__imp__sub_8232F0EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F0F4"))) PPC_WEAK_FUNC(sub_8232F0F4);
PPC_FUNC_IMPL(__imp__sub_8232F0F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F0FC"))) PPC_WEAK_FUNC(sub_8232F0FC);
PPC_FUNC_IMPL(__imp__sub_8232F0FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F104"))) PPC_WEAK_FUNC(sub_8232F104);
PPC_FUNC_IMPL(__imp__sub_8232F104) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F10C"))) PPC_WEAK_FUNC(sub_8232F10C);
PPC_FUNC_IMPL(__imp__sub_8232F10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232F110"))) PPC_WEAK_FUNC(sub_8232F110);
PPC_FUNC_IMPL(__imp__sub_8232F110) {
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
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232f158
	if (ctx.cr6.eq) goto loc_8232F158;
	// bl 0x8232ef80
	ctx.lr = 0x8232F130;
	sub_8232EF80(ctx, base);
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8232F158:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F16C"))) PPC_WEAK_FUNC(sub_8232F16C);
PPC_FUNC_IMPL(__imp__sub_8232F16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232F170"))) PPC_WEAK_FUNC(sub_8232F170);
PPC_FUNC_IMPL(__imp__sub_8232F170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,23696
	ctx.r10.s64 = ctx.r11.s64 + 23696;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8232f1c0
	if (ctx.cr6.eq) goto loc_8232F1C0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8232F1B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
loc_8232F1C0:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lis r11,8324
	ctx.r11.s64 = 545521664;
	// ori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 | 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232f1dc
	if (ctx.cr6.eq) goto loc_8232F1DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8232d158
	ctx.lr = 0x8232F1DC;
	sub_8232D158(ctx, base);
loc_8232F1DC:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232f1f0
	if (ctx.cr6.eq) goto loc_8232F1F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8232d158
	ctx.lr = 0x8232F1F0;
	sub_8232D158(ctx, base);
loc_8232F1F0:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232f204
	if (ctx.cr6.eq) goto loc_8232F204;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8232d158
	ctx.lr = 0x8232F204;
	sub_8232D158(ctx, base);
loc_8232F204:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232f218
	if (ctx.cr6.eq) goto loc_8232F218;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8232d158
	ctx.lr = 0x8232F218;
	sub_8232D158(ctx, base);
loc_8232F218:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232f254
	if (ctx.cr6.eq) goto loc_8232F254;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8232f250
	if (ctx.cr6.eq) goto loc_8232F250;
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
	ctx.lr = 0x8232F24C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8232f254
	goto loc_8232F254;
loc_8232F250:
	// bl 0x82080060
	ctx.lr = 0x8232F254;
	sub_82080060(ctx, base);
loc_8232F254:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,22136
	ctx.r10.s64 = ctx.r11.s64 + 22136;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F278"))) PPC_WEAK_FUNC(sub_8232F278);
PPC_FUNC_IMPL(__imp__sub_8232F278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8232F280;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r27,r11,204
	ctx.r27.s64 = ctx.r11.s64 + 204;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8232F29C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,18(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8232f3ac
	if (ctx.cr6.eq) goto loc_8232F3AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F2D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r5,23(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 23);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8232a338
	ctx.lr = 0x8232F2E8;
	sub_8232A338(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r30,r3,1,15,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232F300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhzx r4,r3,r30
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r30.u32);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x8232f3ac
	if (ctx.cr6.eq) goto loc_8232F3AC;
loc_8232F30C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232F33C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8232F340:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x8232f364
	if (ctx.cr6.eq) goto loc_8232F364;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8232f340
	if (ctx.cr6.eq) goto loc_8232F340;
loc_8232F364:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8232f390
	if (ctx.cr6.eq) goto loc_8232F390;
	// lhz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// bne cr6,0x8232f30c
	if (!ctx.cr6.eq) goto loc_8232F30C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8232F384;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8232F390:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8232F3AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8232F3B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8232F3C0"))) PPC_WEAK_FUNC(sub_8232F3C0);
PPC_FUNC_IMPL(__imp__sub_8232F3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8232F3C8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r27,r11,204
	ctx.r27.s64 = ctx.r11.s64 + 204;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8232F3E4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,18(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8232f514
	if (ctx.cr6.eq) goto loc_8232F514;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,21(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8232f514
	if (ctx.cr6.eq) goto loc_8232F514;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r5,25(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 25);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8232a338
	ctx.lr = 0x8232F450;
	sub_8232A338(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r30,r3,1,15,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232F468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhzx r4,r3,r30
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r30.u32);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x8232f514
	if (ctx.cr6.eq) goto loc_8232F514;
loc_8232F474:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232F4A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8232F4A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x8232f4cc
	if (ctx.cr6.eq) goto loc_8232F4CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8232f4a8
	if (ctx.cr6.eq) goto loc_8232F4A8;
loc_8232F4CC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8232f4f8
	if (ctx.cr6.eq) goto loc_8232F4F8;
	// lhz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// bne cr6,0x8232f474
	if (!ctx.cr6.eq) goto loc_8232F474;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8232F4EC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8232F4F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8232F514:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8232F51C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8232F528"))) PPC_WEAK_FUNC(sub_8232F528);
PPC_FUNC_IMPL(__imp__sub_8232F528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x8232F530;
	sub_82248764(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F55C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r30,21(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 21);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232F574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,8324
	ctx.r7.s64 = 545521664;
	// lhz r3,19(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r27,r7,1
	ctx.r27.u64 = ctx.r7.u64 | 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rotlwi r3,r3,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// bl 0x8232d150
	ctx.lr = 0x8232F594;
	sub_8232D150(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8232f5b0
	if (!ctx.cr6.eq) goto loc_8232F5B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b4
	// ERROR 822487B4
	return;
loc_8232F5B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,19(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rotlwi r3,r9,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x8232d150
	ctx.lr = 0x8232F5DC;
	sub_8232D150(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232f864
	if (ctx.cr6.eq) goto loc_8232F864;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,19(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rotlwi r3,r9,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x8232d150
	ctx.lr = 0x8232F614;
	sub_8232D150(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232f864
	if (ctx.cr6.eq) goto loc_8232F864;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,19(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rotlwi r3,r9,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x8232d150
	ctx.lr = 0x8232F64C;
	sub_8232D150(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232f864
	if (ctx.cr6.eq) goto loc_8232F864;
	// clrlwi r20,r30,16
	ctx.r20.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8232f6dc
	if (ctx.cr6.eq) goto loc_8232F6DC;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8232f688
	if (ctx.cr6.gt) goto loc_8232F688;
	// rlwinm r11,r20,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xFFFFFF00;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8232f68c
	if (!ctx.cr6.gt) goto loc_8232F68C;
loc_8232F688:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8232F68C:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,91
	ctx.r4.u64 = ctx.r4.u64 | 91;
	// bl 0x8232d150
	ctx.lr = 0x8232F6A0;
	sub_8232D150(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232f864
	if (ctx.cr6.eq) goto loc_8232F864;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// addic. r30,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r30.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// blt 0x8232f6d0
	if (ctx.cr0.lt) goto loc_8232F6D0;
loc_8232F6BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d328
	ctx.lr = 0x8232F6C4;
	sub_8232D328(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// bge 0x8232f6bc
	if (!ctx.cr0.lt) goto loc_8232F6BC;
loc_8232F6D0:
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8232f864
	if (ctx.cr6.eq) goto loc_8232F864;
loc_8232F6DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,19(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x82248f70
	ctx.lr = 0x8232F704;
	sub_82248F70(ctx, base);
	// stw r26,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r26.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8232F71C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r6,19(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// bl 0x82248f70
	ctx.lr = 0x8232F730;
	sub_82248F70(ctx, base);
	// stw r25,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r25.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,44(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8232F748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,19(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82248f70
	ctx.lr = 0x8232F75C;
	sub_82248F70(ctx, base);
	// stw r24,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r24.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8232F778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,19(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8232f7e4
	if (ctx.cr6.eq) goto loc_8232F7E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// addi r28,r11,22672
	ctx.r28.s64 = ctx.r11.s64 + 22672;
loc_8232F790:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F7A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r30,r6,16
	ctx.r30.u64 = ctx.r6.u32 & 0xFFFF;
	// lfsx f0,r9,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,44(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// stfsx f0,r7,r23
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r23.u32, temp.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8232F7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r4,19(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8232f790
	if (ctx.cr6.lt) goto loc_8232F790;
loc_8232F7E4:
	// stw r23,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r23.u32);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_8232F7EC:
	// clrlwi r29,r30,16
	ctx.r29.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8232f854
	if (!ctx.cr6.lt) goto loc_8232F854;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8232f844
	if (ctx.cr6.lt) goto loc_8232F844;
	// rlwinm r11,r29,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x8232d160
	ctx.lr = 0x8232F844;
	sub_8232D160(ctx, base);
loc_8232F844:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bge cr6,0x8232f7ec
	if (!ctx.cr6.lt) goto loc_8232F7EC;
loc_8232F854:
	// stw r22,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r22.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b4
	// ERROR 822487B4
	return;
loc_8232F864:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// bl 0x8232d158
	ctx.lr = 0x8232F878;
	sub_8232D158(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8232f88c
	if (ctx.cr6.eq) goto loc_8232F88C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8232d158
	ctx.lr = 0x8232F88C;
	sub_8232D158(ctx, base);
loc_8232F88C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8232f8a0
	if (ctx.cr6.eq) goto loc_8232F8A0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8232d158
	ctx.lr = 0x8232F8A0;
	sub_8232D158(ctx, base);
loc_8232F8A0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8232f8b4
	if (ctx.cr6.eq) goto loc_8232F8B4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232d158
	ctx.lr = 0x8232F8B4;
	sub_8232D158(ctx, base);
loc_8232F8B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_8232F8C0"))) PPC_WEAK_FUNC(sub_8232F8C0);
PPC_FUNC_IMPL(__imp__sub_8232F8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8232F8C8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f934
	if (ctx.cr6.eq) goto loc_8232F934;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x8232f90c
	if (ctx.cr0.lt) goto loc_8232F90C;
loc_8232F8F8:
	// addi r30,r30,-256
	ctx.r30.s64 = ctx.r30.s64 + -256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d3a0
	ctx.lr = 0x8232F904;
	sub_8232D3A0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8232f8f8
	if (!ctx.cr0.lt) goto loc_8232F8F8;
loc_8232F90C:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f928
	if (ctx.cr6.eq) goto loc_8232F928;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,91
	ctx.r4.u64 = ctx.r4.u64 | 91;
	// bl 0x8232d158
	ctx.lr = 0x8232F928;
	sub_8232D158(ctx, base);
loc_8232F928:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8232F934:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d3a0
	ctx.lr = 0x8232F93C;
	sub_8232D3A0(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f958
	if (ctx.cr6.eq) goto loc_8232F958;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32812
	ctx.r4.u64 = ctx.r4.u64 | 32812;
	// bl 0x8232d158
	ctx.lr = 0x8232F958;
	sub_8232D158(ctx, base);
loc_8232F958:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8232F964"))) PPC_WEAK_FUNC(sub_8232F964);
PPC_FUNC_IMPL(__imp__sub_8232F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232F968"))) PPC_WEAK_FUNC(sub_8232F968);
PPC_FUNC_IMPL(__imp__sub_8232F968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8232f9c0
	if (ctx.cr6.eq) goto loc_8232F9C0;
loc_8232F988:
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8232F9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8232f988
	if (!ctx.cr6.eq) goto loc_8232F988;
loc_8232F9C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F9D4"))) PPC_WEAK_FUNC(sub_8232F9D4);
PPC_FUNC_IMPL(__imp__sub_8232F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232F9D8"))) PPC_WEAK_FUNC(sub_8232F9D8);
PPC_FUNC_IMPL(__imp__sub_8232F9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8232fa30
	if (ctx.cr6.eq) goto loc_8232FA30;
loc_8232F9F8:
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8232FA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8232f9f8
	if (!ctx.cr6.eq) goto loc_8232F9F8;
loc_8232FA30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FA44"))) PPC_WEAK_FUNC(sub_8232FA44);
PPC_FUNC_IMPL(__imp__sub_8232FA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232FA48"))) PPC_WEAK_FUNC(sub_8232FA48);
PPC_FUNC_IMPL(__imp__sub_8232FA48) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r7,r3,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// addi r6,r9,22672
	ctx.r6.s64 = ctx.r9.s64 + 22672;
	// rlwinm r5,r30,2,14,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// lfsx f0,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r5,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FAB8"))) PPC_WEAK_FUNC(sub_8232FAB8);
PPC_FUNC_IMPL(__imp__sub_8232FAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// addi r9,r10,23696
	ctx.r9.s64 = ctx.r10.s64 + 23696;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// sth r11,108(r3)
	PPC_STORE_U16(ctx.r3.u32 + 108, ctx.r11.u16);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FB00"))) PPC_WEAK_FUNC(sub_8232FB00);
PPC_FUNC_IMPL(__imp__sub_8232FB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8232f170
	ctx.lr = 0x8232FB20;
	sub_8232F170(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232fb40
	if (ctx.cr6.eq) goto loc_8232FB40;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32885
	ctx.r4.u64 = ctx.r4.u64 | 32885;
	// bl 0x8232d158
	ctx.lr = 0x8232FB3C;
	sub_8232D158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8232FB40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FB58"))) PPC_WEAK_FUNC(sub_8232FB58);
PPC_FUNC_IMPL(__imp__sub_8232FB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8232FB60;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r24,r11,204
	ctx.r24.s64 = ctx.r11.s64 + 204;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8232FB7C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r4,1(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 1);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8232FB9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lhz r23,3(r3)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r3.u32 + 3);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lhz r4,1(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + 1);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8232FBBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lhz r22,1(r3)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lhz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232FBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// clrlwi r25,r9,30
	ctx.r25.u64 = ctx.r9.u32 & 0x3;
	// lhz r27,1(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 1);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,65535
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 65535, ctx.xer);
	// beq cr6,0x8232ff78
	if (ctx.cr6.eq) goto loc_8232FF78;
loc_8232FBF8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x8232feb8
	if (ctx.cr6.eq) goto loc_8232FEB8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232FC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8232feb8
	if (ctx.cr6.lt) goto loc_8232FEB8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FC64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bgt cr6,0x8232ff78
	if (ctx.cr6.gt) goto loc_8232FF78;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232ff14
	if (ctx.cr6.eq) goto loc_8232FF14;
	// bdz 0x8232fef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8232FEF4;
	// bdz 0x8232fc94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8232FC94;
	// bdz 0x8232fd2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8232FD2C;
	// bdz 0x8232fdf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8232FDF0;
	// bdz 0x8232ff78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8232FF78;
	// bdz 0x8232ff78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8232FF78;
	// b 0x8232ff78
	goto loc_8232FF78;
loc_8232FC94:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 + 88;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232feb8
	if (ctx.cr6.eq) goto loc_8232FEB8;
loc_8232FCA8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r29,-12
	ctx.r31.s64 = ctx.r29.s64 + -12;
	// bne cr6,0x8232fcb8
	if (!ctx.cr6.eq) goto loc_8232FCB8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8232FCB8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8232fd14
	if (ctx.cr6.eq) goto loc_8232FD14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FCD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8232fd14
	if (!ctx.cr6.eq) goto loc_8232FD14;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232fd14
	if (ctx.cr6.eq) goto loc_8232FD14;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8232fd14
	if (ctx.cr6.eq) goto loc_8232FD14;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1);
	// bl 0x8232ef08
	ctx.lr = 0x8232FD0C;
	sub_8232EF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ff28
	if (!ctx.cr6.eq) goto loc_8232FF28;
loc_8232FD14:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232fca8
	if (!ctx.cr6.eq) goto loc_8232FCA8;
	// b 0x8232feb8
	goto loc_8232FEB8;
loc_8232FD2C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 + 88;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232feb0
	if (ctx.cr6.eq) goto loc_8232FEB0;
loc_8232FD40:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r29,-12
	ctx.r31.s64 = ctx.r29.s64 + -12;
	// bne cr6,0x8232fd50
	if (!ctx.cr6.eq) goto loc_8232FD50;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8232FD50:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8232fdd8
	if (ctx.cr6.eq) goto loc_8232FDD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FD70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8232fdd8
	if (!ctx.cr6.eq) goto loc_8232FDD8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232fdd8
	if (ctx.cr6.eq) goto loc_8232FDD8;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8232fdd8
	if (ctx.cr6.eq) goto loc_8232FDD8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1);
	// bl 0x8232ef08
	ctx.lr = 0x8232FDA4;
	sub_8232EF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232fdd8
	if (ctx.cr6.eq) goto loc_8232FDD8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232ff28
	if (ctx.cr6.eq) goto loc_8232FF28;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8232fdd4
	if (ctx.cr6.eq) goto loc_8232FDD4;
	// lwz r10,56(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8232fdd8
	if (!ctx.cr6.lt) goto loc_8232FDD8;
loc_8232FDD4:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8232FDD8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232fd40
	if (!ctx.cr6.eq) goto loc_8232FD40;
	// b 0x8232feb0
	goto loc_8232FEB0;
loc_8232FDF0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 + 88;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232feb0
	if (ctx.cr6.eq) goto loc_8232FEB0;
loc_8232FE04:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r29,-12
	ctx.r31.s64 = ctx.r29.s64 + -12;
	// bne cr6,0x8232fe14
	if (!ctx.cr6.eq) goto loc_8232FE14;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8232FE14:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8232fe9c
	if (ctx.cr6.eq) goto loc_8232FE9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8232fe9c
	if (!ctx.cr6.eq) goto loc_8232FE9C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232fe9c
	if (ctx.cr6.eq) goto loc_8232FE9C;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8232fe9c
	if (ctx.cr6.eq) goto loc_8232FE9C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1);
	// bl 0x8232ef08
	ctx.lr = 0x8232FE68;
	sub_8232EF08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232fe9c
	if (ctx.cr6.eq) goto loc_8232FE9C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8232fe98
	if (ctx.cr6.eq) goto loc_8232FE98;
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lbz r7,6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r6,6(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8232fe9c
	if (!ctx.cr6.gt) goto loc_8232FE9C;
loc_8232FE98:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8232FE9C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232fe04
	if (!ctx.cr6.eq) goto loc_8232FE04;
loc_8232FEB0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8232ff34
	if (!ctx.cr6.eq) goto loc_8232FF34;
loc_8232FEB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// bne cr6,0x8232fbf8
	if (!ctx.cr6.eq) goto loc_8232FBF8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8232FEE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8232FEF4:
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8232ca28
	ctx.lr = 0x8232FF00;
	sub_8232CA28(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8232FF08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8232FF14:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8232FF1C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8232FF28:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// b 0x8232ff3c
	goto loc_8232FF3C;
loc_8232FF34:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
loc_8232FF3C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232FF78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232FF78:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8232FF80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8232FF8C"))) PPC_WEAK_FUNC(sub_8232FF8C);
PPC_FUNC_IMPL(__imp__sub_8232FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232FF90"))) PPC_WEAK_FUNC(sub_8232FF90);
PPC_FUNC_IMPL(__imp__sub_8232FF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8232FF98;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r26,r11,204
	ctx.r26.s64 = ctx.r11.s64 + 204;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8232FFB4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FFCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r25,3(r3)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r3.u32 + 3);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232FFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r6,5(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r24,r6,30
	ctx.r24.u64 = ctx.r6.u32 & 0x3;
	// lwz r5,116(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82330000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// beq cr6,0x82330324
	if (ctx.cr6.eq) goto loc_82330324;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,308(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// lhz r9,316(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 316);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r7,116(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r6,252(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwzx r31,r8,r6
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// bctrl 
	ctx.lr = 0x82330034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82330324
	if (ctx.cr6.lt) goto loc_82330324;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82330054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r11,r9,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82330324
	if (ctx.cr6.gt) goto loc_82330324;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823300ac
	if (ctx.cr6.eq) goto loc_823300AC;
	// bdz 0x8233008c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8233008C;
	// bdz 0x823300c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823300C0;
	// bdz 0x8233016c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8233016C;
	// bdz 0x82330228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82330228;
	// bdz 0x82330324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82330324;
	// bdz 0x82330324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82330324;
	// b 0x82330324
	goto loc_82330324;
loc_8233008C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8232ca28
	ctx.lr = 0x82330098;
	sub_8232CA28(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x823300A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823300AC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x823300B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823300C0:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 + 88;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82330324
	if (ctx.cr6.eq) goto loc_82330324;
loc_823300D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r29,-12
	ctx.r31.s64 = ctx.r29.s64 + -12;
	// bne cr6,0x823300e4
	if (!ctx.cr6.eq) goto loc_823300E4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823300E4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82330138
	if (ctx.cr6.eq) goto loc_82330138;
	// lhz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// lhz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 316);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82330138
	if (!ctx.cr6.eq) goto loc_82330138;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82330138
	if (ctx.cr6.eq) goto loc_82330138;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r10,308(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82330138
	if (!ctx.cr6.eq) goto loc_82330138;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233012C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82330160
	if (ctx.cr6.eq) goto loc_82330160;
loc_82330138:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823300d4
	if (!ctx.cr6.eq) goto loc_823300D4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82330154;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82330160:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// b 0x823302f8
	goto loc_823302F8;
loc_8233016C:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 + 88;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82330324
	if (ctx.cr6.eq) goto loc_82330324;
loc_82330180:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r29,-12
	ctx.r31.s64 = ctx.r29.s64 + -12;
	// bne cr6,0x82330190
	if (!ctx.cr6.eq) goto loc_82330190;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82330190:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82330210
	if (ctx.cr6.eq) goto loc_82330210;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823301B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82330210
	if (!ctx.cr6.eq) goto loc_82330210;
	// lhz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// lhz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 316);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82330210
	if (!ctx.cr6.eq) goto loc_82330210;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82330210
	if (ctx.cr6.eq) goto loc_82330210;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r10,308(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82330210
	if (!ctx.cr6.eq) goto loc_82330210;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330210
	if (ctx.cr6.eq) goto loc_82330210;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233020c
	if (ctx.cr6.eq) goto loc_8233020C;
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82330210
	if (!ctx.cr6.lt) goto loc_82330210;
loc_8233020C:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82330210:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82330180
	if (!ctx.cr6.eq) goto loc_82330180;
	// b 0x823302e8
	goto loc_823302E8;
loc_82330228:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r11,88
	ctx.r10.s64 = ctx.r11.s64 + 88;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82330324
	if (ctx.cr6.eq) goto loc_82330324;
loc_8233023C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r29,-12
	ctx.r31.s64 = ctx.r29.s64 + -12;
	// bne cr6,0x8233024c
	if (!ctx.cr6.eq) goto loc_8233024C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8233024C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823302d4
	if (ctx.cr6.eq) goto loc_823302D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233026C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823302d4
	if (!ctx.cr6.eq) goto loc_823302D4;
	// lhz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// lhz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 316);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823302d4
	if (!ctx.cr6.eq) goto loc_823302D4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823302d4
	if (ctx.cr6.eq) goto loc_823302D4;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r10,308(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823302d4
	if (!ctx.cr6.eq) goto loc_823302D4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823302d4
	if (ctx.cr6.eq) goto loc_823302D4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823302d0
	if (ctx.cr6.eq) goto loc_823302D0;
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lbz r7,6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r6,6(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x823302d4
	if (!ctx.cr6.gt) goto loc_823302D4;
loc_823302D0:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_823302D4:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8233023c
	if (!ctx.cr6.eq) goto loc_8233023C;
loc_823302E8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82330324
	if (ctx.cr6.eq) goto loc_82330324;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
loc_823302F8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82330310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82330324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330324:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8233032C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82330338"))) PPC_WEAK_FUNC(sub_82330338);
PPC_FUNC_IMPL(__imp__sub_82330338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82330340;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82330360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823303a8
	if (ctx.cr6.eq) goto loc_823303A8;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r7,252(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r6,116(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// lwzx r29,r8,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82330390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823303a8
	if (ctx.cr6.lt) goto loc_823303A8;
loc_8233039C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823303A8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330444
	if (ctx.cr6.eq) goto loc_82330444;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lhz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// beq cr6,0x82330444
	if (ctx.cr6.eq) goto loc_82330444;
loc_823303C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823303E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x8233041c
	if (ctx.cr6.eq) goto loc_8233041C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82330410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8233039c
	if (!ctx.cr6.lt) goto loc_8233039C;
loc_8233041C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82330434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,65535
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 65535, ctx.xer);
	// bne cr6,0x823303c8
	if (!ctx.cr6.eq) goto loc_823303C8;
loc_82330444:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82330450"))) PPC_WEAK_FUNC(sub_82330450);
PPC_FUNC_IMPL(__imp__sub_82330450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// stb r9,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r9.u8);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330478"))) PPC_WEAK_FUNC(sub_82330478);
PPC_FUNC_IMPL(__imp__sub_82330478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82330498"))) PPC_WEAK_FUNC(sub_82330498);
PPC_FUNC_IMPL(__imp__sub_82330498) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x823304a8
	if (ctx.cr6.lt) goto loc_823304A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x823304ac
	if (ctx.cr6.eq) goto loc_823304AC;
loc_823304A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823304AC:
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823304B4"))) PPC_WEAK_FUNC(sub_823304B4);
PPC_FUNC_IMPL(__imp__sub_823304B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823304B8"))) PPC_WEAK_FUNC(sub_823304B8);
PPC_FUNC_IMPL(__imp__sub_823304B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8232f968
	sub_8232F968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823304C8"))) PPC_WEAK_FUNC(sub_823304C8);
PPC_FUNC_IMPL(__imp__sub_823304C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823304CC"))) PPC_WEAK_FUNC(sub_823304CC);
PPC_FUNC_IMPL(__imp__sub_823304CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823304D0"))) PPC_WEAK_FUNC(sub_823304D0);
PPC_FUNC_IMPL(__imp__sub_823304D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8232f9d8
	sub_8232F9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823304E0"))) PPC_WEAK_FUNC(sub_823304E0);
PPC_FUNC_IMPL(__imp__sub_823304E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823304E4"))) PPC_WEAK_FUNC(sub_823304E4);
PPC_FUNC_IMPL(__imp__sub_823304E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823304E8"))) PPC_WEAK_FUNC(sub_823304E8);
PPC_FUNC_IMPL(__imp__sub_823304E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330538
	if (ctx.cr6.eq) goto loc_82330538;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82330520
	if (ctx.cr6.eq) goto loc_82330520;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8232d158
	ctx.lr = 0x82330520;
	sub_8232D158(ctx, base);
loc_82330520:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8232d158
	ctx.lr = 0x82330530;
	sub_8232D158(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
loc_82330538:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233054C"))) PPC_WEAK_FUNC(sub_8233054C);
PPC_FUNC_IMPL(__imp__sub_8233054C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82330550"))) PPC_WEAK_FUNC(sub_82330550);
PPC_FUNC_IMPL(__imp__sub_82330550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82330568
	if (ctx.cr6.lt) goto loc_82330568;
	// li r3,2400
	ctx.r3.s64 = 2400;
	// blr 
	return;
loc_82330568:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82330580
	if (ctx.cr6.gt) goto loc_82330580;
	// li r3,-2400
	ctx.r3.s64 = -2400;
	// blr 
	return;
loc_82330580:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28092);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r3,-10(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233059C"))) PPC_WEAK_FUNC(sub_8233059C);
PPC_FUNC_IMPL(__imp__sub_8233059C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823305A0"))) PPC_WEAK_FUNC(sub_823305A0);
PPC_FUNC_IMPL(__imp__sub_823305A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823305A8;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,308(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233060c
	if (ctx.cr6.eq) goto loc_8233060C;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82248f70
	ctx.lr = 0x823305D0;
	sub_82248F70(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// rldicr r8,r10,8,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lhz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// stw r31,95(r1)
	PPC_STORE_U32(ctx.r1.u32 + 95, ctx.r31.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stw r30,91(r1)
	PPC_STORE_U32(ctx.r1.u32 + 91, ctx.r30.u32);
	// rldicr r7,r7,24,39
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 24) & 0xFFFFFFFFFF000000;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// sth r11,89(r1)
	PPC_STORE_U16(ctx.r1.u32 + 89, ctx.r11.u16);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8232c6b8
	ctx.lr = 0x8233060C;
	sub_8232C6B8(ctx, base);
loc_8233060C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82330614"))) PPC_WEAK_FUNC(sub_82330614);
PPC_FUNC_IMPL(__imp__sub_82330614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82330618"))) PPC_WEAK_FUNC(sub_82330618);
PPC_FUNC_IMPL(__imp__sub_82330618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82330620;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,204
	ctx.r30.s64 = ctx.r11.s64 + 204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82330638;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8232a758
	ctx.lr = 0x82330640;
	sub_8232A758(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82330664
	if (ctx.cr6.lt) goto loc_82330664;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82330664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330664:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8233066C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82330678"))) PPC_WEAK_FUNC(sub_82330678);
PPC_FUNC_IMPL(__imp__sub_82330678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82330680;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r11,204
	ctx.r28.s64 = ctx.r11.s64 + 204;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8233069C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823306B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82330738
	if (!ctx.cr6.eq) goto loc_82330738;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823306D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823306f8
	if (ctx.cr6.eq) goto loc_823306F8;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82330738
	if (ctx.cr6.eq) goto loc_82330738;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330738
	if (ctx.cr6.eq) goto loc_82330738;
loc_823306F8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82330710
	if (ctx.cr6.lt) goto loc_82330710;
	// bne cr6,0x82330710
	if (!ctx.cr6.eq) goto loc_82330710;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x82330714
	goto loc_82330714;
loc_82330710:
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_82330714:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82330738
	if (ctx.cr6.eq) goto loc_82330738;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8233bd98
	ctx.lr = 0x82330734;
	sub_8233BD98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82330738:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82330740;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8233074C"))) PPC_WEAK_FUNC(sub_8233074C);
PPC_FUNC_IMPL(__imp__sub_8233074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82330750"))) PPC_WEAK_FUNC(sub_82330750);
PPC_FUNC_IMPL(__imp__sub_82330750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82330758;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r11,204
	ctx.r28.s64 = ctx.r11.s64 + 204;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82330774;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823307d0
	if (ctx.cr6.eq) goto loc_823307D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82330798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823307c0
	if (ctx.cr6.eq) goto loc_823307C0;
	// lis r30,-30009
	ctx.r30.s64 = -1966669824;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r30,r30,6
	ctx.r30.u64 = ctx.r30.u64 | 6;
	// bl 0x8241dd3c
	ctx.lr = 0x823307B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823307C0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8233a718
	ctx.lr = 0x823307CC;
	sub_8233A718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823307D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x823307D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823307E4"))) PPC_WEAK_FUNC(sub_823307E4);
PPC_FUNC_IMPL(__imp__sub_823307E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823307E8"))) PPC_WEAK_FUNC(sub_823307E8);
PPC_FUNC_IMPL(__imp__sub_823307E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330868
	if (ctx.cr6.eq) goto loc_82330868;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82330850
	if (ctx.cr6.gt) goto loc_82330850;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8233082c
	// bdzf 4*cr6+eq,0x82330834
	// bdzf 4*cr6+eq,0x8233083c
	// bdzf 4*cr6+eq,0x82330844
	// bne cr6,0x8233084c
	if (!ctx.cr6.eq) goto loc_8233084C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82330850
	goto loc_82330850;
loc_8233082C:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82330850
	goto loc_82330850;
loc_82330834:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82330850
	goto loc_82330850;
loc_8233083C:
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82330850
	goto loc_82330850;
loc_82330844:
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x82330850
	goto loc_82330850;
loc_8233084C:
	// li r3,32
	ctx.r3.s64 = 32;
loc_82330850:
	// lbz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 60);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
	// blr 
	return;
loc_82330868:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330870"))) PPC_WEAK_FUNC(sub_82330870);
PPC_FUNC_IMPL(__imp__sub_82330870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82330878;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,204
	ctx.r31.s64 = ctx.r11.s64 + 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82330894;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823308A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x823308B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823308C0"))) PPC_WEAK_FUNC(sub_823308C0);
PPC_FUNC_IMPL(__imp__sub_823308C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823308E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82330910
	if (ctx.cr6.eq) goto loc_82330910;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8233c3c0
	ctx.lr = 0x823308F8;
	sub_8233C3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82330910
	if (ctx.cr6.eq) goto loc_82330910;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82330910
	if (ctx.cr6.eq) goto loc_82330910;
	// bl 0x8233a878
	ctx.lr = 0x82330910;
	sub_8233A878(ctx, base);
loc_82330910:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82330920
	if (ctx.cr6.eq) goto loc_82330920;
	// bl 0x8233be50
	ctx.lr = 0x82330920;
	sub_8233BE50(ctx, base);
loc_82330920:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330934"))) PPC_WEAK_FUNC(sub_82330934);
PPC_FUNC_IMPL(__imp__sub_82330934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82330938"))) PPC_WEAK_FUNC(sub_82330938);
PPC_FUNC_IMPL(__imp__sub_82330938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233095c
	if (ctx.cr6.eq) goto loc_8233095C;
	// bl 0x8233b118
	ctx.lr = 0x8233095C;
	sub_8233B118(ctx, base);
loc_8233095C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82330970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233099c
	if (ctx.cr6.eq) goto loc_8233099C;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233099c
	if (ctx.cr6.eq) goto loc_8233099C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// bl 0x82333408
	ctx.lr = 0x8233099C;
	sub_82333408(ctx, base);
loc_8233099C:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823309e0
	if (ctx.cr6.eq) goto loc_823309E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823309BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823309e0
	if (ctx.cr6.eq) goto loc_823309E0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823309E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823309E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823309F4"))) PPC_WEAK_FUNC(sub_823309F4);
PPC_FUNC_IMPL(__imp__sub_823309F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823309F8"))) PPC_WEAK_FUNC(sub_823309F8);
PPC_FUNC_IMPL(__imp__sub_823309F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330A08"))) PPC_WEAK_FUNC(sub_82330A08);
PPC_FUNC_IMPL(__imp__sub_82330A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82330a18
	if (ctx.cr6.eq) goto loc_82330A18;
	// b 0x8233a820
	sub_8233A820(ctx, base);
	return;
loc_82330A18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330A20"))) PPC_WEAK_FUNC(sub_82330A20);
PPC_FUNC_IMPL(__imp__sub_82330A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82330A28;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r26,r11,204
	ctx.r26.s64 = ctx.r11.s64 + 204;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82330A44;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330a6c
	if (ctx.cr6.eq) goto loc_82330A6C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82330A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82330a70
	goto loc_82330A70;
loc_82330A6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82330A70:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// lis r9,8324
	ctx.r9.s64 = 545521664;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r29,r9,1
	ctx.r29.u64 = ctx.r9.u64 | 1;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,316
	ctx.r3.s64 = ctx.r11.s64 + 316;
	// bl 0x82086c98
	ctx.lr = 0x82330A94;
	sub_82086C98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82330b0c
	if (ctx.cr6.eq) goto loc_82330B0C;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82330AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// addi r4,r30,272
	ctx.r4.s64 = ctx.r30.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82330ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,288
	ctx.r4.s64 = ctx.r30.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,112(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82330AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82330B00;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82330B0C:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// bl 0x8241dd3c
	ctx.lr = 0x82330B1C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82330B28"))) PPC_WEAK_FUNC(sub_82330B28);
PPC_FUNC_IMPL(__imp__sub_82330B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82330B30;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r25,r11,204
	ctx.r25.s64 = ctx.r11.s64 + 204;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82330B54;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8232a758
	ctx.lr = 0x82330B5C;
	sub_8232A758(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82330c70
	if (ctx.cr6.lt) goto loc_82330C70;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82330b78
	if (ctx.cr6.eq) goto loc_82330B78;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// ble cr6,0x82330b94
	if (!ctx.cr6.gt) goto loc_82330B94;
loc_82330B78:
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// bl 0x8241dd3c
	ctx.lr = 0x82330B88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82330B94:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82330BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82330bd4
	if (ctx.cr6.eq) goto loc_82330BD4;
loc_82330BB8:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// bl 0x8241dd3c
	ctx.lr = 0x82330BC8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82330BD4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82330bb8
	if (ctx.cr6.eq) goto loc_82330BB8;
	// lhz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82330c34
	if (ctx.cr6.eq) goto loc_82330C34;
	// mullw r11,r30,r29
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8232d150
	ctx.lr = 0x82330C04;
	sub_8232D150(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82330c84
	if (ctx.cr6.eq) goto loc_82330C84;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82330c2c
	if (ctx.cr6.eq) goto loc_82330C2C;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8232d158
	ctx.lr = 0x82330C2C;
	sub_8232D158(ctx, base);
loc_82330C2C:
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// sth r30,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r30.u16);
loc_82330C34:
	// mullw r11,r30,r29
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82248a40
	ctx.lr = 0x82330C48;
	sub_82248A40(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82330c70
	if (ctx.cr6.eq) goto loc_82330C70;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233a9a8
	ctx.lr = 0x82330C6C;
	sub_8233A9A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82330C70:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82330C78;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82330C84:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// bl 0x8241dd3c
	ctx.lr = 0x82330C94;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82330CA0"))) PPC_WEAK_FUNC(sub_82330CA0);
PPC_FUNC_IMPL(__imp__sub_82330CA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8233a878
	sub_8233A878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330CB0"))) PPC_WEAK_FUNC(sub_82330CB0);
PPC_FUNC_IMPL(__imp__sub_82330CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330CB4"))) PPC_WEAK_FUNC(sub_82330CB4);
PPC_FUNC_IMPL(__imp__sub_82330CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82330CB8"))) PPC_WEAK_FUNC(sub_82330CB8);
PPC_FUNC_IMPL(__imp__sub_82330CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82330cec
	if (ctx.cr6.eq) goto loc_82330CEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r4,316(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 316);
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// bl 0x82333408
	ctx.lr = 0x82330CEC;
	sub_82333408(ctx, base);
loc_82330CEC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823305a0
	ctx.lr = 0x82330CF8;
	sub_823305A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330D0C"))) PPC_WEAK_FUNC(sub_82330D0C);
PPC_FUNC_IMPL(__imp__sub_82330D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82330D10"))) PPC_WEAK_FUNC(sub_82330D10);
PPC_FUNC_IMPL(__imp__sub_82330D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r4,316(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 316);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82330d4c
	if (ctx.cr6.eq) goto loc_82330D4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// bl 0x823333d8
	ctx.lr = 0x82330D40;
	sub_823333D8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823305a0
	ctx.lr = 0x82330D4C;
	sub_823305A0(ctx, base);
loc_82330D4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330D60"))) PPC_WEAK_FUNC(sub_82330D60);
PPC_FUNC_IMPL(__imp__sub_82330D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82330D68;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r11,204
	ctx.r28.s64 = ctx.r11.s64 + 204;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82330D84;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82330da0
	if (ctx.cr6.eq) goto loc_82330DA0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8232f3c0
	ctx.lr = 0x82330D9C;
	sub_8232F3C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82330DA0:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82330dfc
	if (ctx.cr6.eq) goto loc_82330DFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82330DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82330df8
	if (ctx.cr6.lt) goto loc_82330DF8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82330df8
	if (ctx.cr6.eq) goto loc_82330DF8;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330dfc
	if (!ctx.cr6.eq) goto loc_82330DFC;
loc_82330DF8:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82330DFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82330E04;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82330E10"))) PPC_WEAK_FUNC(sub_82330E10);
PPC_FUNC_IMPL(__imp__sub_82330E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// addi r10,r3,336
	ctx.r10.s64 = ctx.r3.s64 + 336;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82330e3c
	if (ctx.cr6.eq) goto loc_82330E3C;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
loc_82330E24:
	// lhz r8,248(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 248);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82330e44
	if (ctx.cr6.eq) goto loc_82330E44;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82330e24
	if (!ctx.cr6.eq) goto loc_82330E24;
loc_82330E3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82330E44:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330E4C"))) PPC_WEAK_FUNC(sub_82330E4C);
PPC_FUNC_IMPL(__imp__sub_82330E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82330E50"))) PPC_WEAK_FUNC(sub_82330E50);
PPC_FUNC_IMPL(__imp__sub_82330E50) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82330ef0
	if (ctx.cr6.eq) goto loc_82330EF0;
	// lwz r8,124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r10,r4,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82330f0c
	if (!ctx.cr6.eq) goto loc_82330F0C;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82330eb0
	if (ctx.cr6.eq) goto loc_82330EB0;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82330f0c
	if (ctx.cr6.eq) goto loc_82330F0C;
loc_82330EB0:
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82330ef0
	if (ctx.cr6.eq) goto loc_82330EF0;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82330EBC:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82330EDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r3,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFFC;
	// cmplwi cr6,r7,65535
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 65535, ctx.xer);
	// bne cr6,0x82330ebc
	if (!ctx.cr6.eq) goto loc_82330EBC;
loc_82330EF0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82330EF4:
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
loc_82330F0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82330ef4
	goto loc_82330EF4;
}

__attribute__((alias("__imp__sub_82330F18"))) PPC_WEAK_FUNC(sub_82330F18);
PPC_FUNC_IMPL(__imp__sub_82330F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82330F20;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,352(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82330f80
	if (ctx.cr6.eq) goto loc_82330F80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233d570
	ctx.lr = 0x82330F44;
	sub_8233D570(ctx, base);
	// lwz r31,360(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82330f80
	if (ctx.cr6.lt) goto loc_82330F80;
	// addi r30,r30,356
	ctx.r30.s64 = ctx.r30.s64 + 356;
loc_82330F54:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82330f80
	if (ctx.cr6.eq) goto loc_82330F80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8233d598
	ctx.lr = 0x82330F74;
	sub_8233D598(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82330f54
	if (!ctx.cr6.lt) goto loc_82330F54;
loc_82330F80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82330F88"))) PPC_WEAK_FUNC(sub_82330F88);
PPC_FUNC_IMPL(__imp__sub_82330F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82330F90;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,352(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82330ff0
	if (ctx.cr6.eq) goto loc_82330FF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233ae28
	ctx.lr = 0x82330FB4;
	sub_8233AE28(ctx, base);
	// lwz r31,360(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82330ff0
	if (ctx.cr6.lt) goto loc_82330FF0;
	// addi r30,r30,356
	ctx.r30.s64 = ctx.r30.s64 + 356;
loc_82330FC4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82330ff0
	if (ctx.cr6.eq) goto loc_82330FF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8233ae70
	ctx.lr = 0x82330FE4;
	sub_8233AE70(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82330fc4
	if (!ctx.cr6.lt) goto loc_82330FC4;
loc_82330FF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82330FF8"))) PPC_WEAK_FUNC(sub_82330FF8);
PPC_FUNC_IMPL(__imp__sub_82330FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,22136
	ctx.r9.s64 = ctx.r11.s64 + 22136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82331034
	if (ctx.cr6.eq) goto loc_82331034;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// bl 0x8232d158
	ctx.lr = 0x82331030;
	sub_8232D158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82331034:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331048"))) PPC_WEAK_FUNC(sub_82331048);
PPC_FUNC_IMPL(__imp__sub_82331048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82331050;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,204
	ctx.r29.s64 = ctx.r11.s64 + 204;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82331068;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233107C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823310a4
	if (!ctx.cr6.eq) goto loc_823310A4;
	// lis r30,-30009
	ctx.r30.s64 = -1966669824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r30,r30,6
	ctx.r30.u64 = ctx.r30.u64 | 6;
	// bl 0x8241dd3c
	ctx.lr = 0x82331098;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823310A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82330f88
	ctx.lr = 0x823310B0;
	sub_82330F88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823310c8
	if (ctx.cr6.lt) goto loc_823310C8;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8233bc70
	ctx.lr = 0x823310C4;
	sub_8233BC70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823310C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x823310D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823310DC"))) PPC_WEAK_FUNC(sub_823310DC);
PPC_FUNC_IMPL(__imp__sub_823310DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823310E0"))) PPC_WEAK_FUNC(sub_823310E0);
PPC_FUNC_IMPL(__imp__sub_823310E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823310E8;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r20,r11,204
	ctx.r20.s64 = ctx.r11.s64 + 204;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82331110;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r28,356
	ctx.r27.s64 = ctx.r28.s64 + 356;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82331138
	if (!ctx.cr6.eq) goto loc_82331138;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82331168
	if (ctx.cr6.eq) goto loc_82331168;
loc_82331138:
	// lwz r11,360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
loc_8233113C:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82331168
	if (ctx.cr6.eq) goto loc_82331168;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82331158
	if (!ctx.cr6.eq) goto loc_82331158;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82331158:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233113c
	if (!ctx.cr6.eq) goto loc_8233113C;
loc_82331168:
	// clrlwi r22,r10,24
	ctx.r22.u64 = ctx.r10.u32 & 0xFF;
	// lis r11,8324
	ctx.r11.s64 = 545521664;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// ori r23,r11,1
	ctx.r23.u64 = ctx.r11.u64 | 1;
	// beq cr6,0x823311d0
	if (ctx.cr6.eq) goto loc_823311D0;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8232d150
	ctx.lr = 0x82331194;
	sub_8232D150(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331218
	if (ctx.cr6.eq) goto loc_82331218;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,23780
	ctx.r10.s64 = ctx.r11.s64 + 23780;
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r24.u32);
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// stw r24,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r24.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// bne cr6,0x823311e8
	if (!ctx.cr6.eq) goto loc_823311E8;
loc_823311D0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mullw r30,r26,r25
	ctx.r30.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r25.s32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82331248
	if (ctx.cr6.eq) goto loc_82331248;
loc_823311E8:
	// mullw r30,r26,r25
	ctx.r30.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r25.s32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8232d150
	ctx.lr = 0x82331200;
	sub_8232D150(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82331228
	if (!ctx.cr6.eq) goto loc_82331228;
	// lis r24,-32761
	ctx.r24.s64 = -2147024896;
	// ori r24,r24,14
	ctx.r24.u64 = ctx.r24.u64 | 14;
	// b 0x8233127c
	goto loc_8233127C;
loc_82331218:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lis r24,-32761
	ctx.r24.s64 = -2147024896;
	// ori r24,r24,14
	ctx.r24.u64 = ctx.r24.u64 | 14;
	// b 0x8233127c
	goto loc_8233127C;
loc_82331228:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233123c
	if (ctx.cr6.eq) goto loc_8233123C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8232d158
	ctx.lr = 0x8233123C;
	sub_8232D158(ctx, base);
loc_8233123C:
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_82331248:
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82248a40
	ctx.lr = 0x82331258;
	sub_82248A40(ctx, base);
	// lwz r3,56(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233127c
	if (ctx.cr6.eq) goto loc_8233127C;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8233ae70
	ctx.lr = 0x82331278;
	sub_8233AE70(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_8233127C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x823312e4
	if (ctx.cr6.eq) goto loc_823312E4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x823312b8
	if (ctx.cr6.lt) goto loc_823312B8;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x823312AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_823312B8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823312cc
	if (ctx.cr6.eq) goto loc_823312CC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8232d158
	ctx.lr = 0x823312CC;
	sub_8232D158(ctx, base);
loc_823312CC:
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
	ctx.lr = 0x823312E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823312E4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x823312EC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823312F8"))) PPC_WEAK_FUNC(sub_823312F8);
PPC_FUNC_IMPL(__imp__sub_823312F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82331300;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1200
	ctx.r9.s64 = -1200;
	// stb r27,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r27.u8);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// sth r9,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r9.u16);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// sth r27,12(r4)
	PPC_STORE_U16(ctx.r4.u32 + 12, ctx.r27.u16);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82331468
	if (ctx.cr6.eq) goto loc_82331468;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f13,8328(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lhz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 1);
	// sth r8,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r8.u16);
	// lwz r7,56(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lbz r5,6(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 6);
	// stb r5,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r5.u8);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lfs f0,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82331380
	if (ctx.cr6.lt) goto loc_82331380;
	// li r11,2400
	ctx.r11.s64 = 2400;
	// b 0x823313b0
	goto loc_823313B0;
loc_82331380:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20948);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82331398
	if (ctx.cr6.gt) goto loc_82331398;
	// li r11,-2400
	ctx.r11.s64 = -2400;
	// b 0x823313b0
	goto loc_823313B0;
loc_82331398:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,28092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28092);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
loc_823313B0:
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823313D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// sth r8,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r8.u16);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r7,r11,44
	ctx.r7.s64 = ctx.r11.s64 + 44;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82331468
	if (ctx.cr6.eq) goto loc_82331468;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
loc_823313F8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331410
	if (ctx.cr6.eq) goto loc_82331410;
	// bl 0x82339de8
	ctx.lr = 0x8233140C;
	sub_82339DE8(ctx, base);
	// b 0x82331414
	goto loc_82331414;
loc_82331410:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82331414:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e748
	ctx.lr = 0x82331420;
	sub_8233E748(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r11.u8);
	// bl 0x8233e7b0
	ctx.lr = 0x82331430;
	sub_8233E7B0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r10.u8);
	// bl 0x8233e818
	ctx.lr = 0x82331440;
	sub_8233E818(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r9,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r9.u16);
	// bl 0x8233e860
	ctx.lr = 0x82331450;
	sub_8233E860(ctx, base);
	// sthu r3,12(r30)
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r8,r11,44
	ctx.r8.s64 = ctx.r11.s64 + 44;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823313f8
	if (!ctx.cr6.eq) goto loc_823313F8;
loc_82331468:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82331470"))) PPC_WEAK_FUNC(sub_82331470);
PPC_FUNC_IMPL(__imp__sub_82331470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82331478;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823314a0
	if (!ctx.cr6.eq) goto loc_823314A0;
	// lis r28,-30009
	ctx.r28.s64 = -1966669824;
	// ori r28,r28,10
	ctx.r28.u64 = ctx.r28.u64 | 10;
loc_823314A0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x823315ac
	if (ctx.cr6.lt) goto loc_823315AC;
	// lwz r31,340(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// addi r29,r30,336
	ctx.r29.s64 = ctx.r30.s64 + 336;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823314d8
	if (ctx.cr6.eq) goto loc_823314D8;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
loc_823314C0:
	// lhz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 248);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823315ac
	if (ctx.cr6.eq) goto loc_823315AC;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823314c0
	if (!ctx.cr6.eq) goto loc_823314C0;
loc_823314D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82331500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823315ac
	if (ctx.cr6.lt) goto loc_823315AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233152c
	if (!ctx.cr6.eq) goto loc_8233152C;
	// lis r28,-30009
	ctx.r28.s64 = -1966669824;
	// ori r28,r28,10
	ctx.r28.u64 = ctx.r28.u64 | 10;
	// b 0x823315ac
	goto loc_823315AC;
loc_8233152C:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32812
	ctx.r4.u64 = ctx.r4.u64 | 32812;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x8232d150
	ctx.lr = 0x82331544;
	sub_8232D150(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331568
	if (ctx.cr6.eq) goto loc_82331568;
	// bl 0x8232d328
	ctx.lr = 0x82331550;
	sub_8232D328(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82331578
	if (!ctx.cr6.eq) goto loc_82331578;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x823315ac
	goto loc_823315AC;
loc_82331568:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x823315ac
	goto loc_823315AC;
loc_82331578:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d160
	ctx.lr = 0x82331594;
	sub_8232D160(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_823315AC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x823315bc
	if (ctx.cr6.eq) goto loc_823315BC;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_823315BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823315C4"))) PPC_WEAK_FUNC(sub_823315C4);
PPC_FUNC_IMPL(__imp__sub_823315C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823315C8"))) PPC_WEAK_FUNC(sub_823315C8);
PPC_FUNC_IMPL(__imp__sub_823315C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823315D0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823315F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x82331678
	if (!ctx.cr6.eq) goto loc_82331678;
	// ori r4,r4,32794
	ctx.r4.u64 = ctx.r4.u64 | 32794;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x8232d150
	ctx.lr = 0x82331620;
	sub_8232D150(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331640
	if (ctx.cr6.eq) goto loc_82331640;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8233f378
	ctx.lr = 0x8233163C;
	sub_8233F378(ctx, base);
	// b 0x823316a0
	goto loc_823316A0;
loc_82331640:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82331644:
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
loc_8233164C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233166c
	if (ctx.cr6.eq) goto loc_8233166C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233166C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233166C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82331678:
	// ori r4,r4,32793
	ctx.r4.u64 = ctx.r4.u64 | 32793;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x8232d150
	ctx.lr = 0x82331684;
	sub_8232D150(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331640
	if (ctx.cr6.eq) goto loc_82331640;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8233ef28
	ctx.lr = 0x823316A0;
	sub_8233EF28(ctx, base);
loc_823316A0:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331644
	if (ctx.cr6.eq) goto loc_82331644;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233177c
	if (ctx.cr6.eq) goto loc_8233177C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lhz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// beq cr6,0x8233177c
	if (ctx.cr6.eq) goto loc_8233177C;
loc_823316D0:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823316E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233174c
	if (!ctx.cr6.eq) goto loc_8233174C;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82331708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x8233174c
	if (ctx.cr6.eq) goto loc_8233174C;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r29,r9,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82331738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8233174c
	if (ctx.cr6.lt) goto loc_8233174C;
	// lis r27,-30009
	ctx.r27.s64 = -1966669824;
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
loc_8233174C:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82331764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,65535
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 65535, ctx.xer);
	// bne cr6,0x823316d0
	if (!ctx.cr6.eq) goto loc_823316D0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x8233164c
	if (ctx.cr6.lt) goto loc_8233164C;
loc_8233177C:
	// addic. r4,r31,320
	ctx.xer.ca = ctx.r31.u32 > 4294966975;
	ctx.r4.s64 = ctx.r31.s64 + 320;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8233178c
	if (ctx.cr0.eq) goto loc_8233178C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233a968
	ctx.lr = 0x8233178C;
	sub_8233A968(ctx, base);
loc_8233178C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823317cc
	if (ctx.cr6.eq) goto loc_823317CC;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823317B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// lhz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8233a9a8
	ctx.lr = 0x823317C8;
	sub_8233A9A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_823317CC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x8233164c
	if (ctx.cr6.lt) goto loc_8233164C;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823317E4"))) PPC_WEAK_FUNC(sub_823317E4);
PPC_FUNC_IMPL(__imp__sub_823317E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823317E8"))) PPC_WEAK_FUNC(sub_823317E8);
PPC_FUNC_IMPL(__imp__sub_823317E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823317F0;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x823315c8
	ctx.lr = 0x82331818;
	sub_823315C8(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82331844
	if (ctx.cr6.lt) goto loc_82331844;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82331840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82331844:
	// lis r11,-30009
	ctx.r11.s64 = -1966669824;
	// ori r10,r11,25
	ctx.r10.u64 = ctx.r11.u64 | 25;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823318b8
	if (!ctx.cr6.eq) goto loc_823318B8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x823318dc
	if (ctx.cr6.eq) goto loc_823318DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233187c
	if (ctx.cr6.eq) goto loc_8233187C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233187C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233187C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823315c8
	ctx.lr = 0x8233188C;
	sub_823315C8(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823318dc
	if (ctx.cr6.lt) goto loc_823318DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823318B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823318B8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x823318dc
	if (ctx.cr6.lt) goto loc_823318DC;
	// lbz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stb r10,60(r30)
	PPC_STORE_U8(ctx.r30.u32 + 60, ctx.r10.u8);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823318DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823318fc
	if (ctx.cr6.eq) goto loc_823318FC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823318FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823318FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82331908"))) PPC_WEAK_FUNC(sub_82331908);
PPC_FUNC_IMPL(__imp__sub_82331908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82331910;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x823323c8
	ctx.lr = 0x8233192C;
	sub_823323C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331974
	if (ctx.cr6.eq) goto loc_82331974;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// rlwinm r6,r10,27,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82331974
	if (ctx.cr6.eq) goto loc_82331974;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bne cr6,0x82331974
	if (!ctx.cr6.eq) goto loc_82331974;
	// lwz r10,11(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82331974
	if (!ctx.cr6.gt) goto loc_82331974;
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mullw r6,r9,r11
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
loc_82331974:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823317e8
	ctx.lr = 0x82331988;
	sub_823317E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82331990"))) PPC_WEAK_FUNC(sub_82331990);
PPC_FUNC_IMPL(__imp__sub_82331990) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82331470
	ctx.lr = 0x823319AC;
	sub_82331470(ctx, base);
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

__attribute__((alias("__imp__sub_823319C0"))) PPC_WEAK_FUNC(sub_823319C0);
PPC_FUNC_IMPL(__imp__sub_823319C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823319C8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// addi r29,r3,356
	ctx.r29.s64 = ctx.r3.s64 + 356;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823319e8
	if (!ctx.cr6.eq) goto loc_823319E8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82331a54
	if (ctx.cr6.eq) goto loc_82331A54;
loc_823319E8:
	// lwz r31,360(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82331a54
	if (ctx.cr6.eq) goto loc_82331A54;
loc_823319F4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331a10
	if (ctx.cr6.eq) goto loc_82331A10;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8232d158
	ctx.lr = 0x82331A10;
	sub_8232D158(ctx, base);
loc_82331A10:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r31.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82331A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823319f4
	if (!ctx.cr6.eq) goto loc_823319F4;
loc_82331A54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82331A5C"))) PPC_WEAK_FUNC(sub_82331A5C);
PPC_FUNC_IMPL(__imp__sub_82331A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82331A60"))) PPC_WEAK_FUNC(sub_82331A60);
PPC_FUNC_IMPL(__imp__sub_82331A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82331A68;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,23772
	ctx.r8.s64 = ctx.r11.s64 + 23772;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r7,r10,25500
	ctx.r7.s64 = ctx.r10.s64 + 25500;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// addi r25,r9,22136
	ctx.r25.s64 = ctx.r9.s64 + 22136;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// bl 0x8233c1f8
	ctx.lr = 0x82331ABC;
	sub_8233C1F8(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r6,23808
	ctx.r10.s64 = ctx.r6.s64 + 23808;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r3,23800
	ctx.r7.s64 = ctx.r3.s64 + 23800;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r9,r5,24156
	ctx.r9.s64 = ctx.r5.s64 + 24156;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r8,r4,24152
	ctx.r8.s64 = ctx.r4.s64 + 24152;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// addi r6,r11,23784
	ctx.r6.s64 = ctx.r11.s64 + 23784;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// sth r30,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r30.u16);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x822d7b20
	ctx.lr = 0x82331B24;
	sub_822D7B20(ctx, base);
	// addi r11,r31,336
	ctx.r11.s64 = ctx.r31.s64 + 336;
	// stw r28,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r28.u32);
	// addi r10,r31,356
	ctx.r10.s64 = ctx.r31.s64 + 356;
	// sth r26,316(r31)
	PPC_STORE_U16(ctx.r31.u32 + 316, ctx.r26.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r25,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r25.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r25,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r25.u32);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// beq cr6,0x82331bbc
	if (ctx.cr6.eq) goto loc_82331BBC;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
loc_82331BA0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82331ba0
	if (!ctx.cr0.eq) goto loc_82331BA0;
loc_82331BBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82331BC8"))) PPC_WEAK_FUNC(sub_82331BC8);
PPC_FUNC_IMPL(__imp__sub_82331BC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x823322b0
	sub_823322B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331BD0"))) PPC_WEAK_FUNC(sub_82331BD0);
PPC_FUNC_IMPL(__imp__sub_82331BD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x823322b0
	sub_823322B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331BD8"))) PPC_WEAK_FUNC(sub_82331BD8);
PPC_FUNC_IMPL(__imp__sub_82331BD8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82331c38
	if (ctx.cr6.eq) goto loc_82331C38;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// and r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 & ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82331C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r11,r31,-8
	ctx.xer.ca = ctx.r31.u32 > 7;
	ctx.r11.s64 = ctx.r31.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82331c38
	if (ctx.cr0.eq) goto loc_82331C38;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82331C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82331C38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331C4C"))) PPC_WEAK_FUNC(sub_82331C4C);
PPC_FUNC_IMPL(__imp__sub_82331C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82331C50"))) PPC_WEAK_FUNC(sub_82331C50);
PPC_FUNC_IMPL(__imp__sub_82331C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24);
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82331C68"))) PPC_WEAK_FUNC(sub_82331C68);
PPC_FUNC_IMPL(__imp__sub_82331C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82331C7C"))) PPC_WEAK_FUNC(sub_82331C7C);
PPC_FUNC_IMPL(__imp__sub_82331C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82331C80"))) PPC_WEAK_FUNC(sub_82331C80);
PPC_FUNC_IMPL(__imp__sub_82331C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,348(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331C88"))) PPC_WEAK_FUNC(sub_82331C88);
PPC_FUNC_IMPL(__imp__sub_82331C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8233c290
	ctx.lr = 0x82331CA0;
	sub_8233C290(ctx, base);
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82331CB4;
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

__attribute__((alias("__imp__sub_82331CC8"))) PPC_WEAK_FUNC(sub_82331CC8);
PPC_FUNC_IMPL(__imp__sub_82331CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82331CD4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82331cf0
	if (ctx.cr6.eq) goto loc_82331CF0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331cd4
	if (!ctx.cr6.eq) goto loc_82331CD4;
	// blr 
	return;
loc_82331CF0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x8232d758
	sub_8232D758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331CFC"))) PPC_WEAK_FUNC(sub_82331CFC);
PPC_FUNC_IMPL(__imp__sub_82331CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82331D00"))) PPC_WEAK_FUNC(sub_82331D00);
PPC_FUNC_IMPL(__imp__sub_82331D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82331D08;
	sub_82248774(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r5,r11,23808
	ctx.r5.s64 = ctx.r11.s64 + 23808;
	// addi r4,r10,24156
	ctx.r4.s64 = ctx.r10.s64 + 24156;
	// addi r11,r9,24152
	ctx.r11.s64 = ctx.r9.s64 + 24152;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lis r6,8324
	ctx.r6.s64 = 545521664;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// addi r10,r8,23800
	ctx.r10.s64 = ctx.r8.s64 + 23800;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r9,r7,23784
	ctx.r9.s64 = ctx.r7.s64 + 23784;
	// ori r24,r6,1
	ctx.r24.u64 = ctx.r6.u64 | 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// addi r25,r31,12
	ctx.r25.s64 = ctx.r31.s64 + 12;
	// addi r23,r31,24
	ctx.r23.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331d78
	if (ctx.cr6.eq) goto loc_82331D78;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8232d158
	ctx.lr = 0x82331D78;
	sub_8232D158(ctx, base);
loc_82331D78:
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331d8c
	if (ctx.cr6.eq) goto loc_82331D8C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8232d158
	ctx.lr = 0x82331D8C;
	sub_8232D158(ctx, base);
loc_82331D8C:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331dac
	if (ctx.cr6.eq) goto loc_82331DAC;
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
	// lhz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x82333408
	ctx.lr = 0x82331DAC;
	sub_82333408(ctx, base);
loc_82331DAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823307e8
	ctx.lr = 0x82331DB4;
	sub_823307E8(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm r28,r3,0,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82331e00
	if (ctx.cr6.eq) goto loc_82331E00;
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
loc_82331DC8:
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82331ddc
	if (ctx.cr6.eq) goto loc_82331DDC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82331de0
	goto loc_82331DE0;
loc_82331DDC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82331DE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82331DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82331dc8
	if (!ctx.cr6.eq) goto loc_82331DC8;
loc_82331E00:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// beq cr6,0x82331e34
	if (ctx.cr6.eq) goto loc_82331E34;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331e28
	if (ctx.cr6.eq) goto loc_82331E28;
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
	// lhz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x82333408
	ctx.lr = 0x82331E28;
	sub_82333408(ctx, base);
loc_82331E28:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823305a0
	ctx.lr = 0x82331E34;
	sub_823305A0(ctx, base);
loc_82331E34:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82331e6c
	if (ctx.cr6.eq) goto loc_82331E6C;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82331e6c
	if (ctx.cr6.eq) goto loc_82331E6C;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r25,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r25.u32);
	// stw r25,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r25.u32);
loc_82331E6C:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82331E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82331eb4
	if (ctx.cr6.eq) goto loc_82331EB4;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
loc_82331E98:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82331e98
	if (!ctx.cr0.eq) goto loc_82331E98;
loc_82331EB4:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331ed4
	if (ctx.cr6.eq) goto loc_82331ED4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82331ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82331ED4:
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r29,r31,336
	ctx.r29.s64 = ctx.r31.s64 + 336;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82331f24
	if (ctx.cr6.eq) goto loc_82331F24;
loc_82331EE4:
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82331F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82331ee4
	if (!ctx.cr6.eq) goto loc_82331EE4;
loc_82331F24:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82331f54
	if (ctx.cr6.eq) goto loc_82331F54;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331f44
	if (ctx.cr6.eq) goto loc_82331F44;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8232d158
	ctx.lr = 0x82331F44;
	sub_8232D158(ctx, base);
loc_82331F44:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// bl 0x8232d158
	ctx.lr = 0x82331F50;
	sub_8232D158(ctx, base);
	// stw r26,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r26.u32);
loc_82331F54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823319c0
	ctx.lr = 0x82331F5C;
	sub_823319C0(ctx, base);
	// lwz r30,308(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82331fb8
	if (ctx.cr6.eq) goto loc_82331FB8;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82248f70
	ctx.lr = 0x82331F78;
	sub_82248F70(ctx, base);
	// stw r31,95(r1)
	PPC_STORE_U32(ctx.r1.u32 + 95, ctx.r31.u32);
	// stw r30,91(r1)
	PPC_STORE_U32(ctx.r1.u32 + 91, ctx.r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lhz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// rldicr r7,r9,8,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// sth r11,89(r1)
	PPC_STORE_U16(ctx.r1.u32 + 89, ctx.r11.u16);
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r7,r11,24,39
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 24) & 0xFFFFFFFFFF000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8232c6b8
	ctx.lr = 0x82331FB8;
	sub_8232C6B8(ctx, base);
loc_82331FB8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r30,r11,22136
	ctx.r30.s64 = ctx.r11.s64 + 22136;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// bl 0x82334240
	ctx.lr = 0x82331FD0;
	sub_82334240(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8233c230
	ctx.lr = 0x82331FD8;
	sub_8233C230(ctx, base);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82331FE4"))) PPC_WEAK_FUNC(sub_82331FE4);
PPC_FUNC_IMPL(__imp__sub_82331FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82331FE8"))) PPC_WEAK_FUNC(sub_82331FE8);
PPC_FUNC_IMPL(__imp__sub_82331FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82331FF0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r26,r11,204
	ctx.r26.s64 = ctx.r11.s64 + 204;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8233200C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,8324
	ctx.r11.s64 = 545521664;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 | 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8232d150
	ctx.lr = 0x82332028;
	sub_8232D150(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82332050
	if (!ctx.cr6.eq) goto loc_82332050;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
	// bl 0x8241dd3c
	ctx.lr = 0x82332044;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82332050:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8232d150
	ctx.lr = 0x82332068;
	sub_8232D150(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x823320d8
	if (ctx.cr6.eq) goto loc_823320D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82248a40
	ctx.lr = 0x82332090;
	sub_82248A40(ctx, base);
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823320b0
	if (ctx.cr6.eq) goto loc_823320B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233ae28
	ctx.lr = 0x823320A4;
	sub_8233AE28(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823320e0
	if (ctx.cr6.lt) goto loc_823320E0;
loc_823320B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823304e8
	ctx.lr = 0x823320B8;
	sub_823304E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823319c0
	ctx.lr = 0x823320C0;
	sub_823319C0(ctx, base);
	// stw r31,352(r29)
	PPC_STORE_U32(ctx.r29.u32 + 352, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x823320CC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823320D8:
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
loc_823320E0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823320f4
	if (ctx.cr6.eq) goto loc_823320F4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8232d158
	ctx.lr = 0x823320F4;
	sub_8232D158(ctx, base);
loc_823320F4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d158
	ctx.lr = 0x82332100;
	sub_8232D158(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82332108;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82332114"))) PPC_WEAK_FUNC(sub_82332114);
PPC_FUNC_IMPL(__imp__sub_82332114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332118"))) PPC_WEAK_FUNC(sub_82332118);
PPC_FUNC_IMPL(__imp__sub_82332118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82332120;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r28,r11,204
	ctx.r28.s64 = ctx.r11.s64 + 204;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82332144;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8232a758
	ctx.lr = 0x8233214C;
	sub_8232A758(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x823321c8
	if (ctx.cr6.lt) goto loc_823321C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331470
	ctx.lr = 0x82332174;
	sub_82331470(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823321c8
	if (ctx.cr6.lt) goto loc_823321C8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823321c0
	if (!ctx.cr6.eq) goto loc_823321C0;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823321c0
	if (ctx.cr6.eq) goto loc_823321C0;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x823321c8
	if (ctx.cr6.eq) goto loc_823321C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8232d250
	ctx.lr = 0x823321BC;
	sub_8232D250(ctx, base);
	// b 0x823321c8
	goto loc_823321C8;
loc_823321C0:
	// lis r30,-30009
	ctx.r30.s64 = -1966669824;
	// ori r30,r30,10
	ctx.r30.u64 = ctx.r30.u64 | 10;
loc_823321C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x823321D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823321E0"))) PPC_WEAK_FUNC(sub_823321E0);
PPC_FUNC_IMPL(__imp__sub_823321E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823321E8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r11,204
	ctx.r28.s64 = ctx.r11.s64 + 204;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82332208;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8232a758
	ctx.lr = 0x82332210;
	sub_8232A758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82332294
	if (ctx.cr6.lt) goto loc_82332294;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82332294
	if (ctx.cr6.eq) goto loc_82332294;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82332294
	if (ctx.cr6.eq) goto loc_82332294;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331470
	ctx.lr = 0x8233224C;
	sub_82331470(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82332294
	if (ctx.cr6.lt) goto loc_82332294;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8233228c
	if (!ctx.cr6.eq) goto loc_8233228C;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82332280;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8233228C:
	// lis r30,-30009
	ctx.r30.s64 = -1966669824;
	// ori r30,r30,10
	ctx.r30.u64 = ctx.r30.u64 | 10;
loc_82332294:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8233229C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823322A8"))) PPC_WEAK_FUNC(sub_823322A8);
PPC_FUNC_IMPL(__imp__sub_823322A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x823342d0
	sub_823342D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823322B0"))) PPC_WEAK_FUNC(sub_823322B0);
PPC_FUNC_IMPL(__imp__sub_823322B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82331d00
	ctx.lr = 0x823322D0;
	sub_82331D00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823322f0
	if (ctx.cr6.eq) goto loc_823322F0;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32869
	ctx.r4.u64 = ctx.r4.u64 | 32869;
	// bl 0x8232d158
	ctx.lr = 0x823322EC;
	sub_8232D158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823322F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332308"))) PPC_WEAK_FUNC(sub_82332308);
PPC_FUNC_IMPL(__imp__sub_82332308) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233232c
	if (!ctx.cr6.eq) goto loc_8233232C;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233232c
	if (!ctx.cr6.eq) goto loc_8233232C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8233232C:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82332340
	if (ctx.cr6.eq) goto loc_82332340;
	// lhz r3,10(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// blr 
	return;
loc_82332340:
	// lhz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332348"))) PPC_WEAK_FUNC(sub_82332348);
PPC_FUNC_IMPL(__imp__sub_82332348) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823323c0
	if (ctx.cr6.eq) goto loc_823323C0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// beq cr6,0x82332394
	if (ctx.cr6.eq) goto loc_82332394;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82332380
	if (!ctx.cr6.eq) goto loc_82332380;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82332384
	if (ctx.cr6.eq) goto loc_82332384;
loc_82332380:
	// lhz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
loc_82332384:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lhz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// blr 
	return;
loc_82332394:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823323ac
	if (!ctx.cr6.eq) goto loc_823323AC;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823323b0
	if (ctx.cr6.eq) goto loc_823323B0;
loc_823323AC:
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
loc_823323B0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lhz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// blr 
	return;
loc_823323C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823323C8"))) PPC_WEAK_FUNC(sub_823323C8);
PPC_FUNC_IMPL(__imp__sub_823323C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823323D0;
	sub_8224877C(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r25,0
	ctx.r25.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823323FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8233252c
	if (!ctx.cr6.eq) goto loc_8233252C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82248f70
	ctx.lr = 0x8233243C;
	sub_82248F70(ctx, base);
	// lwz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r25,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r25.u32);
	// stw r25,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r25.u32);
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8233246C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233252c
	if (ctx.cr6.eq) goto loc_8233252C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_8233247C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82332494
	if (ctx.cr6.eq) goto loc_82332494;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x823324c0
	if (!ctx.cr6.eq) goto loc_823324C0;
loc_82332494:
	// lwz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x823324c0
	if (ctx.cr6.lt) goto loc_823324C0;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x823324c0
	if (ctx.cr6.gt) goto loc_823324C0;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x823324e0
	if (!ctx.cr6.eq) goto loc_823324E0;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// beq cr6,0x823324e0
	if (ctx.cr6.eq) goto loc_823324E0;
loc_823324C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823324D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233247c
	if (!ctx.cr6.eq) goto loc_8233247C;
loc_823324E0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8233252c
	if (!ctx.cr6.gt) goto loc_8233252C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82332508
	if (ctx.cr6.eq) goto loc_82332508;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82332508:
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82329dc0
	ctx.lr = 0x82332518;
	sub_82329DC0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8233252C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82332538"))) PPC_WEAK_FUNC(sub_82332538);
PPC_FUNC_IMPL(__imp__sub_82332538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82331a60
	ctx.lr = 0x82332550;
	sub_82331A60(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r6,r11,23984
	ctx.r6.s64 = ctx.r11.s64 + 23984;
	// addi r3,r8,23976
	ctx.r3.s64 = ctx.r8.s64 + 23976;
	// addi r5,r10,24156
	ctx.r5.s64 = ctx.r10.s64 + 24156;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r4,r9,24152
	ctx.r4.s64 = ctx.r9.s64 + 24152;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r7,23960
	ctx.r11.s64 = ctx.r7.s64 + 23960;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_823325A4"))) PPC_WEAK_FUNC(sub_823325A4);
PPC_FUNC_IMPL(__imp__sub_823325A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823325A8"))) PPC_WEAK_FUNC(sub_823325A8);
PPC_FUNC_IMPL(__imp__sub_823325A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82331a60
	ctx.lr = 0x823325C0;
	sub_82331A60(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r6,r11,24168
	ctx.r6.s64 = ctx.r11.s64 + 24168;
	// addi r3,r8,24164
	ctx.r3.s64 = ctx.r8.s64 + 24164;
	// addi r5,r10,24156
	ctx.r5.s64 = ctx.r10.s64 + 24156;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r4,r9,24152
	ctx.r4.s64 = ctx.r9.s64 + 24152;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r7,24136
	ctx.r11.s64 = ctx.r7.s64 + 24136;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82332614"))) PPC_WEAK_FUNC(sub_82332614);
PPC_FUNC_IMPL(__imp__sub_82332614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332618"))) PPC_WEAK_FUNC(sub_82332618);
PPC_FUNC_IMPL(__imp__sub_82332618) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// b 0x8232b6b8
	sub_8232B6B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332624"))) PPC_WEAK_FUNC(sub_82332624);
PPC_FUNC_IMPL(__imp__sub_82332624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332628"))) PPC_WEAK_FUNC(sub_82332628);
PPC_FUNC_IMPL(__imp__sub_82332628) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_82332664"))) PPC_WEAK_FUNC(sub_82332664);
PPC_FUNC_IMPL(__imp__sub_82332664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332668"))) PPC_WEAK_FUNC(sub_82332668);
PPC_FUNC_IMPL(__imp__sub_82332668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332674"))) PPC_WEAK_FUNC(sub_82332674);
PPC_FUNC_IMPL(__imp__sub_82332674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332678"))) PPC_WEAK_FUNC(sub_82332678);
PPC_FUNC_IMPL(__imp__sub_82332678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823326A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r30,19(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823326B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 21);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r3,r7,16
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823326DC"))) PPC_WEAK_FUNC(sub_823326DC);
PPC_FUNC_IMPL(__imp__sub_823326DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823326E0"))) PPC_WEAK_FUNC(sub_823326E0);
PPC_FUNC_IMPL(__imp__sub_823326E0) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82248f70
	ctx.lr = 0x8233270C;
	sub_82248F70(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// rldicr r9,r11,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stw r31,89(r1)
	PPC_STORE_U32(ctx.r1.u32 + 89, ctx.r31.u32);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r7,r8,24,39
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 24) & 0xFFFFFFFFFF000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8232c6b8
	ctx.lr = 0x8233273C;
	sub_8232C6B8(ctx, base);
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

__attribute__((alias("__imp__sub_82332754"))) PPC_WEAK_FUNC(sub_82332754);
PPC_FUNC_IMPL(__imp__sub_82332754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332758"))) PPC_WEAK_FUNC(sub_82332758);
PPC_FUNC_IMPL(__imp__sub_82332758) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82333438
	sub_82333438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332760"))) PPC_WEAK_FUNC(sub_82332760);
PPC_FUNC_IMPL(__imp__sub_82332760) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x823334d0
	sub_823334D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332768"))) PPC_WEAK_FUNC(sub_82332768);
PPC_FUNC_IMPL(__imp__sub_82332768) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x82333438
	sub_82333438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332770"))) PPC_WEAK_FUNC(sub_82332770);
PPC_FUNC_IMPL(__imp__sub_82332770) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x823334d0
	sub_823334D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332778"))) PPC_WEAK_FUNC(sub_82332778);
PPC_FUNC_IMPL(__imp__sub_82332778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82332780;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82332824
	if (ctx.cr6.eq) goto loc_82332824;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823327A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,27(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82332810
	if (ctx.cr6.eq) goto loc_82332810;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_823327B8:
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823327e8
	if (ctx.cr6.eq) goto loc_823327E8;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823327E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823327E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82332804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,27(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823327b8
	if (ctx.cr6.lt) goto loc_823327B8;
loc_82332810:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8232d158
	ctx.lr = 0x82332820;
	sub_8232D158(ctx, base);
	// stw r28,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r28.u32);
loc_82332824:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82332870
	if (ctx.cr6.eq) goto loc_82332870;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_82332838:
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233284c
	if (ctx.cr6.eq) goto loc_8233284C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82332850
	goto loc_82332850;
loc_8233284C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82332850:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82332838
	if (!ctx.cr6.eq) goto loc_82332838;
loc_82332870:
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233288c
	if (ctx.cr6.eq) goto loc_8233288C;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8232d158
	ctx.lr = 0x82332888;
	sub_8232D158(ctx, base);
	// stw r28,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
loc_8233288C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82332894"))) PPC_WEAK_FUNC(sub_82332894);
PPC_FUNC_IMPL(__imp__sub_82332894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332898"))) PPC_WEAK_FUNC(sub_82332898);
PPC_FUNC_IMPL(__imp__sub_82332898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823328A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,204
	ctx.r28.s64 = ctx.r11.s64 + 204;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x823328B8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8232a758
	ctx.lr = 0x823328C0;
	sub_8232A758(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82332930
	if (ctx.cr6.lt) goto loc_82332930;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82332918
	if (ctx.cr6.eq) goto loc_82332918;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_823328E0:
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823328f4
	if (ctx.cr6.eq) goto loc_823328F4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823328f8
	goto loc_823328F8;
loc_823328F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823328F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233290C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823328e0
	if (!ctx.cr6.eq) goto loc_823328E0;
loc_82332918:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82332930:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82332938;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82332944"))) PPC_WEAK_FUNC(sub_82332944);
PPC_FUNC_IMPL(__imp__sub_82332944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332948"))) PPC_WEAK_FUNC(sub_82332948);
PPC_FUNC_IMPL(__imp__sub_82332948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82332950;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r25,r11,204
	ctx.r25.s64 = ctx.r11.s64 + 204;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82332974;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8232a758
	ctx.lr = 0x8233297C;
	sub_8232A758(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82332adc
	if (ctx.cr6.lt) goto loc_82332ADC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x8233299c
	if (!ctx.cr6.lt) goto loc_8233299C;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// b 0x823329d8
	goto loc_823329D8;
loc_8233299C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x823329b0
	if (!ctx.cr6.eq) goto loc_823329B0;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// b 0x823329d8
	goto loc_823329D8;
loc_823329B0:
	// clrlwi r30,r29,16
	ctx.r30.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 65535, ctx.xer);
	// beq cr6,0x823329d0
	if (ctx.cr6.eq) goto loc_823329D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332678
	ctx.lr = 0x823329C4;
	sub_82332678(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823329d8
	if (ctx.cr6.lt) goto loc_823329D8;
loc_823329D0:
	// lis r28,-30009
	ctx.r28.s64 = -1966669824;
	// ori r28,r28,12
	ctx.r28.u64 = ctx.r28.u64 | 12;
loc_823329D8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82332adc
	if (ctx.cr6.lt) goto loc_82332ADC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823329F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82332a4c
	if (ctx.cr6.eq) goto loc_82332A4C;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// li r3,460
	ctx.r3.s64 = 460;
	// bl 0x8232d150
	ctx.lr = 0x82332A24;
	sub_8232D150(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82332a44
	if (ctx.cr6.eq) goto loc_82332A44;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8233fac0
	ctx.lr = 0x82332A40;
	sub_8233FAC0(ctx, base);
	// b 0x82332aa8
	goto loc_82332AA8;
loc_82332A44:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82332ab4
	goto loc_82332AB4;
loc_82332A4C:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// li r3,368
	ctx.r3.s64 = 368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82332a84
	if (ctx.cr6.eq) goto loc_82332A84;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x8232d150
	ctx.lr = 0x82332A64;
	sub_8232D150(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82332a44
	if (ctx.cr6.eq) goto loc_82332A44;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823325a8
	ctx.lr = 0x82332A80;
	sub_823325A8(ctx, base);
	// b 0x82332aa8
	goto loc_82332AA8;
loc_82332A84:
	// ori r4,r4,32777
	ctx.r4.u64 = ctx.r4.u64 | 32777;
	// bl 0x8232d150
	ctx.lr = 0x82332A8C;
	sub_8232D150(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82332a44
	if (ctx.cr6.eq) goto loc_82332A44;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82332538
	ctx.lr = 0x82332AA8;
	sub_82332538(ctx, base);
loc_82332AA8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82332af0
	if (!ctx.cr6.eq) goto loc_82332AF0;
loc_82332AB4:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
loc_82332ABC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82332adc
	if (ctx.cr6.eq) goto loc_82332ADC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82332ADC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82332AE4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82332AF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82332abc
	if (ctx.cr6.lt) goto loc_82332ABC;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8232c810
	ctx.lr = 0x82332B24;
	sub_8232C810(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82332B2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82332B38"))) PPC_WEAK_FUNC(sub_82332B38);
PPC_FUNC_IMPL(__imp__sub_82332B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82332B40;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r23,r11,204
	ctx.r23.s64 = ctx.r11.s64 + 204;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82332B68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8232a758
	ctx.lr = 0x82332B70;
	sub_8232A758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82332b9c
	if (ctx.cr6.lt) goto loc_82332B9C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x82332b90
	if (!ctx.cr6.lt) goto loc_82332B90;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
	// b 0x82332b9c
	goto loc_82332B9C;
loc_82332B90:
	// clrlwi r28,r29,16
	ctx.r28.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r28,65535
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 65535, ctx.xer);
	// beq cr6,0x82332be0
	if (ctx.cr6.eq) goto loc_82332BE0;
loc_82332B9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r28,r29,16
	ctx.r28.u64 = ctx.r29.u32 & 0xFFFF;
	// lhz r27,19(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82332BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 21);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82332be8
	if (ctx.cr6.lt) goto loc_82332BE8;
loc_82332BE0:
	// lis r30,-30009
	ctx.r30.s64 = -1966669824;
	// ori r30,r30,12
	ctx.r30.u64 = ctx.r30.u64 | 12;
loc_82332BE8:
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blt cr6,0x82332c98
	if (ctx.cr6.lt) goto loc_82332C98;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82332c38
	if (ctx.cr6.eq) goto loc_82332C38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82332c34
	if (ctx.cr6.eq) goto loc_82332C34;
	// lis r30,-30009
	ctx.r30.s64 = -1966669824;
	// ori r30,r30,6
	ctx.r30.u64 = ctx.r30.u64 | 6;
	// b 0x82332c98
	goto loc_82332C98;
loc_82332C34:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82332C38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82332c98
	if (ctx.cr6.eq) goto loc_82332C98;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82332c98
	if (ctx.cr6.eq) goto loc_82332C98;
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82332c98
	if (ctx.cr6.lt) goto loc_82332C98;
	// lbz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// rlwinm r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82332c98
	if (!ctx.cr6.eq) goto loc_82332C98;
	// lis r30,-30009
	ctx.r30.s64 = -1966669824;
	// ori r30,r30,8
	ctx.r30.u64 = ctx.r30.u64 | 8;
loc_82332C98:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x82332d3c
	if (ctx.cr6.lt) goto loc_82332D3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82332d20
	if (ctx.cr6.lt) goto loc_82332D20;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82332d20
	if (ctx.cr6.lt) goto loc_82332D20;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82332d3c
	if (ctx.cr6.eq) goto loc_82332D3C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82332D14;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82332D20:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82332d3c
	if (ctx.cr6.eq) goto loc_82332D3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332D3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82332D3C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82332D44;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82332D50"))) PPC_WEAK_FUNC(sub_82332D50);
PPC_FUNC_IMPL(__imp__sub_82332D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82332D58;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,204
	ctx.r31.s64 = ctx.r11.s64 + 204;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82332D78;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r28,31
	ctx.r6.u64 = ctx.r28.u32 & 0x1;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8232c8e0
	ctx.lr = 0x82332D90;
	sub_8232C8E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82332D9C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82332DA8"))) PPC_WEAK_FUNC(sub_82332DA8);
PPC_FUNC_IMPL(__imp__sub_82332DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82332DB0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,204
	ctx.r31.s64 = ctx.r11.s64 + 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82332DCC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// li r11,128
	ctx.r11.s64 = 128;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82332DEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82332DF8"))) PPC_WEAK_FUNC(sub_82332DF8);
PPC_FUNC_IMPL(__imp__sub_82332DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82332E00;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r11,204
	ctx.r28.s64 = ctx.r11.s64 + 204;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82332E1C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82332E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,18(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82332f30
	if (!ctx.cr6.eq) goto loc_82332F30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r5,25(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 25);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8232a338
	ctx.lr = 0x82332E6C;
	sub_8232A338(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r30,r3,1,15,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82332E84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhzx r4,r3,r30
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r30.u32);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82332f30
	if (ctx.cr6.eq) goto loc_82332F30;
loc_82332E90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82332EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82332EC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x82332ee8
	if (ctx.cr6.eq) goto loc_82332EE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82332ec4
	if (ctx.cr6.eq) goto loc_82332EC4;
loc_82332EE8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82332f14
	if (ctx.cr6.eq) goto loc_82332F14;
	// lhz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// bne cr6,0x82332e90
	if (!ctx.cr6.eq) goto loc_82332E90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82332F08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82332F14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82332F30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82332F38;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82332F44"))) PPC_WEAK_FUNC(sub_82332F44);
PPC_FUNC_IMPL(__imp__sub_82332F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332F48"))) PPC_WEAK_FUNC(sub_82332F48);
PPC_FUNC_IMPL(__imp__sub_82332F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82332F50;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,204
	ctx.r31.s64 = ctx.r11.s64 + 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82332F6C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332678
	ctx.lr = 0x82332F74;
	sub_82332678(ctx, base);
	// sth r3,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82332F80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82332F8C"))) PPC_WEAK_FUNC(sub_82332F8C);
PPC_FUNC_IMPL(__imp__sub_82332F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332F90"))) PPC_WEAK_FUNC(sub_82332F90);
PPC_FUNC_IMPL(__imp__sub_82332F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82332F98;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r27,r11,204
	ctx.r27.s64 = ctx.r11.s64 + 204;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82332FB8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r5,268
	ctx.r5.s64 = 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x82332FC8;
	sub_82248F70(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82332FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,18(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82333014
	if (!ctx.cr6.eq) goto loc_82333014;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,255
	ctx.r5.s64 = 255;
	// bl 0x8224a628
	ctx.lr = 0x82333014;
	sub_8224A628(ctx, base);
loc_82333014:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233302C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r8,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r8.u16);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// sth r7,262(r31)
	PPC_STORE_U16(ctx.r31.u32 + 262, ctx.r7.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r6,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r6.u8);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x823330cc
	if (!ctx.cr6.eq) goto loc_823330CC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82333070:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82333070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82333070;
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823330b8
	if (!ctx.cr6.eq) goto loc_823330B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823330A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r8,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r8.u16);
	// sth r7,262(r31)
	PPC_STORE_U16(ctx.r31.u32 + 262, ctx.r7.u16);
loc_823330B8:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r9,r11,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// stb r10,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r10.u8);
loc_823330CC:
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// rlwinm r10,r28,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,265(r31)
	PPC_STORE_U8(ctx.r31.u32 + 265, ctx.r9.u8);
	// bl 0x8241dd3c
	ctx.lr = 0x823330E4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823330F0"))) PPC_WEAK_FUNC(sub_823330F0);
PPC_FUNC_IMPL(__imp__sub_823330F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823330F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// rlwinm r29,r4,2,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r31,r4,24
	ctx.r31.u64 = ctx.r4.u32 & 0xFF;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82333124
	if (ctx.cr6.eq) goto loc_82333124;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82333124:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r31,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8232b5a8
	ctx.lr = 0x82333148;
	sub_8232B5A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333174
	if (ctx.cr6.eq) goto loc_82333174;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233316C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,248(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// stwx r31,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r31.u32);
loc_82333174:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82333180"))) PPC_WEAK_FUNC(sub_82333180);
PPC_FUNC_IMPL(__imp__sub_82333180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82333188;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233320c
	if (ctx.cr6.eq) goto loc_8233320C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823331B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,27(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233320c
	if (ctx.cr6.eq) goto loc_8233320C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823331C0:
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82333204
	if (ctx.cr6.eq) goto loc_82333204;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823331F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,27(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823331c0
	if (ctx.cr6.lt) goto loc_823331C0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82333204:
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8233320C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82333214"))) PPC_WEAK_FUNC(sub_82333214);
PPC_FUNC_IMPL(__imp__sub_82333214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333218"))) PPC_WEAK_FUNC(sub_82333218);
PPC_FUNC_IMPL(__imp__sub_82333218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82333220;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32777
	ctx.r4.u64 = ctx.r4.u64 | 32777;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x8232d150
	ctx.lr = 0x82333248;
	sub_8232D150(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823332dc
	if (ctx.cr6.eq) goto loc_823332DC;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82331a60
	ctx.lr = 0x82333268;
	sub_82331A60(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r6,r11,23984
	ctx.r6.s64 = ctx.r11.s64 + 23984;
	// addi r4,r9,24152
	ctx.r4.s64 = ctx.r9.s64 + 24152;
	// addi r3,r8,23976
	ctx.r3.s64 = ctx.r8.s64 + 23976;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r5,r10,24156
	ctx.r5.s64 = ctx.r10.s64 + 24156;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r11,r7,23960
	ctx.r11.s64 = ctx.r7.s64 + 23960;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// bl 0x8233f740
	ctx.lr = 0x823332B4;
	sub_8233F740(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823332ec
	if (ctx.cr6.lt) goto loc_823332EC;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8232c810
	ctx.lr = 0x823332D0;
	sub_8232C810(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823332DC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823332EC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82333310"))) PPC_WEAK_FUNC(sub_82333310);
PPC_FUNC_IMPL(__imp__sub_82333310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r30,19(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82333350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 21);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823333b8
	if (ctx.cr6.eq) goto loc_823333B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332678
	ctx.lr = 0x8233336C;
	sub_82332678(ctx, base);
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// rlwinm r3,r3,2,14,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFFC;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8232d150
	ctx.lr = 0x82333384;
	sub_8232D150(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233339c
	if (!ctx.cr6.eq) goto loc_8233339C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823333bc
	goto loc_823333BC;
loc_8233339C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332678
	ctx.lr = 0x823333A4;
	sub_82332678(ctx, base);
	// rlwinm r5,r3,2,14,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248f70
	ctx.lr = 0x823333B4;
	sub_82248F70(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
loc_823333B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823333BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823333D4"))) PPC_WEAK_FUNC(sub_823333D4);
PPC_FUNC_IMPL(__imp__sub_823333D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823333D8"))) PPC_WEAK_FUNC(sub_823333D8);
PPC_FUNC_IMPL(__imp__sub_823333D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// rlwinm r11,r4,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFFC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r8,252(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x8232b998
	sub_8232B998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333404"))) PPC_WEAK_FUNC(sub_82333404);
PPC_FUNC_IMPL(__imp__sub_82333404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333408"))) PPC_WEAK_FUNC(sub_82333408);
PPC_FUNC_IMPL(__imp__sub_82333408) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// rlwinm r11,r4,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFFC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r8,252(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x8232b998
	sub_8232B998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333434"))) PPC_WEAK_FUNC(sub_82333434);
PPC_FUNC_IMPL(__imp__sub_82333434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333438"))) PPC_WEAK_FUNC(sub_82333438);
PPC_FUNC_IMPL(__imp__sub_82333438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,23984
	ctx.r6.s64 = ctx.r11.s64 + 23984;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r8,23976
	ctx.r3.s64 = ctx.r8.s64 + 23976;
	// addi r5,r10,24156
	ctx.r5.s64 = ctx.r10.s64 + 24156;
	// addi r4,r9,24152
	ctx.r4.s64 = ctx.r9.s64 + 24152;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r7,23960
	ctx.r11.s64 = ctx.r7.s64 + 23960;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82331d00
	ctx.lr = 0x82333498;
	sub_82331D00(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823334b8
	if (ctx.cr6.eq) goto loc_823334B8;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32777
	ctx.r4.u64 = ctx.r4.u64 | 32777;
	// bl 0x8232d158
	ctx.lr = 0x823334B4;
	sub_8232D158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823334B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823334D0"))) PPC_WEAK_FUNC(sub_823334D0);
PPC_FUNC_IMPL(__imp__sub_823334D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,24168
	ctx.r6.s64 = ctx.r11.s64 + 24168;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r8,24164
	ctx.r3.s64 = ctx.r8.s64 + 24164;
	// addi r5,r10,24156
	ctx.r5.s64 = ctx.r10.s64 + 24156;
	// addi r4,r9,24152
	ctx.r4.s64 = ctx.r9.s64 + 24152;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r7,24136
	ctx.r11.s64 = ctx.r7.s64 + 24136;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82331d00
	ctx.lr = 0x82333530;
	sub_82331D00(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82333550
	if (ctx.cr6.eq) goto loc_82333550;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x8232d158
	ctx.lr = 0x8233354C;
	sub_8232D158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82333550:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333568"))) PPC_WEAK_FUNC(sub_82333568);
PPC_FUNC_IMPL(__imp__sub_82333568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r8,r11,23772
	ctx.r8.s64 = ctx.r11.s64 + 23772;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r7,24328
	ctx.r8.s64 = ctx.r7.s64 + 24328;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r7,r6,24584
	ctx.r7.s64 = ctx.r6.s64 + 24584;
	// addi r10,r10,25500
	ctx.r10.s64 = ctx.r10.s64 + 25500;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r6,r5,24324
	ctx.r6.s64 = ctx.r5.s64 + 24324;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r9,r9,22136
	ctx.r9.s64 = ctx.r9.s64 + 22136;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r5,r3,24320
	ctx.r5.s64 = ctx.r3.s64 + 24320;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// bl 0x822d7b20
	ctx.lr = 0x823335E8;
	sub_822D7B20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233360C"))) PPC_WEAK_FUNC(sub_8233360C);
PPC_FUNC_IMPL(__imp__sub_8233360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333610"))) PPC_WEAK_FUNC(sub_82333610);
PPC_FUNC_IMPL(__imp__sub_82333610) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x823337e0
	sub_823337E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333618"))) PPC_WEAK_FUNC(sub_82333618);
PPC_FUNC_IMPL(__imp__sub_82333618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82333620;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r28,r4,-4
	ctx.r28.s64 = ctx.r4.s64 + -4;
	// bne cr6,0x8233363c
	if (!ctx.cr6.eq) goto loc_8233363C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8233363C:
	// lwz r30,224(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823336ac
	if (ctx.cr6.eq) goto loc_823336AC;
loc_82333648:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x82333660
	if (!ctx.cr6.eq) goto loc_82333660;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82333660:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823336a4
	if (ctx.cr6.eq) goto loc_823336A4;
	// addic. r11,r29,-8
	ctx.xer.ca = ctx.r29.u32 > 7;
	ctx.r11.s64 = ctx.r29.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// bne 0x82333690
	if (!ctx.cr0.eq) goto loc_82333690;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82333690:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823336A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823336A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82333648
	if (!ctx.cr6.eq) goto loc_82333648;
loc_823336AC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r29,-8
	ctx.r10.s64 = ctx.r29.s64 + -8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// and r4,r7,r29
	ctx.r4.u64 = ctx.r7.u64 & ctx.r29.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823336D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823336D8"))) PPC_WEAK_FUNC(sub_823336D8);
PPC_FUNC_IMPL(__imp__sub_823336D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823336E4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82333700
	if (ctx.cr6.eq) goto loc_82333700;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823336e4
	if (!ctx.cr6.eq) goto loc_823336E4;
	// blr 
	return;
loc_82333700:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x8232d758
	sub_8232D758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233370C"))) PPC_WEAK_FUNC(sub_8233370C);
PPC_FUNC_IMPL(__imp__sub_8233370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333710"))) PPC_WEAK_FUNC(sub_82333710);
PPC_FUNC_IMPL(__imp__sub_82333710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r11,24328
	ctx.r7.s64 = ctx.r11.s64 + 24328;
	// addi r6,r10,24584
	ctx.r6.s64 = ctx.r10.s64 + 24584;
	// addi r5,r9,24324
	ctx.r5.s64 = ctx.r9.s64 + 24324;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,24320
	ctx.r4.s64 = ctx.r8.s64 + 24320;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82333794
	if (ctx.cr6.eq) goto loc_82333794;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82333794
	if (ctx.cr6.eq) goto loc_82333794;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r31,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r31.u32);
loc_82333794:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332778
	ctx.lr = 0x8233379C;
	sub_82332778(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823326e0
	ctx.lr = 0x823337A8;
	sub_823326E0(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82334240
	ctx.lr = 0x823337B0;
	sub_82334240(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,22136
	ctx.r10.s64 = ctx.r11.s64 + 22136;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823337D4"))) PPC_WEAK_FUNC(sub_823337D4);
PPC_FUNC_IMPL(__imp__sub_823337D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823337D8"))) PPC_WEAK_FUNC(sub_823337D8);
PPC_FUNC_IMPL(__imp__sub_823337D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x823342d0
	sub_823342D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823337E0"))) PPC_WEAK_FUNC(sub_823337E0);
PPC_FUNC_IMPL(__imp__sub_823337E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82333710
	ctx.lr = 0x82333800;
	sub_82333710(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333820
	if (ctx.cr6.eq) goto loc_82333820;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32872
	ctx.r4.u64 = ctx.r4.u64 | 32872;
	// bl 0x8232d158
	ctx.lr = 0x8233381C;
	sub_8232D158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82333820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333838"))) PPC_WEAK_FUNC(sub_82333838);
PPC_FUNC_IMPL(__imp__sub_82333838) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,464(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8233386C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8233387c
	if (ctx.cr6.lt) goto loc_8233387C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_8233387C:
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

__attribute__((alias("__imp__sub_82333890"))) PPC_WEAK_FUNC(sub_82333890);
PPC_FUNC_IMPL(__imp__sub_82333890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248f70
	ctx.lr = 0x823338BC;
	sub_82248F70(ctx, base);
	// li r5,556
	ctx.r5.s64 = 556;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82248f70
	ctx.lr = 0x823338CC;
	sub_82248F70(ctx, base);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,460(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823338E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,1108
	ctx.r4.s64 = ctx.r1.s64 + 1108;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823338F8;
	sub_82248A40(ctx, base);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333910"))) PPC_WEAK_FUNC(sub_82333910);
PPC_FUNC_IMPL(__imp__sub_82333910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r30,r3,464
	ctx.r30.s64 = ctx.r3.s64 + 464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d97f8
	ctx.lr = 0x82333940;
	sub_822D97F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82333960
	if (ctx.cr6.lt) goto loc_82333960;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82333960:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333978"))) PPC_WEAK_FUNC(sub_82333978);
PPC_FUNC_IMPL(__imp__sub_82333978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82333980;
	sub_82248770(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// li r28,8
	ctx.r28.s64 = 8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823339c8
	if (ctx.cr6.eq) goto loc_823339C8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823339d0
	if (!ctx.cr6.eq) goto loc_823339D0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823339C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82333a2c
	if (ctx.cr6.eq) goto loc_82333A2C;
loc_823339D0:
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333a2c
	if (ctx.cr6.eq) goto loc_82333A2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823339F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82333A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r23,468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 468, ctx.r23.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82333A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82333A2C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq cr6,0x82333af8
	if (ctx.cr6.eq) goto loc_82333AF8;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// bl 0x82248f70
	ctx.lr = 0x82333A48;
	sub_82248F70(ctx, base);
	// li r5,556
	ctx.r5.s64 = 556;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82248f70
	ctx.lr = 0x82333A58;
	sub_82248F70(ctx, base);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82333adc
	if (ctx.cr6.eq) goto loc_82333ADC;
loc_82333A84:
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8224b070
	ctx.lr = 0x82333AAC;
	sub_8224B070(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82333acc
	if (!ctx.cr6.eq) goto loc_82333ACC;
	// lhz r11,1142(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1142);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82333acc
	if (!ctx.cr6.lt) goto loc_82333ACC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82333ACC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82333a84
	if (ctx.cr6.lt) goto loc_82333A84;
loc_82333ADC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333b38
	if (!ctx.cr6.eq) goto loc_82333B38;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_82333AF8:
	// bl 0x82248f70
	ctx.lr = 0x82333AFC;
	sub_82248F70(ctx, base);
	// li r5,556
	ctx.r5.s64 = 556;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82248f70
	ctx.lr = 0x82333B0C;
	sub_82248F70(ctx, base);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,1142(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1142);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82333b38
	if (!ctx.cr6.lt) goto loc_82333B38;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82333B38:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82333bd8
	if (ctx.cr6.lt) goto loc_82333BD8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82333b80
	if (!ctx.cr6.eq) goto loc_82333B80;
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lis r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,48000
	ctx.r6.u64 = ctx.r6.u64 | 48000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,472
	ctx.r4.s64 = ctx.r31.s64 + 472;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82333ba4
	goto loc_82333BA4;
loc_82333B80:
	// stw r25,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r25.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r23,476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 476, ctx.r23.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82333BA4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82333bd8
	if (ctx.cr6.lt) goto loc_82333BD8;
	// stw r27,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// sth r28,456(r31)
	PPC_STORE_U16(ctx.r31.u32 + 456, ctx.r28.u16);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82341740
	ctx.lr = 0x82333BC4;
	sub_82341740(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82333bd8
	if (ctx.cr6.lt) goto loc_82333BD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82333BD8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82333BE4"))) PPC_WEAK_FUNC(sub_82333BE4);
PPC_FUNC_IMPL(__imp__sub_82333BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333BE8"))) PPC_WEAK_FUNC(sub_82333BE8);
PPC_FUNC_IMPL(__imp__sub_82333BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82333c18
	// bdzf 4*cr6+eq,0x82333c20
	// bne cr6,0x82333c34
	if (!ctx.cr6.eq) goto loc_82333C34;
	// rlwinm r3,r11,9,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// blr 
	return;
loc_82333C18:
	// rlwinm r3,r11,31,28,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xE;
	// blr 
	return;
loc_82333C20:
	// rlwinm r10,r11,9,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// rlwinm r11,r11,30,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7;
	// addi r10,r10,22
	ctx.r10.s64 = ctx.r10.s64 + 22;
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// blr 
	return;
loc_82333C34:
	// rlwinm r11,r11,9,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1F;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,24456
	ctx.r8.s64 = ctx.r10.s64 + 24456;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333C54"))) PPC_WEAK_FUNC(sub_82333C54);
PPC_FUNC_IMPL(__imp__sub_82333C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333C58"))) PPC_WEAK_FUNC(sub_82333C58);
PPC_FUNC_IMPL(__imp__sub_82333C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82333C60;
	sub_8224878C(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248f70
	ctx.lr = 0x82333C80;
	sub_82248F70(ctx, base);
	// li r5,556
	ctx.r5.s64 = 556;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82248f70
	ctx.lr = 0x82333C90;
	sub_82248F70(ctx, base);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82333d58
	if (ctx.cr6.lt) goto loc_82333D58;
	// lwz r11,1104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r10,255
	ctx.r10.s64 = 255;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subf r8,r31,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r6,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r6.u32);
loc_82333CD4:
	// lhzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82333cf4
	if (ctx.cr6.eq) goto loc_82333CF4;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82333cd4
	if (!ctx.cr0.eq) goto loc_82333CD4;
	// b 0x82333cfc
	goto loc_82333CFC;
loc_82333CF4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82333d00
	if (!ctx.cr6.eq) goto loc_82333D00;
loc_82333CFC:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82333D00:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r31,510
	ctx.r10.s64 = ctx.r31.s64 + 510;
	// addi r8,r1,592
	ctx.r8.s64 = ctx.r1.s64 + 592;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// li r9,255
	ctx.r9.s64 = 255;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_82333D1C:
	// lhzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82333d48
	if (ctx.cr6.eq) goto loc_82333D48;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82333d1c
	if (!ctx.cr0.eq) goto loc_82333D1C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82333D48:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82333d54
	if (!ctx.cr6.eq) goto loc_82333D54;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82333D54:
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_82333D58:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82333D60"))) PPC_WEAK_FUNC(sub_82333D60);
PPC_FUNC_IMPL(__imp__sub_82333D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,480
	ctx.r30.s64 = ctx.r3.s64 + 480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e39c
	ctx.lr = 0x82333D84;
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82333da8
	if (ctx.cr6.eq) goto loc_82333DA8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333da0
	if (ctx.cr6.eq) goto loc_82333DA0;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82088758
	ctx.lr = 0x82333DA0;
	sub_82088758(ctx, base);
loc_82333DA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82333DA8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82333DA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333DC0"))) PPC_WEAK_FUNC(sub_82333DC0);
PPC_FUNC_IMPL(__imp__sub_82333DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82333dfc
	if (!ctx.cr6.lt) goto loc_82333DFC;
	// bl 0x8241e04c
	ctx.lr = 0x82333DF0;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82333dfc
	if (ctx.cr6.eq) goto loc_82333DFC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82333DFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333e10
	if (ctx.cr6.eq) goto loc_82333E10;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82333e8c
	if (ctx.cr6.eq) goto loc_82333E8C;
loc_82333E10:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82333e8c
	if (ctx.cr6.gt) goto loc_82333E8C;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// li r3,196
	ctx.r3.s64 = 196;
	// bl 0x82086c98
	ctx.lr = 0x82333E30;
	sub_82086C98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333e8c
	if (ctx.cr6.eq) goto loc_82333E8C;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82333E44:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bdnz 0x82333e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82333E44;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
loc_82333E8C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333ea4
	if (ctx.cr6.eq) goto loc_82333EA4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82333ea8
	goto loc_82333EA8;
loc_82333EA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82333EA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333EC0"))) PPC_WEAK_FUNC(sub_82333EC0);
PPC_FUNC_IMPL(__imp__sub_82333EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r31,30
	ctx.r10.u64 = ctx.r31.u32 & 0x3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82333f60
	if (ctx.cr6.gt) goto loc_82333F60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82333efc
	// bdzf 4*cr6+eq,0x82333f0c
	// bne cr6,0x82333f44
	if (!ctx.cr6.eq) goto loc_82333F44;
loc_82333EFC:
	// rlwinm r11,r31,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0xFF;
	// rlwinm r10,r31,27,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x3FFFF;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// b 0x82333f60
	goto loc_82333F60;
loc_82333F0C:
	// rlwinm r30,r31,30,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x7;
	// bl 0x82333be8
	ctx.lr = 0x82333F14;
	sub_82333BE8(ctx, base);
	// rlwinm r11,r31,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0xFF;
	// rlwinm r10,r31,27,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x3FFFF;
	// addi r9,r11,22
	ctx.r9.s64 = ctx.r11.s64 + 22;
	// mullw r8,r3,r10
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r9,r30
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r30,0
	// divwu r11,r6,r30
	ctx.r11.u32 = ctx.r6.u32 / ctx.r30.u32;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// divwu r11,r8,r5
	ctx.r11.u32 = ctx.r8.u32 / ctx.r5.u32;
	// twllei r5,0
	// b 0x82333f60
	goto loc_82333F60;
loc_82333F44:
	// rlwinm r10,r31,4,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bge cr6,0x82333f60
	if (!ctx.cr6.lt) goto loc_82333F60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24424
	ctx.r9.s64 = ctx.r11.s64 + 24424;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82333F60:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333F7C"))) PPC_WEAK_FUNC(sub_82333F7C);
PPC_FUNC_IMPL(__imp__sub_82333F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333F80"))) PPC_WEAK_FUNC(sub_82333F80);
PPC_FUNC_IMPL(__imp__sub_82333F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82333F88;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,484
	ctx.r28.s64 = ctx.r3.s64 + 484;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82333F9C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233401c
	if (ctx.cr6.eq) goto loc_8233401C;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
loc_82333FB0:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334010
	if (ctx.cr6.eq) goto loc_82334010;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// beq cr6,0x82333fd8
	if (ctx.cr6.eq) goto loc_82333FD8;
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// b 0x82333fdc
	goto loc_82333FDC;
loc_82333FD8:
	// stw r29,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r29.u32);
loc_82333FDC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// beq cr6,0x82334010
	if (ctx.cr6.eq) goto loc_82334010;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82334010:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333fb0
	if (!ctx.cr6.eq) goto loc_82333FB0;
loc_8233401C:
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334098
	if (ctx.cr6.eq) goto loc_82334098;
	// addi r31,r30,236
	ctx.r31.s64 = ctx.r30.s64 + 236;
loc_8233402C:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233408c
	if (ctx.cr6.eq) goto loc_8233408C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// beq cr6,0x82334054
	if (ctx.cr6.eq) goto loc_82334054;
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// b 0x82334058
	goto loc_82334058;
loc_82334054:
	// stw r29,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r29.u32);
loc_82334058:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// beq cr6,0x8233408c
	if (ctx.cr6.eq) goto loc_8233408C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233408C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233408C:
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233402c
	if (!ctx.cr6.eq) goto loc_8233402C;
loc_82334098:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823340d0
	if (ctx.cr6.eq) goto loc_823340D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341558
	ctx.lr = 0x823340AC;
	sub_82341558(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823340cc
	if (ctx.cr6.eq) goto loc_823340CC;
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
	ctx.lr = 0x823340CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823340CC:
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
loc_823340D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x823340D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823340F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823340FC"))) PPC_WEAK_FUNC(sub_823340FC);
PPC_FUNC_IMPL(__imp__sub_823340FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334100"))) PPC_WEAK_FUNC(sub_82334100);
PPC_FUNC_IMPL(__imp__sub_82334100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233418c
	if (ctx.cr6.eq) goto loc_8233418C;
loc_8233411C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334138
	if (ctx.cr6.eq) goto loc_82334138;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8233413c
	goto loc_8233413C;
loc_82334138:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8233413C:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82334160
	if (ctx.cr6.eq) goto loc_82334160;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233411c
	if (!ctx.cr6.eq) goto loc_8233411C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82334160:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8232d758
	ctx.lr = 0x8233416C;
	sub_8232D758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233418c
	if (ctx.cr6.eq) goto loc_8233418C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233418C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233418C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823341A0"))) PPC_WEAK_FUNC(sub_823341A0);
PPC_FUNC_IMPL(__imp__sub_823341A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233422c
	if (ctx.cr6.eq) goto loc_8233422C;
loc_823341BC:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823341d8
	if (ctx.cr6.eq) goto loc_823341D8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x823341dc
	goto loc_823341DC;
loc_823341D8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823341DC:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82334200
	if (ctx.cr6.eq) goto loc_82334200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823341bc
	if (!ctx.cr6.eq) goto loc_823341BC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82334200:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r3,r3,236
	ctx.r3.s64 = ctx.r3.s64 + 236;
	// bl 0x8232d758
	ctx.lr = 0x8233420C;
	sub_8232D758(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233422c
	if (ctx.cr6.eq) goto loc_8233422C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233422C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233422C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334240"))) PPC_WEAK_FUNC(sub_82334240);
PPC_FUNC_IMPL(__imp__sub_82334240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82334248;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334280
	if (ctx.cr6.eq) goto loc_82334280;
loc_8233425C:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// bne cr6,0x8233425c
	if (!ctx.cr6.eq) goto loc_8233425C;
loc_82334280:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// beq cr6,0x823342c4
	if (ctx.cr6.eq) goto loc_823342C4;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_8233429C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x823342b4
	if (ctx.cr6.eq) goto loc_823342B4;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// bl 0x82086968
	ctx.lr = 0x823342B4;
	sub_82086968(ctx, base);
loc_823342B4:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233429c
	if (!ctx.cr6.eq) goto loc_8233429C;
loc_823342C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823342CC"))) PPC_WEAK_FUNC(sub_823342CC);
PPC_FUNC_IMPL(__imp__sub_823342CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823342D0"))) PPC_WEAK_FUNC(sub_823342D0);
PPC_FUNC_IMPL(__imp__sub_823342D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82333dc0
	ctx.lr = 0x823342F0;
	sub_82333DC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334334
	if (ctx.cr6.eq) goto loc_82334334;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334320
	if (ctx.cr6.eq) goto loc_82334320;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x82334324
	goto loc_82334324;
loc_82334320:
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
loc_82334324:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82334334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233434C"))) PPC_WEAK_FUNC(sub_8233434C);
PPC_FUNC_IMPL(__imp__sub_8233434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334350"))) PPC_WEAK_FUNC(sub_82334350);
PPC_FUNC_IMPL(__imp__sub_82334350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,24536
	ctx.r9.s64 = ctx.r11.s64 + 24536;
	// addi r8,r10,24524
	ctx.r8.s64 = ctx.r10.s64 + 24524;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x822d7b20
	ctx.lr = 0x82334394;
	sub_822D7B20(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x822d7b20
	ctx.lr = 0x8233439C;
	sub_822D7B20(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// sth r30,456(r31)
	PPC_STORE_U16(ctx.r31.u32 + 456, ctx.r30.u16);
	// addi r11,r31,480
	ctx.r11.s64 = ctx.r31.s64 + 480;
	// addi r6,r7,22132
	ctx.r6.s64 = ctx.r7.s64 + 22132;
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r30,468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 468, ctx.r30.u8);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// stb r30,476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 476, ctx.r30.u8);
	// stw r6,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r6.u32);
	// bl 0x8241e07c
	ctx.lr = 0x823343CC;
	__imp__RtlInitializeCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_823343E8"))) PPC_WEAK_FUNC(sub_823343E8);
PPC_FUNC_IMPL(__imp__sub_823343E8) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,456(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823343F0"))) PPC_WEAK_FUNC(sub_823343F0);
PPC_FUNC_IMPL(__imp__sub_823343F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,464(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82334408"))) PPC_WEAK_FUNC(sub_82334408);
PPC_FUNC_IMPL(__imp__sub_82334408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lbz r10,476(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 476);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,24536
	ctx.r8.s64 = ctx.r11.s64 + 24536;
	// addi r7,r9,24524
	ctx.r7.s64 = ctx.r9.s64 + 24524;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82334464
	if (!ctx.cr6.eq) goto loc_82334464;
	// lwz r3,472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334464
	if (ctx.cr6.eq) goto loc_82334464;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82334464:
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823344a4
	if (ctx.cr6.eq) goto loc_823344A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,468(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 468);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823344a4
	if (!ctx.cr6.eq) goto loc_823344A4;
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823344A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823344A4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// addi r10,r11,22132
	ctx.r10.s64 = ctx.r11.s64 + 22132;
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// bl 0x82334240
	ctx.lr = 0x823344B8;
	sub_82334240(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82334240
	ctx.lr = 0x823344C0;
	sub_82334240(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823344D8"))) PPC_WEAK_FUNC(sub_823344D8);
PPC_FUNC_IMPL(__imp__sub_823344D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823344E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32815
	ctx.r4.u64 = ctx.r4.u64 | 32815;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x8232d150
	ctx.lr = 0x82334504;
	sub_8232D150(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334558
	if (ctx.cr6.eq) goto loc_82334558;
	// bl 0x82334350
	ctx.lr = 0x82334510;
	sub_82334350(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82334560
	if (!ctx.cr6.eq) goto loc_82334560;
loc_8233451C:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_82334524:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82334544
	if (ctx.cr6.eq) goto loc_82334544;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82334544:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82334558:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8233451c
	goto loc_8233451C;
loc_82334560:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333910
	ctx.lr = 0x8233456C;
	sub_82333910(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82334524
	if (ctx.cr6.lt) goto loc_82334524;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82334584"))) PPC_WEAK_FUNC(sub_82334584);
PPC_FUNC_IMPL(__imp__sub_82334584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334588"))) PPC_WEAK_FUNC(sub_82334588);
PPC_FUNC_IMPL(__imp__sub_82334588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82334590;
	sub_82248764(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// bl 0x82337db8
	ctx.lr = 0x823345B8;
	sub_82337DB8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823347b8
	if (!ctx.cr6.eq) goto loc_823347B8;
	// rlwinm r11,r11,30,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// li r3,52
	ctx.r3.s64 = 52;
	// rlwinm r26,r11,31,16,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFFF;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// bl 0x8232d150
	ctx.lr = 0x823345FC;
	sub_8232D150(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823348bc
	if (ctx.cr6.eq) goto loc_823348BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82337dd0
	ctx.lr = 0x82334610;
	sub_82337DD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334628
	if (ctx.cr6.eq) goto loc_82334628;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82337dd0
	ctx.lr = 0x82334620;
	sub_82337DD0(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8233462c
	goto loc_8233462C;
loc_82334628:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_8233462C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,30,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x823346a0
	if (ctx.cr6.gt) goto loc_823346A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8233466c
	// bdzf 4*cr6+eq,0x82334674
	// bdzf 4*cr6+eq,0x8233467c
	// bdzf 4*cr6+eq,0x82334684
	// bdzf 4*cr6+eq,0x8233468c
	// bdzf 4*cr6+eq,0x82334694
	// bne cr6,0x8233469c
	if (!ctx.cr6.eq) goto loc_8233469C;
	// li r27,4
	ctx.r27.s64 = 4;
	// b 0x823346a0
	goto loc_823346A0;
loc_8233466C:
	// li r27,3
	ctx.r27.s64 = 3;
	// b 0x823346a0
	goto loc_823346A0;
loc_82334674:
	// li r27,11
	ctx.r27.s64 = 11;
	// b 0x823346a0
	goto loc_823346A0;
loc_8233467C:
	// li r27,51
	ctx.r27.s64 = 51;
	// b 0x823346a0
	goto loc_823346A0;
loc_82334684:
	// li r27,59
	ctx.r27.s64 = 59;
	// b 0x823346a0
	goto loc_823346A0;
loc_8233468C:
	// li r27,63
	ctx.r27.s64 = 63;
	// b 0x823346a0
	goto loc_823346A0;
loc_82334694:
	// li r27,319
	ctx.r27.s64 = 319;
	// b 0x823346a0
	goto loc_823346A0;
loc_8233469C:
	// li r27,255
	ctx.r27.s64 = 255;
loc_823346A0:
	// li r11,358
	ctx.r11.s64 = 358;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r9,34
	ctx.r9.s64 = 34;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r7,r8,30,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x7;
	// sth r7,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r7.u16);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r5,27,14,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x3FFFF;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,31,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xE;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r7,27,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x3FFFF;
	// mullw r4,r5,r8
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// sth r9,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r9.u16);
	// sth r26,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r26.u16);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// bl 0x823c3d48
	ctx.lr = 0x82334708;
	sub_823C3D48(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f6338
	ctx.lr = 0x82334714;
	sub_822F6338(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82337d70
	ctx.lr = 0x8233472C;
	sub_82337D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82334744
	if (ctx.cr6.eq) goto loc_82334744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82156a10
	ctx.lr = 0x8233473C;
	sub_82156A10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82334748
	goto loc_82334748;
loc_82334744:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82334748:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82337d70
	ctx.lr = 0x82334754;
	sub_82337D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82334768
	if (ctx.cr6.eq) goto loc_82334768;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222c1d0
	ctx.lr = 0x82334764;
	sub_8222C1D0(ctx, base);
	// b 0x8233476c
	goto loc_8233476C;
loc_82334768:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8233476C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82334788
	if (!ctx.cr6.gt) goto loc_82334788;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82334788:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82337d70
	ctx.lr = 0x82334790;
	sub_82337D70(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r9,255
	ctx.r9.s64 = 255;
	// sth r29,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r29.u16);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r5,4
	ctx.r5.s64 = 4;
	// and r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 & ctx.r9.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stb r5,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r5.u8);
	// stb r6,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r6.u8);
	// b 0x823348ac
	goto loc_823348AC;
loc_823347B8:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// bne cr6,0x82334848
	if (!ctx.cr6.eq) goto loc_82334848;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// li r6,0
	ctx.r6.s64 = 0;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// li r3,40
	ctx.r3.s64 = 40;
	// rlwinm r29,r11,27,14,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3FFFF;
	// rlwinm r27,r11,30,29,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7;
	// addi r26,r10,353
	ctx.r26.s64 = ctx.r10.s64 + 353;
	// bl 0x8232d150
	ctx.lr = 0x823347F4;
	sub_8232D150(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334824
	if (ctx.cr6.eq) goto loc_82334824;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r24,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r24.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82341810
	ctx.lr = 0x82334824;
	sub_82341810(ctx, base);
loc_82334824:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x823380e0
	ctx.lr = 0x82334830;
	sub_823380E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bl 0x82333ec0
	ctx.lr = 0x82334840;
	sub_82333EC0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x823348ac
	goto loc_823348AC;
loc_82334848:
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r28,16
	ctx.r28.s64 = 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8233485c
	if (ctx.cr6.eq) goto loc_8233485C;
	// li r28,8
	ctx.r28.s64 = 8;
loc_8233485C:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// li r3,40
	ctx.r3.s64 = 40;
	// rlwinm r31,r11,27,14,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3FFFF;
	// rlwinm r30,r11,30,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7;
	// bl 0x8232d150
	ctx.lr = 0x8233487C;
	sub_8232D150(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823348bc
	if (ctx.cr6.eq) goto loc_823348BC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r24,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r24.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82341810
	ctx.lr = 0x823348AC;
	sub_82341810(ctx, base);
loc_823348AC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823348bc
	if (ctx.cr6.eq) goto loc_823348BC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x823348c4
	goto loc_823348C4;
loc_823348BC:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_823348C4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// blt cr6,0x82334948
	if (ctx.cr6.lt) goto loc_82334948;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x823348e4
	if (!ctx.cr6.eq) goto loc_823348E4;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_823348E4:
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r8,472(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 472);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lhz r31,456(r25)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r25.u32 + 456);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r3,464(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 464);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lfs f1,8328(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8328);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82342728
	ctx.lr = 0x82334924;
	sub_82342728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82334948
	if (ctx.cr6.lt) goto loc_82334948;
	// addi r3,r25,16
	ctx.r3.s64 = ctx.r25.s64 + 16;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x823342d0
	ctx.lr = 0x8233493C;
	sub_823342D0(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82334948:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82334960
	if (ctx.cr6.eq) goto loc_82334960;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8232d158
	ctx.lr = 0x82334960;
	sub_8232D158(ctx, base);
loc_82334960:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_8233496C"))) PPC_WEAK_FUNC(sub_8233496C);
PPC_FUNC_IMPL(__imp__sub_8233496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334970"))) PPC_WEAK_FUNC(sub_82334970);
PPC_FUNC_IMPL(__imp__sub_82334970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82334978;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x822da390
	ctx.lr = 0x82334998;
	sub_822DA390(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823349f8
	if (ctx.cr6.lt) goto loc_823349F8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r3,464(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// lis r5,0
	ctx.r5.s64 = 0;
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ori r5,r5,48000
	ctx.r5.u64 = ctx.r5.u64 | 48000;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x82342a38
	ctx.lr = 0x823349F4;
	sub_82342A38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823349F8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334a14
	if (ctx.cr6.eq) goto loc_82334A14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82334A14:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82334a30
	if (ctx.cr6.lt) goto loc_82334A30;
	// addi r3,r29,236
	ctx.r3.s64 = ctx.r29.s64 + 236;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823342d0
	ctx.lr = 0x82334A28;
	sub_823342D0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82334A30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82334A3C"))) PPC_WEAK_FUNC(sub_82334A3C);
PPC_FUNC_IMPL(__imp__sub_82334A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334A40"))) PPC_WEAK_FUNC(sub_82334A40);
PPC_FUNC_IMPL(__imp__sub_82334A40) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823344d8
	ctx.lr = 0x82334A64;
	sub_823344D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82334a74
	if (ctx.cr6.lt) goto loc_82334A74;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82334A74:
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

__attribute__((alias("__imp__sub_82334A88"))) PPC_WEAK_FUNC(sub_82334A88);
PPC_FUNC_IMPL(__imp__sub_82334A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82334408
	ctx.lr = 0x82334AA8;
	sub_82334408(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334ac8
	if (ctx.cr6.eq) goto loc_82334AC8;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32815
	ctx.r4.u64 = ctx.r4.u64 | 32815;
	// bl 0x8232d158
	ctx.lr = 0x82334AC4;
	sub_8232D158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82334AC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334AE0"))) PPC_WEAK_FUNC(sub_82334AE0);
PPC_FUNC_IMPL(__imp__sub_82334AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82333568
	ctx.lr = 0x82334AF8;
	sub_82333568(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r3,r7,24684
	ctx.r3.s64 = ctx.r7.s64 + 24684;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,24592
	ctx.r6.s64 = ctx.r10.s64 + 24592;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r5,r9,24584
	ctx.r5.s64 = ctx.r9.s64 + 24584;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// addi r4,r8,24324
	ctx.r4.s64 = ctx.r8.s64 + 24324;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334B54"))) PPC_WEAK_FUNC(sub_82334B54);
PPC_FUNC_IMPL(__imp__sub_82334B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334B58"))) PPC_WEAK_FUNC(sub_82334B58);
PPC_FUNC_IMPL(__imp__sub_82334B58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x823353e8
	sub_823353E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334B60"))) PPC_WEAK_FUNC(sub_82334B60);
PPC_FUNC_IMPL(__imp__sub_82334B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82334B68;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82332308
	ctx.lr = 0x82334B94;
	sub_82332308(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332348
	ctx.lr = 0x82334BA4;
	sub_82332348(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// rlwinm r11,r28,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0x7F8;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82334BCC"))) PPC_WEAK_FUNC(sub_82334BCC);
PPC_FUNC_IMPL(__imp__sub_82334BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334BD0"))) PPC_WEAK_FUNC(sub_82334BD0);
PPC_FUNC_IMPL(__imp__sub_82334BD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334BD8"))) PPC_WEAK_FUNC(sub_82334BD8);
PPC_FUNC_IMPL(__imp__sub_82334BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82334C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 34);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334C38"))) PPC_WEAK_FUNC(sub_82334C38);
PPC_FUNC_IMPL(__imp__sub_82334C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82334C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,38(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 38);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334C98"))) PPC_WEAK_FUNC(sub_82334C98);
PPC_FUNC_IMPL(__imp__sub_82334C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82334CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,58(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 58);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334CF8"))) PPC_WEAK_FUNC(sub_82334CF8);
PPC_FUNC_IMPL(__imp__sub_82334CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82334D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 62);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334D58"))) PPC_WEAK_FUNC(sub_82334D58);
PPC_FUNC_IMPL(__imp__sub_82334D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82334D60;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82334D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1FFFE;
	// lwz r9,66(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 66);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82334DB8"))) PPC_WEAK_FUNC(sub_82334DB8);
PPC_FUNC_IMPL(__imp__sub_82334DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334DF4"))) PPC_WEAK_FUNC(sub_82334DF4);
PPC_FUNC_IMPL(__imp__sub_82334DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334DF8"))) PPC_WEAK_FUNC(sub_82334DF8);
PPC_FUNC_IMPL(__imp__sub_82334DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82334E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334E38;
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

__attribute__((alias("__imp__sub_82334E50"))) PPC_WEAK_FUNC(sub_82334E50);
PPC_FUNC_IMPL(__imp__sub_82334E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334E64"))) PPC_WEAK_FUNC(sub_82334E64);
PPC_FUNC_IMPL(__imp__sub_82334E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334E68"))) PPC_WEAK_FUNC(sub_82334E68);
PPC_FUNC_IMPL(__imp__sub_82334E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82334E70;
	sub_8224878C(ctx, base);
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
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82334E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r29,25(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 25);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82334EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rotlwi r7,r29,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// li r6,6
	ctx.r6.s64 = 6;
	// subf r5,r7,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r7.s64;
	// subf r4,r3,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r3.s64;
	// divwu r3,r4,r6
	ctx.r3.u32 = ctx.r4.u32 / ctx.r6.u32;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82334EC4"))) PPC_WEAK_FUNC(sub_82334EC4);
PPC_FUNC_IMPL(__imp__sub_82334EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

