#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820E6400"))) PPC_WEAK_FUNC(sub_820E6400);
PPC_FUNC_IMPL(__imp__sub_820E6400) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x820e6464
	if (!ctx.cr6.lt) goto loc_820E6464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82256578
	ctx.lr = 0x820E6430;
	sub_82256578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e6464
	if (!ctx.cr6.eq) goto loc_820E6464;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E6450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_820E6464:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_820E647C"))) PPC_WEAK_FUNC(sub_820E647C);
PPC_FUNC_IMPL(__imp__sub_820E647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E6480"))) PPC_WEAK_FUNC(sub_820E6480);
PPC_FUNC_IMPL(__imp__sub_820E6480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E6488;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// bl 0x8241e0ac
	ctx.lr = 0x820E64B4;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e6574
	if (ctx.cr6.eq) goto loc_820E6574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820e5ce8
	ctx.lr = 0x820E64CC;
	sub_820E5CE8(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e6534
	if (ctx.cr6.eq) goto loc_820E6534;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_820E64E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256340
	ctx.lr = 0x820E64F0;
	sub_82256340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e64fc
	if (ctx.cr6.eq) goto loc_820E64FC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_820E64FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820e64e8
	if (ctx.cr6.lt) goto loc_820E64E8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820e6524
	if (!ctx.cr6.eq) goto loc_820E6524;
	// bl 0x82088600
	ctx.lr = 0x820E6514;
	sub_82088600(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x820e6534
	goto loc_820E6534;
loc_820E6524:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e61e0
	ctx.lr = 0x820E652C;
	sub_820E61E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e6380
	ctx.lr = 0x820E6534;
	sub_820E6380(ctx, base);
loc_820E6534:
	// rlwinm r11,r27,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1E;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e6574
	if (ctx.cr6.eq) goto loc_820E6574;
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823522f8
	ctx.lr = 0x820E6550;
	sub_823522F8(ctx, base);
	// lis r11,-32643
	ctx.r11.s64 = -2139291648;
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820e656c
	if (!ctx.cr6.eq) goto loc_820E656C;
	// li r4,3848
	ctx.r4.s64 = 3848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x820E656C;
	sub_822AA648(ctx, base);
loc_820E656C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5f88
	ctx.lr = 0x820E6574;
	sub_820E5F88(ctx, base);
loc_820E6574:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e65a8
	if (ctx.cr6.eq) goto loc_820E65A8;
	// bl 0x82088600
	ctx.lr = 0x820E6584;
	sub_82088600(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
	// blt cr6,0x820e65a8
	if (ctx.cr6.lt) goto loc_820E65A8;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e61e0
	ctx.lr = 0x820E65A0;
	sub_820E61E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e6380
	ctx.lr = 0x820E65A8;
	sub_820E6380(ctx, base);
loc_820E65A8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e65c4
	if (ctx.cr6.eq) goto loc_820E65C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E65C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E65C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E65CC"))) PPC_WEAK_FUNC(sub_820E65CC);
PPC_FUNC_IMPL(__imp__sub_820E65CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E65D0"))) PPC_WEAK_FUNC(sub_820E65D0);
PPC_FUNC_IMPL(__imp__sub_820E65D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x820e65fc
	if (ctx.cr6.lt) goto loc_820E65FC;
	// bne cr6,0x820e660c
	if (!ctx.cr6.eq) goto loc_820E660C;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x820e6600
	goto loc_820E6600;
loc_820E65FC:
	// li r4,1
	ctx.r4.s64 = 1;
loc_820E6600:
	// bl 0x822565d0
	ctx.lr = 0x820E6604;
	sub_822565D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e663c
	if (!ctx.cr6.eq) goto loc_820E663C;
loc_820E660C:
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
	ctx.lr = 0x820E6624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_820E663C:
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

__attribute__((alias("__imp__sub_820E6654"))) PPC_WEAK_FUNC(sub_820E6654);
PPC_FUNC_IMPL(__imp__sub_820E6654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E6658"))) PPC_WEAK_FUNC(sub_820E6658);
PPC_FUNC_IMPL(__imp__sub_820E6658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x822565f0
	ctx.lr = 0x820E6678;
	sub_822565F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e66b0
	if (!ctx.cr6.eq) goto loc_820E66B0;
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
	ctx.lr = 0x820E6698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_820E66B0:
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

__attribute__((alias("__imp__sub_820E66C8"))) PPC_WEAK_FUNC(sub_820E66C8);
PPC_FUNC_IMPL(__imp__sub_820E66C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x822565e0
	ctx.lr = 0x820E66E8;
	sub_822565E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e6720
	if (!ctx.cr6.eq) goto loc_820E6720;
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
	ctx.lr = 0x820E6708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_820E6720:
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

__attribute__((alias("__imp__sub_820E6738"))) PPC_WEAK_FUNC(sub_820E6738);
PPC_FUNC_IMPL(__imp__sub_820E6738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822565e8
	ctx.lr = 0x820E6754;
	sub_822565E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e678c
	if (!ctx.cr6.eq) goto loc_820E678C;
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
	ctx.lr = 0x820E6774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_820E678C:
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

__attribute__((alias("__imp__sub_820E67A4"))) PPC_WEAK_FUNC(sub_820E67A4);
PPC_FUNC_IMPL(__imp__sub_820E67A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E67A8"))) PPC_WEAK_FUNC(sub_820E67A8);
PPC_FUNC_IMPL(__imp__sub_820E67A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E67B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820f3a78
	ctx.lr = 0x820E67C0;
	sub_820F3A78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820855d8
	ctx.lr = 0x820E67C8;
	sub_820855D8(ctx, base);
	// clrldi r5,r29,32
	ctx.r5.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// li r6,-1
	ctx.r6.s64 = -1;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822565f8
	ctx.lr = 0x820E67E0;
	sub_822565F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e680c
	if (!ctx.cr6.eq) goto loc_820E680C;
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
	ctx.lr = 0x820E6800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820E680C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E6818"))) PPC_WEAK_FUNC(sub_820E6818);
PPC_FUNC_IMPL(__imp__sub_820E6818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x820e58e0
	ctx.lr = 0x820E6830;
	sub_820E58E0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,18444
	ctx.r9.s64 = ctx.r10.s64 + 18444;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E6860"))) PPC_WEAK_FUNC(sub_820E6860);
PPC_FUNC_IMPL(__imp__sub_820E6860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E6874"))) PPC_WEAK_FUNC(sub_820E6874);
PPC_FUNC_IMPL(__imp__sub_820E6874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E6878"))) PPC_WEAK_FUNC(sub_820E6878);
PPC_FUNC_IMPL(__imp__sub_820E6878) {
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
	// bl 0x820f3a78
	ctx.lr = 0x820E6890;
	sub_820F3A78(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_820E68B4"))) PPC_WEAK_FUNC(sub_820E68B4);
PPC_FUNC_IMPL(__imp__sub_820E68B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E68B8"))) PPC_WEAK_FUNC(sub_820E68B8);
PPC_FUNC_IMPL(__imp__sub_820E68B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,18444
	ctx.r10.s64 = ctx.r11.s64 + 18444;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e58d0
	ctx.lr = 0x820E68E4;
	sub_820E58D0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e6900
	if (ctx.cr6.eq) goto loc_820E6900;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E68FC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E6900:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E6918"))) PPC_WEAK_FUNC(sub_820E6918);
PPC_FUNC_IMPL(__imp__sub_820E6918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E6920;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x820E6944;
	sub_822AA648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82256758
	ctx.lr = 0x820E6950;
	sub_82256758(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x820e6960
	if (!ctx.cr6.eq) goto loc_820E6960;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_820E6960:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E6968"))) PPC_WEAK_FUNC(sub_820E6968);
PPC_FUNC_IMPL(__imp__sub_820E6968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e69bc
	if (!ctx.cr6.eq) goto loc_820E69BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8208a480
	ctx.lr = 0x820E6998;
	sub_8208A480(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e69b4
	if (ctx.cr6.eq) goto loc_820E69B4;
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x820e69bc
	if (ctx.cr6.eq) goto loc_820E69BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x820e69b8
	goto loc_820E69B8;
loc_820E69B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E69B8:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_820E69BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E69D0"))) PPC_WEAK_FUNC(sub_820E69D0);
PPC_FUNC_IMPL(__imp__sub_820E69D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E69D8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12884(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12884);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,404
	ctx.r4.s64 = 404;
	// addi r3,r11,764
	ctx.r3.s64 = ctx.r11.s64 + 764;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822aa648
	ctx.lr = 0x820E6A04;
	sub_822AA648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820e6a6c
	if (ctx.cr6.eq) goto loc_820E6A6C;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
loc_820E6A14:
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x820855e8
	ctx.lr = 0x820E6A1C;
	sub_820855E8(ctx, base);
	// lwz r11,12884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12884);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 764, ctx.r27.u32);
	// lwz r9,12884(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12884);
	// mulli r11,r9,404
	ctx.r11.s64 = ctx.r9.s64 * 404;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,768(r8)
	PPC_STORE_U32(ctx.r8.u32 + 768, ctx.r3.u32);
	// lwz r7,12884(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12884);
	// mulli r11,r7,404
	ctx.r11.s64 = ctx.r7.s64 * 404;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,1164
	ctx.r10.s64 = ctx.r11.s64 + 1164;
	// lwz r10,1164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,1164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1164, ctx.r6.u32);
	// bne 0x820e6a14
	if (!ctx.cr0.eq) goto loc_820E6A14;
loc_820E6A6C:
	// lwz r11,12884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12884);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12884, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E6A80"))) PPC_WEAK_FUNC(sub_820E6A80);
PPC_FUNC_IMPL(__imp__sub_820E6A80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820e6a94
	if (!ctx.cr6.eq) goto loc_820E6A94;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r11.u32);
	// blr 
	return;
loc_820E6A94:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,308
	ctx.r5.s64 = 308;
	// stw r11,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r11.u32);
	// addi r3,r3,440
	ctx.r3.s64 = ctx.r3.s64 + 440;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x821847a8
	sub_821847A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E6AAC"))) PPC_WEAK_FUNC(sub_820E6AAC);
PPC_FUNC_IMPL(__imp__sub_820E6AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E6AB0"))) PPC_WEAK_FUNC(sub_820E6AB0);
PPC_FUNC_IMPL(__imp__sub_820E6AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E6AB8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r29,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r29.u32);
	// beq cr6,0x820e6afc
	if (ctx.cr6.eq) goto loc_820E6AFC;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820E6ADC:
	// lwz r10,760(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// lwz r9,764(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r8.u32);
	// bdnz 0x820e6adc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E6ADC;
loc_820E6AFC:
	// lwz r11,12884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12884);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820e6b48
	if (!ctx.cr6.gt) goto loc_820E6B48;
	// addi r30,r31,764
	ctx.r30.s64 = ctx.r31.s64 + 764;
loc_820E6B0C:
	// li r4,404
	ctx.r4.s64 = 404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x820E6B18;
	sub_822AA648(ctx, base);
	// lwz r11,12884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12884);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820e6b38
	if (!ctx.cr6.lt) goto loc_820E6B38;
	// li r5,404
	ctx.r5.s64 = 404;
	// addi r4,r30,404
	ctx.r4.s64 = ctx.r30.s64 + 404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x820E6B38;
	sub_821847A8(ctx, base);
loc_820E6B38:
	// lwz r11,12884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12884);
	// addi r30,r30,404
	ctx.r30.s64 = ctx.r30.s64 + 404;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820e6b0c
	if (ctx.cr6.lt) goto loc_820E6B0C;
loc_820E6B48:
	// lwz r11,12884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12884);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r10.u32);
	// stw r9,12884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12884, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E6B64"))) PPC_WEAK_FUNC(sub_820E6B64);
PPC_FUNC_IMPL(__imp__sub_820E6B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E6B68"))) PPC_WEAK_FUNC(sub_820E6B68);
PPC_FUNC_IMPL(__imp__sub_820E6B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820e59e8
	ctx.lr = 0x820E6B84;
	sub_820E59E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,18468
	ctx.r10.s64 = ctx.r11.s64 + 18468;
	// stw r30,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r30.u32);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,308
	ctx.r4.s64 = 308;
	// stw r30,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r30.u32);
	// stw r30,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r30.u32);
	// stw r30,12884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12884, ctx.r30.u32);
	// std r30,12888(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12888, ctx.r30.u64);
	// bl 0x822aa648
	ctx.lr = 0x820E6BB4;
	sub_822AA648(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r4,404
	ctx.r4.s64 = 404;
	// bl 0x822aa648
	ctx.lr = 0x820E6BC0;
	sub_822AA648(ctx, base);
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x822aa648
	ctx.lr = 0x820E6BCC;
	sub_822AA648(ctx, base);
	// addi r3,r31,764
	ctx.r3.s64 = ctx.r31.s64 + 764;
	// li r4,12120
	ctx.r4.s64 = 12120;
	// bl 0x822aa648
	ctx.lr = 0x820E6BD8;
	sub_822AA648(ctx, base);
	// stw r30,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_820E6BF8"))) PPC_WEAK_FUNC(sub_820E6BF8);
PPC_FUNC_IMPL(__imp__sub_820E6BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,18468
	ctx.r10.s64 = ctx.r11.s64 + 18468;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e5a00
	ctx.lr = 0x820E6C24;
	sub_820E5A00(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e6c40
	if (ctx.cr6.eq) goto loc_820E6C40;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E6C3C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E6C40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E6C58"))) PPC_WEAK_FUNC(sub_820E6C58);
PPC_FUNC_IMPL(__imp__sub_820E6C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E6C60;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e6ce0
	if (!ctx.cr6.eq) goto loc_820E6CE0;
	// li r4,404
	ctx.r4.s64 = 404;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x820E6C8C;
	sub_822AA648(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// bl 0x822aa648
	ctx.lr = 0x820E6C98;
	sub_822AA648(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e6ccc
	if (ctx.cr6.eq) goto loc_820E6CCC;
	// addi r28,r29,-4
	ctx.r28.s64 = ctx.r29.s64 + -4;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_820E6CA8:
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x820855e8
	ctx.lr = 0x820E6CB0;
	sub_820855E8(ctx, base);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r3,8(r29)
	ea = 8 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// bne 0x820e6ca8
	if (!ctx.cr0.eq) goto loc_820E6CA8;
loc_820E6CCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r27.u32);
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820E6CE0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e69d0
	ctx.lr = 0x820E6CF4;
	sub_820E69D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E6CFC"))) PPC_WEAK_FUNC(sub_820E6CFC);
PPC_FUNC_IMPL(__imp__sub_820E6CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E6D00"))) PPC_WEAK_FUNC(sub_820E6D00);
PPC_FUNC_IMPL(__imp__sub_820E6D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,412
	ctx.r3.s64 = ctx.r3.s64 + 412;
	// bl 0x8208a480
	ctx.lr = 0x820E6D24;
	sub_8208A480(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e6d44
	if (!ctx.cr6.eq) goto loc_820E6D44;
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// beq cr6,0x820e6d40
	if (ctx.cr6.eq) goto loc_820E6D40;
	// li r11,3
	ctx.r11.s64 = 3;
loc_820E6D40:
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
loc_820E6D44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E6D58"))) PPC_WEAK_FUNC(sub_820E6D58);
PPC_FUNC_IMPL(__imp__sub_820E6D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r3,412
	ctx.r5.s64 = ctx.r3.s64 + 412;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// bl 0x82256168
	ctx.lr = 0x820E6D7C;
	sub_82256168(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x820e6d8c
	if (!ctx.cr6.eq) goto loc_820E6D8C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
loc_820E6D8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E6DA0"))) PPC_WEAK_FUNC(sub_820E6DA0);
PPC_FUNC_IMPL(__imp__sub_820E6DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,412
	ctx.r3.s64 = ctx.r3.s64 + 412;
	// bl 0x8208a480
	ctx.lr = 0x820E6DC4;
	sub_8208A480(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e6dd4
	if (ctx.cr6.eq) goto loc_820E6DD4;
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x820e6ddc
	if (ctx.cr6.eq) goto loc_820E6DDC;
loc_820E6DD4:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
loc_820E6DDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E6DF0"))) PPC_WEAK_FUNC(sub_820E6DF0);
PPC_FUNC_IMPL(__imp__sub_820E6DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
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
	// bdzf 4*cr6+eq,0x820e6e24
	// bdzf 4*cr6+eq,0x820e6e28
	// bdzf 4*cr6+eq,0x820e6e2c
	// bne cr6,0x820e6e30
	if (!ctx.cr6.eq) goto loc_820E6E30;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 756, ctx.r11.u32);
	// blr 
	return;
loc_820E6E24:
	// b 0x820e6d00
	sub_820E6D00(ctx, base);
	return;
loc_820E6E28:
	// b 0x820e6d58
	sub_820E6D58(ctx, base);
	return;
loc_820E6E2C:
	// b 0x820e6da0
	sub_820E6DA0(ctx, base);
	return;
loc_820E6E30:
	// lwz r11,12884(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12884);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 756, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x820e6ab0
	sub_820E6AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E6E48"))) PPC_WEAK_FUNC(sub_820E6E48);
PPC_FUNC_IMPL(__imp__sub_820E6E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82085658
	ctx.lr = 0x820E6E64;
	sub_82085658(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256270
	ctx.lr = 0x820E6E78;
	sub_82256270(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E6E8C"))) PPC_WEAK_FUNC(sub_820E6E8C);
PPC_FUNC_IMPL(__imp__sub_820E6E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E6E90"))) PPC_WEAK_FUNC(sub_820E6E90);
PPC_FUNC_IMPL(__imp__sub_820E6E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,18484
	ctx.r10.s64 = ctx.r11.s64 + 18484;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e5a00
	ctx.lr = 0x820E6EBC;
	sub_820E5A00(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e6ed8
	if (ctx.cr6.eq) goto loc_820E6ED8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E6ED4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E6ED8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E6EF0"))) PPC_WEAK_FUNC(sub_820E6EF0);
PPC_FUNC_IMPL(__imp__sub_820E6EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8215bd08
	ctx.lr = 0x820E6F10;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820e6f24
	if (ctx.cr6.eq) goto loc_820E6F24;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x820e6f30
	goto loc_820E6F30;
loc_820E6F24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085658
	ctx.lr = 0x820E6F2C;
	sub_82085658(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_820E6F30:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// bl 0x82256270
	ctx.lr = 0x820E6F40;
	sub_82256270(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E6F58"))) PPC_WEAK_FUNC(sub_820E6F58);
PPC_FUNC_IMPL(__imp__sub_820E6F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8215bd08
	ctx.lr = 0x820E6F70;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820e6f90
	if (ctx.cr6.eq) goto loc_820E6F90;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256270
	ctx.lr = 0x820E6F90;
	sub_82256270(ctx, base);
loc_820E6F90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E6FA4"))) PPC_WEAK_FUNC(sub_820E6FA4);
PPC_FUNC_IMPL(__imp__sub_820E6FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E6FA8"))) PPC_WEAK_FUNC(sub_820E6FA8);
PPC_FUNC_IMPL(__imp__sub_820E6FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E6FB0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820e59e8
	ctx.lr = 0x820E6FBC;
	sub_820E59E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,18484
	ctx.r10.s64 = ctx.r11.s64 + 18484;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// ori r30,r11,32769
	ctx.r30.u64 = ctx.r11.u64 | 32769;
loc_820E6FD4:
	// bl 0x8215bd08
	ctx.lr = 0x820E6FD8;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820e6fec
	if (ctx.cr6.eq) goto loc_820E6FEC;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x820e6ff8
	goto loc_820E6FF8;
loc_820E6FEC:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82085658
	ctx.lr = 0x820E6FF4;
	sub_82085658(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_820E6FF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256270
	ctx.lr = 0x820E7004;
	sub_82256270(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x820e6fd4
	if (ctx.cr6.lt) goto loc_820E6FD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E701C"))) PPC_WEAK_FUNC(sub_820E701C);
PPC_FUNC_IMPL(__imp__sub_820E701C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7020"))) PPC_WEAK_FUNC(sub_820E7020);
PPC_FUNC_IMPL(__imp__sub_820E7020) {
	PPC_FUNC_PROLOGUE();
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x822aa648
	sub_822AA648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E702C"))) PPC_WEAK_FUNC(sub_820E702C);
PPC_FUNC_IMPL(__imp__sub_820E702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7030"))) PPC_WEAK_FUNC(sub_820E7030);
PPC_FUNC_IMPL(__imp__sub_820E7030) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,252
	ctx.r4.s64 = 252;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x820E705C;
	sub_82256350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e7094
	if (!ctx.cr6.eq) goto loc_820E7094;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne cr6,0x820e7094
	if (!ctx.cr6.eq) goto loc_820E7094;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,251
	ctx.r4.s64 = 251;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x820E7084;
	sub_82256350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e7094
	if (!ctx.cr6.eq) goto loc_820E7094;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_820E7094:
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

__attribute__((alias("__imp__sub_820E70A8"))) PPC_WEAK_FUNC(sub_820E70A8);
PPC_FUNC_IMPL(__imp__sub_820E70A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,249
	ctx.r4.s64 = 249;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x820E70D4;
	sub_82256350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e710c
	if (!ctx.cr6.eq) goto loc_820E710C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x820e710c
	if (!ctx.cr6.eq) goto loc_820E710C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,248
	ctx.r4.s64 = 248;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x820E70FC;
	sub_82256350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e710c
	if (!ctx.cr6.eq) goto loc_820E710C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_820E710C:
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

__attribute__((alias("__imp__sub_820E7120"))) PPC_WEAK_FUNC(sub_820E7120);
PPC_FUNC_IMPL(__imp__sub_820E7120) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,247
	ctx.r4.s64 = 247;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x820E714C;
	sub_82256350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e7184
	if (!ctx.cr6.eq) goto loc_820E7184;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bne cr6,0x820e7184
	if (!ctx.cr6.eq) goto loc_820E7184;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,246
	ctx.r4.s64 = 246;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x820E7174;
	sub_82256350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e7184
	if (!ctx.cr6.eq) goto loc_820E7184;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_820E7184:
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

__attribute__((alias("__imp__sub_820E7198"))) PPC_WEAK_FUNC(sub_820E7198);
PPC_FUNC_IMPL(__imp__sub_820E7198) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,244
	ctx.r4.s64 = 244;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x820E71C4;
	sub_82256350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e71fc
	if (!ctx.cr6.eq) goto loc_820E71FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bne cr6,0x820e71fc
	if (!ctx.cr6.eq) goto loc_820E71FC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,243
	ctx.r4.s64 = 243;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x820E71EC;
	sub_82256350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e71fc
	if (!ctx.cr6.eq) goto loc_820E71FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_820E71FC:
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

__attribute__((alias("__imp__sub_820E7210"))) PPC_WEAK_FUNC(sub_820E7210);
PPC_FUNC_IMPL(__imp__sub_820E7210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e722c
	if (ctx.cr6.eq) goto loc_820E722C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E722C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7234"))) PPC_WEAK_FUNC(sub_820E7234);
PPC_FUNC_IMPL(__imp__sub_820E7234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7238"))) PPC_WEAK_FUNC(sub_820E7238);
PPC_FUNC_IMPL(__imp__sub_820E7238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e7254
	if (ctx.cr6.eq) goto loc_820E7254;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E7254:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E725C"))) PPC_WEAK_FUNC(sub_820E725C);
PPC_FUNC_IMPL(__imp__sub_820E725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7260"))) PPC_WEAK_FUNC(sub_820E7260);
PPC_FUNC_IMPL(__imp__sub_820E7260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e727c
	if (ctx.cr6.eq) goto loc_820E727C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E727C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7284"))) PPC_WEAK_FUNC(sub_820E7284);
PPC_FUNC_IMPL(__imp__sub_820E7284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7288"))) PPC_WEAK_FUNC(sub_820E7288);
PPC_FUNC_IMPL(__imp__sub_820E7288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e72a4
	if (ctx.cr6.eq) goto loc_820E72A4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E72A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E72AC"))) PPC_WEAK_FUNC(sub_820E72AC);
PPC_FUNC_IMPL(__imp__sub_820E72AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E72B0"))) PPC_WEAK_FUNC(sub_820E72B0);
PPC_FUNC_IMPL(__imp__sub_820E72B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e72cc
	if (ctx.cr6.eq) goto loc_820E72CC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E72CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E72D4"))) PPC_WEAK_FUNC(sub_820E72D4);
PPC_FUNC_IMPL(__imp__sub_820E72D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E72D8"))) PPC_WEAK_FUNC(sub_820E72D8);
PPC_FUNC_IMPL(__imp__sub_820E72D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e72f4
	if (ctx.cr6.eq) goto loc_820E72F4;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E72F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E72FC"))) PPC_WEAK_FUNC(sub_820E72FC);
PPC_FUNC_IMPL(__imp__sub_820E72FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7300"))) PPC_WEAK_FUNC(sub_820E7300);
PPC_FUNC_IMPL(__imp__sub_820E7300) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e731c
	if (ctx.cr6.eq) goto loc_820E731C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E731C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7324"))) PPC_WEAK_FUNC(sub_820E7324);
PPC_FUNC_IMPL(__imp__sub_820E7324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7328"))) PPC_WEAK_FUNC(sub_820E7328);
PPC_FUNC_IMPL(__imp__sub_820E7328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e7344
	if (ctx.cr6.eq) goto loc_820E7344;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E7344:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E734C"))) PPC_WEAK_FUNC(sub_820E734C);
PPC_FUNC_IMPL(__imp__sub_820E734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7350"))) PPC_WEAK_FUNC(sub_820E7350);
PPC_FUNC_IMPL(__imp__sub_820E7350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e736c
	if (ctx.cr6.eq) goto loc_820E736C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E736C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7374"))) PPC_WEAK_FUNC(sub_820E7374);
PPC_FUNC_IMPL(__imp__sub_820E7374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7378"))) PPC_WEAK_FUNC(sub_820E7378);
PPC_FUNC_IMPL(__imp__sub_820E7378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e7394
	if (ctx.cr6.eq) goto loc_820E7394;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E7394:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E739C"))) PPC_WEAK_FUNC(sub_820E739C);
PPC_FUNC_IMPL(__imp__sub_820E739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E73A0"))) PPC_WEAK_FUNC(sub_820E73A0);
PPC_FUNC_IMPL(__imp__sub_820E73A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x820e5b50
	ctx.lr = 0x820E73B8;
	sub_820E5B50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,18500
	ctx.r10.s64 = ctx.r11.s64 + 18500;
	// li r4,44
	ctx.r4.s64 = 44;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822aa648
	ctx.lr = 0x820E73D0;
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

__attribute__((alias("__imp__sub_820E73E8"))) PPC_WEAK_FUNC(sub_820E73E8);
PPC_FUNC_IMPL(__imp__sub_820E73E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,18500
	ctx.r10.s64 = ctx.r11.s64 + 18500;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e5b50
	ctx.lr = 0x820E7414;
	sub_820E5B50(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e7430
	if (ctx.cr6.eq) goto loc_820E7430;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E742C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E7430:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7448"))) PPC_WEAK_FUNC(sub_820E7448);
PPC_FUNC_IMPL(__imp__sub_820E7448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x820E746C;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e7480
	if (!ctx.cr6.eq) goto loc_820E7480;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// b 0x820e74a0
	goto loc_820E74A0;
loc_820E7480:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,254
	ctx.r4.s64 = 254;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x820E7490;
	sub_82256350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e74a0
	if (!ctx.cr6.eq) goto loc_820E74A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820E74A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E74B8"))) PPC_WEAK_FUNC(sub_820E74B8);
PPC_FUNC_IMPL(__imp__sub_820E74B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E74DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7448
	ctx.lr = 0x820E74E4;
	sub_820E7448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7030
	ctx.lr = 0x820E74EC;
	sub_820E7030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e70a8
	ctx.lr = 0x820E74F4;
	sub_820E70A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7120
	ctx.lr = 0x820E74FC;
	sub_820E7120(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r4,245
	ctx.r4.s64 = 245;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x820E7514;
	sub_82256350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e7524
	if (!ctx.cr6.eq) goto loc_820E7524;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_820E7524:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7198
	ctx.lr = 0x820E752C;
	sub_820E7198(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7548"))) PPC_WEAK_FUNC(sub_820E7548);
PPC_FUNC_IMPL(__imp__sub_820E7548) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-5072(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5072);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7560"))) PPC_WEAK_FUNC(sub_820E7560);
PPC_FUNC_IMPL(__imp__sub_820E7560) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-27392
	ctx.r8.s64 = ctx.r10.s64 + -27392;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820E7584"))) PPC_WEAK_FUNC(sub_820E7584);
PPC_FUNC_IMPL(__imp__sub_820E7584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7588"))) PPC_WEAK_FUNC(sub_820E7588);
PPC_FUNC_IMPL(__imp__sub_820E7588) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E759C"))) PPC_WEAK_FUNC(sub_820E759C);
PPC_FUNC_IMPL(__imp__sub_820E759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E75A0"))) PPC_WEAK_FUNC(sub_820E75A0);
PPC_FUNC_IMPL(__imp__sub_820E75A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E75B8"))) PPC_WEAK_FUNC(sub_820E75B8);
PPC_FUNC_IMPL(__imp__sub_820E75B8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7654
	if (ctx.cr6.eq) goto loc_820E7654;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r9,2
	ctx.r9.s64 = 2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r9,140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 140, ctx.r9.u8);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// beq cr6,0x820e7618
	if (ctx.cr6.eq) goto loc_820E7618;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x820f03a8
	ctx.lr = 0x820E7608;
	sub_820F03A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820E7618:
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_820E7654:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7664"))) PPC_WEAK_FUNC(sub_820E7664);
PPC_FUNC_IMPL(__imp__sub_820E7664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7668"))) PPC_WEAK_FUNC(sub_820E7668);
PPC_FUNC_IMPL(__imp__sub_820E7668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7688"))) PPC_WEAK_FUNC(sub_820E7688);
PPC_FUNC_IMPL(__imp__sub_820E7688) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// stw r11,1824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1824, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7698"))) PPC_WEAK_FUNC(sub_820E7698);
PPC_FUNC_IMPL(__imp__sub_820E7698) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// bne cr6,0x820e76d4
	if (!ctx.cr6.eq) goto loc_820E76D4;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r10,-5072(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5072);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
loc_820E76D4:
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E76E8"))) PPC_WEAK_FUNC(sub_820E76E8);
PPC_FUNC_IMPL(__imp__sub_820E76E8) {
	PPC_FUNC_PROLOGUE();
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,-8
	ctx.r9.s64 = ctx.r1.s64 + -8;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820E7704:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r4,r10,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 | ctx.r7.u64;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r7,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u16);
	// sthx r7,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x820e7704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E7704;
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30536
	ctx.r12.s64 = ctx.r12.s64 + 30536;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820E7748"))) PPC_WEAK_FUNC(sub_820E7748);
PPC_FUNC_IMPL(__imp__sub_820E7748) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,30620(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30620);
	// lwz r16,30620(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30620);
	// lwz r16,30620(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30620);
	// lwz r16,30924(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30924);
	// lwz r16,30620(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30620);
	// lwz r16,30652(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30652);
	// lwz r16,30676(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30676);
	// lwz r16,30712(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30712);
	// lwz r16,30736(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30736);
	// lwz r16,30760(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30760);
	// lwz r16,30784(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30784);
	// lwz r16,30820(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30820);
	// lwz r16,30844(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30844);
	// lwz r16,30868(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30868);
	// lwz r16,30904(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30904);
	// lwz r16,30912(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30912);
	// lwz r16,30944(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30944);
	// lwz r16,30952(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30952);
	// lwz r16,30988(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30988);
	// lwz r16,30996(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 30996);
	// lwz r16,31028(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31028);
	// lhz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// li r11,3
	ctx.r11.s64 = 3;
	// lhz r7,-4(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -4);
	// neg r6,r8
	ctx.r6.s64 = -ctx.r8.s64;
	// neg r4,r7
	ctx.r4.s64 = -ctx.r7.s64;
	// sth r6,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r6.u16);
	// sth r4,-12(r1)
	PPC_STORE_U16(ctx.r1.u32 + -12, ctx.r4.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E77BC"))) PPC_WEAK_FUNC(sub_820E77BC);
PPC_FUNC_IMPL(__imp__sub_820E77BC) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,-6(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -6);
	// li r3,9
	ctx.r3.s64 = 9;
	// li r11,2
	ctx.r11.s64 = 2;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// sth r8,-14(r1)
	PPC_STORE_U16(ctx.r1.u32 + -14, ctx.r8.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E77D4"))) PPC_WEAK_FUNC(sub_820E77D4);
PPC_FUNC_IMPL(__imp__sub_820E77D4) {
	PPC_FUNC_PROLOGUE();
	// lhz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// li r3,10
	ctx.r3.s64 = 10;
	// lhz r7,-4(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -4);
	// li r11,3
	ctx.r11.s64 = 3;
	// neg r6,r8
	ctx.r6.s64 = -ctx.r8.s64;
	// neg r4,r7
	ctx.r4.s64 = -ctx.r7.s64;
	// sth r6,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r6.u16);
	// sth r4,-12(r1)
	PPC_STORE_U16(ctx.r1.u32 + -12, ctx.r4.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E77F8"))) PPC_WEAK_FUNC(sub_820E77F8);
PPC_FUNC_IMPL(__imp__sub_820E77F8) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// li r3,11
	ctx.r3.s64 = 11;
	// li r11,2
	ctx.r11.s64 = 2;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// sth r8,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r8.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E7810"))) PPC_WEAK_FUNC(sub_820E7810);
PPC_FUNC_IMPL(__imp__sub_820E7810) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,-6(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -6);
	// li r3,12
	ctx.r3.s64 = 12;
	// li r11,2
	ctx.r11.s64 = 2;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// sth r8,-14(r1)
	PPC_STORE_U16(ctx.r1.u32 + -14, ctx.r8.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E7828"))) PPC_WEAK_FUNC(sub_820E7828);
PPC_FUNC_IMPL(__imp__sub_820E7828) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,-6(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -6);
	// li r3,5
	ctx.r3.s64 = 5;
	// li r11,2
	ctx.r11.s64 = 2;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// sth r8,-14(r1)
	PPC_STORE_U16(ctx.r1.u32 + -14, ctx.r8.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E7840"))) PPC_WEAK_FUNC(sub_820E7840);
PPC_FUNC_IMPL(__imp__sub_820E7840) {
	PPC_FUNC_PROLOGUE();
	// lhz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// li r3,6
	ctx.r3.s64 = 6;
	// lhz r7,-4(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -4);
	// li r11,3
	ctx.r11.s64 = 3;
	// neg r6,r8
	ctx.r6.s64 = -ctx.r8.s64;
	// neg r4,r7
	ctx.r4.s64 = -ctx.r7.s64;
	// sth r6,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r6.u16);
	// sth r4,-12(r1)
	PPC_STORE_U16(ctx.r1.u32 + -12, ctx.r4.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E7864"))) PPC_WEAK_FUNC(sub_820E7864);
PPC_FUNC_IMPL(__imp__sub_820E7864) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// li r3,7
	ctx.r3.s64 = 7;
	// li r11,2
	ctx.r11.s64 = 2;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// sth r8,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r8.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E787C"))) PPC_WEAK_FUNC(sub_820E787C);
PPC_FUNC_IMPL(__imp__sub_820E787C) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,-6(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -6);
	// li r3,8
	ctx.r3.s64 = 8;
	// li r11,2
	ctx.r11.s64 = 2;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// sth r8,-14(r1)
	PPC_STORE_U16(ctx.r1.u32 + -14, ctx.r8.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E7894"))) PPC_WEAK_FUNC(sub_820E7894);
PPC_FUNC_IMPL(__imp__sub_820E7894) {
	PPC_FUNC_PROLOGUE();
	// lhz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// li r3,17
	ctx.r3.s64 = 17;
	// lhz r7,-4(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -4);
	// li r11,3
	ctx.r11.s64 = 3;
	// neg r6,r8
	ctx.r6.s64 = -ctx.r8.s64;
	// neg r4,r7
	ctx.r4.s64 = -ctx.r7.s64;
	// sth r6,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r6.u16);
	// sth r4,-12(r1)
	PPC_STORE_U16(ctx.r1.u32 + -12, ctx.r4.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E78B8"))) PPC_WEAK_FUNC(sub_820E78B8);
PPC_FUNC_IMPL(__imp__sub_820E78B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,18
	ctx.r3.s64 = 18;
	// b 0x820e7938
	// ERROR 820E7938
	return;
}

__attribute__((alias("__imp__sub_820E78C0"))) PPC_WEAK_FUNC(sub_820E78C0);
PPC_FUNC_IMPL(__imp__sub_820E78C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,19
	ctx.r3.s64 = 19;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x820e779c
	if (!ctx.cr6.eq) {
		// ERROR 820E779C
		return;
	}
	// lhz r9,-6(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -6);
	// li r11,2
	ctx.r11.s64 = 2;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// sth r8,-14(r1)
	PPC_STORE_U16(ctx.r1.u32 + -14, ctx.r8.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E78E0"))) PPC_WEAK_FUNC(sub_820E78E0);
PPC_FUNC_IMPL(__imp__sub_820E78E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x820e7938
	// ERROR 820E7938
	return;
}

__attribute__((alias("__imp__sub_820E78E8"))) PPC_WEAK_FUNC(sub_820E78E8);
PPC_FUNC_IMPL(__imp__sub_820E78E8) {
	PPC_FUNC_PROLOGUE();
	// lhz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// li r3,13
	ctx.r3.s64 = 13;
	// lhz r7,-4(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -4);
	// li r11,3
	ctx.r11.s64 = 3;
	// neg r6,r8
	ctx.r6.s64 = -ctx.r8.s64;
	// neg r4,r7
	ctx.r4.s64 = -ctx.r7.s64;
	// sth r6,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r6.u16);
	// sth r4,-12(r1)
	PPC_STORE_U16(ctx.r1.u32 + -12, ctx.r4.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E790C"))) PPC_WEAK_FUNC(sub_820E790C);
PPC_FUNC_IMPL(__imp__sub_820E790C) {
	PPC_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x820e7938
	// ERROR 820E7938
	return;
}

__attribute__((alias("__imp__sub_820E7914"))) PPC_WEAK_FUNC(sub_820E7914);
PPC_FUNC_IMPL(__imp__sub_820E7914) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x820e779c
	if (!ctx.cr6.eq) {
		// ERROR 820E779C
		return;
	}
	// lhz r9,-6(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -6);
	// li r11,2
	ctx.r11.s64 = 2;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// sth r8,-14(r1)
	PPC_STORE_U16(ctx.r1.u32 + -14, ctx.r8.u16);
	// b 0x820e793c
	// ERROR 820E793C
	return;
}

__attribute__((alias("__imp__sub_820E7934"))) PPC_WEAK_FUNC(sub_820E7934);
PPC_FUNC_IMPL(__imp__sub_820E7934) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
loc_820E7954:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x820e7954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E7954;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7974"))) PPC_WEAK_FUNC(sub_820E7974);
PPC_FUNC_IMPL(__imp__sub_820E7974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7978"))) PPC_WEAK_FUNC(sub_820E7978);
PPC_FUNC_IMPL(__imp__sub_820E7978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// lfs f0,8616(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// lfd f13,-8(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lbz r5,2(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f9,-8(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,4(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lbz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r6,5(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f5,-8(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,8(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7A14"))) PPC_WEAK_FUNC(sub_820E7A14);
PPC_FUNC_IMPL(__imp__sub_820E7A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7A18"))) PPC_WEAK_FUNC(sub_820E7A18);
PPC_FUNC_IMPL(__imp__sub_820E7A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lfs f0,8616(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lbz r5,5(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r10,7(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// lfs f11,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lbz r9,10(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r8,9(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lbz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r6,11(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lfs f9,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7AA8"))) PPC_WEAK_FUNC(sub_820E7AA8);
PPC_FUNC_IMPL(__imp__sub_820E7AA8) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// blt cr6,0x820e7adc
	if (ctx.cr6.lt) goto loc_820E7ADC;
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// bgt cr6,0x820e7adc
	if (ctx.cr6.gt) goto loc_820E7ADC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x820e7b74
	goto loc_820E7B74;
loc_820E7ADC:
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// blt cr6,0x820e7af8
	if (ctx.cr6.lt) goto loc_820E7AF8;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bgt cr6,0x820e7af8
	if (ctx.cr6.gt) goto loc_820E7AF8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x820e7a18
	ctx.lr = 0x820E7AF4;
	sub_820E7A18(ctx, base);
	// b 0x820e7b78
	goto loc_820E7B78;
loc_820E7AF8:
	// addi r11,r11,-117
	ctx.r11.s64 = ctx.r11.s64 + -117;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x820e7b8c
	if (ctx.cr6.gt) goto loc_820E7B8C;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
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
	// lwz r16,31600(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31600);
	// lwz r16,31628(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31628);
	// lwz r16,31628(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31628);
	// lwz r16,31628(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31628);
	// lwz r16,31628(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31628);
	// lwz r16,31560(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31560);
	// lwz r16,31572(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31572);
	// lwz r16,31600(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31600);
	// lwz r16,31560(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31560);
	// lwz r16,31600(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31600);
	// lwz r16,31560(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + 31560);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// bl 0x820e7a18
	ctx.lr = 0x820E7B50;
	sub_820E7A18(ctx, base);
	// b 0x820e7b78
	goto loc_820E7B78;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// bl 0x820e7978
	ctx.lr = 0x820E7B5C;
	sub_820E7978(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
loc_820E7B74:
	// bl 0x820e7978
	ctx.lr = 0x820E7B78;
	sub_820E7978(ctx, base);
loc_820E7B78:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820e7b8c
	if (ctx.cr6.eq) goto loc_820E7B8C;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_820E7B8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7BA0"))) PPC_WEAK_FUNC(sub_820E7BA0);
PPC_FUNC_IMPL(__imp__sub_820E7BA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r11,r10,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e7bd4
	if (!ctx.cr6.gt) goto loc_820E7BD4;
loc_820E7BB0:
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// beq cr6,0x820e7bdc
	if (ctx.cr6.eq) goto loc_820E7BDC;
	// subf. r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ble 0x820e7bd4
	if (!ctx.cr0.gt) goto loc_820E7BD4;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r11,r10,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820e7bb0
	if (ctx.cr6.gt) goto loc_820E7BB0;
loc_820E7BD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820E7BDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E7BE4"))) PPC_WEAK_FUNC(sub_820E7BE4);
PPC_FUNC_IMPL(__imp__sub_820E7BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7BE8"))) PPC_WEAK_FUNC(sub_820E7BE8);
PPC_FUNC_IMPL(__imp__sub_820E7BE8) {
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
	// addi r11,r5,20
	ctx.r11.s64 = ctx.r5.s64 + 20;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820e7c6c
	if (ctx.cr6.eq) goto loc_820E7C6C;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E7C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187920
	ctx.lr = 0x820E7C58;
	sub_82187920(ctx, base);
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
loc_820E7C6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820804f8
	ctx.lr = 0x820E7C74;
	sub_820804F8(ctx, base);
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

__attribute__((alias("__imp__sub_820E7C88"))) PPC_WEAK_FUNC(sub_820E7C88);
PPC_FUNC_IMPL(__imp__sub_820E7C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r8,-8448
	ctx.r11.s64 = ctx.r8.s64 + -8448;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820E7CAC"))) PPC_WEAK_FUNC(sub_820E7CAC);
PPC_FUNC_IMPL(__imp__sub_820E7CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7CB0"))) PPC_WEAK_FUNC(sub_820E7CB0);
PPC_FUNC_IMPL(__imp__sub_820E7CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E7CB8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19780
	ctx.r4.u64 = ctx.r4.u64 | 19780;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820E7CD4;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r30,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r30.u32);
	// addi r9,r11,8276
	ctx.r9.s64 = ctx.r11.s64 + 8276;
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// addi r11,r10,-27392
	ctx.r11.s64 = ctx.r10.s64 + -27392;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r27,r30,38
	ctx.r27.s64 = ctx.r30.s64 + 38;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// li r31,34
	ctx.r31.s64 = 34;
loc_820E7CFC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E7D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// sthu r9,2(r27)
	// bne 0x820e7cfc
	if (!ctx.cr0.eq) goto loc_820E7CFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E7D30"))) PPC_WEAK_FUNC(sub_820E7D30);
PPC_FUNC_IMPL(__imp__sub_820E7D30) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e7d98
	if (ctx.cr6.eq) goto loc_820E7D98;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// addi r9,r11,80
	ctx.r9.s64 = ctx.r11.s64 + 80;
	// ld r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// ld r7,88(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// bl 0x82187c20
	ctx.lr = 0x820E7D80;
	sub_82187C20(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// ld r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// std r5,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r5.u64);
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// std r4,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r4.u64);
loc_820E7D98:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E7DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_820E7DC4"))) PPC_WEAK_FUNC(sub_820E7DC4);
PPC_FUNC_IMPL(__imp__sub_820E7DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E7DC8"))) PPC_WEAK_FUNC(sub_820E7DC8);
PPC_FUNC_IMPL(__imp__sub_820E7DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E7DD0;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820E7DF0;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,17224
	ctx.r10.s64 = 1128792064;
	// addi r9,r11,18928
	ctx.r9.s64 = ctx.r11.s64 + 18928;
	// ori r29,r10,16722
	ctx.r29.u64 = ctx.r10.u64 | 16722;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821882d0
	ctx.lr = 0x820E7E10;
	sub_821882D0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7e24
	if (ctx.cr6.eq) goto loc_820E7E24;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820e7e28
	goto loc_820E7E28;
loc_820E7E24:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820E7E28:
	// addi r11,r11,344
	ctx.r11.s64 = ctx.r11.s64 + 344;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821882d0
	ctx.lr = 0x820E7E3C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7e4c
	if (ctx.cr6.eq) goto loc_820E7E4C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820e7e50
	goto loc_820E7E50;
loc_820E7E4C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820E7E50:
	// addi r11,r11,348
	ctx.r11.s64 = ctx.r11.s64 + 348;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821882d0
	ctx.lr = 0x820E7E64;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7e74
	if (ctx.cr6.eq) goto loc_820E7E74;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820e7e78
	goto loc_820E7E78;
loc_820E7E74:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820E7E78:
	// addi r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 + 352;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821882d0
	ctx.lr = 0x820E7E8C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7e9c
	if (ctx.cr6.eq) goto loc_820E7E9C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820e7ea0
	goto loc_820E7EA0;
loc_820E7E9C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820E7EA0:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821882d0
	ctx.lr = 0x820E7EB4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7ec4
	if (ctx.cr6.eq) goto loc_820E7EC4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820e7ec8
	goto loc_820E7EC8;
loc_820E7EC4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820E7EC8:
	// addi r11,r11,356
	ctx.r11.s64 = ctx.r11.s64 + 356;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821882d0
	ctx.lr = 0x820E7EDC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7eec
	if (ctx.cr6.eq) goto loc_820E7EEC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820e7ef0
	goto loc_820E7EF0;
loc_820E7EEC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820E7EF0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,19780
	ctx.r4.u64 = ctx.r4.u64 | 19780;
	// lfs f31,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// bl 0x821882d0
	ctx.lr = 0x820E7F1C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7f2c
	if (ctx.cr6.eq) goto loc_820E7F2C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820e7f30
	goto loc_820E7F30;
loc_820E7F2C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820E7F30:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821882d0
	ctx.lr = 0x820E7F40;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7f50
	if (ctx.cr6.eq) goto loc_820E7F50;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820e7f54
	goto loc_820E7F54;
loc_820E7F50:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820E7F54:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// lfs f13,8056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8056);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stb r8,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r8.u8);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E7FC8"))) PPC_WEAK_FUNC(sub_820E7FC8);
PPC_FUNC_IMPL(__imp__sub_820E7FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,18928
	ctx.r10.s64 = ctx.r11.s64 + 18928;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820e8010
	if (ctx.cr6.eq) goto loc_820E8010;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E8010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E8010:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x821883b8
	ctx.lr = 0x820E8020;
	sub_821883B8(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e803c
	if (ctx.cr6.eq) goto loc_820E803C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E8038;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E803C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E8054"))) PPC_WEAK_FUNC(sub_820E8054);
PPC_FUNC_IMPL(__imp__sub_820E8054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E8058"))) PPC_WEAK_FUNC(sub_820E8058);
PPC_FUNC_IMPL(__imp__sub_820E8058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E8060;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820E8084;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r9,r29,344
	ctx.r9.s64 = ctx.r29.s64 + 344;
	// addi r8,r10,18928
	ctx.r8.s64 = ctx.r10.s64 + 18928;
	// addi r7,r29,348
	ctx.r7.s64 = ctx.r29.s64 + 348;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r29,352
	ctx.r6.s64 = ctx.r29.s64 + 352;
	// addi r5,r29,24
	ctx.r5.s64 = ctx.r29.s64 + 24;
	// stfs f31,128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// addi r11,r29,356
	ctx.r11.s64 = ctx.r29.s64 + 356;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 + 28;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// ori r4,r4,19780
	ctx.r4.u64 = ctx.r4.u64 | 19780;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// bl 0x821882d0
	ctx.lr = 0x820E80E8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e80f8
	if (ctx.cr6.eq) goto loc_820E80F8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820e80fc
	goto loc_820E80FC;
loc_820E80F8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820E80FC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lfs f13,8056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8056);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stb r8,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r8.u8);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E8174"))) PPC_WEAK_FUNC(sub_820E8174);
PPC_FUNC_IMPL(__imp__sub_820E8174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E8178"))) PPC_WEAK_FUNC(sub_820E8178);
PPC_FUNC_IMPL(__imp__sub_820E8178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E8180;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820E81A0;
	sub_82188378(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r30.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r31,344
	ctx.r6.s64 = ctx.r31.s64 + 344;
	// lfs f13,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r7,18928
	ctx.r5.s64 = ctx.r7.s64 + 18928;
	// lfs f12,8056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8056);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r31,348
	ctx.r4.s64 = ctx.r31.s64 + 348;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// addi r9,r31,356
	ctx.r9.s64 = ctx.r31.s64 + 356;
	// stfs f0,128(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// stfs f0,116(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f13,124(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// stfs f13,144(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// stfs f13,44(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// stw r6,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r6.u32);
	// stfs f12,48(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stw r4,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r4.u32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// stw r10,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r10.u32);
	// stfs f13,64(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stw r9,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r9.u32);
	// stw r8,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// stb r7,140(r30)
	PPC_STORE_U8(ctx.r30.u32 + 140, ctx.r7.u8);
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E8268"))) PPC_WEAK_FUNC(sub_820E8268);
PPC_FUNC_IMPL(__imp__sub_820E8268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x820e829c
	if (ctx.cr6.eq) goto loc_820E829C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lfs f13,-27256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
loc_820E829C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820e82e0
	if (ctx.cr6.lt) goto loc_820E82E0;
	// lfs f11,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x820e82e0
	if (!ctx.cr6.gt) goto loc_820E82E0;
	// fdivs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820e82e0
	if (!ctx.cr6.gt) goto loc_820E82E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfs f13,8056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
loc_820E82E0:
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E82F0"))) PPC_WEAK_FUNC(sub_820E82F0);
PPC_FUNC_IMPL(__imp__sub_820E82F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e8328
	if (ctx.cr6.eq) goto loc_820E8328;
	// b 0x820e8638
	goto loc_820E8638;
loc_820E8328:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x820e8344
	if (!ctx.cr6.eq) goto loc_820E8344;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_820E8344:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lfs f11,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// ble cr6,0x820e836c
	if (!ctx.cr6.gt) goto loc_820E836C;
	// lfs f13,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-27256(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27256);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_820E836C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,892(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 892);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f8,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f8.f64 = double(temp.f32);
	// fmr f30,f8
	ctx.f30.f64 = ctx.f8.f64;
	// beq cr6,0x820e844c
	if (ctx.cr6.eq) goto loc_820E844C;
	// lfs f0,560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmr f9,f1
	ctx.f9.f64 = ctx.f1.f64;
	// bl 0x820e8268
	ctx.lr = 0x820E83A4;
	sub_820E8268(ctx, base);
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bge cr6,0x820e8434
	if (!ctx.cr6.lt) goto loc_820E8434;
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// bge cr6,0x820e8434
	if (!ctx.cr6.lt) goto loc_820E8434;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// fmadds f13,f9,f10,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f13.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e83dc
	if (!ctx.cr6.eq) goto loc_820E83DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_820E83DC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e842c
	if (!ctx.cr6.gt) goto loc_820E842C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f12,8056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8056);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,9048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9048);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f0,f6,f0,f5
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// b 0x820e8630
	goto loc_820E8630;
loc_820E842C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x820e8630
	goto loc_820E8630;
loc_820E8434:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x820e8630
	if (!ctx.cr6.gt) goto loc_820E8630;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820e8630
	if (!ctx.cr6.gt) goto loc_820E8630;
	// fmadds f0,f9,f10,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f13.f64));
	// b 0x820e8630
	goto loc_820E8630;
loc_820E844C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e84a8
	if (ctx.cr6.eq) goto loc_820E84A8;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820e8480
	if (ctx.cr6.lt) goto loc_820E8480;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bgt cr6,0x820e8480
	if (ctx.cr6.gt) goto loc_820E8480;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_820E8480:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e8494
	if (ctx.cr6.eq) goto loc_820E8494;
	// lfs f0,560(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_820E8494:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x820e8268
	ctx.lr = 0x820E84A0;
	sub_820E8268(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// b 0x820e8630
	goto loc_820E8630;
loc_820E84A8:
	// lwz r10,692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e84c8
	if (ctx.cr6.eq) goto loc_820E84C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f8.f64;
	// bl 0x820e8268
	ctx.lr = 0x820E84C0;
	sub_820E8268(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// b 0x820e8630
	goto loc_820E8630;
loc_820E84C8:
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e8520
	if (ctx.cr6.eq) goto loc_820E8520;
	// lwz r7,688(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e8520
	if (ctx.cr6.eq) goto loc_820E8520;
	// addi r3,r10,1248
	ctx.r3.s64 = ctx.r10.s64 + 1248;
	// bl 0x82093430
	ctx.lr = 0x820E84E8;
	sub_82093430(ctx, base);
	// lfs f0,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x820e8500
	if (!ctx.cr6.eq) goto loc_820E8500;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lfs f30,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f30.f64 = double(temp.f32);
loc_820E8500:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lfs f0,560(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x820e8268
	ctx.lr = 0x820E8518;
	sub_820E8268(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// b 0x820e8630
	goto loc_820E8630;
loc_820E8520:
	// lfs f13,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bne cr6,0x820e8530
	if (!ctx.cr6.eq) goto loc_820E8530;
	// lfs f30,556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	ctx.f30.f64 = double(temp.f32);
loc_820E8530:
	// lwz r10,784(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// lfs f0,560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e8554
	if (!ctx.cr6.eq) goto loc_820E8554;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e8268
	ctx.lr = 0x820E854C;
	sub_820E8268(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// b 0x820e8630
	goto loc_820E8630;
loc_820E8554:
	// lbz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x820e856c
	if (ctx.cr6.lt) goto loc_820E856C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820E856C:
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// mulli r6,r11,56
	ctx.r6.s64 = ctx.r11.s64 * 56;
	// addi r11,r7,-27536
	ctx.r11.s64 = ctx.r7.s64 + -27536;
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// lfsx f0,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f10,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fneg f0,f9
	ctx.f0.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// bne cr6,0x820e85a8
	if (!ctx.cr6.eq) goto loc_820E85A8;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,-27424
	ctx.r7.s64 = ctx.r11.s64 + -27424;
	// lfsx f13,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
loc_820E85A8:
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// beq cr6,0x820e85c0
	if (ctx.cr6.eq) goto loc_820E85C0;
	// fdivs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
loc_820E85C0:
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x820e85e8
	if (ctx.cr6.eq) goto loc_820E85E8;
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f13,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-27256(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27256);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// stfs f9,44(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_820E85E8:
	// fcmpu cr6,f11,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// blt cr6,0x820e8620
	if (ctx.cr6.lt) goto loc_820E8620;
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x820e8620
	if (!ctx.cr6.gt) goto loc_820E8620;
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// fsubs f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f1,f11,f12,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// beq cr6,0x820e8630
	if (ctx.cr6.eq) goto loc_820E8630;
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// b 0x820e8630
	goto loc_820E8630;
loc_820E8620:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_820E8630:
	// stfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_820E8638:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E8658"))) PPC_WEAK_FUNC(sub_820E8658);
PPC_FUNC_IMPL(__imp__sub_820E8658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,18960
	ctx.r10.s64 = ctx.r11.s64 + 18960;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820e8690
	if (ctx.cr6.eq) goto loc_820E8690;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820E8690;
	sub_82183E40(ctx, base);
loc_820E8690:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e86ac
	if (ctx.cr6.eq) goto loc_820E86AC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820E86AC;
	sub_82183E40(ctx, base);
loc_820E86AC:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820E86B8;
	sub_821883B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E86D0"))) PPC_WEAK_FUNC(sub_820E86D0);
PPC_FUNC_IMPL(__imp__sub_820E86D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E86D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17524
	ctx.r4.u64 = ctx.r4.u64 | 17524;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820E86F8;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// addi r10,r11,18992
	ctx.r10.s64 = ctx.r11.s64 + 18992;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821882d0
	ctx.lr = 0x820E8718;
	sub_821882D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e872c
	if (ctx.cr6.eq) goto loc_820E872C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820e8730
	goto loc_820E8730;
loc_820E872C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820E8730:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,18543
	ctx.r4.u64 = ctx.r4.u64 | 18543;
	// bl 0x821882d0
	ctx.lr = 0x820E8744;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e8754
	if (ctx.cr6.eq) goto loc_820E8754;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820e8758
	goto loc_820E8758;
loc_820E8754:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820E8758:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lis r4,21300
	ctx.r4.s64 = 1395916800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,16724
	ctx.r4.u64 = ctx.r4.u64 | 16724;
	// bl 0x821882d0
	ctx.lr = 0x820E876C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e877c
	if (ctx.cr6.eq) goto loc_820E877C;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820e8780
	goto loc_820E8780;
loc_820E877C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820E8780:
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bne cr6,0x820e87dc
	if (!ctx.cr6.eq) goto loc_820E87DC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-5072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5072);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_820E87DC:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E87F8"))) PPC_WEAK_FUNC(sub_820E87F8);
PPC_FUNC_IMPL(__imp__sub_820E87F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x821883b8
	ctx.lr = 0x820E8818;
	sub_821883B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e8834
	if (ctx.cr6.eq) goto loc_820E8834;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E8830;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E8834:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E884C"))) PPC_WEAK_FUNC(sub_820E884C);
PPC_FUNC_IMPL(__imp__sub_820E884C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E8850"))) PPC_WEAK_FUNC(sub_820E8850);
PPC_FUNC_IMPL(__imp__sub_820E8850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820E8858;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r6,1(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r5,2(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lbz r8,3(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lbz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lbz r26,5(r29)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// lwz r31,48(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r29,32(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// lbz r30,372(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 372);
	// stb r26,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r26.u8);
	// cmplwi cr6,r30,10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 10, ctx.xer);
	// beq cr6,0x820e88d4
	if (ctx.cr6.eq) goto loc_820E88D4;
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 14, ctx.xer);
	// bne cr6,0x820e88fc
	if (!ctx.cr6.eq) goto loc_820E88FC;
loc_820E88D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r5,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r5.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
loc_820E88FC:
	// lwz r6,112(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820e8938
	if (ctx.cr6.eq) goto loc_820E8938;
	// lwz r6,1816(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1816);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820e76e8
	ctx.lr = 0x820E8918;
	sub_820E76E8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_820E8938:
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820e8acc
	if (!ctx.cr6.eq) goto loc_820E8ACC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820e8acc
	if (ctx.cr6.eq) goto loc_820E8ACC;
	// extsh r3,r28
	ctx.r3.s64 = ctx.r28.s16;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,2144(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,128(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f13,108(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lbz r6,372(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 372);
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// cmplwi cr6,r6,12
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 12, ctx.xer);
	// bgt cr6,0x820e8a94
	if (ctx.cr6.gt) goto loc_820E8A94;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30292
	ctx.r12.s64 = ctx.r12.s64 + -30292;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-30108(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30108);
	// lwz r16,-30180(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30180);
	// lwz r16,-30084(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30084);
	// lwz r16,-30060(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30060);
	// lwz r16,-30144(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30144);
	// lwz r16,-30060(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30060);
	// lwz r16,-30060(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30060);
	// lwz r16,-30060(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30060);
	// lwz r16,-30204(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30204);
	// lwz r16,-30060(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30060);
	// lwz r16,-30060(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30060);
	// lwz r16,-30060(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30060);
	// lwz r16,-30240(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -30240);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// li r3,2
	ctx.r3.s64 = 2;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// li r3,2
	ctx.r3.s64 = 2;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820E8A94:
	// lbz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r5,85(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r3,r7,16
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwimi r6,r5,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r3,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r3.u32);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r4,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r4.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820E8ACC:
	// lbz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 372);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x820e8b4c
	if (ctx.cr6.gt) goto loc_820E8B4C;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29964
	ctx.r12.s64 = ctx.r12.s64 + -29964;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-29912(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29912);
	// lwz r16,-29888(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29888);
	// lwz r16,-29912(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29912);
	// lwz r16,-29876(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29876);
	// lwz r16,-29888(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29888);
	// lwz r16,-29876(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29876);
	// lwz r16,-29876(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29876);
	// lwz r16,-29876(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29876);
	// lwz r16,-29900(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29900);
	// lwz r16,-29876(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29876);
	// lwz r16,-29876(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29876);
	// lwz r16,-29876(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29876);
	// lwz r16,-29912(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -29912);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820E8B4C:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820E8B58"))) PPC_WEAK_FUNC(sub_820E8B58);
PPC_FUNC_IMPL(__imp__sub_820E8B58) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
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
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x820E8C24;
	sub_820804F8(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x820804f8
	ctx.lr = 0x820E8C2C;
	sub_820804F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E8C40"))) PPC_WEAK_FUNC(sub_820E8C40);
PPC_FUNC_IMPL(__imp__sub_820E8C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820e8c78
	if (!ctx.cr6.lt) goto loc_820E8C78;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820E8C78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,8056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x820e8c8c
	if (!ctx.cr6.gt) goto loc_820E8C8C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_820E8C8C:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820e8ca4
	if (!ctx.cr6.lt) goto loc_820E8CA4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820E8CA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820e8cb8
	if (!ctx.cr6.gt) goto loc_820E8CB8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_820E8CB8:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820e8cd0
	if (!ctx.cr6.lt) goto loc_820E8CD0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820E8CD0:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E8CE0"))) PPC_WEAK_FUNC(sub_820E8CE0);
PPC_FUNC_IMPL(__imp__sub_820E8CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lfs f13,-27256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f13,f11,f1,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x820e8d18
	if (ctx.cr6.eq) goto loc_820E8D18;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E8D18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,8324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8324);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,9852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E8D58"))) PPC_WEAK_FUNC(sub_820E8D58);
PPC_FUNC_IMPL(__imp__sub_820E8D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820e8658
	ctx.lr = 0x820E8D78;
	sub_820E8658(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e8d94
	if (ctx.cr6.eq) goto loc_820E8D94;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E8D90;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E8D94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E8DAC"))) PPC_WEAK_FUNC(sub_820E8DAC);
PPC_FUNC_IMPL(__imp__sub_820E8DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E8DB0"))) PPC_WEAK_FUNC(sub_820E8DB0);
PPC_FUNC_IMPL(__imp__sub_820E8DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x820E8DB8;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r10,18884
	ctx.r4.s64 = ctx.r10.s64 + 18884;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820E8DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r4,r6,18860
	ctx.r4.s64 = ctx.r6.s64 + 18860;
	// lwz r3,36(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E8E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r9,18836
	ctx.r4.s64 = ctx.r9.s64 + 18836;
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820E8E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r30,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r30.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ble cr6,0x820e8fd8
	if (!ctx.cr6.gt) goto loc_820E8FD8;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r23,6
	ctx.r23.s64 = 6;
	// addi r26,r11,-27904
	ctx.r26.s64 = ctx.r11.s64 + -27904;
loc_820E8E5C:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r30,r11,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r29,r30,r10
	ctx.r29.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e8b58
	ctx.lr = 0x820E8E78;
	sub_820E8B58(ctx, base);
	// addi r3,r29,304
	ctx.r3.s64 = ctx.r29.s64 + 304;
	// bl 0x820804f8
	ctx.lr = 0x820E8E80;
	sub_820804F8(ctx, base);
	// stw r27,368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 368, ctx.r27.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r27,373(r10)
	PPC_STORE_U8(ctx.r10.u32 + 373, ctx.r27.u8);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbzx r8,r28,r26
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r26.u32);
	// stb r8,372(r9)
	PPC_STORE_U8(ctx.r9.u32 + 372, ctx.r8.u8);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r7,372(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 372);
	// cmplwi cr6,r7,7
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 7, ctx.xer);
	// bne cr6,0x820e8ef4
	if (!ctx.cr6.eq) goto loc_820E8EF4;
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// beq cr6,0x820e8ed0
	if (ctx.cr6.eq) goto loc_820E8ED0;
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 6, ctx.xer);
	// beq cr6,0x820e8ecc
	if (ctx.cr6.eq) goto loc_820E8ECC;
	// cmplwi cr6,r28,10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 10, ctx.xer);
	// bne cr6,0x820e8ed0
	if (!ctx.cr6.eq) goto loc_820E8ED0;
loc_820E8ECC:
	// stb r25,373(r11)
	PPC_STORE_U8(ctx.r11.u32 + 373, ctx.r25.u8);
loc_820E8ED0:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x820e8ef4
	if (ctx.cr6.eq) goto loc_820E8EF4;
	// cmplwi cr6,r28,13
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 13, ctx.xer);
	// beq cr6,0x820e8ee8
	if (ctx.cr6.eq) goto loc_820E8EE8;
	// cmplwi cr6,r28,17
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 17, ctx.xer);
	// bne cr6,0x820e8ef4
	if (!ctx.cr6.eq) goto loc_820E8EF4;
loc_820E8EE8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r25,373(r11)
	PPC_STORE_U8(ctx.r11.u32 + 373, ctx.r25.u8);
loc_820E8EF4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 372);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x820e8f3c
	if (!ctx.cr6.eq) goto loc_820E8F3C;
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x820e8f3c
	if (ctx.cr6.eq) goto loc_820E8F3C;
	// cmplwi cr6,r28,7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 7, ctx.xer);
	// beq cr6,0x820e8f20
	if (ctx.cr6.eq) goto loc_820E8F20;
	// cmplwi cr6,r28,11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 11, ctx.xer);
	// bne cr6,0x820e8f3c
	if (!ctx.cr6.eq) goto loc_820E8F3C;
loc_820E8F20:
	// stb r25,373(r11)
	PPC_STORE_U8(ctx.r11.u32 + 373, ctx.r25.u8);
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820e8f3c
	if (!ctx.cr6.eq) goto loc_820E8F3C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r24,373(r11)
	PPC_STORE_U8(ctx.r11.u32 + 373, ctx.r24.u8);
loc_820E8F3C:
	// cmplwi cr6,r28,15
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 15, ctx.xer);
	// beq cr6,0x820e8f50
	if (ctx.cr6.eq) goto loc_820E8F50;
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// beq cr6,0x820e8f6c
	if (ctx.cr6.eq) goto loc_820E8F6C;
	// b 0x820e8f8c
	goto loc_820E8F8C;
loc_820E8F50:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,14
	ctx.r11.s64 = 14;
	// beq cr6,0x820e8f64
	if (ctx.cr6.eq) goto loc_820E8F64;
	// li r11,23
	ctx.r11.s64 = 23;
loc_820E8F64:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stb r11,6132(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6132, ctx.r11.u8);
loc_820E8F6C:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,14
	ctx.r11.s64 = 14;
	// beq cr6,0x820e8f80
	if (ctx.cr6.eq) goto loc_820E8F80;
	// li r11,23
	ctx.r11.s64 = 23;
loc_820E8F80:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stb r11,372(r10)
	PPC_STORE_U8(ctx.r10.u32 + 372, ctx.r11.u8);
loc_820E8F8C:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e8fc8
	if (!ctx.cr6.eq) goto loc_820E8FC8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 372);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x820e8fb0
	if (!ctx.cr6.eq) goto loc_820E8FB0;
	// stb r24,372(r11)
	PPC_STORE_U8(ctx.r11.u32 + 372, ctx.r24.u8);
loc_820E8FB0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 372);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x820e8fc8
	if (!ctx.cr6.eq) goto loc_820E8FC8;
	// stb r23,372(r11)
	PPC_STORE_U8(ctx.r11.u32 + 372, ctx.r23.u8);
loc_820E8FC8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820e8e5c
	if (ctx.cr6.lt) goto loc_820E8E5C;
loc_820E8FD8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_820E8FE0"))) PPC_WEAK_FUNC(sub_820E8FE0);
PPC_FUNC_IMPL(__imp__sub_820E8FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E8FE8;
	sub_82248788(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lfs f30,8616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x820e9020
	if (!ctx.cr6.lt) goto loc_820E9020;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,19024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19024);
	ctx.f31.f64 = double(temp.f32);
loc_820E9020:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f11,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f9,f11,f31,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 - ctx.f10.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x821877f8
	ctx.lr = 0x820E9050;
	sub_821877F8(ctx, base);
	// addi r5,r31,240
	ctx.r5.s64 = ctx.r31.s64 + 240;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82289c50
	ctx.lr = 0x820E9060;
	sub_82289C50(ctx, base);
	// lbz r11,373(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 373);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e913c
	if (ctx.cr6.eq) goto loc_820E913C;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x820e9080
	if (!ctx.cr6.lt) goto loc_820E9080;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x820e9090
	goto loc_820E9090;
loc_820E9080:
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fnmsubs f11,f12,f31,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_820E9090:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821874f8
	ctx.lr = 0x820E909C;
	sub_821874F8(ctx, base);
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 13, ctx.xer);
	// beq cr6,0x820e90c4
	if (ctx.cr6.eq) goto loc_820E90C4;
	// cmpwi cr6,r30,17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 17, ctx.xer);
	// beq cr6,0x820e90c4
	if (ctx.cr6.eq) goto loc_820E90C4;
	// addi r11,r30,-6
	ctx.r11.s64 = ctx.r30.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// b 0x820e90d8
	goto loc_820E90D8;
loc_820E90C4:
	// addi r11,r30,-13
	ctx.r11.s64 = ctx.r30.s64 + -13;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
loc_820E90D8:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r9,68(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// lhzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e9100
	if (!ctx.cr6.eq) goto loc_820E9100;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x820e910c
	goto loc_820E910C;
loc_820E9100:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820E910C:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r6.u64);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r5,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r5.u64);
loc_820E913C:
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 + 176;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r10.u64);
	// ld r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r8,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r8.u64);
	// ld r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// std r7,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r7.u64);
	// ld r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r6,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r6.u64);
	// ld r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// std r5,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r5.u64);
	// ld r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 40);
	// std r4,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r4.u64);
	// ld r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + 48);
	// std r3,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r3.u64);
	// ld r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 56);
	// std r11,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r11.u64);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E9194"))) PPC_WEAK_FUNC(sub_820E9194);
PPC_FUNC_IMPL(__imp__sub_820E9194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E9198"))) PPC_WEAK_FUNC(sub_820E9198);
PPC_FUNC_IMPL(__imp__sub_820E9198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E91A0;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f0,8616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e91e8
	if (!ctx.cr6.lt) goto loc_820E91E8;
	// ld r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// ld r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// std r9,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
loc_820E91E8:
	// lbz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 372);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820e958c
	if (ctx.cr6.eq) goto loc_820E958C;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x820e958c
	if (ctx.cr6.eq) goto loc_820E958C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820e928c
	if (!ctx.cr6.eq) goto loc_820E928C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e9220
	if (!ctx.cr6.eq) goto loc_820E9220;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fnmsubs f11,f12,f31,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_820E9220:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820e9258
	if (!ctx.cr6.gt) goto loc_820E9258;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x821876f8
	ctx.lr = 0x820E924C;
	sub_821876F8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E9258:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e9274
	if (!ctx.cr6.lt) goto loc_820E9274;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_820E9274:
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821876f8
	ctx.lr = 0x820E9280;
	sub_821876F8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E928C:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x820e94cc
	if (ctx.cr6.eq) goto loc_820E94CC;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x820e94cc
	if (ctx.cr6.eq) goto loc_820E94CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820e9494
	if (!ctx.cr6.eq) goto loc_820E9494;
	// lbz r11,373(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 373);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e944c
	if (ctx.cr6.eq) goto loc_820E944C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e92cc
	if (!ctx.cr6.eq) goto loc_820E92CC;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fnmsubs f11,f12,f31,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_820E92CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821875f8
	ctx.lr = 0x820E92D8;
	sub_821875F8(ctx, base);
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f0,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f1,f11,f31,f13
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820e930c
	if (!ctx.cr6.gt) goto loc_820E930C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x820e9328
	goto loc_820E9328;
loc_820E930C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e9328
	if (!ctx.cr6.lt) goto loc_820E9328;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_820E9328:
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821874f8
	ctx.lr = 0x820E9334;
	sub_821874F8(ctx, base);
	// lbz r11,373(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 373);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820e93cc
	if (!ctx.cr6.eq) goto loc_820E93CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821874f8
	ctx.lr = 0x820E9358;
	sub_821874F8(ctx, base);
	// addi r10,r29,-7
	ctx.r10.s64 = ctx.r29.s64 + -7;
	// lwz r5,68(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r7,r11,51
	ctx.r7.s64 = ctx.r11.s64 + 51;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwz r10,36(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e9390
	if (!ctx.cr6.eq) goto loc_820E9390;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x820e939c
	goto loc_820E939C;
loc_820E9390:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820E939C:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r6.u64);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r5,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r5.u64);
loc_820E93CC:
	// addi r11,r29,-7
	ctx.r11.s64 = ctx.r29.s64 + -7;
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r6,r11,47
	ctx.r6.s64 = ctx.r11.s64 + 47;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e9404
	if (!ctx.cr6.eq) goto loc_820E9404;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x820e9410
	goto loc_820E9410;
loc_820E9404:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820E9410:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r6.u64);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r5,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r5.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E944C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e947c
	if (!ctx.cr6.eq) goto loc_820E947C;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fnmsubs f11,f12,f31,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f10,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fnmsubs f7,f8,f31,f10
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f31.f64 - ctx.f10.f64)));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_820E947C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82187920
	ctx.lr = 0x820E9488;
	sub_82187920(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E9494:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e94b4
	if (!ctx.cr6.eq) goto loc_820E94B4;
	// li r7,3
	ctx.r7.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186cd8
	ctx.lr = 0x820E94B4;
	sub_82186CD8(ctx, base);
loc_820E94B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82187920
	ctx.lr = 0x820E94C0;
	sub_82187920(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E94CC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e94fc
	if (!ctx.cr6.eq) goto loc_820E94FC;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fnmsubs f11,f12,f31,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f10,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fnmsubs f7,f8,f31,f10
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f31.f64 - ctx.f10.f64)));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_820E94FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,2132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2132);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f12,2136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2136);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x820e9528
	if (!ctx.cr6.gt) goto loc_820E9528;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x820e9534
	goto loc_820E9534;
loc_820E9528:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820e9534
	if (!ctx.cr6.lt) goto loc_820E9534;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_820E9534:
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820e9564
	if (!ctx.cr6.gt) goto loc_820E9564;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82187d78
	ctx.lr = 0x820E9558;
	sub_82187D78(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E9564:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820e9570
	if (!ctx.cr6.lt) goto loc_820E9570;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_820E9570:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82187d78
	ctx.lr = 0x820E9580;
	sub_82187D78(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E958C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e95a8
	if (!ctx.cr6.eq) goto loc_820E95A8;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fnmsubs f11,f12,f31,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_820E95A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820e95cc
	if (!ctx.cr6.gt) goto loc_820E95CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x820e95e8
	goto loc_820E95E8;
loc_820E95CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e95e8
	if (!ctx.cr6.lt) goto loc_820E95E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_820E95E8:
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821875f8
	ctx.lr = 0x820E95F4;
	sub_821875F8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E9600"))) PPC_WEAK_FUNC(sub_820E9600);
PPC_FUNC_IMPL(__imp__sub_820E9600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820E9608;
	sub_82248774(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249924
	ctx.lr = 0x820E9610;
	sub_82249924(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x820e98e0
	if (!ctx.cr6.eq) goto loc_820E98E0;
	// ld r30,208(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 208);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// ld r4,200(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 200);
	// ld r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 176);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// ld r8,184(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 184);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// ld r6,192(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 192);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ld r26,224(r31)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r31.u32 + 224);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// ld r24,232(r31)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r31.u32 + 232);
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// ld r28,216(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 216);
	// lfs f27,2132(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2132);
	ctx.f27.f64 = double(temp.f32);
	// std r30,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r30.u64);
	// addi r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 + 176;
	// lbz r23,373(r31)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r31.u32 + 373);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// std r26,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r26.u64);
	// lfs f28,2136(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2136);
	ctx.f28.f64 = double(temp.f32);
	// std r24,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r24.u64);
	// lfs f29,2140(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2140);
	ctx.f29.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r28,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x820e9754
	if (ctx.cr6.eq) goto loc_820E9754;
	// bl 0x82186d38
	ctx.lr = 0x820E96B4;
	sub_82186D38(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82187ef8
	ctx.lr = 0x820E96C0;
	sub_82187EF8(ctx, base);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x820e96d8
	if (ctx.cr6.lt) goto loc_820E96D8;
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
loc_820E96D8:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bgt cr6,0x820e96e4
	if (ctx.cr6.gt) goto loc_820E96E4;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
loc_820E96E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fsubs f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821877f8
	ctx.lr = 0x820E9704;
	sub_821877F8(ctx, base);
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820e9738
	if (!ctx.cr6.lt) goto loc_820E9738;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820e9758
	if (!ctx.cr6.gt) goto loc_820E9758;
	// lfs f0,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// b 0x820e9758
	goto loc_820E9758;
loc_820E9738:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820e9758
	if (!ctx.cr6.gt) goto loc_820E9758;
	// lfs f0,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// b 0x820e9758
	goto loc_820E9758;
loc_820E9754:
	// bl 0x82186d38
	ctx.lr = 0x820E9758;
	sub_82186D38(ctx, base);
loc_820E9758:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,7948(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x820E979C;
	sub_8208EA90(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x820E97A8;
	sub_8208EA90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8208e480
	ctx.lr = 0x820E97B4;
	sub_8208E480(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820E97C0;
	sub_8208EA90(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x820E97CC;
	sub_8208EA90(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19028(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19028);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820e981c
	if (ctx.cr6.lt) goto loc_820E981C;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820e981c
	if (ctx.cr6.lt) goto loc_820E981C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820e981c
	if (ctx.cr6.gt) goto loc_820E981C;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820e981c
	if (ctx.cr6.gt) goto loc_820E981C;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820e9878
	if (!ctx.cr6.lt) goto loc_820E9878;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// b 0x820e9878
	goto loc_820E9878;
loc_820E981C:
	// fneg f2,f13
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x820E9824;
	sub_82249C38(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fneg f1,f31
	ctx.f1.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// bl 0x821874f8
	ctx.lr = 0x820E9834;
	sub_821874F8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820E9840;
	sub_8208EA90(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x820E984C;
	sub_8208EA90(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x820E985C;
	sub_82249C38(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fneg f1,f30
	ctx.f1.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// bl 0x821875f8
	ctx.lr = 0x820E986C;
	sub_821875F8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x820E9878;
	sub_8208EA90(ctx, base);
loc_820E9878:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x820E9888;
	sub_82249C38(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fadds f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820e98b8
	if (!ctx.cr6.gt) goto loc_820E98B8;
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f30,52(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249970
	ctx.lr = 0x820E98B4;
	sub_82249970(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_820E98B8:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x820e98c4
	if (!ctx.cr6.lt) goto loc_820E98C4;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
loc_820E98C4:
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f30,52(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249970
	ctx.lr = 0x820E98DC;
	sub_82249970(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_820E98E0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// lfs f11,9860(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9860);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f12,2140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,2136(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2136);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x820e9964
	if (ctx.cr6.eq) goto loc_820E9964;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e994c
	if (!ctx.cr6.lt) goto loc_820E994C;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820e9964
	if (!ctx.cr6.gt) goto loc_820E9964;
	// lfs f0,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// b 0x820e9960
	goto loc_820E9960;
loc_820E994C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820e9964
	if (!ctx.cr6.gt) goto loc_820E9964;
	// lfs f0,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
loc_820E9960:
	// stfs f13,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
loc_820E9964:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e99d0
	if (ctx.cr6.eq) goto loc_820E99D0;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e99b8
	if (!ctx.cr6.lt) goto loc_820E99B8;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820e99d0
	if (!ctx.cr6.gt) goto loc_820E99D0;
	// lfs f0,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// b 0x820e99cc
	goto loc_820E99CC;
loc_820E99B8:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820e99d0
	if (!ctx.cr6.gt) goto loc_820E99D0;
	// lfs f0,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
loc_820E99CC:
	// stfs f13,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
loc_820E99D0:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e9a4c
	if (ctx.cr6.eq) goto loc_820E9A4C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e9a34
	if (!ctx.cr6.lt) goto loc_820E9A34;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820e9a4c
	if (!ctx.cr6.gt) goto loc_820E9A4C;
	// lfs f0,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249970
	ctx.lr = 0x820E9A30;
	sub_82249970(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_820E9A34:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820e9a4c
	if (!ctx.cr6.gt) goto loc_820E9A4C;
	// lfs f0,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
loc_820E9A4C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249970
	ctx.lr = 0x820E9A58;
	sub_82249970(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820E9A5C"))) PPC_WEAK_FUNC(sub_820E9A5C);
PPC_FUNC_IMPL(__imp__sub_820E9A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E9A60"))) PPC_WEAK_FUNC(sub_820E9A60);
PPC_FUNC_IMPL(__imp__sub_820E9A60) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f0,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820e9aa4
	if (ctx.cr6.gt) goto loc_820E9AA4;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// bl 0x820e8c40
	ctx.lr = 0x820E9A90;
	sub_820E8C40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e9aa4
	if (ctx.cr6.eq) goto loc_820E9AA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
loc_820E9AA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x820e9acc
	if (ctx.cr6.eq) goto loc_820E9ACC;
	// lfs f0,64(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f12,64(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 64, temp.u32);
	// stfs f11,72(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 72, temp.u32);
loc_820E9ACC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E9ADC"))) PPC_WEAK_FUNC(sub_820E9ADC);
PPC_FUNC_IMPL(__imp__sub_820E9ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E9AE0"))) PPC_WEAK_FUNC(sub_820E9AE0);
PPC_FUNC_IMPL(__imp__sub_820E9AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820E9AE8;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820e9b00
	if (!ctx.cr6.eq) goto loc_820E9B00;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_820E9B00:
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// ori r4,r4,16722
	ctx.r4.u64 = ctx.r4.u64 | 16722;
	// bl 0x821882d0
	ctx.lr = 0x820E9B10;
	sub_821882D0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r28.u32);
	// addi r4,r11,18908
	ctx.r4.s64 = ctx.r11.s64 + 18908;
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820E9B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820e9b4c
	if (ctx.cr6.eq) goto loc_820E9B4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// b 0x820e9b7c
	goto loc_820E9B7C;
loc_820E9B4C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r10,18860
	ctx.r4.s64 = ctx.r10.s64 + 18860;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820E9B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r5,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r5.u32);
loc_820E9B7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e8db0
	ctx.lr = 0x820E9B88;
	sub_820E8DB0(ctx, base);
	// lwz r26,52(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x820e9c90
	if (!ctx.cr6.gt) goto loc_820E9C90;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r30,40
	ctx.r30.s64 = 40;
	// addi r27,r31,80
	ctx.r27.s64 = ctx.r31.s64 + 80;
loc_820E9BA0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820e7be8
	ctx.lr = 0x820E9BB0;
	sub_820E7BE8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// bl 0x820804f8
	ctx.lr = 0x820E9BC0;
	sub_820804F8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lhzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x820e9c40
	if (!ctx.cr6.lt) goto loc_820E9C40;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lhzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820E9BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// bl 0x82187920
	ctx.lr = 0x820E9C00;
	sub_82187920(ctx, base);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,36(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lhzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r8.u32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820E9C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r10,r11,352
	ctx.r10.s64 = ctx.r11.s64 + 352;
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r3,352(r11)
	PPC_STORE_U64(ctx.r11.u32 + 352, ctx.r3.u64);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,360(r11)
	PPC_STORE_U64(ctx.r11.u32 + 360, ctx.r10.u64);
loc_820E9C40:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lhzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e9c60
	if (!ctx.cr6.eq) goto loc_820E9C60;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// b 0x820e9c6c
	goto loc_820E9C6C;
loc_820E9C60:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820E9C6C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// addi r29,r29,384
	ctx.r29.s64 = ctx.r29.s64 + 384;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// stw r10,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r10.u32);
	// blt cr6,0x820e9ba0
	if (ctx.cr6.lt) goto loc_820E9BA0;
loc_820E9C90:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r30,40
	ctx.r30.s64 = 40;
	// addi r28,r11,-27872
	ctx.r28.s64 = ctx.r11.s64 + -27872;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
loc_820E9CA0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x820e9cc0
	if (ctx.cr6.eq) goto loc_820E9CC0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82187920
	ctx.lr = 0x820E9CBC;
	sub_82187920(ctx, base);
	// b 0x820e9cc4
	goto loc_820E9CC4;
loc_820E9CC0:
	// bl 0x820804f8
	ctx.lr = 0x820E9CC4;
	sub_820804F8(ctx, base);
loc_820E9CC4:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplwi cr6,r30,82
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 82, ctx.xer);
	// blt cr6,0x820e9ca0
	if (ctx.cr6.lt) goto loc_820E9CA0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r10,19116
	ctx.r4.s64 = ctx.r10.s64 + 19116;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820E9CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r7,19104
	ctx.r4.s64 = ctx.r7.s64 + 19104;
	// lwz r3,36(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E9D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r3.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r10,19092
	ctx.r4.s64 = ctx.r10.s64 + 19092;
	// lwz r3,36(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820E9D40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r6,19080
	ctx.r4.s64 = ctx.r6.s64 + 19080;
	// lwz r3,36(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E9D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r3.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r9,19068
	ctx.r4.s64 = ctx.r9.s64 + 19068;
	// lwz r3,36(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820E9D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r5,19056
	ctx.r4.s64 = ctx.r5.s64 + 19056;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E9DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r3.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r9,13108
	ctx.r4.s64 = ctx.r9.s64 + 13108;
	// lwz r3,36(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820E9DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r5,13136
	ctx.r4.s64 = ctx.r5.s64 + 13136;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E9DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r3.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r9,19044
	ctx.r4.s64 = ctx.r9.s64 + 19044;
	// lwz r3,36(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820E9E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r3.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r4,r5,19032
	ctx.r4.s64 = ctx.r5.s64 + 19032;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E9E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r31,1872
	ctx.r29.s64 = ctx.r31.s64 + 1872;
	// stw r3,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820804f8
	ctx.lr = 0x820E9E4C;
	sub_820804F8(ctx, base);
	// addi r28,r31,1936
	ctx.r28.s64 = ctx.r31.s64 + 1936;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820804f8
	ctx.lr = 0x820E9E58;
	sub_820804F8(ctx, base);
	// addi r30,r31,2000
	ctx.r30.s64 = ctx.r31.s64 + 2000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820804f8
	ctx.lr = 0x820E9E64;
	sub_820804F8(ctx, base);
	// addi r27,r31,2064
	ctx.r27.s64 = ctx.r31.s64 + 2064;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820804f8
	ctx.lr = 0x820E9E70;
	sub_820804F8(ctx, base);
	// addi r24,r31,2128
	ctx.r24.s64 = ctx.r31.s64 + 2128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820804f8
	ctx.lr = 0x820E9E7C;
	sub_820804F8(ctx, base);
	// addi r23,r31,2192
	ctx.r23.s64 = ctx.r31.s64 + 2192;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820804f8
	ctx.lr = 0x820E9E88;
	sub_820804F8(ctx, base);
	// addi r26,r31,2256
	ctx.r26.s64 = ctx.r31.s64 + 2256;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820804f8
	ctx.lr = 0x820E9E94;
	sub_820804F8(ctx, base);
	// addi r25,r31,2320
	ctx.r25.s64 = ctx.r31.s64 + 2320;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820804f8
	ctx.lr = 0x820E9EA0;
	sub_820804F8(ctx, base);
	// lwz r11,1828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1828);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820e9f08
	if (ctx.cr6.eq) goto loc_820E9F08;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r10,176(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r6,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r6.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r5.u64);
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r4,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r4.u64);
	// ld r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r3,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r3.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r10.u64);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r9,40(r29)
	PPC_STORE_U64(ctx.r29.u32 + 40, ctx.r9.u64);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r8,48(r29)
	PPC_STORE_U64(ctx.r29.u32 + 48, ctx.r8.u64);
	// ld r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r7,56(r29)
	PPC_STORE_U64(ctx.r29.u32 + 56, ctx.r7.u64);
loc_820E9F08:
	// lwz r11,1832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820e9f70
	if (ctx.cr6.eq) goto loc_820E9F70;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r28,16
	ctx.r9.s64 = ctx.r28.s64 + 16;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r10,176(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r6,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r6.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r5.u64);
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r4,16(r28)
	PPC_STORE_U64(ctx.r28.u32 + 16, ctx.r4.u64);
	// ld r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r3,24(r28)
	PPC_STORE_U64(ctx.r28.u32 + 24, ctx.r3.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,32(r28)
	PPC_STORE_U64(ctx.r28.u32 + 32, ctx.r10.u64);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r9,40(r28)
	PPC_STORE_U64(ctx.r28.u32 + 40, ctx.r9.u64);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r8,48(r28)
	PPC_STORE_U64(ctx.r28.u32 + 48, ctx.r8.u64);
	// ld r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r7,56(r28)
	PPC_STORE_U64(ctx.r28.u32 + 56, ctx.r7.u64);
loc_820E9F70:
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820ea050
	if (ctx.cr6.eq) goto loc_820EA050;
	// lwz r10,1844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820ea050
	if (ctx.cr6.eq) goto loc_820EA050;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r10,176(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r6,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r5.u64);
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r4,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r4.u64);
	// ld r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r3,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r3.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r10.u64);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r9,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r9.u64);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r8,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r8.u64);
	// ld r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r7,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r7.u64);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,1844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r10,36(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// bne cr6,0x820ea000
	if (!ctx.cr6.eq) goto loc_820EA000;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x820ea00c
	goto loc_820EA00C;
loc_820EA000:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820EA00C:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r24,16
	ctx.r9.s64 = ctx.r24.s64 + 16;
	// std r10,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r10.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r24)
	PPC_STORE_U64(ctx.r24.u32 + 8, ctx.r8.u64);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r7,16(r24)
	PPC_STORE_U64(ctx.r24.u32 + 16, ctx.r7.u64);
	// ld r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r6,24(r24)
	PPC_STORE_U64(ctx.r24.u32 + 24, ctx.r6.u64);
	// ld r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r5,32(r24)
	PPC_STORE_U64(ctx.r24.u32 + 32, ctx.r5.u64);
	// ld r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r4,40(r24)
	PPC_STORE_U64(ctx.r24.u32 + 40, ctx.r4.u64);
	// ld r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r3,48(r24)
	PPC_STORE_U64(ctx.r24.u32 + 48, ctx.r3.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,56(r24)
	PPC_STORE_U64(ctx.r24.u32 + 56, ctx.r11.u64);
loc_820EA050:
	// lwz r11,1840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820ea130
	if (ctx.cr6.eq) goto loc_820EA130;
	// lwz r10,1848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820ea130
	if (ctx.cr6.eq) goto loc_820EA130;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r27,16
	ctx.r9.s64 = ctx.r27.s64 + 16;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r10,176(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r6,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r6.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r5.u64);
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r4,16(r27)
	PPC_STORE_U64(ctx.r27.u32 + 16, ctx.r4.u64);
	// ld r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r3,24(r27)
	PPC_STORE_U64(ctx.r27.u32 + 24, ctx.r3.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,32(r27)
	PPC_STORE_U64(ctx.r27.u32 + 32, ctx.r10.u64);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r9,40(r27)
	PPC_STORE_U64(ctx.r27.u32 + 40, ctx.r9.u64);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r8,48(r27)
	PPC_STORE_U64(ctx.r27.u32 + 48, ctx.r8.u64);
	// ld r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r7,56(r27)
	PPC_STORE_U64(ctx.r27.u32 + 56, ctx.r7.u64);
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,36(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// bne cr6,0x820ea0e0
	if (!ctx.cr6.eq) goto loc_820EA0E0;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x820ea0ec
	goto loc_820EA0EC;
loc_820EA0E0:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820EA0EC:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r23,16
	ctx.r9.s64 = ctx.r23.s64 + 16;
	// std r10,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r10.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r8.u64);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r7,16(r23)
	PPC_STORE_U64(ctx.r23.u32 + 16, ctx.r7.u64);
	// ld r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r6,24(r23)
	PPC_STORE_U64(ctx.r23.u32 + 24, ctx.r6.u64);
	// ld r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r5,32(r23)
	PPC_STORE_U64(ctx.r23.u32 + 32, ctx.r5.u64);
	// ld r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r4,40(r23)
	PPC_STORE_U64(ctx.r23.u32 + 40, ctx.r4.u64);
	// ld r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r3,48(r23)
	PPC_STORE_U64(ctx.r23.u32 + 48, ctx.r3.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,56(r23)
	PPC_STORE_U64(ctx.r23.u32 + 56, ctx.r11.u64);
loc_820EA130:
	// lwz r11,1852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820ea198
	if (ctx.cr6.eq) goto loc_820EA198;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r26,16
	ctx.r9.s64 = ctx.r26.s64 + 16;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r10,176(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r6,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r6.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r5.u64);
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r4,16(r26)
	PPC_STORE_U64(ctx.r26.u32 + 16, ctx.r4.u64);
	// ld r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r3,24(r26)
	PPC_STORE_U64(ctx.r26.u32 + 24, ctx.r3.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,32(r26)
	PPC_STORE_U64(ctx.r26.u32 + 32, ctx.r10.u64);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r9,40(r26)
	PPC_STORE_U64(ctx.r26.u32 + 40, ctx.r9.u64);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r8,48(r26)
	PPC_STORE_U64(ctx.r26.u32 + 48, ctx.r8.u64);
	// ld r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r7,56(r26)
	PPC_STORE_U64(ctx.r26.u32 + 56, ctx.r7.u64);
loc_820EA198:
	// lwz r11,1856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820ea200
	if (ctx.cr6.eq) goto loc_820EA200;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r25,16
	ctx.r9.s64 = ctx.r25.s64 + 16;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r10,176(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r6,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r6.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r5.u64);
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r4,16(r25)
	PPC_STORE_U64(ctx.r25.u32 + 16, ctx.r4.u64);
	// ld r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r3,24(r25)
	PPC_STORE_U64(ctx.r25.u32 + 24, ctx.r3.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,32(r25)
	PPC_STORE_U64(ctx.r25.u32 + 32, ctx.r10.u64);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r9,40(r25)
	PPC_STORE_U64(ctx.r25.u32 + 40, ctx.r9.u64);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r8,48(r25)
	PPC_STORE_U64(ctx.r25.u32 + 48, ctx.r8.u64);
	// ld r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r7,56(r25)
	PPC_STORE_U64(ctx.r25.u32 + 56, ctx.r7.u64);
loc_820EA200:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820EA208"))) PPC_WEAK_FUNC(sub_820EA208);
PPC_FUNC_IMPL(__imp__sub_820EA208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x820EA210;
	sub_82248768(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82249918
	ctx.lr = 0x820EA218;
	sub_82249918(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820ea24c
	if (!ctx.cr6.eq) goto loc_820EA24C;
	// lwz r11,344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// cmpwi cr6,r11,20500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20500, ctx.xer);
	// blt cr6,0x820ea24c
	if (ctx.cr6.lt) goto loc_820EA24C;
	// cmpwi cr6,r11,21500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21500, ctx.xer);
	// blt cr6,0x820ea790
	if (ctx.cr6.lt) goto loc_820EA790;
loc_820EA24C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r28,56(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r23,r11,-7560
	ctx.r23.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x820ea274
	if (ctx.cr6.eq) goto loc_820EA274;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// bne cr6,0x820ea278
	if (!ctx.cr6.eq) goto loc_820EA278;
loc_820EA274:
	// li r20,1
	ctx.r20.s64 = 1;
loc_820EA278:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r21,52(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lfs f28,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x820ea5e0
	if (!ctx.cr6.gt) goto loc_820EA5E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lfs f24,8616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	ctx.f24.f64 = double(temp.f32);
	// li r25,40
	ctx.r25.s64 = 40;
	// lfs f26,8328(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	ctx.f26.f64 = double(temp.f32);
	// lis r22,-32187
	ctx.r22.s64 = -2109407232;
	// lfs f27,9852(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9852);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,8324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8324);
	ctx.f25.f64 = double(temp.f32);
loc_820EA2C4:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lhzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x820ea5c8
	if (ctx.cr6.eq) goto loc_820EA5C8;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lfs f0,60(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lfs f13,-27256(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -27256);
	ctx.f13.f64 = double(temp.f32);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lfs f12,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x820ea310
	if (ctx.cr6.eq) goto loc_820EA310;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x820ea33c
	if (!ctx.cr6.eq) goto loc_820EA33C;
loc_820EA310:
	// fmadds f0,f0,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 + ctx.f27.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_820EA33C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x820ea3d4
	if (ctx.cr6.eq) goto loc_820EA3D4;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x820ea358
	if (!ctx.cr6.eq) goto loc_820EA358;
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
loc_820EA358:
	// lfs f30,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// blt cr6,0x820ea3d4
	if (ctx.cr6.lt) goto loc_820EA3D4;
	// lfs f13,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// beq cr6,0x820ea3d4
	if (ctx.cr6.eq) goto loc_820EA3D4;
	// lbz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 372);
	// fsubs f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f24.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x820ea3a0
	if (!ctx.cr6.eq) goto loc_820EA3A0;
	// bl 0x820e8fe0
	ctx.lr = 0x820EA39C;
	sub_820E8FE0(ctx, base);
	// b 0x820ea3a4
	goto loc_820EA3A4;
loc_820EA3A0:
	// bl 0x820e9198
	ctx.lr = 0x820EA3A4;
	sub_820E9198(ctx, base);
loc_820EA3A4:
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// fsubs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// std r10,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r10.u64);
	// bl 0x820e9600
	ctx.lr = 0x820EA3D0;
	sub_820E9600(ctx, base);
	// stfs f28,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
loc_820EA3D4:
	// lwz r11,1824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ea468
	if (!ctx.cr6.eq) goto loc_820EA468;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// bne cr6,0x820ea3f4
	if (!ctx.cr6.eq) goto loc_820EA3F4;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x820ea408
	goto loc_820EA408;
loc_820EA3F4:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820ea408
	if (!ctx.cr6.gt) goto loc_820EA408;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_820EA408:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bne cr6,0x820ea41c
	if (!ctx.cr6.eq) goto loc_820EA41C;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x820ea41c
	if (!ctx.cr6.lt) goto loc_820EA41C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_820EA41C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ea42c
	if (ctx.cr6.eq) goto loc_820EA42C;
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_820EA42C:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ea43c
	if (ctx.cr6.eq) goto loc_820EA43C;
	// stfs f13,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_820EA43C:
	// lbz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 372);
	// fsubs f1,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x820ea464
	if (!ctx.cr6.eq) goto loc_820EA464;
	// bl 0x820e8fe0
	ctx.lr = 0x820EA460;
	sub_820E8FE0(ctx, base);
	// b 0x820ea468
	goto loc_820EA468;
loc_820EA464:
	// bl 0x820e9198
	ctx.lr = 0x820EA468;
	sub_820E9198(ctx, base);
loc_820EA468:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820ea47c
	if (ctx.cr6.eq) goto loc_820EA47C;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x820ea5c8
	if (ctx.cr6.eq) goto loc_820EA5C8;
loc_820EA47C:
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ea494
	if (ctx.cr6.eq) goto loc_820EA494;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ea498
	if (ctx.cr6.eq) goto loc_820EA498;
loc_820EA494:
	// stfs f28,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_820EA498:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lfs f1,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e8ce0
	ctx.lr = 0x820EA4AC;
	sub_820E8CE0(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x820ea52c
	if (ctx.cr6.eq) goto loc_820EA52C;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x820ea4c4
	if (!ctx.cr6.eq) goto loc_820EA4C4;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
loc_820EA4C4:
	// lfs f12,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x820ea52c
	if (ctx.cr6.lt) goto loc_820EA52C;
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// beq cr6,0x820ea52c
	if (ctx.cr6.eq) goto loc_820EA52C;
	// ld r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// ld r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// ld r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// ld r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// stfs f28,132(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r11.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// std r9,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r9.u64);
	// std r6,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// std r5,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r5.u64);
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lfs f1,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9a60
	ctx.lr = 0x820EA52C;
	sub_820E9A60(ctx, base);
loc_820EA52C:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x820ea54c
	if (!ctx.cr6.eq) goto loc_820EA54C;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820ea54c
	if (!ctx.cr6.lt) goto loc_820EA54C;
	// fmr f12,f28
	ctx.f12.f64 = ctx.f28.f64;
loc_820EA54C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820ea56c
	if (ctx.cr6.lt) goto loc_820EA56C;
	// ld r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// ld r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// b 0x820ea58c
	goto loc_820EA58C;
loc_820EA56C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820ea58c
	if (!ctx.cr6.lt) goto loc_820EA58C;
	// li r7,3
	ctx.r7.s64 = 3;
	// fdivs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// addi r5,r31,160
	ctx.r5.s64 = ctx.r31.s64 + 160;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82186cd8
	ctx.lr = 0x820EA58C;
	sub_82186CD8(ctx, base);
loc_820EA58C:
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ea5a4
	if (ctx.cr6.eq) goto loc_820EA5A4;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ea5c8
	if (ctx.cr6.eq) goto loc_820EA5C8;
loc_820EA5A4:
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// ld r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// std r10,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r10.u64);
	// std r9,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r9.u64);
loc_820EA5C8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r26,r26,384
	ctx.r26.s64 = ctx.r26.s64 + 384;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x820ea2c4
	if (ctx.cr6.lt) goto loc_820EA2C4;
loc_820EA5E0:
	// lwz r11,1824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1824);
	// stw r27,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r27.u32);
	// bne cr6,0x820ea790
	if (!ctx.cr6.eq) goto loc_820EA790;
	// lwz r23,52(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x820ea704
	if (!ctx.cr6.gt) goto loc_820EA704;
	// li r29,40
	ctx.r29.s64 = 40;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// addi r26,r30,80
	ctx.r26.s64 = ctx.r30.s64 + 80;
loc_820EA614:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r25,r27,r11
	ctx.r25.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x82289c50
	ctx.lr = 0x820EA62C;
	sub_82289C50(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lhzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820ea64c
	if (!ctx.cr6.eq) goto loc_820EA64C;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x820ea658
	goto loc_820EA658;
loc_820EA64C:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820EA658:
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r9,-32(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + -32);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// ld r8,-24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + -24);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// ld r7,-16(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + -16);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// ld r6,-8(r28)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r28.u32 + -8);
	// std r6,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r6.u64);
	// ld r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r5,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r5.u64);
	// beq cr6,0x820ea69c
	if (ctx.cr6.eq) goto loc_820EA69C;
	// lfs f0,84(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x820ea6e4
	if (ctx.cr6.eq) goto loc_820EA6E4;
loc_820EA69C:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lhzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820ea6bc
	if (!ctx.cr6.eq) goto loc_820EA6BC;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x820ea6c8
	goto loc_820EA6C8;
loc_820EA6BC:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820EA6C8:
	// lfs f0,24(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f29,60(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_820EA6E4:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r27,r27,384
	ctx.r27.s64 = ctx.r27.s64 + 384;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x820ea614
	if (ctx.cr6.lt) goto loc_820EA614;
loc_820EA704:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e82f0
	ctx.lr = 0x820EA72C;
	sub_820E82F0(ctx, base);
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lhz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 40);
	// lwz r10,36(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820ea74c
	if (!ctx.cr6.eq) goto loc_820EA74C;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x820ea758
	goto loc_820EA758;
loc_820EA74C:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820EA758:
	// stfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f29,60(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,1820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ea790
	if (ctx.cr6.eq) goto loc_820EA790;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r4,r11,400
	ctx.r4.s64 = ctx.r11.s64 + 400;
	// bl 0x820e7d30
	ctx.lr = 0x820EA790;
	sub_820E7D30(ctx, base);
loc_820EA790:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82249964
	ctx.lr = 0x820EA79C;
	sub_82249964(ctx, base);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_820EA7A0"))) PPC_WEAK_FUNC(sub_820EA7A0);
PPC_FUNC_IMPL(__imp__sub_820EA7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820EA7A8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,48(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r3,r10,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// lbz r6,1(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r5,2(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r8,3(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lbz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lbz r26,5(r29)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r29,32(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lbz r30,372(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 372);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// cmplwi cr6,r30,10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 10, ctx.xer);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// stb r26,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r26.u8);
	// beq cr6,0x820ea824
	if (ctx.cr6.eq) goto loc_820EA824;
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 14, ctx.xer);
	// bne cr6,0x820ea84c
	if (!ctx.cr6.eq) goto loc_820EA84C;
loc_820EA824:
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r5,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r5.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
loc_820EA84C:
	// lwz r6,112(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820ea88c
	if (ctx.cr6.eq) goto loc_820EA88C;
	// lwz r6,1816(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1816);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820e76e8
	ctx.lr = 0x820EA86C;
	sub_820E76E8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_820EA88C:
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lfs f0,2148(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lbz r6,372(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 372);
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// cmplwi cr6,r6,12
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 12, ctx.xer);
	// bgt cr6,0x820ea994
	if (ctx.cr6.gt) goto loc_820EA994;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22308
	ctx.r12.s64 = ctx.r12.s64 + -22308;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-22160(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22160);
	// lwz r16,-22216(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22216);
	// lwz r16,-22144(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22144);
	// lwz r16,-22124(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22124);
	// lwz r16,-22184(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22184);
	// lwz r16,-22124(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22124);
	// lwz r16,-22124(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22124);
	// lwz r16,-22124(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22124);
	// lwz r16,-22232(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22232);
	// lwz r16,-22124(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22124);
	// lwz r16,-22124(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22124);
	// lwz r16,-22124(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22124);
	// lwz r16,-22256(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -22256);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x820ea9bc
	goto loc_820EA9BC;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// li r31,1
	ctx.r31.s64 = 1;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// b 0x820ea9c0
	goto loc_820EA9C0;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x820ea9c4
	goto loc_820EA9C4;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x820ea9bc
	goto loc_820EA9BC;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// li r31,2
	ctx.r31.s64 = 2;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// b 0x820ea9c0
	goto loc_820EA9C0;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// li r31,2
	ctx.r31.s64 = 2;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x820ea9c4
	goto loc_820EA9C4;
loc_820EA994:
	// lbz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r5,85(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r6,r5,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// li r31,6
	ctx.r31.s64 = 6;
loc_820EA9BC:
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_820EA9C0:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_820EA9C4:
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// stfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,80(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// bl 0x820e9600
	ctx.lr = 0x820EA9E4;
	sub_820E9600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820EA9F0"))) PPC_WEAK_FUNC(sub_820EA9F0);
PPC_FUNC_IMPL(__imp__sub_820EA9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248758
	ctx.lr = 0x820EA9F8;
	sub_82248758(ctx, base);
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lbzx r11,r4,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r24,32(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r18,36(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lfs f1,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lfs f31,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// add r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x820eb3d0
	if (ctx.cr6.eq) goto loc_820EB3D0;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x820eab20
	if (!ctx.cr6.eq) goto loc_820EAB20;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r30,48(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x820e7978
	ctx.lr = 0x820EAA64;
	sub_820E7978(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x820eaa78
	if (ctx.cr6.eq) goto loc_820EAA78;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_820EAA78:
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// ld r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// std r11,168(r30)
	PPC_STORE_U64(ctx.r30.u32 + 168, ctx.r11.u64);
	// stfs f31,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// std r9,160(r30)
	PPC_STORE_U64(ctx.r30.u32 + 160, ctx.r9.u64);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt cr6,0x820eaab0
	if (ctx.cr6.gt) goto loc_820EAAB0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x820eaab0
	if (!ctx.cr6.eq) goto loc_820EAAB0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_820EAAB0:
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f1,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stfs f1,116(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stfs f1,112(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// stfs f31,124(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f1,132(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f1,36(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// std r5,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r5.u64);
	// std r6,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r6.u64);
	// mullw r4,r7,r26
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r26.s32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,84(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// lfs f1,124(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9a60
	ctx.lr = 0x820EAB10;
	sub_820E9A60(ctx, base);
	// addi r3,r17,8
	ctx.r3.s64 = ctx.r17.s64 + 8;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822487a8
	// ERROR 822487A8
	return;
loc_820EAB20:
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820eab44
	if (!ctx.cr6.eq) goto loc_820EAB44;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820eab44
	if (!ctx.cr6.eq) goto loc_820EAB44;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820eb3d0
	if (ctx.cr6.eq) goto loc_820EB3D0;
loc_820EAB44:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r19,31
	ctx.r19.s64 = 2031616;
	// clrlwi r10,r9,25
	ctx.r10.u64 = ctx.r9.u32 & 0x7F;
	// rlwinm r7,r9,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// ori r19,r19,65535
	ctx.r19.u64 = ctx.r19.u64 | 65535;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820eabec
	if (!ctx.cr6.eq) goto loc_820EABEC;
	// rlwinm r7,r11,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820eabc4
	if (ctx.cr6.eq) goto loc_820EABC4;
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// li r30,32
	ctx.r30.s64 = 32;
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r5,r10,8,19,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1F00;
	// rlwimi r7,r11,0,26,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC0);
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r7,r3,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// or r19,r7,r4
	ctx.r19.u64 = ctx.r7.u64 | ctx.r4.u64;
	// b 0x820eabec
	goto loc_820EABEC;
loc_820EABC4:
	// rlwinm r7,r11,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820eabec
	if (ctx.cr6.eq) goto loc_820EABEC;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r19,r28,r11
	ctx.r19.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,16
	ctx.r30.s64 = 16;
loc_820EABEC:
	// lwz r3,48(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x820eabfc
	if (ctx.cr6.eq) goto loc_820EABFC;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EABFC:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bgt cr6,0x820eac14
	if (ctx.cr6.gt) goto loc_820EAC14;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x820eac14
	if (!ctx.cr6.eq) goto loc_820EAC14;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x820eac1c
	goto loc_820EAC1C;
loc_820EAC14:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820eac20
	if (ctx.cr6.eq) goto loc_820EAC20;
loc_820EAC1C:
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
loc_820EAC20:
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r20,r11,r10
	ctx.r20.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x820eae10
	if (ctx.cr6.eq) goto loc_820EAE10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// slw r5,r28,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// lfs f0,8616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x820eac54
	if (!ctx.cr6.eq) goto loc_820EAC54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,19128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19128);
	ctx.f0.f64 = double(temp.f32);
loc_820EAC54:
	// srawi r10,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 3;
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// clrlwi r7,r30,29
	ctx.r7.u64 = ctx.r30.u32 & 0x7;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// slw r8,r28,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lbzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r8,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// sraw r7,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// and r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 & ctx.r4.u64;
	// addze r9,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r9.s64 = temp.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x820eacb0
	if (!ctx.cr6.gt) goto loc_820EACB0;
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
loc_820EACB0:
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// srawi r7,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 3;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// clrlwi r4,r10,29
	ctx.r4.u64 = ctx.r10.u32 & 0x7;
	// addze r8,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r8.s64 = temp.s64;
	// slw r6,r28,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// add r7,r31,r8
	ctx.r7.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lbzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r30,2(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lbz r7,1(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// rotlwi r30,r30,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 8);
	// or r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 | ctx.r7.u64;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sraw r7,r8,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// and r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 & ctx.r6.u64;
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x820ead18
	if (!ctx.cr6.gt) goto loc_820EAD18;
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
loc_820EAD18:
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// srawi r7,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 3;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addze r8,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r4,r10,29
	ctx.r4.u64 = ctx.r10.u32 & 0x7;
	// add r7,r31,r8
	ctx.r7.u64 = ctx.r31.u64 + ctx.r8.u64;
	// slw r6,r28,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lbz r10,2(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lbzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbz r8,1(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// sraw r4,r7,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r4.s64 = ctx.r7.s32 >> temp.u32;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// and r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 & ctx.r6.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ble cr6,0x820ead80
	if (!ctx.cr6.gt) goto loc_820EAD80;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_820EAD80:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ld r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// std r10,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r10.u64);
	// stfs f31,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// std r9,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r9.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x820eadc4
	if (ctx.cr6.eq) goto loc_820EADC4;
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_820EADC4:
	// extsh r8,r20
	ctx.r8.s64 = ctx.r20.s16;
	// stfs f1,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f1,116(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfs f1,112(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f31,124(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f1,132(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f1,36(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,84(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// std r7,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r7.u64);
	// std r6,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r6.u64);
	// lfs f1,124(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9a60
	ctx.lr = 0x820EAE10;
	sub_820E9A60(ctx, base);
loc_820EAE10:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// ori r23,r10,32768
	ctx.r23.u64 = ctx.r10.u64 | 32768;
	// ori r25,r9,57344
	ctx.r25.u64 = ctx.r9.u64 | 57344;
	// ori r26,r8,49152
	ctx.r26.u64 = ctx.r8.u64 | 49152;
loc_820EAE38:
	// and r11,r22,r19
	ctx.r11.u64 = ctx.r22.u64 & ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820eb3a4
	if (ctx.cr6.eq) goto loc_820EB3A4;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,48(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	// lwz r9,88(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// add r8,r24,r11
	ctx.r8.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,372(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 372);
	// beq cr6,0x820eae84
	if (ctx.cr6.eq) goto loc_820EAE84;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820eae84
	if (ctx.cr6.eq) goto loc_820EAE84;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// bne cr6,0x820eae84
	if (!ctx.cr6.eq) goto loc_820EAE84;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820EAE84:
	// sth r21,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r21.u16);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// sth r21,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r21.u16);
	// sth r21,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r21.u16);
	// bgt cr6,0x820eb13c
	if (ctx.cr6.gt) goto loc_820EB13C;
	// beq cr6,0x820eb064
	if (ctx.cr6.eq) goto loc_820EB064;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820eaff0
	if (ctx.cr6.eq) goto loc_820EAFF0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820eaf20
	if (ctx.cr6.eq) goto loc_820EAF20;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820eb154
	if (!ctx.cr6.eq) goto loc_820EB154;
	// srawi r10,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 3;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// clrlwi r8,r30,29
	ctx.r8.u64 = ctx.r30.u32 & 0x7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// slw r7,r28,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// add r5,r7,r29
	ctx.r5.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r4,2(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r3,1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sraw r10,r6,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// subfic r4,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r4.s64 = 16 - ctx.r11.s64;
	// slw r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r8,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r8.u16);
	// b 0x820eb390
	goto loc_820EB390;
loc_820EAF20:
	// srawi r10,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 3;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// clrlwi r8,r30,29
	ctx.r8.u64 = ctx.r30.u32 & 0x7;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// slw r7,r28,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lbzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// add r5,r7,r29
	ctx.r5.u64 = ctx.r7.u64 + ctx.r29.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// slw r4,r28,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r9.u8 & 0x3F));
	// lbz r3,2(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 | ctx.r7.u64;
	// clrlwi r16,r10,29
	ctx.r16.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r3,r7,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 | ctx.r6.u64;
	// sraw r8,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// and r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 & ctx.r8.u64;
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r11.s64;
	// srawi r7,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 3;
	// slw r6,r8,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// addze r8,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r8.s64 = temp.s64;
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// add r7,r31,r8
	ctx.r7.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lbzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbz r10,2(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lbz r9,1(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// sraw r10,r5,r16
	temp.u32 = ctx.r16.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r10.s64 = ctx.r5.s32 >> temp.u32;
	// and r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 & ctx.r10.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r3,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r3.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// lhz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r6,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r6.u8);
	// stb r4,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// lhz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r5,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r5.u16);
	// sth r3,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r3.u16);
	// b 0x820eb390
	goto loc_820EB390;
loc_820EAFF0:
	// srawi r11,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 3;
	// lwz r8,96(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// clrlwi r7,r30,29
	ctx.r7.u64 = ctx.r30.u32 & 0x7;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// slw r6,r28,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// lbz r5,2(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r3,1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// add r4,r6,r29
	ctx.r4.u64 = ctx.r6.u64 + ctx.r29.u64;
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// or r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 | ctx.r9.u64;
	// sraw r11,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r11.s64 = ctx.r3.s32 >> temp.u32;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// subfic r10,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r8.s64;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// add r8,r9,r23
	ctx.r8.u64 = ctx.r9.u64 + ctx.r23.u64;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// stb r5,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r5.u8);
	// lhz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// sth r4,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r4.u16);
	// b 0x820eb390
	goto loc_820EB390;
loc_820EB064:
	// srawi r11,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 3;
	// lwz r8,96(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// clrlwi r7,r30,29
	ctx.r7.u64 = ctx.r30.u32 & 0x7;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// slw r6,r28,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r5,2(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// add r4,r6,r29
	ctx.r4.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lbz r3,1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// slw r9,r28,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r5,r31,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// or r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 | ctx.r3.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r6,r10,29
	ctx.r6.u64 = ctx.r10.u32 & 0x7;
	// or r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 | ctx.r5.u64;
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + ctx.r29.u64;
	// sraw r7,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r7.s64 = ctx.r11.s32 >> temp.u32;
	// subfic r9,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r8.s64;
	// and r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 & ctx.r7.u64;
	// srawi r3,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 3;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// add r7,r31,r8
	ctx.r7.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lbzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// lbz r10,1(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// rotlwi r7,r11,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 | ctx.r8.u64;
	// sraw r11,r11,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// and r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// slw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r5,r6,r25
	ctx.r5.u64 = ctx.r6.u64 + ctx.r25.u64;
	// stb r7,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r7.u8);
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lhz r3,90(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// lhz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// sth r3,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r3.u16);
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// b 0x820eb390
	goto loc_820EB390;
loc_820EB13C:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x820eb338
	if (ctx.cr6.eq) goto loc_820EB338;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x820eb27c
	if (ctx.cr6.eq) goto loc_820EB27C;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x820eb390
	if (ctx.cr6.eq) goto loc_820EB390;
loc_820EB154:
	// srawi r10,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 3;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// clrlwi r7,r30,29
	ctx.r7.u64 = ctx.r30.u32 & 0x7;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// slw r6,r28,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// add r8,r31,r9
	ctx.r8.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r4,r6,r29
	ctx.r4.u64 = ctx.r6.u64 + ctx.r29.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r16,r10,29
	ctx.r16.u64 = ctx.r10.u32 & 0x7;
	// lbz r5,2(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// lbz r3,1(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// slw r8,r28,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// slw r9,r28,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// or r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 | ctx.r3.u64;
	// add r6,r8,r29
	ctx.r6.u64 = ctx.r8.u64 + ctx.r29.u64;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 | ctx.r5.u64;
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + ctx.r29.u64;
	// sraw r7,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// subfic r9,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r11.s64;
	// srawi r3,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 3;
	// and r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 & ctx.r7.u64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r31,r8
	ctx.r7.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r3,r4,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// lbz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// clrlwi r4,r10,29
	ctx.r4.u64 = ctx.r10.u32 & 0x7;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// lbz r7,1(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// or r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r3,r7,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 | ctx.r8.u64;
	// sraw r8,r11,r16
	temp.u32 = ctx.r16.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r8.s64 = ctx.r11.s32 >> temp.u32;
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// srawi r6,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 3;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// slw r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// stb r7,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r7.u8);
	// add r11,r31,r8
	ctx.r11.u64 = ctx.r31.u64 + ctx.r8.u64;
	// stb r3,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r3.u8);
	// lbzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r3,r7,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// sraw r11,r8,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// and r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 & ctx.r11.u64;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// slw r5,r6,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r7,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r7.u8);
	// stb r4,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r4.u8);
	// lhz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r10,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// stb r8,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r8.u8);
	// lhz r7,98(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// sth r7,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r7.u16);
	// b 0x820eb38c
	goto loc_820EB38C;
loc_820EB27C:
	// srawi r11,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 3;
	// lwz r10,104(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// lwz r6,100(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// clrlwi r5,r30,29
	ctx.r5.u64 = ctx.r30.u32 & 0x7;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// sth r21,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r21.u16);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r8,r31,r9
	ctx.r8.u64 = ctx.r31.u64 + ctx.r9.u64;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// slw r4,r28,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// lbz r3,2(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// add r30,r7,r11
	ctx.r30.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r8,1(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbzx r9,r31,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// clrlwi r16,r11,29
	ctx.r16.u64 = ctx.r11.u32 & 0x7;
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// slw r3,r28,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sraw r9,r7,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r9.s64 = ctx.r7.s32 >> temp.u32;
	// subfic r8,r10,15
	ctx.xer.ca = ctx.r10.u32 <= 15;
	ctx.r8.s64 = 15 - ctx.r10.s64;
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// and r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 & ctx.r9.u64;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// slw r4,r5,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// add r10,r4,r26
	ctx.r10.u64 = ctx.r4.u64 + ctx.r26.u64;
	// rlwinm r5,r10,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r4,1(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// sraw r11,r7,r16
	temp.u32 = ctx.r16.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r11.s64 = ctx.r7.s32 >> temp.u32;
	// and r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 & ctx.r11.u64;
	// subfic r3,r6,16
	ctx.xer.ca = ctx.r6.u32 <= 16;
	ctx.r3.s64 = 16 - ctx.r6.s64;
	// slw r11,r4,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r3.u8 & 0x3F));
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// or r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 | ctx.r5.u64;
	// sth r8,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r8.u16);
	// b 0x820eb390
	goto loc_820EB390;
loc_820EB338:
	// srawi r10,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 3;
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// clrlwi r8,r30,29
	ctx.r8.u64 = ctx.r30.u32 & 0x7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// slw r7,r28,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// add r5,r7,r29
	ctx.r5.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r4,2(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r3,1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sraw r10,r6,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// subfic r4,r11,15
	ctx.xer.ca = ctx.r11.u32 <= 15;
	ctx.r4.s64 = 15 - ctx.r11.s64;
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// slw r11,r5,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// addi r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -16384;
	// rlwinm r11,r3,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
loc_820EB38C:
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
loc_820EB390:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ea7a0
	ctx.lr = 0x820EB3A4;
	sub_820EA7A0(ctx, base);
loc_820EB3A4:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// rotlwi r22,r22,1
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r22.u32, 1);
	// cmplwi cr6,r24,25
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 25, ctx.xer);
	// blt cr6,0x820eae38
	if (ctx.cr6.lt) goto loc_820EAE38;
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822487a8
	// ERROR 822487A8
	return;
loc_820EB3D0:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822487a8
	// ERROR 822487A8
	return;
}

__attribute__((alias("__imp__sub_820EB3E0"))) PPC_WEAK_FUNC(sub_820EB3E0);
PPC_FUNC_IMPL(__imp__sub_820EB3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x820EB3E8;
	sub_8224875C(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r21,32(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bne cr6,0x820eb42c
	if (!ctx.cr6.eq) goto loc_820EB42C;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x820eb44c
	if (!ctx.cr6.lt) goto loc_820EB44C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x820eb43c
	goto loc_820EB43C;
loc_820EB42C:
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820eb44c
	if (ctx.cr6.eq) goto loc_820EB44C;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
loc_820EB43C:
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_820EB44C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820eb468
	if (!ctx.cr6.eq) goto loc_820EB468;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
loc_820EB468:
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r23,36(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r8,372(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// subfe r22,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r22.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addic. r17,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r17.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// stw r8,112(r21)
	PPC_STORE_U32(ctx.r21.u32 + 112, ctx.r8.u32);
	// ble 0x820ebc20
	if (!ctx.cr0.gt) goto loc_820EBC20;
loc_820EB4AC:
	// lwz r11,84(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820eb4e0
	if (!ctx.cr6.eq) goto loc_820EB4E0;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820ea9f0
	ctx.lr = 0x820EB4D8;
	sub_820EA9F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820ebc18
	goto loc_820EBC18;
loc_820EB4E0:
	// lbzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// add r28,r31,r27
	ctx.r28.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// bne cr6,0x820eb5ac
	if (!ctx.cr6.eq) goto loc_820EB5AC;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r30,48(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r6,1816(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1816);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e7aa8
	ctx.lr = 0x820EB508;
	sub_820E7AA8(ctx, base);
	// ld r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// ld r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// std r9,168(r30)
	PPC_STORE_U64(ctx.r30.u32 + 168, ctx.r9.u64);
	// stfs f30,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// std r8,160(r30)
	PPC_STORE_U64(ctx.r30.u32 + 160, ctx.r8.u64);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt cr6,0x820eb544
	if (ctx.cr6.gt) goto loc_820EB544;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820eb544
	if (!ctx.cr6.eq) goto loc_820EB544;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EB544:
	// lwz r10,108(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stfs f31,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stfs f31,116(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stfs f31,112(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// stfs f30,124(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f31,132(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f31,36(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// std r5,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r5.u64);
	// std r6,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r6.u64);
	// mullw r4,r7,r20
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r20.s32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,84(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// lfs f1,124(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9a60
	ctx.lr = 0x820EB5A4;
	sub_820E9A60(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x820ebc18
	goto loc_820EBC18;
loc_820EB5AC:
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bne cr6,0x820eb670
	if (!ctx.cr6.eq) goto loc_820EB670;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r30,48(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r6,1816(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1816);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e7aa8
	ctx.lr = 0x820EB5CC;
	sub_820E7AA8(ctx, base);
	// ld r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// ld r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// std r9,168(r30)
	PPC_STORE_U64(ctx.r30.u32 + 168, ctx.r9.u64);
	// stfs f30,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// std r8,160(r30)
	PPC_STORE_U64(ctx.r30.u32 + 160, ctx.r8.u64);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt cr6,0x820eb608
	if (ctx.cr6.gt) goto loc_820EB608;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820eb608
	if (!ctx.cr6.eq) goto loc_820EB608;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EB608:
	// lwz r10,108(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stfs f31,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stfs f31,116(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stfs f31,112(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// stfs f30,124(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f31,132(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f31,36(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// std r6,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r6.u64);
	// std r5,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r5.u64);
	// mullw r4,r7,r20
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r20.s32);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,84(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// lfs f1,124(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9a60
	ctx.lr = 0x820EB668;
	sub_820E9A60(ctx, base);
	// addi r31,r31,14
	ctx.r31.s64 = ctx.r31.s64 + 14;
	// b 0x820ebc18
	goto loc_820EBC18;
loc_820EB670:
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// beq cr6,0x820ebb08
	if (ctx.cr6.eq) goto loc_820EBB08;
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// beq cr6,0x820ebb08
	if (ctx.cr6.eq) goto loc_820EBB08;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x820eb778
	if (!ctx.cr6.eq) goto loc_820EB778;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r30,48(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r6,1816(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1816);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e7aa8
	ctx.lr = 0x820EB6A0;
	sub_820E7AA8(ctx, base);
	// ld r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ld r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// std r9,160(r30)
	PPC_STORE_U64(ctx.r30.u32 + 160, ctx.r9.u64);
	// std r8,168(r30)
	PPC_STORE_U64(ctx.r30.u32 + 168, ctx.r8.u64);
	// stfs f30,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x820eb6d4
	if (ctx.cr6.eq) goto loc_820EB6D4;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EB6D4:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// bgt cr6,0x820eb6e8
	if (ctx.cr6.gt) goto loc_820EB6E8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820eb6e8
	if (!ctx.cr6.eq) goto loc_820EB6E8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EB6E8:
	// lwz r10,108(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stfs f31,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stfs f31,116(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stfs f31,112(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// stfs f30,124(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f31,132(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f31,36(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// std r6,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r6.u64);
	// std r5,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r5.u64);
	// mullw r29,r7,r20
	ctx.r29.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r20.s32);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,84(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// lfs f1,124(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9a60
	ctx.lr = 0x820EB748;
	sub_820E9A60(ctx, base);
	// addi r31,r31,14
	ctx.r31.s64 = ctx.r31.s64 + 14;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820EB750:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r31,r27
	ctx.r5.u64 = ctx.r31.u64 + ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820ea7a0
	ctx.lr = 0x820EB764;
	sub_820EA7A0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r30,21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 21, ctx.xer);
	// blt cr6,0x820eb750
	if (ctx.cr6.lt) goto loc_820EB750;
	// b 0x820ebc18
	goto loc_820EBC18;
loc_820EB778:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// beq cr6,0x820eba04
	if (ctx.cr6.eq) goto loc_820EBA04;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// blt cr6,0x820eb790
	if (ctx.cr6.lt) goto loc_820EB790;
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// ble cr6,0x820eb9ec
	if (!ctx.cr6.gt) goto loc_820EB9EC;
loc_820EB790:
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// beq cr6,0x820eb880
	if (ctx.cr6.eq) goto loc_820EB880;
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// blt cr6,0x820eb7a8
	if (ctx.cr6.lt) goto loc_820EB7A8;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// ble cr6,0x820eb880
	if (!ctx.cr6.gt) goto loc_820EB880;
loc_820EB7A8:
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x820eb880
	if (ctx.cr6.eq) goto loc_820EB880;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x820eb818
	if (!ctx.cr6.eq) goto loc_820EB818;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x820eb7e8
	if (!ctx.cr6.gt) goto loc_820EB7E8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_820EB7E8:
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x820ebc18
	if (!ctx.cr6.gt) goto loc_820EBC18;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x820ebc18
	goto loc_820EBC18;
loc_820EB818:
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x820ebc20
	if (ctx.cr6.gt) goto loc_820EBC20;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x820eb840
	if (ctx.cr6.eq) goto loc_820EB840;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EB840:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// bgt cr6,0x820eb854
	if (ctx.cr6.gt) goto loc_820EB854;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820eb854
	if (!ctx.cr6.eq) goto loc_820EB854;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EB854:
	// lwz r10,108(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// add r9,r31,r27
	ctx.r9.u64 = ctx.r31.u64 + ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r6,r9,r20
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r20.s32);
	// bl 0x820ea7a0
	ctx.lr = 0x820EB874;
	sub_820EA7A0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x820ebc18
	goto loc_820EBC18;
loc_820EB880:
	// lbz r25,0(r28)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r25,122
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 122, ctx.xer);
	// beq cr6,0x820eb8a4
	if (ctx.cr6.eq) goto loc_820EB8A4;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x820eb8a4
	if (ctx.cr6.eq) goto loc_820EB8A4;
	// addi r11,r11,-79
	ctx.r11.s64 = ctx.r11.s64 + -79;
	// li r26,1
	ctx.r26.s64 = 1;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x820eb8b8
	goto loc_820EB8B8;
loc_820EB8A4:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EB8B8:
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// beq cr6,0x820eb8c4
	if (ctx.cr6.eq) goto loc_820EB8C4;
	// rlwinm r29,r18,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EB8C4:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// bgt cr6,0x820eb8d8
	if (ctx.cr6.gt) goto loc_820EB8D8;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bne cr6,0x820eb8d8
	if (!ctx.cr6.eq) goto loc_820EB8D8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_820EB8D8:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r30,48(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r6,1816(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1816);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e7aa8
	ctx.lr = 0x820EB8F0;
	sub_820E7AA8(ctx, base);
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmpwi cr6,r25,117
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 117, ctx.xer);
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// beq cr6,0x820eb904
	if (ctx.cr6.eq) goto loc_820EB904;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
loc_820EB904:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820eb910
	if (ctx.cr6.eq) goto loc_820EB910;
	// mullw r29,r29,r20
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r20.s32);
loc_820EB910:
	// lwz r11,108(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// ld r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mullw r29,r7,r29
	ctx.r29.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,168(r30)
	PPC_STORE_U64(ctx.r30.u32 + 168, ctx.r9.u64);
	// stfs f30,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// std r6,160(r30)
	PPC_STORE_U64(ctx.r30.u32 + 160, ctx.r6.u64);
	// stfs f31,120(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// stfs f31,116(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stfs f31,112(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// stfs f30,124(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// std r4,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r4.u64);
	// stfs f31,36(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// std r11,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r11.u64);
	// stfs f31,132(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,84(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// lfs f1,124(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9a60
	ctx.lr = 0x820EB984;
	sub_820E9A60(ctx, base);
	// add r6,r8,r27
	ctx.r6.u64 = ctx.r8.u64 + ctx.r27.u64;
	// add r5,r8,r27
	ctx.r5.u64 = ctx.r8.u64 + ctx.r27.u64;
	// lbz r4,2(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbzx r3,r8,r27
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// addi r31,r8,3
	ctx.r31.s64 = ctx.r8.s64 + 3;
	// rotlwi r11,r4,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// lbz r10,1(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r26,r8,r3
	ctx.r26.u64 = ctx.r8.u64 | ctx.r3.u64;
loc_820EB9B4:
	// and r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 & ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820eb9d8
	if (ctx.cr6.eq) goto loc_820EB9D8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r31,r27
	ctx.r5.u64 = ctx.r31.u64 + ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820ea7a0
	ctx.lr = 0x820EB9D4;
	sub_820EA7A0(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_820EB9D8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// cmplwi cr6,r30,21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 21, ctx.xer);
	// blt cr6,0x820eb9b4
	if (ctx.cr6.lt) goto loc_820EB9B4;
	// b 0x820ebc18
	goto loc_820EBC18;
loc_820EB9EC:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// beq cr6,0x820eba04
	if (ctx.cr6.eq) goto loc_820EBA04;
	// addi r11,r11,-95
	ctx.r11.s64 = ctx.r11.s64 + -95;
	// li r26,1
	ctx.r26.s64 = 1;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x820eba18
	goto loc_820EBA18;
loc_820EBA04:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EBA18:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r30,48(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r6,1816(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1816);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e7aa8
	ctx.lr = 0x820EBA30;
	sub_820E7AA8(ctx, base);
	// add r8,r26,r31
	ctx.r8.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// beq cr6,0x820eba40
	if (ctx.cr6.eq) goto loc_820EBA40;
	// rlwinm r29,r18,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EBA40:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// bgt cr6,0x820eba58
	if (ctx.cr6.gt) goto loc_820EBA58;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bne cr6,0x820eba58
	if (!ctx.cr6.eq) goto loc_820EBA58;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x820eba60
	goto loc_820EBA60;
loc_820EBA58:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820eba64
	if (ctx.cr6.eq) goto loc_820EBA64;
loc_820EBA60:
	// mullw r29,r29,r20
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r20.s32);
loc_820EBA64:
	// lwz r11,108(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// ld r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mullw r29,r7,r29
	ctx.r29.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,168(r30)
	PPC_STORE_U64(ctx.r30.u32 + 168, ctx.r9.u64);
	// stfs f30,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// std r6,160(r30)
	PPC_STORE_U64(ctx.r30.u32 + 160, ctx.r6.u64);
	// stfs f31,120(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// stfs f31,116(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stfs f31,112(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// stfs f30,124(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// std r4,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r4.u64);
	// stfs f31,132(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// std r11,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r11.u64);
	// stfs f31,36(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,84(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// lfs f1,124(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9a60
	ctx.lr = 0x820EBAD8;
	sub_820E9A60(ctx, base);
	// addi r31,r8,6
	ctx.r31.s64 = ctx.r8.s64 + 6;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820EBAE0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r31,r27
	ctx.r5.u64 = ctx.r31.u64 + ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820ea7a0
	ctx.lr = 0x820EBAF4;
	sub_820EA7A0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r30,21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 21, ctx.xer);
	// blt cr6,0x820ebae0
	if (ctx.cr6.lt) goto loc_820EBAE0;
	// b 0x820ebc18
	goto loc_820EBC18;
loc_820EBB08:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r10,52(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820ebc00
	if (!ctx.cr6.lt) goto loc_820EBC00;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,48(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r6,1816(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1816);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x820e7aa8
	ctx.lr = 0x820EBB44;
	sub_820E7AA8(ctx, base);
	// ld r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// ld r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// add r10,r31,r27
	ctx.r10.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lfs f0,352(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// lfs f13,356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// lfs f12,360(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	ctx.f12.f64 = double(temp.f32);
	// std r8,168(r30)
	PPC_STORE_U64(ctx.r30.u32 + 168, ctx.r8.u64);
	// stfs f30,172(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// std r7,160(r30)
	PPC_STORE_U64(ctx.r30.u32 + 160, ctx.r7.u64);
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lbz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt cr6,0x820ebbb0
	if (ctx.cr6.gt) goto loc_820EBBB0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820ebbb0
	if (!ctx.cr6.eq) goto loc_820EBBB0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EBBB0:
	// lwz r10,108(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stfs f31,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stfs f31,116(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stfs f31,112(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// stfs f30,124(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f31,132(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f31,36(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// std r6,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r6.u64);
	// std r5,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r5.u64);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,84(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
loc_820EBC00:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// bne cr6,0x820ebc14
	if (!ctx.cr6.eq) goto loc_820EBC14;
	// addi r31,r31,9
	ctx.r31.s64 = ctx.r31.s64 + 9;
	// b 0x820ebc18
	goto loc_820EBC18;
loc_820EBC14:
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
loc_820EBC18:
	// cmpw cr6,r31,r17
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x820eb4ac
	if (ctx.cr6.lt) goto loc_820EB4AC;
loc_820EBC20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_820EBC34"))) PPC_WEAK_FUNC(sub_820EBC34);
PPC_FUNC_IMPL(__imp__sub_820EBC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EBC38"))) PPC_WEAK_FUNC(sub_820EBC38);
PPC_FUNC_IMPL(__imp__sub_820EBC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x820EBC40;
	sub_82248760(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820ec34c
	if (ctx.cr6.eq) goto loc_820EC34C;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820ec34c
	if (ctx.cr6.eq) goto loc_820EC34C;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// bne cr6,0x820ebc98
	if (!ctx.cr6.eq) goto loc_820EBC98;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x820ebcb8
	if (!ctx.cr6.lt) goto loc_820EBCB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x820ebca8
	goto loc_820EBCA8;
loc_820EBC98:
	// rlwinm r8,r11,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820ebcb8
	if (ctx.cr6.eq) goto loc_820EBCB8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
loc_820EBCA8:
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_820EBCB8:
	// lwz r11,84(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// addic. r18,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r18.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r24,36(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r22,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r22.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,112(r9)
	PPC_STORE_U32(ctx.r9.u32 + 112, ctx.r10.u32);
	// ble 0x820ec34c
	if (!ctx.cr0.gt) goto loc_820EC34C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,8328(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820EBCF8:
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820ebd2c
	if (!ctx.cr6.eq) goto loc_820EBD2C;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820ea9f0
	ctx.lr = 0x820EBD24;
	sub_820EA9F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820ec344
	goto loc_820EC344;
loc_820EBD2C:
	// lbzx r27,r31,r25
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// add r3,r31,r25
	ctx.r3.u64 = ctx.r31.u64 + ctx.r25.u64;
	// cmplwi cr6,r27,126
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 126, ctx.xer);
	// bne cr6,0x820ebdd4
	if (!ctx.cr6.eq) goto loc_820EBDD4;
	// lwz r29,48(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// lfs f0,132(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820ebdcc
	if (!ctx.cr6.eq) goto loc_820EBDCC;
	// addi r30,r29,112
	ctx.r30.s64 = ctx.r29.s64 + 112;
	// lwz r6,1816(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1816);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x820e7aa8
	ctx.lr = 0x820EBD60;
	sub_820E7AA8(ctx, base);
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt cr6,0x820ebd84
	if (ctx.cr6.gt) goto loc_820EBD84;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820ebd84
	if (!ctx.cr6.eq) goto loc_820EBD84;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EBD84:
	// lwz r10,108(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 108);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r20
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r20.s32);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bgt cr6,0x820ebdb4
	if (ctx.cr6.gt) goto loc_820EBDB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x820e8c40
	ctx.lr = 0x820EBDA8;
	sub_820E8C40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ebdb4
	if (ctx.cr6.eq) goto loc_820EBDB4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_820EBDB4:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,132(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 132, temp.u32);
loc_820EBDCC:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x820ec344
	goto loc_820EC344;
loc_820EBDD4:
	// cmplwi cr6,r27,127
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 127, ctx.xer);
	// bne cr6,0x820ebe74
	if (!ctx.cr6.eq) goto loc_820EBE74;
	// lwz r29,48(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// lfs f0,132(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820ebe6c
	if (!ctx.cr6.eq) goto loc_820EBE6C;
	// addi r30,r29,112
	ctx.r30.s64 = ctx.r29.s64 + 112;
	// lwz r6,1816(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1816);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x820e7aa8
	ctx.lr = 0x820EBE00;
	sub_820E7AA8(ctx, base);
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt cr6,0x820ebe24
	if (ctx.cr6.gt) goto loc_820EBE24;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820ebe24
	if (!ctx.cr6.eq) goto loc_820EBE24;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EBE24:
	// lwz r10,108(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 108);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r20
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r20.s32);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bgt cr6,0x820ebe54
	if (ctx.cr6.gt) goto loc_820EBE54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x820e8c40
	ctx.lr = 0x820EBE48;
	sub_820E8C40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ebe54
	if (ctx.cr6.eq) goto loc_820EBE54;
	// li r9,1
	ctx.r9.s64 = 1;
loc_820EBE54:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,132(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 132, temp.u32);
loc_820EBE6C:
	// addi r31,r31,14
	ctx.r31.s64 = ctx.r31.s64 + 14;
	// b 0x820ec344
	goto loc_820EC344;
loc_820EBE74:
	// cmplwi cr6,r27,123
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 123, ctx.xer);
	// beq cr6,0x820ec28c
	if (ctx.cr6.eq) goto loc_820EC28C;
	// cmplwi cr6,r27,118
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 118, ctx.xer);
	// beq cr6,0x820ec28c
	if (ctx.cr6.eq) goto loc_820EC28C;
	// cmplwi cr6,r27,125
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 125, ctx.xer);
	// bne cr6,0x820ebf58
	if (!ctx.cr6.eq) goto loc_820EBF58;
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lwz r30,48(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, -1, ctx.xer);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x820ebeac
	if (ctx.cr6.eq) goto loc_820EBEAC;
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EBEAC:
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// bgt cr6,0x820ebec0
	if (ctx.cr6.gt) goto loc_820EBEC0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820ebec0
	if (!ctx.cr6.eq) goto loc_820EBEC0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EBEC0:
	// lwz r10,108(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 108);
	// lfs f0,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r29,r9,r20
	ctx.r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r20.s32);
	// bne cr6,0x820ebf28
	if (!ctx.cr6.eq) goto loc_820EBF28;
	// addi r28,r30,112
	ctx.r28.s64 = ctx.r30.s64 + 112;
	// lwz r6,1816(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1816);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x820e7aa8
	ctx.lr = 0x820EBEF0;
	sub_820E7AA8(ctx, base);
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bgt cr6,0x820ebf10
	if (ctx.cr6.gt) goto loc_820EBF10;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x820e8c40
	ctx.lr = 0x820EBF04;
	sub_820E8C40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ebf10
	if (ctx.cr6.eq) goto loc_820EBF10;
	// li r29,1
	ctx.r29.s64 = 1;
loc_820EBF10:
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,132(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
loc_820EBF28:
	// addi r31,r31,14
	ctx.r31.s64 = ctx.r31.s64 + 14;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820EBF30:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r31,r25
	ctx.r5.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820e8850
	ctx.lr = 0x820EBF44;
	sub_820E8850(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r30,21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 21, ctx.xer);
	// blt cr6,0x820ebf30
	if (ctx.cr6.lt) goto loc_820EBF30;
	// b 0x820ec344
	goto loc_820EC344;
loc_820EBF58:
	// cmplwi cr6,r27,124
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 124, ctx.xer);
	// beq cr6,0x820ec1b8
	if (ctx.cr6.eq) goto loc_820EC1B8;
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 96, ctx.xer);
	// blt cr6,0x820ebf70
	if (ctx.cr6.lt) goto loc_820EBF70;
	// cmplwi cr6,r27,111
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 111, ctx.xer);
	// ble cr6,0x820ec1a0
	if (!ctx.cr6.gt) goto loc_820EC1A0;
loc_820EBF70:
	// cmplwi cr6,r27,122
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 122, ctx.xer);
	// beq cr6,0x820ec060
	if (ctx.cr6.eq) goto loc_820EC060;
	// cmplwi cr6,r27,80
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 80, ctx.xer);
	// blt cr6,0x820ebf88
	if (ctx.cr6.lt) goto loc_820EBF88;
	// cmplwi cr6,r27,95
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 95, ctx.xer);
	// ble cr6,0x820ec060
	if (!ctx.cr6.gt) goto loc_820EC060;
loc_820EBF88:
	// cmplwi cr6,r27,117
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 117, ctx.xer);
	// beq cr6,0x820ec060
	if (ctx.cr6.eq) goto loc_820EC060;
	// cmplwi cr6,r27,116
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 116, ctx.xer);
	// bne cr6,0x820ebff8
	if (!ctx.cr6.eq) goto loc_820EBFF8;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x820ebfc8
	if (!ctx.cr6.gt) goto loc_820EBFC8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_820EBFC8:
	// lbzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x820ec344
	if (!ctx.cr6.gt) goto loc_820EC344;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x820ec344
	goto loc_820EC344;
loc_820EBFF8:
	// cmplwi cr6,r27,122
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 122, ctx.xer);
	// bgt cr6,0x820ec34c
	if (ctx.cr6.gt) goto loc_820EC34C;
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lbz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, -1, ctx.xer);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x820ec020
	if (ctx.cr6.eq) goto loc_820EC020;
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EC020:
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// bgt cr6,0x820ec034
	if (ctx.cr6.gt) goto loc_820EC034;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820ec034
	if (!ctx.cr6.eq) goto loc_820EC034;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EC034:
	// lwz r9,108(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 108);
	// add r10,r31,r25
	ctx.r10.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r6,r8,r20
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r20.s32);
	// bl 0x820e8850
	ctx.lr = 0x820EC054;
	sub_820E8850(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x820ec344
	goto loc_820EC344;
loc_820EC060:
	// cmpwi cr6,r27,122
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 122, ctx.xer);
	// beq cr6,0x820ec080
	if (ctx.cr6.eq) goto loc_820EC080;
	// cmpwi cr6,r27,117
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 117, ctx.xer);
	// beq cr6,0x820ec080
	if (ctx.cr6.eq) goto loc_820EC080;
	// addi r11,r27,-79
	ctx.r11.s64 = ctx.r27.s64 + -79;
	// li r26,1
	ctx.r26.s64 = 1;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x820ec094
	goto loc_820EC094;
loc_820EC080:
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EC094:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, -1, ctx.xer);
	// beq cr6,0x820ec0a0
	if (ctx.cr6.eq) goto loc_820EC0A0;
	// rlwinm r28,r19,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EC0A0:
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// bgt cr6,0x820ec0b8
	if (ctx.cr6.gt) goto loc_820EC0B8;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bne cr6,0x820ec0b8
	if (!ctx.cr6.eq) goto loc_820EC0B8;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x820ec0c0
	goto loc_820EC0C0;
loc_820EC0B8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820ec0c4
	if (ctx.cr6.eq) goto loc_820EC0C4;
loc_820EC0C0:
	// mullw r28,r28,r20
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r20.s32);
loc_820EC0C4:
	// lwz r29,48(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// lfs f0,132(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820ec120
	if (!ctx.cr6.eq) goto loc_820EC120;
	// addi r30,r29,112
	ctx.r30.s64 = ctx.r29.s64 + 112;
	// lwz r6,1816(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1816);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x820e7aa8
	ctx.lr = 0x820EC0E8;
	sub_820E7AA8(ctx, base);
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bgt cr6,0x820ec108
	if (ctx.cr6.gt) goto loc_820EC108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x820e8c40
	ctx.lr = 0x820EC0FC;
	sub_820E8C40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ec108
	if (ctx.cr6.eq) goto loc_820EC108;
	// li r28,1
	ctx.r28.s64 = 1;
loc_820EC108:
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,132(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 132, temp.u32);
loc_820EC120:
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmpwi cr6,r27,117
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 117, ctx.xer);
	// bne cr6,0x820ec134
	if (!ctx.cr6.eq) goto loc_820EC134;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// b 0x820ec138
	goto loc_820EC138;
loc_820EC134:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_820EC138:
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r6,1(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r27,r3,r9
	ctx.r27.u64 = ctx.r3.u64 | ctx.r9.u64;
loc_820EC168:
	// and r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 & ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ec18c
	if (ctx.cr6.eq) goto loc_820EC18C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r31,r25
	ctx.r5.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820e8850
	ctx.lr = 0x820EC188;
	sub_820E8850(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_820EC18C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// cmplwi cr6,r30,21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 21, ctx.xer);
	// blt cr6,0x820ec168
	if (ctx.cr6.lt) goto loc_820EC168;
	// b 0x820ec344
	goto loc_820EC344;
loc_820EC1A0:
	// cmplwi cr6,r27,124
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 124, ctx.xer);
	// beq cr6,0x820ec1b8
	if (ctx.cr6.eq) goto loc_820EC1B8;
	// addi r11,r27,-95
	ctx.r11.s64 = ctx.r27.s64 + -95;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x820ec1cc
	goto loc_820EC1CC;
loc_820EC1B8:
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EC1CC:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, -1, ctx.xer);
	// beq cr6,0x820ec1d8
	if (ctx.cr6.eq) goto loc_820EC1D8;
	// rlwinm r29,r19,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
loc_820EC1D8:
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// bgt cr6,0x820ec1f0
	if (ctx.cr6.gt) goto loc_820EC1F0;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bne cr6,0x820ec1f0
	if (!ctx.cr6.eq) goto loc_820EC1F0;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x820ec1f8
	goto loc_820EC1F8;
loc_820EC1F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820ec1fc
	if (ctx.cr6.eq) goto loc_820EC1FC;
loc_820EC1F8:
	// mullw r29,r29,r20
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r20.s32);
loc_820EC1FC:
	// lwz r28,48(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// lfs f0,132(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820ec258
	if (!ctx.cr6.eq) goto loc_820EC258;
	// addi r30,r28,112
	ctx.r30.s64 = ctx.r28.s64 + 112;
	// lwz r6,1816(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1816);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x820e7aa8
	ctx.lr = 0x820EC220;
	sub_820E7AA8(ctx, base);
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bgt cr6,0x820ec240
	if (ctx.cr6.gt) goto loc_820EC240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x820e8c40
	ctx.lr = 0x820EC234;
	sub_820E8C40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ec240
	if (ctx.cr6.eq) goto loc_820EC240;
	// li r29,1
	ctx.r29.s64 = 1;
loc_820EC240:
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,132(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 132, temp.u32);
loc_820EC258:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6
	ctx.r31.s64 = ctx.r11.s64 + 6;
loc_820EC264:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r31,r25
	ctx.r5.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820e8850
	ctx.lr = 0x820EC278;
	sub_820E8850(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r30,21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 21, ctx.xer);
	// blt cr6,0x820ec264
	if (ctx.cr6.lt) goto loc_820EC264;
	// b 0x820ec344
	goto loc_820EC344;
loc_820EC28C:
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lwz r10,52(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820ec340
	if (!ctx.cr6.lt) goto loc_820EC340;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,48(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,132(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820ec340
	if (!ctx.cr6.eq) goto loc_820EC340;
	// addi r5,r29,112
	ctx.r5.s64 = ctx.r29.s64 + 112;
	// lwz r6,1816(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1816);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x820e7aa8
	ctx.lr = 0x820EC2D4;
	sub_820E7AA8(ctx, base);
	// lfs f0,352(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,116(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,112(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 112, temp.u32);
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// lfs f10,356(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,120(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,116(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 116, temp.u32);
	// lfs f7,360(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,120(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 120, temp.u32);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lfd f5,136(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// stfs f0,132(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 132, temp.u32);
	// bgt cr6,0x820ec340
	if (ctx.cr6.gt) goto loc_820EC340;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x820ec340
	if (!ctx.cr6.eq) goto loc_820EC340;
	// stfs f29,132(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 132, temp.u32);
loc_820EC340:
	// addi r31,r31,9
	ctx.r31.s64 = ctx.r31.s64 + 9;
loc_820EC344:
	// cmpw cr6,r31,r18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x820ebcf8
	if (ctx.cr6.lt) goto loc_820EBCF8;
loc_820EC34C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_820EC364"))) PPC_WEAK_FUNC(sub_820EC364);
PPC_FUNC_IMPL(__imp__sub_820EC364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EC368"))) PPC_WEAK_FUNC(sub_820EC368);
PPC_FUNC_IMPL(__imp__sub_820EC368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820EC370;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,18543
	ctx.r4.u64 = ctx.r4.u64 | 18543;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82188378
	ctx.lr = 0x820EC394;
	sub_82188378(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r27,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r27.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r10,18960
	ctx.r9.s64 = ctx.r10.s64 + 18960;
	// stw r11,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r11.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r26.u32);
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// stw r11,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r11.u32);
	// stw r11,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r11.u32);
	// stw r11,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r11.u32);
	// stw r11,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r11.u32);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// stw r11,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r11.u32);
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// stw r11,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r11.u32);
	// bl 0x821882d0
	ctx.lr = 0x820EC3F8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ec408
	if (ctx.cr6.eq) goto loc_820EC408;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820ec40c
	goto loc_820EC40C;
loc_820EC408:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820EC40C:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,19780
	ctx.r4.u64 = ctx.r4.u64 | 19780;
	// bl 0x821882d0
	ctx.lr = 0x820EC420;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ec430
	if (ctx.cr6.eq) goto loc_820EC430;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820ec434
	goto loc_820EC434;
loc_820EC430:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820EC434:
	// lis r10,170
	ctx.r10.s64 = 11141120;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// ori r9,r10,43690
	ctx.r9.u64 = ctx.r10.u64 | 43690;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x820ec45c
	if (ctx.cr6.gt) goto loc_820EC45C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r30,r11,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// b 0x820ec460
	goto loc_820EC460;
loc_820EC45C:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_820EC460:
	// bl 0x82183850
	ctx.lr = 0x820EC464;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820ec47c
	if (ctx.cr6.eq) goto loc_820EC47C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820EC478;
	sub_82183448(ctx, base);
	// b 0x820ec488
	goto loc_820EC488;
loc_820EC47C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820EC488;
	sub_821845A0(ctx, base);
loc_820EC488:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x820EC490;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820ec4a8
	if (ctx.cr6.eq) goto loc_820EC4A8;
	// li r3,2176
	ctx.r3.s64 = 2176;
	// bl 0x82183448
	ctx.lr = 0x820EC4A4;
	sub_82183448(ctx, base);
	// b 0x820ec4b0
	goto loc_820EC4B0;
loc_820EC4A8:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x821845a0
	ctx.lr = 0x820EC4B0;
	sub_821845A0(ctx, base);
loc_820EC4B0:
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4984(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// bl 0x820e9ae0
	ctx.lr = 0x820EC4CC;
	sub_820E9AE0(ctx, base);
	// stw r26,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r26.u32);
	// sth r29,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r29.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820EC4E4"))) PPC_WEAK_FUNC(sub_820EC4E4);
PPC_FUNC_IMPL(__imp__sub_820EC4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EC4E8"))) PPC_WEAK_FUNC(sub_820EC4E8);
PPC_FUNC_IMPL(__imp__sub_820EC4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x820EC4F0;
	sub_82248760(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x8224991c
	ctx.lr = 0x820EC4F8;
	sub_8224991C(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,32(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r18,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r18.u32);
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820ec54c
	if (ctx.cr6.eq) goto loc_820EC54C;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ec564
	if (ctx.cr6.eq) goto loc_820EC564;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ec560
	if (ctx.cr6.eq) goto loc_820EC560;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820ec54c
	if (!ctx.cr6.eq) goto loc_820EC54C;
	// stw r18,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r18.u32);
loc_820EC54C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82249968
	ctx.lr = 0x820EC55C;
	sub_82249968(ctx, base);
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_820EC560:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
loc_820EC564:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lwz r10,108(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// lwz r9,88(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820ec59c
	if (!ctx.cr6.eq) goto loc_820EC59C;
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820ec5a0
	if (ctx.cr6.eq) goto loc_820EC5A0;
loc_820EC59C:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_820EC5A0:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f25,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f25.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x820ec5bc
	if (!ctx.cr6.lt) goto loc_820EC5BC;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_820EC5BC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820ec5f4
	if (!ctx.cr6.lt) goto loc_820EC5F4;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820ec5f4
	if (!ctx.cr6.lt) goto loc_820EC5F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82249968
	ctx.lr = 0x820EC5F0;
	sub_82249968(ctx, base);
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_820EC5F4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r18,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r18.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f28,9852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,8324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8324);
	ctx.f26.f64 = double(temp.f32);
	// li r19,32
	ctx.r19.s64 = 32;
	// lfs f27,8060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8060);
	ctx.f27.f64 = double(temp.f32);
	// lis r24,-32182
	ctx.r24.s64 = -2109079552;
	// lfs f29,8616(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8616);
	ctx.f29.f64 = double(temp.f32);
	// lis r21,-32187
	ctx.r21.s64 = -2109407232;
	// lfs f31,8328(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8328);
	ctx.f31.f64 = double(temp.f32);
	// addi r22,r11,-7560
	ctx.r22.s64 = ctx.r11.s64 + -7560;
loc_820EC634:
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// bl 0x820a2b60
	ctx.lr = 0x820EC63C;
	sub_820A2B60(ctx, base);
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x820ec680
	if (ctx.cr6.eq) goto loc_820EC680;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x820ec664
	if (ctx.cr6.lt) goto loc_820EC664;
loc_820EC658:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820ec658
	if (!ctx.cr6.lt) goto loc_820EC658;
loc_820EC664:
	// lfs f13,60(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-27256(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -27256);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f11,f13,f12,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f29.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x820ec698
	if (ctx.cr6.lt) goto loc_820EC698;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// b 0x820ec698
	goto loc_820EC698;
loc_820EC680:
	// fctiwz f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820ec9c0
	if (!ctx.cr6.eq) goto loc_820EC9C0;
loc_820EC698:
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x820e7548
	ctx.lr = 0x820EC6B8;
	sub_820E7548(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ec808
	if (ctx.cr6.eq) goto loc_820EC808;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ec6f0
	if (!ctx.cr6.eq) goto loc_820EC6F0;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r9,88(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x820f04f0
	ctx.lr = 0x820EC6EC;
	sub_820F04F0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_820EC6F0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ec758
	if (ctx.cr6.eq) goto loc_820EC758;
	// lwz r10,88(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820ec73c
	if (!ctx.cr6.eq) goto loc_820EC73C;
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820ec73c
	if (!ctx.cr6.eq) goto loc_820EC73C;
	// lwz r10,96(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x820ec758
	if (ctx.cr6.eq) goto loc_820EC758;
loc_820EC73C:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x820f04f0
	ctx.lr = 0x820EC754;
	sub_820F04F0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_820EC758:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ec780
	if (!ctx.cr6.eq) goto loc_820EC780;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x820ec780
	if (ctx.cr6.eq) goto loc_820EC780;
	// lfs f0,60(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27256(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -27256);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f11,f12,f31,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fadds f30,f11,f29
	ctx.f30.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
loc_820EC780:
	// fctiwz f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,-4984(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4984);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// bl 0x820f0548
	ctx.lr = 0x820EC7B4;
	sub_820F0548(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x820ec804
	if (ctx.cr6.eq) goto loc_820EC804;
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,-4984(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4984);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// fmuls f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x820f0548
	ctx.lr = 0x820EC7FC;
	sub_820F0548(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x820ec808
	goto loc_820EC808;
loc_820EC804:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820EC808:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ec874
	if (ctx.cr6.eq) goto loc_820EC874;
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ec874
	if (ctx.cr6.eq) goto loc_820EC874;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820ec874
	if (!ctx.cr6.eq) goto loc_820EC874;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820ec874
	if (!ctx.cr6.eq) goto loc_820EC874;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820ec874
	if (!ctx.cr6.eq) goto loc_820EC874;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82084bd8
	ctx.lr = 0x820EC874;
	sub_82084BD8(ctx, base);
loc_820EC874:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f0,60(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lfs f13,-27256(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -27256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// beq cr6,0x820ec8ac
	if (ctx.cr6.eq) goto loc_820EC8AC;
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bne cr6,0x820ec8d8
	if (!ctx.cr6.eq) goto loc_820EC8D8;
loc_820EC8AC:
	// fmadds f0,f0,f26,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f28.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_820EC8D8:
	// lwz r10,104(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820ec9e4
	if (ctx.cr6.eq) goto loc_820EC9E4;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x820ec9e4
	if (ctx.cr6.eq) goto loc_820EC9E4;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ec9e4
	if (!ctx.cr6.eq) goto loc_820EC9E4;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x820ec924
	if (!ctx.cr6.eq) goto loc_820EC924;
	// subfc r10,r19,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r19.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r19.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
loc_820EC924:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x820ec9e4
	if (!ctx.cr6.eq) goto loc_820EC9E4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ec9e4
	if (ctx.cr6.eq) goto loc_820EC9E4;
	// clrlwi r28,r11,25
	ctx.r28.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x820ec944
	if (!ctx.cr6.eq) goto loc_820EC944;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_820EC944:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ec97c
	if (!ctx.cr6.eq) goto loc_820EC97C;
	// lis r4,21300
	ctx.r4.s64 = 1395916800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,16724
	ctx.r4.u64 = ctx.r4.u64 | 16724;
	// bl 0x821882d0
	ctx.lr = 0x820EC964;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ec974
	if (ctx.cr6.eq) goto loc_820EC974;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820ec978
	goto loc_820EC978;
loc_820EC974:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_820EC978:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_820EC97C:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ec9e4
	if (ctx.cr6.eq) goto loc_820EC9E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EC9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820ec9e4
	if (!ctx.cr6.eq) goto loc_820EC9E4;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// b 0x820ec634
	goto loc_820EC634;
loc_820EC9C0:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82249968
	ctx.lr = 0x820EC9E0;
	sub_82249968(ctx, base);
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_820EC9E4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x820ec54c
	if (ctx.cr6.eq) goto loc_820EC54C;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x820eca08
	if (!ctx.cr6.eq) goto loc_820ECA08;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82249968
	ctx.lr = 0x820ECA04;
	sub_82249968(ctx, base);
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_820ECA08:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820eca18
	if (!ctx.cr6.lt) goto loc_820ECA18;
	// subfic r30,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r30.s64 = 1 - ctx.r11.s64;
loc_820ECA18:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x820eca34
	if (ctx.cr6.eq) goto loc_820ECA34;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x820ecaec
	if (!ctx.cr6.eq) goto loc_820ECAEC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ecaec
	if (ctx.cr6.eq) goto loc_820ECAEC;
loc_820ECA34:
	// fctidz f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f30.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f30.f64));
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x820eb3e0
	ctx.lr = 0x820ECA58;
	sub_820EB3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x820ecadc
	if (ctx.cr6.eq) goto loc_820ECADC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ecadc
	if (ctx.cr6.eq) goto loc_820ECADC;
	// lfs f13,-27256(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -27256);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,-4984(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4984);
	// lfs f0,60(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// subfe r8,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fmadds f13,f0,f31,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fadds f31,f13,f29
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// fmuls f12,f31,f27
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x820f0548
	ctx.lr = 0x820ECAB8;
	sub_820F0548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fctidz f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820ebc38
	ctx.lr = 0x820ECADC;
	sub_820EBC38(ctx, base);
loc_820ECADC:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x820ecb30
	if (ctx.cr6.eq) goto loc_820ECB30;
	// stw r18,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r18.u32);
	// b 0x820ecb30
	goto loc_820ECB30;
loc_820ECAEC:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// addi r4,r25,1
	ctx.r4.s64 = ctx.r25.s64 + 1;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r3,r11,25
	ctx.r3.u64 = ctx.r11.u32 & 0x7F;
	// bl 0x820e7ba0
	ctx.lr = 0x820ECB00;
	sub_820E7BA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ecb0c
	if (ctx.cr6.eq) goto loc_820ECB0C;
	// fmr f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f25.f64;
loc_820ECB0C:
	// fctidz f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f30.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x820ebc38
	ctx.lr = 0x820ECB30;
	sub_820EBC38(ctx, base);
loc_820ECB30:
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82249968
	ctx.lr = 0x820ECB58;
	sub_82249968(ctx, base);
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_820ECB5C"))) PPC_WEAK_FUNC(sub_820ECB5C);
PPC_FUNC_IMPL(__imp__sub_820ECB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ECB60"))) PPC_WEAK_FUNC(sub_820ECB60);
PPC_FUNC_IMPL(__imp__sub_820ECB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820ecba4
	if (!ctx.cr6.eq) goto loc_820ECBA4;
	// lwz r11,344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// cmpwi cr6,r11,20500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20500, ctx.xer);
	// blt cr6,0x820ecba4
	if (ctx.cr6.lt) goto loc_820ECBA4;
	// cmpwi cr6,r11,21500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21500, ctx.xer);
	// blt cr6,0x820ecc1c
	if (ctx.cr6.lt) goto loc_820ECC1C;
loc_820ECBA4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ecbd8
	if (!ctx.cr6.eq) goto loc_820ECBD8;
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,18543
	ctx.r4.u64 = ctx.r4.u64 | 18543;
	// bl 0x821882d0
	ctx.lr = 0x820ECBC0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ecbd0
	if (ctx.cr6.eq) goto loc_820ECBD0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820ecbd4
	goto loc_820ECBD4;
loc_820ECBD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820ECBD4:
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_820ECBD8:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ecc1c
	if (ctx.cr6.eq) goto loc_820ECC1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ec4e8
	ctx.lr = 0x820ECBEC;
	sub_820EC4E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820ecc1c
	if (ctx.cr6.eq) goto loc_820ECC1C;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820ecc1c
	if (!ctx.cr6.gt) goto loc_820ECC1C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820ECC04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ec4e8
	ctx.lr = 0x820ECC0C;
	sub_820EC4E8(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ecc04
	if (ctx.cr6.lt) goto loc_820ECC04;
loc_820ECC1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ECC34"))) PPC_WEAK_FUNC(sub_820ECC34);
PPC_FUNC_IMPL(__imp__sub_820ECC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ECC38"))) PPC_WEAK_FUNC(sub_820ECC38);
PPC_FUNC_IMPL(__imp__sub_820ECC38) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// blt cr6,0x820ecc48
	if (ctx.cr6.lt) goto loc_820ECC48;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820ECC48:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5052
	ctx.r9.s64 = ctx.r11.s64 + -5052;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ECC5C"))) PPC_WEAK_FUNC(sub_820ECC5C);
PPC_FUNC_IMPL(__imp__sub_820ECC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ECC60"))) PPC_WEAK_FUNC(sub_820ECC60);
PPC_FUNC_IMPL(__imp__sub_820ECC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-4996(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4996, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ECC6C"))) PPC_WEAK_FUNC(sub_820ECC6C);
PPC_FUNC_IMPL(__imp__sub_820ECC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ECC70"))) PPC_WEAK_FUNC(sub_820ECC70);
PPC_FUNC_IMPL(__imp__sub_820ECC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-4996(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4996);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ECC7C"))) PPC_WEAK_FUNC(sub_820ECC7C);
PPC_FUNC_IMPL(__imp__sub_820ECC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ECC80"))) PPC_WEAK_FUNC(sub_820ECC80);
PPC_FUNC_IMPL(__imp__sub_820ECC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4996);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_820ECC98"))) PPC_WEAK_FUNC(sub_820ECC98);
PPC_FUNC_IMPL(__imp__sub_820ECC98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4996, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ECCA8"))) PPC_WEAK_FUNC(sub_820ECCA8);
PPC_FUNC_IMPL(__imp__sub_820ECCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-4968(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4968, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ECCB4"))) PPC_WEAK_FUNC(sub_820ECCB4);
PPC_FUNC_IMPL(__imp__sub_820ECCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ECCB8"))) PPC_WEAK_FUNC(sub_820ECCB8);
PPC_FUNC_IMPL(__imp__sub_820ECCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-4936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4936);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ecd1c
	if (ctx.cr6.eq) goto loc_820ECD1C;
	// bl 0x8215bd60
	ctx.lr = 0x820ECCDC;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820eccf4
	if (ctx.cr6.eq) goto loc_820ECCF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ecd10
	goto loc_820ECD10;
loc_820ECCF4:
	// lwz r11,-4940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820ecd08
	if (!ctx.cr6.lt) goto loc_820ECD08;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// b 0x820ecd10
	goto loc_820ECD10;
loc_820ECD08:
	// ble cr6,0x820ecd14
	if (!ctx.cr6.gt) goto loc_820ECD14;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_820ECD10:
	// stw r11,-4940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4940, ctx.r11.u32);
loc_820ECD14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4936, ctx.r11.u32);
loc_820ECD1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ECD30"))) PPC_WEAK_FUNC(sub_820ECD30);
PPC_FUNC_IMPL(__imp__sub_820ECD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-27252
	ctx.r8.s64 = ctx.r9.s64 + -27252;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-27252(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27252, ctx.r11.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,-4960(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4960, ctx.r11.u32);
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stw r9,-4968(r5)
	PPC_STORE_U32(ctx.r5.u32 + -4968, ctx.r9.u32);
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r10,-4964(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4964, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stw r11,-4972(r4)
	PPC_STORE_U32(ctx.r4.u32 + -4972, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r10,-4992(r3)
	PPC_STORE_U8(ctx.r3.u32 + -4992, ctx.r10.u8);
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// stw r9,-4980(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4980, ctx.r9.u32);
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// stw r11,-4996(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4996, ctx.r11.u32);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-4988(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4988, ctx.r10.u32);
	// stw r9,-5000(r5)
	PPC_STORE_U32(ctx.r5.u32 + -5000, ctx.r9.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,-5004(r4)
	PPC_STORE_U32(ctx.r4.u32 + -5004, ctx.r11.u32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stb r10,-4932(r3)
	PPC_STORE_U8(ctx.r3.u32 + -4932, ctx.r10.u8);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// stw r9,-5008(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5008, ctx.r9.u32);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lfs f0,2144(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-4952(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4952, ctx.r11.u32);
	// stfs f0,-27256(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + -27256, temp.u32);
	// stw r10,-4940(r4)
	PPC_STORE_U32(ctx.r4.u32 + -4940, ctx.r10.u32);
	// stw r9,-4948(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4948, ctx.r9.u32);
	// stw r11,-4944(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ECDF8"))) PPC_WEAK_FUNC(sub_820ECDF8);
PPC_FUNC_IMPL(__imp__sub_820ECDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x820ecd30
	ctx.lr = 0x820ECE10;
	sub_820ECD30(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r31,-4976(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4976, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ECE2C"))) PPC_WEAK_FUNC(sub_820ECE2C);
PPC_FUNC_IMPL(__imp__sub_820ECE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ECE30"))) PPC_WEAK_FUNC(sub_820ECE30);
PPC_FUNC_IMPL(__imp__sub_820ECE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lfs f13,-27256(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ECE4C"))) PPC_WEAK_FUNC(sub_820ECE4C);
PPC_FUNC_IMPL(__imp__sub_820ECE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ECE50"))) PPC_WEAK_FUNC(sub_820ECE50);
PPC_FUNC_IMPL(__imp__sub_820ECE50) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_820ECE60"))) PPC_WEAK_FUNC(sub_820ECE60);
PPC_FUNC_IMPL(__imp__sub_820ECE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820ECE68;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,-4904(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820eced4
	if (!ctx.cr6.gt) goto loc_820ECED4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820ECE94:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820eceb8
	if (ctx.cr6.eq) goto loc_820ECEB8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218b858
	ctx.lr = 0x820ECEB0;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ecef4
	if (!ctx.cr6.eq) goto loc_820ECEF4;
loc_820ECEB8:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ece94
	if (ctx.cr6.lt) goto loc_820ECE94;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ecef4
	if (!ctx.cr6.eq) goto loc_820ECEF4;
loc_820ECED4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-4924
	ctx.r31.s64 = ctx.r11.s64 + -4924;
	// addi r5,r10,3660
	ctx.r5.s64 = ctx.r10.s64 + 3660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x8218a5f0
	ctx.lr = 0x820ECEF0;
	sub_8218A5F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820ECEF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820ECEFC"))) PPC_WEAK_FUNC(sub_820ECEFC);
PPC_FUNC_IMPL(__imp__sub_820ECEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ECF00"))) PPC_WEAK_FUNC(sub_820ECF00);
PPC_FUNC_IMPL(__imp__sub_820ECF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820ECF08;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,-4904(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820ecf6c
	if (!ctx.cr6.gt) goto loc_820ECF6C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820ECF34:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820ecf58
	if (ctx.cr6.eq) goto loc_820ECF58;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218b858
	ctx.lr = 0x820ECF50;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ecf6c
	if (!ctx.cr6.eq) goto loc_820ECF6C;
loc_820ECF58:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ecf34
	if (ctx.cr6.lt) goto loc_820ECF34;
loc_820ECF6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820ECF74"))) PPC_WEAK_FUNC(sub_820ECF74);
PPC_FUNC_IMPL(__imp__sub_820ECF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ECF78"))) PPC_WEAK_FUNC(sub_820ECF78);
PPC_FUNC_IMPL(__imp__sub_820ECF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820ECF80;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,-4904(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820ecfe0
	if (!ctx.cr6.gt) goto loc_820ECFE0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820ECFA8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820ecfcc
	if (ctx.cr6.eq) goto loc_820ECFCC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218b858
	ctx.lr = 0x820ECFC4;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ecfec
	if (!ctx.cr6.eq) goto loc_820ECFEC;
loc_820ECFCC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ecfa8
	if (ctx.cr6.lt) goto loc_820ECFA8;
loc_820ECFE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820ECFEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820ECFF8"))) PPC_WEAK_FUNC(sub_820ECFF8);
PPC_FUNC_IMPL(__imp__sub_820ECFF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820ED008"))) PPC_WEAK_FUNC(sub_820ED008);
PPC_FUNC_IMPL(__imp__sub_820ED008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820ED010;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,-4904(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820ed07c
	if (!ctx.cr6.gt) goto loc_820ED07C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820ED03C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820ed060
	if (ctx.cr6.eq) goto loc_820ED060;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218b858
	ctx.lr = 0x820ED058;
	sub_8218B858(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ed098
	if (!ctx.cr6.eq) goto loc_820ED098;
loc_820ED060:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ed03c
	if (ctx.cr6.lt) goto loc_820ED03C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ed098
	if (!ctx.cr6.eq) goto loc_820ED098;
loc_820ED07C:
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r8,r9,-4928
	ctx.r8.s64 = ctx.r9.s64 + -4928;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r11,-4928(r9)
	PPC_STORE_U16(ctx.r9.u32 + -4928, ctx.r11.u16);
	// sth r10,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r10.u16);
loc_820ED098:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820ED0A0"))) PPC_WEAK_FUNC(sub_820ED0A0);
PPC_FUNC_IMPL(__imp__sub_820ED0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-4904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x820ed0e4
	if (!ctx.cr6.gt) goto loc_820ED0E4;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_820ED0C8:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x820ed0ec
	if (!ctx.cr6.eq) goto loc_820ED0EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820ed0c8
	if (ctx.cr6.lt) goto loc_820ED0C8;
loc_820ED0E4:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_820ED0EC:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x8218b6e0
	sub_8218B6E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ED0F8"))) PPC_WEAK_FUNC(sub_820ED0F8);
PPC_FUNC_IMPL(__imp__sub_820ED0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820ED100;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,-4904(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820ed168
	if (!ctx.cr6.gt) goto loc_820ED168;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_820ED128:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820ed148
	if (ctx.cr6.eq) goto loc_820ED148;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218b5e0
	ctx.lr = 0x820ED140;
	sub_8218B5E0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
loc_820ED148:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ed128
	if (ctx.cr6.lt) goto loc_820ED128;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820ED168:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820ED178"))) PPC_WEAK_FUNC(sub_820ED178);
PPC_FUNC_IMPL(__imp__sub_820ED178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820ED180;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8218b1e8
	ctx.lr = 0x820ED19C;
	sub_8218B1E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r10,r11,19568
	ctx.r10.s64 = ctx.r11.s64 + 19568;
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8218a5f0
	ctx.lr = 0x820ED1BC;
	sub_8218A5F0(ctx, base);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x82183850
	ctx.lr = 0x820ED1C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820ed1e0
	if (ctx.cr6.eq) goto loc_820ED1E0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820ED1DC;
	sub_82183448(ctx, base);
	// b 0x820ed1e8
	goto loc_820ED1E8;
loc_820ED1E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820ED1E8;
	sub_821845A0(ctx, base);
loc_820ED1E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ed200
	if (ctx.cr6.eq) goto loc_820ED200;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x8218b518
	ctx.lr = 0x820ED1FC;
	sub_8218B518(ctx, base);
	// b 0x820ed204
	goto loc_820ED204;
loc_820ED200:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820ED204:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820ed224
	if (!ctx.cr6.gt) goto loc_820ED224;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_820ED224:
	// bl 0x82183850
	ctx.lr = 0x820ED228;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820ed240
	if (ctx.cr6.eq) goto loc_820ED240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820ED23C;
	sub_82183448(ctx, base);
	// b 0x820ed24c
	goto loc_820ED24C;
loc_820ED240:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820ED24C;
	sub_821845A0(ctx, base);
loc_820ED24C:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820ed284
	if (!ctx.cr6.gt) goto loc_820ED284;
	// li r10,0
	ctx.r10.s64 = 0;
loc_820ED268:
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820ed268
	if (ctx.cr6.lt) goto loc_820ED268;
loc_820ED284:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r31,-4904(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4904, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820ED2A4"))) PPC_WEAK_FUNC(sub_820ED2A4);
PPC_FUNC_IMPL(__imp__sub_820ED2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ED2A8"))) PPC_WEAK_FUNC(sub_820ED2A8);
PPC_FUNC_IMPL(__imp__sub_820ED2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r11,19568
	ctx.r9.s64 = ctx.r11.s64 + 19568;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-4904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4904, ctx.r30.u32);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ed2f0
	if (ctx.cr6.eq) goto loc_820ED2F0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820ED2F0;
	sub_82183E40(ctx, base);
loc_820ED2F0:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ed314
	if (ctx.cr6.eq) goto loc_820ED314;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820ED314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820ED314:
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b208
	ctx.lr = 0x820ED320;
	sub_8218B208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ED338"))) PPC_WEAK_FUNC(sub_820ED338);
PPC_FUNC_IMPL(__imp__sub_820ED338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820ED340;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,-4904(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r11,26852(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26852);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820ed378
	if (!ctx.cr6.eq) goto loc_820ED378;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820ed3cc
	if (ctx.cr6.eq) goto loc_820ED3CC;
loc_820ED378:
	// bl 0x820ed0f8
	ctx.lr = 0x820ED37C;
	sub_820ED0F8(ctx, base);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x820ed388
	if (!ctx.cr6.eq) goto loc_820ED388;
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_820ED388:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r11,19624
	ctx.r5.s64 = ctx.r11.s64 + 19624;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a5f0
	ctx.lr = 0x820ED3A8;
	sub_8218A5F0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x820ED3C0;
	sub_8218B2D0(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
loc_820ED3CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820ED3D4"))) PPC_WEAK_FUNC(sub_820ED3D4);
PPC_FUNC_IMPL(__imp__sub_820ED3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ED3D8"))) PPC_WEAK_FUNC(sub_820ED3D8);
PPC_FUNC_IMPL(__imp__sub_820ED3D8) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820ed40c
	if (!ctx.cr6.eq) goto loc_820ED40C;
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
loc_820ED40C:
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x8218b5a0
	ctx.lr = 0x820ED414;
	sub_8218B5A0(ctx, base);
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

__attribute__((alias("__imp__sub_820ED42C"))) PPC_WEAK_FUNC(sub_820ED42C);
PPC_FUNC_IMPL(__imp__sub_820ED42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ED430"))) PPC_WEAK_FUNC(sub_820ED430);
PPC_FUNC_IMPL(__imp__sub_820ED430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820ed2a8
	ctx.lr = 0x820ED450;
	sub_820ED2A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ed46c
	if (ctx.cr6.eq) goto loc_820ED46C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820ED468;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820ED46C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ED484"))) PPC_WEAK_FUNC(sub_820ED484);
PPC_FUNC_IMPL(__imp__sub_820ED484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ED488"))) PPC_WEAK_FUNC(sub_820ED488);
PPC_FUNC_IMPL(__imp__sub_820ED488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820ED490;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x820ED4A0;
	sub_8218AA18(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r9,65
	ctx.r9.s64 = 65;
	// li r8,67
	ctx.r8.s64 = 67;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,72
	ctx.r7.s64 = 72;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,-4904(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r29,76(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
loc_820ED4D4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x820ed50c
	if (!ctx.cr6.eq) goto loc_820ED50C;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x820ed510
	goto loc_820ED510;
loc_820ED50C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820ED510:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bge cr6,0x820ed550
	if (!ctx.cr6.lt) goto loc_820ED550;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8218aa58
	ctx.lr = 0x820ED524;
	sub_8218AA58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218c2c8
	ctx.lr = 0x820ED53C;
	sub_8218C2C8(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r10,r27,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3FFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x820ed4d4
	goto loc_820ED4D4;
loc_820ED550:
	// bl 0x8218a7f0
	ctx.lr = 0x820ED554;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820ED560"))) PPC_WEAK_FUNC(sub_820ED560);
PPC_FUNC_IMPL(__imp__sub_820ED560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82184800
	ctx.lr = 0x820ED580;
	sub_82184800(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x820ED590;
	sub_82184800(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x822aa648
	ctx.lr = 0x820ED59C;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4464, ctx.r11.u32);
	// stw r11,4468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4468, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ED5C0"))) PPC_WEAK_FUNC(sub_820ED5C0);
PPC_FUNC_IMPL(__imp__sub_820ED5C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// stw r11,4464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4464, ctx.r11.u32);
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// b 0x821847a8
	sub_821847A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820ED5E0"))) PPC_WEAK_FUNC(sub_820ED5E0);
PPC_FUNC_IMPL(__imp__sub_820ED5E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ED5E4"))) PPC_WEAK_FUNC(sub_820ED5E4);
PPC_FUNC_IMPL(__imp__sub_820ED5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ED5E8"))) PPC_WEAK_FUNC(sub_820ED5E8);
PPC_FUNC_IMPL(__imp__sub_820ED5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820ED5F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ed620
	if (!ctx.cr6.eq) goto loc_820ED620;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// stw r11,4464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4464, ctx.r11.u32);
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// bl 0x821847a8
	ctx.lr = 0x820ED620;
	sub_821847A8(ctx, base);
loc_820ED620:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,4096
	ctx.r10.s64 = ctx.r30.s64 + 4096;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820ED634"))) PPC_WEAK_FUNC(sub_820ED634);
PPC_FUNC_IMPL(__imp__sub_820ED634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ED638"))) PPC_WEAK_FUNC(sub_820ED638);
PPC_FUNC_IMPL(__imp__sub_820ED638) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ED644"))) PPC_WEAK_FUNC(sub_820ED644);
PPC_FUNC_IMPL(__imp__sub_820ED644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ED648"))) PPC_WEAK_FUNC(sub_820ED648);
PPC_FUNC_IMPL(__imp__sub_820ED648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820ED650;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4468);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ed680
	if (!ctx.cr6.eq) goto loc_820ED680;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r11,4468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4468, ctx.r11.u32);
	// addi r3,r3,4208
	ctx.r3.s64 = ctx.r3.s64 + 4208;
	// bl 0x821847a8
	ctx.lr = 0x820ED680;
	sub_821847A8(ctx, base);
loc_820ED680:
	// addi r11,r29,14
	ctx.r11.s64 = ctx.r29.s64 + 14;
	// addi r10,r30,256
	ctx.r10.s64 = ctx.r30.s64 + 256;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820ED698"))) PPC_WEAK_FUNC(sub_820ED698);
PPC_FUNC_IMPL(__imp__sub_820ED698) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,14
	ctx.r11.s64 = ctx.r5.s64 + 14;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ED6AC"))) PPC_WEAK_FUNC(sub_820ED6AC);
PPC_FUNC_IMPL(__imp__sub_820ED6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ED6B0"))) PPC_WEAK_FUNC(sub_820ED6B0);
PPC_FUNC_IMPL(__imp__sub_820ED6B0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820ED6B8;
	sub_82248788(ctx, base);
	// rlwimi r5,r4,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwimi r6,r5,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
loc_820ED6C8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ed73c
	if (ctx.cr6.eq) goto loc_820ED73C;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzux r31,r3,r11
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x820ed73c
	if (ctx.cr6.gt) goto loc_820ED73C;
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820ed73c
	if (ctx.cr6.lt) goto loc_820ED73C;
loc_820ED708:
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x820ed754
	if (ctx.cr6.eq) goto loc_820ED754;
	// ble cr6,0x820ed730
	if (!ctx.cr6.gt) goto loc_820ED730;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// b 0x820ed734
	goto loc_820ED734;
loc_820ED730:
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
loc_820ED734:
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x820ed708
	if (!ctx.cr6.gt) goto loc_820ED708;
loc_820ED73C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 14, ctx.xer);
	// blt cr6,0x820ed6c8
	if (ctx.cr6.lt) goto loc_820ED6C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820ED750:
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820ED754:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820ed750
	if (ctx.cr6.eq) goto loc_820ED750;
	// lhz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// sth r10,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r10.u16);
	// rlwinm r6,r31,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r8,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r8.u32);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// sth r5,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r5.u16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r8.u32);
	// sth r31,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r31.u16);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r8,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r8.u32);
	// lbz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lhzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// sth r4,6(r7)
	PPC_STORE_U16(ctx.r7.u32 + 6, ctx.r4.u16);
	// lbz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// rotlwi r11,r8,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820ED7D4"))) PPC_WEAK_FUNC(sub_820ED7D4);
PPC_FUNC_IMPL(__imp__sub_820ED7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ED7D8"))) PPC_WEAK_FUNC(sub_820ED7D8);
PPC_FUNC_IMPL(__imp__sub_820ED7D8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820ED7E0;
	sub_82248788(ctx, base);
	// rlwimi r5,r4,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwimi r6,r5,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
loc_820ED7F4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ed860
	if (ctx.cr6.eq) goto loc_820ED860;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x820ed860
	if (ctx.cr6.gt) goto loc_820ED860;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820ed860
	if (ctx.cr6.lt) goto loc_820ED860;
loc_820ED82C:
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x820ed878
	if (ctx.cr6.eq) goto loc_820ED878;
	// ble cr6,0x820ed854
	if (!ctx.cr6.gt) goto loc_820ED854;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// b 0x820ed858
	goto loc_820ED858;
loc_820ED854:
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
loc_820ED858:
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x820ed82c
	if (!ctx.cr6.gt) goto loc_820ED82C;
loc_820ED860:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 14, ctx.xer);
	// blt cr6,0x820ed7f4
	if (ctx.cr6.lt) goto loc_820ED7F4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820ED874:
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820ED878:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820ed874
	if (ctx.cr6.eq) goto loc_820ED874;
	// rlwinm r9,r31,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r5,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r5.u32);
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// sth r30,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r30.u16);
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r30.u32);
	// stw r9,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r9.u32);
	// stw r30,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r30.u32);
	// sth r31,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r31.u16);
	// sth r10,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r10.u16);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r30,6(r7)
	PPC_STORE_U16(ctx.r7.u32 + 6, ctx.r30.u16);
	// stw r5,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r5.u32);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820ED8BC"))) PPC_WEAK_FUNC(sub_820ED8BC);
PPC_FUNC_IMPL(__imp__sub_820ED8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ED8C0"))) PPC_WEAK_FUNC(sub_820ED8C0);
PPC_FUNC_IMPL(__imp__sub_820ED8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x820ed6b0
	ctx.lr = 0x820ED8D4;
	sub_820ED6B0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ED8EC"))) PPC_WEAK_FUNC(sub_820ED8EC);
PPC_FUNC_IMPL(__imp__sub_820ED8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ED8F0"))) PPC_WEAK_FUNC(sub_820ED8F0);
PPC_FUNC_IMPL(__imp__sub_820ED8F0) {
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
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x820ed6b0
	ctx.lr = 0x820ED90C;
	sub_820ED6B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ed928
	if (!ctx.cr6.eq) goto loc_820ED928;
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
loc_820ED928:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// subfc r9,r10,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// eqv r8,r10,r31
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
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

__attribute__((alias("__imp__sub_820ED958"))) PPC_WEAK_FUNC(sub_820ED958);
PPC_FUNC_IMPL(__imp__sub_820ED958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-4900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ed9a0
	if (ctx.cr6.eq) goto loc_820ED9A0;
	// lwz r11,736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ed9a0
	if (ctx.cr6.eq) goto loc_820ED9A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820ED994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4900);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 736, ctx.r9.u32);
loc_820ED9A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820ED9B4"))) PPC_WEAK_FUNC(sub_820ED9B4);
PPC_FUNC_IMPL(__imp__sub_820ED9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ED9B8"))) PPC_WEAK_FUNC(sub_820ED9B8);
PPC_FUNC_IMPL(__imp__sub_820ED9B8) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821922e0
	ctx.lr = 0x820ED9DC;
	sub_821922E0(ctx, base);
	// ld r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ld r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// std r10,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r10.u64);
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EDA0C"))) PPC_WEAK_FUNC(sub_820EDA0C);
PPC_FUNC_IMPL(__imp__sub_820EDA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EDA10"))) PPC_WEAK_FUNC(sub_820EDA10);
PPC_FUNC_IMPL(__imp__sub_820EDA10) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EDA20"))) PPC_WEAK_FUNC(sub_820EDA20);
PPC_FUNC_IMPL(__imp__sub_820EDA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,19636
	ctx.r10.s64 = ctx.r11.s64 + 19636;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821857f0
	ctx.lr = 0x820EDA4C;
	sub_821857F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820eda68
	if (ctx.cr6.eq) goto loc_820EDA68;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820EDA64;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820EDA68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EDA80"))) PPC_WEAK_FUNC(sub_820EDA80);
PPC_FUNC_IMPL(__imp__sub_820EDA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820EDA88;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,700(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r3,700
	ctx.r30.s64 = ctx.r3.s64 + 700;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820edacc
	if (!ctx.cr6.lt) goto loc_820EDACC;
loc_820EDAB4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x820edad8
	if (ctx.cr6.eq) goto loc_820EDAD8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820edab4
	if (ctx.cr6.lt) goto loc_820EDAB4;
loc_820EDACC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820EDAD8:
	// lwz r3,712(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 712);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x820edb04
	if (!ctx.cr6.eq) goto loc_820EDB04;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,712(r28)
	PPC_STORE_U32(ctx.r28.u32 + 712, ctx.r11.u32);
	// beq cr6,0x820edb04
	if (ctx.cr6.eq) goto loc_820EDB04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EDB04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EDB04:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820edb24
	if (ctx.cr6.eq) goto loc_820EDB24;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EDB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EDB24:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// subf. r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x820edb50
	if (!ctx.cr0.gt) goto loc_820EDB50;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// bl 0x822497e0
	ctx.lr = 0x820EDB50;
	sub_822497E0(ctx, base);
loc_820EDB50:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820EDB70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820EDB7C"))) PPC_WEAK_FUNC(sub_820EDB7C);
PPC_FUNC_IMPL(__imp__sub_820EDB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EDB80"))) PPC_WEAK_FUNC(sub_820EDB80);
PPC_FUNC_IMPL(__imp__sub_820EDB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820EDB88;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,772(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 772);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// beq cr6,0x820edbb8
	if (ctx.cr6.eq) goto loc_820EDBB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EDBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EDBB8:
	// stw r30,772(r28)
	PPC_STORE_U32(ctx.r28.u32 + 772, ctx.r30.u32);
	// addi r29,r28,700
	ctx.r29.s64 = ctx.r28.s64 + 700;
	// stw r30,780(r28)
	PPC_STORE_U32(ctx.r28.u32 + 780, ctx.r30.u32);
	// stw r30,776(r28)
	PPC_STORE_U32(ctx.r28.u32 + 776, ctx.r30.u32);
	// stw r30,712(r28)
	PPC_STORE_U32(ctx.r28.u32 + 712, ctx.r30.u32);
	// lwz r10,700(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 700);
	// lwz r11,704(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 704);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820edc28
	if (!ctx.cr6.lt) goto loc_820EDC28;
loc_820EDBE8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820edc08
	if (ctx.cr6.eq) goto loc_820EDC08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EDC08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EDC08:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820edbe8
	if (ctx.cr6.lt) goto loc_820EDBE8;
loc_820EDC28:
	// stw r30,704(r28)
	PPC_STORE_U32(ctx.r28.u32 + 704, ctx.r30.u32);
	// addi r29,r28,688
	ctx.r29.s64 = ctx.r28.s64 + 688;
	// lwz r11,692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 692);
	// lwz r10,688(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 688);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820edc8c
	if (!ctx.cr6.lt) goto loc_820EDC8C;
loc_820EDC4C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820edc6c
	if (ctx.cr6.eq) goto loc_820EDC6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EDC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EDC6C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820edc4c
	if (ctx.cr6.lt) goto loc_820EDC4C;
loc_820EDC8C:
	// stw r30,692(r28)
	PPC_STORE_U32(ctx.r28.u32 + 692, ctx.r30.u32);
	// addi r29,r28,716
	ctx.r29.s64 = ctx.r28.s64 + 716;
	// lwz r31,716(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 716);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// lwz r11,720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 720);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820edce4
	if (!ctx.cr6.lt) goto loc_820EDCE4;
loc_820EDCB0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820edcc4
	if (ctx.cr6.eq) goto loc_820EDCC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820EDCC4;
	sub_82183E40(ctx, base);
loc_820EDCC4:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820edcb0
	if (ctx.cr6.lt) goto loc_820EDCB0;
loc_820EDCE4:
	// stw r30,720(r28)
	PPC_STORE_U32(ctx.r28.u32 + 720, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EDCFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820edd40
	if (ctx.cr6.eq) goto loc_820EDD40;
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r27,r11,-16
	ctx.r27.s64 = ctx.r11.s64 + -16;
	// mulli r10,r9,208
	ctx.r10.s64 = ctx.r9.s64 * 208;
	// addic. r31,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x820edd34
	if (ctx.cr0.lt) goto loc_820EDD34;
loc_820EDD20:
	// addi r29,r29,-208
	ctx.r29.s64 = ctx.r29.s64 + -208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8209eda0
	ctx.lr = 0x820EDD2C;
	sub_8209EDA0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x820edd20
	if (!ctx.cr0.lt) goto loc_820EDD20;
loc_820EDD34:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x820EDD40;
	sub_82183E40(ctx, base);
loc_820EDD40:
	// lwz r3,732(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 732);
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820edd64
	if (ctx.cr6.eq) goto loc_820EDD64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EDD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EDD64:
	// stw r30,732(r28)
	PPC_STORE_U32(ctx.r28.u32 + 732, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820EDD70"))) PPC_WEAK_FUNC(sub_820EDD70);
PPC_FUNC_IMPL(__imp__sub_820EDD70) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,704(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
loc_820EDD98:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,232(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820eddc8
	if (!ctx.cr6.eq) goto loc_820EDDC8;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x820eddc8
	if (!ctx.cr6.gt) goto loc_820EDDC8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_820EDDC8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820edd98
	if (ctx.cr6.lt) goto loc_820EDD98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EDDD8"))) PPC_WEAK_FUNC(sub_820EDDD8);
PPC_FUNC_IMPL(__imp__sub_820EDDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820EDDE0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820edeb8
	if (!ctx.cr6.eq) goto loc_820EDEB8;
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// lwz r9,700(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,712(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x820ede4c
	if (!ctx.cr6.lt) goto loc_820EDE4C;
loc_820EDE1C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x820ede40
	if (!ctx.cr6.gt) goto loc_820EDE40;
	// lwz r6,228(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820ede40
	if (ctx.cr6.eq) goto loc_820EDE40;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_820EDE40:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x820ede1c
	if (ctx.cr6.lt) goto loc_820EDE1C;
loc_820EDE4C:
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820edeb8
	if (ctx.cr6.eq) goto loc_820EDEB8;
	// stw r31,712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 712, ctx.r31.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ede74
	if (ctx.cr6.eq) goto loc_820EDE74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EDE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EDE74:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ede94
	if (ctx.cr6.eq) goto loc_820EDE94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EDE90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
loc_820EDE94:
	// lwz r3,712(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820edeb8
	if (ctx.cr6.eq) goto loc_820EDEB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EDEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,712(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// stw r29,224(r9)
	PPC_STORE_U32(ctx.r9.u32 + 224, ctx.r29.u32);
loc_820EDEB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820EDEC0"))) PPC_WEAK_FUNC(sub_820EDEC0);
PPC_FUNC_IMPL(__imp__sub_820EDEC0) {
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
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820edef4
	if (ctx.cr6.lt) goto loc_820EDEF4;
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
loc_820EDEF4:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r6,22272
	ctx.r6.s64 = ctx.r6.s64 + 22272;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stdx r3,r8,r4
	PPC_STORE_U64(ctx.r8.u32 + ctx.r4.u32, ctx.r3.u64);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// bl 0x8224a2a0
	ctx.lr = 0x820EDF34;
	sub_8224A2A0(ctx, base);
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

__attribute__((alias("__imp__sub_820EDF48"))) PPC_WEAK_FUNC(sub_820EDF48);
PPC_FUNC_IMPL(__imp__sub_820EDF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-10280
	ctx.r9.s64 = ctx.r11.s64 + -10280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820edf80
	if (ctx.cr6.eq) goto loc_820EDF80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820EDF7C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820EDF80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EDF94"))) PPC_WEAK_FUNC(sub_820EDF94);
PPC_FUNC_IMPL(__imp__sub_820EDF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EDF98"))) PPC_WEAK_FUNC(sub_820EDF98);
PPC_FUNC_IMPL(__imp__sub_820EDF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820EDFA0;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f0,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3316);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// bl 0x82249e70
	ctx.lr = 0x820EDFCC;
	sub_82249E70(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f0,8060(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x821922e0
	ctx.lr = 0x820EE00C;
	sub_821922E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82192138
	ctx.lr = 0x820EE020;
	sub_82192138(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82191f88
	ctx.lr = 0x820EE02C;
	sub_82191F88(ctx, base);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// ld r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + 48);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lfs f10,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f8,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// std r3,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r3.u64);
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// ld r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 56);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fsubs f13,f6,f8
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fsubs f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fadds f8,f4,f11
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r7,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r7.u64);
	// std r8,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r8.u64);
	// lfs f6,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,64(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f31,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f3,64(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820EE0E0"))) PPC_WEAK_FUNC(sub_820EE0E0);
PPC_FUNC_IMPL(__imp__sub_820EE0E0) {
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
	// bl 0x82183850
	ctx.lr = 0x820EE0F0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820ee108
	if (ctx.cr6.eq) goto loc_820EE108;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82183448
	ctx.lr = 0x820EE104;
	sub_82183448(ctx, base);
	// b 0x820ee110
	goto loc_820EE110;
loc_820EE108:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x820EE110;
	sub_821845A0(ctx, base);
loc_820EE110:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ee17c
	if (ctx.cr6.eq) goto loc_820EE17C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r9,r10,19644
	ctx.r9.s64 = ctx.r10.s64 + 19644;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820EE17C:
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

__attribute__((alias("__imp__sub_820EE190"))) PPC_WEAK_FUNC(sub_820EE190);
PPC_FUNC_IMPL(__imp__sub_820EE190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820edb80
	ctx.lr = 0x820EE1B0;
	sub_820EDB80(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82103ff0
	ctx.lr = 0x820EE1BC;
	sub_82103FF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EE1D4"))) PPC_WEAK_FUNC(sub_820EE1D4);
PPC_FUNC_IMPL(__imp__sub_820EE1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EE1D8"))) PPC_WEAK_FUNC(sub_820EE1D8);
PPC_FUNC_IMPL(__imp__sub_820EE1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820EE1E0;
	sub_82248774(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820ee244
	if (!ctx.cr6.gt) goto loc_820EE244;
	// lwz r7,700(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r8,r28,r7
	ctx.r8.u64 = ctx.r28.u64 + ctx.r7.u64;
loc_820EE218:
	// lwz r31,4(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwx r28,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r28.u32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r31,232(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// stwx r31,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x820ee218
	if (ctx.cr6.lt) goto loc_820EE218;
loc_820EE244:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r7,r11,22272
	ctx.r7.s64 = ctx.r11.s64 + 22272;
	// lwz r4,700(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 700);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,704(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 704);
	// addi r27,r25,700
	ctx.r27.s64 = ctx.r25.s64 + 700;
	// bl 0x82249d68
	ctx.lr = 0x820EE26C;
	sub_82249D68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ee43c
	if (ctx.cr6.eq) goto loc_820EE43C;
	// lwz r3,712(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 712);
	// stw r28,712(r25)
	PPC_STORE_U32(ctx.r25.u32 + 712, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ee298
	if (ctx.cr6.eq) goto loc_820EE298;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EE298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EE298:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82103e78
	ctx.lr = 0x820EE2A4;
	sub_82103E78(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,232(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 232);
	// bge cr6,0x820ee428
	if (!ctx.cr6.lt) goto loc_820EE428;
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
loc_820EE2D4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 232);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x820ee2ec
	if (!ctx.cr6.eq) goto loc_820EE2EC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_820EE2EC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x820ee2d4
	if (ctx.cr6.lt) goto loc_820EE2D4;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x820ee428
	if (!ctx.cr6.gt) goto loc_820EE428;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x820ee3d0
	if (!ctx.cr6.gt) goto loc_820EE3D0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_820EE310:
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x820ee380
	if (!ctx.cr6.lt) goto loc_820EE380;
loc_820EE328:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,232(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	// srawi r24,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 16;
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// cmpw cr6,r24,r31
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x820ee374
	if (!ctx.cr6.eq) goto loc_820EE374;
	// subf r24,r6,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// srawi r24,r24,3
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 3;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r24,r23
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r23.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x820ee374
	if (!ctx.cr6.eq) goto loc_820EE374;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x820ee374
	if (!ctx.cr6.gt) goto loc_820EE374;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_820EE374:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x820ee328
	if (ctx.cr6.lt) goto loc_820EE328;
loc_820EE380:
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x820ee3a0
	if (!ctx.cr6.eq) goto loc_820EE3A0;
	// subf r11,r6,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r29.u32);
	// b 0x820ee3c0
	goto loc_820EE3C0;
loc_820EE3A0:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820ee3c8
	if (ctx.cr6.eq) goto loc_820EE3C8;
	// subf r11,r6,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r5.u32);
loc_820EE3C0:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stwx r3,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r3.u32);
loc_820EE3C8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt 0x820ee310
	if (ctx.cr0.gt) goto loc_820EE310;
loc_820EE3D0:
	// lwz r11,704(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 704);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820ee428
	if (!ctx.cr6.gt) goto loc_820EE428;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
loc_820EE3E8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r7,232(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 232);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x820ee410
	if (!ctx.cr6.eq) goto loc_820EE410;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r7,r31,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r7,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r7.u32);
loc_820EE410:
	// lwz r11,704(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 704);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ee3e8
	if (ctx.cr6.lt) goto loc_820EE3E8;
loc_820EE428:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EE43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EE43C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820EE444"))) PPC_WEAK_FUNC(sub_820EE444);
PPC_FUNC_IMPL(__imp__sub_820EE444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EE448"))) PPC_WEAK_FUNC(sub_820EE448);
PPC_FUNC_IMPL(__imp__sub_820EE448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820EE450;
	sub_82248778(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249920
	ctx.lr = 0x820EE458;
	sub_82249920(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820ee9ac
	if (!ctx.cr6.lt) goto loc_820EE9AC;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r6,744(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	// mulli r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 * 208;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,8608(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8608);
	ctx.f27.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmuls f26,f0,f27
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// ld r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r3,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// ld r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r8,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// ld r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r7,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// ld r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r6,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r6.u64);
	// ld r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r5,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r5.u64);
	// beq cr6,0x820ee920
	if (ctx.cr6.eq) goto loc_820EE920;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r10,r9,208
	ctx.r10.s64 = ctx.r9.s64 * 208;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8210eea0
	ctx.lr = 0x820EE500;
	sub_8210EEA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ee85c
	if (ctx.cr6.eq) goto loc_820EE85C;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 * 208;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210eef8
	ctx.lr = 0x820EE520;
	sub_8210EEF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x8210eea8
	ctx.lr = 0x820EE530;
	sub_8210EEA8(ctx, base);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// ld r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// ld r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// ld r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// bl 0x82096f18
	ctx.lr = 0x820EE594;
	sub_82096F18(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82096f18
	ctx.lr = 0x820EE5A0;
	sub_82096F18(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// addi r29,r1,368
	ctx.r29.s64 = ctx.r1.s64 + 368;
	// ld r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// ld r24,0(r5)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lfs f31,2148(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// std r3,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// lfs f30,2144(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// std r10,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r10.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// std r27,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r27.u64);
	// stfs f30,216(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// std r24,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r24.u64);
	// lfs f0,2140(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// std r5,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r5.u64);
	// stfs f31,368(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f31,372(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fmuls f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f31,376(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// bl 0x82249e70
	ctx.lr = 0x820EE63C;
	sub_82249E70(ctx, base);
	// lfs f0,308(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// frsp f28,f1
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f11,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f13,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// lfs f9,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f4,f10,f31
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fsubs f1,f10,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// stfs f1,200(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmsubs f2,f6,f31,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 - ctx.f4.f64));
	// stfs f2,196(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fsubs f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// stfs f3,192(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// bl 0x820a42e0
	ctx.lr = 0x820EE6C0;
	sub_820A42E0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82187400
	ctx.lr = 0x820EE6D0;
	sub_82187400(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fneg f8,f0
	ctx.f8.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fneg f7,f13
	ctx.f7.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// fneg f5,f11
	ctx.f5.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f9,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f3,f13,f10,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f2,f7,f10,f4
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f1,f9,f11,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f0,f5,f9,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fsubs f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x820ee750
	if (!ctx.cr6.lt) goto loc_820EE750;
	// bl 0x8210eed0
	ctx.lr = 0x820EE724;
	sub_8210EED0(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x820ee780
	goto loc_820EE780;
loc_820EE750:
	// bl 0x8210eed0
	ctx.lr = 0x820EE754;
	sub_8210EED0(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f28
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_820EE780:
	// li r7,3
	ctx.r7.s64 = 3;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82186cd8
	ctx.lr = 0x820EE798;
	sub_82186CD8(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// bl 0x821922e0
	ctx.lr = 0x820EE80C;
	sub_821922E0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821922e0
	ctx.lr = 0x820EE818;
	sub_821922E0(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82192138
	ctx.lr = 0x820EE82C;
	sub_82192138(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82191f88
	ctx.lr = 0x820EE838;
	sub_82191F88(ctx, base);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// bl 0x82096f18
	ctx.lr = 0x820EE85C;
	sub_82096F18(ctx, base);
loc_820EE85C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 * 208;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820ee8c0
	if (ctx.cr6.eq) goto loc_820EE8C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,7948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r3,-7488(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7488);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x820ee8cc
	goto loc_820EE8CC;
loc_820EE8C0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,-7488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
loc_820EE8CC:
	// bl 0x821ad740
	ctx.lr = 0x820EE8D0;
	sub_821AD740(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 * 208;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8210eea0
	ctx.lr = 0x820EE8E4;
	sub_8210EEA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ee920
	if (ctx.cr6.eq) goto loc_820EE920;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 * 208;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f27
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// bl 0x8210eec8
	ctx.lr = 0x820EE90C;
	sub_8210EEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8210eed8
	ctx.lr = 0x820EE918;
	sub_8210EED8(ctx, base);
	// fmsubs f13,f30,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f27.f64 - ctx.f31.f64));
	// fmadds f26,f1,f13,f31
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f31.f64));
loc_820EE920:
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a9678
	ctx.lr = 0x820EE930;
	sub_821A9678(ctx, base);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r11,r31,272
	ctx.r11.s64 = ctx.r31.s64 + 272;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r4,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r4.u64);
	// std r5,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r5.u64);
	// ld r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r6,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r6.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r11.u64);
	// std r8,304(r31)
	PPC_STORE_U64(ctx.r31.u32 + 304, ctx.r8.u64);
	// std r9,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r9.u64);
	// std r7,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r7.u64);
	// std r6,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r6.u64);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,44(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820EE99C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-19048(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19048);
	// bl 0x821a3870
	ctx.lr = 0x820EE9AC;
	sub_821A3870(ctx, base);
loc_820EE9AC:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8224996c
	ctx.lr = 0x820EE9B8;
	sub_8224996C(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820EE9BC"))) PPC_WEAK_FUNC(sub_820EE9BC);
PPC_FUNC_IMPL(__imp__sub_820EE9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EE9C0"))) PPC_WEAK_FUNC(sub_820EE9C0);
PPC_FUNC_IMPL(__imp__sub_820EE9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820EE9C8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stw r11,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x820edd70
	ctx.lr = 0x820EE9F0;
	sub_820EDD70(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x820eea18
	if (ctx.cr6.lt) goto loc_820EEA18;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_820EEA18:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// rlwimi r11,r29,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// addi r3,r31,700
	ctx.r3.s64 = ctx.r31.s64 + 700;
	// stw r11,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r11.u32);
	// bl 0x820edec0
	ctx.lr = 0x820EEA34;
	sub_820EDEC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820EEA3C"))) PPC_WEAK_FUNC(sub_820EEA3C);
PPC_FUNC_IMPL(__imp__sub_820EEA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EEA40"))) PPC_WEAK_FUNC(sub_820EEA40);
PPC_FUNC_IMPL(__imp__sub_820EEA40) {
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
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r3,r3,716
	ctx.r3.s64 = ctx.r3.s64 + 716;
	// bl 0x820edec0
	ctx.lr = 0x820EEA64;
	sub_820EDEC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EEA74"))) PPC_WEAK_FUNC(sub_820EEA74);
PPC_FUNC_IMPL(__imp__sub_820EEA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EEA78"))) PPC_WEAK_FUNC(sub_820EEA78);
PPC_FUNC_IMPL(__imp__sub_820EEA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820eeb10
	if (!ctx.cr6.eq) goto loc_820EEB10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,764(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x820eead4
	if (ctx.cr6.eq) goto loc_820EEAD4;
	// bl 0x820ae3c8
	ctx.lr = 0x820EEAC0;
	sub_820AE3C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eeaf8
	if (ctx.cr6.eq) goto loc_820EEAF8;
	// lfs f31,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// b 0x820eeaf8
	goto loc_820EEAF8;
loc_820EEAD4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820eeaf8
	if (ctx.cr6.eq) goto loc_820EEAF8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820eeaf8
	if (!ctx.cr6.lt) goto loc_820EEAF8;
	// lfs f31,792(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,824(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	ctx.f30.f64 = double(temp.f32);
loc_820EEAF8:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249c38
	ctx.lr = 0x820EEB04;
	sub_82249C38(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82192fd0
	ctx.lr = 0x820EEB0C;
	sub_82192FD0(ctx, base);
	// stfs f1,760(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 760, temp.u32);
loc_820EEB10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EEB2C"))) PPC_WEAK_FUNC(sub_820EEB2C);
PPC_FUNC_IMPL(__imp__sub_820EEB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EEB30"))) PPC_WEAK_FUNC(sub_820EEB30);
PPC_FUNC_IMPL(__imp__sub_820EEB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820EEB38;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x820EEB50;
	sub_82185740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,19660
	ctx.r10.s64 = ctx.r11.s64 + 19660;
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
	// bl 0x821a9990
	ctx.lr = 0x820EEB78;
	sub_821A9990(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// stw r30,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r30.u32);
	// stw r30,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r30.u32);
	// lfs f31,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// stw r30,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r30.u32);
	// stfs f31,760(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 760, temp.u32);
	// stw r30,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r30.u32);
	// stw r30,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r30.u32);
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
	// stw r30,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r30.u32);
	// stw r8,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r8.u32);
	// stw r30,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r30.u32);
	// stw r7,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r7.u32);
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// stw r30,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// stw r30,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r30.u32);
	// stw r30,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// lwsync 
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// stw r31,-4900(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4900, ctx.r31.u32);
	// bl 0x82183850
	ctx.lr = 0x820EEBF0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820eec08
	if (ctx.cr6.eq) goto loc_820EEC08;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x820EEC04;
	sub_82183448(ctx, base);
	// b 0x820eec10
	goto loc_820EEC10;
loc_820EEC08:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820EEC10;
	sub_821845A0(ctx, base);
loc_820EEC10:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eec3c
	if (ctx.cr6.eq) goto loc_820EEC3C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x82185740
	ctx.lr = 0x820EEC28;
	sub_82185740(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r10,19636
	ctx.r9.s64 = ctx.r10.s64 + 19636;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x820eec40
	goto loc_820EEC40;
loc_820EEC3C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820EEC40:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// lfs f0,19656(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19656);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x820EEC58;
	sub_820804F8(ctx, base);
	// stfs f31,752(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 752, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820EEC70"))) PPC_WEAK_FUNC(sub_820EEC70);
PPC_FUNC_IMPL(__imp__sub_820EEC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,740(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,19660
	ctx.r10.s64 = ctx.r11.s64 + 19660;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820eecb4
	if (ctx.cr6.eq) goto loc_820EECB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EECB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EECB4:
	// lwz r3,772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eecdc
	if (ctx.cr6.eq) goto loc_820EECDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EECDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EECDC:
	// stw r30,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820edb80
	ctx.lr = 0x820EECE8;
	sub_820EDB80(ctx, base);
	// lwsync 
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-4900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4900, ctx.r30.u32);
	// lwz r3,716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eed0c
	if (ctx.cr6.eq) goto loc_820EED0C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820EED0C;
	sub_82183E40(ctx, base);
loc_820EED0C:
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// stw r30,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r30.u32);
	// lwz r3,700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eed28
	if (ctx.cr6.eq) goto loc_820EED28;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820EED28;
	sub_82183E40(ctx, base);
loc_820EED28:
	// stw r30,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
	// stw r30,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r30.u32);
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eed44
	if (ctx.cr6.eq) goto loc_820EED44;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820EED44;
	sub_82183E40(ctx, base);
loc_820EED44:
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// bl 0x821a9520
	ctx.lr = 0x820EED54;
	sub_821A9520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x820EED5C;
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

__attribute__((alias("__imp__sub_820EED74"))) PPC_WEAK_FUNC(sub_820EED74);
PPC_FUNC_IMPL(__imp__sub_820EED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EED78"))) PPC_WEAK_FUNC(sub_820EED78);
PPC_FUNC_IMPL(__imp__sub_820EED78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820EED80;
	sub_82248784(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,704(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,700(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// addi r28,r3,700
	ctx.r28.s64 = ctx.r3.s64 + 700;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820eedec
	if (!ctx.cr6.lt) goto loc_820EEDEC;
loc_820EEDA8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eedd0
	if (ctx.cr6.eq) goto loc_820EEDD0;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820eedd0
	if (ctx.cr6.eq) goto loc_820EEDD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EEDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EEDD0:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820eeda8
	if (ctx.cr6.lt) goto loc_820EEDA8;
loc_820EEDEC:
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820eee1c
	if (!ctx.cr6.eq) goto loc_820EEE1C;
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820eee1c
	if (ctx.cr6.eq) goto loc_820EEE1C;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 * 208;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820ac390
	ctx.lr = 0x820EEE1C;
	sub_820AC390(ctx, base);
loc_820EEE1C:
	// lwz r3,732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820eee6c
	if (ctx.cr6.eq) goto loc_820EEE6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EEE38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// lwz r9,224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r7.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820eee6c
	if (ctx.cr6.eq) goto loc_820EEE6C;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 * 208;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820ac390
	ctx.lr = 0x820EEE6C;
	sub_820AC390(ctx, base);
loc_820EEE6C:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ef074
	if (ctx.cr6.eq) goto loc_820EF074;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820ef074
	if (!ctx.cr6.lt) goto loc_820EF074;
	// lwz r3,772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ef010
	if (ctx.cr6.eq) goto loc_820EF010;
	// lwz r10,776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820ef010
	if (!ctx.cr6.gt) goto loc_820EF010;
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// lwz r8,780(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// fdivs f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// ld r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// ld r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r6,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
	// ld r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// lfs f8,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820EEF50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// lwz r7,776(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820eef94
	if (ctx.cr6.lt) goto loc_820EEF94;
	// lwz r3,772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eef88
	if (ctx.cr6.eq) goto loc_820EEF88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EEF88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EEF88:
	// stw r27,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r27.u32);
	// stw r27,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r27.u32);
	// stw r27,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r27.u32);
loc_820EEF94:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r9,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r9.u64);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r8,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r8.u64);
	// ld r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r7,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r7.u64);
	// ld r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r6,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r6.u64);
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r5,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r5.u64);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r4,208
	ctx.r11.s64 = ctx.r4.s64 * 208;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
loc_820EF010:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r31,784
	ctx.r10.s64 = ctx.r31.s64 + 784;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,784(r31)
	PPC_STORE_U64(ctx.r31.u32 + 784, ctx.r8.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,792(r31)
	PPC_STORE_U64(ctx.r31.u32 + 792, ctx.r7.u64);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r6,800(r31)
	PPC_STORE_U64(ctx.r31.u32 + 800, ctx.r6.u64);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r5,808(r31)
	PPC_STORE_U64(ctx.r31.u32 + 808, ctx.r5.u64);
	// ld r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r4,816(r31)
	PPC_STORE_U64(ctx.r31.u32 + 816, ctx.r4.u64);
	// ld r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r3,824(r31)
	PPC_STORE_U64(ctx.r31.u32 + 824, ctx.r3.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,832(r31)
	PPC_STORE_U64(ctx.r31.u32 + 832, ctx.r10.u64);
	// ld r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r9,840(r31)
	PPC_STORE_U64(ctx.r31.u32 + 840, ctx.r9.u64);
loc_820EF074:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ee448
	ctx.lr = 0x820EF07C;
	sub_820EE448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820eea78
	ctx.lr = 0x820EF084;
	sub_820EEA78(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820ef128
	if (!ctx.cr6.lt) goto loc_820EF128;
loc_820EF0A0:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ef10c
	if (ctx.cr6.eq) goto loc_820EF10C;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ef10c
	if (ctx.cr6.eq) goto loc_820EF10C;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ef10c
	if (ctx.cr6.eq) goto loc_820EF10C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82103e78
	ctx.lr = 0x820EF0D0;
	sub_82103E78(ctx, base);
	// lwz r3,712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820ef0f8
	if (!ctx.cr6.eq) goto loc_820EF0F8;
	// stw r27,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ef0f8
	if (ctx.cr6.eq) goto loc_820EF0F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EF0F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EF0F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EF10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EF10C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820ef0a0
	if (ctx.cr6.lt) goto loc_820EF0A0;
loc_820EF128:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820EF130"))) PPC_WEAK_FUNC(sub_820EF130);
PPC_FUNC_IMPL(__imp__sub_820EF130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820EF138;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820edb80
	ctx.lr = 0x820EF148;
	sub_820EDB80(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,315
	ctx.r11.s64 = 20643840;
	// ori r10,r11,5041
	ctx.r10.u64 = ctx.r11.u64 | 5041;
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820ef178
	if (ctx.cr6.gt) goto loc_820EF178;
	// mulli r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 * 208;
	// li r10,-17
	ctx.r10.s64 = -17;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820ef17c
	if (!ctx.cr6.gt) goto loc_820EF17C;
loc_820EF178:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_820EF17C:
	// bl 0x82183850
	ctx.lr = 0x820EF180;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820ef198
	if (ctx.cr6.eq) goto loc_820EF198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820EF194;
	sub_82183448(ctx, base);
	// b 0x820ef1a4
	goto loc_820EF1A4;
loc_820EF198:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820EF1A4;
	sub_821845A0(ctx, base);
loc_820EF1A4:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ef1dc
	if (ctx.cr6.eq) goto loc_820EF1DC;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r31,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r31.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// blt 0x820ef1e0
	if (ctx.cr0.lt) goto loc_820EF1E0;
loc_820EF1C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210efb0
	ctx.lr = 0x820EF1CC;
	sub_8210EFB0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,208
	ctx.r30.s64 = ctx.r30.s64 + 208;
	// bge 0x820ef1c4
	if (!ctx.cr0.lt) goto loc_820EF1C4;
	// b 0x820ef1e0
	goto loc_820EF1E0;
loc_820EF1DC:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_820EF1E0:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// lwz r3,688(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ef1f8
	if (ctx.cr6.eq) goto loc_820EF1F8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820EF1F8;
	sub_82183E40(ctx, base);
loc_820EF1F8:
	// li r31,16
	ctx.r31.s64 = 16;
	// stw r27,688(r29)
	PPC_STORE_U32(ctx.r29.u32 + 688, ctx.r27.u32);
	// stw r31,696(r29)
	PPC_STORE_U32(ctx.r29.u32 + 696, ctx.r31.u32);
	// bl 0x82183850
	ctx.lr = 0x820EF208;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820ef220
	if (ctx.cr6.eq) goto loc_820EF220;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82183448
	ctx.lr = 0x820EF21C;
	sub_82183448(ctx, base);
	// b 0x820ef228
	goto loc_820EF228;
loc_820EF220:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821845a0
	ctx.lr = 0x820EF228;
	sub_821845A0(ctx, base);
loc_820EF228:
	// stw r3,688(r29)
	PPC_STORE_U32(ctx.r29.u32 + 688, ctx.r3.u32);
	// lwz r3,700(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ef240
	if (ctx.cr6.eq) goto loc_820EF240;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820EF240;
	sub_82183E40(ctx, base);
loc_820EF240:
	// stw r27,700(r29)
	PPC_STORE_U32(ctx.r29.u32 + 700, ctx.r27.u32);
	// stw r31,708(r29)
	PPC_STORE_U32(ctx.r29.u32 + 708, ctx.r31.u32);
	// bl 0x82183850
	ctx.lr = 0x820EF24C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820ef264
	if (ctx.cr6.eq) goto loc_820EF264;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82183448
	ctx.lr = 0x820EF260;
	sub_82183448(ctx, base);
	// b 0x820ef26c
	goto loc_820EF26C;
loc_820EF264:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821845a0
	ctx.lr = 0x820EF26C;
	sub_821845A0(ctx, base);
loc_820EF26C:
	// stw r3,700(r29)
	PPC_STORE_U32(ctx.r29.u32 + 700, ctx.r3.u32);
	// lwz r3,716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 716);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ef284
	if (ctx.cr6.eq) goto loc_820EF284;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820EF284;
	sub_82183E40(ctx, base);
loc_820EF284:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r27,716(r29)
	PPC_STORE_U32(ctx.r29.u32 + 716, ctx.r27.u32);
	// stw r11,724(r29)
	PPC_STORE_U32(ctx.r29.u32 + 724, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x820EF294;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820ef2bc
	if (ctx.cr6.eq) goto loc_820EF2BC;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x820EF2A8;
	sub_82183448(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,716(r29)
	PPC_STORE_U32(ctx.r29.u32 + 716, ctx.r3.u32);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820EF2BC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820EF2C4;
	sub_821845A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,716(r29)
	PPC_STORE_U32(ctx.r29.u32 + 716, ctx.r3.u32);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820EF2D8"))) PPC_WEAK_FUNC(sub_820EF2D8);
PPC_FUNC_IMPL(__imp__sub_820EF2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x820eec70
	ctx.lr = 0x820EF2F8;
	sub_820EEC70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ef314
	if (ctx.cr6.eq) goto loc_820EF314;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820EF310;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820EF314:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF32C"))) PPC_WEAK_FUNC(sub_820EF32C);
PPC_FUNC_IMPL(__imp__sub_820EF32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EF330"))) PPC_WEAK_FUNC(sub_820EF330);
PPC_FUNC_IMPL(__imp__sub_820EF330) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x820eed78
	sub_820EED78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820EF33C"))) PPC_WEAK_FUNC(sub_820EF33C);
PPC_FUNC_IMPL(__imp__sub_820EF33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EF340"))) PPC_WEAK_FUNC(sub_820EF340);
PPC_FUNC_IMPL(__imp__sub_820EF340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,19688
	ctx.r10.s64 = ctx.r11.s64 + 19688;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821863b8
	sub_821863B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820EF350"))) PPC_WEAK_FUNC(sub_820EF350);
PPC_FUNC_IMPL(__imp__sub_820EF350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF35C"))) PPC_WEAK_FUNC(sub_820EF35C);
PPC_FUNC_IMPL(__imp__sub_820EF35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EF360"))) PPC_WEAK_FUNC(sub_820EF360);
PPC_FUNC_IMPL(__imp__sub_820EF360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,416(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 416, temp.u32);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r8,432(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,424(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 424, temp.u32);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820ef3fc
	if (ctx.cr6.eq) goto loc_820EF3FC;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,160(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f11,64(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,64(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 64, temp.u32);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f8,168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,168(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 168, temp.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f5,72(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f3,72(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 72, temp.u32);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stfs f0,24(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
loc_820EF3FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stfs f1,420(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 420, temp.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,432(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f10,556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 556);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f8,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f6,164(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,164(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 164, temp.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f4,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f3,68(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF480"))) PPC_WEAK_FUNC(sub_820EF480);
PPC_FUNC_IMPL(__imp__sub_820EF480) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF488"))) PPC_WEAK_FUNC(sub_820EF488);
PPC_FUNC_IMPL(__imp__sub_820EF488) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF490"))) PPC_WEAK_FUNC(sub_820EF490);
PPC_FUNC_IMPL(__imp__sub_820EF490) {
	PPC_FUNC_PROLOGUE();
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF498"))) PPC_WEAK_FUNC(sub_820EF498);
PPC_FUNC_IMPL(__imp__sub_820EF498) {
	PPC_FUNC_PROLOGUE();
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF4A0"))) PPC_WEAK_FUNC(sub_820EF4A0);
PPC_FUNC_IMPL(__imp__sub_820EF4A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF4A8"))) PPC_WEAK_FUNC(sub_820EF4A8);
PPC_FUNC_IMPL(__imp__sub_820EF4A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF4B0"))) PPC_WEAK_FUNC(sub_820EF4B0);
PPC_FUNC_IMPL(__imp__sub_820EF4B0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF4B8"))) PPC_WEAK_FUNC(sub_820EF4B8);
PPC_FUNC_IMPL(__imp__sub_820EF4B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF4C0"))) PPC_WEAK_FUNC(sub_820EF4C0);
PPC_FUNC_IMPL(__imp__sub_820EF4C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// blr 
	return;
}

