#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82233170"))) PPC_WEAK_FUNC(sub_82233170);
PPC_FUNC_IMPL(__imp__sub_82233170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82233178;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x82233188;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821837d0
	ctx.lr = 0x82233194;
	sub_821837D0(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822331ac
	if (!ctx.cr6.eq) goto loc_822331AC;
	// bl 0x82232cf8
	ctx.lr = 0x822331A8;
	sub_82232CF8(ctx, base);
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
loc_822331AC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82233098
	ctx.lr = 0x822331B8;
	sub_82233098(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x822331C0;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822331C8"))) PPC_WEAK_FUNC(sub_822331C8);
PPC_FUNC_IMPL(__imp__sub_822331C8) {
	PPC_FUNC_PROLOGUE();
	// li r7,4
	ctx.r7.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,10
	ctx.r6.s64 = 10;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// addi r8,r3,21
	ctx.r8.s64 = ctx.r3.s64 + 21;
	// stb r10,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stb r10,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r10.u8);
	// stb r10,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r10.u8);
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// stb r6,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r6.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stb r11,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r11.u8);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
loc_82233238:
	// stbx r11,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82233238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82233238;
	// li r7,6
	ctx.r7.s64 = 6;
	// stb r10,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r10.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r10.u8);
	// li r6,88
	ctx.r6.s64 = 88;
	// stb r10,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r10.u8);
	// li r5,102
	ctx.r5.s64 = 102;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// li r4,90
	ctx.r4.s64 = 90;
	// stb r6,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r6.u8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stb r5,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r5.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r4,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r4.u8);
	// addi r8,r3,31
	ctx.r8.s64 = ctx.r3.s64 + 31;
	// stb r10,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r10.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r10,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r10.u8);
loc_82233290:
	// stbx r7,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82233290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82233290;
	// li r8,6
	ctx.r8.s64 = 6;
	// stb r7,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r7.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r7,r3,38
	ctx.r7.s64 = ctx.r3.s64 + 38;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822332B0:
	// stbx r11,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x822332b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822332B0;
	// li r6,6
	ctx.r6.s64 = 6;
	// stb r10,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r10.u8);
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r10,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r10.u8);
	// stb r11,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r9,47(r3)
	PPC_STORE_U8(ctx.r3.u32 + 47, ctx.r9.u8);
	// addi r7,r3,60
	ctx.r7.s64 = ctx.r3.s64 + 60;
	// stb r9,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r9.u8);
	// stb r9,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, ctx.r9.u8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stb r9,50(r3)
	PPC_STORE_U8(ctx.r3.u32 + 50, ctx.r9.u8);
	// stb r9,51(r3)
	PPC_STORE_U8(ctx.r3.u32 + 51, ctx.r9.u8);
	// stb r9,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r9.u8);
	// stb r9,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r9.u8);
	// addi r9,r3,54
	ctx.r9.s64 = ctx.r3.s64 + 54;
loc_822332FC:
	// stbx r10,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// stbx r11,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x822332fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822332FC;
	// li r9,5
	ctx.r9.s64 = 5;
	// stb r11,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r11.u8);
	// stb r10,67(r3)
	PPC_STORE_U8(ctx.r3.u32 + 67, ctx.r10.u8);
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// stb r11,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r11.u8);
	// stb r11,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, ctx.r11.u8);
	// stb r10,71(r3)
	PPC_STORE_U8(ctx.r3.u32 + 71, ctx.r10.u8);
	// stb r9,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r9.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// stb r10,74(r3)
	PPC_STORE_U8(ctx.r3.u32 + 74, ctx.r10.u8);
	// stb r10,75(r3)
	PPC_STORE_U8(ctx.r3.u32 + 75, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223333C"))) PPC_WEAK_FUNC(sub_8223333C);
PPC_FUNC_IMPL(__imp__sub_8223333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233340"))) PPC_WEAK_FUNC(sub_82233340);
PPC_FUNC_IMPL(__imp__sub_82233340) {
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
	// li r11,50
	ctx.r11.s64 = 50;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r5,22
	ctx.r5.s64 = 22;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// stb r11,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r11.u8);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// stb r11,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// bl 0x82248a40
	ctx.lr = 0x822333B4;
	sub_82248A40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822333C4"))) PPC_WEAK_FUNC(sub_822333C4);
PPC_FUNC_IMPL(__imp__sub_822333C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822333C8"))) PPC_WEAK_FUNC(sub_822333C8);
PPC_FUNC_IMPL(__imp__sub_822333C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r8,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r8.u8);
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r7,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r7.u8);
	// lbz r6,5(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// stb r6,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r6.u8);
	// lbz r5,6(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r5,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233404"))) PPC_WEAK_FUNC(sub_82233404);
PPC_FUNC_IMPL(__imp__sub_82233404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233408"))) PPC_WEAK_FUNC(sub_82233408);
PPC_FUNC_IMPL(__imp__sub_82233408) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// lbz r8,21(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// stb r8,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// lbz r7,22(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 22);
	// stb r7,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r7.u8);
	// lbz r6,23(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 23);
	// stb r6,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r6.u8);
	// lbz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// stb r5,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233444"))) PPC_WEAK_FUNC(sub_82233444);
PPC_FUNC_IMPL(__imp__sub_82233444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233448"))) PPC_WEAK_FUNC(sub_82233448);
PPC_FUNC_IMPL(__imp__sub_82233448) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822331c8
	ctx.lr = 0x82233464;
	sub_822331C8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,101(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// lbz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// lbz r6,103(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// stb r8,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r8.u8);
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
	// stb r6,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r6.u8);
	// stb r5,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r5.u8);
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

__attribute__((alias("__imp__sub_822334B0"))) PPC_WEAK_FUNC(sub_822334B0);
PPC_FUNC_IMPL(__imp__sub_822334B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822334B8;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82232e30
	ctx.lr = 0x822334CC;
	sub_82232E30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x821847a8
	ctx.lr = 0x822334DC;
	sub_821847A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82232e30
	ctx.lr = 0x822334E4;
	sub_82232E30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82248a40
	ctx.lr = 0x822334F4;
	sub_82248A40(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x822334F8;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82233548
	if (ctx.cr6.eq) goto loc_82233548;
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82233520
	if (ctx.cr6.eq) goto loc_82233520;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82233520:
	// li r10,64
	ctx.r10.s64 = 64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8223352C:
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8223352c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223352C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82233548:
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// li r11,0
	ctx.r11.s64 = 0;
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwinm r7,r8,25,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8223357c
	if (ctx.cr6.eq) goto loc_8223357C;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82233578
	if (!ctx.cr6.eq) goto loc_82233578;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// b 0x8223357c
	goto loc_8223357C;
loc_82233578:
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_8223357C:
	// li r10,64
	ctx.r10.s64 = 64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82233584:
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82233584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82233584;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822335A0"))) PPC_WEAK_FUNC(sub_822335A0);
PPC_FUNC_IMPL(__imp__sub_822335A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822331c8
	ctx.lr = 0x822335C8;
	sub_822331C8(ctx, base);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,101(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r6,102(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// lbz r5,103(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// stb r8,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// stb r7,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r7.u8);
	// stb r6,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r6.u8);
	// stb r5,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r5.u8);
	// stb r4,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r4.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r3,2(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223362C"))) PPC_WEAK_FUNC(sub_8223362C);
PPC_FUNC_IMPL(__imp__sub_8223362C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233630"))) PPC_WEAK_FUNC(sub_82233630);
PPC_FUNC_IMPL(__imp__sub_82233630) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8223364c
	if (ctx.cr6.eq) goto loc_8223364C;
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8223364C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r8,101
	ctx.r8.s64 = 101;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// sth r8,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r8.u16);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233678"))) PPC_WEAK_FUNC(sub_82233678);
PPC_FUNC_IMPL(__imp__sub_82233678) {
	PPC_FUNC_PROLOGUE();
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x82248f70
	sub_82248F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82233688"))) PPC_WEAK_FUNC(sub_82233688);
PPC_FUNC_IMPL(__imp__sub_82233688) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r8,101
	ctx.r8.s64 = 101;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// sth r8,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r8.u16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822336C4"))) PPC_WEAK_FUNC(sub_822336C4);
PPC_FUNC_IMPL(__imp__sub_822336C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822336C8"))) PPC_WEAK_FUNC(sub_822336C8);
PPC_FUNC_IMPL(__imp__sub_822336C8) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822336D4"))) PPC_WEAK_FUNC(sub_822336D4);
PPC_FUNC_IMPL(__imp__sub_822336D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822336D8"))) PPC_WEAK_FUNC(sub_822336D8);
PPC_FUNC_IMPL(__imp__sub_822336D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r8,100
	ctx.r8.s64 = 100;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r7,101
	ctx.r7.s64 = 101;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// sth r8,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// li r5,128
	ctx.r5.s64 = 128;
	// sth r7,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r7.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x82248f70
	sub_82248F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82233724"))) PPC_WEAK_FUNC(sub_82233724);
PPC_FUNC_IMPL(__imp__sub_82233724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233728"))) PPC_WEAK_FUNC(sub_82233728);
PPC_FUNC_IMPL(__imp__sub_82233728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r8,100
	ctx.r8.s64 = 100;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r7,101
	ctx.r7.s64 = 101;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// li r5,128
	ctx.r5.s64 = 128;
	// sth r7,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r7.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82248f70
	ctx.lr = 0x82233788;
	sub_82248F70(ctx, base);
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

__attribute__((alias("__imp__sub_822337A0"))) PPC_WEAK_FUNC(sub_822337A0);
PPC_FUNC_IMPL(__imp__sub_822337A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x822337f0
	if (ctx.cr6.eq) goto loc_822337F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822337D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822337F0:
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

__attribute__((alias("__imp__sub_8223380C"))) PPC_WEAK_FUNC(sub_8223380C);
PPC_FUNC_IMPL(__imp__sub_8223380C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233810"))) PPC_WEAK_FUNC(sub_82233810);
PPC_FUNC_IMPL(__imp__sub_82233810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82233818;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82233848
	if (ctx.cr6.eq) goto loc_82233848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r29,12
	ctx.r6.s64 = ctx.r29.s64 + 12;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82233848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82233848:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r28,801
	ctx.r28.s64 = 801;
	// addi r27,r11,-512
	ctx.r27.s64 = ctx.r11.s64 + -512;
	// li r25,5
	ctx.r25.s64 = 5;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8223385C:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82233860:
	// lwz r3,3200(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223387c
	if (ctx.cr6.eq) goto loc_8223387C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223d160
	ctx.lr = 0x8223387C;
	sub_8223D160(ctx, base);
loc_8223387C:
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82233898
	if (ctx.cr6.eq) goto loc_82233898;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82233898;
	sub_82183E40(ctx, base);
loc_82233898:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r26,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r26.u32);
	// cmplwi cr6,r31,52
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 52, ctx.xer);
	// blt cr6,0x82233860
	if (ctx.cr6.lt) goto loc_82233860;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r28,r28,52
	ctx.r28.s64 = ctx.r28.s64 + 52;
	// bne 0x8223385c
	if (!ctx.cr0.eq) goto loc_8223385C;
	// stw r26,3200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3200, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_822338C4"))) PPC_WEAK_FUNC(sub_822338C4);
PPC_FUNC_IMPL(__imp__sub_822338C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822338C8"))) PPC_WEAK_FUNC(sub_822338C8);
PPC_FUNC_IMPL(__imp__sub_822338C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r3,12
	ctx.r6.s64 = ctx.r3.s64 + 12;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82233900"))) PPC_WEAK_FUNC(sub_82233900);
PPC_FUNC_IMPL(__imp__sub_82233900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233904"))) PPC_WEAK_FUNC(sub_82233904);
PPC_FUNC_IMPL(__imp__sub_82233904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233908"))) PPC_WEAK_FUNC(sub_82233908);
PPC_FUNC_IMPL(__imp__sub_82233908) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223391C"))) PPC_WEAK_FUNC(sub_8223391C);
PPC_FUNC_IMPL(__imp__sub_8223391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233920"))) PPC_WEAK_FUNC(sub_82233920);
PPC_FUNC_IMPL(__imp__sub_82233920) {
	PPC_FUNC_PROLOGUE();
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82233930
	if (ctx.cr0.lt) goto loc_82233930;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// blt cr6,0x82233938
	if (ctx.cr6.lt) goto loc_82233938;
loc_82233930:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82233938:
	// addi r11,r11,515
	ctx.r11.s64 = ctx.r11.s64 + 515;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233948"))) PPC_WEAK_FUNC(sub_82233948);
PPC_FUNC_IMPL(__imp__sub_82233948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82233950;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// std r7,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r7.u64);
	// beq cr6,0x822339f8
	if (ctx.cr6.eq) goto loc_822339F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82182e90
	ctx.lr = 0x82233984;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8223398C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82233998;
	sub_821837D0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// bl 0x821aff78
	ctx.lr = 0x822339A4;
	sub_821AFF78(ctx, base);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x8234a248
	ctx.lr = 0x822339BC;
	sub_8234A248(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r11,56(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822339D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822339F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x822339F8;
	sub_821837D0(ctx, base);
loc_822339F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82233A00"))) PPC_WEAK_FUNC(sub_82233A00);
PPC_FUNC_IMPL(__imp__sub_82233A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82233A08;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// std r7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x821aff78
	ctx.lr = 0x82233A30;
	sub_821AFF78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82233A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,-564
	ctx.r28.s64 = ctx.r11.s64 + -564;
loc_82233A58:
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821b6d10
	ctx.lr = 0x82233A6C;
	sub_821B6D10(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,52
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 52, ctx.xer);
	// blt cr6,0x82233a58
	if (ctx.cr6.lt) goto loc_82233A58;
	// li r31,100
	ctx.r31.s64 = 100;
	// li r30,52
	ctx.r30.s64 = 52;
	// addi r28,r28,-100
	ctx.r28.s64 = ctx.r28.s64 + -100;
loc_82233A84:
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821b6d10
	ctx.lr = 0x82233A98;
	sub_821B6D10(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x82233a84
	if (!ctx.cr0.eq) goto loc_82233A84;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x82233ad0
	if (!ctx.cr6.eq) goto loc_82233AD0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82233AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82233AD0:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r7,r27,12
	ctx.r7.s64 = ctx.r27.s64 + 12;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82233AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82233AFC"))) PPC_WEAK_FUNC(sub_82233AFC);
PPC_FUNC_IMPL(__imp__sub_82233AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233B00"))) PPC_WEAK_FUNC(sub_82233B00);
PPC_FUNC_IMPL(__imp__sub_82233B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82233B08;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// std r8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// bl 0x821aff78
	ctx.lr = 0x82233B34;
	sub_821AFF78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82233B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,-564
	ctx.r28.s64 = ctx.r11.s64 + -564;
loc_82233B5C:
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821b6d10
	ctx.lr = 0x82233B70;
	sub_821B6D10(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,52
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 52, ctx.xer);
	// blt cr6,0x82233b5c
	if (ctx.cr6.lt) goto loc_82233B5C;
	// li r31,100
	ctx.r31.s64 = 100;
	// li r29,52
	ctx.r29.s64 = 52;
	// addi r28,r28,-100
	ctx.r28.s64 = ctx.r28.s64 + -100;
loc_82233B88:
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821b6d10
	ctx.lr = 0x82233B9C;
	sub_821B6D10(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x82233b88
	if (!ctx.cr0.eq) goto loc_82233B88;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82233bdc
	if (ctx.cr6.eq) goto loc_82233BDC;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r7,r27,12
	ctx.r7.s64 = ctx.r27.s64 + 12;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82233BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82233BDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82233BE8"))) PPC_WEAK_FUNC(sub_82233BE8);
PPC_FUNC_IMPL(__imp__sub_82233BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f1,360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233BF4"))) PPC_WEAK_FUNC(sub_82233BF4);
PPC_FUNC_IMPL(__imp__sub_82233BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233BF8"))) PPC_WEAK_FUNC(sub_82233BF8);
PPC_FUNC_IMPL(__imp__sub_82233BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f1,364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233C04"))) PPC_WEAK_FUNC(sub_82233C04);
PPC_FUNC_IMPL(__imp__sub_82233C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233C08"))) PPC_WEAK_FUNC(sub_82233C08);
PPC_FUNC_IMPL(__imp__sub_82233C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82233C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,3020(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3020, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82233C54"))) PPC_WEAK_FUNC(sub_82233C54);
PPC_FUNC_IMPL(__imp__sub_82233C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82233C58"))) PPC_WEAK_FUNC(sub_82233C58);
PPC_FUNC_IMPL(__imp__sub_82233C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82233C60;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3200);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233f14
	if (ctx.cr6.eq) goto loc_82233F14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,3412
	ctx.r30.s64 = ctx.r3.s64 + 3412;
	// lfs f31,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_82233C88:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// bl 0x8223dae8
	ctx.lr = 0x82233C94;
	sub_8223DAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82233f04
	if (ctx.cr6.eq) goto loc_82233F04;
	// lbz r5,41(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r3,42(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// lbz r10,43(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// lwz r11,-208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -208);
	// std r5,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// lfd f13,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// lfd f11,192(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// lfd f0,160(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lbz r6,42(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// lbz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// lbz r7,43(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// lbz r5,41(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// lfd f11,176(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// lfd f9,208(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// fmuls f3,f7,f31
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f2,f31
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// lbz r3,43(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// lbz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// lbz r6,41(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// lbz r5,42(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// std r3,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// lfd f5,136(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// frsp f13,f3
	ctx.f13.f64 = double(float(ctx.f3.f64));
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f2,f10
	ctx.f2.f64 = double(ctx.f10.s64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f12,f2
	ctx.f12.f64 = double(float(ctx.f2.f64));
	// lfd f7,120(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// fmuls f1,f6,f31
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lbz r9,41(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// lbz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// lbz r8,43(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// lfd f6,184(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lbz r10,42(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lfd f8,152(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// lwz r11,416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmuls f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfd f7,168(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lfd f2,200(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// fcfid f0,f2
	ctx.f0.f64 = double(ctx.f2.s64);
	// fmuls f11,f1,f31
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r4,12(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82233F04:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,52
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 52, ctx.xer);
	// blt cr6,0x82233c88
	if (ctx.cr6.lt) goto loc_82233C88;
loc_82233F14:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82233F20"))) PPC_WEAK_FUNC(sub_82233F20);
PPC_FUNC_IMPL(__imp__sub_82233F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82233F28;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3200);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233fe4
	if (ctx.cr6.eq) goto loc_82233FE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,5
	ctx.r3.s64 = 5;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822394b0
	ctx.lr = 0x82233F68;
	sub_822394B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f31,8616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	ctx.f31.f64 = double(temp.f32);
loc_82233F74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r3,2(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// bl 0x8223db08
	ctx.lr = 0x82233F80;
	sub_8223DB08(ctx, base);
	// cmpwi cr6,r3,52
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 52, ctx.xer);
	// beq cr6,0x82233fd8
	if (ctx.cr6.eq) goto loc_82233FD8;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82233fd8
	if (ctx.cr6.eq) goto loc_82233FD8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,1009
	ctx.r10.s64 = ctx.r3.s64 + 1009;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwzx r11,r9,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmadds f7,f8,f9,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
loc_82233FD8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x82233f74
	if (ctx.cr6.lt) goto loc_82233F74;
loc_82233FE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82233FF0"))) PPC_WEAK_FUNC(sub_82233FF0);
PPC_FUNC_IMPL(__imp__sub_82233FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82233FF8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r24,-1
	ctx.r24.s64 = -1;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
loc_82234030:
	// stb r24,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r24.u8);
	// stb r25,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r25.u8);
	// stb r25,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r25.u8);
	// stb r25,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r25.u8);
	// stfsu f0,8(r11)
	// bdnz 0x82234030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82234030;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,3200(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3200, ctx.r25.u32);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82234088
	if (ctx.cr6.lt) goto loc_82234088;
	// bne cr6,0x822340b0
	if (!ctx.cr6.eq) goto loc_822340B0;
	// li r3,424
	ctx.r3.s64 = 424;
	// bl 0x82080000
	ctx.lr = 0x8223406C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82234080
	if (ctx.cr6.eq) goto loc_82234080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82240cd8
	ctx.lr = 0x8223407C;
	sub_82240CD8(ctx, base);
	// b 0x822340ac
	goto loc_822340AC;
loc_82234080:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x822340ac
	goto loc_822340AC;
loc_82234088:
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x82080000
	ctx.lr = 0x82234090;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822340a4
	if (ctx.cr6.eq) goto loc_822340A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223fd30
	ctx.lr = 0x822340A0;
	sub_8223FD30(ctx, base);
	// b 0x822340a8
	goto loc_822340A8;
loc_822340A4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_822340A8:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_822340AC:
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
loc_822340B0:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822340C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822340E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8223f190
	ctx.lr = 0x822340F0;
	sub_8223F190(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82234108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82234530
	ctx.lr = 0x82234110;
	sub_82234530(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8223f5c8
	ctx.lr = 0x82234124;
	sub_8223F5C8(ctx, base);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r27,r28,2060
	ctx.r27.s64 = ctx.r28.s64 + 2060;
loc_8223412C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82234140
	if (ctx.cr6.lt) goto loc_82234140;
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 10, ctx.xer);
	// bge cr6,0x82234140
	if (!ctx.cr6.lt) goto loc_82234140;
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
loc_82234140:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82234144:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82234540
	ctx.lr = 0x82234150;
	sub_82234540(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82234170
	if (ctx.cr6.eq) goto loc_82234170;
	// bl 0x82345178
	ctx.lr = 0x82234160;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82234180
	if (ctx.cr6.eq) goto loc_82234180;
loc_82234170:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// blt cr6,0x82234144
	if (ctx.cr6.lt) goto loc_82234144;
	// b 0x822341a0
	goto loc_822341A0;
loc_82234180:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82345178
	ctx.lr = 0x82234188;
	sub_82345178(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x822341a0
	if (ctx.cr6.lt) goto loc_822341A0;
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 10, ctx.xer);
	// bge cr6,0x822341a0
	if (!ctx.cr6.lt) goto loc_822341A0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_822341A0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// blt cr6,0x8223412c
	if (ctx.cr6.lt) goto loc_8223412C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r30,r28,2100
	ctx.r30.s64 = ctx.r28.s64 + 2100;
loc_822341BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82234540
	ctx.lr = 0x822341C8;
	sub_82234540(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822341e0
	if (ctx.cr6.eq) goto loc_822341E0;
	// bl 0x82345178
	ctx.lr = 0x822341D4;
	sub_82345178(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214a2d8
	ctx.lr = 0x822341E0;
	sub_8214A2D8(ctx, base);
loc_822341E0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x822341bc
	if (ctx.cr6.lt) goto loc_822341BC;
	// li r4,1040
	ctx.r4.s64 = 1040;
	// addi r3,r28,3204
	ctx.r3.s64 = ctx.r28.s64 + 3204;
	// bl 0x822aa648
	ctx.lr = 0x822341FC;
	sub_822AA648(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82234208"))) PPC_WEAK_FUNC(sub_82234208);
PPC_FUNC_IMPL(__imp__sub_82234208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82234210;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r7,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r7.u64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// beq cr6,0x822342b4
	if (ctx.cr6.eq) goto loc_822342B4;
	// bl 0x82182e90
	ctx.lr = 0x82234244;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8223424C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82234258;
	sub_821837D0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223426C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// bl 0x821aff78
	ctx.lr = 0x82234278;
	sub_821AFF78(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82234294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822342AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x822342B4;
	sub_821837D0(ctx, base);
loc_822342B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822342BC"))) PPC_WEAK_FUNC(sub_822342BC);
PPC_FUNC_IMPL(__imp__sub_822342BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822342C0"))) PPC_WEAK_FUNC(sub_822342C0);
PPC_FUNC_IMPL(__imp__sub_822342C0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822342ec
	if (!ctx.cr6.eq) goto loc_822342EC;
loc_822342E4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8223437c
	goto loc_8223437C;
loc_822342EC:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x822310a0
	ctx.lr = 0x822342F4;
	sub_822310A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82234354
	if (!ctx.cr6.eq) goto loc_82234354;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82230de8
	ctx.lr = 0x82234304;
	sub_82230DE8(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82234318:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82234318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82234318;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c8480
	ctx.lr = 0x82234334;
	sub_820C8480(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223434c
	if (ctx.cr6.eq) goto loc_8223434C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8223437c
	goto loc_8223437C;
loc_8223434C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223437c
	goto loc_8223437C;
loc_82234354:
	// lwz r10,3020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822342e4
	if (ctx.cr6.eq) goto loc_822342E4;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822342e4
	if (ctx.cr0.lt) goto loc_822342E4;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bge cr6,0x822342e4
	if (!ctx.cr6.lt) goto loc_822342E4;
	// addi r11,r11,515
	ctx.r11.s64 = ctx.r11.s64 + 515;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_8223437C:
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

__attribute__((alias("__imp__sub_82234394"))) PPC_WEAK_FUNC(sub_82234394);
PPC_FUNC_IMPL(__imp__sub_82234394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234398"))) PPC_WEAK_FUNC(sub_82234398);
PPC_FUNC_IMPL(__imp__sub_82234398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822343A0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822343bc
	if (!ctx.cr6.eq) goto loc_822343BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_822343BC:
	// lwz r11,3200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82234464
	if (!ctx.cr6.eq) goto loc_82234464;
	// stw r4,3200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3200, ctx.r4.u32);
	// lwz r31,2004(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2004);
	// bl 0x82183078
	ctx.lr = 0x822343D4;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x822343E0;
	sub_821837D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r28,801
	ctx.r28.s64 = 801;
	// addi r30,r11,-512
	ctx.r30.s64 = ctx.r11.s64 + -512;
	// li r27,5
	ctx.r27.s64 = 5;
loc_822343F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822343F4:
	// bl 0x82183850
	ctx.lr = 0x822343F8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82234410
	if (ctx.cr6.eq) goto loc_82234410;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82183448
	ctx.lr = 0x8223440C;
	sub_82183448(ctx, base);
	// b 0x82234420
	goto loc_82234420;
loc_82234410:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// srawi r3,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 4;
	// bl 0x821845a0
	ctx.lr = 0x82234420;
	sub_821845A0(ctx, base);
loc_82234420:
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,3200(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3200);
	// bl 0x8223d160
	ctx.lr = 0x82234440;
	sub_8223D160(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,52
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 52, ctx.xer);
	// blt cr6,0x822343f4
	if (ctx.cr6.lt) goto loc_822343F4;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r28,r28,52
	ctx.r28.s64 = ctx.r28.s64 + 52;
	// bne 0x822343f0
	if (!ctx.cr0.eq) goto loc_822343F0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x82234464;
	sub_821837D0(ctx, base);
loc_82234464:
	// addi r31,r29,2100
	ctx.r31.s64 = ctx.r29.s64 + 2100;
	// li r30,11
	ctx.r30.s64 = 11;
loc_8223446C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82233c58
	ctx.lr = 0x82234478;
	sub_82233C58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82233f20
	ctx.lr = 0x82234484;
	sub_82233F20(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bne 0x8223446c
	if (!ctx.cr0.eq) goto loc_8223446C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8223449C"))) PPC_WEAK_FUNC(sub_8223449C);
PPC_FUNC_IMPL(__imp__sub_8223449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822344A0"))) PPC_WEAK_FUNC(sub_822344A0);
PPC_FUNC_IMPL(__imp__sub_822344A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822344A8"))) PPC_WEAK_FUNC(sub_822344A8);
PPC_FUNC_IMPL(__imp__sub_822344A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822344B0"))) PPC_WEAK_FUNC(sub_822344B0);
PPC_FUNC_IMPL(__imp__sub_822344B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822344C0"))) PPC_WEAK_FUNC(sub_822344C0);
PPC_FUNC_IMPL(__imp__sub_822344C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,460(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// bl 0x82243820
	ctx.lr = 0x822344DC;
	sub_82243820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_822344F8"))) PPC_WEAK_FUNC(sub_822344F8);
PPC_FUNC_IMPL(__imp__sub_822344F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234504"))) PPC_WEAK_FUNC(sub_82234504);
PPC_FUNC_IMPL(__imp__sub_82234504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234508"))) PPC_WEAK_FUNC(sub_82234508);
PPC_FUNC_IMPL(__imp__sub_82234508) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,456(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234510"))) PPC_WEAK_FUNC(sub_82234510);
PPC_FUNC_IMPL(__imp__sub_82234510) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,460(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234518"))) PPC_WEAK_FUNC(sub_82234518);
PPC_FUNC_IMPL(__imp__sub_82234518) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,464(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234520"))) PPC_WEAK_FUNC(sub_82234520);
PPC_FUNC_IMPL(__imp__sub_82234520) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,468(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234528"))) PPC_WEAK_FUNC(sub_82234528);
PPC_FUNC_IMPL(__imp__sub_82234528) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234530"))) PPC_WEAK_FUNC(sub_82234530);
PPC_FUNC_IMPL(__imp__sub_82234530) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234538"))) PPC_WEAK_FUNC(sub_82234538);
PPC_FUNC_IMPL(__imp__sub_82234538) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,476(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234540"))) PPC_WEAK_FUNC(sub_82234540);
PPC_FUNC_IMPL(__imp__sub_82234540) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234550"))) PPC_WEAK_FUNC(sub_82234550);
PPC_FUNC_IMPL(__imp__sub_82234550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8218e5c8
	ctx.lr = 0x82234570;
	sub_8218E5C8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-472
	ctx.r9.s64 = ctx.r10.s64 + -472;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822345C4"))) PPC_WEAK_FUNC(sub_822345C4);
PPC_FUNC_IMPL(__imp__sub_822345C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822345C8"))) PPC_WEAK_FUNC(sub_822345C8);
PPC_FUNC_IMPL(__imp__sub_822345C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822345f4
	if (!ctx.cr6.eq) goto loc_822345F4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82234600
	if (ctx.cr6.eq) goto loc_82234600;
loc_822345F4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82234600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82234600:
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
	ctx.lr = 0x82234618;
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
}

__attribute__((alias("__imp__sub_82234630"))) PPC_WEAK_FUNC(sub_82234630);
PPC_FUNC_IMPL(__imp__sub_82234630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r11,-472
	ctx.r10.s64 = ctx.r11.s64 + -472;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82198538
	ctx.lr = 0x8223465C;
	sub_82198538(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82234678
	if (ctx.cr6.eq) goto loc_82234678;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82234674;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82234678:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234690"))) PPC_WEAK_FUNC(sub_82234690);
PPC_FUNC_IMPL(__imp__sub_82234690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// beq cr6,0x822346f8
	if (ctx.cr6.eq) goto loc_822346F8;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,10
	ctx.r10.s64 = 10;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_822346D8:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822346d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822346D8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822346F8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,40
	ctx.r4.s64 = 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82234718;
	sub_822AA648(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234734"))) PPC_WEAK_FUNC(sub_82234734);
PPC_FUNC_IMPL(__imp__sub_82234734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234738"))) PPC_WEAK_FUNC(sub_82234738);
PPC_FUNC_IMPL(__imp__sub_82234738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82234740;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
loc_8223475C:
	// stwu r27,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r29.u32 = ea;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x8223476C;
	sub_822AA648(ctx, base);
	// sth r28,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r28.u16);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x8223475c
	if (!ctx.cr0.eq) goto loc_8223475C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82234784"))) PPC_WEAK_FUNC(sub_82234784);
PPC_FUNC_IMPL(__imp__sub_82234784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234788"))) PPC_WEAK_FUNC(sub_82234788);
PPC_FUNC_IMPL(__imp__sub_82234788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r30,r8,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// bne cr6,0x822347e8
	if (!ctx.cr6.eq) goto loc_822347E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223db68
	ctx.lr = 0x822347CC;
	sub_8223DB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x822347f0
	if (ctx.cr6.eq) goto loc_822347F0;
	// bl 0x8223db78
	ctx.lr = 0x822347E0;
	sub_8223DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82234800
	if (!ctx.cr6.eq) goto loc_82234800;
loc_822347E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82234820
	goto loc_82234820;
loc_822347F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8223ead8
	ctx.lr = 0x822347F8;
	sub_8223EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822347e8
	if (!ctx.cr6.eq) goto loc_822347E8;
loc_82234800:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,7
	ctx.r10.s64 = 7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8223481c
	if (ctx.cr6.eq) goto loc_8223481C;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8223481C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82234820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234838"))) PPC_WEAK_FUNC(sub_82234838);
PPC_FUNC_IMPL(__imp__sub_82234838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r30,r8,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// bne cr6,0x82234898
	if (!ctx.cr6.eq) goto loc_82234898;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223db68
	ctx.lr = 0x8223487C;
	sub_8223DB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x822348a0
	if (ctx.cr6.eq) goto loc_822348A0;
	// bl 0x8223db78
	ctx.lr = 0x82234890;
	sub_8223DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822348b0
	if (!ctx.cr6.eq) goto loc_822348B0;
loc_82234898:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822348d0
	goto loc_822348D0;
loc_822348A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8223ead8
	ctx.lr = 0x822348A8;
	sub_8223EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82234898
	if (!ctx.cr6.eq) goto loc_82234898;
loc_822348B0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x822348cc
	if (ctx.cr6.eq) goto loc_822348CC;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_822348CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822348D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822348E8"))) PPC_WEAK_FUNC(sub_822348E8);
PPC_FUNC_IMPL(__imp__sub_822348E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r30,r8,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// bne cr6,0x82234948
	if (!ctx.cr6.eq) goto loc_82234948;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223db68
	ctx.lr = 0x8223492C;
	sub_8223DB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82234950
	if (ctx.cr6.eq) goto loc_82234950;
	// bl 0x8223db78
	ctx.lr = 0x82234940;
	sub_8223DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82234960
	if (!ctx.cr6.eq) goto loc_82234960;
loc_82234948:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82234980
	goto loc_82234980;
loc_82234950:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8223ead8
	ctx.lr = 0x82234958;
	sub_8223EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82234948
	if (!ctx.cr6.eq) goto loc_82234948;
loc_82234960:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,9
	ctx.r10.s64 = 9;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8223497c
	if (ctx.cr6.eq) goto loc_8223497C;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8223497C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82234980:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234998"))) PPC_WEAK_FUNC(sub_82234998);
PPC_FUNC_IMPL(__imp__sub_82234998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r30,r8,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// bne cr6,0x822349f8
	if (!ctx.cr6.eq) goto loc_822349F8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223db68
	ctx.lr = 0x822349DC;
	sub_8223DB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82234a00
	if (ctx.cr6.eq) goto loc_82234A00;
	// bl 0x8223db78
	ctx.lr = 0x822349F0;
	sub_8223DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82234a10
	if (!ctx.cr6.eq) goto loc_82234A10;
loc_822349F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82234a30
	goto loc_82234A30;
loc_82234A00:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x8223ead8
	ctx.lr = 0x82234A08;
	sub_8223EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822349f8
	if (!ctx.cr6.eq) goto loc_822349F8;
loc_82234A10:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,10
	ctx.r10.s64 = 10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82234a2c
	if (ctx.cr6.eq) goto loc_82234A2C;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82234A2C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82234A30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234A48"))) PPC_WEAK_FUNC(sub_82234A48);
PPC_FUNC_IMPL(__imp__sub_82234A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r30,r8,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// bne cr6,0x82234aa8
	if (!ctx.cr6.eq) goto loc_82234AA8;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223db68
	ctx.lr = 0x82234A8C;
	sub_8223DB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82234ab0
	if (ctx.cr6.eq) goto loc_82234AB0;
	// bl 0x8223db78
	ctx.lr = 0x82234AA0;
	sub_8223DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82234ac0
	if (!ctx.cr6.eq) goto loc_82234AC0;
loc_82234AA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82234ae0
	goto loc_82234AE0;
loc_82234AB0:
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x8223ead8
	ctx.lr = 0x82234AB8;
	sub_8223EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82234aa8
	if (!ctx.cr6.eq) goto loc_82234AA8;
loc_82234AC0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,11
	ctx.r10.s64 = 11;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82234adc
	if (ctx.cr6.eq) goto loc_82234ADC;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82234ADC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82234AE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234AF8"))) PPC_WEAK_FUNC(sub_82234AF8);
PPC_FUNC_IMPL(__imp__sub_82234AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82229080
	ctx.lr = 0x82234B14;
	sub_82229080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82234b58
	if (ctx.cr6.eq) goto loc_82234B58;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82088600
	ctx.lr = 0x82234B28;
	sub_82088600(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r11,1112(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1112);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// std r11,1104(r8)
	PPC_STORE_U64(ctx.r8.u32 + 1104, ctx.r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82234B58:
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

__attribute__((alias("__imp__sub_82234B70"))) PPC_WEAK_FUNC(sub_82234B70);
PPC_FUNC_IMPL(__imp__sub_82234B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82234B78;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x82234B90;
	sub_822AA648(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
loc_82234B98:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82345178
	ctx.lr = 0x82234BA0;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82234bbc
	if (ctx.cr6.eq) goto loc_82234BBC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x82234b98
	if (ctx.cr6.lt) goto loc_82234B98;
loc_82234BBC:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82234bd8
	if (ctx.cr6.eq) goto loc_82234BD8;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r11.u32);
	// stw r10,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r10.u32);
loc_82234BD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82234BE0"))) PPC_WEAK_FUNC(sub_82234BE0);
PPC_FUNC_IMPL(__imp__sub_82234BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82234BE8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82088600
	ctx.lr = 0x82234BF4;
	sub_82088600(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// std r11,1112(r10)
	PPC_STORE_U64(ctx.r10.u32 + 1112, ctx.r11.u64);
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230d40
	ctx.lr = 0x82234C18;
	sub_82230D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82234c30
	if (ctx.cr6.eq) goto loc_82234C30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230a78
	ctx.lr = 0x82234C28;
	sub_82230A78(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r3,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r3.u32);
loc_82234C30:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82234C44:
	// bl 0x82183850
	ctx.lr = 0x82234C48;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82234c60
	if (ctx.cr6.eq) goto loc_82234C60;
	// li r3,812
	ctx.r3.s64 = 812;
	// bl 0x82183448
	ctx.lr = 0x82234C5C;
	sub_82183448(ctx, base);
	// b 0x82234c68
	goto loc_82234C68;
loc_82234C60:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x82234C68;
	sub_821845A0(ctx, base);
loc_82234C68:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82234c88
	if (ctx.cr6.eq) goto loc_82234C88;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223e630
	ctx.lr = 0x82234C84;
	sub_8223E630(ctx, base);
	// b 0x82234c8c
	goto loc_82234C8C;
loc_82234C88:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82234C8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// cmplwi cr6,r30,10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 10, ctx.xer);
	// blt cr6,0x82234c44
	if (ctx.cr6.lt) goto loc_82234C44;
	// bl 0x82183850
	ctx.lr = 0x82234CA4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82234cbc
	if (ctx.cr6.eq) goto loc_82234CBC;
	// li r3,812
	ctx.r3.s64 = 812;
	// bl 0x82183448
	ctx.lr = 0x82234CB8;
	sub_82183448(ctx, base);
	// b 0x82234cc4
	goto loc_82234CC4;
loc_82234CBC:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x82234CC4;
	sub_821845A0(ctx, base);
loc_82234CC4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82234cec
	if (ctx.cr6.eq) goto loc_82234CEC;
	// addi r11,r26,10
	ctx.r11.s64 = ctx.r26.s64 + 10;
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x8223e630
	ctx.lr = 0x82234CE8;
	sub_8223E630(ctx, base);
	// b 0x82234cf0
	goto loc_82234CF0;
loc_82234CEC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82234CF0:
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r25,1128(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1128, ctx.r25.u64);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// std r25,1136(r8)
	PPC_STORE_U64(ctx.r8.u32 + 1136, ctx.r25.u64);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stw r25,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r25,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r25.u32);
	// lwz r3,460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// bl 0x821af000
	ctx.lr = 0x82234D30;
	sub_821AF000(ctx, base);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// bl 0x82241420
	ctx.lr = 0x82234D3C;
	sub_82241420(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82234D44"))) PPC_WEAK_FUNC(sub_82234D44);
PPC_FUNC_IMPL(__imp__sub_82234D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234D48"))) PPC_WEAK_FUNC(sub_82234D48);
PPC_FUNC_IMPL(__imp__sub_82234D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82234D50;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,472(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82234D68;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82234D74;
	sub_821837D0(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// bl 0x82241760
	ctx.lr = 0x82234D80;
	sub_82241760(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82234D84;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82234d9c
	if (ctx.cr6.eq) goto loc_82234D9C;
	// li r3,4244
	ctx.r3.s64 = 4244;
	// bl 0x82183448
	ctx.lr = 0x82234D98;
	sub_82183448(ctx, base);
	// b 0x82234da4
	goto loc_82234DA4;
loc_82234D9C:
	// li r3,266
	ctx.r3.s64 = 266;
	// bl 0x821845a0
	ctx.lr = 0x82234DA4;
	sub_821845A0(ctx, base);
loc_82234DA4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82234dd4
	if (ctx.cr6.eq) goto loc_82234DD4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82233ff0
	ctx.lr = 0x82234DBC;
	sub_82233FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82234DC8;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82234DD4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82234DE0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82234DEC"))) PPC_WEAK_FUNC(sub_82234DEC);
PPC_FUNC_IMPL(__imp__sub_82234DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234DF0"))) PPC_WEAK_FUNC(sub_82234DF0);
PPC_FUNC_IMPL(__imp__sub_82234DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82234e08
	if (ctx.cr6.eq) goto loc_82234E08;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r11,1000
	ctx.r3.s64 = ctx.r11.s64 + 1000;
	// blr 
	return;
loc_82234E08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82234E10"))) PPC_WEAK_FUNC(sub_82234E10);
PPC_FUNC_IMPL(__imp__sub_82234E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82234E18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
loc_82234E28:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82345178
	ctx.lr = 0x82234E30;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82234e54
	if (ctx.cr6.eq) goto loc_82234E54;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8223df28
	ctx.lr = 0x82234E48;
	sub_8223DF28(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x82234e28
	if (ctx.cr6.lt) goto loc_82234E28;
loc_82234E54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82234E5C"))) PPC_WEAK_FUNC(sub_82234E5C);
PPC_FUNC_IMPL(__imp__sub_82234E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234E60"))) PPC_WEAK_FUNC(sub_82234E60);
PPC_FUNC_IMPL(__imp__sub_82234E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82234E68;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,60
	ctx.r30.s64 = ctx.r3.s64 + 60;
loc_82234E7C:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82345178
	ctx.lr = 0x82234E88;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82234eb4
	if (ctx.cr6.eq) goto loc_82234EB4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223ea48
	ctx.lr = 0x82234EA4;
	sub_8223EA48(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x82234e7c
	if (ctx.cr6.lt) goto loc_82234E7C;
loc_82234EB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82234EBC"))) PPC_WEAK_FUNC(sub_82234EBC);
PPC_FUNC_IMPL(__imp__sub_82234EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82234EC0"))) PPC_WEAK_FUNC(sub_82234EC0);
PPC_FUNC_IMPL(__imp__sub_82234EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82234EC8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82185740
	ctx.lr = 0x82234EEC;
	sub_82185740(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// li r29,11
	ctx.r29.s64 = 11;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r9,r11,-464
	ctx.r9.s64 = ctx.r11.s64 + -464;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x82234738
	ctx.lr = 0x82234F38;
	sub_82234738(ctx, base);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r28,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r28.u32);
	// stw r27,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r27.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stw r26,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r26.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
loc_82234F64:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82234f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82234F64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82234F78"))) PPC_WEAK_FUNC(sub_82234F78);
PPC_FUNC_IMPL(__imp__sub_82234F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82234F80;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-464
	ctx.r10.s64 = ctx.r11.s64 + -464;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82234fb4
	if (ctx.cr6.eq) goto loc_82234FB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82234FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82234FB4:
	// lwz r3,456(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 456);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,460(r26)
	PPC_STORE_U32(ctx.r26.u32 + 460, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82234fdc
	if (ctx.cr6.eq) goto loc_82234FDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82234FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82234FDC:
	// addi r31,r26,56
	ctx.r31.s64 = ctx.r26.s64 + 56;
	// stw r27,456(r26)
	PPC_STORE_U32(ctx.r26.u32 + 456, ctx.r27.u32);
	// li r30,11
	ctx.r30.s64 = 11;
loc_82234FE8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82235008
	if (ctx.cr6.eq) goto loc_82235008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82235008:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r27,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r31.u32 = ea;
	// bne 0x82234fe8
	if (!ctx.cr0.eq) goto loc_82234FE8;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82235034
	if (ctx.cr6.eq) goto loc_82235034;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82235034:
	// addi r11,r26,104
	ctx.r11.s64 = ctx.r26.s64 + 104;
	// stw r27,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r27.u32);
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
loc_82235050:
	// stwu r27,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r29.u32 = ea;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82235060;
	sub_822AA648(ctx, base);
	// sth r28,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r28.u16);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x82235050
	if (!ctx.cr0.eq) goto loc_82235050;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821857f0
	ctx.lr = 0x82235078;
	sub_821857F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82235080"))) PPC_WEAK_FUNC(sub_82235080);
PPC_FUNC_IMPL(__imp__sub_82235080) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,17600
	ctx.r8.s64 = ctx.r10.s64 + 17600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82183850
	ctx.lr = 0x822350B8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x822350d0
	if (ctx.cr6.eq) goto loc_822350D0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x822350CC;
	sub_82183448(ctx, base);
	// b 0x822350d8
	goto loc_822350D8;
loc_822350D0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x822350D8;
	sub_821845A0(ctx, base);
loc_822350D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822350e8
	if (ctx.cr6.eq) goto loc_822350E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82234550
	ctx.lr = 0x822350E8;
	sub_82234550(ctx, base);
loc_822350E8:
	// li r11,13
	ctx.r11.s64 = 13;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82235108"))) PPC_WEAK_FUNC(sub_82235108);
PPC_FUNC_IMPL(__imp__sub_82235108) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x82235184
	if (!ctx.cr6.lt) goto loc_82235184;
loc_82235138:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82345178
	ctx.lr = 0x8223514C;
	sub_82345178(ctx, base);
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82235184
	if (ctx.cr6.eq) goto loc_82235184;
	// lbz r11,19(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822351a0
	if (ctx.cr0.eq) goto loc_822351A0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// blt cr6,0x82235138
	if (ctx.cr6.lt) goto loc_82235138;
loc_82235184:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82235188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822351A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82235188
	goto loc_82235188;
}

__attribute__((alias("__imp__sub_822351A8"))) PPC_WEAK_FUNC(sub_822351A8);
PPC_FUNC_IMPL(__imp__sub_822351A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x822351B0;
	sub_82248778(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,104
	ctx.r28.s64 = ctx.r3.s64 + 104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82234738
	ctx.lr = 0x822351C4;
	sub_82234738(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234b70
	ctx.lr = 0x822351D0;
	sub_82234B70(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x822351DC;
	sub_822AA648(ctx, base);
	// li r24,10
	ctx.r24.s64 = 10;
	// addi r25,r31,100
	ctx.r25.s64 = ctx.r31.s64 + 100;
	// li r27,1
	ctx.r27.s64 = 1;
loc_822351E8:
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82345178
	ctx.lr = 0x822351F4;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223526c
	if (ctx.cr6.eq) goto loc_8223526C;
	// lbz r11,19(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223526c
	if (!ctx.cr0.eq) goto loc_8223526C;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82235220:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223525c
	if (!ctx.cr6.eq) goto loc_8223525C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8223dbc8
	ctx.lr = 0x82235238;
	sub_8223DBC8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223525c
	if (ctx.cr6.eq) goto loc_8223525C;
	// addi r6,r29,60
	ctx.r6.s64 = ctx.r29.s64 + 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82234690
	ctx.lr = 0x82235258;
	sub_82234690(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_8223525C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x82235220
	if (ctx.cr6.lt) goto loc_82235220;
loc_8223526C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,-4
	ctx.r25.s64 = ctx.r25.s64 + -4;
	// bge 0x822351e8
	if (!ctx.cr0.lt) goto loc_822351E8;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82235280"))) PPC_WEAK_FUNC(sub_82235280);
PPC_FUNC_IMPL(__imp__sub_82235280) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82234e60
	sub_82234E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82235288"))) PPC_WEAK_FUNC(sub_82235288);
PPC_FUNC_IMPL(__imp__sub_82235288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82234f78
	ctx.lr = 0x822352A8;
	sub_82234F78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822352c4
	if (ctx.cr6.eq) goto loc_822352C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x822352C0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822352C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822352DC"))) PPC_WEAK_FUNC(sub_822352DC);
PPC_FUNC_IMPL(__imp__sub_822352DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822352E0"))) PPC_WEAK_FUNC(sub_822352E0);
PPC_FUNC_IMPL(__imp__sub_822352E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822352E8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,464(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x822352F8;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82235304;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82235308;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82235314;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8223531C;
	sub_821830F8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82235320;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82235338
	if (ctx.cr6.eq) goto loc_82235338;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x82235334;
	sub_82183448(ctx, base);
	// b 0x82235340
	goto loc_82235340;
loc_82235338:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x82235340;
	sub_821845A0(ctx, base);
loc_82235340:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82235350
	if (ctx.cr6.eq) goto loc_82235350;
	// bl 0x82243ed0
	ctx.lr = 0x8223534C;
	sub_82243ED0(ctx, base);
	// b 0x82235354
	goto loc_82235354;
loc_82235350:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82235354:
	// stw r3,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x8223535C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82235374
	if (ctx.cr6.eq) goto loc_82235374;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x82235370;
	sub_82183448(ctx, base);
	// b 0x8223537c
	goto loc_8223537C;
loc_82235374:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8223537C;
	sub_821845A0(ctx, base);
loc_8223537C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223538c
	if (ctx.cr6.eq) goto loc_8223538C;
	// bl 0x82243968
	ctx.lr = 0x82235388;
	sub_82243968(ctx, base);
	// b 0x82235390
	goto loc_82235390;
loc_8223538C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82235390:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82235398;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x822353b0
	if (ctx.cr6.eq) goto loc_822353B0;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82183448
	ctx.lr = 0x822353AC;
	sub_82183448(ctx, base);
	// b 0x822353b8
	goto loc_822353B8;
loc_822353B0:
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821845a0
	ctx.lr = 0x822353B8;
	sub_821845A0(ctx, base);
loc_822353B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822353ec
	if (ctx.cr6.eq) goto loc_822353EC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lbz r8,390(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 390);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// bl 0x82241498
	ctx.lr = 0x822353E8;
	sub_82241498(ctx, base);
	// b 0x822353f0
	goto loc_822353F0;
loc_822353EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822353F0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r3.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// blt cr6,0x82235410
	if (ctx.cr6.lt) goto loc_82235410;
	// bne cr6,0x82235418
	if (!ctx.cr6.eq) goto loc_82235418;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82235414
	goto loc_82235414;
loc_82235410:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82235414:
	// bl 0x821830f8
	ctx.lr = 0x82235418;
	sub_821830F8(ctx, base);
loc_82235418:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82235420;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223542C"))) PPC_WEAK_FUNC(sub_8223542C);
PPC_FUNC_IMPL(__imp__sub_8223542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82235430"))) PPC_WEAK_FUNC(sub_82235430);
PPC_FUNC_IMPL(__imp__sub_82235430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82235464
	if (ctx.cr6.eq) goto loc_82235464;
	// li r11,18
	ctx.r11.s64 = 18;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x822354f0
	goto loc_822354F0;
loc_82235464:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822436c0
	ctx.lr = 0x82235484;
	sub_822436C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223e8d8
	ctx.lr = 0x8223548C;
	sub_8223E8D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223db88
	ctx.lr = 0x82235498;
	sub_8223DB88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8223db88
	ctx.lr = 0x822354A4;
	sub_8223DB88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8223db88
	ctx.lr = 0x822354B0;
	sub_8223DB88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8223db88
	ctx.lr = 0x822354BC;
	sub_8223DB88(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223db88
	ctx.lr = 0x822354C8;
	sub_8223DB88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82235108
	ctx.lr = 0x822354D0;
	sub_82235108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822354e8
	if (ctx.cr6.eq) goto loc_822354E8;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x822354f0
	goto loc_822354F0;
loc_822354E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82235080
	ctx.lr = 0x822354F0;
	sub_82235080(ctx, base);
loc_822354F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82235508"))) PPC_WEAK_FUNC(sub_82235508);
PPC_FUNC_IMPL(__imp__sub_82235508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r30,r8,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// bne cr6,0x82235568
	if (!ctx.cr6.eq) goto loc_82235568;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223db68
	ctx.lr = 0x8223554C;
	sub_8223DB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82235570
	if (ctx.cr6.eq) goto loc_82235570;
	// bl 0x8223db78
	ctx.lr = 0x82235560;
	sub_8223DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82235580
	if (!ctx.cr6.eq) goto loc_82235580;
loc_82235568:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822355b0
	goto loc_822355B0;
loc_82235570:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8223ead8
	ctx.lr = 0x82235578;
	sub_8223EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82235568
	if (!ctx.cr6.eq) goto loc_82235568;
loc_82235580:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82235594
	if (ctx.cr6.eq) goto loc_82235594;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x822355a8
	goto loc_822355A8;
loc_82235594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82235108
	ctx.lr = 0x8223559C;
	sub_82235108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822355ac
	if (!ctx.cr6.eq) goto loc_822355AC;
	// li r11,15
	ctx.r11.s64 = 15;
loc_822355A8:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_822355AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822355B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822355C8"))) PPC_WEAK_FUNC(sub_822355C8);
PPC_FUNC_IMPL(__imp__sub_822355C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x822355D0;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r26,3
	ctx.r26.s64 = 3;
	// li r27,6
	ctx.r27.s64 = 6;
	// li r30,18
	ctx.r30.s64 = 18;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,14
	ctx.r28.s64 = 14;
	// li r24,17
	ctx.r24.s64 = 17;
loc_822355F4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x82235830
	if (ctx.cr6.gt) goto loc_82235830;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22040
	ctx.r12.s64 = ctx.r12.s64 + 22040;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,22540(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22540);
	// lwz r17,22116(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r17,22140(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22140);
	// lwz r17,22540(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22540);
	// lwz r17,22004(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22004);
	// lwz r17,22168(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22168);
	// lwz r17,22200(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22200);
	// lwz r17,22224(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22224);
	// lwz r17,22248(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22248);
	// lwz r17,22272(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22272);
	// lwz r17,22296(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22296);
	// lwz r17,22320(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22320);
	// lwz r17,22344(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22344);
	// lwz r17,22400(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22400);
	// lwz r17,22456(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22456);
	// lwz r17,22480(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22480);
	// lwz r17,22516(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22516);
	// lwz r17,22552(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22552);
	// lwz r17,22564(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22564);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822352e0
	ctx.lr = 0x8223566C;
	sub_822352E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822355f4
	if (!ctx.cr6.eq) goto loc_822355F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
	// lwz r3,460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// bl 0x82229080
	ctx.lr = 0x82235684;
	sub_82229080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82235830
	if (ctx.cr6.eq) goto loc_82235830;
	// stw r25,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// b 0x822355f4
	goto loc_822355F4;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82345178
	ctx.lr = 0x822356AC;
	sub_82345178(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234788
	ctx.lr = 0x822356C0;
	sub_82234788(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822355f4
	if (!ctx.cr6.eq) goto loc_822355F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234838
	ctx.lr = 0x822356D8;
	sub_82234838(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822355f4
	if (!ctx.cr6.eq) goto loc_822355F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822348e8
	ctx.lr = 0x822356F0;
	sub_822348E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822355f4
	if (!ctx.cr6.eq) goto loc_822355F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234998
	ctx.lr = 0x82235708;
	sub_82234998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822355f4
	if (!ctx.cr6.eq) goto loc_822355F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234a48
	ctx.lr = 0x82235720;
	sub_82234A48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822355f4
	if (!ctx.cr6.eq) goto loc_822355F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82235430
	ctx.lr = 0x82235738;
	sub_82235430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822355f4
	if (!ctx.cr6.eq) goto loc_822355F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82235830
	if (!ctx.cr6.eq) goto loc_82235830;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82235768
	if (ctx.cr6.eq) goto loc_82235768;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// b 0x822355f4
	goto loc_822355F4;
loc_82235768:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82235080
	ctx.lr = 0x82235770;
	sub_82235080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822355f4
	if (!ctx.cr6.eq) goto loc_822355F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82235830
	if (!ctx.cr6.eq) goto loc_82235830;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822357a0
	if (ctx.cr6.eq) goto loc_822357A0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// b 0x822355f4
	goto loc_822355F4;
loc_822357A0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x822355f4
	goto loc_822355F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82235508
	ctx.lr = 0x822357C0;
	sub_82235508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822355f4
	if (!ctx.cr6.eq) goto loc_822355F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822357e4
	if (ctx.cr6.eq) goto loc_822357E4;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// b 0x822355f4
	goto loc_822355F4;
loc_822357E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822351a8
	ctx.lr = 0x822357EC;
	sub_822351A8(ctx, base);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// b 0x822355f4
	goto loc_822355F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234af8
	ctx.lr = 0x822357FC;
	sub_82234AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822355f4
	if (!ctx.cr6.eq) goto loc_822355F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82235830
	if (ctx.cr6.eq) goto loc_82235830;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82235830:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82235838"))) PPC_WEAK_FUNC(sub_82235838);
PPC_FUNC_IMPL(__imp__sub_82235838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,34576
	ctx.r11.u64 = ctx.r11.u64 | 34576;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82235848"))) PPC_WEAK_FUNC(sub_82235848);
PPC_FUNC_IMPL(__imp__sub_82235848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82235850;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82235868;
	sub_82185740(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r10,r11,-452
	ctx.r10.s64 = ctx.r11.s64 + -452;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f4a48
	ctx.lr = 0x82235888;
	sub_821F4A48(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-32708
	ctx.r3.s64 = ctx.r3.s64 + -32708;
	// bl 0x82239fb8
	ctx.lr = 0x82235894;
	sub_82239FB8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-30960
	ctx.r11.s64 = ctx.r11.s64 + -30960;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822358c4
	if (ctx.cr6.eq) goto loc_822358C4;
loc_822358B0:
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_822358C4:
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822358b0
	if (!ctx.cr6.eq) goto loc_822358B0;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82230d40
	ctx.lr = 0x822358E0;
	sub_82230D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822358f0
	if (!ctx.cr6.eq) goto loc_822358F0;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_822358F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822358FC"))) PPC_WEAK_FUNC(sub_822358FC);
PPC_FUNC_IMPL(__imp__sub_822358FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82235900"))) PPC_WEAK_FUNC(sub_82235900);
PPC_FUNC_IMPL(__imp__sub_82235900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r10,r11,-452
	ctx.r10.s64 = ctx.r11.s64 + -452;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f4b38
	ctx.lr = 0x82235930;
	sub_821F4B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82235938;
	sub_821857F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82235954
	if (ctx.cr6.eq) goto loc_82235954;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82235950;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82235954:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223596C"))) PPC_WEAK_FUNC(sub_8223596C);
PPC_FUNC_IMPL(__imp__sub_8223596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82235970"))) PPC_WEAK_FUNC(sub_82235970);
PPC_FUNC_IMPL(__imp__sub_82235970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82235978;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8215bd08
	ctx.lr = 0x82235994;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x82235998;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x822359b8
	if (!ctx.cr6.eq) goto loc_822359B8;
	// bl 0x82155510
	ctx.lr = 0x822359A8;
	sub_82155510(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_822359B8:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822359E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822359E8"))) PPC_WEAK_FUNC(sub_822359E8);
PPC_FUNC_IMPL(__imp__sub_822359E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x822359F0;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x8215bd08
	ctx.lr = 0x82235A20;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x82235A24;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82235a44
	if (!ctx.cr6.eq) goto loc_82235A44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x82235A34;
	sub_82155510(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82235A44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82235A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82235A90"))) PPC_WEAK_FUNC(sub_82235A90);
PPC_FUNC_IMPL(__imp__sub_82235A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8215bd08
	ctx.lr = 0x82235AB0;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x82235AB4;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82235ad4
	if (!ctx.cr6.eq) goto loc_82235AD4;
	// bl 0x82155510
	ctx.lr = 0x82235AC4;
	sub_82155510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82235af8
	goto loc_82235AF8;
loc_82235AD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r9,132(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82235AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82235AF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82235B10"))) PPC_WEAK_FUNC(sub_82235B10);
PPC_FUNC_IMPL(__imp__sub_82235B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82235B18;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8215bd08
	ctx.lr = 0x82235B38;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x82235B3C;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82235b5c
	if (!ctx.cr6.eq) goto loc_82235B5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82155510
	ctx.lr = 0x82235B4C;
	sub_82155510(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82235B5C:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82235B90"))) PPC_WEAK_FUNC(sub_82235B90);
PPC_FUNC_IMPL(__imp__sub_82235B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82235B98;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x822360dc
	if (ctx.cr6.gt) goto loc_822360DC;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// li r28,11
	ctx.r28.s64 = 11;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23504
	ctx.r12.s64 = ctx.r12.s64 + 23504;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,23552(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23552);
	// lwz r17,23616(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23616);
	// lwz r17,23696(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23696);
	// lwz r17,23836(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23836);
	// lwz r17,23948(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23948);
	// lwz r17,24052(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24052);
	// lwz r17,24152(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24152);
	// lwz r17,24176(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24176);
	// lwz r17,24376(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24376);
	// lwz r17,24600(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24600);
	// lwz r17,24600(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24600);
	// lwz r17,24772(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24772);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822360dc
	if (ctx.cr6.eq) goto loc_822360DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82235970
	ctx.lr = 0x82235C30;
	sub_82235970(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822360dc
	if (ctx.cr6.eq) goto loc_822360DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235C74;
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
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82235d1c
	if (ctx.cr6.eq) goto loc_82235D1C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82235d18
	if (ctx.cr6.eq) goto loc_82235D18;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82230dd8
	ctx.lr = 0x82235CD8;
	sub_82230DD8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r7,r10,3660
	ctx.r7.s64 = ctx.r10.s64 + 3660;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,1748
	ctx.r8.s64 = 1748;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x822359e8
	ctx.lr = 0x82235D08;
	sub_822359E8(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x82235d1c
	goto loc_82235D1C;
loc_82235D18:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_82235D1C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822360dc
	if (ctx.cr6.eq) goto loc_822360DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82235d80
	if (ctx.cr6.eq) goto loc_82235D80;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// li r6,1748
	ctx.r6.s64 = 1748;
	// addi r5,r5,-32708
	ctx.r5.s64 = ctx.r5.s64 + -32708;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82235b10
	ctx.lr = 0x82235D70;
	sub_82235B10(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82235D80:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822360dc
	if (ctx.cr6.eq) goto loc_822360DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82235de4
	if (ctx.cr6.eq) goto loc_82235DE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82235a90
	ctx.lr = 0x82235DD4;
	sub_82235A90(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82235DE4:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822360dc
	if (ctx.cr6.eq) goto loc_822360DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82235E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82235de4
	if (ctx.cr6.eq) goto loc_82235DE4;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-32708
	ctx.r29.s64 = ctx.r29.s64 + -32708;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82239cf8
	ctx.lr = 0x82235E40;
	sub_82239CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82235f80
	if (!ctx.cr6.eq) goto loc_82235F80;
loc_82235E48:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// lwz r3,1124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1124);
	// bl 0x8218f0b0
	ctx.lr = 0x82235E60;
	sub_8218F0B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822360dc
	if (ctx.cr6.eq) goto loc_822360DC;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82183078
	ctx.lr = 0x82235E7C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82235E88;
	sub_821837D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820824b8
	ctx.lr = 0x82235E90;
	sub_820824B8(ctx, base);
	// li r3,1100
	ctx.r3.s64 = 1100;
	// bl 0x82080000
	ctx.lr = 0x82235E98;
	sub_82080000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82235eb0
	if (ctx.cr6.eq) goto loc_82235EB0;
	// addi r3,r3,1000
	ctx.r3.s64 = ctx.r3.s64 + 1000;
	// bl 0x82239f58
	ctx.lr = 0x82235EAC;
	sub_82239F58(ctx, base);
	// b 0x82235eb4
	goto loc_82235EB4;
loc_82235EB0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82235EB4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82230eb8
	ctx.lr = 0x82235EC4;
	sub_82230EB8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r29,1124(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1124);
	// bl 0x82230de8
	ctx.lr = 0x82235ED4;
	sub_82230DE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82239d78
	ctx.lr = 0x82235EE8;
	sub_82239D78(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// blt cr6,0x82235f20
	if (ctx.cr6.lt) goto loc_82235F20;
	// bne cr6,0x82235f28
	if (!ctx.cr6.eq) goto loc_82235F28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82235F10;
	sub_821830F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82235F18;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82235F20:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x82235F28;
	sub_821830F8(ctx, base);
loc_82235F28:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82235F30;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82230dd8
	ctx.lr = 0x82235F44;
	sub_82230DD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82164c98
	ctx.lr = 0x82235F4C;
	sub_82164C98(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-32708
	ctx.r29.s64 = ctx.r29.s64 + -32708;
	// bl 0x82163dd0
	ctx.lr = 0x82235F58;
	sub_82163DD0(ctx, base);
	// mulli r10,r30,1748
	ctx.r10.s64 = ctx.r30.s64 * 1748;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,5584
	ctx.r4.s64 = ctx.r11.s64 + 5584;
	// li r5,1748
	ctx.r5.s64 = 1748;
	// bl 0x82248a40
	ctx.lr = 0x82235F70;
	sub_82248A40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82239cf8
	ctx.lr = 0x82235F78;
	sub_82239CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82235e48
	if (ctx.cr6.eq) goto loc_82235E48;
loc_82235F80:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82183078
	ctx.lr = 0x82235F8C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82235F98;
	sub_821837D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820824b8
	ctx.lr = 0x82235FA0;
	sub_820824B8(ctx, base);
	// li r3,1100
	ctx.r3.s64 = 1100;
	// bl 0x82080000
	ctx.lr = 0x82235FA8;
	sub_82080000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82235fc0
	if (ctx.cr6.eq) goto loc_82235FC0;
	// addi r3,r3,1000
	ctx.r3.s64 = ctx.r3.s64 + 1000;
	// bl 0x82239f58
	ctx.lr = 0x82235FBC;
	sub_82239F58(ctx, base);
	// b 0x82235fc4
	goto loc_82235FC4;
loc_82235FC0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82235FC4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82230eb8
	ctx.lr = 0x82235FD0;
	sub_82230EB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223a3f8
	ctx.lr = 0x82235FE0;
	sub_8223A3F8(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// blt cr6,0x82235f20
	if (ctx.cr6.lt) goto loc_82235F20;
	// bne cr6,0x82235f28
	if (!ctx.cr6.eq) goto loc_82235F28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82236008;
	sub_821830F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82236010;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82183078
	ctx.lr = 0x82236024;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82236030;
	sub_821837D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820824b8
	ctx.lr = 0x82236038;
	sub_820824B8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-32708
	ctx.r29.s64 = ctx.r29.s64 + -32708;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r8,390(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 390);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// bl 0x8223a380
	ctx.lr = 0x82236058;
	sub_8223A380(ctx, base);
	// li r3,1100
	ctx.r3.s64 = 1100;
	// bl 0x82080000
	ctx.lr = 0x82236060;
	sub_82080000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82236078
	if (ctx.cr6.eq) goto loc_82236078;
	// addi r3,r3,1000
	ctx.r3.s64 = ctx.r3.s64 + 1000;
	// bl 0x82239f58
	ctx.lr = 0x82236074;
	sub_82239F58(ctx, base);
	// b 0x8223607c
	goto loc_8223607C;
loc_82236078:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8223607C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223a3f8
	ctx.lr = 0x8223608C;
	sub_8223A3F8(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// blt cr6,0x82235f20
	if (ctx.cr6.lt) goto loc_82235F20;
	// bne cr6,0x82235f28
	if (!ctx.cr6.eq) goto loc_82235F28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x822360B4;
	sub_821830F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x822360BC;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,34576
	ctx.r9.u64 = ctx.r11.u64 | 34576;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
loc_822360DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822360E4"))) PPC_WEAK_FUNC(sub_822360E4);
PPC_FUNC_IMPL(__imp__sub_822360E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822360E8"))) PPC_WEAK_FUNC(sub_822360E8);
PPC_FUNC_IMPL(__imp__sub_822360E8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82236104"))) PPC_WEAK_FUNC(sub_82236104);
PPC_FUNC_IMPL(__imp__sub_82236104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82236108"))) PPC_WEAK_FUNC(sub_82236108);
PPC_FUNC_IMPL(__imp__sub_82236108) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82236144"))) PPC_WEAK_FUNC(sub_82236144);
PPC_FUNC_IMPL(__imp__sub_82236144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82236148"))) PPC_WEAK_FUNC(sub_82236148);
PPC_FUNC_IMPL(__imp__sub_82236148) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223615c
	if (!ctx.cr6.eq) goto loc_8223615C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8223615C:
	// addi r11,r4,59
	ctx.r11.s64 = ctx.r4.s64 + 59;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223616C"))) PPC_WEAK_FUNC(sub_8223616C);
PPC_FUNC_IMPL(__imp__sub_8223616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82236170"))) PPC_WEAK_FUNC(sub_82236170);
PPC_FUNC_IMPL(__imp__sub_82236170) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822361b4
	if (ctx.cr6.eq) goto loc_822361B4;
	// lhz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822361b4
	if (ctx.cr6.eq) goto loc_822361B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82236194:
	// lhz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822361bc
	if (ctx.cr6.eq) goto loc_822361BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x82236194
	if (ctx.cr6.lt) goto loc_82236194;
loc_822361B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822361BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822361C4"))) PPC_WEAK_FUNC(sub_822361C4);
PPC_FUNC_IMPL(__imp__sub_822361C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822361C8"))) PPC_WEAK_FUNC(sub_822361C8);
PPC_FUNC_IMPL(__imp__sub_822361C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822361D0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82236218
	if (!ctx.cr6.eq) goto loc_82236218;
	// lwz r11,452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82236218
	if (!ctx.cr6.eq) goto loc_82236218;
	// lwz r11,456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82236218
	if (!ctx.cr6.eq) goto loc_82236218;
	// lwz r11,460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x822362ec
	if (ctx.cr6.eq) goto loc_822362EC;
loc_82236218:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// li r4,6144
	ctx.r4.s64 = 6144;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// addi r3,r31,468
	ctx.r3.s64 = ctx.r31.s64 + 468;
	// stw r28,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r28.u32);
	// stw r28,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r28.u32);
	// bl 0x822aa648
	ctx.lr = 0x8223623C;
	sub_822AA648(ctx, base);
	// mulli r11,r30,11
	ctx.r11.s64 = ctx.r30.s64 * 11;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822362ec
	if (ctx.cr6.eq) goto loc_822362EC;
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r29,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r26,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r26.u32);
	// stw r27,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r27.u32);
	// beq cr6,0x822362ec
	if (ctx.cr6.eq) goto loc_822362EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_82236288:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223629c
	if (ctx.cr6.eq) goto loc_8223629C;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_8223629C:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x822362b0
	if (ctx.cr6.eq) goto loc_822362B0;
	// lbz r11,43(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 43);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822362e0
	if (ctx.cr6.eq) goto loc_822362E0;
loc_822362B0:
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,468(r6)
	PPC_STORE_U32(ctx.r6.u32 + 468, ctx.r9.u32);
	// lhz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// addi r4,r11,59
	ctx.r4.s64 = ctx.r11.s64 + 59;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r5,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
loc_822362E0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,60
	ctx.r8.s64 = ctx.r8.s64 + 60;
	// bdnz 0x82236288
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82236288;
loc_822362EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822362F4"))) PPC_WEAK_FUNC(sub_822362F4);
PPC_FUNC_IMPL(__imp__sub_822362F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822362F8"))) PPC_WEAK_FUNC(sub_822362F8);
PPC_FUNC_IMPL(__imp__sub_822362F8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82236170
	sub_82236170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223631C"))) PPC_WEAK_FUNC(sub_8223631C);
PPC_FUNC_IMPL(__imp__sub_8223631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82236320"))) PPC_WEAK_FUNC(sub_82236320);
PPC_FUNC_IMPL(__imp__sub_82236320) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mulli r10,r6,60
	ctx.r10.s64 = ctx.r6.s64 * 60;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82236360"))) PPC_WEAK_FUNC(sub_82236360);
PPC_FUNC_IMPL(__imp__sub_82236360) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822363bc
	if (ctx.cr6.eq) goto loc_822363BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8223639C:
	// lhz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x8223639c
	if (ctx.cr6.lt) goto loc_8223639C;
loc_822363BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822363C4"))) PPC_WEAK_FUNC(sub_822363C4);
PPC_FUNC_IMPL(__imp__sub_822363C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822363C8"))) PPC_WEAK_FUNC(sub_822363C8);
PPC_FUNC_IMPL(__imp__sub_822363C8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822363E0"))) PPC_WEAK_FUNC(sub_822363E0);
PPC_FUNC_IMPL(__imp__sub_822363E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// mulli r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 * 11;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82236444
	if (ctx.cr6.eq) goto loc_82236444;
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82236440
	if (ctx.cr6.eq) goto loc_82236440;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82236420:
	// lhz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82236444
	if (ctx.cr6.eq) goto loc_82236444;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x82236420
	if (ctx.cr6.lt) goto loc_82236420;
loc_82236440:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82236444:
	// addi r11,r6,34
	ctx.r11.s64 = ctx.r6.s64 + 34;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82236464
	if (!ctx.cr6.eq) goto loc_82236464;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82236464:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82236478"))) PPC_WEAK_FUNC(sub_82236478);
PPC_FUNC_IMPL(__imp__sub_82236478) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822364d8
	if (ctx.cr6.eq) goto loc_822364D8;
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822364d4
	if (ctx.cr6.eq) goto loc_822364D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_822364B4:
	// lhz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822364d8
	if (ctx.cr6.eq) goto loc_822364D8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x822364b4
	if (ctx.cr6.lt) goto loc_822364B4;
loc_822364D4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822364D8:
	// addi r11,r5,34
	ctx.r11.s64 = ctx.r5.s64 + 34;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822364f8
	if (!ctx.cr6.eq) goto loc_822364F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822364F8:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223650C"))) PPC_WEAK_FUNC(sub_8223650C);
PPC_FUNC_IMPL(__imp__sub_8223650C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82236510"))) PPC_WEAK_FUNC(sub_82236510);
PPC_FUNC_IMPL(__imp__sub_82236510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,452(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82236580
	if (ctx.cr6.eq) goto loc_82236580;
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82236580
	if (ctx.cr6.eq) goto loc_82236580;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82236560:
	// lhz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822365c4
	if (ctx.cr6.eq) goto loc_822365C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x82236560
	if (ctx.cr6.lt) goto loc_82236560;
loc_82236580:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82236584:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c6780
	ctx.lr = 0x82236598;
	sub_820C6780(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822365ac
	if (ctx.cr6.lt) goto loc_822365AC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822365cc
	if (ctx.cr6.lt) goto loc_822365CC;
loc_822365AC:
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
loc_822365C4:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x82236584
	goto loc_82236584;
loc_822365CC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 * 196;
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

__attribute__((alias("__imp__sub_822365EC"))) PPC_WEAK_FUNC(sub_822365EC);
PPC_FUNC_IMPL(__imp__sub_822365EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822365F0"))) PPC_WEAK_FUNC(sub_822365F0);
PPC_FUNC_IMPL(__imp__sub_822365F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223665c
	if (ctx.cr6.eq) goto loc_8223665C;
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8223665c
	if (ctx.cr6.eq) goto loc_8223665C;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8223663C:
	// lhz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8223669c
	if (ctx.cr6.eq) goto loc_8223669C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x8223663c
	if (ctx.cr6.lt) goto loc_8223663C;
loc_8223665C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82236660:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c6780
	ctx.lr = 0x82236670;
	sub_820C6780(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82236684
	if (ctx.cr6.lt) goto loc_82236684;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822366a4
	if (ctx.cr6.lt) goto loc_822366A4;
loc_82236684:
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
loc_8223669C:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x82236660
	goto loc_82236660;
loc_822366A4:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 * 196;
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

__attribute__((alias("__imp__sub_822366C4"))) PPC_WEAK_FUNC(sub_822366C4);
PPC_FUNC_IMPL(__imp__sub_822366C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822366C8"))) PPC_WEAK_FUNC(sub_822366C8);
PPC_FUNC_IMPL(__imp__sub_822366C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82236718
	if (ctx.cr6.eq) goto loc_82236718;
	// lhz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8223670c
	if (ctx.cr6.eq) goto loc_8223670C;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_822366EC:
	// lhz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82236710
	if (ctx.cr6.eq) goto loc_82236710;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x822366ec
	if (ctx.cr6.lt) goto loc_822366EC;
loc_8223670C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82236710:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82236720
	if (!ctx.cr6.eq) goto loc_82236720;
loc_82236718:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82236720:
	// mulli r11,r10,60
	ctx.r11.s64 = ctx.r10.s64 * 60;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223672C"))) PPC_WEAK_FUNC(sub_8223672C);
PPC_FUNC_IMPL(__imp__sub_8223672C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82236730"))) PPC_WEAK_FUNC(sub_82236730);
PPC_FUNC_IMPL(__imp__sub_82236730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82236738;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r28,21
	ctx.r28.s64 = 21;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
loc_82236754:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x82236764;
	sub_822AA648(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bge 0x82236754
	if (!ctx.cr0.lt) goto loc_82236754;
	// addi r29,r31,272
	ctx.r29.s64 = ctx.r31.s64 + 272;
	// li r28,21
	ctx.r28.s64 = 21;
loc_82236778:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x82236788;
	sub_822AA648(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bge 0x82236778
	if (!ctx.cr0.lt) goto loc_82236778;
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// addi r28,r31,6612
	ctx.r28.s64 = ctx.r31.s64 + 6612;
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// li r29,5
	ctx.r29.s64 = 5;
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
loc_822367AC:
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822aa648
	ctx.lr = 0x822367B8;
	sub_822AA648(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// bge 0x822367ac
	if (!ctx.cr0.lt) goto loc_822367AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// li r4,6144
	ctx.r4.s64 = 6144;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// addi r3,r31,468
	ctx.r3.s64 = ctx.r31.s64 + 468;
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x822367E8;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822367F4"))) PPC_WEAK_FUNC(sub_822367F4);
PPC_FUNC_IMPL(__imp__sub_822367F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822367F8"))) PPC_WEAK_FUNC(sub_822367F8);
PPC_FUNC_IMPL(__imp__sub_822367F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82236800;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82183e40
	ctx.lr = 0x82236814;
	sub_82183E40(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// li r4,6144
	ctx.r4.s64 = 6144;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// addi r3,r31,468
	ctx.r3.s64 = ctx.r31.s64 + 468;
	// stw r28,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r28.u32);
	// addi r30,r31,448
	ctx.r30.s64 = ctx.r31.s64 + 448;
	// stw r28,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r28.u32);
	// bl 0x822aa648
	ctx.lr = 0x8223683C;
	sub_822AA648(ctx, base);
	// li r29,21
	ctx.r29.s64 = 21;
loc_82236840:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x82236850;
	sub_822AA648(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82236864
	if (ctx.cr6.eq) goto loc_82236864;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82236864;
	sub_82183E40(ctx, base);
loc_82236864:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// bge 0x82236840
	if (!ctx.cr0.lt) goto loc_82236840;
	// addi r31,r31,272
	ctx.r31.s64 = ctx.r31.s64 + 272;
	// li r30,21
	ctx.r30.s64 = 21;
loc_82236878:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82236888;
	sub_822AA648(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223689c
	if (ctx.cr6.eq) goto loc_8223689C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8223689C;
	sub_82183E40(ctx, base);
loc_8223689C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bge 0x82236878
	if (!ctx.cr0.lt) goto loc_82236878;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822368B0"))) PPC_WEAK_FUNC(sub_822368B0);
PPC_FUNC_IMPL(__imp__sub_822368B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x822366c8
	sub_822366C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822368D8"))) PPC_WEAK_FUNC(sub_822368D8);
PPC_FUNC_IMPL(__imp__sub_822368D8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x822366c8
	sub_822366C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822368FC"))) PPC_WEAK_FUNC(sub_822368FC);
PPC_FUNC_IMPL(__imp__sub_822368FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82236900"))) PPC_WEAK_FUNC(sub_82236900);
PPC_FUNC_IMPL(__imp__sub_82236900) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,13(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lbz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r11,r3,22
	ctx.r11.s64 = ctx.r3.s64 + 22;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// addi r11,r3,14
	ctx.r11.s64 = ctx.r3.s64 + 14;
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// addi r11,r3,26
	ctx.r11.s64 = ctx.r3.s64 + 26;
	// sth r8,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r8.u16);
	// lbz r6,14(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r7,15(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r5,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r5.u16);
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r4,17(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// lbz r8,18(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// lbz r9,19(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r7.u16);
	// lbz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r6,21(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// lhz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r4,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r4.u16);
	// lbz r10,22(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r9,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r9.u16);
	// lbz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// lbz r8,25(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r6,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r6.u16);
	// lbz r4,26(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// lbz r5,27(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// stb r5,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r5.u8);
	// stb r4,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r4.u8);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r11,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822369E4"))) PPC_WEAK_FUNC(sub_822369E4);
PPC_FUNC_IMPL(__imp__sub_822369E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822369E8"))) PPC_WEAK_FUNC(sub_822369E8);
PPC_FUNC_IMPL(__imp__sub_822369E8) {
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
	// bl 0x82236900
	ctx.lr = 0x82236A00;
	sub_82236900(ctx, base);
	// addi r11,r31,46
	ctx.r11.s64 = ctx.r31.s64 + 46;
	// lbz r10,46(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r11,r31,50
	ctx.r11.s64 = ctx.r31.s64 + 50;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lbz r11,47(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r9,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r9.u16);
	// lbz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// lbz r8,49(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r6,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r6.u16);
	// lbz r4,50(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// lbz r5,51(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r3,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r3.u16);
	// lbz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// lbz r9,55(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 55);
	// lbz r8,54(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 54);
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// lbz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// lbz r4,59(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 59);
	// lbz r3,58(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 58);
	// lbz r6,57(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// stb r5,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82236AC0"))) PPC_WEAK_FUNC(sub_82236AC0);
PPC_FUNC_IMPL(__imp__sub_82236AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821847a8
	ctx.lr = 0x82236AF0;
	sub_821847A8(ctx, base);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82236B24"))) PPC_WEAK_FUNC(sub_82236B24);
PPC_FUNC_IMPL(__imp__sub_82236B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82236B28"))) PPC_WEAK_FUNC(sub_82236B28);
PPC_FUNC_IMPL(__imp__sub_82236B28) {
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
	ctx.lr = 0x82236B38;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82236b50
	if (ctx.cr6.eq) goto loc_82236B50;
	// li r3,6852
	ctx.r3.s64 = 6852;
	// bl 0x82183448
	ctx.lr = 0x82236B4C;
	sub_82183448(ctx, base);
	// b 0x82236b58
	goto loc_82236B58;
loc_82236B50:
	// li r3,429
	ctx.r3.s64 = 429;
	// bl 0x821845a0
	ctx.lr = 0x82236B58;
	sub_821845A0(ctx, base);
loc_82236B58:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82236b7c
	if (ctx.cr6.eq) goto loc_82236B7C;
	// bl 0x82236730
	ctx.lr = 0x82236B64;
	sub_82236730(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,1124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82236B7C:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1124, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82236B98"))) PPC_WEAK_FUNC(sub_82236B98);
PPC_FUNC_IMPL(__imp__sub_82236B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82236BA0;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82236d40
	if (ctx.cr6.eq) goto loc_82236D40;
	// bl 0x82183078
	ctx.lr = 0x82236BB8;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82236BC4;
	sub_821837D0(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lhz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// mulli r26,r30,60
	ctx.r26.s64 = ctx.r30.s64 * 60;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82236c48
	if (!ctx.cr6.gt) goto loc_82236C48;
	// bl 0x82183850
	ctx.lr = 0x82236BE8;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82236BF4;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82236BFC;
	sub_821830F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82080d68
	ctx.lr = 0x82236C04;
	sub_82080D68(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x821847a8
	ctx.lr = 0x82236C14;
	sub_821847A8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82236c28
	if (ctx.cr6.eq) goto loc_82236C28;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82236C28;
	sub_82183E40(ctx, base);
loc_82236C28:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82236c40
	if (ctx.cr6.lt) goto loc_82236C40;
	// bne cr6,0x82236c48
	if (!ctx.cr6.eq) goto loc_82236C48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82236c44
	goto loc_82236C44;
loc_82236C40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82236C44:
	// bl 0x821830f8
	ctx.lr = 0x82236C48;
	sub_821830F8(ctx, base);
loc_82236C48:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82236ac0
	ctx.lr = 0x82236C54;
	sub_82236AC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x82236ac0
	ctx.lr = 0x82236C60;
	sub_82236AC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82236ac0
	ctx.lr = 0x82236C6C;
	sub_82236AC0(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821847a8
	ctx.lr = 0x82236C84;
	sub_821847A8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// addi r27,r29,1
	ctx.r27.s64 = ctx.r29.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// bl 0x821847a8
	ctx.lr = 0x82236CA4;
	sub_821847A8(ctx, base);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// mulli r29,r8,60
	ctx.r29.s64 = ctx.r8.s64 * 60;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82236d04
	if (!ctx.cr6.gt) goto loc_82236D04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82080d68
	ctx.lr = 0x82236CD0;
	sub_82080D68(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821847a8
	ctx.lr = 0x82236CE0;
	sub_821847A8(ctx, base);
	// subf r5,r26,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r26.s64;
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// add r3,r28,r26
	ctx.r3.u64 = ctx.r28.u64 + ctx.r26.u64;
	// bl 0x821847a8
	ctx.lr = 0x82236CF0;
	sub_821847A8(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82236d04
	if (ctx.cr6.eq) goto loc_82236D04;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82183e40
	ctx.lr = 0x82236D04;
	sub_82183E40(ctx, base);
loc_82236D04:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82236d38
	if (!ctx.cr6.lt) goto loc_82236D38;
	// mulli r29,r30,60
	ctx.r29.s64 = ctx.r30.s64 * 60;
loc_82236D18:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822369e8
	ctx.lr = 0x82236D24;
	sub_822369E8(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82236d18
	if (ctx.cr6.lt) goto loc_82236D18;
loc_82236D38:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x82236D40;
	sub_821837D0(ctx, base);
loc_82236D40:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82236D48"))) PPC_WEAK_FUNC(sub_82236D48);
PPC_FUNC_IMPL(__imp__sub_82236D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82236D50;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82236eb4
	if (ctx.cr6.eq) goto loc_82236EB4;
	// bl 0x82183078
	ctx.lr = 0x82236D68;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82236D74;
	sub_821837D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rotlwi r11,r30,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// rlwinm r28,r10,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82236e04
	if (!ctx.cr6.gt) goto loc_82236E04;
	// bl 0x82183850
	ctx.lr = 0x82236DA0;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82236DAC;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82236DB4;
	sub_821830F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82080d68
	ctx.lr = 0x82236DBC;
	sub_82080D68(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x821847a8
	ctx.lr = 0x82236DCC;
	sub_821847A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82236de0
	if (ctx.cr6.eq) goto loc_82236DE0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82236DE0;
	sub_82183E40(ctx, base);
loc_82236DE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x82236dfc
	if (ctx.cr6.lt) goto loc_82236DFC;
	// bne cr6,0x82236e04
	if (!ctx.cr6.eq) goto loc_82236E04;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82236e00
	goto loc_82236E00;
loc_82236DFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82236E00:
	// bl 0x821830f8
	ctx.lr = 0x82236E04;
	sub_821830F8(ctx, base);
loc_82236E04:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82236ac0
	ctx.lr = 0x82236E10;
	sub_82236AC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x82236ac0
	ctx.lr = 0x82236E1C;
	sub_82236AC0(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r11,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82236e88
	if (!ctx.cr6.gt) goto loc_82236E88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82080d68
	ctx.lr = 0x82236E54;
	sub_82080D68(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821847a8
	ctx.lr = 0x82236E64;
	sub_821847A8(ctx, base);
	// subf r5,r28,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r28.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x821847a8
	ctx.lr = 0x82236E74;
	sub_821847A8(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82236e88
	if (ctx.cr6.eq) goto loc_82236E88;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82183e40
	ctx.lr = 0x82236E88;
	sub_82183E40(ctx, base);
loc_82236E88:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82236eac
	if (!ctx.cr6.lt) goto loc_82236EAC;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_82236EA0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82236ea0
	if (ctx.cr6.lt) goto loc_82236EA0;
loc_82236EAC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x82236EB4;
	sub_821837D0(ctx, base);
loc_82236EB4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82236EBC"))) PPC_WEAK_FUNC(sub_82236EBC);
PPC_FUNC_IMPL(__imp__sub_82236EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82236EC0"))) PPC_WEAK_FUNC(sub_82236EC0);
PPC_FUNC_IMPL(__imp__sub_82236EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82236EC8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82236f4c
	if (ctx.cr6.eq) goto loc_82236F4C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82236EE0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82236EE4:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x82236F00;
	sub_822AA648(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82236ee4
	if (ctx.cr6.lt) goto loc_82236EE4;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x82236ee0
	if (ctx.cr6.lt) goto loc_82236EE0;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
loc_82236F20:
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r29,-40
	ctx.r11.s64 = ctx.r29.s64 + -40;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82236F2C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lwzu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,80(r11)
	ea = 80 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82236f2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82236F2C;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82236f20
	if (!ctx.cr0.eq) goto loc_82236F20;
loc_82236F4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82236F54"))) PPC_WEAK_FUNC(sub_82236F54);
PPC_FUNC_IMPL(__imp__sub_82236F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82236F58"))) PPC_WEAK_FUNC(sub_82236F58);
PPC_FUNC_IMPL(__imp__sub_82236F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82236F60;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82236F74;
	sub_82183078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82236F80;
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
	ctx.lr = 0x82236F94;
	sub_8218AA18(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r25,-32187
	ctx.r25.s64 = -2109407232;
	// lis r24,-32178
	ctx.r24.s64 = -2108817408;
	// lis r28,-32187
	ctx.r28.s64 = -2109407232;
loc_82236FA8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82236FAC:
	// lwz r11,10740(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10740);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,1120(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1120);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8218a810
	ctx.lr = 0x82236FCC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223702c
	if (ctx.cr6.eq) goto loc_8223702C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82236FE0;
	sub_8218AB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223702c
	if (ctx.cr6.eq) goto loc_8223702C;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82236FF8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223700c
	if (ctx.cr6.eq) goto loc_8223700C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x8223700C;
	sub_8218AC78(ctx, base);
loc_8223700C:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82236b98
	ctx.lr = 0x8223702C;
	sub_82236B98(ctx, base);
loc_8223702C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x82236fac
	if (ctx.cr6.lt) goto loc_82236FAC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8223703C:
	// lwz r11,10740(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10740);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,10744(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10744);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8218a810
	ctx.lr = 0x8223705C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82237090
	if (ctx.cr6.eq) goto loc_82237090;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82237070;
	sub_8218AB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82237090
	if (ctx.cr6.eq) goto loc_82237090;
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82236d48
	ctx.lr = 0x82237090;
	sub_82236D48(ctx, base);
loc_82237090:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x8223703c
	if (ctx.cr6.lt) goto loc_8223703C;
	// addi r27,r27,11
	ctx.r27.s64 = ctx.r27.s64 + 11;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r27,22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 22, ctx.xer);
	// blt cr6,0x82236fa8
	if (ctx.cr6.lt) goto loc_82236FA8;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,10748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10748);
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x822370C4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223711c
	if (ctx.cr6.eq) goto loc_8223711C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x822370D8;
	sub_8218AB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223711c
	if (ctx.cr6.eq) goto loc_8223711C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x822370F0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223710c
	if (ctx.cr6.eq) goto loc_8223710C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218abc0
	ctx.lr = 0x82237104;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82237110
	goto loc_82237110;
loc_8223710C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82237110:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r26,6612
	ctx.r3.s64 = ctx.r26.s64 + 6612;
	// bl 0x82236ec0
	ctx.lr = 0x8223711C;
	sub_82236EC0(ctx, base);
loc_8223711C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x82237124;
	sub_8218A7F0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223712C;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82237134"))) PPC_WEAK_FUNC(sub_82237134);
PPC_FUNC_IMPL(__imp__sub_82237134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237138"))) PPC_WEAK_FUNC(sub_82237138);
PPC_FUNC_IMPL(__imp__sub_82237138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82237140;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82237158:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8223715C:
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82237180;
	sub_822AA648(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82237194
	if (ctx.cr6.eq) goto loc_82237194;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82237194;
	sub_82183E40(ctx, base);
loc_82237194:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// blt cr6,0x8223715c
	if (ctx.cr6.lt) goto loc_8223715C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r27,34
	ctx.r29.s64 = ctx.r27.s64 + 34;
loc_822371AC:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x822371C4;
	sub_822AA648(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822371d8
	if (ctx.cr6.eq) goto loc_822371D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x822371D8;
	sub_82183E40(ctx, base);
loc_822371D8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// blt cr6,0x822371ac
	if (ctx.cr6.lt) goto loc_822371AC;
	// addi r27,r27,11
	ctx.r27.s64 = ctx.r27.s64 + 11;
	// cmplwi cr6,r27,22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 22, ctx.xer);
	// blt cr6,0x82237158
	if (ctx.cr6.lt) goto loc_82237158;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x82237208;
	sub_8218AA18(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82237264
	if (!ctx.cr6.eq) goto loc_82237264;
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
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82237268
	goto loc_82237268;
loc_82237264:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82237268:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822372ac
	if (ctx.cr6.eq) goto loc_822372AC;
loc_82237274:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218abc0
	ctx.lr = 0x82237280;
	sub_8218ABC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ab00
	ctx.lr = 0x82237290;
	sub_8218AB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82236f58
	ctx.lr = 0x822372A0;
	sub_82236F58(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82237274
	if (ctx.cr6.lt) goto loc_82237274;
loc_822372AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8218a7f0
	ctx.lr = 0x822372BC;
	sub_8218A7F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_822372C4"))) PPC_WEAK_FUNC(sub_822372C4);
PPC_FUNC_IMPL(__imp__sub_822372C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822372C8"))) PPC_WEAK_FUNC(sub_822372C8);
PPC_FUNC_IMPL(__imp__sub_822372C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822372D0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x822372E0;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x822372EC;
	sub_821837D0(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,1124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82237304
	if (!ctx.cr6.eq) goto loc_82237304;
	// bl 0x82236b28
	ctx.lr = 0x82237300;
	sub_82236B28(ctx, base);
	// lwz r3,1124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1124);
loc_82237304:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82237138
	ctx.lr = 0x82237310;
	sub_82237138(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82237318;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82237320"))) PPC_WEAK_FUNC(sub_82237320);
PPC_FUNC_IMPL(__imp__sub_82237320) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,500(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82237328"))) PPC_WEAK_FUNC(sub_82237328);
PPC_FUNC_IMPL(__imp__sub_82237328) {
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
	// bl 0x8223a990
	ctx.lr = 0x82237338;
	sub_8223A990(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82237358
	if (ctx.cr6.eq) goto loc_82237358;
	// bl 0x8223a990
	ctx.lr = 0x82237344;
	sub_8223A990(ctx, base);
	// bl 0x82243fe0
	ctx.lr = 0x82237348;
	sub_82243FE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82237358:
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

__attribute__((alias("__imp__sub_8223736C"))) PPC_WEAK_FUNC(sub_8223736C);
PPC_FUNC_IMPL(__imp__sub_8223736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237370"))) PPC_WEAK_FUNC(sub_82237370);
PPC_FUNC_IMPL(__imp__sub_82237370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82237378;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82239740
	ctx.lr = 0x8223739C;
	sub_82239740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82239dc0
	ctx.lr = 0x822373A8;
	sub_82239DC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8223a0f0
	ctx.lr = 0x822373B8;
	sub_8223A0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822394a8
	ctx.lr = 0x822373C4;
	sub_822394A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82239490
	ctx.lr = 0x822373D0;
	sub_82239490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82239488
	ctx.lr = 0x822373DC;
	sub_82239488(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239de8
	ctx.lr = 0x822373E8;
	sub_82239DE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822373F0"))) PPC_WEAK_FUNC(sub_822373F0);
PPC_FUNC_IMPL(__imp__sub_822373F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x822373F8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82237494
	if (!ctx.cr6.gt) goto loc_82237494;
	// add r25,r4,r5
	ctx.r25.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmpwi cr6,r25,10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 10, ctx.xer);
	// bgt cr6,0x82237460
	if (ctx.cr6.gt) goto loc_82237460;
	// subfic r11,r5,26
	ctx.xer.ca = ctx.r5.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r5.s64;
	// addi r31,r3,104
	ctx.r31.s64 = ctx.r3.s64 + 104;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r29,r25,11
	ctx.xer.ca = ctx.r25.u32 <= 11;
	ctx.r29.s64 = 11 - ctx.r25.s64;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82237430:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x8223e9d8
	ctx.lr = 0x82237438;
	sub_8223E9D8(ctx, base);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x8223e8d8
	ctx.lr = 0x82237440;
	sub_8223E8D8(ctx, base);
	// lwzu r3,-4(r31)
	ea = -4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x8223e6e8
	ctx.lr = 0x8223744C;
	sub_8223E6E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzu r3,-4(r30)
	ea = -4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8223dda0
	ctx.lr = 0x82237458;
	sub_8223DDA0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82237430
	if (!ctx.cr0.eq) goto loc_82237430;
loc_82237460:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82237530
	if (!ctx.cr6.lt) goto loc_82237530;
	// addi r11,r26,14
	ctx.r11.s64 = ctx.r26.s64 + 14;
	// subf r31,r26,r25
	ctx.r31.s64 = ctx.r25.s64 - ctx.r26.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82237478:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8223dda0
	ctx.lr = 0x82237484;
	sub_8223DDA0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82237478
	if (!ctx.cr0.eq) goto loc_82237478;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82237494:
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bge cr6,0x82237500
	if (!ctx.cr6.lt) goto loc_82237500;
	// addi r11,r26,15
	ctx.r11.s64 = ctx.r26.s64 + 15;
	// addi r26,r27,15
	ctx.r26.s64 = ctx.r27.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_822374B4:
	// add r11,r26,r30
	ctx.r11.u64 = ctx.r26.u64 + ctx.r30.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x8223e9d8
	ctx.lr = 0x822374C4;
	sub_8223E9D8(ctx, base);
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x8223e8d8
	ctx.lr = 0x822374CC;
	sub_8223E8D8(ctx, base);
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// bge cr6,0x822374ec
	if (!ctx.cr6.lt) goto loc_822374EC;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x8223e6e8
	ctx.lr = 0x822374E0;
	sub_8223E6E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8223dda0
	ctx.lr = 0x822374EC;
	sub_8223DDA0(ctx, base);
loc_822374EC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// blt cr6,0x822374b4
	if (ctx.cr6.lt) goto loc_822374B4;
loc_82237500:
	// addi r11,r27,11
	ctx.r11.s64 = ctx.r27.s64 + 11;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bge cr6,0x82237530
	if (!ctx.cr6.lt) goto loc_82237530;
	// addi r10,r11,14
	ctx.r10.s64 = ctx.r11.s64 + 14;
	// subfic r31,r11,11
	ctx.xer.ca = ctx.r11.u32 <= 11;
	ctx.r31.s64 = 11 - ctx.r11.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_8223751C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8223dda0
	ctx.lr = 0x82237528;
	sub_8223DDA0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8223751c
	if (!ctx.cr0.eq) goto loc_8223751C;
loc_82237530:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82237538"))) PPC_WEAK_FUNC(sub_82237538);
PPC_FUNC_IMPL(__imp__sub_82237538) {
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
	// bl 0x82234540
	ctx.lr = 0x82237548;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x8223754C;
	sub_82345178(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223755C"))) PPC_WEAK_FUNC(sub_8223755C);
PPC_FUNC_IMPL(__imp__sub_8223755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237560"))) PPC_WEAK_FUNC(sub_82237560);
PPC_FUNC_IMPL(__imp__sub_82237560) {
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82237588"))) PPC_WEAK_FUNC(sub_82237588);
PPC_FUNC_IMPL(__imp__sub_82237588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822375BC:
	// stw r31,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r31.u32);
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stwu r31,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822375bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822375BC;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x822aa648
	ctx.lr = 0x822375E0;
	sub_822AA648(ctx, base);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// stw r31,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r31.u32);
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82237610"))) PPC_WEAK_FUNC(sub_82237610);
PPC_FUNC_IMPL(__imp__sub_82237610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82234540
	ctx.lr = 0x82237630;
	sub_82234540(ctx, base);
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82237668
	if (!ctx.cr6.eq) goto loc_82237668;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223db68
	ctx.lr = 0x8223764C;
	sub_8223DB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82237670
	if (ctx.cr6.eq) goto loc_82237670;
	// bl 0x8223db78
	ctx.lr = 0x82237660;
	sub_8223DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82237680
	if (!ctx.cr6.eq) goto loc_82237680;
loc_82237668:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822376a4
	goto loc_822376A4;
loc_82237670:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8223ead8
	ctx.lr = 0x82237678;
	sub_8223EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82237668
	if (!ctx.cr6.eq) goto loc_82237668;
loc_82237680:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223e580
	ctx.lr = 0x82237688;
	sub_8223E580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82237698
	if (ctx.cr6.eq) goto loc_82237698;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
loc_82237698:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
loc_822376A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822376BC"))) PPC_WEAK_FUNC(sub_822376BC);
PPC_FUNC_IMPL(__imp__sub_822376BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822376C0"))) PPC_WEAK_FUNC(sub_822376C0);
PPC_FUNC_IMPL(__imp__sub_822376C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82234540
	ctx.lr = 0x822376E0;
	sub_82234540(ctx, base);
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82237718
	if (!ctx.cr6.eq) goto loc_82237718;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223db68
	ctx.lr = 0x822376FC;
	sub_8223DB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82237720
	if (ctx.cr6.eq) goto loc_82237720;
	// bl 0x8223db78
	ctx.lr = 0x82237710;
	sub_8223DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82237730
	if (!ctx.cr6.eq) goto loc_82237730;
loc_82237718:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223773c
	goto loc_8223773C;
loc_82237720:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8223ead8
	ctx.lr = 0x82237728;
	sub_8223EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82237718
	if (!ctx.cr6.eq) goto loc_82237718;
loc_82237730:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
loc_8223773C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82237754"))) PPC_WEAK_FUNC(sub_82237754);
PPC_FUNC_IMPL(__imp__sub_82237754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237758"))) PPC_WEAK_FUNC(sub_82237758);
PPC_FUNC_IMPL(__imp__sub_82237758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82234540
	ctx.lr = 0x82237778;
	sub_82234540(ctx, base);
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822377b0
	if (!ctx.cr6.eq) goto loc_822377B0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8223db68
	ctx.lr = 0x82237794;
	sub_8223DB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x822377b8
	if (ctx.cr6.eq) goto loc_822377B8;
	// bl 0x8223db78
	ctx.lr = 0x822377A8;
	sub_8223DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822377c8
	if (!ctx.cr6.eq) goto loc_822377C8;
loc_822377B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822377d4
	goto loc_822377D4;
loc_822377B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8223ead8
	ctx.lr = 0x822377C0;
	sub_8223EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822377b0
	if (!ctx.cr6.eq) goto loc_822377B0;
loc_822377C8:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
loc_822377D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822377EC"))) PPC_WEAK_FUNC(sub_822377EC);
PPC_FUNC_IMPL(__imp__sub_822377EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822377F0"))) PPC_WEAK_FUNC(sub_822377F0);
PPC_FUNC_IMPL(__imp__sub_822377F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82234540
	ctx.lr = 0x82237810;
	sub_82234540(ctx, base);
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82237848
	if (!ctx.cr6.eq) goto loc_82237848;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8223db68
	ctx.lr = 0x8223782C;
	sub_8223DB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82237850
	if (ctx.cr6.eq) goto loc_82237850;
	// bl 0x8223db78
	ctx.lr = 0x82237840;
	sub_8223DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82237860
	if (!ctx.cr6.eq) goto loc_82237860;
loc_82237848:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223786c
	goto loc_8223786C;
loc_82237850:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8223ead8
	ctx.lr = 0x82237858;
	sub_8223EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82237848
	if (!ctx.cr6.eq) goto loc_82237848;
loc_82237860:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
loc_8223786C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82237884"))) PPC_WEAK_FUNC(sub_82237884);
PPC_FUNC_IMPL(__imp__sub_82237884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237888"))) PPC_WEAK_FUNC(sub_82237888);
PPC_FUNC_IMPL(__imp__sub_82237888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82234540
	ctx.lr = 0x822378A8;
	sub_82234540(ctx, base);
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822378e0
	if (!ctx.cr6.eq) goto loc_822378E0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8223db68
	ctx.lr = 0x822378C4;
	sub_8223DB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x822378e8
	if (ctx.cr6.eq) goto loc_822378E8;
	// bl 0x8223db78
	ctx.lr = 0x822378D8;
	sub_8223DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822378f8
	if (!ctx.cr6.eq) goto loc_822378F8;
loc_822378E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82237904
	goto loc_82237904;
loc_822378E8:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x8223ead8
	ctx.lr = 0x822378F0;
	sub_8223EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822378e0
	if (!ctx.cr6.eq) goto loc_822378E0;
loc_822378F8:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
loc_82237904:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223791C"))) PPC_WEAK_FUNC(sub_8223791C);
PPC_FUNC_IMPL(__imp__sub_8223791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237920"))) PPC_WEAK_FUNC(sub_82237920);
PPC_FUNC_IMPL(__imp__sub_82237920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82234540
	ctx.lr = 0x82237940;
	sub_82234540(ctx, base);
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82237978
	if (!ctx.cr6.eq) goto loc_82237978;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8223db68
	ctx.lr = 0x8223795C;
	sub_8223DB68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82237980
	if (ctx.cr6.eq) goto loc_82237980;
	// bl 0x8223db78
	ctx.lr = 0x82237970;
	sub_8223DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82237990
	if (!ctx.cr6.eq) goto loc_82237990;
loc_82237978:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223799c
	goto loc_8223799C;
loc_82237980:
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x8223ead8
	ctx.lr = 0x82237988;
	sub_8223EAD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82237978
	if (!ctx.cr6.eq) goto loc_82237978;
loc_82237990:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
loc_8223799C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822379B4"))) PPC_WEAK_FUNC(sub_822379B4);
PPC_FUNC_IMPL(__imp__sub_822379B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822379B8"))) PPC_WEAK_FUNC(sub_822379B8);
PPC_FUNC_IMPL(__imp__sub_822379B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82234540
	ctx.lr = 0x822379D8;
	sub_82234540(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82345178
	ctx.lr = 0x822379E0;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82237a00
	if (ctx.cr6.eq) goto loc_82237A00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234510
	ctx.lr = 0x822379F4;
	sub_82234510(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x822436c0
	ctx.lr = 0x82237A00;
	sub_822436C0(ctx, base);
loc_82237A00:
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82237a30
	if (!ctx.cr6.eq) goto loc_82237A30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82234540
	ctx.lr = 0x82237A18;
	sub_82234540(ctx, base);
	// bl 0x8223e8d8
	ctx.lr = 0x82237A1C;
	sub_8223E8D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82234540
	ctx.lr = 0x82237A28;
	sub_82234540(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223db88
	ctx.lr = 0x82237A30;
	sub_8223DB88(ctx, base);
loc_82237A30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82235108
	ctx.lr = 0x82237A38;
	sub_82235108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82237a48
	if (ctx.cr6.eq) goto loc_82237A48;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82237a64
	goto loc_82237A64;
loc_82237A48:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82237a60
	if (ctx.cr6.eq) goto loc_82237A60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
loc_82237A60:
	// li r11,12
	ctx.r11.s64 = 12;
loc_82237A64:
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82237A84"))) PPC_WEAK_FUNC(sub_82237A84);
PPC_FUNC_IMPL(__imp__sub_82237A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237A88"))) PPC_WEAK_FUNC(sub_82237A88);
PPC_FUNC_IMPL(__imp__sub_82237A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82237A90;
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
	// bl 0x82234528
	ctx.lr = 0x82237AA4;
	sub_82234528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82237AAC;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82237AB8;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82234510
	ctx.lr = 0x82237AC4;
	sub_82234510(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82241760
	ctx.lr = 0x82237ACC;
	sub_82241760(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82237AD0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82237ae8
	if (ctx.cr6.eq) goto loc_82237AE8;
	// li r3,4244
	ctx.r3.s64 = 4244;
	// bl 0x82183448
	ctx.lr = 0x82237AE4;
	sub_82183448(ctx, base);
	// b 0x82237af0
	goto loc_82237AF0;
loc_82237AE8:
	// li r3,266
	ctx.r3.s64 = 266;
	// bl 0x821845a0
	ctx.lr = 0x82237AF0;
	sub_821845A0(ctx, base);
loc_82237AF0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82237b1c
	if (ctx.cr6.eq) goto loc_82237B1C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82233ff0
	ctx.lr = 0x82237B08;
	sub_82233FF0(ctx, base);
	// stw r3,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82237B14;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82237B1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82237B2C;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82237B34"))) PPC_WEAK_FUNC(sub_82237B34);
PPC_FUNC_IMPL(__imp__sub_82237B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237B38"))) PPC_WEAK_FUNC(sub_82237B38);
PPC_FUNC_IMPL(__imp__sub_82237B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,3020(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3020, ctx.r11.u32);
	// stw r10,500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 500, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82237B4C"))) PPC_WEAK_FUNC(sub_82237B4C);
PPC_FUNC_IMPL(__imp__sub_82237B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237B50"))) PPC_WEAK_FUNC(sub_82237B50);
PPC_FUNC_IMPL(__imp__sub_82237B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r31,10
	ctx.r31.s64 = 10;
loc_82237B6C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82234540
	ctx.lr = 0x82237B78;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x82237B7C;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82237bb0
	if (ctx.cr6.eq) goto loc_82237BB0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x82237b6c
	if (ctx.cr6.lt) goto loc_82237B6C;
	// li r3,11
	ctx.r3.s64 = 11;
loc_82237B98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82237BB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82237b98
	goto loc_82237B98;
}

__attribute__((alias("__imp__sub_82237BB8"))) PPC_WEAK_FUNC(sub_82237BB8);
PPC_FUNC_IMPL(__imp__sub_82237BB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82237BD0"))) PPC_WEAK_FUNC(sub_82237BD0);
PPC_FUNC_IMPL(__imp__sub_82237BD0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,145
	ctx.r11.s64 = ctx.r4.s64 + 145;
	// lwz r10,508(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82237BE4"))) PPC_WEAK_FUNC(sub_82237BE4);
PPC_FUNC_IMPL(__imp__sub_82237BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237BE8"))) PPC_WEAK_FUNC(sub_82237BE8);
PPC_FUNC_IMPL(__imp__sub_82237BE8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,145
	ctx.r11.s64 = ctx.r4.s64 + 145;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r9,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82237BFC"))) PPC_WEAK_FUNC(sub_82237BFC);
PPC_FUNC_IMPL(__imp__sub_82237BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237C00"))) PPC_WEAK_FUNC(sub_82237C00);
PPC_FUNC_IMPL(__imp__sub_82237C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82237C08;
	sub_82248788(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8223a960
	ctx.lr = 0x82237C18;
	sub_8223A960(ctx, base);
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82345178
	ctx.lr = 0x82237C30;
	sub_82345178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r28,2(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// bl 0x822e6048
	ctx.lr = 0x82237C40;
	sub_822E6048(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x822361c8
	ctx.lr = 0x82237C58;
	sub_822361C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x82237C68;
	sub_822368B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82248a40
	ctx.lr = 0x82237C78;
	sub_82248A40(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82237C88:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82237c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82237C88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223dc10
	ctx.lr = 0x82237CA0;
	sub_8223DC10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x822363e0
	ctx.lr = 0x82237CB0;
	sub_822363E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223dc20
	ctx.lr = 0x82237CBC;
	sub_8223DC20(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82237CC4"))) PPC_WEAK_FUNC(sub_82237CC4);
PPC_FUNC_IMPL(__imp__sub_82237CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237CC8"))) PPC_WEAK_FUNC(sub_82237CC8);
PPC_FUNC_IMPL(__imp__sub_82237CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82237CD0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82237CE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82237CEC;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x82237CF0;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82237d0c
	if (ctx.cr6.eq) goto loc_82237D0C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x82237ce0
	if (ctx.cr6.lt) goto loc_82237CE0;
loc_82237D0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82237D18"))) PPC_WEAK_FUNC(sub_82237D18);
PPC_FUNC_IMPL(__imp__sub_82237D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82237D20;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82237D30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82234540
	ctx.lr = 0x82237D3C;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x82237D40;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82237d64
	if (ctx.cr6.eq) goto loc_82237D64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x82237d30
	if (ctx.cr6.lt) goto loc_82237D30;
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82237D64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82237D70"))) PPC_WEAK_FUNC(sub_82237D70);
PPC_FUNC_IMPL(__imp__sub_82237D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82237d18
	ctx.lr = 0x82237D88;
	sub_82237D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234540
	ctx.lr = 0x82237D94;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x82237D98;
	sub_82345178(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82237DAC"))) PPC_WEAK_FUNC(sub_82237DAC);
PPC_FUNC_IMPL(__imp__sub_82237DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237DB0"))) PPC_WEAK_FUNC(sub_82237DB0);
PPC_FUNC_IMPL(__imp__sub_82237DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82237DB8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82237d18
	ctx.lr = 0x82237DD0;
	sub_82237D18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// bne cr6,0x82237de8
	if (!ctx.cr6.eq) goto loc_82237DE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82237DE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82237E14:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82234540
	ctx.lr = 0x82237E20;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x82237E24;
	sub_82345178(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lbz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82237e4c
	if (ctx.cr6.eq) goto loc_82237E4C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82237E4C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82237e14
	if (ctx.cr6.lt) goto loc_82237E14;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82234540
	ctx.lr = 0x82237E68;
	sub_82234540(ctx, base);
	// bl 0x8223dbf8
	ctx.lr = 0x82237E6C;
	sub_8223DBF8(ctx, base);
	// lbz r11,41(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82237e90
	if (ctx.cr6.eq) goto loc_82237E90;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82237E90:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82237EAC"))) PPC_WEAK_FUNC(sub_82237EAC);
PPC_FUNC_IMPL(__imp__sub_82237EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237EB0"))) PPC_WEAK_FUNC(sub_82237EB0);
PPC_FUNC_IMPL(__imp__sub_82237EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82237EB8;
	sub_82248788(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82234540
	ctx.lr = 0x82237ECC;
	sub_82234540(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82345178
	ctx.lr = 0x82237ED4;
	sub_82345178(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x82248a40
	ctx.lr = 0x82237EE4;
	sub_82248A40(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821847c0
	ctx.lr = 0x82237EF4;
	sub_821847C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82237f60
	if (ctx.cr6.eq) goto loc_82237F60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223ee70
	ctx.lr = 0x82237F08;
	sub_8223EE70(ctx, base);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82237f1c
	if (!ctx.cr6.eq) goto loc_82237F1C;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
loc_82237F1C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82237f60
	if (ctx.cr6.eq) goto loc_82237F60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82345178
	ctx.lr = 0x82237F2C;
	sub_82345178(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821847c0
	ctx.lr = 0x82237F3C;
	sub_821847C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82237f60
	if (ctx.cr6.eq) goto loc_82237F60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223dba8
	ctx.lr = 0x82237F4C;
	sub_8223DBA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82237F60:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82237F68"))) PPC_WEAK_FUNC(sub_82237F68);
PPC_FUNC_IMPL(__imp__sub_82237F68) {
	PPC_FUNC_PROLOGUE();
	// b 0x82237eb0
	sub_82237EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82237F6C"))) PPC_WEAK_FUNC(sub_82237F6C);
PPC_FUNC_IMPL(__imp__sub_82237F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82237F70"))) PPC_WEAK_FUNC(sub_82237F70);
PPC_FUNC_IMPL(__imp__sub_82237F70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-480
	ctx.r3.s64 = ctx.r3.s64 + -480;
	// b 0x82238fa0
	sub_82238FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82237F78"))) PPC_WEAK_FUNC(sub_82237F78);
PPC_FUNC_IMPL(__imp__sub_82237F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82237F80;
	sub_82248780(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82234738
	ctx.lr = 0x82237F90;
	sub_82234738(ctx, base);
	// addi r27,r28,104
	ctx.r27.s64 = ctx.r28.s64 + 104;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r27,-4
	ctx.r29.s64 = ctx.r27.s64 + -4;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r30,r28,136
	ctx.r30.s64 = ctx.r28.s64 + 136;
loc_82237FA4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82234690
	ctx.lr = 0x82237FB8;
	sub_82234690(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x82237fa4
	if (ctx.cr6.lt) goto loc_82237FA4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822351a8
	ctx.lr = 0x82237FD0;
	sub_822351A8(ctx, base);
	// lwz r11,512(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82238018
	if (!ctx.cr6.eq) goto loc_82238018;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82237FE8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82238010
	if (!ctx.cr6.eq) goto loc_82238010;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x82237fe8
	if (ctx.cr6.lt) goto loc_82237FE8;
	// b 0x82238018
	goto loc_82238018;
loc_82238010:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,512(r28)
	PPC_STORE_U32(ctx.r28.u32 + 512, ctx.r11.u32);
loc_82238018:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// stw r10,496(r28)
	PPC_STORE_U32(ctx.r28.u32 + 496, ctx.r10.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r9,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r9.u32);
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// li r30,8
	ctx.r30.s64 = 8;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
loc_82238040:
	// stwu r26,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r29.u32 = ea;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82238050;
	sub_822AA648(ctx, base);
	// sth r28,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r28.u16);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x82238040
	if (!ctx.cr0.eq) goto loc_82238040;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8223806C"))) PPC_WEAK_FUNC(sub_8223806C);
PPC_FUNC_IMPL(__imp__sub_8223806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82238070"))) PPC_WEAK_FUNC(sub_82238070);
PPC_FUNC_IMPL(__imp__sub_82238070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82238078;
	sub_82248764(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x82237588
	ctx.lr = 0x82238098;
	sub_82237588(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x822380b4
	if (ctx.cr6.eq) goto loc_822380B4;
	// lwz r11,476(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 476);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x822380bc
	if (!ctx.cr6.eq) goto loc_822380BC;
loc_822380B4:
	// lwz r30,476(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 476);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
loc_822380BC:
	// bl 0x8223a990
	ctx.lr = 0x822380C0;
	sub_8223A990(ctx, base);
	// bl 0x82243fd8
	ctx.lr = 0x822380C4;
	sub_82243FD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8223a990
	ctx.lr = 0x822380CC;
	sub_8223A990(ctx, base);
	// bl 0x82243fe0
	ctx.lr = 0x822380D0;
	sub_82243FE0(ctx, base);
	// mulli r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 * 100;
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82239a68
	ctx.lr = 0x822380E0;
	sub_82239A68(ctx, base);
	// addi r10,r3,10
	ctx.r10.s64 = ctx.r3.s64 + 10;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x822380f0
	if (!ctx.cr6.eq) goto loc_822380F0;
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
loc_822380F0:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r25,r21,60
	ctx.r25.s64 = ctx.r21.s64 + 60;
	// addi r26,r30,-1000
	ctx.r26.s64 = ctx.r30.s64 + -1000;
	// addi r27,r29,552
	ctx.r27.s64 = ctx.r29.s64 + 552;
loc_82238100:
	// cmplwi cr6,r28,10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 10, ctx.xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// blt cr6,0x82238110
	if (ctx.cr6.lt) goto loc_82238110;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82238110:
	// lbz r29,2(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8223819c
	if (ctx.cr6.eq) goto loc_8223819C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82238130
	if (ctx.cr6.eq) goto loc_82238130;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8223dbf8
	ctx.lr = 0x8223812C;
	sub_8223DBF8(ctx, base);
	// b 0x82238148
	goto loc_82238148;
loc_82238130:
	// lhz r19,0(r30)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x8223a960
	ctx.lr = 0x82238138;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// bl 0x822368d8
	ctx.lr = 0x82238148;
	sub_822368D8(ctx, base);
loc_82238148:
	// cmpw cr6,r23,r29
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82238184
	if (!ctx.cr6.eq) goto loc_82238184;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmpw cr6,r8,r24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x82238184
	if (!ctx.cr6.eq) goto loc_82238184;
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
loc_82238184:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r27,r27,100
	ctx.r27.s64 = ctx.r27.s64 + 100;
	// addi r26,r26,100
	ctx.r26.s64 = ctx.r26.s64 + 100;
	// cmplwi cr6,r28,11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 11, ctx.xer);
	// blt cr6,0x82238100
	if (ctx.cr6.lt) goto loc_82238100;
loc_8223819C:
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
loc_822381A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8223d928
	ctx.lr = 0x822381B4;
	sub_8223D928(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x822381a8
	if (ctx.cr6.lt) goto loc_822381A8;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x822381fc
	if (ctx.cr6.eq) goto loc_822381FC;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// beq cr6,0x822381fc
	if (ctx.cr6.eq) goto loc_822381FC;
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// beq cr6,0x822381fc
	if (ctx.cr6.eq) goto loc_822381FC;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// beq cr6,0x822381fc
	if (ctx.cr6.eq) goto loc_822381FC;
	// cmpwi cr6,r23,5
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 5, ctx.xer);
	// beq cr6,0x822381fc
	if (ctx.cr6.eq) goto loc_822381FC;
	// cmpwi cr6,r23,6
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 6, ctx.xer);
	// beq cr6,0x822381fc
	if (ctx.cr6.eq) goto loc_822381FC;
	// cmpwi cr6,r23,7
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 7, ctx.xer);
	// bne cr6,0x82238208
	if (!ctx.cr6.eq) goto loc_82238208;
loc_822381FC:
	// stw r20,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r20.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
loc_82238208:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82238288
	if (ctx.cr6.eq) goto loc_82238288;
	// stw r20,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r20.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// bl 0x82234540
	ctx.lr = 0x82238238;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x8223823C;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82238278
	if (ctx.cr6.eq) goto loc_82238278;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82238278
	if (ctx.cr6.eq) goto loc_82238278;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82238278
	if (ctx.cr6.eq) goto loc_82238278;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82238278
	if (ctx.cr6.eq) goto loc_82238278;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82238278
	if (ctx.cr6.eq) goto loc_82238278;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82238278
	if (ctx.cr6.eq) goto loc_82238278;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82238280
	if (!ctx.cr6.eq) goto loc_82238280;
loc_82238278:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82238284
	goto loc_82238284;
loc_82238280:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82238284:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82238288:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822382c0
	if (!ctx.cr6.eq) goto loc_822382C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822382b4
	if (ctx.cr6.eq) goto loc_822382B4;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x822382c0
	if (!ctx.cr6.lt) goto loc_822382C0;
	// stw r20,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r20.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
loc_822382B4:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x822382c0
	if (!ctx.cr6.lt) goto loc_822382C0;
	// stw r20,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r20.u32);
loc_822382C0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_822382C8"))) PPC_WEAK_FUNC(sub_822382C8);
PPC_FUNC_IMPL(__imp__sub_822382C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822382D0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822382DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82234540
	ctx.lr = 0x822382E8;
	sub_82234540(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82345178
	ctx.lr = 0x822382F0;
	sub_82345178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r29,88(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// bl 0x82345178
	ctx.lr = 0x82238300;
	sub_82345178(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// bl 0x8223d948
	ctx.lr = 0x8223830C;
	sub_8223D948(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223dc48
	ctx.lr = 0x82238318;
	sub_8223DC48(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10, ctx.xer);
	// blt cr6,0x822382dc
	if (ctx.cr6.lt) goto loc_822382DC;
	// bl 0x8223d968
	ctx.lr = 0x82238328;
	sub_8223D968(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,10
	ctx.r31.s64 = 10;
loc_82238330:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82234540
	ctx.lr = 0x8223833C;
	sub_82234540(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82345178
	ctx.lr = 0x82238344;
	sub_82345178(ctx, base);
	// lbz r30,2(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822383cc
	if (ctx.cr6.eq) goto loc_822383CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82345178
	ctx.lr = 0x82238358;
	sub_82345178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// bl 0x8223d948
	ctx.lr = 0x82238368;
	sub_8223D948(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8223d998
	ctx.lr = 0x82238374;
	sub_8223D998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822383a8
	if (ctx.cr6.eq) goto loc_822383A8;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223da28
	ctx.lr = 0x82238394;
	sub_8223DA28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223d9d8
	ctx.lr = 0x822383A4;
	sub_8223D9D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822383A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223dc48
	ctx.lr = 0x822383B4;
	sub_8223DC48(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x82238330
	if (ctx.cr6.lt) goto loc_82238330;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_822383CC:
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// bge cr6,0x822383f4
	if (!ctx.cr6.lt) goto loc_822383F4;
loc_822383D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82234540
	ctx.lr = 0x822383E0;
	sub_82234540(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8223dc48
	ctx.lr = 0x822383E8;
	sub_8223DC48(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x822383d4
	if (ctx.cr6.lt) goto loc_822383D4;
loc_822383F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822383FC"))) PPC_WEAK_FUNC(sub_822383FC);
PPC_FUNC_IMPL(__imp__sub_822383FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82238400"))) PPC_WEAK_FUNC(sub_82238400);
PPC_FUNC_IMPL(__imp__sub_82238400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82238408;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822384b4
	if (!ctx.cr6.eq) goto loc_822384B4;
	// bl 0x82237b50
	ctx.lr = 0x82238424;
	sub_82237B50(ctx, base);
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// bne cr6,0x82238454
	if (!ctx.cr6.eq) goto loc_82238454;
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r10,-344
	ctx.r7.s64 = ctx.r10.s64 + -344;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// slw r4,r9,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r5.u8 & 0x3F));
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82238454:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82239a30
	ctx.lr = 0x8223845C;
	sub_82239A30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822384b4
	if (ctx.cr6.eq) goto loc_822384B4;
	// bl 0x8223a990
	ctx.lr = 0x82238468;
	sub_8223A990(ctx, base);
	// bl 0x82243fe0
	ctx.lr = 0x8223846C;
	sub_82243FE0(ctx, base);
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// mulli r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 * 100;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bl 0x82239aa0
	ctx.lr = 0x8223847C;
	sub_82239AA0(ctx, base);
	// lwz r9,476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822384b4
	if (ctx.cr6.eq) goto loc_822384B4;
	// bl 0x8223a990
	ctx.lr = 0x82238490;
	sub_8223A990(ctx, base);
	// bl 0x82243fe0
	ctx.lr = 0x82238494;
	sub_82243FE0(ctx, base);
	// bl 0x82239af8
	ctx.lr = 0x82238498;
	sub_82239AF8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// ble cr6,0x822384b4
	if (!ctx.cr6.gt) goto loc_822384B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_822384B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822384BC"))) PPC_WEAK_FUNC(sub_822384BC);
PPC_FUNC_IMPL(__imp__sub_822384BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822384C0"))) PPC_WEAK_FUNC(sub_822384C0);
PPC_FUNC_IMPL(__imp__sub_822384C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822384C8;
	sub_82248788(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82237588
	ctx.lr = 0x822384E4;
	sub_82237588(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82238070
	ctx.lr = 0x82238500;
	sub_82238070(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82238534
	if (ctx.cr6.eq) goto loc_82238534;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82345178
	ctx.lr = 0x8223851C;
	sub_82345178(ctx, base);
	// lbz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
loc_82238534:
	// lbz r31,88(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// lbz r3,2(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223d928
	ctx.lr = 0x82238544;
	sub_8223D928(ctx, base);
	// rotlwi r11,r31,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82238564
	if (ctx.cr6.lt) goto loc_82238564;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_82238564:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8223856C"))) PPC_WEAK_FUNC(sub_8223856C);
PPC_FUNC_IMPL(__imp__sub_8223856C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82238570"))) PPC_WEAK_FUNC(sub_82238570);
PPC_FUNC_IMPL(__imp__sub_82238570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82238578;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822385fc
	if (ctx.cr6.eq) goto loc_822385FC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82345178
	ctx.lr = 0x8223859C;
	sub_82345178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r28,88(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// bl 0x82345178
	ctx.lr = 0x822385AC;
	sub_82345178(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbz r28,88(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// lbz r27,2(r30)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// bl 0x8223d948
	ctx.lr = 0x822385C0;
	sub_8223D948(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8223d948
	ctx.lr = 0x822385D0;
	sub_8223D948(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8223d998
	ctx.lr = 0x822385D8;
	sub_8223D998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822385f4
	if (ctx.cr6.eq) goto loc_822385F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223dc00
	ctx.lr = 0x822385E8;
	sub_8223DC00(ctx, base);
	// stw r3,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_822385F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
loc_822385FC:
	// lbz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// lbz r3,2(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// bl 0x8223d948
	ctx.lr = 0x82238608;
	sub_8223D948(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82238628
	if (ctx.cr6.eq) goto loc_82238628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234a248
	ctx.lr = 0x82238620;
	sub_8234A248(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8223862c
	goto loc_8223862C;
loc_82238628:
	// li r27,11
	ctx.r27.s64 = 11;
loc_8223862C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82237cc8
	ctx.lr = 0x82238638;
	sub_82237CC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82238694
	if (ctx.cr6.eq) goto loc_82238694;
loc_82238640:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82238680
	if (ctx.cr6.eq) goto loc_82238680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82238654;
	sub_82234540(ctx, base);
	// bl 0x8223dc00
	ctx.lr = 0x82238658;
	sub_8223DC00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223d998
	ctx.lr = 0x82238664;
	sub_8223D998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82238680
	if (ctx.cr6.eq) goto loc_82238680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82238678;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x8223867C;
	sub_82345178(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82238680:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82237cc8
	ctx.lr = 0x8223868C;
	sub_82237CC8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82238640
	if (ctx.cr6.lt) goto loc_82238640;
loc_82238694:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223d9d8
	ctx.lr = 0x822386A8;
	sub_8223D9D8(ctx, base);
	// stw r3,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_822386B4"))) PPC_WEAK_FUNC(sub_822386B4);
PPC_FUNC_IMPL(__imp__sub_822386B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822386B8"))) PPC_WEAK_FUNC(sub_822386B8);
PPC_FUNC_IMPL(__imp__sub_822386B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822386C0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82234540
	ctx.lr = 0x822386D4;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x822386D8;
	sub_82345178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82234540
	ctx.lr = 0x822386E4;
	sub_82234540(ctx, base);
	// bl 0x8223dc00
	ctx.lr = 0x822386E8;
	sub_8223DC00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// bl 0x82234540
	ctx.lr = 0x822386F8;
	sub_82234540(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223dc50
	ctx.lr = 0x82238700;
	sub_8223DC50(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// bne cr6,0x82238714
	if (!ctx.cr6.eq) goto loc_82238714;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82238714:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 11, ctx.xer);
	// bge cr6,0x822387f0
	if (!ctx.cr6.lt) goto loc_822387F0;
loc_82238720:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234540
	ctx.lr = 0x8223872C;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x82238730;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82238770
	if (ctx.cr6.eq) goto loc_82238770;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234540
	ctx.lr = 0x82238748;
	sub_82234540(ctx, base);
	// bl 0x8223dc00
	ctx.lr = 0x8223874C;
	sub_8223DC00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8223d9b8
	ctx.lr = 0x82238758;
	sub_8223D9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82238770
	if (ctx.cr6.eq) goto loc_82238770;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// blt cr6,0x82238720
	if (ctx.cr6.lt) goto loc_82238720;
loc_82238770:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822387f0
	if (ctx.cr6.eq) goto loc_822387F0;
	// neg r5,r29
	ctx.r5.s64 = -ctx.r29.s64;
	// add r4,r28,r29
	ctx.r4.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822373f0
	ctx.lr = 0x82238788;
	sub_822373F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822382c8
	ctx.lr = 0x82238790;
	sub_822382C8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82238798:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234540
	ctx.lr = 0x822387A4;
	sub_82234540(ctx, base);
	// bl 0x8223dc08
	ctx.lr = 0x822387A8;
	sub_8223DC08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822387c0
	if (!ctx.cr6.eq) goto loc_822387C0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// blt cr6,0x82238798
	if (ctx.cr6.lt) goto loc_82238798;
	// b 0x822387d8
	goto loc_822387D8;
loc_822387C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234540
	ctx.lr = 0x822387CC;
	sub_82234540(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223dc50
	ctx.lr = 0x822387D4;
	sub_8223DC50(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_822387D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r29.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_822387F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822387F8"))) PPC_WEAK_FUNC(sub_822387F8);
PPC_FUNC_IMPL(__imp__sub_822387F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82238800;
	sub_82248774(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,508(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82234540
	ctx.lr = 0x82238810;
	sub_82234540(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223dc50
	ctx.lr = 0x82238818;
	sub_8223DC50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82237cc8
	ctx.lr = 0x82238820;
	sub_82237CC8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x82238828;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82238830;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223883C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82238840;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82238858
	if (ctx.cr6.eq) goto loc_82238858;
	// li r3,812
	ctx.r3.s64 = 812;
	// bl 0x82183448
	ctx.lr = 0x82238854;
	sub_82183448(ctx, base);
	// b 0x82238860
	goto loc_82238860;
loc_82238858:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x82238860;
	sub_821845A0(ctx, base);
loc_82238860:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82238884
	if (ctx.cr6.eq) goto loc_82238884;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x8223e630
	ctx.lr = 0x8223887C;
	sub_8223E630(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82238888
	goto loc_82238888;
loc_82238884:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82238888:
	// addi r28,r25,-1
	ctx.r28.s64 = ctx.r25.s64 + -1;
	// cmplwi cr6,r28,10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 10, ctx.xer);
	// blt cr6,0x82238920
	if (ctx.cr6.lt) goto loc_82238920;
loc_82238894:
	// li r29,10
	ctx.r29.s64 = 10;
	// cmplwi cr6,r28,10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 10, ctx.xer);
	// ble cr6,0x82238914
	if (!ctx.cr6.gt) goto loc_82238914;
	// addi r31,r27,104
	ctx.r31.s64 = ctx.r27.s64 + 104;
loc_822388A4:
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82234540
	ctx.lr = 0x822388B4;
	sub_82234540(ctx, base);
	// bl 0x8223dc00
	ctx.lr = 0x822388B8;
	sub_8223DC00(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82234540
	ctx.lr = 0x822388C8;
	sub_82234540(ctx, base);
	// bl 0x8223dc00
	ctx.lr = 0x822388CC;
	sub_8223DC00(ctx, base);
	// cmpw cr6,r3,r23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x82238904
	if (!ctx.cr6.gt) goto loc_82238904;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x8223e6e8
	ctx.lr = 0x822388E0;
	sub_8223E6E8(ctx, base);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8223e6e8
	ctx.lr = 0x822388EC;
	sub_8223E6E8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8223e6e8
	ctx.lr = 0x822388F8;
	sub_8223E6E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8223dda0
	ctx.lr = 0x82238904;
	sub_8223DDA0(ctx, base);
loc_82238904:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822388a4
	if (ctx.cr6.lt) goto loc_822388A4;
loc_82238914:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r28,10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 10, ctx.xer);
	// bge cr6,0x82238894
	if (!ctx.cr6.lt) goto loc_82238894;
loc_82238920:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82238940
	if (ctx.cr6.eq) goto loc_82238940;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82238940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82238940:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82238998
	if (ctx.cr6.eq) goto loc_82238998;
loc_8223894C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82234540
	ctx.lr = 0x82238958;
	sub_82234540(ctx, base);
	// bl 0x8223dc08
	ctx.lr = 0x8223895C;
	sub_8223DC08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82238980
	if (!ctx.cr6.eq) goto loc_82238980;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8223894c
	if (ctx.cr6.lt) goto loc_8223894C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x82238978;
	sub_821837D0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82238980:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82234540
	ctx.lr = 0x8223898C;
	sub_82234540(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223dc50
	ctx.lr = 0x82238994;
	sub_8223DC50(ctx, base);
	// stw r31,508(r27)
	PPC_STORE_U32(ctx.r27.u32 + 508, ctx.r31.u32);
loc_82238998:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x822389A0;
	sub_821837D0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_822389A8"))) PPC_WEAK_FUNC(sub_822389A8);
PPC_FUNC_IMPL(__imp__sub_822389A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
loc_822389C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82234540
	ctx.lr = 0x822389D0;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x822389D4;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82238a40
	if (ctx.cr6.eq) goto loc_82238A40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82234540
	ctx.lr = 0x822389EC;
	sub_82234540(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223de90
	ctx.lr = 0x822389F4;
	sub_8223DE90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82234540
	ctx.lr = 0x82238A00;
	sub_82234540(ctx, base);
	// bl 0x8223e8d8
	ctx.lr = 0x82238A04;
	sub_8223E8D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82234540
	ctx.lr = 0x82238A10;
	sub_82234540(ctx, base);
	// bl 0x8223dee0
	ctx.lr = 0x82238A14;
	sub_8223DEE0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82234540
	ctx.lr = 0x82238A20;
	sub_82234540(ctx, base);
	// bl 0x8223df80
	ctx.lr = 0x82238A24;
	sub_8223DF80(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82234540
	ctx.lr = 0x82238A30;
	sub_82234540(ctx, base);
	// bl 0x8223dba8
	ctx.lr = 0x82238A34;
	sub_8223DBA8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x822389c4
	if (ctx.cr6.lt) goto loc_822389C4;
loc_82238A40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82238A58"))) PPC_WEAK_FUNC(sub_82238A58);
PPC_FUNC_IMPL(__imp__sub_82238A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82238A60;
	sub_8224877C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r3,56
	ctx.r28.s64 = ctx.r3.s64 + 56;
loc_82238A70:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82345178
	ctx.lr = 0x82238A78;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82238b30
	if (ctx.cr6.eq) goto loc_82238B30;
	// bl 0x8223a960
	ctx.lr = 0x82238A88;
	sub_8223A960(ctx, base);
	// lwzu r29,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82345178
	ctx.lr = 0x82238A98;
	sub_82345178(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r25,2(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// bl 0x822e6048
	ctx.lr = 0x82238AA8;
	sub_822E6048(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x822361c8
	ctx.lr = 0x82238AC0;
	sub_822361C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x82238AD0;
	sub_822368B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82248a40
	ctx.lr = 0x82238AE0;
	sub_82248A40(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82238AF0:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82238af0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82238AF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223dc10
	ctx.lr = 0x82238B08;
	sub_8223DC10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x822363e0
	ctx.lr = 0x82238B18;
	sub_822363E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223dc20
	ctx.lr = 0x82238B24;
	sub_8223DC20(ctx, base);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 11, ctx.xer);
	// blt cr6,0x82238a70
	if (ctx.cr6.lt) goto loc_82238A70;
loc_82238B30:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82238B38"))) PPC_WEAK_FUNC(sub_82238B38);
PPC_FUNC_IMPL(__imp__sub_82238B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82238B40;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8223a990
	ctx.lr = 0x82238B4C;
	sub_8223A990(ctx, base);
	// bl 0x82243fd8
	ctx.lr = 0x82238B50;
	sub_82243FD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8223a990
	ctx.lr = 0x82238B58;
	sub_8223A990(ctx, base);
	// bl 0x82243fe0
	ctx.lr = 0x82238B5C;
	sub_82243FE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r29,56
	ctx.r28.s64 = ctx.r29.s64 + 56;
	// addi r30,r30,552
	ctx.r30.s64 = ctx.r30.s64 + 552;
loc_82238B6C:
	// bl 0x82183850
	ctx.lr = 0x82238B70;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82238b88
	if (ctx.cr6.eq) goto loc_82238B88;
	// li r3,812
	ctx.r3.s64 = 812;
	// bl 0x82183448
	ctx.lr = 0x82238B84;
	sub_82183448(ctx, base);
	// b 0x82238b90
	goto loc_82238B90;
loc_82238B88:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x82238B90;
	sub_821845A0(ctx, base);
loc_82238B90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82238bb0
	if (ctx.cr6.eq) goto loc_82238BB0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223e630
	ctx.lr = 0x82238BAC;
	sub_8223E630(ctx, base);
	// b 0x82238bb4
	goto loc_82238BB4;
loc_82238BB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82238BB4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10, ctx.xer);
	// blt cr6,0x82238b6c
	if (ctx.cr6.lt) goto loc_82238B6C;
	// bl 0x82183850
	ctx.lr = 0x82238BCC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82238be4
	if (ctx.cr6.eq) goto loc_82238BE4;
	// li r3,812
	ctx.r3.s64 = 812;
	// bl 0x82183448
	ctx.lr = 0x82238BE0;
	sub_82183448(ctx, base);
	// b 0x82238bec
	goto loc_82238BEC;
loc_82238BE4:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x821845a0
	ctx.lr = 0x82238BEC;
	sub_821845A0(ctx, base);
loc_82238BEC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82238c24
	if (ctx.cr6.eq) goto loc_82238C24;
	// lwz r11,476(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 476);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x8223e630
	ctx.lr = 0x82238C10;
	sub_8223E630(ctx, base);
	// stw r3,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82238a58
	ctx.lr = 0x82238C1C;
	sub_82238A58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82238C24:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82238a58
	ctx.lr = 0x82238C34;
	sub_82238A58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82238C3C"))) PPC_WEAK_FUNC(sub_82238C3C);
PPC_FUNC_IMPL(__imp__sub_82238C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82238C40"))) PPC_WEAK_FUNC(sub_82238C40);
PPC_FUNC_IMPL(__imp__sub_82238C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82238C48;
	sub_8224877C(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82234540
	ctx.lr = 0x82238C60;
	sub_82234540(ctx, base);
	// bl 0x8223dc00
	ctx.lr = 0x82238C64;
	sub_8223DC00(ctx, base);
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// bge cr6,0x82238e10
	if (!ctx.cr6.lt) goto loc_82238E10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,-440
	ctx.r28.s64 = ctx.r11.s64 + -440;
loc_82238C7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82238C88;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x82238C8C;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82238e10
	if (ctx.cr6.eq) goto loc_82238E10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82238CA4;
	sub_82234540(ctx, base);
	// bl 0x8223dc00
	ctx.lr = 0x82238CA8;
	sub_8223DC00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8223d9b8
	ctx.lr = 0x82238CB4;
	sub_8223D9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82238e10
	if (ctx.cr6.eq) goto loc_82238E10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e6048
	ctx.lr = 0x82238CC4;
	sub_822E6048(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82238CD4;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x82238CD8;
	sub_82345178(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82238CE4;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x82238CE8;
	sub_82345178(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x82248a40
	ctx.lr = 0x82238CF8;
	sub_82248A40(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82238d5c
	if (!ctx.cr6.lt) goto loc_82238D5C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x82239498
	ctx.lr = 0x82238D2C;
	sub_82239498(ctx, base);
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// bl 0x822394a0
	ctx.lr = 0x82238D3C;
	sub_822394A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// bl 0x82239898
	ctx.lr = 0x82238D48;
	sub_82239898(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// bl 0x822398d0
	ctx.lr = 0x82238D54;
	sub_822398D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82238db4
	goto loc_82238DB4;
loc_82238D5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82238D68;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x82238D6C;
	sub_82345178(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82238D78;
	sub_82234540(ctx, base);
	// bl 0x8223dbf8
	ctx.lr = 0x82238D7C;
	sub_8223DBF8(ctx, base);
	// addi r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 + 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// bl 0x82239498
	ctx.lr = 0x82238D8C;
	sub_82239498(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// bl 0x822394a0
	ctx.lr = 0x82238D98;
	sub_822394A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82239898
	ctx.lr = 0x82238DA4;
	sub_82239898(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// bl 0x822398d0
	ctx.lr = 0x82238DB0;
	sub_822398D0(ctx, base);
	// lhz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
loc_82238DB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82239860
	ctx.lr = 0x82238DBC;
	sub_82239860(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82237eb0
	ctx.lr = 0x82238DD4;
	sub_82237EB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82238DE0;
	sub_82234540(ctx, base);
	// bl 0x8223dc00
	ctx.lr = 0x82238DE4;
	sub_8223DC00(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8223d9f0
	ctx.lr = 0x82238DEC;
	sub_8223D9F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82238DFC;
	sub_82234540(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223dc48
	ctx.lr = 0x82238E04;
	sub_8223DC48(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// blt cr6,0x82238c7c
	if (ctx.cr6.lt) goto loc_82238C7C;
loc_82238E10:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82238E18"))) PPC_WEAK_FUNC(sub_82238E18);
PPC_FUNC_IMPL(__imp__sub_82238E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82238E20;
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
	// bl 0x82182e90
	ctx.lr = 0x82238E34;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x82238E3C;
	sub_82182E90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x82234ec0
	ctx.lr = 0x82238E5C;
	sub_82234EC0(ctx, base);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x821859a0
	ctx.lr = 0x82238E70;
	sub_821859A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r29,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-332
	ctx.r9.s64 = ctx.r11.s64 + -332;
	// addi r8,r10,-340
	ctx.r8.s64 = ctx.r10.s64 + -340;
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r8.u32);
	// stw r7,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r7.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// lwz r28,464(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// bl 0x82183078
	ctx.lr = 0x82238EC0;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82238ECC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82238ED0;
	sub_82183850(ctx, base);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r6,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82238EDC;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82238EE4;
	sub_821830F8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82238EE8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82238f00
	if (ctx.cr6.eq) goto loc_82238F00;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x82238EFC;
	sub_82183448(ctx, base);
	// b 0x82238f08
	goto loc_82238F08;
loc_82238F00:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x82238F08;
	sub_821845A0(ctx, base);
loc_82238F08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82238f18
	if (ctx.cr6.eq) goto loc_82238F18;
	// bl 0x82243ed0
	ctx.lr = 0x82238F14;
	sub_82243ED0(ctx, base);
	// b 0x82238f1c
	goto loc_82238F1C;
loc_82238F18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82238F1C:
	// stw r3,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82238F24;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82238f3c
	if (ctx.cr6.eq) goto loc_82238F3C;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82183448
	ctx.lr = 0x82238F38;
	sub_82183448(ctx, base);
	// b 0x82238f44
	goto loc_82238F44;
loc_82238F3C:
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821845a0
	ctx.lr = 0x82238F44;
	sub_821845A0(ctx, base);
loc_82238F44:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82238f68
	if (ctx.cr6.eq) goto loc_82238F68;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82241498
	ctx.lr = 0x82238F64;
	sub_82241498(ctx, base);
	// b 0x82238f6c
	goto loc_82238F6C;
loc_82238F68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82238F6C:
	// stw r3,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r3.u32);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x82238f84
	if (ctx.cr6.lt) goto loc_82238F84;
	// bne cr6,0x82238f8c
	if (!ctx.cr6.eq) goto loc_82238F8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82238f88
	goto loc_82238F88;
loc_82238F84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82238F88:
	// bl 0x821830f8
	ctx.lr = 0x82238F8C;
	sub_821830F8(ctx, base);
loc_82238F8C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82238F94;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82238FA0"))) PPC_WEAK_FUNC(sub_82238FA0);
PPC_FUNC_IMPL(__imp__sub_82238FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82238FA8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r29,500(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-332
	ctx.r9.s64 = ctx.r11.s64 + -332;
	// addi r8,r10,-340
	ctx.r8.s64 = ctx.r10.s64 + -340;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r8,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r8.u32);
	// addi r30,r3,480
	ctx.r30.s64 = ctx.r3.s64 + 480;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82238ff0
	if (ctx.cr6.eq) goto loc_82238FF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822337a0
	ctx.lr = 0x82238FE4;
	sub_822337A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82238FF0;
	sub_82183E40(ctx, base);
loc_82238FF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// bl 0x82185a50
	ctx.lr = 0x82239000;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234f78
	ctx.lr = 0x82239008;
	sub_82234F78(ctx, base);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82239024
	if (ctx.cr6.eq) goto loc_82239024;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82239020;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82239024:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8223902C"))) PPC_WEAK_FUNC(sub_8223902C);
PPC_FUNC_IMPL(__imp__sub_8223902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239030"))) PPC_WEAK_FUNC(sub_82239030);
PPC_FUNC_IMPL(__imp__sub_82239030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82239038;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x822391ec
	if (ctx.cr6.gt) goto loc_822391EC;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r25,2
	ctx.r25.s64 = 2;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r23,5
	ctx.r23.s64 = 5;
	// li r26,14
	ctx.r26.s64 = 14;
loc_82239070:
	// lis r12,-32220
	ctx.r12.s64 = -2111569920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-28536
	ctx.r12.s64 = ctx.r12.s64 + -28536;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-28484(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28484);
	// lwz r17,-28180(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28180);
	// lwz r17,-28452(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28452);
	// lwz r17,-28424(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28424);
	// lwz r17,-28396(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28396);
	// lwz r17,-28376(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28376);
	// lwz r17,-28356(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28356);
	// lwz r17,-28336(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28336);
	// lwz r17,-28316(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28316);
	// lwz r17,-28296(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28296);
	// lwz r17,-28276(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28276);
	// lwz r17,-28256(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28256);
	// lwz r17,-28236(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234510
	ctx.lr = 0x822390C4;
	sub_82234510(ctx, base);
	// bl 0x82229080
	ctx.lr = 0x822390C8;
	sub_82229080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822391ec
	if (ctx.cr6.eq) goto loc_822391EC;
	// stw r24,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r24.u32);
	// stw r25,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r25.u32);
	// b 0x822391dc
	goto loc_822391DC;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r27,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r27.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// std r30,1128(r28)
	PPC_STORE_U64(ctx.r28.u32 + 1128, ctx.r30.u64);
	// std r30,1136(r29)
	PPC_STORE_U64(ctx.r29.u32 + 1136, ctx.r30.u64);
	// b 0x822391dc
	goto loc_822391DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82234540
	ctx.lr = 0x82239104;
	sub_82234540(ctx, base);
	// bl 0x82345178
	ctx.lr = 0x82239108;
	sub_82345178(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r23,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r23.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82237610
	ctx.lr = 0x8223911C;
	sub_82237610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822391ec
	if (ctx.cr6.eq) goto loc_822391EC;
	// b 0x822391dc
	goto loc_822391DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822376c0
	ctx.lr = 0x82239130;
	sub_822376C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822391ec
	if (ctx.cr6.eq) goto loc_822391EC;
	// b 0x822391dc
	goto loc_822391DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82237758
	ctx.lr = 0x82239144;
	sub_82237758(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822391ec
	if (ctx.cr6.eq) goto loc_822391EC;
	// b 0x822391dc
	goto loc_822391DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822377f0
	ctx.lr = 0x82239158;
	sub_822377F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822391ec
	if (ctx.cr6.eq) goto loc_822391EC;
	// b 0x822391dc
	goto loc_822391DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82237888
	ctx.lr = 0x8223916C;
	sub_82237888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822391ec
	if (ctx.cr6.eq) goto loc_822391EC;
	// b 0x822391dc
	goto loc_822391DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82237920
	ctx.lr = 0x82239180;
	sub_82237920(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822391ec
	if (ctx.cr6.eq) goto loc_822391EC;
	// b 0x822391dc
	goto loc_822391DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822379b8
	ctx.lr = 0x82239194;
	sub_822379B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822391ec
	if (ctx.cr6.eq) goto loc_822391EC;
	// b 0x822391dc
	goto loc_822391DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82237f78
	ctx.lr = 0x822391A8;
	sub_82237F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822391ec
	if (ctx.cr6.eq) goto loc_822391EC;
	// b 0x822391dc
	goto loc_822391DC;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822391cc
	if (ctx.cr6.eq) goto loc_822391CC;
	// bl 0x8223a9f8
	ctx.lr = 0x822391C4;
	sub_8223A9F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223b328
	ctx.lr = 0x822391CC;
	sub_8223B328(ctx, base);
loc_822391CC:
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r26,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r26.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_822391DC:
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// ble cr6,0x82239070
	if (!ctx.cr6.gt) goto loc_82239070;
loc_822391EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_822391F4"))) PPC_WEAK_FUNC(sub_822391F4);
PPC_FUNC_IMPL(__imp__sub_822391F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822391F8"))) PPC_WEAK_FUNC(sub_822391F8);
PPC_FUNC_IMPL(__imp__sub_822391F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82239200;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r10,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r10.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// beq cr6,0x82239258
	if (ctx.cr6.eq) goto loc_82239258;
	// bl 0x82234540
	ctx.lr = 0x8223924C;
	sub_82234540(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8234a248
	ctx.lr = 0x82239254;
	sub_8234A248(ctx, base);
	// b 0x8223925c
	goto loc_8223925C;
loc_82239258:
	// bl 0x82237b50
	ctx.lr = 0x8223925C;
	sub_82237B50(ctx, base);
loc_8223925C:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82238400
	ctx.lr = 0x82239274;
	sub_82238400(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822384c0
	ctx.lr = 0x82239288;
	sub_822384C0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822392d8
	if (!ctx.cr6.eq) goto loc_822392D8;
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822392cc
	if (ctx.cr6.eq) goto loc_822392CC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822392cc
	if (ctx.cr6.eq) goto loc_822392CC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822392cc
	if (ctx.cr6.eq) goto loc_822392CC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822392cc
	if (ctx.cr6.eq) goto loc_822392CC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822392cc
	if (ctx.cr6.eq) goto loc_822392CC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822392cc
	if (ctx.cr6.eq) goto loc_822392CC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x822392d8
	if (!ctx.cr6.eq) goto loc_822392D8;
loc_822392CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822392D8:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82238570
	ctx.lr = 0x822392F0;
	sub_82238570(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822392F8"))) PPC_WEAK_FUNC(sub_822392F8);
PPC_FUNC_IMPL(__imp__sub_822392F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82239300;
	sub_82248768(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// bl 0x8223a990
	ctx.lr = 0x82239320;
	sub_8223A990(ctx, base);
	// bl 0x82243fe0
	ctx.lr = 0x82239324;
	sub_82243FE0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8223935c
	if (ctx.cr6.eq) goto loc_8223935C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82239344;
	sub_82234540(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// bl 0x82345178
	ctx.lr = 0x82239350;
	sub_82345178(ctx, base);
	// lbz r25,90(r3)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 90);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8223936c
	goto loc_8223936C;
loc_8223935C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x822373f0
	ctx.lr = 0x8223936C;
	sub_822373F0(ctx, base);
loc_8223936C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8214a2d8
	ctx.lr = 0x82239378;
	sub_8214A2D8(ctx, base);
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r4.u32);
	// bl 0x82237eb0
	ctx.lr = 0x82239394;
	sub_82237EB0(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x82239398;
	sub_8223A960(ctx, base);
	// bl 0x82234508
	ctx.lr = 0x8223939C;
	sub_82234508(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8223a960
	ctx.lr = 0x822393A4;
	sub_8223A960(ctx, base);
	// bl 0x82234510
	ctx.lr = 0x822393A8;
	sub_82234510(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// bl 0x82237c00
	ctx.lr = 0x822393B8;
	sub_82237C00(ctx, base);
	// lbz r20,82(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x8223a960
	ctx.lr = 0x822393C0;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// bl 0x822361c8
	ctx.lr = 0x822393D4;
	sub_822361C8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8223942c
	if (ctx.cr6.eq) goto loc_8223942C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8223dbf8
	ctx.lr = 0x822393E4;
	sub_8223DBF8(ctx, base);
	// lbz r11,42(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82239404
	if (!ctx.cr6.eq) goto loc_82239404;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822386b8
	ctx.lr = 0x82239400;
	sub_822386B8(ctx, base);
	// b 0x8223942c
	goto loc_8223942C;
loc_82239404:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82239418
	if (!ctx.cr6.eq) goto loc_82239418;
	// lbz r10,170(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 170);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8223942c
	if (ctx.cr6.eq) goto loc_8223942C;
loc_82239418:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// bl 0x82238c40
	ctx.lr = 0x8223942C;
	sub_82238C40(ctx, base);
loc_8223942C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r30,12(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x82234540
	ctx.lr = 0x8223943C;
	sub_82234540(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223dc48
	ctx.lr = 0x82239444;
	sub_8223DC48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822387f8
	ctx.lr = 0x8223944C;
	sub_822387F8(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82239460
	if (ctx.cr6.eq) goto loc_82239460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822382c8
	ctx.lr = 0x82239460;
	sub_822382C8(ctx, base);
loc_82239460:
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8223947c
	if (ctx.cr6.eq) goto loc_8223947C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r22,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r22.u32);
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
loc_8223947C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82239484"))) PPC_WEAK_FUNC(sub_82239484);
PPC_FUNC_IMPL(__imp__sub_82239484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239488"))) PPC_WEAK_FUNC(sub_82239488);
PPC_FUNC_IMPL(__imp__sub_82239488) {
	PPC_FUNC_PROLOGUE();
	// stb r4,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239490"))) PPC_WEAK_FUNC(sub_82239490);
PPC_FUNC_IMPL(__imp__sub_82239490) {
	PPC_FUNC_PROLOGUE();
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239498"))) PPC_WEAK_FUNC(sub_82239498);
PPC_FUNC_IMPL(__imp__sub_82239498) {
	PPC_FUNC_PROLOGUE();
	// sth r4,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822394A0"))) PPC_WEAK_FUNC(sub_822394A0);
PPC_FUNC_IMPL(__imp__sub_822394A0) {
	PPC_FUNC_PROLOGUE();
	// sth r4,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822394A8"))) PPC_WEAK_FUNC(sub_822394A8);
PPC_FUNC_IMPL(__imp__sub_822394A8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822394B0"))) PPC_WEAK_FUNC(sub_822394B0);
PPC_FUNC_IMPL(__imp__sub_822394B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,10752
	ctx.r11.s64 = ctx.r11.s64 + 10752;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfsx f13,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822394D8"))) PPC_WEAK_FUNC(sub_822394D8);
PPC_FUNC_IMPL(__imp__sub_822394D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822394E0;
	sub_8224878C(ctx, base);
	// li r6,105
	ctx.r6.s64 = 105;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_822394FC:
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lbzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x822394fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822394FC;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// li r8,33
	ctx.r8.s64 = 33;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r3,419
	ctx.r11.s64 = ctx.r3.s64 + 419;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82239548:
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x82239548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82239548;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// li r8,250
	ctx.r8.s64 = 250;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r3,551
	ctx.r11.s64 = ctx.r3.s64 + 551;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82239598:
	// lbz r29,3(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x82239598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82239598;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r7,1552(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1552);
	// li r11,33
	ctx.r11.s64 = 33;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r3,1553
	ctx.r11.s64 = ctx.r3.s64 + 1553;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
loc_822395EC:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bdnz 0x822395ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822395EC;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82239618"))) PPC_WEAK_FUNC(sub_82239618);
PPC_FUNC_IMPL(__imp__sub_82239618) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1000
	ctx.r11.s64 = ctx.r4.s64 + 1000;
	// sth r4,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r4.u16);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r9,398(r3)
	PPC_STORE_U16(ctx.r3.u32 + 398, ctx.r9.u16);
	// sth r9,400(r3)
	PPC_STORE_U16(ctx.r3.u32 + 400, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239630"))) PPC_WEAK_FUNC(sub_82239630);
PPC_FUNC_IMPL(__imp__sub_82239630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82239638;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r6,3(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r4,6(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r3,19
	ctx.r11.s64 = ctx.r3.s64 + 19;
	// lbz r8,7(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r3,1(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// li r9,25
	ctx.r9.s64 = 25;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lbz r5,5(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbz r4,11(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,9(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// add r9,r6,r30
	ctx.r9.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lbz r6,19(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbz r5,18(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lbz r4,17(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// add r8,r3,r30
	ctx.r8.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r30,r6,r9
	ctx.r30.u64 = ctx.r6.u64 + ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822396DC:
	// lbz r28,3(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x822396dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822396DC;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822394d8
	ctx.lr = 0x8223971C;
	sub_822394D8(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82239734
	if (ctx.cr6.eq) goto loc_82239734;
	// stw r3,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r3.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r3,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r3.u32);
loc_82239734:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8223973C"))) PPC_WEAK_FUNC(sub_8223973C);
PPC_FUNC_IMPL(__imp__sub_8223973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239740"))) PPC_WEAK_FUNC(sub_82239740);
PPC_FUNC_IMPL(__imp__sub_82239740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x8223975C;
	sub_822AA648(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x822aa648
	ctx.lr = 0x82239768;
	sub_822AA648(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,255
	ctx.r11.s64 = 255;
	// sth r10,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r10.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r8,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r8.u8);
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
loc_8223979C:
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8223979c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223979C;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822397C8:
	// stbu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x822397c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822397C8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822397E4"))) PPC_WEAK_FUNC(sub_822397E4);
PPC_FUNC_IMPL(__imp__sub_822397E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822397E8"))) PPC_WEAK_FUNC(sub_822397E8);
PPC_FUNC_IMPL(__imp__sub_822397E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,10752
	ctx.r10.s64 = ctx.r11.s64 + 10752;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82239804
	if (!ctx.cr6.lt) goto loc_82239804;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82239804:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82239814
	if (!ctx.cr6.gt) goto loc_82239814;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// blr 
	return;
loc_82239814:
	// stb r4,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223981C"))) PPC_WEAK_FUNC(sub_8223981C);
PPC_FUNC_IMPL(__imp__sub_8223981C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239820"))) PPC_WEAK_FUNC(sub_82239820);
PPC_FUNC_IMPL(__imp__sub_82239820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,10752
	ctx.r10.s64 = ctx.r11.s64 + 10752;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8223983c
	if (!ctx.cr6.lt) goto loc_8223983C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8223983C:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8223984c
	if (!ctx.cr6.gt) goto loc_8223984C;
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// blr 
	return;
loc_8223984C:
	// stb r4,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239854"))) PPC_WEAK_FUNC(sub_82239854);
PPC_FUNC_IMPL(__imp__sub_82239854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239858"))) PPC_WEAK_FUNC(sub_82239858);
PPC_FUNC_IMPL(__imp__sub_82239858) {
	PPC_FUNC_PROLOGUE();
	// stb r4,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239860"))) PPC_WEAK_FUNC(sub_82239860);
PPC_FUNC_IMPL(__imp__sub_82239860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,10752
	ctx.r10.s64 = ctx.r11.s64 + 10752;
	// lwz r11,144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// lwz r10,148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8223987c
	if (!ctx.cr6.lt) goto loc_8223987C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8223987C:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8223988c
	if (!ctx.cr6.gt) goto loc_8223988C;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// blr 
	return;
loc_8223988C:
	// sth r4,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239894"))) PPC_WEAK_FUNC(sub_82239894);
PPC_FUNC_IMPL(__imp__sub_82239894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239898"))) PPC_WEAK_FUNC(sub_82239898);
PPC_FUNC_IMPL(__imp__sub_82239898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,10752
	ctx.r10.s64 = ctx.r11.s64 + 10752;
	// lwz r11,128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r10,132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822398b4
	if (!ctx.cr6.lt) goto loc_822398B4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_822398B4:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822398c4
	if (!ctx.cr6.gt) goto loc_822398C4;
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// blr 
	return;
loc_822398C4:
	// stb r4,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822398CC"))) PPC_WEAK_FUNC(sub_822398CC);
PPC_FUNC_IMPL(__imp__sub_822398CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822398D0"))) PPC_WEAK_FUNC(sub_822398D0);
PPC_FUNC_IMPL(__imp__sub_822398D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,10752
	ctx.r10.s64 = ctx.r11.s64 + 10752;
	// lwz r11,128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r10,132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822398ec
	if (!ctx.cr6.lt) goto loc_822398EC;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_822398EC:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822398fc
	if (!ctx.cr6.gt) goto loc_822398FC;
	// stb r10,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r10.u8);
	// blr 
	return;
loc_822398FC:
	// stb r4,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239904"))) PPC_WEAK_FUNC(sub_82239904);
PPC_FUNC_IMPL(__imp__sub_82239904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239908"))) PPC_WEAK_FUNC(sub_82239908);
PPC_FUNC_IMPL(__imp__sub_82239908) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r5,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239914"))) PPC_WEAK_FUNC(sub_82239914);
PPC_FUNC_IMPL(__imp__sub_82239914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

