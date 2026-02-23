#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82239918"))) PPC_WEAK_FUNC(sub_82239918);
PPC_FUNC_IMPL(__imp__sub_82239918) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223992C"))) PPC_WEAK_FUNC(sub_8223992C);
PPC_FUNC_IMPL(__imp__sub_8223992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239930"))) PPC_WEAK_FUNC(sub_82239930);
PPC_FUNC_IMPL(__imp__sub_82239930) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,10
	ctx.r11.s64 = ctx.r4.s64 + 10;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239944"))) PPC_WEAK_FUNC(sub_82239944);
PPC_FUNC_IMPL(__imp__sub_82239944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239948"))) PPC_WEAK_FUNC(sub_82239948);
PPC_FUNC_IMPL(__imp__sub_82239948) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239960"))) PPC_WEAK_FUNC(sub_82239960);
PPC_FUNC_IMPL(__imp__sub_82239960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82239968;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8223998c
	if (!ctx.cr6.eq) goto loc_8223998C;
	// bl 0x8223a960
	ctx.lr = 0x82239988;
	sub_8223A960(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8223998C:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x822399b8
	if (!ctx.cr6.eq) goto loc_822399B8;
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,255
	ctx.r7.s64 = 255;
	// sthx r8,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u16);
	// stb r7,68(r10)
	PPC_STORE_U8(ctx.r10.u32 + 68, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_822399B8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822368b0
	ctx.lr = 0x822399C8;
	sub_822368B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822363e0
	ctx.lr = 0x822399DC;
	sub_822363E0(ctx, base);
	// addi r11,r30,11
	ctx.r11.s64 = ctx.r30.s64 + 11;
	// lbz r7,13(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// addi r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 + 40;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,14(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r4,15(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lhz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// sthx r9,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u16);
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// stb r8,68(r6)
	PPC_STORE_U8(ctx.r6.u32 + 68, ctx.r8.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82239A30"))) PPC_WEAK_FUNC(sub_82239A30);
PPC_FUNC_IMPL(__imp__sub_82239A30) {
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
	// lbz r4,88(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// lbz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// bl 0x8223d948
	ctx.lr = 0x82239A48;
	sub_8223D948(ctx, base);
	// bl 0x8223d978
	ctx.lr = 0x82239A4C;
	sub_8223D978(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r3,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_82239A64"))) PPC_WEAK_FUNC(sub_82239A64);
PPC_FUNC_IMPL(__imp__sub_82239A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239A68"))) PPC_WEAK_FUNC(sub_82239A68);
PPC_FUNC_IMPL(__imp__sub_82239A68) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82239A78:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82239a78
	if (ctx.cr6.lt) goto loc_82239A78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239A9C"))) PPC_WEAK_FUNC(sub_82239A9C);
PPC_FUNC_IMPL(__imp__sub_82239A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239AA0"))) PPC_WEAK_FUNC(sub_82239AA0);
PPC_FUNC_IMPL(__imp__sub_82239AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82239AA8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 2;
loc_82239AB8:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82239aec
	if (ctx.cr6.eq) goto loc_82239AEC;
	// lbz r4,86(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// bl 0x8223d948
	ctx.lr = 0x82239ACC;
	sub_8223D948(ctx, base);
	// bl 0x8223d978
	ctx.lr = 0x82239AD0;
	sub_8223D978(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82239adc
	if (ctx.cr6.eq) goto loc_82239ADC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82239ADC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82239ab8
	if (ctx.cr6.lt) goto loc_82239AB8;
loc_82239AEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82239AF8"))) PPC_WEAK_FUNC(sub_82239AF8);
PPC_FUNC_IMPL(__imp__sub_82239AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
loc_82239B14:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82239b34
	if (ctx.cr6.eq) goto loc_82239B34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82239b14
	if (ctx.cr6.lt) goto loc_82239B14;
loc_82239B34:
	// bl 0x82239aa0
	ctx.lr = 0x82239B38;
	sub_82239AA0(ctx, base);
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239B50"))) PPC_WEAK_FUNC(sub_82239B50);
PPC_FUNC_IMPL(__imp__sub_82239B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82239B58;
	sub_82248784(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,100
	ctx.r11.s64 = ctx.r4.s64 * 100;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82239c30
	if (ctx.cr6.eq) goto loc_82239C30;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x82239B80;
	sub_82248A40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82239740
	ctx.lr = 0x82239B88;
	sub_82239740(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82239B98:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82239bdc
	if (ctx.cr6.eq) goto loc_82239BDC;
	// lbz r4,86(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// bl 0x8223d948
	ctx.lr = 0x82239BAC;
	sub_8223D948(ctx, base);
	// bl 0x8223d978
	ctx.lr = 0x82239BB0;
	sub_8223D978(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82239bcc
	if (ctx.cr6.eq) goto loc_82239BCC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r31,-2
	ctx.r4.s64 = ctx.r31.s64 + -2;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,100
	ctx.r28.s64 = ctx.r28.s64 + 100;
	// bl 0x8214a2d8
	ctx.lr = 0x82239BCC;
	sub_8214A2D8(ctx, base);
loc_82239BCC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// blt cr6,0x82239b98
	if (ctx.cr6.lt) goto loc_82239B98;
loc_82239BDC:
	// mulli r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 * 100;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r1,82
	ctx.r31.s64 = ctx.r1.s64 + 82;
loc_82239BEC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82239c30
	if (ctx.cr6.eq) goto loc_82239C30;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// lbz r4,86(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// bl 0x8223d948
	ctx.lr = 0x82239C04;
	sub_8223D948(ctx, base);
	// bl 0x8223d978
	ctx.lr = 0x82239C08;
	sub_8223D978(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82239c20
	if (!ctx.cr6.eq) goto loc_82239C20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-2
	ctx.r4.s64 = ctx.r31.s64 + -2;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bl 0x8214a2d8
	ctx.lr = 0x82239C20;
	sub_8214A2D8(ctx, base);
loc_82239C20:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// blt cr6,0x82239bec
	if (ctx.cr6.lt) goto loc_82239BEC;
loc_82239C30:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82239C38"))) PPC_WEAK_FUNC(sub_82239C38);
PPC_FUNC_IMPL(__imp__sub_82239C38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82239740
	sub_82239740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82239C3C"))) PPC_WEAK_FUNC(sub_82239C3C);
PPC_FUNC_IMPL(__imp__sub_82239C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239C40"))) PPC_WEAK_FUNC(sub_82239C40);
PPC_FUNC_IMPL(__imp__sub_82239C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82239C48;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1624
	ctx.r4.s64 = 1624;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x82239C58;
	sub_822AA648(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,612
	ctx.r31.s64 = ctx.r31.s64 + 612;
	// li r26,10
	ctx.r26.s64 = 10;
	// li r27,1
	ctx.r27.s64 = 1;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// li r30,255
	ctx.r30.s64 = 255;
loc_82239C70:
	// addi r29,r31,-60
	ctx.r29.s64 = ctx.r31.s64 + -60;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x82239C80;
	sub_822AA648(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82239C8C;
	sub_822AA648(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r28,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r28.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r27,-41(r31)
	PPC_STORE_U8(ctx.r31.u32 + -41, ctx.r27.u8);
	// addi r9,r31,-40
	ctx.r9.s64 = ctx.r31.s64 + -40;
	// sth r28,-60(r31)
	PPC_STORE_U16(ctx.r31.u32 + -60, ctx.r28.u16);
	// stb r30,-55(r31)
	PPC_STORE_U8(ctx.r31.u32 + -55, ctx.r30.u8);
	// stb r30,-54(r31)
	PPC_STORE_U8(ctx.r31.u32 + -54, ctx.r30.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82239CB0:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82239cb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82239CB0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r30,24(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24, ctx.r30.u8);
	// stb r30,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r30.u8);
	// addi r11,r29,40
	ctx.r11.s64 = ctx.r29.s64 + 40;
	// stb r30,32(r29)
	PPC_STORE_U8(ctx.r29.u32 + 32, ctx.r30.u8);
	// stb r30,36(r29)
	PPC_STORE_U8(ctx.r29.u32 + 36, ctx.r30.u8);
	// stb r30,40(r29)
	PPC_STORE_U8(ctx.r29.u32 + 40, ctx.r30.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82239CDC:
	// stbu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82239cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82239CDC;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bne 0x82239c70
	if (!ctx.cr0.eq) goto loc_82239C70;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82239CF8"))) PPC_WEAK_FUNC(sub_82239CF8);
PPC_FUNC_IMPL(__imp__sub_82239CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x82239d30
	if (ctx.cr6.eq) goto loc_82239D30;
loc_82239D18:
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
loc_82239D30:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82239d18
	if (!ctx.cr6.eq) goto loc_82239D18;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82239d18
	if (!ctx.cr6.eq) goto loc_82239D18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239630
	ctx.lr = 0x82239D54;
	sub_82239630(ctx, base);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82239D78"))) PPC_WEAK_FUNC(sub_82239D78);
PPC_FUNC_IMPL(__imp__sub_82239D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r5,202
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 202, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,2052
	ctx.r3.s64 = ctx.r11.s64 + 2052;
	// b 0x820d7bf8
	sub_820D7BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82239DB8"))) PPC_WEAK_FUNC(sub_82239DB8);
PPC_FUNC_IMPL(__imp__sub_82239DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239DBC"))) PPC_WEAK_FUNC(sub_82239DBC);
PPC_FUNC_IMPL(__imp__sub_82239DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82239DC0"))) PPC_WEAK_FUNC(sub_82239DC0);
PPC_FUNC_IMPL(__imp__sub_82239DC0) {
	PPC_FUNC_PROLOGUE();
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r4,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r4.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,255
	ctx.r9.s64 = 255;
loc_82239DD8:
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82239dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82239DD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82239DE8"))) PPC_WEAK_FUNC(sub_82239DE8);
PPC_FUNC_IMPL(__imp__sub_82239DE8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82239e10
	if (!ctx.cr6.eq) goto loc_82239E10;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,1124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
loc_82239E10:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x822363e0
	ctx.lr = 0x82239E1C;
	sub_822363E0(ctx, base);
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r9,r11,10752
	ctx.r9.s64 = ctx.r11.s64 + 10752;
	// stb r8,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r8.u8);
	// lbz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r5,13(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lbz r4,14(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r7,15(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// stb r10,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r10.u8);
	// lbz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r6,17(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// lbz r5,18(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// lbz r8,19(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r11.u8);
	// lbz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// lbz r7,21(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// lbz r6,22(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lbz r10,23(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// lbz r4,5(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r4,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r4.u8);
	// lbz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// lbz r8,25(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// lbz r7,26(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// lbz r11,27(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// lwz r10,64(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r9,68(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// bge cr6,0x82239efc
	if (!ctx.cr6.lt) goto loc_82239EFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82239EFC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82239f08
	if (!ctx.cr6.gt) goto loc_82239F08;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82239F08:
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// lbz r8,30(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// lbz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// lbz r9,33(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// lbz r7,31(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 31);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lbz r5,7(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stb r5,94(r31)
	PPC_STORE_U8(ctx.r31.u32 + 94, ctx.r5.u8);
	// lbz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r4,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r4.u8);
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

__attribute__((alias("__imp__sub_82239F58"))) PPC_WEAK_FUNC(sub_82239F58);
PPC_FUNC_IMPL(__imp__sub_82239F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82239740
	ctx.lr = 0x82239F70;
	sub_82239740(ctx, base);
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

__attribute__((alias("__imp__sub_82239F88"))) PPC_WEAK_FUNC(sub_82239F88);
PPC_FUNC_IMPL(__imp__sub_82239F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82239c40
	ctx.lr = 0x82239FA0;
	sub_82239C40(ctx, base);
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

__attribute__((alias("__imp__sub_82239FB8"))) PPC_WEAK_FUNC(sub_82239FB8);
PPC_FUNC_IMPL(__imp__sub_82239FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,33
	ctx.r10.s64 = 33;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82239740
	ctx.lr = 0x82239FFC;
	sub_82239740(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82239c40
	ctx.lr = 0x8223A004;
	sub_82239C40(ctx, base);
	// stw r30,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8223A024"))) PPC_WEAK_FUNC(sub_8223A024);
PPC_FUNC_IMPL(__imp__sub_8223A024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A028"))) PPC_WEAK_FUNC(sub_8223A028);
PPC_FUNC_IMPL(__imp__sub_8223A028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8214a650
	ctx.lr = 0x8223A048;
	sub_8214A650(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1000
	ctx.r3.s64 = ctx.r31.s64 + 1000;
	// bl 0x82165910
	ctx.lr = 0x8223A054;
	sub_82165910(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223A06C"))) PPC_WEAK_FUNC(sub_8223A06C);
PPC_FUNC_IMPL(__imp__sub_8223A06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A070"))) PPC_WEAK_FUNC(sub_8223A070);
PPC_FUNC_IMPL(__imp__sub_8223A070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223A078;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82239740
	ctx.lr = 0x8223A08C;
	sub_82239740(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r30,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8223A0A4:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8223a0a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223A0A4;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x8223A0BC;
	sub_822AA648(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// bl 0x8223a960
	ctx.lr = 0x8223A0C8;
	sub_8223A960(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a0e4
	if (ctx.cr6.eq) goto loc_8223A0E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822361c8
	ctx.lr = 0x8223A0E4;
	sub_822361C8(ctx, base);
loc_8223A0E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223A0EC"))) PPC_WEAK_FUNC(sub_8223A0EC);
PPC_FUNC_IMPL(__imp__sub_8223A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A0F0"))) PPC_WEAK_FUNC(sub_8223A0F0);
PPC_FUNC_IMPL(__imp__sub_8223A0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8223a164
	if (!ctx.cr6.eq) goto loc_8223A164;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1124(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1124);
	// bl 0x822368b0
	ctx.lr = 0x8223A128;
	sub_822368B0(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8223A138:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8223a138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223A138;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239de8
	ctx.lr = 0x8223A150;
	sub_82239DE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8223A164:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8223A174:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8223a174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223A174;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223A194"))) PPC_WEAK_FUNC(sub_8223A194);
PPC_FUNC_IMPL(__imp__sub_8223A194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A198"))) PPC_WEAK_FUNC(sub_8223A198);
PPC_FUNC_IMPL(__imp__sub_8223A198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8223a070
	ctx.lr = 0x8223A1C0;
	sub_8223A070(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8223a070
	ctx.lr = 0x8223A1D0;
	sub_8223A070(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8223a070
	ctx.lr = 0x8223A1E0;
	sub_8223A070(ctx, base);
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8223a070
	ctx.lr = 0x8223A1F0;
	sub_8223A070(ctx, base);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8223a070
	ctx.lr = 0x8223A200;
	sub_8223A070(ctx, base);
	// addi r3,r31,500
	ctx.r3.s64 = ctx.r31.s64 + 500;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8223a070
	ctx.lr = 0x8223A210;
	sub_8223A070(ctx, base);
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8223a070
	ctx.lr = 0x8223A220;
	sub_8223A070(ctx, base);
	// addi r3,r31,700
	ctx.r3.s64 = ctx.r31.s64 + 700;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8223a070
	ctx.lr = 0x8223A230;
	sub_8223A070(ctx, base);
	// addi r31,r31,800
	ctx.r31.s64 = ctx.r31.s64 + 800;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223a070
	ctx.lr = 0x8223A244;
	sub_8223A070(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x8223a070
	ctx.lr = 0x8223A254;
	sub_8223A070(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223A26C"))) PPC_WEAK_FUNC(sub_8223A26C);
PPC_FUNC_IMPL(__imp__sub_8223A26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A270"))) PPC_WEAK_FUNC(sub_8223A270);
PPC_FUNC_IMPL(__imp__sub_8223A270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8223A278;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82239c40
	ctx.lr = 0x8223A288;
	sub_82239C40(ctx, base);
	// li r3,201
	ctx.r3.s64 = 201;
	// bl 0x82164ad8
	ctx.lr = 0x8223A290;
	sub_82164AD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,420
	ctx.r5.s64 = 420;
	// bl 0x821847a8
	ctx.lr = 0x8223A2A0;
	sub_821847A8(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// stb r28,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r28.u8);
	// li r4,24999
	ctx.r4.s64 = 24999;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223A2C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a344
	if (ctx.cr6.eq) goto loc_8223A344;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,13698
	ctx.r4.s64 = 13698;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223A2E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,67
	ctx.r4.s64 = 67;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x8218a128
	ctx.lr = 0x8223A2F4;
	sub_8218A128(ctx, base);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,13698
	ctx.r4.s64 = 13698;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8223A30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,193
	ctx.r4.s64 = 193;
	// addi r3,r31,98
	ctx.r3.s64 = ctx.r31.s64 + 98;
	// bl 0x8218a128
	ctx.lr = 0x8223A31C;
	sub_8218A128(ctx, base);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,13698
	ctx.r4.s64 = 13698;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8223A334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x8218a128
	ctx.lr = 0x8223A344;
	sub_8218A128(ctx, base);
loc_8223A344:
	// li r11,4096
	ctx.r11.s64 = 4096;
	// li r3,201
	ctx.r3.s64 = 201;
	// sth r11,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
	// sth r11,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r11.u16);
	// bl 0x82164a48
	ctx.lr = 0x8223A358;
	sub_82164A48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x821847a8
	ctx.lr = 0x8223A368;
	sub_821847A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// bl 0x8223a198
	ctx.lr = 0x8223A374;
	sub_8223A198(ctx, base);
	// stb r28,1552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1552, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8223A380"))) PPC_WEAK_FUNC(sub_8223A380);
PPC_FUNC_IMPL(__imp__sub_8223A380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8223A388;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,33
	ctx.r10.s64 = 33;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82239740
	ctx.lr = 0x8223A3C4;
	sub_82239740(ctx, base);
	// addi r29,r31,120
	ctx.r29.s64 = ctx.r31.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82239c40
	ctx.lr = 0x8223A3D0;
	sub_82239C40(ctx, base);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r28,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82239740
	ctx.lr = 0x8223A3E0;
	sub_82239740(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223a270
	ctx.lr = 0x8223A3EC;
	sub_8223A270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8223A3F4"))) PPC_WEAK_FUNC(sub_8223A3F4);
PPC_FUNC_IMPL(__imp__sub_8223A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A3F8"))) PPC_WEAK_FUNC(sub_8223A3F8);
PPC_FUNC_IMPL(__imp__sub_8223A3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223A400;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,672
	ctx.r4.s64 = ctx.r4.s64 + 672;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8214a650
	ctx.lr = 0x8223A418;
	sub_8214A650(ctx, base);
	// mulli r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 * 100;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r30,1000
	ctx.r3.s64 = ctx.r30.s64 + 1000;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x82165910
	ctx.lr = 0x8223A42C;
	sub_82165910(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223A434"))) PPC_WEAK_FUNC(sub_8223A434);
PPC_FUNC_IMPL(__imp__sub_8223A434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A438"))) PPC_WEAK_FUNC(sub_8223A438);
PPC_FUNC_IMPL(__imp__sub_8223A438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8223A440;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82239740
	ctx.lr = 0x8223A458;
	sub_82239740(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r30,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8223A470:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8223a470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223A470;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x8223A488;
	sub_822AA648(ctx, base);
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// lwz r27,1124(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1124);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8223a57c
	if (ctx.cr6.eq) goto loc_8223A57C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822361c8
	ctx.lr = 0x8223A4B8;
	sub_822361C8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a57c
	if (ctx.cr6.eq) goto loc_8223A57C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,2052
	ctx.r3.s64 = ctx.r11.s64 + 2052;
	// bl 0x820d78b0
	ctx.lr = 0x8223A4DC;
	sub_820D78B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a57c
	if (ctx.cr6.eq) goto loc_8223A57C;
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8223a57c
	if (ctx.cr6.eq) goto loc_8223A57C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8223A500:
	// lbz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8223a528
	if (ctx.cr6.eq) goto loc_8223A528;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 + 68;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x8223a500
	if (ctx.cr6.lt) goto loc_8223A500;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8223A528:
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// lhzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82236360
	ctx.lr = 0x8223A540;
	sub_82236360(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r5,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r5.u16);
	// lwz r3,1124(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1124);
	// bl 0x822368b0
	ctx.lr = 0x8223A554;
	sub_822368B0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_8223A564:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8223a564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223A564;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239de8
	ctx.lr = 0x8223A57C;
	sub_82239DE8(ctx, base);
loc_8223A57C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8223A584"))) PPC_WEAK_FUNC(sub_8223A584);
PPC_FUNC_IMPL(__imp__sub_8223A584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A588"))) PPC_WEAK_FUNC(sub_8223A588);
PPC_FUNC_IMPL(__imp__sub_8223A588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223A590;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8223a438
	ctx.lr = 0x8223A5AC;
	sub_8223A438(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x8223a438
	ctx.lr = 0x8223A5C0;
	sub_8223A438(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x8223a438
	ctx.lr = 0x8223A5D4;
	sub_8223A438(ctx, base);
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x8223a438
	ctx.lr = 0x8223A5E8;
	sub_8223A438(ctx, base);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x8223a438
	ctx.lr = 0x8223A5FC;
	sub_8223A438(ctx, base);
	// addi r3,r31,500
	ctx.r3.s64 = ctx.r31.s64 + 500;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x8223a438
	ctx.lr = 0x8223A610;
	sub_8223A438(ctx, base);
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x8223a438
	ctx.lr = 0x8223A624;
	sub_8223A438(ctx, base);
	// addi r3,r31,700
	ctx.r3.s64 = ctx.r31.s64 + 700;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x8223a438
	ctx.lr = 0x8223A638;
	sub_8223A438(ctx, base);
	// addi r31,r31,800
	ctx.r31.s64 = ctx.r31.s64 + 800;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223a438
	ctx.lr = 0x8223A650;
	sub_8223A438(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223a438
	ctx.lr = 0x8223A664;
	sub_8223A438(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223A66C"))) PPC_WEAK_FUNC(sub_8223A66C);
PPC_FUNC_IMPL(__imp__sub_8223A66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A670"))) PPC_WEAK_FUNC(sub_8223A670);
PPC_FUNC_IMPL(__imp__sub_8223A670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8223A678;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82239c40
	ctx.lr = 0x8223A68C;
	sub_82239C40(ctx, base);
	// li r3,201
	ctx.r3.s64 = 201;
	// bl 0x82164ad8
	ctx.lr = 0x8223A694;
	sub_82164AD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,420
	ctx.r5.s64 = 420;
	// bl 0x821847a8
	ctx.lr = 0x8223A6A4;
	sub_821847A8(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// stb r27,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r27.u8);
	// li r4,24999
	ctx.r4.s64 = 24999;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223A6C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a748
	if (ctx.cr6.eq) goto loc_8223A748;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,13698
	ctx.r4.s64 = 13698;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223A6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,67
	ctx.r4.s64 = 67;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x8218a128
	ctx.lr = 0x8223A6F8;
	sub_8218A128(ctx, base);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,13698
	ctx.r4.s64 = 13698;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8223A710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,193
	ctx.r4.s64 = 193;
	// addi r3,r31,98
	ctx.r3.s64 = ctx.r31.s64 + 98;
	// bl 0x8218a128
	ctx.lr = 0x8223A720;
	sub_8218A128(ctx, base);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,13698
	ctx.r4.s64 = 13698;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8223A738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x8218a128
	ctx.lr = 0x8223A748;
	sub_8218A128(ctx, base);
loc_8223A748:
	// li r11,4096
	ctx.r11.s64 = 4096;
	// li r3,201
	ctx.r3.s64 = 201;
	// sth r11,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
	// sth r11,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r11.u16);
	// bl 0x82164a48
	ctx.lr = 0x8223A75C;
	sub_82164A48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x821847a8
	ctx.lr = 0x8223A76C;
	sub_821847A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// bl 0x8223a588
	ctx.lr = 0x8223A77C;
	sub_8223A588(ctx, base);
	// stb r27,1552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1552, ctx.r27.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8223A788"))) PPC_WEAK_FUNC(sub_8223A788);
PPC_FUNC_IMPL(__imp__sub_8223A788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8223A790;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,33
	ctx.r10.s64 = 33;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82239740
	ctx.lr = 0x8223A7D0;
	sub_82239740(ctx, base);
	// addi r29,r31,120
	ctx.r29.s64 = ctx.r31.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82239c40
	ctx.lr = 0x8223A7DC;
	sub_82239C40(ctx, base);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r28,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82239740
	ctx.lr = 0x8223A7EC;
	sub_82239740(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223a670
	ctx.lr = 0x8223A7FC;
	sub_8223A670(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8223A804"))) PPC_WEAK_FUNC(sub_8223A804);
PPC_FUNC_IMPL(__imp__sub_8223A804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A808"))) PPC_WEAK_FUNC(sub_8223A808);
PPC_FUNC_IMPL(__imp__sub_8223A808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bne cr6,0x8223a890
	if (!ctx.cr6.eq) goto loc_8223A890;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223a890
	if (!ctx.cr6.eq) goto loc_8223A890;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,1124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// bl 0x8218f0b0
	ctx.lr = 0x8223A840;
	sub_8218F0B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223a890
	if (ctx.cr6.eq) goto loc_8223A890;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x820f3a78
	ctx.lr = 0x8223A850;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223a890
	if (ctx.cr6.eq) goto loc_8223A890;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820f3a78
	ctx.lr = 0x8223A860;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223a890
	if (ctx.cr6.eq) goto loc_8223A890;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822344a0
	ctx.lr = 0x8223A870;
	sub_822344A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223a890
	if (ctx.cr6.eq) goto loc_8223A890;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820f3a78
	ctx.lr = 0x8223A880;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223a890
	if (ctx.cr6.eq) goto loc_8223A890;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8223A890:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223A8A4"))) PPC_WEAK_FUNC(sub_8223A8A4);
PPC_FUNC_IMPL(__imp__sub_8223A8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A8A8"))) PPC_WEAK_FUNC(sub_8223A8A8);
PPC_FUNC_IMPL(__imp__sub_8223A8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223A8C4"))) PPC_WEAK_FUNC(sub_8223A8C4);
PPC_FUNC_IMPL(__imp__sub_8223A8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A8C8"))) PPC_WEAK_FUNC(sub_8223A8C8);
PPC_FUNC_IMPL(__imp__sub_8223A8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lwz r10,1144(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,36
	ctx.r11.s64 = 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// b 0x8223a8fc
	goto loc_8223A8FC;
loc_8223A8F8:
	// lwz r10,1144(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1144);
loc_8223A8FC:
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8223a8f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223A8F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223A90C"))) PPC_WEAK_FUNC(sub_8223A90C);
PPC_FUNC_IMPL(__imp__sub_8223A90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A910"))) PPC_WEAK_FUNC(sub_8223A910);
PPC_FUNC_IMPL(__imp__sub_8223A910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a950
	if (ctx.cr6.eq) goto loc_8223A950;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223a950
	if (ctx.cr6.eq) goto loc_8223A950;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
loc_8223A934:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8223a958
	if (ctx.cr6.eq) goto loc_8223A958;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8223a934
	if (ctx.cr6.lt) goto loc_8223A934;
loc_8223A950:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8223A958:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223A960"))) PPC_WEAK_FUNC(sub_8223A960);
PPC_FUNC_IMPL(__imp__sub_8223A960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a988
	if (ctx.cr6.eq) goto loc_8223A988;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223a988
	if (ctx.cr6.eq) goto loc_8223A988;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,1124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// blr 
	return;
loc_8223A988:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223A990"))) PPC_WEAK_FUNC(sub_8223A990);
PPC_FUNC_IMPL(__imp__sub_8223A990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a9dc
	if (ctx.cr6.eq) goto loc_8223A9DC;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x820f3a78
	ctx.lr = 0x8223A9B8;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223a9dc
	if (ctx.cr6.eq) goto loc_8223A9DC;
	// lwz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8223A9DC:
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

__attribute__((alias("__imp__sub_8223A9F4"))) PPC_WEAK_FUNC(sub_8223A9F4);
PPC_FUNC_IMPL(__imp__sub_8223A9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223A9F8"))) PPC_WEAK_FUNC(sub_8223A9F8);
PPC_FUNC_IMPL(__imp__sub_8223A9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223aa1c
	if (ctx.cr6.eq) goto loc_8223AA1C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223aa1c
	if (ctx.cr6.eq) goto loc_8223AA1C;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
loc_8223AA1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223AA24"))) PPC_WEAK_FUNC(sub_8223AA24);
PPC_FUNC_IMPL(__imp__sub_8223AA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223AA28"))) PPC_WEAK_FUNC(sub_8223AA28);
PPC_FUNC_IMPL(__imp__sub_8223AA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223aa4c
	if (ctx.cr6.eq) goto loc_8223AA4C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223aa4c
	if (ctx.cr6.eq) goto loc_8223AA4C;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
loc_8223AA4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223AA54"))) PPC_WEAK_FUNC(sub_8223AA54);
PPC_FUNC_IMPL(__imp__sub_8223AA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223AA58"))) PPC_WEAK_FUNC(sub_8223AA58);
PPC_FUNC_IMPL(__imp__sub_8223AA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223AA60;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223ab24
	if (!ctx.cr6.eq) goto loc_8223AB24;
	// li r3,6932
	ctx.r3.s64 = 6932;
	// bl 0x82080000
	ctx.lr = 0x8223AA80;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223aa90
	if (ctx.cr6.eq) goto loc_8223AA90;
	// bl 0x82244070
	ctx.lr = 0x8223AA8C;
	sub_82244070(ctx, base);
	// b 0x8223aa94
	goto loc_8223AA94;
loc_8223AA90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223AA94:
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82080000
	ctx.lr = 0x8223AAA0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223aab0
	if (ctx.cr6.eq) goto loc_8223AAB0;
	// bl 0x8223b450
	ctx.lr = 0x8223AAAC;
	sub_8223B450(ctx, base);
	// b 0x8223aab4
	goto loc_8223AAB4;
loc_8223AAB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223AAB4:
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// li r3,988
	ctx.r3.s64 = 988;
	// bl 0x82080000
	ctx.lr = 0x8223AAC0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223aad8
	if (ctx.cr6.eq) goto loc_8223AAD8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82238e18
	ctx.lr = 0x8223AAD4;
	sub_82238E18(ctx, base);
	// b 0x8223aadc
	goto loc_8223AADC;
loc_8223AAD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223AADC:
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82080000
	ctx.lr = 0x8223AAE8;
	sub_82080000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ab1c
	if (ctx.cr6.eq) goto loc_8223AB1C;
	// bl 0x82182e90
	ctx.lr = 0x8223AAF8;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x8223AB00;
	sub_82182E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82243d38
	ctx.lr = 0x8223AB10;
	sub_82243D38(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8223AB1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
loc_8223AB24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223AB2C"))) PPC_WEAK_FUNC(sub_8223AB2C);
PPC_FUNC_IMPL(__imp__sub_8223AB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223AB30"))) PPC_WEAK_FUNC(sub_8223AB30);
PPC_FUNC_IMPL(__imp__sub_8223AB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8223AB38;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,1144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ac14
	if (ctx.cr6.eq) goto loc_8223AC14;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223ac14
	if (ctx.cr6.eq) goto loc_8223AC14;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x822389a8
	ctx.lr = 0x8223AB6C;
	sub_822389A8(ctx, base);
	// bl 0x8223a990
	ctx.lr = 0x8223AB70;
	sub_8223A990(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82243ff8
	ctx.lr = 0x8223AB80;
	sub_82243FF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82244170
	ctx.lr = 0x8223AB8C;
	sub_82244170(ctx, base);
	// lwz r11,1144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223abac
	if (ctx.cr6.eq) goto loc_8223ABAC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223abac
	if (ctx.cr6.eq) goto loc_8223ABAC;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8223abb0
	goto loc_8223ABB0;
loc_8223ABAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223ABB0:
	// bl 0x82238a58
	ctx.lr = 0x8223ABB4;
	sub_82238A58(ctx, base);
	// lwz r11,1144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223abd4
	if (ctx.cr6.eq) goto loc_8223ABD4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223abd4
	if (ctx.cr6.eq) goto loc_8223ABD4;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8223abd8
	goto loc_8223ABD8;
loc_8223ABD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223ABD8:
	// bl 0x822382c8
	ctx.lr = 0x8223ABDC;
	sub_822382C8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8223ac14
	if (ctx.cr6.eq) goto loc_8223AC14;
	// lwz r11,1144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ac0c
	if (ctx.cr6.eq) goto loc_8223AC0C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223ac0c
	if (ctx.cr6.eq) goto loc_8223AC0C;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82237bb8
	ctx.lr = 0x8223AC04;
	sub_82237BB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8223AC0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82237bb8
	ctx.lr = 0x8223AC14;
	sub_82237BB8(ctx, base);
loc_8223AC14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8223AC1C"))) PPC_WEAK_FUNC(sub_8223AC1C);
PPC_FUNC_IMPL(__imp__sub_8223AC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223AC20"))) PPC_WEAK_FUNC(sub_8223AC20);
PPC_FUNC_IMPL(__imp__sub_8223AC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8223AC28;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,1144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ad3c
	if (ctx.cr6.eq) goto loc_8223AD3C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223ad3c
	if (ctx.cr6.eq) goto loc_8223AD3C;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x822389a8
	ctx.lr = 0x8223AC60;
	sub_822389A8(ctx, base);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163d10
	ctx.lr = 0x8223AC6C;
	sub_82163D10(ctx, base);
	// bl 0x8223a990
	ctx.lr = 0x8223AC70;
	sub_8223A990(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82244370
	ctx.lr = 0x8223AC80;
	sub_82244370(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82244170
	ctx.lr = 0x8223AC8C;
	sub_82244170(ctx, base);
	// lwz r11,1144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223acac
	if (ctx.cr6.eq) goto loc_8223ACAC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223acac
	if (ctx.cr6.eq) goto loc_8223ACAC;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8223acb0
	goto loc_8223ACB0;
loc_8223ACAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223ACB0:
	// bl 0x82238a58
	ctx.lr = 0x8223ACB4;
	sub_82238A58(ctx, base);
	// lwz r11,1144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223acd4
	if (ctx.cr6.eq) goto loc_8223ACD4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223acd4
	if (ctx.cr6.eq) goto loc_8223ACD4;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8223acd8
	goto loc_8223ACD8;
loc_8223ACD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223ACD8:
	// bl 0x822382c8
	ctx.lr = 0x8223ACDC;
	sub_822382C8(ctx, base);
	// lwz r11,1144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223acfc
	if (ctx.cr6.eq) goto loc_8223ACFC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223acfc
	if (ctx.cr6.eq) goto loc_8223ACFC;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8223ad00
	goto loc_8223AD00;
loc_8223ACFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223AD00:
	// bl 0x82237bb8
	ctx.lr = 0x8223AD04;
	sub_82237BB8(ctx, base);
	// lwz r11,1144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223ad30
	if (ctx.cr6.eq) goto loc_8223AD30;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223ad30
	if (ctx.cr6.eq) goto loc_8223AD30;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8223AD30:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_8223AD3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8223AD44"))) PPC_WEAK_FUNC(sub_8223AD44);
PPC_FUNC_IMPL(__imp__sub_8223AD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223AD48"))) PPC_WEAK_FUNC(sub_8223AD48);
PPC_FUNC_IMPL(__imp__sub_8223AD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223ad80
	if (!ctx.cr6.eq) goto loc_8223AD80;
loc_8223AD68:
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
loc_8223AD80:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223ad94
	if (ctx.cr6.eq) goto loc_8223AD94;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8223ad98
	goto loc_8223AD98;
loc_8223AD94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223AD98:
	// bl 0x822344a8
	ctx.lr = 0x8223AD9C;
	sub_822344A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223ad68
	if (!ctx.cr6.eq) goto loc_8223AD68;
	// lwz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223adc4
	if (ctx.cr6.eq) goto loc_8223ADC4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223adc4
	if (ctx.cr6.eq) goto loc_8223ADC4;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8223adc8
	goto loc_8223ADC8;
loc_8223ADC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223ADC8:
	// bl 0x82156a10
	ctx.lr = 0x8223ADCC;
	sub_82156A10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223ad68
	if (ctx.cr6.eq) goto loc_8223AD68;
	// lwz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223adf4
	if (ctx.cr6.eq) goto loc_8223ADF4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223adf4
	if (ctx.cr6.eq) goto loc_8223ADF4;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8223adf8
	goto loc_8223ADF8;
loc_8223ADF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223ADF8:
	// bl 0x82243a98
	ctx.lr = 0x8223ADFC;
	sub_82243A98(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223AE18"))) PPC_WEAK_FUNC(sub_8223AE18);
PPC_FUNC_IMPL(__imp__sub_8223AE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r9,1144(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223af68
	if (ctx.cr6.eq) goto loc_8223AF68;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223af68
	if (ctx.cr6.eq) goto loc_8223AF68;
	// addi r10,r9,36
	ctx.r10.s64 = ctx.r9.s64 + 36;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8223AE54:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8223ae98
	if (ctx.cr6.eq) goto loc_8223AE98;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8223ae54
	if (ctx.cr6.lt) goto loc_8223AE54;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8223AE78:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8223aed0
	if (ctx.cr6.eq) goto loc_8223AED0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8223ae78
	if (ctx.cr6.lt) goto loc_8223AE78;
	// b 0x8223af68
	goto loc_8223AF68;
loc_8223AE98:
	// addi r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// bl 0x8223a990
	ctx.lr = 0x8223AEA8;
	sub_8223A990(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822441f8
	ctx.lr = 0x8223AEB0;
	sub_822441F8(ctx, base);
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223af30
	if (ctx.cr6.eq) goto loc_8223AF30;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223af30
	if (ctx.cr6.eq) goto loc_8223AF30;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8223af34
	goto loc_8223AF34;
loc_8223AED0:
	// addi r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223af04
	if (ctx.cr6.eq) goto loc_8223AF04;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x820f3a78
	ctx.lr = 0x8223AEF0;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223af04
	if (ctx.cr6.eq) goto loc_8223AF04;
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8223af08
	goto loc_8223AF08;
loc_8223AF04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223AF08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822441f8
	ctx.lr = 0x8223AF10;
	sub_822441F8(ctx, base);
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223af30
	if (ctx.cr6.eq) goto loc_8223AF30;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223af30
	if (ctx.cr6.eq) goto loc_8223AF30;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8223af34
	goto loc_8223AF34;
loc_8223AF30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223AF34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82243ab0
	ctx.lr = 0x8223AF3C;
	sub_82243AB0(ctx, base);
	// lwz r11,1144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223af5c
	if (ctx.cr6.eq) goto loc_8223AF5C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223af5c
	if (ctx.cr6.eq) goto loc_8223AF5C;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8223af60
	goto loc_8223AF60;
loc_8223AF5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223AF60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82237bd0
	ctx.lr = 0x8223AF68;
	sub_82237BD0(ctx, base);
loc_8223AF68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223AF80"))) PPC_WEAK_FUNC(sub_8223AF80);
PPC_FUNC_IMPL(__imp__sub_8223AF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223AF88;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,1144(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223b0b0
	if (ctx.cr6.eq) goto loc_8223B0B0;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223b0b0
	if (ctx.cr6.eq) goto loc_8223B0B0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223b0b0
	if (ctx.cr6.eq) goto loc_8223B0B0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r10,36
	ctx.r11.s64 = ctx.r10.s64 + 36;
loc_8223AFBC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8223afe0
	if (ctx.cr6.eq) goto loc_8223AFE0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8223afbc
	if (ctx.cr6.lt) goto loc_8223AFBC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8223AFE0:
	// addi r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 9;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x8223a990
	ctx.lr = 0x8223AFF4;
	sub_8223A990(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82244258
	ctx.lr = 0x8223B000;
	sub_82244258(ctx, base);
	// lwz r11,1144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b020
	if (ctx.cr6.eq) goto loc_8223B020;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223b020
	if (ctx.cr6.eq) goto loc_8223B020;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8223b024
	goto loc_8223B024;
loc_8223B020:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223B024:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82243b00
	ctx.lr = 0x8223B02C;
	sub_82243B00(ctx, base);
	// lwz r11,1144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b04c
	if (ctx.cr6.eq) goto loc_8223B04C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223b04c
	if (ctx.cr6.eq) goto loc_8223B04C;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8223b050
	goto loc_8223B050;
loc_8223B04C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223B050:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82237be8
	ctx.lr = 0x8223B058;
	sub_82237BE8(ctx, base);
	// lwz r11,1144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b078
	if (ctx.cr6.eq) goto loc_8223B078;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223b078
	if (ctx.cr6.eq) goto loc_8223B078;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8223b07c
	goto loc_8223B07C;
loc_8223B078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223B07C:
	// bl 0x82238a58
	ctx.lr = 0x8223B080;
	sub_82238A58(ctx, base);
	// lwz r11,1144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b0a8
	if (ctx.cr6.eq) goto loc_8223B0A8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223b0a8
	if (ctx.cr6.eq) goto loc_8223B0A8;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x822382c8
	ctx.lr = 0x8223B0A0;
	sub_822382C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8223B0A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822382c8
	ctx.lr = 0x8223B0B0;
	sub_822382C8(ctx, base);
loc_8223B0B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223B0B8"))) PPC_WEAK_FUNC(sub_8223B0B8);
PPC_FUNC_IMPL(__imp__sub_8223B0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r9,1144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,36
	ctx.r11.s64 = ctx.r9.s64 + 36;
loc_8223B0E4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8223b104
	if (ctx.cr6.eq) goto loc_8223B104;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8223b0e4
	if (ctx.cr6.lt) goto loc_8223B0E4;
	// blr 
	return;
loc_8223B104:
	// addi r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B118"))) PPC_WEAK_FUNC(sub_8223B118);
PPC_FUNC_IMPL(__imp__sub_8223B118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223B120;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x8223B13C;
	sub_82185740(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// addi r9,r10,-280
	ctx.r9.s64 = ctx.r10.s64 + -280;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8223aa58
	ctx.lr = 0x8223B170;
	sub_8223AA58(ctx, base);
	// lwsync 
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r31,1144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1144, ctx.r31.u32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8223b190
	if (!ctx.cr6.eq) goto loc_8223B190;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82238b38
	ctx.lr = 0x8223B190;
	sub_82238B38(ctx, base);
loc_8223B190:
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223B1AC"))) PPC_WEAK_FUNC(sub_8223B1AC);
PPC_FUNC_IMPL(__imp__sub_8223B1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B1B0"))) PPC_WEAK_FUNC(sub_8223B1B0);
PPC_FUNC_IMPL(__imp__sub_8223B1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223B1B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-280
	ctx.r10.s64 = ctx.r11.s64 + -280;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,1144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1144, ctx.r29.u32);
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223b200
	if (ctx.cr6.eq) goto loc_8223B200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8223B1F4;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223B200;
	sub_82183E40(ctx, base);
loc_8223B200:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b224
	if (ctx.cr6.eq) goto loc_8223B224;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223B224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223B224:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b248
	if (ctx.cr6.eq) goto loc_8223B248;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223B248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223B248:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b26c
	if (ctx.cr6.eq) goto loc_8223B26C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223B26C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223B26C:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x8223B278;
	sub_821857F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223B280"))) PPC_WEAK_FUNC(sub_8223B280);
PPC_FUNC_IMPL(__imp__sub_8223B280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8223b1b0
	ctx.lr = 0x8223B2A0;
	sub_8223B1B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b2bc
	if (ctx.cr6.eq) goto loc_8223B2BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8223B2B8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8223B2BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B2D4"))) PPC_WEAK_FUNC(sub_8223B2D4);
PPC_FUNC_IMPL(__imp__sub_8223B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B2D8"))) PPC_WEAK_FUNC(sub_8223B2D8);
PPC_FUNC_IMPL(__imp__sub_8223B2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8223B2F4"))) PPC_WEAK_FUNC(sub_8223B2F4);
PPC_FUNC_IMPL(__imp__sub_8223B2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B2F8"))) PPC_WEAK_FUNC(sub_8223B2F8);
PPC_FUNC_IMPL(__imp__sub_8223B2F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B30C"))) PPC_WEAK_FUNC(sub_8223B30C);
PPC_FUNC_IMPL(__imp__sub_8223B30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B310"))) PPC_WEAK_FUNC(sub_8223B310);
PPC_FUNC_IMPL(__imp__sub_8223B310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B324"))) PPC_WEAK_FUNC(sub_8223B324);
PPC_FUNC_IMPL(__imp__sub_8223B324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B328"))) PPC_WEAK_FUNC(sub_8223B328);
PPC_FUNC_IMPL(__imp__sub_8223B328) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B33C"))) PPC_WEAK_FUNC(sub_8223B33C);
PPC_FUNC_IMPL(__imp__sub_8223B33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B340"))) PPC_WEAK_FUNC(sub_8223B340);
PPC_FUNC_IMPL(__imp__sub_8223B340) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8223b38c
	if (!ctx.cr6.eq) goto loc_8223B38C;
loc_8223B370:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
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
loc_8223B38C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8223db08
	ctx.lr = 0x8223B394;
	sub_8223DB08(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,52
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 52, ctx.xer);
	// beq cr6,0x8223b370
	if (ctx.cr6.eq) goto loc_8223B370;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// addi r7,r9,8708
	ctx.r7.s64 = ctx.r9.s64 + 8708;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r5,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// bl 0x8223cfb0
	ctx.lr = 0x8223B3D0;
	sub_8223CFB0(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_8223B3E8"))) PPC_WEAK_FUNC(sub_8223B3E8);
PPC_FUNC_IMPL(__imp__sub_8223B3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223B3F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8223db08
	ctx.lr = 0x8223B40C;
	sub_8223DB08(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223b434
	if (!ctx.cr6.eq) goto loc_8223B434;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8223B434:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8223d160
	ctx.lr = 0x8223B444;
	sub_8223D160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223B44C"))) PPC_WEAK_FUNC(sub_8223B44C);
PPC_FUNC_IMPL(__imp__sub_8223B44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B450"))) PPC_WEAK_FUNC(sub_8223B450);
PPC_FUNC_IMPL(__imp__sub_8223B450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x8223B470;
	sub_82185740(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-272
	ctx.r8.s64 = ctx.r10.s64 + -272;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r3,14516(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14516);
	// bl 0x82166158
	ctx.lr = 0x8223B4CC;
	sub_82166158(ctx, base);
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

__attribute__((alias("__imp__sub_8223B4E4"))) PPC_WEAK_FUNC(sub_8223B4E4);
PPC_FUNC_IMPL(__imp__sub_8223B4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B4E8"))) PPC_WEAK_FUNC(sub_8223B4E8);
PPC_FUNC_IMPL(__imp__sub_8223B4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223B4F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r31,r10,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223b588
	if (ctx.cr6.eq) goto loc_8223B588;
	// addi r30,r31,596
	ctx.r30.s64 = ctx.r31.s64 + 596;
	// stw r4,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8223b540
	if (ctx.cr6.eq) goto loc_8223B540;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82163ef8
	ctx.lr = 0x8223B52C;
	sub_82163EF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82156f00
	ctx.lr = 0x8223B538;
	sub_82156F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8223b558
	goto loc_8223B558;
loc_8223B540:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82163ef8
	ctx.lr = 0x8223B548;
	sub_82163EF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x8223B554;
	sub_82156F00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_8223B558:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f0
	ctx.lr = 0x8223B560;
	sub_820EF4F0(ctx, base);
	// lis r4,17490
	ctx.r4.s64 = 1146224640;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,21586
	ctx.r4.u64 = ctx.r4.u64 | 21586;
	// bl 0x821882d0
	ctx.lr = 0x8223B570;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b588
	if (ctx.cr6.eq) goto loc_8223B588;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b588
	if (ctx.cr6.eq) goto loc_8223B588;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_8223B588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223B590"))) PPC_WEAK_FUNC(sub_8223B590);
PPC_FUNC_IMPL(__imp__sub_8223B590) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b5b0
	if (ctx.cr6.eq) goto loc_8223B5B0;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// std r10,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r8.u64);
loc_8223B5B0:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// std r10,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B5D4"))) PPC_WEAK_FUNC(sub_8223B5D4);
PPC_FUNC_IMPL(__imp__sub_8223B5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B5D8"))) PPC_WEAK_FUNC(sub_8223B5D8);
PPC_FUNC_IMPL(__imp__sub_8223B5D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b5f8
	if (ctx.cr6.eq) goto loc_8223B5F8;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// std r10,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r8.u64);
loc_8223B5F8:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// std r10,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B61C"))) PPC_WEAK_FUNC(sub_8223B61C);
PPC_FUNC_IMPL(__imp__sub_8223B61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B620"))) PPC_WEAK_FUNC(sub_8223B620);
PPC_FUNC_IMPL(__imp__sub_8223B620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// beq cr6,0x8223b680
	if (ctx.cr6.eq) goto loc_8223B680;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r7.u64);
	// std r6,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r6.u64);
loc_8223B680:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223b6a4
	if (ctx.cr6.eq) goto loc_8223B6A4;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r7.u64);
	// std r6,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r6.u64);
loc_8223B6A4:
	// ld r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 416);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// ld r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 424);
	// addi r7,r11,416
	ctx.r7.s64 = ctx.r11.s64 + 416;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// beq cr6,0x8223b6e0
	if (ctx.cr6.eq) goto loc_8223B6E0;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r8.u64);
	// std r7,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r7.u64);
loc_8223B6E0:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r8.u64);
	// std r7,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223B708"))) PPC_WEAK_FUNC(sub_8223B708);
PPC_FUNC_IMPL(__imp__sub_8223B708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8223B710;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b738
	if (ctx.cr6.eq) goto loc_8223B738;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223B738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223B738:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b760
	if (ctx.cr6.eq) goto loc_8223B760;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223B760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223B760:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r29,44(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// beq cr6,0x8223b7a0
	if (ctx.cr6.eq) goto loc_8223B7A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223B7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223B7A0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8223b7d0
	if (ctx.cr6.eq) goto loc_8223B7D0;
	// lwz r28,48(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8223b7c8
	if (ctx.cr6.eq) goto loc_8223B7C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822337a0
	ctx.lr = 0x8223B7BC;
	sub_822337A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223B7C8;
	sub_82183E40(ctx, base);
loc_8223B7C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f6bd0
	ctx.lr = 0x8223B7D0;
	sub_820F6BD0(ctx, base);
loc_8223B7D0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r29,44(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b80c
	if (ctx.cr6.eq) goto loc_8223B80C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223B80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223B80C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8223b83c
	if (ctx.cr6.eq) goto loc_8223B83C;
	// lwz r31,48(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223b834
	if (ctx.cr6.eq) goto loc_8223B834;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822337a0
	ctx.lr = 0x8223B828;
	sub_822337A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223B834;
	sub_82183E40(ctx, base);
loc_8223B834:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f6bd0
	ctx.lr = 0x8223B83C;
	sub_820F6BD0(ctx, base);
loc_8223B83C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8223B844"))) PPC_WEAK_FUNC(sub_8223B844);
PPC_FUNC_IMPL(__imp__sub_8223B844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223B848"))) PPC_WEAK_FUNC(sub_8223B848);
PPC_FUNC_IMPL(__imp__sub_8223B848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x8223B850;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// add r23,r11,r26
	ctx.r23.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwzx r24,r9,r26
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// bl 0x822344b0
	ctx.lr = 0x8223B87C;
	sub_822344B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223bee0
	if (ctx.cr6.eq) goto loc_8223BEE0;
	// lwz r31,20(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// bl 0x82183078
	ctx.lr = 0x8223B88C;
	sub_82183078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223B898;
	sub_821837D0(ctx, base);
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// lwz r3,-19048(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x8223B8A4;
	sub_821A3138(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,44(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82237a88
	ctx.lr = 0x8223B8B4;
	sub_82237A88(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82237320
	ctx.lr = 0x8223B8BC;
	sub_82237320(ctx, base);
	// lwz r11,44(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// lwz r3,-19048(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x8223B8CC;
	sub_821A3138(ctx, base);
	// li r3,3024
	ctx.r3.s64 = 3024;
	// bl 0x82080000
	ctx.lr = 0x8223B8D4;
	sub_82080000(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b8f4
	if (ctx.cr6.eq) goto loc_8223B8F4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,44(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// bl 0x820be9c8
	ctx.lr = 0x8223B8EC;
	sub_820BE9C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8223b8f8
	goto loc_8223B8F8;
loc_8223B8F4:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8223B8F8:
	// lbz r11,5(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 5);
	// stw r11,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r11.u32);
	// lwz r3,-19048(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x8223B908;
	sub_821A3138(ctx, base);
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82080000
	ctx.lr = 0x8223B910;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b928
	if (ctx.cr6.eq) goto loc_8223B928;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x820e7cb0
	ctx.lr = 0x8223B920;
	sub_820E7CB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8223b92c
	goto loc_8223B92C;
loc_8223B928:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8223B92C:
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82080000
	ctx.lr = 0x8223B934;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b94c
	if (ctx.cr6.eq) goto loc_8223B94C;
	// addi r4,r31,1248
	ctx.r4.s64 = ctx.r31.s64 + 1248;
	// bl 0x820e7dc8
	ctx.lr = 0x8223B944;
	sub_820E7DC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8223b950
	goto loc_8223B950;
loc_8223B94C:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8223B950:
	// lwz r11,1248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1248);
	// addi r29,r31,1248
	ctx.r29.s64 = ctx.r31.s64 + 1248;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223B96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1248);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8223B984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// lwz r7,60(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8223b9dc
	if (ctx.cr6.eq) goto loc_8223B9DC;
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x8223B9A4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223b9c4
	if (ctx.cr6.eq) goto loc_8223B9C4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r30,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r30.u32);
	// stw r30,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r30.u32);
	// b 0x8223ba28
	goto loc_8223BA28;
loc_8223B9C4:
	// lwz r10,60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r30.u32);
	// stw r30,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r30.u32);
	// stw r30,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r30.u32);
	// b 0x8223ba28
	goto loc_8223BA28;
loc_8223B9DC:
	// bl 0x82182e90
	ctx.lr = 0x8223B9E0;
	sub_82182E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8223B9E8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223B9F4;
	sub_821837D0(ctx, base);
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82080000
	ctx.lr = 0x8223B9FC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ba18
	if (ctx.cr6.eq) goto loc_8223BA18;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,-5072(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5072);
	// bl 0x820e86d0
	ctx.lr = 0x8223BA14;
	sub_820E86D0(ctx, base);
	// b 0x8223ba1c
	goto loc_8223BA1C;
loc_8223BA18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8223BA1C:
	// stw r3,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223BA28;
	sub_821837D0(ctx, base);
loc_8223BA28:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,60(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223BA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82080000
	ctx.lr = 0x8223BA48;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ba60
	if (ctx.cr6.eq) goto loc_8223BA60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820feb78
	ctx.lr = 0x8223BA58;
	sub_820FEB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8223ba64
	goto loc_8223BA64;
loc_8223BA60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8223BA64:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223BA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82080000
	ctx.lr = 0x8223BA80;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ba9c
	if (ctx.cr6.eq) goto loc_8223BA9C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x820ff8a0
	ctx.lr = 0x8223BA94;
	sub_820FF8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8223baa0
	goto loc_8223BAA0;
loc_8223BA9C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8223BAA0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223BAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,64(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223bb24
	if (ctx.cr6.eq) goto loc_8223BB24;
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,19780
	ctx.r4.u64 = ctx.r4.u64 | 19780;
	// bl 0x821882d0
	ctx.lr = 0x8223BAD0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223bae0
	if (ctx.cr6.eq) goto loc_8223BAE0;
	// lwz r28,24(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8223bae4
	goto loc_8223BAE4;
loc_8223BAE0:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8223BAE4:
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x8223BAF4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223bb10
	if (ctx.cr6.eq) goto loc_8223BB10;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,64(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// stw r28,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r28.u32);
	// b 0x8223bb70
	goto loc_8223BB70;
loc_8223BB10:
	// lwz r10,64(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r30.u32);
	// stw r28,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r28.u32);
	// b 0x8223bb70
	goto loc_8223BB70;
loc_8223BB24:
	// bl 0x82182e90
	ctx.lr = 0x8223BB28;
	sub_82182E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8223BB30;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223BB3C;
	sub_821837D0(ctx, base);
	// li r3,2384
	ctx.r3.s64 = 2384;
	// bl 0x82080000
	ctx.lr = 0x8223BB44;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223bb60
	if (ctx.cr6.eq) goto loc_8223BB60;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820ec368
	ctx.lr = 0x8223BB5C;
	sub_820EC368(ctx, base);
	// b 0x8223bb64
	goto loc_8223BB64;
loc_8223BB60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8223BB64:
	// stw r3,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223BB70;
	sub_821837D0(ctx, base);
loc_8223BB70:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,64(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223BB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,64(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r30,1820(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1820, ctx.r30.u32);
	// bl 0x82080000
	ctx.lr = 0x8223BB98;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223bbb0
	if (ctx.cr6.eq) goto loc_8223BBB0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820ff430
	ctx.lr = 0x8223BBA8;
	sub_820FF430(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8223bbb4
	goto loc_8223BBB4;
loc_8223BBB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8223BBB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223BBCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82080000
	ctx.lr = 0x8223BBD4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223bbf4
	if (ctx.cr6.eq) goto loc_8223BBF4;
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x820ef9d8
	ctx.lr = 0x8223BBEC;
	sub_820EF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8223bbf8
	goto loc_8223BBF8;
loc_8223BBF4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8223BBF8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223BC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,10784
	ctx.r3.s64 = 10784;
	// bl 0x82080000
	ctx.lr = 0x8223BC14;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223bc2c
	if (ctx.cr6.eq) goto loc_8223BC2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820bbcc0
	ctx.lr = 0x8223BC24;
	sub_820BBCC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8223bc30
	goto loc_8223BC30;
loc_8223BC2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8223BC30:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223BC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82080000
	ctx.lr = 0x8223BC50;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223bc68
	if (ctx.cr6.eq) goto loc_8223BC68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8209c6c8
	ctx.lr = 0x8223BC60;
	sub_8209C6C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8223bc6c
	goto loc_8223BC6C;
loc_8223BC68:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8223BC6C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223BC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,15104
	ctx.r3.s64 = 15104;
	// bl 0x82080000
	ctx.lr = 0x8223BC8C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223bca8
	if (ctx.cr6.eq) goto loc_8223BCA8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820fd1a0
	ctx.lr = 0x8223BCA0;
	sub_820FD1A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8223bcac
	goto loc_8223BCAC;
loc_8223BCA8:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8223BCAC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223BCC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82080000
	ctx.lr = 0x8223BCD4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223bcec
	if (ctx.cr6.eq) goto loc_8223BCEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b9668
	ctx.lr = 0x8223BCE4;
	sub_820B9668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8223bcf0
	goto loc_8223BCF0;
loc_8223BCEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8223BCF0:
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223BD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-19048(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x8223BD0C;
	sub_821A3138(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x8223BD14;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223bd30
	if (ctx.cr6.eq) goto loc_8223BD30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820bd4c8
	ctx.lr = 0x8223BD24;
	sub_820BD4C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// bne cr6,0x8223bd34
	if (!ctx.cr6.eq) goto loc_8223BD34;
loc_8223BD30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8223BD34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223BD48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,44(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8223bde8
	if (!ctx.cr6.gt) goto loc_8223BDE8;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82080000
	ctx.lr = 0x8223BD60;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223bd9c
	if (ctx.cr6.eq) goto loc_8223BD9C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,44(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x820be6d0
	ctx.lr = 0x8223BD78;
	sub_820BE6D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223bda0
	if (ctx.cr6.eq) goto loc_8223BDA0;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 5;
	// b 0x8223bda8
	goto loc_8223BDA8;
loc_8223BD9C:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8223BDA0:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8223BDA8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223BDBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8223bde8
	if (ctx.cr6.eq) goto loc_8223BDE8;
loc_8223BDC4:
	// lwz r3,-19048(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x8223BDCC;
	sub_821A3138(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820be0f8
	ctx.lr = 0x8223BDDC;
	sub_820BE0F8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8223bdc4
	if (ctx.cr6.lt) goto loc_8223BDC4;
loc_8223BDE8:
	// lwz r3,-19048(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x8223BDF0;
	sub_821A3138(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82237b38
	ctx.lr = 0x8223BDFC;
	sub_82237B38(ctx, base);
	// lwz r3,-19048(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x8223BE04;
	sub_821A3138(ctx, base);
	// addi r30,r31,596
	ctx.r30.s64 = ctx.r31.s64 + 596;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x8223BE14;
	sub_820EF4F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82163ef8
	ctx.lr = 0x8223BE20;
	sub_82163EF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82156f00
	ctx.lr = 0x8223BE2C;
	sub_82156F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f0
	ctx.lr = 0x8223BE38;
	sub_820EF4F0(ctx, base);
	// addi r30,r31,900
	ctx.r30.s64 = ctx.r31.s64 + 900;
	// lwz r4,788(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x8223BE48;
	sub_820EF4F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,596(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x82163ef8
	ctx.lr = 0x8223BE54;
	sub_82163EF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// bl 0x82156f00
	ctx.lr = 0x8223BE60;
	sub_82156F00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,776(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// bl 0x820ef4f0
	ctx.lr = 0x8223BE6C;
	sub_820EF4F0(ctx, base);
	// ld r9,48(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 48);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,1908
	ctx.r3.s64 = ctx.r31.s64 + 1908;
	// addi r10,r24,48
	ctx.r10.s64 = ctx.r24.s64 + 48;
	// std r9,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r9.u64);
	// ld r8,56(r24)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r24.u32 + 56);
	// std r8,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r8.u64);
	// ld r7,32(r24)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r24.u32 + 32);
	// std r7,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r7.u64);
	// ld r6,40(r24)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r24.u32 + 40);
	// std r6,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r6.u64);
	// stw r11,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r11.u32);
	// stw r11,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r11.u32);
	// bl 0x820f18a8
	ctx.lr = 0x8223BEA8;
	sub_820F18A8(ctx, base);
	// stw r31,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r31.u32);
	// lwz r3,-19048(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x8223BEB4;
	sub_821A3138(ctx, base);
	// lwz r3,-19048(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19048);
	// bl 0x821a2d30
	ctx.lr = 0x8223BEBC;
	sub_821A2D30(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822344c0
	ctx.lr = 0x8223BEC4;
	sub_822344C0(ctx, base);
	// lwz r3,-19048(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19048);
	// bl 0x821a2ce8
	ctx.lr = 0x8223BECC;
	sub_821A2CE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// bl 0x82234398
	ctx.lr = 0x8223BED8;
	sub_82234398(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223BEE0;
	sub_821837D0(ctx, base);
loc_8223BEE0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_8223BEE8"))) PPC_WEAK_FUNC(sub_8223BEE8);
PPC_FUNC_IMPL(__imp__sub_8223BEE8) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223bf94
	if (ctx.cr6.eq) goto loc_8223BF94;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r10,9
	ctx.r5.s64 = ctx.r10.s64 + 9;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// std r5,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r5.u64);
	// std r7,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r7.u64);
	// addi r5,r10,48
	ctx.r5.s64 = ctx.r10.s64 + 48;
	// ld r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 424);
	// ld r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 416);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// std r7,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r7.u64);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
loc_8223BF94:
	// bl 0x8223b848
	ctx.lr = 0x8223BF98;
	sub_8223B848(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223BFA8"))) PPC_WEAK_FUNC(sub_8223BFA8);
PPC_FUNC_IMPL(__imp__sub_8223BFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8223BFB0;
	sub_82248774(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249924
	ctx.lr = 0x8223BFB8;
	sub_82249924(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r23,1
	ctx.r23.s64 = 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwzx r31,r10,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8223bfe8
	if (ctx.cr6.eq) goto loc_8223BFE8;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_8223BFE8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223c044
	if (ctx.cr6.eq) goto loc_8223C044;
	// stw r30,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r30.u32);
	// addi r28,r31,596
	ctx.r28.s64 = ctx.r31.s64 + 596;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82163ef8
	ctx.lr = 0x8223C004;
	sub_82163EF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x8223C010;
	sub_82156F00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ef4f0
	ctx.lr = 0x8223C01C;
	sub_820EF4F0(ctx, base);
	// lis r4,17490
	ctx.r4.s64 = 1146224640;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,21586
	ctx.r4.u64 = ctx.r4.u64 | 21586;
	// bl 0x821882d0
	ctx.lr = 0x8223C02C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223c044
	if (ctx.cr6.eq) goto loc_8223C044;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223c044
	if (ctx.cr6.eq) goto loc_8223C044;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_8223C044:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r9,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r9.u32);
	// stw r8,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r8.u32);
	// bl 0x82244cd8
	ctx.lr = 0x8223C068;
	sub_82244CD8(ctx, base);
	// lwz r7,68(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8223c084
	if (!ctx.cr6.eq) goto loc_8223C084;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8223c084
	if (ctx.cr6.eq) goto loc_8223C084;
	// bl 0x822447f8
	ctx.lr = 0x8223C080;
	sub_822447F8(ctx, base);
	// b 0x8223c08c
	goto loc_8223C08C;
loc_8223C084:
	// bl 0x82244510
	ctx.lr = 0x8223C088;
	sub_82244510(ctx, base);
	// stw r30,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r30.u32);
loc_8223C08C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// lfs f0,25476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25476);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f0,-232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -232);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,-236(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -236);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwzx r31,r6,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f11,-240(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -240);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f31,2148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r31,2112
	ctx.r11.s64 = ctx.r31.s64 + 2112;
	// lfs f10,-244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -244);
	ctx.f10.f64 = double(temp.f32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f9,-248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -248);
	ctx.f9.f64 = double(temp.f32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f8,26224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26224);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-252(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -252);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r11,16
	ctx.r25.s64 = ctx.r11.s64 + 16;
	// addi r28,r11,32
	ctx.r28.s64 = ctx.r11.s64 + 32;
	// lfs f12,-256(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -256);
	ctx.f12.f64 = double(temp.f32);
	// addi r27,r11,48
	ctx.r27.s64 = ctx.r11.s64 + 48;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r26,r11,64
	ctx.r26.s64 = ctx.r11.s64 + 64;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lfs f0,-260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-264(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -264);
	ctx.f13.f64 = double(temp.f32);
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r23,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r23.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stfs f9,204(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r26,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r26.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r9,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// stfs f8,240(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// addi r7,r11,272
	ctx.r7.s64 = ctx.r11.s64 + 272;
	// stfs f7,244(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r8,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// stfs f12,256(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f12,260(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f0,284(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// lfs f27,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f27.f64 = double(temp.f32);
	// addi r30,r1,116
	ctx.r30.s64 = ctx.r1.s64 + 116;
	// lfs f29,8608(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8608);
	ctx.f29.f64 = double(temp.f32);
	// li r24,10
	ctx.r24.s64 = 10;
	// lfs f30,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,7948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7948);
	ctx.f28.f64 = double(temp.f32);
	// stfs f13,300(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f13,304(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
loc_8223C218:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223c298
	if (ctx.cr6.eq) goto loc_8223C298;
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187920
	ctx.lr = 0x8223C268;
	sub_82187920(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// stfs f30,332(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x8223C294;
	sub_82187400(ctx, base);
	// b 0x8223c2b8
	goto loc_8223C2B8;
loc_8223C298:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fmuls f12,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f10,f13,f27
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f9,f11,f27
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8223C2B8:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x8223c218
	if (!ctx.cr0.eq) goto loc_8223C218;
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// addi r10,r31,2896
	ctx.r10.s64 = ctx.r31.s64 + 2896;
	// std r11,2896(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2896, ctx.r11.u64);
	// ld r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// std r9,2904(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2904, ctx.r9.u64);
	// ld r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r8,2912(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2912, ctx.r8.u64);
	// ld r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r7,2920(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2920, ctx.r7.u64);
	// ld r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// std r6,2928(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2928, ctx.r6.u64);
	// ld r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r5,2936(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2936, ctx.r5.u64);
	// ld r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r4,2944(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2944, ctx.r4.u64);
	// ld r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r3,2952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2952, ctx.r3.u64);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r31,r10,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223c374
	if (ctx.cr6.eq) goto loc_8223C374;
	// stw r23,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r23.u32);
	// addi r30,r31,596
	ctx.r30.s64 = ctx.r31.s64 + 596;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163ef8
	ctx.lr = 0x8223C334;
	sub_82163EF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82156f00
	ctx.lr = 0x8223C340;
	sub_82156F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f0
	ctx.lr = 0x8223C34C;
	sub_820EF4F0(ctx, base);
	// lis r4,17490
	ctx.r4.s64 = 1146224640;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,21586
	ctx.r4.u64 = ctx.r4.u64 | 21586;
	// bl 0x821882d0
	ctx.lr = 0x8223C35C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223c374
	if (ctx.cr6.eq) goto loc_8223C374;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223c374
	if (ctx.cr6.eq) goto loc_8223C374;
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
loc_8223C374:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249970
	ctx.lr = 0x8223C380;
	sub_82249970(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8223C384"))) PPC_WEAK_FUNC(sub_8223C384);
PPC_FUNC_IMPL(__imp__sub_8223C384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223C388"))) PPC_WEAK_FUNC(sub_8223C388);
PPC_FUNC_IMPL(__imp__sub_8223C388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223c3b4
	if (ctx.cr6.eq) goto loc_8223C3B4;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r9,r11,400
	ctx.r9.s64 = ctx.r11.s64 + 400;
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,400(r11)
	PPC_STORE_U64(ctx.r11.u32 + 400, ctx.r10.u64);
	// std r8,408(r11)
	PPC_STORE_U64(ctx.r11.u32 + 408, ctx.r8.u64);
loc_8223C3B4:
	// b 0x8223b620
	sub_8223B620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223C3B8"))) PPC_WEAK_FUNC(sub_8223C3B8);
PPC_FUNC_IMPL(__imp__sub_8223C3B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223c3e4
	if (ctx.cr6.eq) goto loc_8223C3E4;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r9,r11,416
	ctx.r9.s64 = ctx.r11.s64 + 416;
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,416(r11)
	PPC_STORE_U64(ctx.r11.u32 + 416, ctx.r10.u64);
	// std r8,424(r11)
	PPC_STORE_U64(ctx.r11.u32 + 424, ctx.r8.u64);
loc_8223C3E4:
	// b 0x8223b620
	sub_8223B620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223C3E8"))) PPC_WEAK_FUNC(sub_8223C3E8);
PPC_FUNC_IMPL(__imp__sub_8223C3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8223C3F0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,-272
	ctx.r10.s64 = ctx.r11.s64 + -272;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8223b708
	ctx.lr = 0x8223C408;
	sub_8223B708(ctx, base);
	// addi r30,r28,36
	ctx.r30.s64 = ctx.r28.s64 + 36;
	// addi r31,r28,48
	ctx.r31.s64 = ctx.r28.s64 + 48;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8223C418:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223c438
	if (ctx.cr6.eq) goto loc_8223C438;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223C438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223C438:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223c44c
	if (ctx.cr6.eq) goto loc_8223C44C;
	// bl 0x820f6bd0
	ctx.lr = 0x8223C44C;
	sub_820F6BD0(ctx, base);
loc_8223C44C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223c45c
	if (ctx.cr6.eq) goto loc_8223C45C;
	// bl 0x821012b0
	ctx.lr = 0x8223C45C;
	sub_821012B0(ctx, base);
loc_8223C45C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x8223c418
	if (!ctx.cr0.eq) goto loc_8223C418;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821857f0
	ctx.lr = 0x8223C474;
	sub_821857F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8223C47C"))) PPC_WEAK_FUNC(sub_8223C47C);
PPC_FUNC_IMPL(__imp__sub_8223C47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223C480"))) PPC_WEAK_FUNC(sub_8223C480);
PPC_FUNC_IMPL(__imp__sub_8223C480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8223c3e8
	ctx.lr = 0x8223C4A0;
	sub_8223C3E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223c4bc
	if (ctx.cr6.eq) goto loc_8223C4BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8223C4B8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8223C4BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223C4D4"))) PPC_WEAK_FUNC(sub_8223C4D4);
PPC_FUNC_IMPL(__imp__sub_8223C4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223C4D8"))) PPC_WEAK_FUNC(sub_8223C4D8);
PPC_FUNC_IMPL(__imp__sub_8223C4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a2ce8
	ctx.lr = 0x8223C4FC;
	sub_821A2CE8(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223c528
	if (ctx.cr6.eq) goto loc_8223C528;
	// bl 0x8223bee8
	ctx.lr = 0x8223C524;
	sub_8223BEE8(ctx, base);
	// b 0x8223c52c
	goto loc_8223C52C;
loc_8223C528:
	// bl 0x8223b848
	ctx.lr = 0x8223C52C;
	sub_8223B848(ctx, base);
loc_8223C52C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a2d30
	ctx.lr = 0x8223C53C;
	sub_821A2D30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223C558"))) PPC_WEAK_FUNC(sub_8223C558);
PPC_FUNC_IMPL(__imp__sub_8223C558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8223C560;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223c72c
	if (ctx.cr6.eq) goto loc_8223C72C;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223c664
	if (!ctx.cr6.eq) goto loc_8223C664;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r24,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r24.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
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
loc_8223C5C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// bl 0x8209ed88
	ctx.lr = 0x8223C5D0;
	sub_8209ED88(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82230e90
	ctx.lr = 0x8223C5E4;
	sub_82230E90(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// stwu r25,8(r29)
	ea = 8 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r29.u32 = ea;
	// lwz r3,-420(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -420);
	// bl 0x82163a78
	ctx.lr = 0x8223C5FC;
	sub_82163A78(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bl 0x821012b0
	ctx.lr = 0x8223C604;
	sub_821012B0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r23,r31
	ctx.r23.s64 = ctx.r31.s8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r23,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r23.u8);
	// bl 0x82231530
	ctx.lr = 0x8223C620;
	sub_82231530(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r31,29
	ctx.r7.s64 = ctx.r31.s64 + 29;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r23,5(r6)
	PPC_STORE_U8(ctx.r6.u32 + 5, ctx.r23.u8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// std r5,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r5.u64);
	// std r4,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r4.u64);
	// blt cr6,0x8223c5c4
	if (ctx.cr6.lt) goto loc_8223C5C4;
loc_8223C664:
	// lwz r3,60(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223c67c
	if (ctx.cr6.eq) goto loc_8223C67C;
	// bl 0x82188260
	ctx.lr = 0x8223C674;
	sub_82188260(ctx, base);
	// lwz r3,64(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// bl 0x82188260
	ctx.lr = 0x8223C67C;
	sub_82188260(ctx, base);
loc_8223C67C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223c6a8
	if (ctx.cr6.eq) goto loc_8223C6A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223C6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223C6A8:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r25,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r25.u32);
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// lwz r31,48(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223c6e8
	if (ctx.cr6.eq) goto loc_8223C6E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822337a0
	ctx.lr = 0x8223C6DC;
	sub_822337A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223C6E8;
	sub_82183E40(ctx, base);
loc_8223C6E8:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r10,1148
	ctx.r31.s64 = ctx.r10.s64 + 1148;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// stw r25,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r25.u32);
	// stw r28,1148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1148, ctx.r28.u32);
	// bl 0x8223aa28
	ctx.lr = 0x8223C70C;
	sub_8223AA28(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// lis r4,-32220
	ctx.r4.s64 = -2111569920;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r4,-15144
	ctx.r4.s64 = ctx.r4.s64 + -15144;
	// lwz r3,21792(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21792);
	// bl 0x8218e518
	ctx.lr = 0x8223C72C;
	sub_8218E518(ctx, base);
loc_8223C72C:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8223c740
	if (!ctx.cr6.gt) goto loc_8223C740;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
loc_8223C740:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8223c768
	if (!ctx.cr6.eq) goto loc_8223C768;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223bfa8
	ctx.lr = 0x8223C754;
	sub_8223BFA8(ctx, base);
	// bl 0x8223aa28
	ctx.lr = 0x8223C758;
	sub_8223AA28(ctx, base);
	// bl 0x82234510
	ctx.lr = 0x8223C75C;
	sub_82234510(ctx, base);
	// bl 0x82241428
	ctx.lr = 0x8223C760;
	sub_82241428(ctx, base);
	// stw r25,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r25.u32);
	// stw r24,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r24.u32);
loc_8223C768:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8223C770"))) PPC_WEAK_FUNC(sub_8223C770);
PPC_FUNC_IMPL(__imp__sub_8223C770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8223a8a8
	ctx.lr = 0x8223C788;
	sub_8223A8A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223c798
	if (ctx.cr6.eq) goto loc_8223C798;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c558
	ctx.lr = 0x8223C798;
	sub_8223C558(ctx, base);
loc_8223C798:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223C7AC"))) PPC_WEAK_FUNC(sub_8223C7AC);
PPC_FUNC_IMPL(__imp__sub_8223C7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223C7B0"))) PPC_WEAK_FUNC(sub_8223C7B0);
PPC_FUNC_IMPL(__imp__sub_8223C7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x8223C7B8;
	sub_8224876C(ctx, base);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8223c950
	if (!ctx.cr6.eq) goto loc_8223C950;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// lfs f0,10928(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10928);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r11.u32);
	// lbz r11,-110(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -110);
	// lbz r9,-109(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -109);
	// lbz r8,-111(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -111);
	// std r11,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r11.u64);
	// lfd f13,-112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r8,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// lfd f12,-112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r9,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r9.u64);
	// lfd f11,-112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
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
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fctidz f1,f4
	ctx.f1.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f1,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f1.u64);
	// lbz r21,-105(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + -105);
	// fctidz f0,f3
	ctx.f0.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// fctidz f13,f2
	ctx.f13.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f0,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f0.u64);
	// stfd f13,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f13.u64);
	// lbz r22,-105(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + -105);
	// lbz r23,-97(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + -97);
	// bgt cr6,0x8223c950
	if (ctx.cr6.gt) goto loc_8223C950;
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lbz r27,1(r7)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r26,2(r7)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lbz r25,3(r7)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r24,0(r7)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// subf r28,r4,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8223C87C:
	// lbz r6,-2(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// addi r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 3;
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mullw r4,r6,r24
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// lbz r6,1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r5,-1(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// divw r4,r4,r11
	ctx.r4.s32 = ctx.r4.s32 / ctx.r11.s32;
	// mullw r3,r3,r26
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// mullw r31,r6,r25
	ctx.r31.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// mullw r5,r5,r27
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// divw r4,r3,r11
	ctx.r4.s32 = ctx.r3.s32 / ctx.r11.s32;
	// divw r3,r31,r11
	ctx.r3.s32 = ctx.r31.s32 / ctx.r11.s32;
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// divw r5,r5,r11
	ctx.r5.s32 = ctx.r5.s32 / ctx.r11.s32;
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r31,r5,24
	ctx.r31.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// stbx r30,r28,r9
	PPC_STORE_U8(ctx.r28.u32 + ctx.r9.u32, ctx.r30.u8);
	// stb r31,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r31.u8);
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// stb r29,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r29.u8);
	// beq cr6,0x8223c930
	if (ctx.cr6.eq) goto loc_8223C930;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r5,r23,24
	ctx.r5.u64 = ctx.r23.u32 & 0xFF;
	// clrlwi r4,r22,24
	ctx.r4.u64 = ctx.r22.u32 & 0xFF;
	// clrlwi r3,r21,24
	ctx.r3.u64 = ctx.r21.u32 & 0xFF;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// subf r31,r5,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r5.s64;
	// subf r30,r4,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r4.s64;
	// subf r29,r3,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r3.s64;
	// mullw r31,r31,r6
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// mullw r30,r30,r6
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r6.s32);
	// mullw r6,r29,r6
	ctx.r6.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r6.s32);
	// divw r31,r31,r11
	ctx.r31.s32 = ctx.r31.s32 / ctx.r11.s32;
	// divw r30,r30,r11
	ctx.r30.s32 = ctx.r30.s32 / ctx.r11.s32;
	// divw r6,r6,r11
	ctx.r6.s32 = ctx.r6.s32 / ctx.r11.s32;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// stb r5,-2(r8)
	PPC_STORE_U8(ctx.r8.u32 + -2, ctx.r5.u8);
	// stbx r4,r28,r9
	PPC_STORE_U8(ctx.r28.u32 + ctx.r9.u32, ctx.r4.u8);
	// stb r3,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r3.u8);
loc_8223C930:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// divwu r5,r6,r11
	ctx.r5.u32 = ctx.r6.u32 / ctx.r11.u32;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r4.u8);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8223c87c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223C87C;
loc_8223C950:
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_8223C954"))) PPC_WEAK_FUNC(sub_8223C954);
PPC_FUNC_IMPL(__imp__sub_8223C954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223C958"))) PPC_WEAK_FUNC(sub_8223C958);
PPC_FUNC_IMPL(__imp__sub_8223C958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8223C960;
	sub_82248770(ctx, base);
	// rlwinm r9,r5,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r23,r4,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r22,r4,31,1,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r23,r6
	ctx.r10.u64 = ctx.r23.u64 + ctx.r6.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223ca44
	if (ctx.cr6.eq) goto loc_8223CA44;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
loc_8223C984:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8223ca34
	if (ctx.cr6.eq) goto loc_8223CA34;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
loc_8223C990:
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r26,1(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r25,2(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r28,3(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r30,1(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r5,r27,r31
	ctx.r5.u64 = ctx.r27.u64 + ctx.r31.u64;
	// lbz r31,2(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r3,3(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// add r8,r26,r8
	ctx.r8.u64 = ctx.r26.u64 + ctx.r8.u64;
	// add r7,r25,r7
	ctx.r7.u64 = ctx.r25.u64 + ctx.r7.u64;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 + ctx.r6.u64;
	// add r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 + ctx.r5.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r8,r8,30,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFF;
	// rlwinm r7,r7,30,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0xFF;
	// rlwinm r6,r6,30,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFF;
	// stb r8,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r8.u8);
	// rlwinm r5,r5,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xFF;
	// stb r7,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r7.u8);
	// stb r6,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r6.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8223c990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223C990;
loc_8223CA34:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 + ctx.r10.u64;
	// bne 0x8223c984
	if (!ctx.cr0.eq) goto loc_8223C984;
loc_8223CA44:
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8223CA48"))) PPC_WEAK_FUNC(sub_8223CA48);
PPC_FUNC_IMPL(__imp__sub_8223CA48) {
	PPC_FUNC_PROLOGUE();
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r6,3(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8223ca84
	if (!ctx.cr6.lt) goto loc_8223CA84;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt cr6,0x8223ca6c
	if (ctx.cr6.lt) goto loc_8223CA6C;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_8223CA6C:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8223ca7c
	if (!ctx.cr6.lt) goto loc_8223CA7C;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8223caa4
	goto loc_8223CAA4;
loc_8223CA7C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8223caa4
	goto loc_8223CAA4;
loc_8223CA84:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt cr6,0x8223ca94
	if (ctx.cr6.lt) goto loc_8223CA94;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_8223CA94:
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x8223caa4
	if (ctx.cr6.lt) goto loc_8223CAA4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8223CAA4:
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// bne cr6,0x8223cacc
	if (!ctx.cr6.eq) goto loc_8223CACC;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrldi r10,r11,51
	ctx.r10.u64 = ctx.r11.u64 & 0x1FFF;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// blr 
	return;
loc_8223CACC:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// tdllei r10,0
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// rldicr r8,r11,13,50
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 13) & 0xFFFFFFFFFFFFE000;
	// tdllei r11,0
	// divd r4,r8,r10
	ctx.r4.s64 = ctx.r8.s64 / ctx.r10.s64;
	// rotldi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 1);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// std r4,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r4.u64);
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// tdlgei r10,-1
	// bne cr6,0x8223cb44
	if (!ctx.cr6.eq) goto loc_8223CB44;
	// subf r10,r6,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r6.s64;
	// li r9,6
	ctx.r9.s64 = 6;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// rldicr r7,r8,13,50
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 13) & 0xFFFFFFFFFFFFE000;
	// divd r6,r7,r11
	ctx.r6.s64 = ctx.r7.s64 / ctx.r11.s64;
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r5,r6,r9
	ctx.r5.s64 = ctx.r6.s64 / ctx.r9.s64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// andc r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// clrldi r10,r8,51
	ctx.r10.u64 = ctx.r8.u64 & 0x1FFF;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// tdlgei r9,-1
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// blr 
	return;
loc_8223CB44:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// li r9,6
	ctx.r9.s64 = 6;
	// bne cr6,0x8223cb78
	if (!ctx.cr6.eq) goto loc_8223CB78;
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// rldicr r7,r8,13,50
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 13) & 0xFFFFFFFFFFFFE000;
	// divd r6,r7,r11
	ctx.r6.s64 = ctx.r7.s64 / ctx.r11.s64;
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r5,r6,r9
	ctx.r5.s64 = ctx.r6.s64 / ctx.r9.s64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// addi r10,r10,2730
	ctx.r10.s64 = ctx.r10.s64 + 2730;
	// b 0x8223cb9c
	goto loc_8223CB9C;
loc_8223CB78:
	// subf r10,r5,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r5.s64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// rldicr r7,r8,13,50
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 13) & 0xFFFFFFFFFFFFE000;
	// divd r6,r7,r11
	ctx.r6.s64 = ctx.r7.s64 / ctx.r11.s64;
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r5,r6,r9
	ctx.r5.s64 = ctx.r6.s64 / ctx.r9.s64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// addi r10,r10,5461
	ctx.r10.s64 = ctx.r10.s64 + 5461;
loc_8223CB9C:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// andc r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// clrldi r10,r9,51
	ctx.r10.u64 = ctx.r9.u64 & 0x1FFF;
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// tdlgei r11,-1
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223CBBC"))) PPC_WEAK_FUNC(sub_8223CBBC);
PPC_FUNC_IMPL(__imp__sub_8223CBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223CBC0"))) PPC_WEAK_FUNC(sub_8223CBC0);
PPC_FUNC_IMPL(__imp__sub_8223CBC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// cmpdi cr6,r6,1
	ctx.cr6.compare<int64_t>(ctx.r6.s64, 1, ctx.xer);
	// bge cr6,0x8223cbd8
	if (!ctx.cr6.lt) goto loc_8223CBD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8223cbe4
	goto loc_8223CBE4;
loc_8223CBD8:
	// cmpdi cr6,r11,255
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 255, ctx.xer);
	// ble cr6,0x8223cbe4
	if (!ctx.cr6.gt) goto loc_8223CBE4;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8223CBE4:
	// cmpdi cr6,r5,0
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 0, ctx.xer);
	// bne cr6,0x8223cc28
	if (!ctx.cr6.eq) goto loc_8223CC28;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x8223cc0c
	if (ctx.cr6.eq) goto loc_8223CC0C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// blr 
	return;
loc_8223CC0C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// blr 
	return;
loc_8223CC28:
	// rldicr r10,r4,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// sradi r9,r8,13
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0x1FFF) != 0);
	ctx.r9.s64 = ctx.r8.s64 >> 13;
	// subfic r7,r5,8192
	ctx.xer.ca = ctx.r5.u32 <= 8192;
	ctx.r7.s64 = 8192 - ctx.r5.s64;
	// rldicr r6,r9,13,50
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 13) & 0xFFFFFFFFFFFFE000;
	// mulld r4,r7,r11
	ctx.r4.s64 = ctx.r7.s64 * ctx.r11.s64;
	// subf r10,r6,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r6.s64;
	// sradi r7,r4,13
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0x1FFF) != 0);
	ctx.r7.s64 = ctx.r4.s64 >> 13;
	// mulld r4,r10,r5
	ctx.r4.s64 = ctx.r10.s64 * ctx.r5.s64;
	// sradi r4,r4,13
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0x1FFF) != 0);
	ctx.r4.s64 = ctx.r4.s64 >> 13;
	// subf r10,r8,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r8.s64;
	// subfic r8,r4,8192
	ctx.xer.ca = ctx.r4.u32 <= 8192;
	ctx.r8.s64 = 8192 - ctx.r4.s64;
	// addi r6,r10,8192
	ctx.r6.s64 = ctx.r10.s64 + 8192;
	// mulld r4,r8,r11
	ctx.r4.s64 = ctx.r8.s64 * ctx.r11.s64;
	// mulld r10,r6,r5
	ctx.r10.s64 = ctx.r6.s64 * ctx.r5.s64;
	// sradi r8,r4,13
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r4.s64 >> 13;
	// sradi r6,r10,13
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x1FFF) != 0);
	ctx.r6.s64 = ctx.r10.s64 >> 13;
	// cmpdi cr6,r8,1
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 1, ctx.xer);
	// subfic r5,r6,8192
	ctx.xer.ca = ctx.r6.u32 <= 8192;
	ctx.r5.s64 = 8192 - ctx.r6.s64;
	// mulld r4,r5,r11
	ctx.r4.s64 = ctx.r5.s64 * ctx.r11.s64;
	// sradi r6,r4,13
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0x1FFF) != 0);
	ctx.r6.s64 = ctx.r4.s64 >> 13;
	// bge cr6,0x8223cc8c
	if (!ctx.cr6.lt) goto loc_8223CC8C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8223cc98
	goto loc_8223CC98;
loc_8223CC8C:
	// cmpdi cr6,r8,255
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 255, ctx.xer);
	// ble cr6,0x8223cc98
	if (!ctx.cr6.gt) goto loc_8223CC98;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8223CC98:
	// cmpdi cr6,r6,1
	ctx.cr6.compare<int64_t>(ctx.r6.s64, 1, ctx.xer);
	// bge cr6,0x8223cca8
	if (!ctx.cr6.lt) goto loc_8223CCA8;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8223ccb4
	goto loc_8223CCB4;
loc_8223CCA8:
	// cmpdi cr6,r6,255
	ctx.cr6.compare<int64_t>(ctx.r6.s64, 255, ctx.xer);
	// ble cr6,0x8223ccb4
	if (!ctx.cr6.gt) goto loc_8223CCB4;
	// li r6,255
	ctx.r6.s64 = 255;
loc_8223CCB4:
	// cmpdi cr6,r9,1
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 1, ctx.xer);
	// blt cr6,0x8223cd68
	if (ctx.cr6.lt) goto loc_8223CD68;
	// cmpdi cr6,r9,5
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 5, ctx.xer);
	// bgt cr6,0x8223cd68
	if (ctx.cr6.gt) goto loc_8223CD68;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8223cd00
	// bdzf 4*cr6+eq,0x8223cd1c
	// bdzf 4*cr6+eq,0x8223cd34
	// bne cr6,0x8223cd4c
	if (!ctx.cr6.eq) goto loc_8223CD4C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r8,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stb r7,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r7.u8);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// blr 
	return;
loc_8223CD00:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r7,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r7.u8);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stb r6,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r6.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// blr 
	return;
loc_8223CD1C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stb r7,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r7.u8);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stb r8,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r8.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// blr 
	return;
loc_8223CD34:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stb r6,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r6.u8);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stb r7,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r7.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// blr 
	return;
loc_8223CD4C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r7,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r7.u8);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stb r8,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// blr 
	return;
loc_8223CD68:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r6,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r6.u8);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stb r7,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r7.u8);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223CD84"))) PPC_WEAK_FUNC(sub_8223CD84);
PPC_FUNC_IMPL(__imp__sub_8223CD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223CD88"))) PPC_WEAK_FUNC(sub_8223CD88);
PPC_FUNC_IMPL(__imp__sub_8223CD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8223CD90;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8223cefc
	if (ctx.cr6.eq) goto loc_8223CEFC;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8223cfa0
	if (ctx.cr6.gt) goto loc_8223CFA0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r25,0(r7)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// add r29,r11,r4
	ctx.r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r23,r10,1
	ctx.r23.s64 = ctx.r10.s64 + 1;
	// lis r10,0
	ctx.r10.s64 = 0;
	// subf r24,r4,r3
	ctx.r24.s64 = ctx.r3.s64 - ctx.r4.s64;
	// li r26,255
	ctx.r26.s64 = 255;
	// lfd f31,29640(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29640);
	// ori r28,r10,65025
	ctx.r28.u64 = ctx.r10.u64 | 65025;
loc_8223CDDC:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// add r27,r24,r29
	ctx.r27.u64 = ctx.r24.u64 + ctx.r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mullw r9,r11,r25
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// stwx r10,r24,r29
	PPC_STORE_U32(ctx.r24.u32 + ctx.r29.u32, ctx.r10.u32);
	// mullw r8,r9,r22
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r22.s32);
	// divwu r7,r8,r28
	ctx.r7.u32 = ctx.r8.u32 / ctx.r28.u32;
	// clrlwi r6,r10,8
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stbx r7,r24,r29
	PPC_STORE_U8(ctx.r24.u32 + ctx.r29.u32, ctx.r7.u8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8223cee4
	if (ctx.cr6.eq) goto loc_8223CEE4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223cee4
	if (ctx.cr6.eq) goto loc_8223CEE4;
	// lbz r30,1(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8223ce28
	if (!ctx.cr6.eq) goto loc_8223CE28;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223cee4
	if (ctx.cr6.eq) goto loc_8223CEE4;
loc_8223CE28:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8223ca48
	ctx.lr = 0x8223CE34;
	sub_8223CA48(ctx, base);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpdi cr6,r4,8192
	ctx.cr6.compare<int64_t>(ctx.r4.s64, 8192, ctx.xer);
	// ble cr6,0x8223ce50
	if (!ctx.cr6.gt) goto loc_8223CE50;
	// addi r4,r4,-8192
	ctx.r4.s64 = ctx.r4.s64 + -8192;
loc_8223CE50:
	// cmpdi cr6,r4,0
	ctx.cr6.compare<int64_t>(ctx.r4.s64, 0, ctx.xer);
	// bge cr6,0x8223ce5c
	if (!ctx.cr6.lt) goto loc_8223CE5C;
	// addi r4,r4,8192
	ctx.r4.s64 = ctx.r4.s64 + 8192;
loc_8223CE5C:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpdi cr6,r5,8191
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 8191, ctx.xer);
	// ble cr6,0x8223ce84
	if (!ctx.cr6.gt) goto loc_8223CE84;
	// li r5,8191
	ctx.r5.s64 = 8191;
	// b 0x8223ce90
	goto loc_8223CE90;
loc_8223CE84:
	// cmpdi cr6,r5,0
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 0, ctx.xer);
	// bge cr6,0x8223ce90
	if (!ctx.cr6.lt) goto loc_8223CE90;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8223CE90:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpdi cr6,r6,255
	ctx.cr6.compare<int64_t>(ctx.r6.s64, 255, ctx.xer);
	// ble cr6,0x8223cec0
	if (!ctx.cr6.gt) goto loc_8223CEC0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// b 0x8223cecc
	goto loc_8223CECC;
loc_8223CEC0:
	// cmpdi cr6,r6,0
	ctx.cr6.compare<int64_t>(ctx.r6.s64, 0, ctx.xer);
	// bge cr6,0x8223cecc
	if (!ctx.cr6.lt) goto loc_8223CECC;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8223CECC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8223cbc0
	ctx.lr = 0x8223CEE4;
	sub_8223CBC0(ctx, base);
loc_8223CEE4:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8223cddc
	if (!ctx.cr0.eq) goto loc_8223CDDC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8223CEFC:
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8223cfa0
	if (ctx.cr6.gt) goto loc_8223CFA0;
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r6,3(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r26,255
	ctx.r26.s64 = 255;
	// ori r28,r9,65025
	ctx.r28.u64 = ctx.r9.u64 | 65025;
loc_8223CF44:
	// lbz r3,6(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r31,7(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// lbzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lbzx r30,r4,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// mullw r31,r31,r6
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// mullw r9,r9,r22
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r22.s32);
	// divw r30,r30,r26
	ctx.r30.s32 = ctx.r30.s32 / ctx.r26.s32;
	// divw r3,r3,r26
	ctx.r3.s32 = ctx.r3.s32 / ctx.r26.s32;
	// divw r31,r31,r26
	ctx.r31.s32 = ctx.r31.s32 / ctx.r26.s32;
	// divwu r9,r9,r28
	ctx.r9.u32 = ctx.r9.u32 / ctx.r28.u32;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// stb r9,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8223cf44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223CF44;
loc_8223CFA0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8223CFAC"))) PPC_WEAK_FUNC(sub_8223CFAC);
PPC_FUNC_IMPL(__imp__sub_8223CFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223CFB0"))) PPC_WEAK_FUNC(sub_8223CFB0);
PPC_FUNC_IMPL(__imp__sub_8223CFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248754
	ctx.lr = 0x8223CFB8;
	sub_82248754(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223d138
	if (ctx.cr6.eq) goto loc_8223D138;
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// addi r3,r5,1248
	ctx.r3.s64 = ctx.r5.s64 + 1248;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// bl 0x821882d0
	ctx.lr = 0x8223CFE8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d138
	if (ctx.cr6.eq) goto loc_8223D138;
	// lwz r19,24(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8223d138
	if (ctx.cr6.eq) goto loc_8223D138;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,64(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 64);
	// lwz r9,56(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 56);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r11,1184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1184);
	// srawi r18,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r18.s64 = ctx.r8.s32 >> 5;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8223d03c
	if (!ctx.cr6.eq) goto loc_8223D03C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,1184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1184, ctx.r11.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r4,r9,8708
	ctx.r4.s64 = ctx.r9.s64 + 8708;
	// addi r3,r8,1168
	ctx.r3.s64 = ctx.r8.s64 + 1168;
	// bl 0x8218a540
	ctx.lr = 0x8223D03C;
	sub_8218A540(ctx, base);
loc_8223D03C:
	// addic. r20,r18,1
	ctx.xer.ca = ctx.r18.u32 > 4294967294;
	ctx.r20.s64 = ctx.r18.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// beq 0x8223d138
	if (ctx.cr0.eq) goto loc_8223D138;
	// li r23,0
	ctx.r23.s64 = 0;
loc_8223D04C:
	// cmplw cr6,r24,r18
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r18.u32, ctx.xer);
	// bge cr6,0x8223d070
	if (!ctx.cr6.lt) goto loc_8223D070;
	// lwz r11,56(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 56);
	// lwzx r10,r11,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r3,188(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x8223d084
	goto loc_8223D084;
loc_8223D070:
	// lwz r11,84(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 84);
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8223D084:
	// bctrl 
	ctx.lr = 0x8223D088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d128
	if (ctx.cr6.eq) goto loc_8223D128;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8223d128
	if (!ctx.cr6.gt) goto loc_8223D128;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8223D0AC:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8223d110
	if (!ctx.cr6.eq) goto loc_8223D110;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// addi r29,r11,120
	ctx.r29.s64 = ctx.r11.s64 + 120;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8223d110
	if (!ctx.cr6.gt) goto loc_8223D110;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8223D0D8:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223d0fc
	if (ctx.cr6.eq) goto loc_8223D0FC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a360
	ctx.lr = 0x8223D0F4;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223d144
	if (ctx.cr6.eq) goto loc_8223D144;
loc_8223D0FC:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223d0d8
	if (ctx.cr6.lt) goto loc_8223D0D8;
loc_8223D110:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,180
	ctx.r27.s64 = ctx.r27.s64 + 180;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8223d0ac
	if (ctx.cr6.lt) goto loc_8223D0AC;
loc_8223D128:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// cmplw cr6,r24,r20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x8223d04c
	if (ctx.cr6.lt) goto loc_8223D04C;
loc_8223D138:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487a4
	// ERROR 822487A4
	return;
loc_8223D144:
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82248a40
	ctx.lr = 0x8223D154;
	sub_82248A40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487a4
	// ERROR 822487A4
	return;
}

__attribute__((alias("__imp__sub_8223D160"))) PPC_WEAK_FUNC(sub_8223D160);
PPC_FUNC_IMPL(__imp__sub_8223D160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248754
	ctx.lr = 0x8223D168;
	sub_82248754(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d2f0
	if (ctx.cr6.eq) goto loc_8223D2F0;
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// addi r3,r3,1248
	ctx.r3.s64 = ctx.r3.s64 + 1248;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// bl 0x821882d0
	ctx.lr = 0x8223D194;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d2f0
	if (ctx.cr6.eq) goto loc_8223D2F0;
	// lwz r19,24(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8223d2f0
	if (ctx.cr6.eq) goto loc_8223D2F0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8223d2f0
	if (ctx.cr6.eq) goto loc_8223D2F0;
	// lwz r11,64(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 64);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r10,56(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 56);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r16,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r16.s64 = ctx.r9.s32 >> 5;
	// addic. r17,r16,1
	ctx.xer.ca = ctx.r16.u32 > 4294967294;
	ctx.r17.s64 = ctx.r16.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq 0x8223d2f0
	if (ctx.cr0.eq) goto loc_8223D2F0;
	// li r22,0
	ctx.r22.s64 = 0;
loc_8223D1D0:
	// cmplw cr6,r21,r16
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x8223d1f4
	if (!ctx.cr6.lt) goto loc_8223D1F4;
	// lwz r11,56(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 56);
	// lwzx r26,r22,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwz r3,188(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8223d208
	goto loc_8223D208;
loc_8223D1F4:
	// lwz r26,84(r15)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r15.u32 + 84);
	// lwz r3,188(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8223D208:
	// bctrl 
	ctx.lr = 0x8223D20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d2e0
	if (ctx.cr6.eq) goto loc_8223D2E0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8223d2e0
	if (!ctx.cr6.gt) goto loc_8223D2E0;
	// li r23,0
	ctx.r23.s64 = 0;
loc_8223D230:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8223d2c8
	if (!ctx.cr6.eq) goto loc_8223D2C8;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// addi r27,r11,120
	ctx.r27.s64 = ctx.r11.s64 + 120;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8223d2c8
	if (!ctx.cr6.gt) goto loc_8223D2C8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223D25C:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223d2b4
	if (ctx.cr6.eq) goto loc_8223D2B4;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a360
	ctx.lr = 0x8223D278;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223d2b4
	if (!ctx.cr6.eq) goto loc_8223D2B4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8223d2a0
	if (ctx.cr6.eq) goto loc_8223D2A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,18(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82248a40
	ctx.lr = 0x8223D298;
	sub_82248A40(ctx, base);
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x8223d2a4
	goto loc_8223D2A4;
loc_8223D2A0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8223D2A4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821b6d98
	ctx.lr = 0x8223D2B4;
	sub_821B6D98(ctx, base);
loc_8223D2B4:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223d25c
	if (ctx.cr6.lt) goto loc_8223D25C;
loc_8223D2C8:
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r23,r23,180
	ctx.r23.s64 = ctx.r23.s64 + 180;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8223d230
	if (ctx.cr6.lt) goto loc_8223D230;
loc_8223D2E0:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,32
	ctx.r22.s64 = ctx.r22.s64 + 32;
	// cmplw cr6,r21,r17
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x8223d1d0
	if (ctx.cr6.lt) goto loc_8223D1D0;
loc_8223D2F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487a4
	// ERROR 822487A4
	return;
}

__attribute__((alias("__imp__sub_8223D2FC"))) PPC_WEAK_FUNC(sub_8223D2FC);
PPC_FUNC_IMPL(__imp__sub_8223D2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223D300"))) PPC_WEAK_FUNC(sub_8223D300);
PPC_FUNC_IMPL(__imp__sub_8223D300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223D308;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-228
	ctx.r10.s64 = ctx.r11.s64 + -228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822451a0
	ctx.lr = 0x8223D32C;
	sub_822451A0(ctx, base);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r8,r9,40960
	ctx.r8.u64 = ctx.r9.u64 | 40960;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// bl 0x82245210
	ctx.lr = 0x8223D344;
	sub_82245210(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223D350"))) PPC_WEAK_FUNC(sub_8223D350);
PPC_FUNC_IMPL(__imp__sub_8223D350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-228
	ctx.r10.s64 = ctx.r11.s64 + -228;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822452b0
	ctx.lr = 0x8223D378;
	sub_822452B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822453b0
	ctx.lr = 0x8223D380;
	sub_822453B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223D394"))) PPC_WEAK_FUNC(sub_8223D394);
PPC_FUNC_IMPL(__imp__sub_8223D394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223D398"))) PPC_WEAK_FUNC(sub_8223D398);
PPC_FUNC_IMPL(__imp__sub_8223D398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8223D3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8223d418
	if (!ctx.cr6.eq) goto loc_8223D418;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223D3DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8223D3F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8223D404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8223D418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223D418:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223D42C"))) PPC_WEAK_FUNC(sub_8223D42C);
PPC_FUNC_IMPL(__imp__sub_8223D42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223D430"))) PPC_WEAK_FUNC(sub_8223D430);
PPC_FUNC_IMPL(__imp__sub_8223D430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223D438;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-228
	ctx.r10.s64 = ctx.r11.s64 + -228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822451a0
	ctx.lr = 0x8223D45C;
	sub_822451A0(ctx, base);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r8,r9,40960
	ctx.r8.u64 = ctx.r9.u64 | 40960;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// bl 0x82245210
	ctx.lr = 0x8223D474;
	sub_82245210(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r6,r7,-196
	ctx.r6.s64 = ctx.r7.s64 + -196;
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x822aa648
	ctx.lr = 0x8223D48C;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223D498"))) PPC_WEAK_FUNC(sub_8223D498);
PPC_FUNC_IMPL(__imp__sub_8223D498) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223D4A0"))) PPC_WEAK_FUNC(sub_8223D4A0);
PPC_FUNC_IMPL(__imp__sub_8223D4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223D4A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223D4B8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d4d8
	if (ctx.cr6.eq) goto loc_8223D4D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223D4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223D4D8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x8223d4b8
	if (!ctx.cr0.eq) goto loc_8223D4B8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223D4EC"))) PPC_WEAK_FUNC(sub_8223D4EC);
PPC_FUNC_IMPL(__imp__sub_8223D4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223D4F0"))) PPC_WEAK_FUNC(sub_8223D4F0);
PPC_FUNC_IMPL(__imp__sub_8223D4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223D4F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-228
	ctx.r10.s64 = ctx.r11.s64 + -228;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822452b0
	ctx.lr = 0x8223D51C;
	sub_822452B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822453b0
	ctx.lr = 0x8223D524;
	sub_822453B0(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223d540
	if (ctx.cr6.eq) goto loc_8223D540;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8223D53C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8223D540:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223D548"))) PPC_WEAK_FUNC(sub_8223D548);
PPC_FUNC_IMPL(__imp__sub_8223D548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8223D550;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223d584
	if (!ctx.cr6.eq) goto loc_8223D584;
loc_8223D578:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8223D584:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8223d598
	if (!ctx.cr6.eq) goto loc_8223D598;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8223d59c
	goto loc_8223D59C;
loc_8223D598:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8223D59C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d578
	if (ctx.cr6.eq) goto loc_8223D578;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8219b480
	ctx.lr = 0x8223D5AC;
	sub_8219B480(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223d5ec
	if (!ctx.cr6.eq) goto loc_8223D5EC;
	// bl 0x821affd8
	ctx.lr = 0x8223D5BC;
	sub_821AFFD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223D5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8223d5ec
	if (ctx.cr6.eq) goto loc_8223D5EC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82235280
	ctx.lr = 0x8223D5EC;
	sub_82235280(ctx, base);
loc_8223D5EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8223D5F8"))) PPC_WEAK_FUNC(sub_8223D5F8);
PPC_FUNC_IMPL(__imp__sub_8223D5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8223d644
	if (ctx.cr6.lt) goto loc_8223D644;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223D62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8223d644
	if (!ctx.cr6.lt) goto loc_8223D644;
	// addi r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// b 0x8223d648
	goto loc_8223D648;
loc_8223D644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223D648:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223D660"))) PPC_WEAK_FUNC(sub_8223D660);
PPC_FUNC_IMPL(__imp__sub_8223D660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8223D668;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,40(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223D68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8223D6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8223D6C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8223D6C8"))) PPC_WEAK_FUNC(sub_8223D6C8);
PPC_FUNC_IMPL(__imp__sub_8223D6C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,10936
	ctx.r4.s64 = ctx.r11.s64 + 10936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8223D6E8"))) PPC_WEAK_FUNC(sub_8223D6E8);
PPC_FUNC_IMPL(__imp__sub_8223D6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8223D6F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223d7e0
	if (ctx.cr6.eq) goto loc_8223D7E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223D718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d7e0
	if (ctx.cr6.eq) goto loc_8223D7E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223D734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8223d7e0
	if (!ctx.cr6.gt) goto loc_8223D7E0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82245268
	ctx.lr = 0x8223D74C;
	sub_82245268(ctx, base);
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223d7e0
	if (ctx.cr6.eq) goto loc_8223D7E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223D76C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d7e0
	if (ctx.cr6.eq) goto loc_8223D7E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223D788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r29,r3,180
	ctx.r29.s64 = ctx.r3.s64 * 180;
	// lwz r8,120(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8223D7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,120(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8223D7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x821847a8
	ctx.lr = 0x8223D7CC;
	sub_821847A8(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8223D7E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223D7E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8223D7E8"))) PPC_WEAK_FUNC(sub_8223D7E8);
PPC_FUNC_IMPL(__imp__sub_8223D7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223D7F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-196
	ctx.r10.s64 = ctx.r11.s64 + -196;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8223d4a0
	ctx.lr = 0x8223D80C;
	sub_8223D4A0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r8,r9,-228
	ctx.r8.s64 = ctx.r9.s64 + -228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x822452b0
	ctx.lr = 0x8223D824;
	sub_822452B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822453b0
	ctx.lr = 0x8223D82C;
	sub_822453B0(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8223d848
	if (ctx.cr6.eq) goto loc_8223D848;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8223D844;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8223D848:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223D850"))) PPC_WEAK_FUNC(sub_8223D850);
PPC_FUNC_IMPL(__imp__sub_8223D850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8223D858;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8223d4a0
	ctx.lr = 0x8223D86C;
	sub_8223D4A0(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x8223D870;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8223D878;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223D884;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8223D888;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8223D894;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8223D89C;
	sub_821830F8(ctx, base);
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82183850
	ctx.lr = 0x8223D8A4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8223d8bc
	if (ctx.cr6.eq) goto loc_8223D8BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x8223D8B8;
	sub_82183448(ctx, base);
	// b 0x8223d8c8
	goto loc_8223D8C8;
loc_8223D8BC:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8223D8C8;
	sub_821845A0(ctx, base);
loc_8223D8C8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x8223d8e0
	if (ctx.cr6.lt) goto loc_8223D8E0;
	// bne cr6,0x8223d8e8
	if (!ctx.cr6.eq) goto loc_8223D8E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8223d8e4
	goto loc_8223D8E4;
loc_8223D8E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223D8E4:
	// bl 0x821830f8
	ctx.lr = 0x8223D8E8;
	sub_821830F8(ctx, base);
loc_8223D8E8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223D8F0;
	sub_821837D0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223d548
	ctx.lr = 0x8223D908;
	sub_8223D548(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223d920
	if (ctx.cr6.eq) goto loc_8223D920;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223D920;
	sub_82183E40(ctx, base);
loc_8223D920:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8223D928"))) PPC_WEAK_FUNC(sub_8223D928);
PPC_FUNC_IMPL(__imp__sub_8223D928) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r8,r10,-128
	ctx.r8.s64 = ctx.r10.s64 + -128;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223D944"))) PPC_WEAK_FUNC(sub_8223D944);
PPC_FUNC_IMPL(__imp__sub_8223D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223D948"))) PPC_WEAK_FUNC(sub_8223D948);
PPC_FUNC_IMPL(__imp__sub_8223D948) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r10,-128
	ctx.r11.s64 = ctx.r10.s64 + -128;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223D968"))) PPC_WEAK_FUNC(sub_8223D968);
PPC_FUNC_IMPL(__imp__sub_8223D968) {
	PPC_FUNC_PROLOGUE();
	// lis r3,1525
	ctx.r3.s64 = 99942400;
	// ori r3,r3,57599
	ctx.r3.u64 = ctx.r3.u64 | 57599;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223D974"))) PPC_WEAK_FUNC(sub_8223D974);
PPC_FUNC_IMPL(__imp__sub_8223D974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223D978"))) PPC_WEAK_FUNC(sub_8223D978);
PPC_FUNC_IMPL(__imp__sub_8223D978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,473
	ctx.r11.s64 = 30998528;
	// ori r11,r11,1472
	ctx.r11.u64 = ctx.r11.u64 | 1472;
	// subfc r10,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223D998"))) PPC_WEAK_FUNC(sub_8223D998);
PPC_FUNC_IMPL(__imp__sub_8223D998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,16960
	ctx.r11.u64 = ctx.r11.u64 | 16960;
	// divw r10,r3,r11
	ctx.r10.s32 = ctx.r3.s32 / ctx.r11.s32;
	// divw r9,r4,r11
	ctx.r9.s32 = ctx.r4.s32 / ctx.r11.s32;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223D9B8"))) PPC_WEAK_FUNC(sub_8223D9B8);
PPC_FUNC_IMPL(__imp__sub_8223D9B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,10000
	ctx.r11.s64 = 10000;
	// divw r10,r3,r11
	ctx.r10.s32 = ctx.r3.s32 / ctx.r11.s32;
	// divw r9,r4,r11
	ctx.r9.s32 = ctx.r4.s32 / ctx.r11.s32;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223D9D4"))) PPC_WEAK_FUNC(sub_8223D9D4);
PPC_FUNC_IMPL(__imp__sub_8223D9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223D9D8"))) PPC_WEAK_FUNC(sub_8223D9D8);
PPC_FUNC_IMPL(__imp__sub_8223D9D8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,100
	ctx.r11.s64 = ctx.r4.s64 * 100;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223D9F0"))) PPC_WEAK_FUNC(sub_8223D9F0);
PPC_FUNC_IMPL(__imp__sub_8223D9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,26843
	ctx.r11.s64 = 1759182848;
	// li r10,10000
	ctx.r10.s64 = 10000;
	// ori r9,r11,35757
	ctx.r9.u64 = ctx.r11.u64 | 35757;
	// divw r8,r4,r10
	ctx.r8.s32 = ctx.r4.s32 / ctx.r10.s32;
	// mulhw r7,r3,r9
	ctx.r7.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r7,12
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 12;
	// mulli r10,r8,10000
	ctx.r10.s64 = ctx.r8.s64 * 10000;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r5,r6,10000
	ctx.r5.s64 = ctx.r6.s64 * 10000;
	// subf r11,r5,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r5.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DA24"))) PPC_WEAK_FUNC(sub_8223DA24);
PPC_FUNC_IMPL(__imp__sub_8223DA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DA28"))) PPC_WEAK_FUNC(sub_8223DA28);
PPC_FUNC_IMPL(__imp__sub_8223DA28) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,34079
	ctx.r9.u64 = ctx.r10.u64 | 34079;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8223da58
	if (!ctx.cr6.eq) goto loc_8223DA58;
	// mulhw r11,r3,r9
	ctx.r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r8,r10,100
	ctx.r8.s64 = ctx.r10.s64 * 100;
	// subf r11,r8,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r8.s64;
loc_8223DA58:
	// li r31,100
	ctx.r31.s64 = 100;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// divw r10,r3,r31
	ctx.r10.s32 = ctx.r3.s32 / ctx.r31.s32;
	// bne cr6,0x8223da88
	if (!ctx.cr6.eq) goto loc_8223DA88;
	// mulhw r8,r10,r9
	ctx.r8.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mulli r6,r7,100
	ctx.r6.s64 = ctx.r7.s64 * 100;
	// subf r3,r6,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r6.s64;
	// mulli r8,r3,100
	ctx.r8.s64 = ctx.r3.s64 * 100;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_8223DA88:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// divw r10,r10,r31
	ctx.r10.s32 = ctx.r10.s32 / ctx.r31.s32;
	// bne cr6,0x8223dab4
	if (!ctx.cr6.eq) goto loc_8223DAB4;
	// mulhw r9,r10,r9
	ctx.r9.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r9,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r7,r8,100
	ctx.r7.s64 = ctx.r8.s64 * 100;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// mulli r9,r6,10000
	ctx.r9.s64 = ctx.r6.s64 * 10000;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8223DAB4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8223dad8
	if (!ctx.cr6.eq) goto loc_8223DAD8;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// divw r8,r10,r31
	ctx.r8.s32 = ctx.r10.s32 / ctx.r31.s32;
	// ori r7,r9,16960
	ctx.r7.u64 = ctx.r9.u64 | 16960;
	// mullw r10,r8,r7
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8223DAD8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DAE4"))) PPC_WEAK_FUNC(sub_8223DAE4);
PPC_FUNC_IMPL(__imp__sub_8223DAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DAE8"))) PPC_WEAK_FUNC(sub_8223DAE8);
PPC_FUNC_IMPL(__imp__sub_8223DAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DB08"))) PPC_WEAK_FUNC(sub_8223DB08);
PPC_FUNC_IMPL(__imp__sub_8223DB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,11096
	ctx.r8.s64 = ctx.r11.s64 + 11096;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_8223DB1C:
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8223db34
	if (!ctx.cr6.eq) goto loc_8223DB34;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8223db50
	if (ctx.cr6.eq) goto loc_8223DB50;
loc_8223DB34:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 336, ctx.xer);
	// blt cr6,0x8223db1c
	if (ctx.cr6.lt) goto loc_8223DB1C;
	// li r3,52
	ctx.r3.s64 = 52;
	// blr 
	return;
loc_8223DB50:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DB68"))) PPC_WEAK_FUNC(sub_8223DB68);
PPC_FUNC_IMPL(__imp__sub_8223DB68) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DB78"))) PPC_WEAK_FUNC(sub_8223DB78);
PPC_FUNC_IMPL(__imp__sub_8223DB78) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DB88"))) PPC_WEAK_FUNC(sub_8223DB88);
PPC_FUNC_IMPL(__imp__sub_8223DB88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 + 5;
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DBA8"))) PPC_WEAK_FUNC(sub_8223DBA8);
PPC_FUNC_IMPL(__imp__sub_8223DBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8223DBB8:
	// stw r10,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8223dbb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223DBB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DBC8"))) PPC_WEAK_FUNC(sub_8223DBC8);
PPC_FUNC_IMPL(__imp__sub_8223DBC8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DBE0"))) PPC_WEAK_FUNC(sub_8223DBE0);
PPC_FUNC_IMPL(__imp__sub_8223DBE0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,456
	ctx.r3.s64 = ctx.r11.s64 + 456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DBF8"))) PPC_WEAK_FUNC(sub_8223DBF8);
PPC_FUNC_IMPL(__imp__sub_8223DBF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,792(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DC00"))) PPC_WEAK_FUNC(sub_8223DC00);
PPC_FUNC_IMPL(__imp__sub_8223DC00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DC08"))) PPC_WEAK_FUNC(sub_8223DC08);
PPC_FUNC_IMPL(__imp__sub_8223DC08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,804(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 804);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DC10"))) PPC_WEAK_FUNC(sub_8223DC10);
PPC_FUNC_IMPL(__imp__sub_8223DC10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,792(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// li r5,60
	ctx.r5.s64 = 60;
	// b 0x82248a40
	sub_82248A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223DC1C"))) PPC_WEAK_FUNC(sub_8223DC1C);
PPC_FUNC_IMPL(__imp__sub_8223DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DC20"))) PPC_WEAK_FUNC(sub_8223DC20);
PPC_FUNC_IMPL(__imp__sub_8223DC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r10,796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8223DC34:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8223dc34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223DC34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DC44"))) PPC_WEAK_FUNC(sub_8223DC44);
PPC_FUNC_IMPL(__imp__sub_8223DC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DC48"))) PPC_WEAK_FUNC(sub_8223DC48);
PPC_FUNC_IMPL(__imp__sub_8223DC48) {
	PPC_FUNC_PROLOGUE();
	// stw r4,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DC50"))) PPC_WEAK_FUNC(sub_8223DC50);
PPC_FUNC_IMPL(__imp__sub_8223DC50) {
	PPC_FUNC_PROLOGUE();
	// stw r4,804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 804, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DC58"))) PPC_WEAK_FUNC(sub_8223DC58);
PPC_FUNC_IMPL(__imp__sub_8223DC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223dc6c
	if (ctx.cr6.eq) goto loc_8223DC6C;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// blr 
	return;
loc_8223DC6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DC74"))) PPC_WEAK_FUNC(sub_8223DC74);
PPC_FUNC_IMPL(__imp__sub_8223DC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DC78"))) PPC_WEAK_FUNC(sub_8223DC78);
PPC_FUNC_IMPL(__imp__sub_8223DC78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223dc8c
	if (ctx.cr6.eq) goto loc_8223DC8C;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// blr 
	return;
loc_8223DC8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DC94"))) PPC_WEAK_FUNC(sub_8223DC94);
PPC_FUNC_IMPL(__imp__sub_8223DC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DC98"))) PPC_WEAK_FUNC(sub_8223DC98);
PPC_FUNC_IMPL(__imp__sub_8223DC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,11
	ctx.r10.s64 = 11;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_8223DD34:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8223dd34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223DD34;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// li r5,352
	ctx.r5.s64 = 352;
	// bl 0x82248a40
	ctx.lr = 0x8223DD54;
	sub_82248A40(ctx, base);
	// lwz r11,456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// lwz r10,460(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// stw r10,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r10.u32);
	// lwz r9,464(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// stw r9,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r9.u32);
	// lwz r8,468(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// stw r8,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r8.u32);
	// lwz r7,472(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// stw r7,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r7.u32);
	// lwz r6,476(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// stw r6,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DDA0"))) PPC_WEAK_FUNC(sub_8223DDA0);
PPC_FUNC_IMPL(__imp__sub_8223DDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8223DDA8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8223DDC4:
	// stw r31,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r31.u32);
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8223ddc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223DDC4;
	// li r9,122
	ctx.r9.s64 = 122;
	// addi r11,r28,460
	ctx.r11.s64 = ctx.r28.s64 + 460;
loc_8223DDD8:
	// li r8,4
	ctx.r8.s64 = 4;
	// sth r31,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r31.u16);
	// sth r31,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r31.u16);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// sth r31,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// sth r31,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r31.u16);
	// sth r31,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r31.u16);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
loc_8223DE08:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r7,r28
	PPC_STORE_U32(ctx.r7.u32 + ctx.r28.u32, ctx.r31.u32);
	// bdnz 0x8223de08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223DE08;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplwi cr6,r9,206
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 206, ctx.xer);
	// blt cr6,0x8223ddd8
	if (ctx.cr6.lt) goto loc_8223DDD8;
	// addi r30,r28,88
	ctx.r30.s64 = ctx.r28.s64 + 88;
	// li r29,8
	ctx.r29.s64 = 8;
loc_8223DE34:
	// stw r31,-16(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16, ctx.r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r31,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r31.u32);
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x821138b8
	ctx.lr = 0x8223DE54;
	sub_821138B8(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82245890
	ctx.lr = 0x8223DE5C;
	sub_82245890(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x8223de34
	if (!ctx.cr0.eq) goto loc_8223DE34;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8223de78
	if (ctx.cr6.eq) goto loc_8223DE78;
	// lwz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// bl 0x82239740
	ctx.lr = 0x8223DE78;
	sub_82239740(ctx, base);
loc_8223DE78:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,804(r28)
	PPC_STORE_U32(ctx.r28.u32 + 804, ctx.r31.u32);
	// stw r11,800(r28)
	PPC_STORE_U32(ctx.r28.u32 + 800, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8223DE8C"))) PPC_WEAK_FUNC(sub_8223DE8C);
PPC_FUNC_IMPL(__imp__sub_8223DE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DE90"))) PPC_WEAK_FUNC(sub_8223DE90);
PPC_FUNC_IMPL(__imp__sub_8223DE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223DE98;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8223ded4
	if (!ctx.cr6.eq) goto loc_8223DED4;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223DEB0:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223dec4
	if (ctx.cr6.eq) goto loc_8223DEC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8223DEC4;
	sub_82183E40(ctx, base);
loc_8223DEC4:
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,48(r31)
	ea = 48 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x8223deb0
	if (!ctx.cr0.eq) goto loc_8223DEB0;
loc_8223DED4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223DEDC"))) PPC_WEAK_FUNC(sub_8223DEDC);
PPC_FUNC_IMPL(__imp__sub_8223DEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DEE0"))) PPC_WEAK_FUNC(sub_8223DEE0);
PPC_FUNC_IMPL(__imp__sub_8223DEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223DEE8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 + 44;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223DEF8:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223df0c
	if (ctx.cr6.eq) goto loc_8223DF0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8223DF0C;
	sub_82183E40(ctx, base);
loc_8223DF0C:
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,48(r31)
	ea = 48 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x8223def8
	if (!ctx.cr0.eq) goto loc_8223DEF8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223DF24"))) PPC_WEAK_FUNC(sub_8223DF24);
PPC_FUNC_IMPL(__imp__sub_8223DF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223DF28"))) PPC_WEAK_FUNC(sub_8223DF28);
PPC_FUNC_IMPL(__imp__sub_8223DF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,72
	ctx.r31.s64 = ctx.r11.s64 + 72;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223df60
	if (ctx.cr6.eq) goto loc_8223DF60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8223DF60;
	sub_82183E40(ctx, base);
loc_8223DF60:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8223DF80"))) PPC_WEAK_FUNC(sub_8223DF80);
PPC_FUNC_IMPL(__imp__sub_8223DF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 + 96;
	// li r31,8
	ctx.r31.s64 = 8;
loc_8223DF9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245ce0
	ctx.lr = 0x8223DFA4;
	sub_82245CE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x8223df9c
	if (!ctx.cr0.eq) goto loc_8223DF9C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223DFC8"))) PPC_WEAK_FUNC(sub_8223DFC8);
PPC_FUNC_IMPL(__imp__sub_8223DFC8) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8223e004
	if (!ctx.cr6.eq) goto loc_8223E004;
loc_8223DFEC:
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
loc_8223E004:
	// lhz r7,74(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 74);
	// cmplwi cr6,r7,65535
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 65535, ctx.xer);
	// beq cr6,0x8223dfec
	if (ctx.cr6.eq) goto loc_8223DFEC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a5f0
	ctx.lr = 0x8223E024;
	sub_8218A5F0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x82234508
	ctx.lr = 0x8223E03C;
	sub_82234508(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82243f18
	ctx.lr = 0x8223E04C;
	sub_82243F18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8223E064"))) PPC_WEAK_FUNC(sub_8223E064);
PPC_FUNC_IMPL(__imp__sub_8223E064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223E068"))) PPC_WEAK_FUNC(sub_8223E068);
PPC_FUNC_IMPL(__imp__sub_8223E068) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8223e0a4
	if (!ctx.cr6.eq) goto loc_8223E0A4;
loc_8223E08C:
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
loc_8223E0A4:
	// addi r10,r4,38
	ctx.r10.s64 = ctx.r4.s64 + 38;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,65535
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 65535, ctx.xer);
	// beq cr6,0x8223e08c
	if (ctx.cr6.eq) goto loc_8223E08C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,272
	ctx.r5.s64 = ctx.r11.s64 + 272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a5f0
	ctx.lr = 0x8223E0CC;
	sub_8218A5F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82234508
	ctx.lr = 0x8223E0E0;
	sub_82234508(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82243f18
	ctx.lr = 0x8223E0F0;
	sub_82243F18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8223E108"))) PPC_WEAK_FUNC(sub_8223E108);
PPC_FUNC_IMPL(__imp__sub_8223E108) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8223e13c
	if (!ctx.cr6.eq) goto loc_8223E13C;
loc_8223E134:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223e1c4
	goto loc_8223E1C4;
loc_8223E13C:
	// addi r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 + 40;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,65535
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 65535, ctx.xer);
	// beq cr6,0x8223e134
	if (ctx.cr6.eq) goto loc_8223E134;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r11,288
	ctx.r5.s64 = ctx.r11.s64 + 288;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a5f0
	ctx.lr = 0x8223E164;
	sub_8218A5F0(ctx, base);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stwx r4,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r4.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82234508
	ctx.lr = 0x8223E1B0;
	sub_82234508(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82243f18
	ctx.lr = 0x8223E1C0;
	sub_82243F18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8223E1C4:
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

__attribute__((alias("__imp__sub_8223E1DC"))) PPC_WEAK_FUNC(sub_8223E1DC);
PPC_FUNC_IMPL(__imp__sub_8223E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223E1E0"))) PPC_WEAK_FUNC(sub_8223E1E0);
PPC_FUNC_IMPL(__imp__sub_8223E1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8223E1E8;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,1100
	ctx.r27.s64 = 1100;
	// addi r29,r3,476
	ctx.r29.s64 = ctx.r3.s64 + 476;
	// li r25,7
	ctx.r25.s64 = 7;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r24,r11,65436
	ctx.r24.u64 = ctx.r11.u64 | 65436;
loc_8223E20C:
	// add r11,r27,r24
	ctx.r11.u64 = ctx.r27.u64 + ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8218a810
	ctx.lr = 0x8223E21C;
	sub_8218A810(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223e45c
	if (ctx.cr6.eq) goto loc_8223E45C;
	// lwz r31,-4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223e248
	if (ctx.cr6.eq) goto loc_8223E248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223E23C;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223E248;
	sub_82183E40(ctx, base);
loc_8223E248:
	// stw r26,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r26.u32);
	// bl 0x82183850
	ctx.lr = 0x8223E250;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8223e268
	if (ctx.cr6.eq) goto loc_8223E268;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x8223E264;
	sub_82183448(ctx, base);
	// b 0x8223e270
	goto loc_8223E270;
loc_8223E268:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8223E270;
	sub_821845A0(ctx, base);
loc_8223E270:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223e284
	if (ctx.cr6.eq) goto loc_8223E284;
	// bl 0x821138b8
	ctx.lr = 0x8223E27C;
	sub_821138B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8223e288
	goto loc_8223E288;
loc_8223E284:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8223E288:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245da0
	ctx.lr = 0x8223E298;
	sub_82245DA0(ctx, base);
	// stw r31,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r31.u32);
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x8223E2A8;
	sub_8218A810(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8223e328
	if (!ctx.cr6.gt) goto loc_8223E328;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223e2d4
	if (ctx.cr6.eq) goto loc_8223E2D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223E2C8;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223E2D4;
	sub_82183E40(ctx, base);
loc_8223E2D4:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// bl 0x82183850
	ctx.lr = 0x8223E2DC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8223e2f4
	if (ctx.cr6.eq) goto loc_8223E2F4;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x8223E2F0;
	sub_82183448(ctx, base);
	// b 0x8223e2fc
	goto loc_8223E2FC;
loc_8223E2F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8223E2FC;
	sub_821845A0(ctx, base);
loc_8223E2FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223e310
	if (ctx.cr6.eq) goto loc_8223E310;
	// bl 0x821138b8
	ctx.lr = 0x8223E308;
	sub_821138B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8223e314
	goto loc_8223E314;
loc_8223E310:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8223E314:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245da0
	ctx.lr = 0x8223E324;
	sub_82245DA0(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_8223E328:
	// addi r11,r27,300
	ctx.r11.s64 = ctx.r27.s64 + 300;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8218a810
	ctx.lr = 0x8223E338;
	sub_8218A810(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8223e3b8
	if (!ctx.cr6.gt) goto loc_8223E3B8;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223e364
	if (ctx.cr6.eq) goto loc_8223E364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223E358;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223E364;
	sub_82183E40(ctx, base);
loc_8223E364:
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// bl 0x82183850
	ctx.lr = 0x8223E36C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8223e384
	if (ctx.cr6.eq) goto loc_8223E384;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x8223E380;
	sub_82183448(ctx, base);
	// b 0x8223e38c
	goto loc_8223E38C;
loc_8223E384:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8223E38C;
	sub_821845A0(ctx, base);
loc_8223E38C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223e3a0
	if (ctx.cr6.eq) goto loc_8223E3A0;
	// bl 0x821138b8
	ctx.lr = 0x8223E398;
	sub_821138B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8223e3a4
	goto loc_8223E3A4;
loc_8223E3A0:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8223E3A4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245da0
	ctx.lr = 0x8223E3B4;
	sub_82245DA0(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_8223E3B8:
	// addi r11,r27,500
	ctx.r11.s64 = ctx.r27.s64 + 500;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8218a810
	ctx.lr = 0x8223E3C8;
	sub_8218A810(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8223e448
	if (!ctx.cr6.gt) goto loc_8223E448;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223e3f4
	if (ctx.cr6.eq) goto loc_8223E3F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223E3E8;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223E3F4;
	sub_82183E40(ctx, base);
loc_8223E3F4:
	// stw r26,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r26.u32);
	// bl 0x82183850
	ctx.lr = 0x8223E3FC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8223e414
	if (ctx.cr6.eq) goto loc_8223E414;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x8223E410;
	sub_82183448(ctx, base);
	// b 0x8223e41c
	goto loc_8223E41C;
loc_8223E414:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8223E41C;
	sub_821845A0(ctx, base);
loc_8223E41C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223e430
	if (ctx.cr6.eq) goto loc_8223E430;
	// bl 0x821138b8
	ctx.lr = 0x8223E428;
	sub_821138B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8223e434
	goto loc_8223E434;
loc_8223E430:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8223E434:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245da0
	ctx.lr = 0x8223E444;
	sub_82245DA0(ctx, base);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_8223E448:
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// bl 0x82234510
	ctx.lr = 0x8223E450;
	sub_82234510(ctx, base);
	// addi r4,r27,-1100
	ctx.r4.s64 = ctx.r27.s64 + -1100;
	// addi r5,r29,-20
	ctx.r5.s64 = ctx.r29.s64 + -20;
	// bl 0x82241380
	ctx.lr = 0x8223E45C;
	sub_82241380(ctx, base);
loc_8223E45C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// bne 0x8223e20c
	if (!ctx.cr0.eq) goto loc_8223E20C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8223E474"))) PPC_WEAK_FUNC(sub_8223E474);
PPC_FUNC_IMPL(__imp__sub_8223E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223E478"))) PPC_WEAK_FUNC(sub_8223E478);
PPC_FUNC_IMPL(__imp__sub_8223E478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8223E480;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8223E498:
	// addi r11,r26,1000
	ctx.r11.s64 = ctx.r26.s64 + 1000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8218a810
	ctx.lr = 0x8223E4A8;
	sub_8218A810(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223e564
	if (ctx.cr6.eq) goto loc_8223E564;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r11,r11,122
	ctx.r11.s64 = ctx.r11.s64 + 122;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223e4f0
	if (ctx.cr6.eq) goto loc_8223E4F0;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223e4f0
	if (ctx.cr6.eq) goto loc_8223E4F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223E4E4;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223E4F0;
	sub_82183E40(ctx, base);
loc_8223E4F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r11,r11,122
	ctx.r11.s64 = ctx.r11.s64 + 122;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r25.u32);
	// bl 0x82183850
	ctx.lr = 0x8223E508;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8223e520
	if (ctx.cr6.eq) goto loc_8223E520;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x8223E51C;
	sub_82183448(ctx, base);
	// b 0x8223e528
	goto loc_8223E528;
loc_8223E520:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8223E528;
	sub_821845A0(ctx, base);
loc_8223E528:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223e53c
	if (ctx.cr6.eq) goto loc_8223E53C;
	// bl 0x821138b8
	ctx.lr = 0x8223E534;
	sub_821138B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8223e540
	goto loc_8223E540;
loc_8223E53C:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8223E540:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245da0
	ctx.lr = 0x8223E550;
	sub_82245DA0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r11,r11,122
	ctx.r11.s64 = ctx.r11.s64 + 122;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
loc_8223E564:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r29,84
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 84, ctx.xer);
	// blt cr6,0x8223e498
	if (ctx.cr6.lt) goto loc_8223E498;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8223E57C"))) PPC_WEAK_FUNC(sub_8223E57C);
PPC_FUNC_IMPL(__imp__sub_8223E57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223E580"))) PPC_WEAK_FUNC(sub_8223E580);
PPC_FUNC_IMPL(__imp__sub_8223E580) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
loc_8223E588:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8223e5ac
	if (!ctx.cr6.eq) goto loc_8223E5AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8223e588
	if (ctx.cr6.lt) goto loc_8223E588;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8223E5AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223E5B4"))) PPC_WEAK_FUNC(sub_8223E5B4);
PPC_FUNC_IMPL(__imp__sub_8223E5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223E5B8"))) PPC_WEAK_FUNC(sub_8223E5B8);
PPC_FUNC_IMPL(__imp__sub_8223E5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223e5e4
	if (ctx.cr6.eq) goto loc_8223E5E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8223E5E4;
	sub_82183E40(ctx, base);
loc_8223E5E4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// beq cr6,0x8223e604
	if (ctx.cr6.eq) goto loc_8223E604;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8223E604;
	sub_82183E40(ctx, base);
loc_8223E604:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x82245ce0
	ctx.lr = 0x8223E614;
	sub_82245CE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223E62C"))) PPC_WEAK_FUNC(sub_8223E62C);
PPC_FUNC_IMPL(__imp__sub_8223E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223E630"))) PPC_WEAK_FUNC(sub_8223E630);
PPC_FUNC_IMPL(__imp__sub_8223E630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8223E638;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r9,r11,304
	ctx.r9.s64 = ctx.r11.s64 + 304;
	// stw r6,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r29,7
	ctx.r29.s64 = 7;
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
loc_8223E678:
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// bl 0x821138b8
	ctx.lr = 0x8223E680;
	sub_821138B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245640
	ctx.lr = 0x8223E688;
	sub_82245640(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bge 0x8223e678
	if (!ctx.cr0.lt) goto loc_8223E678;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r28.u32);
	// stw r28,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r28.u32);
	// stw r28,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r28.u32);
	// bl 0x8223dda0
	ctx.lr = 0x8223E6B8;
	sub_8223DDA0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8223e6d8
	if (ctx.cr6.eq) goto loc_8223E6D8;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82080000
	ctx.lr = 0x8223E6C8;
	sub_82080000(ctx, base);
	// stw r3,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r3.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82080000
	ctx.lr = 0x8223E6D4;
	sub_82080000(ctx, base);
	// stw r3,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r3.u32);
loc_8223E6D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8223E6E4"))) PPC_WEAK_FUNC(sub_8223E6E4);
PPC_FUNC_IMPL(__imp__sub_8223E6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223E6E8"))) PPC_WEAK_FUNC(sub_8223E6E8);
PPC_FUNC_IMPL(__imp__sub_8223E6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x8223dc98
	ctx.lr = 0x8223E710;
	sub_8223DC98(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r7,48(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x8214a2d8
	ctx.lr = 0x8223E784;
	sub_8214A2D8(ctx, base);
	// addi r10,r30,76
	ctx.r10.s64 = ctx.r30.s64 + 76;
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// subf r8,r31,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r9,8
	ctx.r9.s64 = 8;
loc_8223E794:
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,-36(r11)
	PPC_STORE_U32(ctx.r11.u32 + -36, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r4.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r3,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r3.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r7,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r7.u32);
	// lwz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r6,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r6.u32);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r5,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r5.u32);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r4,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r4.u32);
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x8223e794
	if (!ctx.cr0.eq) goto loc_8223E794;
	// addi r4,r30,456
	ctx.r4.s64 = ctx.r30.s64 + 456;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x8223E80C;
	sub_82248A40(ctx, base);
	// addi r4,r30,504
	ctx.r4.s64 = ctx.r30.s64 + 504;
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x8223E81C;
	sub_82248A40(ctx, base);
	// addi r4,r30,552
	ctx.r4.s64 = ctx.r30.s64 + 552;
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x8223E82C;
	sub_82248A40(ctx, base);
	// addi r4,r30,600
	ctx.r4.s64 = ctx.r30.s64 + 600;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x8223E83C;
	sub_82248A40(ctx, base);
	// addi r4,r30,648
	ctx.r4.s64 = ctx.r30.s64 + 648;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x8223E84C;
	sub_82248A40(ctx, base);
	// addi r4,r30,696
	ctx.r4.s64 = ctx.r30.s64 + 696;
	// addi r3,r31,696
	ctx.r3.s64 = ctx.r31.s64 + 696;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x8223E85C;
	sub_82248A40(ctx, base);
	// addi r4,r30,744
	ctx.r4.s64 = ctx.r30.s64 + 744;
	// addi r3,r31,744
	ctx.r3.s64 = ctx.r31.s64 + 744;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x8223E86C;
	sub_82248A40(ctx, base);
	// lwz r4,792(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223e884
	if (ctx.cr6.eq) goto loc_8223E884;
	// li r5,60
	ctx.r5.s64 = 60;
	// lwz r3,792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// bl 0x82248a40
	ctx.lr = 0x8223E884;
	sub_82248A40(ctx, base);
loc_8223E884:
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223e8b0
	if (ctx.cr6.eq) goto loc_8223E8B0;
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r10,796(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8223E8A4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8223e8a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223E8A4;
loc_8223E8B0:
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// lwz r10,804(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 804);
	// stw r10,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223E8D8"))) PPC_WEAK_FUNC(sub_8223E8D8);
PPC_FUNC_IMPL(__imp__sub_8223E8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8223E8E0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r25,122
	ctx.r25.s64 = 122;
	// addi r28,r3,476
	ctx.r28.s64 = ctx.r3.s64 + 476;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8223E8F4:
	// lwz r31,-4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223e914
	if (ctx.cr6.eq) goto loc_8223E914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223E908;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223E914;
	sub_82183E40(ctx, base);
loc_8223E914:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r27,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223e938
	if (ctx.cr6.eq) goto loc_8223E938;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223E92C;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223E938;
	sub_82183E40(ctx, base);
loc_8223E938:
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223e95c
	if (ctx.cr6.eq) goto loc_8223E95C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223E950;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223E95C;
	sub_82183E40(ctx, base);
loc_8223E95C:
	// lwz r31,8(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223e980
	if (ctx.cr6.eq) goto loc_8223E980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223E974;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223E980;
	sub_82183E40(ctx, base);
loc_8223E980:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
loc_8223E988:
	// add r11,r25,r31
	ctx.r11.u64 = ctx.r25.u64 + ctx.r31.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r30,r26
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8223e9b0
	if (ctx.cr6.eq) goto loc_8223E9B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223E9A4;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223E9B0;
	sub_82183E40(ctx, base);
loc_8223E9B0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r27,r30,r26
	PPC_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r27.u32);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8223e988
	if (ctx.cr6.lt) goto loc_8223E988;
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// cmplwi cr6,r25,206
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 206, ctx.xer);
	// blt cr6,0x8223e8f4
	if (ctx.cr6.lt) goto loc_8223E8F4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8223E9D8"))) PPC_WEAK_FUNC(sub_8223E9D8);
PPC_FUNC_IMPL(__imp__sub_8223E9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223E9E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,88
	ctx.r31.s64 = ctx.r3.s64 + 88;
	// li r29,8
	ctx.r29.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8223E9F0:
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ea04
	if (ctx.cr6.eq) goto loc_8223EA04;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8223EA04;
	sub_82183E40(ctx, base);
loc_8223EA04:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// beq cr6,0x8223ea20
	if (ctx.cr6.eq) goto loc_8223EA20;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8223EA20;
	sub_82183E40(ctx, base);
loc_8223EA20:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x82245ce0
	ctx.lr = 0x8223EA30;
	sub_82245CE0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bne 0x8223e9f0
	if (!ctx.cr0.eq) goto loc_8223E9F0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223EA44"))) PPC_WEAK_FUNC(sub_8223EA44);
PPC_FUNC_IMPL(__imp__sub_8223EA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223EA48"))) PPC_WEAK_FUNC(sub_8223EA48);
PPC_FUNC_IMPL(__imp__sub_8223EA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8223ea90
	if (ctx.cr6.lt) goto loc_8223EA90;
	// bne cr6,0x8223eac0
	if (!ctx.cr6.eq) goto loc_8223EAC0;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x8223e5b8
	ctx.lr = 0x8223EA7C;
	sub_8223E5B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8223EA90:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223eab4
	if (ctx.cr6.eq) goto loc_8223EAB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8223EAB4;
	sub_82183E40(ctx, base);
loc_8223EAB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_8223EAC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223EAD4"))) PPC_WEAK_FUNC(sub_8223EAD4);
PPC_FUNC_IMPL(__imp__sub_8223EAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223EAD8"))) PPC_WEAK_FUNC(sub_8223EAD8);
PPC_FUNC_IMPL(__imp__sub_8223EAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8223EAE0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r4,5
	ctx.r10.s64 = ctx.r4.s64 + 5;
	// addi r9,r4,11
	ctx.r9.s64 = ctx.r4.s64 + 11;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// stwx r26,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r26.u32);
	// stwx r26,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r26.u32);
	// bgt cr6,0x8223ec80
	if (ctx.cr6.gt) goto loc_8223EC80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8223eb44
	// bdzf 4*cr6+eq,0x8223ec64
	// bdzf 4*cr6+eq,0x8223ec64
	// bdzf 4*cr6+eq,0x8223ec64
	// bne cr6,0x8223ec64
	if (!ctx.cr6.eq) goto loc_8223EC64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223e9d8
	ctx.lr = 0x8223EB34;
	sub_8223E9D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223dfc8
	ctx.lr = 0x8223EB3C;
	sub_8223DFC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8223EB44:
	// li r25,122
	ctx.r25.s64 = 122;
	// addi r27,r28,476
	ctx.r27.s64 = ctx.r28.s64 + 476;
loc_8223EB4C:
	// lwz r31,-4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223eb6c
	if (ctx.cr6.eq) goto loc_8223EB6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223EB60;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223EB6C;
	sub_82183E40(ctx, base);
loc_8223EB6C:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r26,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r26.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223eb90
	if (ctx.cr6.eq) goto loc_8223EB90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223EB84;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223EB90;
	sub_82183E40(ctx, base);
loc_8223EB90:
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223ebb4
	if (ctx.cr6.eq) goto loc_8223EBB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223EBA8;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223EBB4;
	sub_82183E40(ctx, base);
loc_8223EBB4:
	// lwz r31,8(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223ebd8
	if (ctx.cr6.eq) goto loc_8223EBD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223EBCC;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223EBD8;
	sub_82183E40(ctx, base);
loc_8223EBD8:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
loc_8223EBE0:
	// add r11,r25,r31
	ctx.r11.u64 = ctx.r25.u64 + ctx.r31.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r30,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8223ec08
	if (ctx.cr6.eq) goto loc_8223EC08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223EBFC;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223EC08;
	sub_82183E40(ctx, base);
loc_8223EC08:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r26,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r26.u32);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8223ebe0
	if (ctx.cr6.lt) goto loc_8223EBE0;
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// addi r27,r27,48
	ctx.r27.s64 = ctx.r27.s64 + 48;
	// cmplwi cr6,r25,206
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 206, ctx.xer);
	// blt cr6,0x8223eb4c
	if (ctx.cr6.lt) goto loc_8223EB4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223e068
	ctx.lr = 0x8223EC34;
	sub_8223E068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8223ec48
	if (ctx.cr6.eq) goto loc_8223EC48;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8223EC48:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223e068
	ctx.lr = 0x8223EC54;
	sub_8223E068(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8223EC64:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223e108
	ctx.lr = 0x8223EC70;
	sub_8223E108(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8223EC80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8223EC8C"))) PPC_WEAK_FUNC(sub_8223EC8C);
PPC_FUNC_IMPL(__imp__sub_8223EC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223EC90"))) PPC_WEAK_FUNC(sub_8223EC90);
PPC_FUNC_IMPL(__imp__sub_8223EC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8223EC98;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r25,122
	ctx.r25.s64 = 122;
	// addi r28,r3,476
	ctx.r28.s64 = ctx.r3.s64 + 476;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8223ECAC:
	// lwz r31,-4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223eccc
	if (ctx.cr6.eq) goto loc_8223ECCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223ECC0;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223ECCC;
	sub_82183E40(ctx, base);
loc_8223ECCC:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r27,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223ecf0
	if (ctx.cr6.eq) goto loc_8223ECF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223ECE4;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223ECF0;
	sub_82183E40(ctx, base);
loc_8223ECF0:
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223ed14
	if (ctx.cr6.eq) goto loc_8223ED14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223ED08;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223ED14;
	sub_82183E40(ctx, base);
loc_8223ED14:
	// lwz r31,8(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223ed38
	if (ctx.cr6.eq) goto loc_8223ED38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223ED2C;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223ED38;
	sub_82183E40(ctx, base);
loc_8223ED38:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
loc_8223ED40:
	// add r11,r25,r31
	ctx.r11.u64 = ctx.r25.u64 + ctx.r31.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r30,r26
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8223ed68
	if (ctx.cr6.eq) goto loc_8223ED68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82245d30
	ctx.lr = 0x8223ED5C;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223ED68;
	sub_82183E40(ctx, base);
loc_8223ED68:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r27,r30,r26
	PPC_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r27.u32);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8223ed40
	if (ctx.cr6.lt) goto loc_8223ED40;
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// cmplwi cr6,r25,206
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 206, ctx.xer);
	// blt cr6,0x8223ecac
	if (ctx.cr6.lt) goto loc_8223ECAC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8223e9d8
	ctx.lr = 0x8223ED90;
	sub_8223E9D8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r26,40
	ctx.r11.s64 = ctx.r26.s64 + 40;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8223ED9C:
	// stw r27,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r27.u32);
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8223ed9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223ED9C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8223EDB0"))) PPC_WEAK_FUNC(sub_8223EDB0);
PPC_FUNC_IMPL(__imp__sub_8223EDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8223EDB8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,2300
	ctx.r11.s64 = ctx.r5.s64 + 2300;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8218a810
	ctx.lr = 0x8223EDD8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223ee68
	if (ctx.cr6.eq) goto loc_8223EE68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ab00
	ctx.lr = 0x8223EDEC;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ee68
	if (ctx.cr6.eq) goto loc_8223EE68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x8223EE00;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223ee1c
	if (ctx.cr6.eq) goto loc_8223EE1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218abc0
	ctx.lr = 0x8223EE14;
	sub_8218ABC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8223ee20
	goto loc_8223EE20;
loc_8223EE1C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223EE20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x8223EE2C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223ee48
	if (ctx.cr6.eq) goto loc_8223EE48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x8223EE40;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8223ee4c
	goto loc_8223EE4C;
loc_8223EE48:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8223EE4C:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ee60
	if (ctx.cr6.eq) goto loc_8223EE60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8223EE60;
	sub_82183E40(ctx, base);
loc_8223EE60:
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
loc_8223EE68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8223EE70"))) PPC_WEAK_FUNC(sub_8223EE70);
PPC_FUNC_IMPL(__imp__sub_8223EE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x8214a2d8
	ctx.lr = 0x8223EE8C;
	sub_8214A2D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223ec90
	ctx.lr = 0x8223EE94;
	sub_8223EC90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223EEA8"))) PPC_WEAK_FUNC(sub_8223EEA8);
PPC_FUNC_IMPL(__imp__sub_8223EEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223EEB0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,796(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,304
	ctx.r10.s64 = ctx.r11.s64 + 304;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8223eed8
	if (ctx.cr6.eq) goto loc_8223EED8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8223EED8;
	sub_82183E40(ctx, base);
loc_8223EED8:
	// lwz r3,792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223eef4
	if (ctx.cr6.eq) goto loc_8223EEF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8223EEF4;
	sub_82183E40(ctx, base);
loc_8223EEF4:
	// stw r30,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223e8d8
	ctx.lr = 0x8223EF00;
	sub_8223E8D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223e9d8
	ctx.lr = 0x8223EF08;
	sub_8223E9D8(ctx, base);
	// addi r11,r31,456
	ctx.r11.s64 = ctx.r31.s64 + 456;
	// li r29,7
	ctx.r29.s64 = 7;
	// addi r30,r11,24
	ctx.r30.s64 = ctx.r11.s64 + 24;
loc_8223EF14:
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82245758
	ctx.lr = 0x8223EF20;
	sub_82245758(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245ce0
	ctx.lr = 0x8223EF28;
	sub_82245CE0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8223ef14
	if (!ctx.cr0.lt) goto loc_8223EF14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,11096
	ctx.r10.s64 = ctx.r11.s64 + 11096;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223EF44"))) PPC_WEAK_FUNC(sub_8223EF44);
PPC_FUNC_IMPL(__imp__sub_8223EF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223EF48"))) PPC_WEAK_FUNC(sub_8223EF48);
PPC_FUNC_IMPL(__imp__sub_8223EF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8223EF50;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r3,72
	ctx.r27.s64 = ctx.r3.s64 + 72;
	// ori r22,r11,65136
	ctx.r22.u64 = ctx.r11.u64 | 65136;
loc_8223EF6C:
	// addi r24,r26,2400
	ctx.r24.s64 = ctx.r26.s64 + 2400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r24,r22
	ctx.r11.u64 = ctx.r24.u64 + ctx.r22.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8218a810
	ctx.lr = 0x8223EF80;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223f04c
	if (ctx.cr6.eq) goto loc_8223F04C;
	// li r25,0
	ctx.r25.s64 = 0;
loc_8223EF8C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// li r11,2000
	ctx.r11.s64 = 2000;
	// beq cr6,0x8223ef9c
	if (ctx.cr6.eq) goto loc_8223EF9C;
	// li r11,2100
	ctx.r11.s64 = 2100;
loc_8223EF9C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8218a810
	ctx.lr = 0x8223EFB0;
	sub_8218A810(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8218abc0
	ctx.lr = 0x8223EFC0;
	sub_8218ABC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183850
	ctx.lr = 0x8223EFC8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8223efe0
	if (ctx.cr6.eq) goto loc_8223EFE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x8223EFDC;
	sub_82183448(ctx, base);
	// b 0x8223efec
	goto loc_8223EFEC;
loc_8223EFE0:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8223EFEC;
	sub_821845A0(ctx, base);
loc_8223EFEC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ab00
	ctx.lr = 0x8223EFFC;
	sub_8218AB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x8223F00C;
	sub_821847A8(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8223f040
	if (!ctx.cr6.eq) goto loc_8223F040;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8223edb0
	ctx.lr = 0x8223F030;
	sub_8223EDB0(ctx, base);
	// clrlwi r5,r24,16
	ctx.r5.u64 = ctx.r24.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r27,36
	ctx.r3.s64 = ctx.r27.s64 + 36;
	// bl 0x82245958
	ctx.lr = 0x8223F040;
	sub_82245958(ctx, base);
loc_8223F040:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// blt cr6,0x8223ef8c
	if (ctx.cr6.lt) goto loc_8223EF8C;
loc_8223F04C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,48
	ctx.r27.s64 = ctx.r27.s64 + 48;
	// cmplwi cr6,r26,8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 8, ctx.xer);
	// blt cr6,0x8223ef6c
	if (ctx.cr6.lt) goto loc_8223EF6C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8223F064"))) PPC_WEAK_FUNC(sub_8223F064);
PPC_FUNC_IMPL(__imp__sub_8223F064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F068"))) PPC_WEAK_FUNC(sub_8223F068);
PPC_FUNC_IMPL(__imp__sub_8223F068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8223eea8
	ctx.lr = 0x8223F088;
	sub_8223EEA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f0a4
	if (ctx.cr6.eq) goto loc_8223F0A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8223F0A0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8223F0A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223F0BC"))) PPC_WEAK_FUNC(sub_8223F0BC);
PPC_FUNC_IMPL(__imp__sub_8223F0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F0C0"))) PPC_WEAK_FUNC(sub_8223F0C0);
PPC_FUNC_IMPL(__imp__sub_8223F0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223F0C8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x8223F0DC;
	sub_8218AA18(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82234518
	ctx.lr = 0x8223F0E4;
	sub_82234518(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8223F0EC;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223F0F8;
	sub_821837D0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223f114
	if (!ctx.cr6.eq) goto loc_8223F114;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223ef48
	ctx.lr = 0x8223F110;
	sub_8223EF48(ctx, base);
	// b 0x8223f158
	goto loc_8223F158;
loc_8223F114:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8223f12c
	if (!ctx.cr6.eq) goto loc_8223F12C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223e1e0
	ctx.lr = 0x8223F128;
	sub_8223E1E0(ctx, base);
	// b 0x8223f158
	goto loc_8223F158;
loc_8223F12C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8223f14c
	if (ctx.cr6.eq) goto loc_8223F14C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8223f14c
	if (ctx.cr6.eq) goto loc_8223F14C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8223f14c
	if (ctx.cr6.eq) goto loc_8223F14C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8223f158
	if (!ctx.cr6.eq) goto loc_8223F158;
loc_8223F14C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223e478
	ctx.lr = 0x8223F158;
	sub_8223E478(ctx, base);
loc_8223F158:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,11
	ctx.r8.s64 = ctx.r11.s64 + 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x821837d0
	ctx.lr = 0x8223F17C;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x8223F184;
	sub_8218A7F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223F18C"))) PPC_WEAK_FUNC(sub_8223F18C);
PPC_FUNC_IMPL(__imp__sub_8223F18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F190"))) PPC_WEAK_FUNC(sub_8223F190);
PPC_FUNC_IMPL(__imp__sub_8223F190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82234530
	ctx.lr = 0x8223F1B4;
	sub_82234530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82245f68
	ctx.lr = 0x8223F1C4;
	sub_82245F68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223F1DC"))) PPC_WEAK_FUNC(sub_8223F1DC);
PPC_FUNC_IMPL(__imp__sub_8223F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F1E0"))) PPC_WEAK_FUNC(sub_8223F1E0);
PPC_FUNC_IMPL(__imp__sub_8223F1E0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,312
	ctx.r8.s64 = ctx.r10.s64 + 312;
	// lhzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223F1F8"))) PPC_WEAK_FUNC(sub_8223F1F8);
PPC_FUNC_IMPL(__imp__sub_8223F1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8223F200;
	sub_82248774(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r31,8
	ctx.r31.s64 = 8;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r30,9
	ctx.r30.s64 = 9;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r29,10
	ctx.r29.s64 = 10;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r28,11
	ctx.r28.s64 = 11;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r27,12
	ctx.r27.s64 = 12;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r26,13
	ctx.r26.s64 = 13;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// li r25,14
	ctx.r25.s64 = 14;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r23,16
	ctx.r23.s64 = 16;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// stw r5,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// stw r9,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// stw r10,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// stw r9,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// stw r26,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r26.u32);
	// stw r10,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// stw r10,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// stw r9,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r9.u32);
	// stw r25,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r25.u32);
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// stw r10,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// stw r24,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r24.u32);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// stw r8,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r8.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r5,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r5.u32);
	// stw r23,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// li r5,288
	ctx.r5.s64 = 288;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// stw r10,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// stw r6,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// bl 0x821847a8
	ctx.lr = 0x8223F378;
	sub_821847A8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8223F380"))) PPC_WEAK_FUNC(sub_8223F380);
PPC_FUNC_IMPL(__imp__sub_8223F380) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
loc_8223F38C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8223f3a4
	if (ctx.cr6.eq) goto loc_8223F3A4;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8223f3bc
	if (ctx.cr6.eq) goto loc_8223F3BC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8223F3A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8223f38c
	if (ctx.cr6.lt) goto loc_8223F38C;
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8223F3BC:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8223f3cc
	if (!ctx.cr6.eq) goto loc_8223F3CC;
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8223F3CC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223F3D4"))) PPC_WEAK_FUNC(sub_8223F3D4);
PPC_FUNC_IMPL(__imp__sub_8223F3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F3D8"))) PPC_WEAK_FUNC(sub_8223F3D8);
PPC_FUNC_IMPL(__imp__sub_8223F3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8223F3E0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82234530
	ctx.lr = 0x8223F3F4;
	sub_82234530(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82234528
	ctx.lr = 0x8223F400;
	sub_82234528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8223F408;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223F414;
	sub_821837D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8223d398
	ctx.lr = 0x8223F424;
	sub_8223D398(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223F42C;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8223F434"))) PPC_WEAK_FUNC(sub_8223F434);
PPC_FUNC_IMPL(__imp__sub_8223F434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F438"))) PPC_WEAK_FUNC(sub_8223F438);
PPC_FUNC_IMPL(__imp__sub_8223F438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x8223F440;
	sub_82248764(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223f5bc
	if (ctx.cr6.eq) goto loc_8223F5BC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223f5bc
	if (ctx.cr6.eq) goto loc_8223F5BC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82234530
	ctx.lr = 0x8223F468;
	sub_82234530(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8234a248
	ctx.lr = 0x8223F474;
	sub_8234A248(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfe r10,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic r4,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfe r11,r4,r9
	temp.u8 = (~ctx.r4.u32 + ctx.r9.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfe r11,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfe r11,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfe r10,r7,r5
	temp.u8 = (~ctx.r7.u32 + ctx.r5.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r6,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r10,r6,r3
	temp.u8 = (~ctx.r6.u32 + ctx.r3.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add. r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r4.u32);
	// beq 0x8223f5bc
	if (ctx.cr0.eq) goto loc_8223F5BC;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x820f64f8
	ctx.lr = 0x8223F4E4;
	sub_820F64F8(ctx, base);
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223f5bc
	if (!ctx.cr6.gt) goto loc_8223F5BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r25,r27,16
	ctx.r25.s64 = ctx.r27.s64 + 16;
	// addi r22,r11,312
	ctx.r22.s64 = ctx.r11.s64 + 312;
loc_8223F504:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f380
	ctx.lr = 0x8223F510;
	sub_8223F380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x8223f5a4
	if (ctx.cr6.eq) goto loc_8223F5A4;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// add. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223f530
	if (ctx.cr0.eq) goto loc_8223F530;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8223f534
	goto loc_8223F534;
loc_8223F530:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8223F534:
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r22
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r22.u32);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// bl 0x82234528
	ctx.lr = 0x8223F54C;
	sub_82234528(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8223F554;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223F560;
	sub_821837D0(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x8223F568;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f588
	if (ctx.cr6.eq) goto loc_8223F588;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822460b0
	ctx.lr = 0x8223F584;
	sub_822460B0(ctx, base);
	// b 0x8223f58c
	goto loc_8223F58C;
loc_8223F588:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223F58C:
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223d398
	ctx.lr = 0x8223F59C;
	sub_8223D398(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223F5A4;
	sub_821837D0(ctx, base);
loc_8223F5A4:
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223f504
	if (ctx.cr6.lt) goto loc_8223F504;
loc_8223F5BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_8223F5C4"))) PPC_WEAK_FUNC(sub_8223F5C4);
PPC_FUNC_IMPL(__imp__sub_8223F5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F5C8"))) PPC_WEAK_FUNC(sub_8223F5C8);
PPC_FUNC_IMPL(__imp__sub_8223F5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8223F5D0;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x820f66b0
	ctx.lr = 0x8223F5F0;
	sub_820F66B0(ctx, base);
	// lwz r7,40(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8223f760
	if (ctx.cr6.eq) goto loc_8223F760;
	// addi r25,r24,8
	ctx.r25.s64 = ctx.r24.s64 + 8;
loc_8223F604:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8223F610:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8223f628
	if (ctx.cr6.eq) goto loc_8223F628;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8223f63c
	if (ctx.cr6.eq) goto loc_8223F63C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8223F628:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8223f610
	if (ctx.cr6.lt) goto loc_8223F610;
	// b 0x8223f66c
	goto loc_8223F66C;
loc_8223F63C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8223f66c
	if (ctx.cr6.eq) goto loc_8223F66C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8223f66c
	if (ctx.cr6.eq) goto loc_8223F66C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223f66c
	if (ctx.cr6.eq) goto loc_8223F66C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223f66c
	if (ctx.cr6.eq) goto loc_8223F66C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8223F66C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8223f604
	if (ctx.cr6.lt) goto loc_8223F604;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223f760
	if (ctx.cr6.eq) goto loc_8223F760;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x820f6948
	ctx.lr = 0x8223F690;
	sub_820F6948(ctx, base);
	// lwz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223f760
	if (!ctx.cr6.gt) goto loc_8223F760;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,312
	ctx.r29.s64 = ctx.r11.s64 + 312;
loc_8223F6A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r31,2
	ctx.r31.s64 = 2;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8223F6B4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223f6cc
	if (ctx.cr6.eq) goto loc_8223F6CC;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8223f6e0
	if (ctx.cr6.eq) goto loc_8223F6E0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8223F6CC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8223f6b4
	if (ctx.cr6.lt) goto loc_8223F6B4;
	// b 0x8223f750
	goto loc_8223F750;
loc_8223F6E0:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8223f750
	if (ctx.cr6.eq) goto loc_8223F750;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// beq cr6,0x8223f750
	if (ctx.cr6.eq) goto loc_8223F750;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223f750
	if (ctx.cr6.eq) goto loc_8223F750;
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8223f750
	if (ctx.cr6.eq) goto loc_8223F750;
	// addi r8,r31,-2
	ctx.r8.s64 = ctx.r31.s64 + -2;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,20(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lhzx r6,r7,r29
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x820f6328
	ctx.lr = 0x8223F73C;
	sub_820F6328(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8223f750
	if (ctx.cr6.eq) goto loc_8223F750;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82234e10
	ctx.lr = 0x8223F750;
	sub_82234E10(ctx, base);
loc_8223F750:
	// lwz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223f6a8
	if (ctx.cr6.lt) goto loc_8223F6A8;
loc_8223F760:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8223F768"))) PPC_WEAK_FUNC(sub_8223F768);
PPC_FUNC_IMPL(__imp__sub_8223F768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f794
	if (ctx.cr6.eq) goto loc_8223F794;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8223F794;
	sub_82183E40(ctx, base);
loc_8223F794:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f7b0
	if (ctx.cr6.eq) goto loc_8223F7B0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8223F7B0;
	sub_82183E40(ctx, base);
loc_8223F7B0:
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223f7c8
	if (ctx.cr6.eq) goto loc_8223F7C8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8223F7C8;
	sub_82183E40(ctx, base);
loc_8223F7C8:
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223F7E4"))) PPC_WEAK_FUNC(sub_8223F7E4);
PPC_FUNC_IMPL(__imp__sub_8223F7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223F7E8"))) PPC_WEAK_FUNC(sub_8223F7E8);
PPC_FUNC_IMPL(__imp__sub_8223F7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8223F7F0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,188(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 188);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223F80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r3,-19048(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19048);
	// lwz r31,20(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi r30,r7,16
	ctx.r30.u64 = ctx.r7.u32 & 0xFFFF;
	// bl 0x821a2548
	ctx.lr = 0x8223F828;
	sub_821A2548(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82271e50
	ctx.lr = 0x8223F840;
	sub_82271E50(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8223f900
	if (!ctx.cr6.gt) goto loc_8223F900;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_8223F854:
	// lwz r11,240(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 240);
	// lwz r10,264(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	// add r30,r27,r10
	ctx.r30.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223f878
	if (ctx.cr6.eq) goto loc_8223F878;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8223f87c
	goto loc_8223F87C;
loc_8223F878:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8223F87C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82269510
	ctx.lr = 0x8223F890;
	sub_82269510(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8223f8e4
	if (!ctx.cr6.gt) goto loc_8223F8E4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8223F8A4:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x8223f8a4
	if (ctx.cr6.lt) goto loc_8223F8A4;
loc_8223F8E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822683f8
	ctx.lr = 0x8223F8EC;
	sub_822683F8(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,180
	ctx.r31.s64 = ctx.r31.s64 + 180;
	// bne 0x8223f854
	if (!ctx.cr0.eq) goto loc_8223F854;
loc_8223F900:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8223F908"))) PPC_WEAK_FUNC(sub_8223F908);
PPC_FUNC_IMPL(__imp__sub_8223F908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8223F910;
	sub_82248788(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fa14
	if (ctx.cr6.eq) goto loc_8223FA14;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223fa14
	if (ctx.cr6.eq) goto loc_8223FA14;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8223fa14
	if (!ctx.cr6.gt) goto loc_8223FA14;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// addi r31,r4,24
	ctx.r31.s64 = ctx.r4.s64 + 24;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_8223F93C:
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82187c20
	ctx.lr = 0x8223F98C;
	sub_82187C20(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8223f9f0
	if (!ctx.cr6.eq) goto loc_8223F9F0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r30,-32
	ctx.r7.s64 = ctx.r30.s64 + -32;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r6,-32(r30)
	PPC_STORE_U64(ctx.r30.u32 + -32, ctx.r6.u64);
	// std r5,-24(r30)
	PPC_STORE_U64(ctx.r30.u32 + -24, ctx.r5.u64);
	// std r4,-16(r30)
	PPC_STORE_U64(ctx.r30.u32 + -16, ctx.r4.u64);
	// std r3,-8(r30)
	PPC_STORE_U64(ctx.r30.u32 + -8, ctx.r3.u64);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// std r9,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r9.u64);
	// std r8,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r8.u64);
	// b 0x8223fa04
	goto loc_8223FA04;
loc_8223F9F0:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// bl 0x82289c50
	ctx.lr = 0x8223FA04;
	sub_82289C50(ctx, base);
loc_8223FA04:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne 0x8223f93c
	if (!ctx.cr0.eq) goto loc_8223F93C;
loc_8223FA14:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8223FA1C"))) PPC_WEAK_FUNC(sub_8223FA1C);
PPC_FUNC_IMPL(__imp__sub_8223FA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223FA20"))) PPC_WEAK_FUNC(sub_8223FA20);
PPC_FUNC_IMPL(__imp__sub_8223FA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x8223FA28;
	sub_8224875C(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223fba4
	if (ctx.cr6.eq) goto loc_8223FBA4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8223fba4
	if (ctx.cr6.eq) goto loc_8223FBA4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8223fba4
	if (!ctx.cr6.gt) goto loc_8223FBA4;
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// ld r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// ld r25,24(r11)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r24,r1,176
	ctx.r24.s64 = ctx.r1.s64 + 176;
	// ld r23,32(r11)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r22,r1,192
	ctx.r22.s64 = ctx.r1.s64 + 192;
	// ld r21,40(r11)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// addi r20,r1,208
	ctx.r20.s64 = ctx.r1.s64 + 208;
	// ld r19,48(r11)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// lfs f0,2148(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// ld r17,56(r11)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// addi r18,r1,224
	ctx.r18.s64 = ctx.r1.s64 + 224;
	// std r27,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r27.u64);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// std r25,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r25.u64);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// std r23,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r23.u64);
	// lfs f13,2144(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// std r21,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r21.u64);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// std r19,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r19.u64);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r17,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r17.u64);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// ld r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// ld r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// ld r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// ld r28,48(r10)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// ld r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r8,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r8.u64);
	// std r7,8(r24)
	PPC_STORE_U64(ctx.r24.u32 + 8, ctx.r7.u64);
	// std r6,0(r22)
	PPC_STORE_U64(ctx.r22.u32 + 0, ctx.r6.u64);
	// std r5,8(r22)
	PPC_STORE_U64(ctx.r22.u32 + 8, ctx.r5.u64);
	// std r11,0(r20)
	PPC_STORE_U64(ctx.r20.u32 + 0, ctx.r11.u64);
	// std r9,8(r20)
	PPC_STORE_U64(ctx.r20.u32 + 8, ctx.r9.u64);
	// std r28,0(r18)
	PPC_STORE_U64(ctx.r18.u32 + 0, ctx.r28.u64);
	// std r10,8(r18)
	PPC_STORE_U64(ctx.r18.u32 + 8, ctx.r10.u64);
	// bl 0x82096f18
	ctx.lr = 0x8223FB34;
	sub_82096F18(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82289c50
	ctx.lr = 0x8223FB44;
	sub_82289C50(ctx, base);
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// bl 0x82188080
	ctx.lr = 0x8223FB60;
	sub_82188080(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r30,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_8223FBA4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_8223FBAC"))) PPC_WEAK_FUNC(sub_8223FBAC);
PPC_FUNC_IMPL(__imp__sub_8223FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223FBB0"))) PPC_WEAK_FUNC(sub_8223FBB0);
PPC_FUNC_IMPL(__imp__sub_8223FBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8223FBB8;
	sub_82248784(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// blt cr6,0x8223fc60
	if (ctx.cr6.lt) goto loc_8223FC60;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x8223fc68
	if (!ctx.cr6.lt) goto loc_8223FC68;
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8234a248
	ctx.lr = 0x8223FBDC;
	sub_8234A248(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fd24
	if (ctx.cr6.eq) goto loc_8223FD24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223FBF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824053e8
	ctx.lr = 0x8223FC00;
	sub_824053E8(ctx, base);
loc_8223FC00:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82405380
	ctx.lr = 0x8223FC0C;
	sub_82405380(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82405330
	ctx.lr = 0x8223FC48;
	sub_82405330(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824054e0
	ctx.lr = 0x8223FC50;
	sub_824054E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223fc00
	if (!ctx.cr6.eq) goto loc_8223FC00;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8223FC60:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x8223fd24
	if (ctx.cr6.lt) goto loc_8223FD24;
loc_8223FC68:
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// bge cr6,0x8223fd24
	if (!ctx.cr6.lt) goto loc_8223FD24;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r29,6
	ctx.r29.s64 = 6;
loc_8223FC78:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8223fd18
	if (ctx.cr6.eq) goto loc_8223FD18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4870
	ctx.lr = 0x8223FC8C;
	sub_821F4870(ctx, base);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8223fd18
	if (!ctx.cr6.eq) goto loc_8223FD18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234a248
	ctx.lr = 0x8223FC9C;
	sub_8234A248(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fd18
	if (ctx.cr6.eq) goto loc_8223FD18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8223FCB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824053e8
	ctx.lr = 0x8223FCC0;
	sub_824053E8(ctx, base);
loc_8223FCC0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82405380
	ctx.lr = 0x8223FCCC;
	sub_82405380(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82405330
	ctx.lr = 0x8223FD08;
	sub_82405330(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824054e0
	ctx.lr = 0x8223FD10;
	sub_824054E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8223fcc0
	if (!ctx.cr6.eq) goto loc_8223FCC0;
loc_8223FD18:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8223fc78
	if (!ctx.cr0.eq) goto loc_8223FC78;
loc_8223FD24:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8223FD2C"))) PPC_WEAK_FUNC(sub_8223FD2C);
PPC_FUNC_IMPL(__imp__sub_8223FD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223FD30"))) PPC_WEAK_FUNC(sub_8223FD30);
PPC_FUNC_IMPL(__imp__sub_8223FD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8223FD38;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,344
	ctx.r10.s64 = ctx.r11.s64 + 344;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x82245ea0
	ctx.lr = 0x8223FD6C;
	sub_82245EA0(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8223f1f8
	ctx.lr = 0x8223FD74;
	sub_8223F1F8(ctx, base);
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// bl 0x8209eda0
	ctx.lr = 0x8223FD7C;
	sub_8209EDA0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// lfs f0,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// bl 0x82183850
	ctx.lr = 0x8223FD9C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8223fdb4
	if (ctx.cr6.eq) goto loc_8223FDB4;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82183448
	ctx.lr = 0x8223FDB0;
	sub_82183448(ctx, base);
	// b 0x8223fdbc
	goto loc_8223FDBC;
loc_8223FDB4:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8223FDBC;
	sub_821845A0(ctx, base);
loc_8223FDBC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fdd4
	if (ctx.cr6.eq) goto loc_8223FDD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8223d430
	ctx.lr = 0x8223FDD0;
	sub_8223D430(ctx, base);
	// b 0x8223fdd8
	goto loc_8223FDD8;
loc_8223FDD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8223FDD8:
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8223FDEC:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8223fdec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223FDEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8223FE00"))) PPC_WEAK_FUNC(sub_8223FE00);
PPC_FUNC_IMPL(__imp__sub_8223FE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8223FE08;
	sub_82248788(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x8223FE1C;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8223FE24;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223FE30;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8223FE34;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8223fe4c
	if (ctx.cr6.eq) goto loc_8223FE4C;
	// li r3,772
	ctx.r3.s64 = 772;
	// bl 0x82183448
	ctx.lr = 0x8223FE48;
	sub_82183448(ctx, base);
	// b 0x8223fe54
	goto loc_8223FE54;
loc_8223FE4C:
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x821845a0
	ctx.lr = 0x8223FE54;
	sub_821845A0(ctx, base);
loc_8223FE54:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223fe64
	if (ctx.cr6.eq) goto loc_8223FE64;
	// bl 0x822453b8
	ctx.lr = 0x8223FE60;
	sub_822453B8(ctx, base);
	// b 0x8223fe68
	goto loc_8223FE68;
loc_8223FE64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223FE68:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x8223FE70;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8223fe8c
	if (ctx.cr6.eq) goto loc_8223FE8C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,36960
	ctx.r3.u64 = ctx.r3.u64 | 36960;
	// bl 0x82183448
	ctx.lr = 0x8223FE88;
	sub_82183448(ctx, base);
	// b 0x8223fe94
	goto loc_8223FE94;
loc_8223FE8C:
	// li r3,2310
	ctx.r3.s64 = 2310;
	// bl 0x821845a0
	ctx.lr = 0x8223FE94;
	sub_821845A0(ctx, base);
loc_8223FE94:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8234a248
	ctx.lr = 0x8223FEA4;
	sub_8234A248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82245528
	ctx.lr = 0x8223FEB0;
	sub_82245528(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,6720
	ctx.r31.s64 = 6720;
	// lfs f30,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_8223FED8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r8,r11,-6720
	ctx.r8.s64 = ctx.r11.s64 + -6720;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,-6720(r11)
	PPC_STORE_U64(ctx.r11.u32 + -6720, ctx.r7.u64);
	// std r6,-6712(r11)
	PPC_STORE_U64(ctx.r11.u32 + -6712, ctx.r6.u64);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// std r5,-3360(r11)
	PPC_STORE_U64(ctx.r11.u32 + -3360, ctx.r5.u64);
	// addi r3,r11,-3360
	ctx.r3.s64 = ctx.r11.s64 + -3360;
	// std r4,-3352(r11)
	PPC_STORE_U64(ctx.r11.u32 + -3352, ctx.r4.u64);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stfsx f31,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r3,r9,10080
	ctx.r3.s64 = ctx.r9.s64 + 10080;
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x8223FF3C;
	sub_820804F8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r11,23520
	ctx.r3.s64 = ctx.r11.s64 + 23520;
	// bl 0x820804f8
	ctx.lr = 0x8223FF4C;
	sub_820804F8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmplwi cr6,r31,10080
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10080, ctx.xer);
	// blt cr6,0x8223fed8
	if (ctx.cr6.lt) goto loc_8223FED8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8223FF64;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8223FF74"))) PPC_WEAK_FUNC(sub_8223FF74);
PPC_FUNC_IMPL(__imp__sub_8223FF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223FF78"))) PPC_WEAK_FUNC(sub_8223FF78);
PPC_FUNC_IMPL(__imp__sub_8223FF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223ffb0
	if (ctx.cr6.eq) goto loc_8223FFB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8223FFA4;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8223FFB0;
	sub_82183E40(ctx, base);
loc_8223FFB0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ffcc
	if (ctx.cr6.eq) goto loc_8223FFCC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8223FFCC;
	sub_82183E40(ctx, base);
loc_8223FFCC:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8223FFE8"))) PPC_WEAK_FUNC(sub_8223FFE8);
PPC_FUNC_IMPL(__imp__sub_8223FFE8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8223f7e8
	sub_8223F7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8223FFF4"))) PPC_WEAK_FUNC(sub_8223FFF4);
PPC_FUNC_IMPL(__imp__sub_8223FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8223FFF8"))) PPC_WEAK_FUNC(sub_8223FFF8);
PPC_FUNC_IMPL(__imp__sub_8223FFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82240000;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,344
	ctx.r10.s64 = ctx.r11.s64 + 344;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8223f768
	ctx.lr = 0x82240018;
	sub_8223F768(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223ff78
	ctx.lr = 0x82240020;
	sub_8223FF78(ctx, base);
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// li r30,6
	ctx.r30.s64 = 6;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8224002C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224004c
	if (ctx.cr6.eq) goto loc_8224004C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224004C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224004C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8224002c
	if (!ctx.cr0.eq) goto loc_8224002C;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240078
	if (ctx.cr6.eq) goto loc_82240078;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82240078:
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240090
	if (ctx.cr6.eq) goto loc_82240090;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82240090;
	sub_82183E40(ctx, base);
loc_82240090:
	// stw r28,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r28.u32);
	// addi r3,r29,356
	ctx.r3.s64 = ctx.r29.s64 + 356;
	// bl 0x8209eda0
	ctx.lr = 0x8224009C;
	sub_8209EDA0(ctx, base);
	// addi r3,r29,48
	ctx.r3.s64 = ctx.r29.s64 + 48;
	// bl 0x82245ee8
	ctx.lr = 0x822400A4;
	sub_82245EE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822400AC"))) PPC_WEAK_FUNC(sub_822400AC);
PPC_FUNC_IMPL(__imp__sub_822400AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822400B0"))) PPC_WEAK_FUNC(sub_822400B0);
PPC_FUNC_IMPL(__imp__sub_822400B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x822400B8;
	sub_82248768(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82249920
	ctx.lr = 0x822400C0;
	sub_82249920(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822400f4
	if (!ctx.cr6.eq) goto loc_822400F4;
loc_822400E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8224996c
	ctx.lr = 0x822400F0;
	sub_8224996C(ctx, base);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_822400F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f27,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f28.f64 = double(temp.f32);
	// stfs f27,184(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f27,180(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f27,176(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f28,188(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f27,200(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f27,196(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f27,192(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f28,204(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f27,216(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f27,212(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f27,208(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f28,220(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f27,232(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f27,228(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f27,224(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f28,236(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f27,248(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f27,244(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f27,240(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f28,252(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f27,264(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f27,260(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f27,256(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f28,268(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f27,280(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f27,276(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f27,272(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f28,284(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f27,296(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f27,292(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f27,288(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f28,300(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// beq cr6,0x822401f8
	if (ctx.cr6.eq) goto loc_822401F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822401A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822401f8
	if (!ctx.cr6.gt) goto loc_822401F8;
loc_822401B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822401D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822401ec
	if (ctx.cr6.eq) goto loc_822401EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822401E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 + ctx.r26.u64;
loc_822401EC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822401b8
	if (ctx.cr6.lt) goto loc_822401B8;
loc_822401F8:
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82240200:
	// lwzx r30,r11,r20
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82240270
	if (ctx.cr6.eq) goto loc_82240270;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82240270
	if (!ctx.cr6.gt) goto loc_82240270;
loc_82240230:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240264
	if (ctx.cr6.eq) goto loc_82240264;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 + ctx.r26.u64;
loc_82240264:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82240230
	if (ctx.cr6.lt) goto loc_82240230;
loc_82240270:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82240200
	if (ctx.cr6.lt) goto loc_82240200;
	// cmpwi cr6,r26,193
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 193, ctx.xer);
	// bgt cr6,0x822400e0
	if (ctx.cr6.gt) goto loc_822400E0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82234528
	ctx.lr = 0x82240290;
	sub_82234528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82240298;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x822402A4;
	sub_821837D0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822402b8
	if (ctx.cr6.eq) goto loc_822402B8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x822402B8;
	sub_82183E40(ctx, base);
loc_822402B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x822402C4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x822402dc
	if (ctx.cr6.eq) goto loc_822402DC;
	// li r3,15440
	ctx.r3.s64 = 15440;
	// bl 0x82183448
	ctx.lr = 0x822402D8;
	sub_82183448(ctx, base);
	// b 0x822402e4
	goto loc_822402E4;
loc_822402DC:
	// li r3,965
	ctx.r3.s64 = 965;
	// bl 0x821845a0
	ctx.lr = 0x822402E4;
	sub_821845A0(ctx, base);
loc_822402E4:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r4,15440
	ctx.r4.s64 = 15440;
	// bl 0x822aa648
	ctx.lr = 0x822402F0;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x822402F8;
	sub_821837D0(ctx, base);
	// lwz r26,0(r21)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822403ec
	if (ctx.cr6.eq) goto loc_822403EC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822403ec
	if (!ctx.cr6.gt) goto loc_822403EC;
loc_82240328:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822403e0
	if (ctx.cr6.eq) goto loc_822403E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224035C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822403e0
	if (!ctx.cr6.gt) goto loc_822403E0;
loc_8224036C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822403d4
	if (ctx.cr6.eq) goto loc_822403D4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8218a540
	ctx.lr = 0x8224039C;
	sub_8218A540(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x822455f0
	ctx.lr = 0x822403A4;
	sub_822455F0(ctx, base);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,10
	ctx.r11.s64 = 10;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r8,r31,-8
	ctx.r8.s64 = ctx.r31.s64 + -8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_822403C8:
	// ldu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822403c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822403C8;
loc_822403D4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8224036c
	if (ctx.cr6.lt) goto loc_8224036C;
loc_822403E0:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82240328
	if (ctx.cr6.lt) goto loc_82240328;
loc_822403EC:
	// li r23,0
	ctx.r23.s64 = 0;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_822403F4:
	// lwzx r25,r11,r20
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822404e8
	if (ctx.cr6.eq) goto loc_822404E8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822404e8
	if (!ctx.cr6.gt) goto loc_822404E8;
loc_82240424:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224043C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822404dc
	if (ctx.cr6.eq) goto loc_822404DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822404dc
	if (!ctx.cr6.gt) goto loc_822404DC;
loc_82240468:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822404d0
	if (ctx.cr6.eq) goto loc_822404D0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8218a540
	ctx.lr = 0x82240498;
	sub_8218A540(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x822455f0
	ctx.lr = 0x822404A0;
	sub_822455F0(ctx, base);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,10
	ctx.r11.s64 = 10;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r8,r31,-8
	ctx.r8.s64 = ctx.r31.s64 + -8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_822404C4:
	// ldu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x822404c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822404C4;
loc_822404D0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82240468
	if (ctx.cr6.lt) goto loc_82240468;
loc_822404DC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82240424
	if (ctx.cr6.lt) goto loc_82240424;
loc_822404E8:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,6
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 6, ctx.xer);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x822403f4
	if (ctx.cr6.lt) goto loc_822403F4;
	// bl 0x82182e90
	ctx.lr = 0x822404FC;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82240504;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82240510;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82240514;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82240520;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82240528;
	sub_821830F8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8224052C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82240544
	if (ctx.cr6.eq) goto loc_82240544;
	// li r3,12352
	ctx.r3.s64 = 12352;
	// bl 0x82183448
	ctx.lr = 0x82240540;
	sub_82183448(ctx, base);
	// b 0x8224054c
	goto loc_8224054C;
loc_82240544:
	// li r3,772
	ctx.r3.s64 = 772;
	// bl 0x821845a0
	ctx.lr = 0x8224054C;
	sub_821845A0(ctx, base);
loc_8224054C:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82240564
	if (ctx.cr6.lt) goto loc_82240564;
	// bne cr6,0x8224056c
	if (!ctx.cr6.eq) goto loc_8224056C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82240568
	goto loc_82240568;
loc_82240564:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82240568:
	// bl 0x821830f8
	ctx.lr = 0x8224056C;
	sub_821830F8(ctx, base);
loc_8224056C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82240574;
	sub_821837D0(ctx, base);
	// li r5,193
	ctx.r5.s64 = 193;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8223f908
	ctx.lr = 0x82240584;
	sub_8223F908(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,60(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f26,8616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	ctx.f26.f64 = double(temp.f32);
	// ble cr6,0x82240964
	if (!ctx.cr6.gt) goto loc_82240964;
	// addi r25,r22,56
	ctx.r25.s64 = ctx.r22.s64 + 56;
loc_822405A0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82245660
	ctx.lr = 0x822405AC;
	sub_82245660(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240954
	if (ctx.cr6.eq) goto loc_82240954;
	// addi r28,r26,1
	ctx.r28.s64 = ctx.r26.s64 + 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82245660
	ctx.lr = 0x822405C8;
	sub_82245660(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240954
	if (ctx.cr6.eq) goto loc_82240954;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82240954
	if (ctx.cr6.eq) goto loc_82240954;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82240954
	if (!ctx.cr6.eq) goto loc_82240954;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x820804f8
	ctx.lr = 0x8224060C;
	sub_820804F8(ctx, base);
	// lfs f31,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,172(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f8,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f6,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f5,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,156(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,480(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// stfs f0,484(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// stfs f13,488(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stfs f28,492(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// bl 0x82187c20
	ctx.lr = 0x82240678;
	sub_82187C20(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x820804f8
	ctx.lr = 0x82240680;
	sub_820804F8(ctx, base);
	// lfs f4,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// stfs f2,368(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stfs f3,372(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f4,376(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f28,380(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// bl 0x82289c50
	ctx.lr = 0x822406AC;
	sub_82289C50(ctx, base);
	// addi r11,r1,480
	ctx.r11.s64 = ctx.r1.s64 + 480;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f11,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fsubs f31,f31,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f29,f1,f11
	ctx.f29.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fsubs f30,f0,f12
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822453f0
	ctx.lr = 0x822406FC;
	sub_822453F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82240954
	if (ctx.cr6.eq) goto loc_82240954;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,193
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 193, ctx.xer);
	// beq cr6,0x8224075c
	if (ctx.cr6.eq) goto loc_8224075C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_8224075C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,193
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 193, ctx.xer);
	// beq cr6,0x822407b4
	if (ctx.cr6.eq) goto loc_822407B4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_822407B4:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,193
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 193, ctx.xer);
	// beq cr6,0x8224080c
	if (ctx.cr6.eq) goto loc_8224080C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_8224080C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,193
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 193, ctx.xer);
	// beq cr6,0x82240864
	if (ctx.cr6.eq) goto loc_82240864;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_82240864:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82240954
	if (ctx.cr6.eq) goto loc_82240954;
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmadds f13,f29,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f12,f31,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f26
	ctx.cr6.compare(ctx.f12.f64, ctx.f26.f64);
	// ble cr6,0x82240954
	if (!ctx.cr6.gt) goto loc_82240954;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// stfs f27,316(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x822408B8;
	sub_82187400(ctx, base);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r1,184
	ctx.r31.s64 = ctx.r1.s64 + 184;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82240900:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82245490
	ctx.lr = 0x8224090C;
	sub_82245490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82240944
	if (ctx.cr6.eq) goto loc_82240944;
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
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
	// stfs f9,-8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f7,-4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82240944:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82240900
	if (ctx.cr6.lt) goto loc_82240900;
loc_82240954:
	// lwz r11,60(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822405a0
	if (ctx.cr6.lt) goto loc_822405A0;
loc_82240964:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,184
	ctx.r31.s64 = ctx.r1.s64 + 184;
loc_8224096C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245460
	ctx.lr = 0x82240974;
	sub_82245460(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x822409b8
	if (ctx.cr6.eq) goto loc_822409B8;
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,-8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f7,-4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_822409B8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8224096c
	if (ctx.cr6.lt) goto loc_8224096C;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
loc_822409D0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f26
	ctx.cr6.compare(ctx.f9.f64, ctx.f26.f64);
	// blt cr6,0x82240a08
	if (ctx.cr6.lt) goto loc_82240A08;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8223fbb0
	ctx.lr = 0x82240A08;
	sub_8223FBB0(ctx, base);
loc_82240A08:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x822409d0
	if (ctx.cr6.lt) goto loc_822409D0;
	// li r5,193
	ctx.r5.s64 = 193;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8223f908
	ctx.lr = 0x82240A28;
	sub_8223F908(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82240A2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822453d8
	ctx.lr = 0x82240A34;
	sub_822453D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8218a540
	ctx.lr = 0x82240A40;
	sub_8218A540(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x822454e0
	ctx.lr = 0x82240A48;
	sub_822454E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82240a68
	if (ctx.cr6.eq) goto loc_82240A68;
	// li r7,193
	ctx.r7.s64 = 193;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223fa20
	ctx.lr = 0x82240A68;
	sub_8223FA20(ctx, base);
loc_82240A68:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,193
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 193, ctx.xer);
	// blt cr6,0x82240a2c
	if (ctx.cr6.lt) goto loc_82240A2C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82240b6c
	if (ctx.cr6.eq) goto loc_82240B6C;
	// lbz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 320);
	// lbz r9,2560(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2560);
	// subfic r8,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// lbz r7,4080(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4080);
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r9.s64;
	// clrlwi r10,r6,29
	ctx.r10.u64 = ctx.r6.u32 & 0x7;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r4,26
	ctx.r10.u64 = ctx.r4.u32 & 0x3F;
	// rlwinm r10,r10,0,31,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x82240b08
	if (ctx.cr6.eq) goto loc_82240B08;
	// lbz r11,4160(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240b08
	if (ctx.cr6.eq) goto loc_82240B08;
	// lfs f0,3316(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r24,3328
	ctx.r11.s64 = ctx.r24.s64 + 3328;
	// lfs f13,3380(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 3380);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// bge cr6,0x82240ae8
	if (!ctx.cr6.lt) goto loc_82240AE8;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_82240AE8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,360(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 360, temp.u32);
	// lfs f13,52(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// b 0x82240b50
	goto loc_82240B50;
loc_82240B08:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82240b6c
	if (ctx.cr6.eq) goto loc_82240B6C;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82240b6c
	if (ctx.cr6.eq) goto loc_82240B6C;
	// lfs f0,308(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r24,2048
	ctx.r11.s64 = ctx.r24.s64 + 2048;
	// lfs f13,2100(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 2100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// bge cr6,0x82240b34
	if (!ctx.cr6.lt) goto loc_82240B34;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_82240B34:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,360(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 360, temp.u32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
loc_82240B50:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82240b5c
	if (!ctx.cr6.lt) goto loc_82240B5C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82240B5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,364(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 364, temp.u32);
loc_82240B6C:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240b9c
	if (ctx.cr6.eq) goto loc_82240B9C;
	// bl 0x8234a248
	ctx.lr = 0x82240B7C;
	sub_8234A248(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240b9c
	if (ctx.cr6.eq) goto loc_82240B9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,193
	ctx.r5.s64 = 193;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82240B9C:
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82240BA4:
	// lwzx r3,r11,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240bd4
	if (ctx.cr6.eq) goto loc_82240BD4;
	// bl 0x8234a248
	ctx.lr = 0x82240BB4;
	sub_8234A248(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240bd4
	if (ctx.cr6.eq) goto loc_82240BD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,193
	ctx.r5.s64 = 193;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82240BD4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82240ba4
	if (ctx.cr6.lt) goto loc_82240BA4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82240bf8
	if (ctx.cr6.eq) goto loc_82240BF8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82183e40
	ctx.lr = 0x82240BF8;
	sub_82183E40(ctx, base);
loc_82240BF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8224996c
	ctx.lr = 0x82240C08;
	sub_8224996C(ctx, base);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82240C0C"))) PPC_WEAK_FUNC(sub_82240C0C);
PPC_FUNC_IMPL(__imp__sub_82240C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240C10"))) PPC_WEAK_FUNC(sub_82240C10);
PPC_FUNC_IMPL(__imp__sub_82240C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8223fff8
	ctx.lr = 0x82240C30;
	sub_8223FFF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82240c4c
	if (ctx.cr6.eq) goto loc_82240C4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82240C48;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82240C4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82240C64"))) PPC_WEAK_FUNC(sub_82240C64);
PPC_FUNC_IMPL(__imp__sub_82240C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240C68"))) PPC_WEAK_FUNC(sub_82240C68);
PPC_FUNC_IMPL(__imp__sub_82240C68) {
	PPC_FUNC_PROLOGUE();
	// addi r7,r3,44
	ctx.r7.s64 = ctx.r3.s64 + 44;
	// addi r6,r3,16
	ctx.r6.s64 = ctx.r3.s64 + 16;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// b 0x822400b0
	sub_822400B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82240C78"))) PPC_WEAK_FUNC(sub_82240C78);
PPC_FUNC_IMPL(__imp__sub_82240C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r3,408
	ctx.r7.s64 = ctx.r3.s64 + 408;
	// addi r6,r3,384
	ctx.r6.s64 = ctx.r3.s64 + 384;
	// addi r5,r3,380
	ctx.r5.s64 = ctx.r3.s64 + 380;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822400b0
	ctx.lr = 0x82240CA4;
	sub_822400B0(ctx, base);
	// addi r7,r31,44
	ctx.r7.s64 = ctx.r31.s64 + 44;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822400b0
	ctx.lr = 0x82240CBC;
	sub_822400B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82240CD4"))) PPC_WEAK_FUNC(sub_82240CD4);
PPC_FUNC_IMPL(__imp__sub_82240CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240CD8"))) PPC_WEAK_FUNC(sub_82240CD8);
PPC_FUNC_IMPL(__imp__sub_82240CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8223fd30
	ctx.lr = 0x82240CF4;
	sub_8223FD30(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,388
	ctx.r10.s64 = ctx.r11.s64 + 388;
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// bl 0x82183850
	ctx.lr = 0x82240D18;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82240d30
	if (ctx.cr6.eq) goto loc_82240D30;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82183448
	ctx.lr = 0x82240D2C;
	sub_82183448(ctx, base);
	// b 0x82240d38
	goto loc_82240D38;
loc_82240D30:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x82240D38;
	sub_821845A0(ctx, base);
loc_82240D38:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240d50
	if (ctx.cr6.eq) goto loc_82240D50;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223d430
	ctx.lr = 0x82240D4C;
	sub_8223D430(ctx, base);
	// b 0x82240d54
	goto loc_82240D54;
loc_82240D50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82240D54:
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82240D5C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82240d74
	if (ctx.cr6.eq) goto loc_82240D74;
	// li r3,772
	ctx.r3.s64 = 772;
	// bl 0x82183448
	ctx.lr = 0x82240D70;
	sub_82183448(ctx, base);
	// b 0x82240d7c
	goto loc_82240D7C;
loc_82240D74:
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x821845a0
	ctx.lr = 0x82240D7C;
	sub_821845A0(ctx, base);
loc_82240D7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240d8c
	if (ctx.cr6.eq) goto loc_82240D8C;
	// bl 0x822453b8
	ctx.lr = 0x82240D88;
	sub_822453B8(ctx, base);
	// b 0x82240d90
	goto loc_82240D90;
loc_82240D8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82240D90:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82240D98;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82240db4
	if (ctx.cr6.eq) goto loc_82240DB4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,36960
	ctx.r3.u64 = ctx.r3.u64 | 36960;
	// bl 0x82183448
	ctx.lr = 0x82240DB0;
	sub_82183448(ctx, base);
	// b 0x82240dbc
	goto loc_82240DBC;
loc_82240DB4:
	// li r3,2310
	ctx.r3.s64 = 2310;
	// bl 0x821845a0
	ctx.lr = 0x82240DBC;
	sub_821845A0(ctx, base);
loc_82240DBC:
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r11,r31,384
	ctx.r11.s64 = ctx.r31.s64 + 384;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82240DD4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82240dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82240DD4;
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

__attribute__((alias("__imp__sub_82240DF8"))) PPC_WEAK_FUNC(sub_82240DF8);
PPC_FUNC_IMPL(__imp__sub_82240DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82240E00;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,388
	ctx.r10.s64 = ctx.r11.s64 + 388;
	// addi r31,r3,380
	ctx.r31.s64 = ctx.r3.s64 + 380;
	// li r30,6
	ctx.r30.s64 = 6;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82240E20:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240e40
	if (ctx.cr6.eq) goto loc_82240E40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82240E40:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x82240e20
	if (!ctx.cr0.eq) goto loc_82240E20;
	// lwz r3,380(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240e6c
	if (ctx.cr6.eq) goto loc_82240E6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82240E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82240E6C:
	// lwz r3,408(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// stw r28,380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 380, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82240e84
	if (ctx.cr6.eq) goto loc_82240E84;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82240E84;
	sub_82183E40(ctx, base);
loc_82240E84:
	// stw r28,408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 408, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223fff8
	ctx.lr = 0x82240E90;
	sub_8223FFF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82240E98"))) PPC_WEAK_FUNC(sub_82240E98);
PPC_FUNC_IMPL(__imp__sub_82240E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82240EA0;
	sub_8224878C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82234530
	ctx.lr = 0x82240EB8;
	sub_82234530(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,380(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223d398
	ctx.lr = 0x82240ECC;
	sub_8223D398(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8223d398
	ctx.lr = 0x82240EDC;
	sub_8223D398(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,6720
	ctx.r31.s64 = 6720;
	// lfs f30,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_82240F04:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r8,r11,-6720
	ctx.r8.s64 = ctx.r11.s64 + -6720;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,-6720(r11)
	PPC_STORE_U64(ctx.r11.u32 + -6720, ctx.r7.u64);
	// std r6,-6712(r11)
	PPC_STORE_U64(ctx.r11.u32 + -6712, ctx.r6.u64);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// std r5,-3360(r11)
	PPC_STORE_U64(ctx.r11.u32 + -3360, ctx.r5.u64);
	// addi r3,r11,-3360
	ctx.r3.s64 = ctx.r11.s64 + -3360;
	// std r4,-3352(r11)
	PPC_STORE_U64(ctx.r11.u32 + -3352, ctx.r4.u64);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stfsx f31,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r3,r9,10080
	ctx.r3.s64 = ctx.r9.s64 + 10080;
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x82240F68;
	sub_820804F8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r11,23520
	ctx.r3.s64 = ctx.r11.s64 + 23520;
	// bl 0x820804f8
	ctx.lr = 0x82240F78;
	sub_820804F8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmplwi cr6,r31,10080
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10080, ctx.xer);
	// blt cr6,0x82240f04
	if (ctx.cr6.lt) goto loc_82240F04;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82240F98"))) PPC_WEAK_FUNC(sub_82240F98);
PPC_FUNC_IMPL(__imp__sub_82240F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82240FA0;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8224112c
	if (ctx.cr6.eq) goto loc_8224112C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8224112c
	if (ctx.cr6.eq) goto loc_8224112C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82234530
	ctx.lr = 0x82240FC4;
	sub_82234530(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x8234a248
	ctx.lr = 0x82240FD0;
	sub_8234A248(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820f6220
	ctx.lr = 0x82240FDC;
	sub_820F6220(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfe r10,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic r4,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfe r11,r4,r9
	temp.u8 = (~ctx.r4.u32 + ctx.r9.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfe r11,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfe r11,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfe r10,r7,r5
	temp.u8 = (~ctx.r7.u32 + ctx.r5.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r6,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r10,r6,r3
	temp.u8 = (~ctx.r6.u32 + ctx.r3.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add. r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r4.u32);
	// beq 0x8224112c
	if (ctx.cr0.eq) goto loc_8224112C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820f64f8
	ctx.lr = 0x82241048;
	sub_820F64F8(ctx, base);
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8224112c
	if (!ctx.cr6.gt) goto loc_8224112C;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r26,12
	ctx.r27.s64 = ctx.r26.s64 + 12;
loc_82241060:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223f380
	ctx.lr = 0x8224106C;
	sub_8223F380(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x8224112c
	if (ctx.cr6.eq) goto loc_8224112C;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// add. r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8224108c
	if (ctx.cr0.eq) goto loc_8224108C;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82241090
	goto loc_82241090;
loc_8224108C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82241090:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223f1e0
	ctx.lr = 0x82241098;
	sub_8223F1E0(ctx, base);
	// sth r3,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r3.u16);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x822410A4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822410c4
	if (ctx.cr6.eq) goto loc_822410C4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822460b0
	ctx.lr = 0x822410C0;
	sub_822460B0(ctx, base);
	// b 0x822410c8
	goto loc_822410C8;
loc_822410C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822410C8:
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x822410D4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822410f4
	if (ctx.cr6.eq) goto loc_822410F4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822460b0
	ctx.lr = 0x822410F0;
	sub_822460B0(ctx, base);
	// b 0x822410f8
	goto loc_822410F8;
loc_822410F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822410F8:
	// stw r3,372(r27)
	PPC_STORE_U32(ctx.r27.u32 + 372, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223d398
	ctx.lr = 0x82241108;
	sub_8223D398(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// bl 0x8223d398
	ctx.lr = 0x82241118;
	sub_8223D398(ctx, base);
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82241060
	if (ctx.cr6.lt) goto loc_82241060;
loc_8224112C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

