#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82097898"))) PPC_WEAK_FUNC(sub_82097898);
PPC_FUNC_IMPL(__imp__sub_82097898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820978A0;
	sub_8224877C(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,432(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,432(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// bl 0x82187220
	ctx.lr = 0x820978B8;
	sub_82187220(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r28,24(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// ld r27,32(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// ld r26,40(r11)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r29.u64);
	// std r28,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r28.u64);
	// std r27,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r27.u64);
	// std r26,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r26.u64);
	// std r25,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r25.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// lwz r10,432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// bl 0x82096f18
	ctx.lr = 0x82097934;
	sub_82096F18(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x82097940;
	sub_8208EA90(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8209795c
	if (ctx.cr6.gt) goto loc_8209795C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209795C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82097964"))) PPC_WEAK_FUNC(sub_82097964);
PPC_FUNC_IMPL(__imp__sub_82097964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097968"))) PPC_WEAK_FUNC(sub_82097968);
PPC_FUNC_IMPL(__imp__sub_82097968) {
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
	// addi r30,r3,1448
	ctx.r30.s64 = ctx.r3.s64 + 1448;
	// bl 0x82097150
	ctx.lr = 0x82097988;
	sub_82097150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e5d8
	ctx.lr = 0x82097990;
	sub_8208E5D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,1448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r8,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwinm r7,r10,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r7.u32);
	// bl 0x8208dc50
	ctx.lr = 0x820979B4;
	sub_8208DC50(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,1448(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// rlwinm r10,r5,0,20,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// subfe r9,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,15,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFC01FFFF;
	// rlwinm r7,r9,18,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x40000;
	// rlwinm r8,r11,0,5,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFC7FFFFFF;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r8,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r8.u32);
	// stw r6,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r6.u32);
	// bl 0x8208ddc0
	ctx.lr = 0x820979EC;
	sub_8208DDC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,1448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// subfe r10,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r4,r10,11,20,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r4.u64 & 0xFFFFFFFFFFFFF7FF);
	// rlwinm r9,r4,0,22,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r9,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r9.u32);
	// bl 0x8208e5b8
	ctx.lr = 0x82097A10;
	sub_8208E5B8(ctx, base);
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// lwz r8,1448(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// subfe r6,r7,r3
	temp.u8 = (~ctx.r7.u32 + ctx.r3.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r12,r12,64992
	ctx.r12.u64 = ctx.r12.u64 | 64992;
	// rlwimi r8,r6,6,25,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0x40) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFBF);
	// and r5,r8,r12
	ctx.r5.u64 = ctx.r8.u64 & ctx.r12.u64;
	// stw r5,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82097A48"))) PPC_WEAK_FUNC(sub_82097A48);
PPC_FUNC_IMPL(__imp__sub_82097A48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82097968
	sub_82097968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82097A4C"))) PPC_WEAK_FUNC(sub_82097A4C);
PPC_FUNC_IMPL(__imp__sub_82097A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097A50"))) PPC_WEAK_FUNC(sub_82097A50);
PPC_FUNC_IMPL(__imp__sub_82097A50) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x820973f8
	sub_820973F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82097A58"))) PPC_WEAK_FUNC(sub_82097A58);
PPC_FUNC_IMPL(__imp__sub_82097A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82097A60;
	sub_8224876C(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82097f00
	if (ctx.cr6.eq) goto loc_82097F00;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82097f00
	if (ctx.cr6.eq) goto loc_82097F00;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r21,r3,1248
	ctx.r21.s64 = ctx.r3.s64 + 1248;
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// lwz r25,-5056(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5056);
	// li r23,0
	ctx.r23.s64 = 0;
	// bl 0x821882d0
	ctx.lr = 0x82097AB0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82097ac0
	if (ctx.cr6.eq) goto loc_82097AC0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82097ac4
	goto loc_82097AC4;
loc_82097AC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82097AC4:
	// lwz r11,1752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1752);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x820a8e38
	ctx.lr = 0x82097AD0;
	sub_820A8E38(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,-31888
	ctx.r28.s64 = ctx.r11.s64 + -31888;
	// addi r27,r10,-31912
	ctx.r27.s64 = ctx.r10.s64 + -31912;
loc_82097AE8:
	// lwzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82097b14
	if (!ctx.cr6.eq) goto loc_82097B14;
	// lwzx r30,r31,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,344(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x820ed8c0
	ctx.lr = 0x82097B0C;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82097b24
	if (!ctx.cr6.eq) goto loc_82097B24;
loc_82097B14:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 24, ctx.xer);
	// blt cr6,0x82097ae8
	if (ctx.cr6.lt) goto loc_82097AE8;
	// b 0x82097b54
	goto loc_82097B54;
loc_82097B24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208dbd0
	ctx.lr = 0x82097B2C;
	sub_8208DBD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82097b4c
	if (ctx.cr6.eq) goto loc_82097B4C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,1908(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1908);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820a80f8
	ctx.lr = 0x82097B44;
	sub_820A80F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82097f00
	if (ctx.cr6.eq) goto loc_82097F00;
loc_82097B4C:
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82097B54:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,344(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820ed8c0
	ctx.lr = 0x82097B68;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82097b9c
	if (ctx.cr6.eq) goto loc_82097B9C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,1908(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1908);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// bl 0x820a8a00
	ctx.lr = 0x82097B88;
	sub_820A8A00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82097f00
	if (ctx.cr6.eq) goto loc_82097F00;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82097f00
	if (ctx.cr6.eq) goto loc_82097F00;
loc_82097B9C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,344(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820ed8c0
	ctx.lr = 0x82097BB0;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82097be4
	if (ctx.cr6.eq) goto loc_82097BE4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,1908(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1908);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// bl 0x820a8a00
	ctx.lr = 0x82097BD0;
	sub_820A8A00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82097f00
	if (ctx.cr6.eq) goto loc_82097F00;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x82097f00
	if (!ctx.cr6.eq) goto loc_82097F00;
loc_82097BE4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82097f00
	if (ctx.cr6.eq) goto loc_82097F00;
	// lbz r11,570(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 570);
	// lbz r10,570(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 570);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82097f00
	if (!ctx.cr6.eq) goto loc_82097F00;
	// lhz r11,1600(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1600);
	// lwz r10,344(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82097f00
	if (!ctx.cr6.eq) goto loc_82097F00;
	// lfs f0,420(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,420(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82097c2c
	if (!ctx.cr6.lt) goto loc_82097C2C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82097C2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8952);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82097c4c
	if (!ctx.cr6.gt) goto loc_82097C4C;
	// rlwinm r11,r23,0,22,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x3F8;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82097f00
	if (ctx.cr6.eq) goto loc_82097F00;
loc_82097C4C:
	// lwz r4,432(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,432(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// bl 0x82187220
	ctx.lr = 0x82097C5C;
	sub_82187220(ctx, base);
	// lwz r4,432(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// lwz r3,432(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// bl 0x82187220
	ctx.lr = 0x82097C68;
	sub_82187220(ctx, base);
	// lfs f0,404(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,2136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82097c98
	if (!ctx.cr6.gt) goto loc_82097C98;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82097ca4
	goto loc_82097CA4;
loc_82097C98:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82097ca4
	if (!ctx.cr6.lt) goto loc_82097CA4;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_82097CA4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82097cb4
	if (!ctx.cr6.gt) goto loc_82097CB4;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82097cc0
	goto loc_82097CC0;
loc_82097CB4:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82097cc0
	if (!ctx.cr6.lt) goto loc_82097CC0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_82097CC0:
	// fadds f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f0,8272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// clrlwi r11,r10,20
	ctx.r11.u64 = ctx.r10.u32 & 0xFFF;
	// cmpwi cr6,r11,768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 768, ctx.xer);
	// blt cr6,0x82097cf4
	if (ctx.cr6.lt) goto loc_82097CF4;
	// cmpwi cr6,r11,3328
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3328, ctx.xer);
	// ble cr6,0x82097cf8
	if (!ctx.cr6.gt) goto loc_82097CF8;
loc_82097CF4:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82097CF8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8208e248
	ctx.lr = 0x82097D00;
	sub_8208E248(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8208ecd0
	ctx.lr = 0x82097D0C;
	sub_8208ECD0(ctx, base);
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r10,116(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 116);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// subfe r30,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821871a0
	ctx.lr = 0x82097D2C;
	sub_821871A0(ctx, base);
	// clrlwi r7,r23,31
	ctx.r7.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82097d5c
	if (ctx.cr6.eq) goto loc_82097D5C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82097d5c
	if (!ctx.cr6.eq) goto loc_82097D5C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82097d5c
	if (!ctx.cr6.eq) goto loc_82097D5C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82097d5c
	if (!ctx.cr6.eq) goto loc_82097D5C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82097d5c
	if (!ctx.cr6.eq) goto loc_82097D5C;
	// li r28,10
	ctx.r28.s64 = 10;
loc_82097D5C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8208ecd0
	ctx.lr = 0x82097D64;
	sub_8208ECD0(ctx, base);
	// rlwinm r11,r23,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82097dd0
	if (ctx.cr6.eq) goto loc_82097DD0;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82097dd0
	if (!ctx.cr6.eq) goto loc_82097DD0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82097dd0
	if (!ctx.cr6.eq) goto loc_82097DD0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82097dd0
	if (!ctx.cr6.eq) goto loc_82097DD0;
	// lwz r11,616(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82097dd0
	if (!ctx.cr6.eq) goto loc_82097DD0;
	// lwz r11,112(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 112);
	// lwz r10,112(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82097dd0
	if (!ctx.cr6.gt) goto loc_82097DD0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lfs f30,420(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 420);
	ctx.f30.f64 = double(temp.f32);
	// li r28,50
	ctx.r28.s64 = 50;
	// bl 0x82097028
	ctx.lr = 0x82097DBC;
	sub_82097028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9048);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// bl 0x820ef360
	ctx.lr = 0x82097DCC;
	sub_820EF360(ctx, base);
	// b 0x82097e10
	goto loc_82097E10;
loc_82097DD0:
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// beq cr6,0x82097e10
	if (ctx.cr6.eq) goto loc_82097E10;
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 15, ctx.xer);
	// beq cr6,0x82097e10
	if (ctx.cr6.eq) goto loc_82097E10;
	// cmpwi cr6,r28,30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 30, ctx.xer);
	// beq cr6,0x82097e10
	if (ctx.cr6.eq) goto loc_82097E10;
	// cmpwi cr6,r28,40
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 40, ctx.xer);
	// beq cr6,0x82097e10
	if (ctx.cr6.eq) goto loc_82097E10;
	// cmpwi cr6,r28,50
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 50, ctx.xer);
	// beq cr6,0x82097e10
	if (ctx.cr6.eq) goto loc_82097E10;
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// beq cr6,0x82097e10
	if (ctx.cr6.eq) goto loc_82097E10;
	// cmpwi cr6,r28,22
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 22, ctx.xer);
	// beq cr6,0x82097e10
	if (ctx.cr6.eq) goto loc_82097E10;
	// cmpwi cr6,r28,25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 25, ctx.xer);
	// bne cr6,0x82097f00
	if (!ctx.cr6.eq) goto loc_82097F00;
loc_82097E10:
	// lwz r11,372(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82097e2c
	if (!ctx.cr6.eq) goto loc_82097E2C;
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r5,r10,32768
	ctx.r5.u64 = ctx.r10.u64 | 32768;
	// b 0x82097e30
	goto loc_82097E30;
loc_82097E2C:
	// lwz r5,344(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
loc_82097E30:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82097e40
	if (ctx.cr6.eq) goto loc_82097E40;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82097E40:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820973f8
	ctx.lr = 0x82097E50;
	sub_820973F8(ctx, base);
	// lis r4,27725
	ctx.r4.s64 = 1816985600;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// ori r4,r4,28487
	ctx.r4.u64 = ctx.r4.u64 | 28487;
	// bl 0x821882d0
	ctx.lr = 0x82097E60;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82097e70
	if (ctx.cr6.eq) goto loc_82097E70;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82097e74
	goto loc_82097E74;
loc_82097E70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82097E74:
	// stfs f31,2116(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2116, temp.u32);
	// addi r31,r24,1248
	ctx.r31.s64 = ctx.r24.s64 + 1248;
	// stfs f31,2152(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2152, temp.u32);
	// lis r4,27725
	ctx.r4.s64 = 1816985600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,28487
	ctx.r4.u64 = ctx.r4.u64 | 28487;
	// bl 0x821882d0
	ctx.lr = 0x82097E90;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82097ea0
	if (ctx.cr6.eq) goto loc_82097EA0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82097ea4
	goto loc_82097EA4;
loc_82097EA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82097EA4:
	// stfs f31,2116(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2116, temp.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stfs f31,2152(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2152, temp.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82097EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82097ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lwz r3,-4900(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4900);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82097EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_82097F00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_82097F14"))) PPC_WEAK_FUNC(sub_82097F14);
PPC_FUNC_IMPL(__imp__sub_82097F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097F18"))) PPC_WEAK_FUNC(sub_82097F18);
PPC_FUNC_IMPL(__imp__sub_82097F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82097F20;
	sub_82248778(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249910
	ctx.lr = 0x82097F28;
	sub_82249910(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820981a8
	if (ctx.cr6.eq) goto loc_820981A8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82097f5c
	if (!ctx.cr6.eq) goto loc_82097F5C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4964);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820981a8
	if (ctx.cr6.eq) goto loc_820981A8;
loc_82097F5C:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// lwz r9,344(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82097f90
	if (ctx.cr6.eq) goto loc_82097F90;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r28,36
	ctx.r9.s64 = ctx.r28.s64 + 36;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82097F84:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82097f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82097F84;
loc_82097F90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f25,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f25.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f23,9064(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9064);
	ctx.f23.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f24,9060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9060);
	ctx.f24.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f28,8344(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8344);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,9056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9056);
	ctx.f26.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f27,9048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9048);
	ctx.f27.f64 = double(temp.f32);
	// addi r24,r28,36
	ctx.r24.s64 = ctx.r28.s64 + 36;
	// lfs f29,9052(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9052);
	ctx.f29.f64 = double(temp.f32);
	// lis r25,-32182
	ctx.r25.s64 = -2109079552;
	// lfs f30,2144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lis r27,-32187
	ctx.r27.s64 = -2109407232;
	// lfs f31,2148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
loc_82097FEC:
	// lbzx r11,r24,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r29.u32);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8209819c
	if (ctx.cr6.eq) goto loc_8209819C;
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwzx r11,r10,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bgt cr6,0x82098084
	if (ctx.cr6.gt) goto loc_82098084;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82098048
	// bdzf 4*cr6+eq,0x82098054
	// bdzf 4*cr6+eq,0x82098054
	// bdzf 4*cr6+eq,0x82098064
	// bne cr6,0x82098074
	if (!ctx.cr6.eq) goto loc_82098074;
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x8209807c
	goto loc_8209807C;
loc_82098048:
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f26,100(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x8209807c
	goto loc_8209807C;
loc_82098054:
	// stfs f28,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82098080
	goto loc_82098080;
loc_82098064:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f24,104(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82098080
	goto loc_82098080;
loc_82098074:
	// stfs f23,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8209807C:
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82098080:
	// stfs f30,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_82098084:
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r10,180(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8208ea90
	ctx.lr = 0x820980A0;
	sub_8208EA90(ctx, base);
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// blt cr6,0x820980b4
	if (ctx.cr6.lt) goto loc_820980B4;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x820980b8
	goto loc_820980B8;
loc_820980B4:
	// fneg f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_820980B8:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x820980cc
	if (ctx.cr6.lt) goto loc_820980CC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x820980d0
	goto loc_820980D0;
loc_820980CC:
	// fneg f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_820980D0:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x820980f0
	if (!ctx.cr6.gt) goto loc_820980F0;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bgt cr6,0x820980e8
	if (ctx.cr6.gt) goto loc_820980E8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82098100
	goto loc_82098100;
loc_820980E8:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82098100
	goto loc_82098100;
loc_820980F0:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// li r30,1
	ctx.r30.s64 = 1;
	// ble cr6,0x82098100
	if (!ctx.cr6.gt) goto loc_82098100;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82098100:
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bne cr6,0x82098140
	if (!ctx.cr6.eq) goto loc_82098140;
	// lfs f0,-8832(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -8832);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f0,-31812(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -31812);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmsubs f10,f0,f25,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 - ctx.f11.f64));
	// fdivs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// ble cr6,0x8209813c
	if (!ctx.cr6.gt) goto loc_8209813C;
	// li r31,2
	ctx.r31.s64 = 2;
loc_8209813C:
	// stbx r31,r24,r29
	PPC_STORE_U8(ctx.r24.u32 + ctx.r29.u32, ctx.r31.u8);
loc_82098140:
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lfs f0,-31812(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -31812);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8832(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -8832);
	ctx.f13.f64 = double(temp.f32);
	// neg r4,r30
	ctx.r4.s64 = -ctx.r30.s64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fnmsubs f8,f9,f0,f13
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fsubs f22,f12,f8
	ctx.f22.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// bl 0x820a5e08
	ctx.lr = 0x82098170;
	sub_820A5E08(ctx, base);
	// lfs f7,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f0,-8836(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -8836);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fadds f3,f0,f7
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f22,100(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f22
	ctx.f2.f64 = ctx.f22.f64;
	// bl 0x820a5f00
	ctx.lr = 0x8209819C;
	sub_820A5F00(ctx, base);
loc_8209819C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// blt cr6,0x82097fec
	if (ctx.cr6.lt) goto loc_82097FEC;
loc_820981A8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8224995c
	ctx.lr = 0x820981B4;
	sub_8224995C(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820981B8"))) PPC_WEAK_FUNC(sub_820981B8);
PPC_FUNC_IMPL(__imp__sub_820981B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820981D4"))) PPC_WEAK_FUNC(sub_820981D4);
PPC_FUNC_IMPL(__imp__sub_820981D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820981D8"))) PPC_WEAK_FUNC(sub_820981D8);
PPC_FUNC_IMPL(__imp__sub_820981D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820981FC"))) PPC_WEAK_FUNC(sub_820981FC);
PPC_FUNC_IMPL(__imp__sub_820981FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098200"))) PPC_WEAK_FUNC(sub_82098200);
PPC_FUNC_IMPL(__imp__sub_82098200) {
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
	// bl 0x82174fd8
	ctx.lr = 0x82098218;
	sub_82174FD8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098244"))) PPC_WEAK_FUNC(sub_82098244);
PPC_FUNC_IMPL(__imp__sub_82098244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098248"))) PPC_WEAK_FUNC(sub_82098248);
PPC_FUNC_IMPL(__imp__sub_82098248) {
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
	// bl 0x82098538
	ctx.lr = 0x82098268;
	sub_82098538(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,9068
	ctx.r9.s64 = ctx.r10.s64 + 9068;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lwsync 
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-9764(r4)
	PPC_STORE_U32(ctx.r4.u32 + -9764, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_820982C8"))) PPC_WEAK_FUNC(sub_820982C8);
PPC_FUNC_IMPL(__imp__sub_820982C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,9068
	ctx.r10.s64 = ctx.r11.s64 + 9068;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9764(r9)
	PPC_STORE_U32(ctx.r9.u32 + -9764, ctx.r11.u32);
	// b 0x821e6dc0
	sub_821E6DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820982E8"))) PPC_WEAK_FUNC(sub_820982E8);
PPC_FUNC_IMPL(__imp__sub_820982E8) {
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
	// bl 0x82098560
	ctx.lr = 0x82098300;
	sub_82098560(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82098350
	if (ctx.cr6.eq) goto loc_82098350;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82098334
	if (!ctx.cr6.eq) goto loc_82098334;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82098334:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820984e8
	ctx.lr = 0x8209833C;
	sub_820984E8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82098350
	if (!ctx.cr6.eq) goto loc_82098350;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82098350:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098364"))) PPC_WEAK_FUNC(sub_82098364);
PPC_FUNC_IMPL(__imp__sub_82098364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098368"))) PPC_WEAK_FUNC(sub_82098368);
PPC_FUNC_IMPL(__imp__sub_82098368) {
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
	// addi r10,r11,9068
	ctx.r10.s64 = ctx.r11.s64 + 9068;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9764(r9)
	PPC_STORE_U32(ctx.r9.u32 + -9764, ctx.r11.u32);
	// bl 0x821e6dc0
	ctx.lr = 0x820983A4;
	sub_821E6DC0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820983c0
	if (ctx.cr6.eq) goto loc_820983C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820983BC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820983C0:
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

__attribute__((alias("__imp__sub_820983D8"))) PPC_WEAK_FUNC(sub_820983D8);
PPC_FUNC_IMPL(__imp__sub_820983D8) {
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
	// beq cr6,0x82098438
	if (ctx.cr6.eq) goto loc_82098438;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82098408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82098458
	if (!ctx.cr6.eq) goto loc_82098458;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82098430
	if (ctx.cr6.eq) goto loc_82098430;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82098430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82098430:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82098438:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82098458
	if (ctx.cr6.eq) goto loc_82098458;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82098458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82098458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209846C"))) PPC_WEAK_FUNC(sub_8209846C);
PPC_FUNC_IMPL(__imp__sub_8209846C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098470"))) PPC_WEAK_FUNC(sub_82098470);
PPC_FUNC_IMPL(__imp__sub_82098470) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_82098490"))) PPC_WEAK_FUNC(sub_82098490);
PPC_FUNC_IMPL(__imp__sub_82098490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098494"))) PPC_WEAK_FUNC(sub_82098494);
PPC_FUNC_IMPL(__imp__sub_82098494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098498"))) PPC_WEAK_FUNC(sub_82098498);
PPC_FUNC_IMPL(__imp__sub_82098498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820984B8"))) PPC_WEAK_FUNC(sub_820984B8);
PPC_FUNC_IMPL(__imp__sub_820984B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820984BC"))) PPC_WEAK_FUNC(sub_820984BC);
PPC_FUNC_IMPL(__imp__sub_820984BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820984C0"))) PPC_WEAK_FUNC(sub_820984C0);
PPC_FUNC_IMPL(__imp__sub_820984C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_820984E0"))) PPC_WEAK_FUNC(sub_820984E0);
PPC_FUNC_IMPL(__imp__sub_820984E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820984E4"))) PPC_WEAK_FUNC(sub_820984E4);
PPC_FUNC_IMPL(__imp__sub_820984E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820984E8"))) PPC_WEAK_FUNC(sub_820984E8);
PPC_FUNC_IMPL(__imp__sub_820984E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82098508
	if (ctx.cr6.eq) goto loc_82098508;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82098508:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098510"))) PPC_WEAK_FUNC(sub_82098510);
PPC_FUNC_IMPL(__imp__sub_82098510) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209852c
	if (!ctx.cr6.eq) goto loc_8209852C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8209852C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098534"))) PPC_WEAK_FUNC(sub_82098534);
PPC_FUNC_IMPL(__imp__sub_82098534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098538"))) PPC_WEAK_FUNC(sub_82098538);
PPC_FUNC_IMPL(__imp__sub_82098538) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,9084
	ctx.r9.s64 = ctx.r10.s64 + 9084;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209855C"))) PPC_WEAK_FUNC(sub_8209855C);
PPC_FUNC_IMPL(__imp__sub_8209855C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098560"))) PPC_WEAK_FUNC(sub_82098560);
PPC_FUNC_IMPL(__imp__sub_82098560) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209858C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820985a8
	if (ctx.cr6.eq) goto loc_820985A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82183e40
	ctx.lr = 0x820985A8;
	sub_82183E40(ctx, base);
loc_820985A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820985C4"))) PPC_WEAK_FUNC(sub_820985C4);
PPC_FUNC_IMPL(__imp__sub_820985C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820985C8"))) PPC_WEAK_FUNC(sub_820985C8);
PPC_FUNC_IMPL(__imp__sub_820985C8) {
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
	// bl 0x8215bec8
	ctx.lr = 0x820985D8;
	sub_8215BEC8(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-4976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4976, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x820985F4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820985F8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82098610
	if (ctx.cr6.eq) goto loc_82098610;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82183448
	ctx.lr = 0x8209860C;
	sub_82183448(ctx, base);
	// b 0x82098618
	goto loc_82098618;
loc_82098610:
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821845a0
	ctx.lr = 0x82098618;
	sub_821845A0(ctx, base);
loc_82098618:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82098624
	if (ctx.cr6.eq) goto loc_82098624;
	// bl 0x8208f270
	ctx.lr = 0x82098624;
	sub_8208F270(ctx, base);
loc_82098624:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098634"))) PPC_WEAK_FUNC(sub_82098634);
PPC_FUNC_IMPL(__imp__sub_82098634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098638"))) PPC_WEAK_FUNC(sub_82098638);
PPC_FUNC_IMPL(__imp__sub_82098638) {
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
	// bl 0x8215bd18
	ctx.lr = 0x8209864C;
	sub_8215BD18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x82098654;
	sub_8215BD28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215bd18
	ctx.lr = 0x8209865C;
	sub_8215BD18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162470
	ctx.lr = 0x82098664;
	sub_82162470(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,9108
	ctx.r5.s64 = 9108;
	// bl 0x821847a8
	ctx.lr = 0x82098670;
	sub_821847A8(ctx, base);
	// bl 0x820985c8
	ctx.lr = 0x82098674;
	sub_820985C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098688"))) PPC_WEAK_FUNC(sub_82098688);
PPC_FUNC_IMPL(__imp__sub_82098688) {
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
	// bl 0x8215bd18
	ctx.lr = 0x8209869C;
	sub_8215BD18(ctx, base);
	// bl 0x8215bd18
	ctx.lr = 0x820986A0;
	sub_8215BD18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162470
	ctx.lr = 0x820986A8;
	sub_82162470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x820986B4;
	sub_8215BD28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,9108
	ctx.r5.s64 = 9108;
	// bl 0x821847a8
	ctx.lr = 0x820986C0;
	sub_821847A8(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x820986C4;
	sub_8215BEC8(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,480
	ctx.r4.s64 = 480;
	// bl 0x822aa648
	ctx.lr = 0x820986D0;
	sub_822AA648(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x820986D4;
	sub_8215BEC8(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// stb r31,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r31.u8);
	// bl 0x8215bec8
	ctx.lr = 0x820986E0;
	sub_8215BEC8(ctx, base);
	// stb r31,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r31.u8);
	// bl 0x820985c8
	ctx.lr = 0x820986E8;
	sub_820985C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820986FC"))) PPC_WEAK_FUNC(sub_820986FC);
PPC_FUNC_IMPL(__imp__sub_820986FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098700"))) PPC_WEAK_FUNC(sub_82098700);
PPC_FUNC_IMPL(__imp__sub_82098700) {
	PPC_FUNC_PROLOGUE();
	// b 0x820ab428
	sub_820AB428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82098704"))) PPC_WEAK_FUNC(sub_82098704);
PPC_FUNC_IMPL(__imp__sub_82098704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098708"))) PPC_WEAK_FUNC(sub_82098708);
PPC_FUNC_IMPL(__imp__sub_82098708) {
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
	ctx.lr = 0x82098718;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82098730
	if (ctx.cr6.eq) goto loc_82098730;
	// li r3,864
	ctx.r3.s64 = 864;
	// bl 0x82183448
	ctx.lr = 0x8209872C;
	sub_82183448(ctx, base);
	// b 0x82098738
	goto loc_82098738;
loc_82098730:
	// li r3,54
	ctx.r3.s64 = 54;
	// bl 0x821845a0
	ctx.lr = 0x82098738;
	sub_821845A0(ctx, base);
loc_82098738:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209875c
	if (ctx.cr6.eq) goto loc_8209875C;
	// bl 0x820eeb30
	ctx.lr = 0x82098744;
	sub_820EEB30(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-4900(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8209875C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4900, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098778"))) PPC_WEAK_FUNC(sub_82098778);
PPC_FUNC_IMPL(__imp__sub_82098778) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,9100
	ctx.r9.s64 = ctx.r11.s64 + 9100;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820987b0
	if (ctx.cr6.eq) goto loc_820987B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820987AC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820987B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820987C4"))) PPC_WEAK_FUNC(sub_820987C4);
PPC_FUNC_IMPL(__imp__sub_820987C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820987C8"))) PPC_WEAK_FUNC(sub_820987C8);
PPC_FUNC_IMPL(__imp__sub_820987C8) {
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
	ctx.lr = 0x820987D8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820987f0
	if (ctx.cr6.eq) goto loc_820987F0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x820987EC;
	sub_82183448(ctx, base);
	// b 0x820987f8
	goto loc_820987F8;
loc_820987F0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820987F8;
	sub_821845A0(ctx, base);
loc_820987F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209881c
	if (ctx.cr6.eq) goto loc_8209881C;
	// bl 0x82162528
	ctx.lr = 0x82098804;
	sub_82162528(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-440(r11)
	PPC_STORE_U32(ctx.r11.u32 + -440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8209881C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -440, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098838"))) PPC_WEAK_FUNC(sub_82098838);
PPC_FUNC_IMPL(__imp__sub_82098838) {
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
	ctx.lr = 0x82098848;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82098860
	if (ctx.cr6.eq) goto loc_82098860;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x8209885C;
	sub_82183448(ctx, base);
	// b 0x82098868
	goto loc_82098868;
loc_82098860:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82098868;
	sub_821845A0(ctx, base);
loc_82098868:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209888c
	if (ctx.cr6.eq) goto loc_8209888C;
	// bl 0x82162858
	ctx.lr = 0x82098874;
	sub_82162858(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-436(r11)
	PPC_STORE_U32(ctx.r11.u32 + -436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8209888C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -436, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820988A8"))) PPC_WEAK_FUNC(sub_820988A8);
PPC_FUNC_IMPL(__imp__sub_820988A8) {
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
	ctx.lr = 0x820988B8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820988d0
	if (ctx.cr6.eq) goto loc_820988D0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82183448
	ctx.lr = 0x820988CC;
	sub_82183448(ctx, base);
	// b 0x820988d8
	goto loc_820988D8;
loc_820988D0:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x820988D8;
	sub_821845A0(ctx, base);
loc_820988D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820988fc
	if (ctx.cr6.eq) goto loc_820988FC;
	// bl 0x820abb48
	ctx.lr = 0x820988E4;
	sub_820ABB48(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8760(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820988FC:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8760, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098918"))) PPC_WEAK_FUNC(sub_82098918);
PPC_FUNC_IMPL(__imp__sub_82098918) {
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
	// bl 0x820ab4f0
	ctx.lr = 0x82098930;
	sub_820AB4F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,9116
	ctx.r9.s64 = ctx.r11.s64 + 9116;
	// addi r8,r10,14000
	ctx.r8.s64 = ctx.r10.s64 + 14000;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098960"))) PPC_WEAK_FUNC(sub_82098960);
PPC_FUNC_IMPL(__imp__sub_82098960) {
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
	// bl 0x82183850
	ctx.lr = 0x82098978;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82098990
	if (ctx.cr6.eq) goto loc_82098990;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82183448
	ctx.lr = 0x8209898C;
	sub_82183448(ctx, base);
	// b 0x82098998
	goto loc_82098998;
loc_82098990:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x82098998;
	sub_821845A0(ctx, base);
loc_82098998:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820989bc
	if (ctx.cr6.eq) goto loc_820989BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ac038
	ctx.lr = 0x820989A8;
	sub_820AC038(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820989BC:
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

__attribute__((alias("__imp__sub_820989D4"))) PPC_WEAK_FUNC(sub_820989D4);
PPC_FUNC_IMPL(__imp__sub_820989D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820989D8"))) PPC_WEAK_FUNC(sub_820989D8);
PPC_FUNC_IMPL(__imp__sub_820989D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820989E0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x820989EC;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820989F4;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82098A00;
	sub_821837D0(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,-9772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82098a20
	if (ctx.cr6.eq) goto loc_82098A20;
	// bl 0x82096d78
	ctx.lr = 0x82098A18;
	sub_82096D78(ctx, base);
	// lwz r11,-9772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9772);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82098A20:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-9768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82098a34
	if (ctx.cr6.eq) goto loc_82098A34;
	// bl 0x82096de8
	ctx.lr = 0x82098A34;
	sub_82096DE8(ctx, base);
loc_82098A34:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82098aa4
	if (ctx.cr6.eq) goto loc_82098AA4;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82080000
	ctx.lr = 0x82098A44;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82098a58
	if (ctx.cr6.eq) goto loc_82098A58;
	// bl 0x820f27c0
	ctx.lr = 0x82098A50;
	sub_820F27C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82098a5c
	goto loc_82098A5C;
loc_82098A58:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82098A5C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82098A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82080000
	ctx.lr = 0x82098A78;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82098a8c
	if (ctx.cr6.eq) goto loc_82098A8C;
	// bl 0x820f2ca8
	ctx.lr = 0x82098A84;
	sub_820F2CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82098a90
	goto loc_82098A90;
loc_82098A8C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82098A90:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82098AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82098AA4:
	// bl 0x820987c8
	ctx.lr = 0x82098AA8;
	sub_820987C8(ctx, base);
	// bl 0x82098708
	ctx.lr = 0x82098AAC;
	sub_82098708(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,9108
	ctx.r10.s64 = ctx.r11.s64 + 9108;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82098AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,-3296(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3296);
	// bl 0x821b1d20
	ctx.lr = 0x82098AE0;
	sub_821B1D20(ctx, base);
	// bl 0x82098838
	ctx.lr = 0x82098AE4;
	sub_82098838(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r7,9100
	ctx.r6.s64 = ctx.r7.s64 + 9100;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82183078
	ctx.lr = 0x82098AF4;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82098B00;
	sub_821837D0(ctx, base);
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// lwz r11,-4984(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82098b20
	if (ctx.cr6.eq) goto loc_82098B20;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82098b20
	if (ctx.cr6.eq) goto loc_82098B20;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82098b54
	if (!ctx.cr6.eq) goto loc_82098B54;
loc_82098B20:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82080000
	ctx.lr = 0x82098B28;
	sub_82080000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82098b44
	if (ctx.cr6.eq) goto loc_82098B44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,9176
	ctx.r10.s64 = ctx.r11.s64 + 9176;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82098b48
	goto loc_82098B48;
loc_82098B44:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82098B48:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-9764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9764);
	// bl 0x820ef488
	ctx.lr = 0x82098B54;
	sub_820EF488(ctx, base);
loc_82098B54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82098B5C;
	sub_821837D0(ctx, base);
	// bl 0x820988a8
	ctx.lr = 0x82098B60;
	sub_820988A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ab6a0
	ctx.lr = 0x82098B68;
	sub_820AB6A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82098B70;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82098B7C"))) PPC_WEAK_FUNC(sub_82098B7C);
PPC_FUNC_IMPL(__imp__sub_82098B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098B80"))) PPC_WEAK_FUNC(sub_82098B80);
PPC_FUNC_IMPL(__imp__sub_82098B80) {
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
	// bl 0x82098248
	ctx.lr = 0x82098B98;
	sub_82098248(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,9180
	ctx.r10.s64 = ctx.r11.s64 + 9180;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098BBC"))) PPC_WEAK_FUNC(sub_82098BBC);
PPC_FUNC_IMPL(__imp__sub_82098BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098BC0"))) PPC_WEAK_FUNC(sub_82098BC0);
PPC_FUNC_IMPL(__imp__sub_82098BC0) {
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
	// addi r10,r11,9180
	ctx.r10.s64 = ctx.r11.s64 + 9180;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820982c8
	ctx.lr = 0x82098BEC;
	sub_820982C8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82098c08
	if (ctx.cr6.eq) goto loc_82098C08;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82098C04;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82098C08:
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

__attribute__((alias("__imp__sub_82098C20"))) PPC_WEAK_FUNC(sub_82098C20);
PPC_FUNC_IMPL(__imp__sub_82098C20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,74
	ctx.r5.s64 = 74;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// b 0x821847a8
	sub_821847A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82098C34"))) PPC_WEAK_FUNC(sub_82098C34);
PPC_FUNC_IMPL(__imp__sub_82098C34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82098C38"))) PPC_WEAK_FUNC(sub_82098C38);
PPC_FUNC_IMPL(__imp__sub_82098C38) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,488(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// lhz r10,476(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 476);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82098cc0
	if (ctx.cr6.gt) goto loc_82098CC0;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82098cc0
	if (ctx.cr6.lt) goto loc_82098CC0;
loc_82098C84:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82098cc8
	if (ctx.cr6.gt) goto loc_82098CC8;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
loc_82098CB8:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82098c84
	if (!ctx.cr6.gt) goto loc_82098C84;
loc_82098CC0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82098CC8:
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// b 0x82098cb8
	goto loc_82098CB8;
}

__attribute__((alias("__imp__sub_82098CD0"))) PPC_WEAK_FUNC(sub_82098CD0);
PPC_FUNC_IMPL(__imp__sub_82098CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82098CD8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8215bd60
	ctx.lr = 0x82098CE4;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82098d00
	if (ctx.cr6.eq) goto loc_82098D00;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-31864
	ctx.r10.s64 = ctx.r10.s64 + -31864;
	// b 0x82098d40
	goto loc_82098D40;
loc_82098D00:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r10,r11,-31864
	ctx.r10.s64 = ctx.r11.s64 + -31864;
	// addi r6,r7,29344
	ctx.r6.s64 = ctx.r7.s64 + 29344;
	// beq cr6,0x82098d2c
	if (ctx.cr6.eq) goto loc_82098D2C;
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// lbz r11,24332(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 24332);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r5,24332(r8)
	PPC_STORE_U8(ctx.r8.u32 + 24332, ctx.r5.u8);
	// b 0x82098d3c
	goto loc_82098D3C;
loc_82098D2C:
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// lbz r11,24333(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 24333);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r5,24333(r8)
	PPC_STORE_U8(ctx.r8.u32 + 24333, ctx.r5.u8);
loc_82098D3C:
	// lbzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
loc_82098D40:
	// li r9,256
	ctx.r9.s64 = 256;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r8,-8980(r7)
	PPC_STORE_U8(ctx.r7.u32 + -8980, ctx.r8.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r9,-8979(r6)
	PPC_STORE_U8(ctx.r6.u32 + -8979, ctx.r9.u8);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// stb r7,-8978(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8978, ctx.r7.u8);
	// lis r6,38
	ctx.r6.s64 = 2490368;
	// stb r8,-8977(r3)
	PPC_STORE_U8(ctx.r3.u32 + -8977, ctx.r8.u8);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lis r5,-28087
	ctx.r5.s64 = -1840709632;
	// ori r8,r9,17405
	ctx.r8.u64 = ctx.r9.u64 | 17405;
	// ori r9,r6,40643
	ctx.r9.u64 = ctx.r6.u64 | 40643;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r6,r5,9363
	ctx.r6.u64 = ctx.r5.u64 | 9363;
	// addi r3,r7,-9248
	ctx.r3.s64 = ctx.r7.s64 + -9248;
loc_82098D98:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mullw r7,r11,r8
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// mulhw r5,r7,r6
	ctx.r5.s64 = (int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32)) >> 32;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// rlwinm r31,r5,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r31,r5,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r5,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r5.s64;
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// beq cr6,0x82098df0
	if (ctx.cr6.eq) goto loc_82098DF0;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// stbx r5,r4,r3
	PPC_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r5.u8);
	// b 0x82098df4
	goto loc_82098DF4;
loc_82098DF0:
	// stbx r7,r4,r3
	PPC_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r7.u8);
loc_82098DF4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x82098d98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82098D98;
	// li r6,256
	ctx.r6.s64 = 256;
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r4,-9504
	ctx.r4.s64 = ctx.r4.s64 + -9504;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// addi r5,r6,-9760
	ctx.r5.s64 = ctx.r6.s64 + -9760;
loc_82098E18:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mullw r6,r11,r8
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r31,r6
	ctx.r31.s64 = ctx.r6.s16;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rotlwi r3,r6,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r31,r6
	ctx.r31.s64 = ctx.r6.s16;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// srawi r29,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 8;
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	// addze r31,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r29,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r6.s32 >> 8;
	// rlwinm r31,r31,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// addze r29,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r29.s64 = temp.s64;
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r31,r29,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// stbx r3,r7,r4
	PPC_STORE_U8(ctx.r7.u32 + ctx.r4.u32, ctx.r3.u8);
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	// beq cr6,0x82098e90
	if (ctx.cr6.eq) goto loc_82098E90;
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// stbx r3,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r3.u8);
	// b 0x82098e94
	goto loc_82098E94;
loc_82098E90:
	// stbx r6,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r6.u8);
loc_82098E94:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x82098e18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82098E18;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82098EA4"))) PPC_WEAK_FUNC(sub_82098EA4);
PPC_FUNC_IMPL(__imp__sub_82098EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82098EA8"))) PPC_WEAK_FUNC(sub_82098EA8);
PPC_FUNC_IMPL(__imp__sub_82098EA8) {
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
	// lis r4,16725
	ctx.r4.s64 = 1096089600;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17741
	ctx.r4.u64 = ctx.r4.u64 | 17741;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x82098ED4;
	sub_82188378(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,9196
	ctx.r9.s64 = ctx.r10.s64 + 9196;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r4,74
	ctx.r4.s64 = 74;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r11,-8992(r7)
	PPC_STORE_U32(ctx.r7.u32 + -8992, ctx.r11.u32);
	// stw r11,-8988(r6)
	PPC_STORE_U32(ctx.r6.u32 + -8988, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x82098F34;
	sub_822AA648(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// li r4,320
	ctx.r4.s64 = 320;
	// bl 0x822aa648
	ctx.lr = 0x82098F40;
	sub_822AA648(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82098cd0
	ctx.lr = 0x82098F48;
	sub_82098CD0(ctx, base);
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-8984(r5)
	PPC_STORE_U32(ctx.r5.u32 + -8984, ctx.r31.u32);
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82098F70"))) PPC_WEAK_FUNC(sub_82098F70);
PPC_FUNC_IMPL(__imp__sub_82098F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82098F78;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r8,r11,9196
	ctx.r8.s64 = ctx.r11.s64 + 9196;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r3,572
	ctx.r11.s64 = ctx.r3.s64 + 572;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,-8984(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8984, ctx.r28.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
loc_82098FA8:
	// lwzu r3,-20(r30)
	ea = -20 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82098fbc
	if (ctx.cr6.eq) goto loc_82098FBC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82098FBC;
	sub_82183E40(ctx, base);
loc_82098FBC:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// bge 0x82098fa8
	if (!ctx.cr0.lt) goto loc_82098FA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821883b8
	ctx.lr = 0x82098FD0;
	sub_821883B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82098FD8"))) PPC_WEAK_FUNC(sub_82098FD8);
PPC_FUNC_IMPL(__imp__sub_82098FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82098FE0;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r3,452
	ctx.r28.s64 = ctx.r3.s64 + 452;
	// stw r26,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r26.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bl 0x822aa648
	ctx.lr = 0x82099004;
	sub_822AA648(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r9,r23,80
	ctx.r9.s64 = ctx.r23.s64 + 80;
loc_8209900C:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82099034
	if (!ctx.cr6.gt) goto loc_82099034;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82099020:
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// bge cr6,0x82099030
	if (!ctx.cr6.lt) goto loc_82099030;
	// stbx r11,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82099030:
	// bdnz 0x82099020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099020;
loc_82099034:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8209900c
	if (ctx.cr6.lt) goto loc_8209900C;
	// li r11,20
	ctx.r11.s64 = 20;
	// lis r31,-32187
	ctx.r31.s64 = -2109407232;
	// lis r10,38
	ctx.r10.s64 = 2490368;
	// lis r8,26214
	ctx.r8.s64 = 1717960704;
	// ori r30,r10,40643
	ctx.r30.u64 = ctx.r10.u64 | 40643;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,-31864(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31864);
	// ori r29,r11,17405
	ctx.r29.u64 = ctx.r11.u64 | 17405;
	// ori r11,r8,26215
	ctx.r11.u64 = ctx.r8.u64 | 26215;
loc_82099068:
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r10,-31864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31864, ctx.r10.u32);
	// lhz r10,-31864(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -31864);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// mullw r5,r8,r29
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// subf r4,r7,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r7.s64;
	// add r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 + ctx.r30.u64;
	// srawi r3,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 8;
	// stw r9,-31864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31864, ctx.r9.u32);
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// lhz r10,-31864(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -31864);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r5,r10,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// subf r4,r6,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r6.s64;
	// subf r3,r7,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r7.s64;
	// mulhw r10,r4,r11
	ctx.r10.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// srawi r7,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 8;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r5,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r5.s64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulhw r7,r3,r11
	ctx.r7.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subf r5,r6,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r6.s64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r10,r28,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// lbzx r6,r28,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// stbx r6,r28,r5
	PPC_STORE_U8(ctx.r28.u32 + ctx.r5.u32, ctx.r6.u8);
	// stbx r10,r28,r7
	PPC_STORE_U8(ctx.r28.u32 + ctx.r7.u32, ctx.r10.u8);
	// bdnz 0x82099068
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82099068;
	// lis r11,-30584
	ctx.r11.s64 = -2004353024;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// li r24,64
	ctx.r24.s64 = 64;
	// ori r25,r11,34953
	ctx.r25.u64 = ctx.r11.u64 | 34953;
loc_8209912C:
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// lwzx r11,r24,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82099218
	if (ctx.cr6.eq) goto loc_82099218;
	// lbzx r8,r28,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r27.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bgt cr6,0x8209918c
	if (ctx.cr6.gt) goto loc_8209918C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82099170
	// bdzf 4*cr6+eq,0x82099178
	// bdzf 4*cr6+eq,0x82099180
	// bne cr6,0x82099188
	if (!ctx.cr6.eq) goto loc_82099188;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x8209918c
	goto loc_8209918C;
loc_82099170:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8209918c
	goto loc_8209918C;
loc_82099178:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8209918c
	goto loc_8209918C;
loc_82099180:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x8209918c
	goto loc_8209918C;
loc_82099188:
	// li r10,4
	ctx.r10.s64 = 4;
loc_8209918C:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r10,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r10.u16);
	// sth r10,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r10.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// mullw r7,r9,r29
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// sth r10,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r10.u16);
	// stb r26,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r26.u8);
	// stb r26,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r26.u8);
	// stb r26,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r26.u8);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// add r10,r7,r30
	ctx.r10.u64 = ctx.r7.u64 + ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,-31864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31864, ctx.r10.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lhz r10,-31864(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -31864);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// rotlwi r3,r10,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// li r5,14001
	ctx.r5.s64 = 14001;
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// addze r3,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mulhw r9,r10,r25
	ctx.r9.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32)) >> 32;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mulli r3,r9,60
	ctx.r3.s64 = ctx.r9.s64 * 60;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// sth r10,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// lwz r3,48(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// bl 0x82093370
	ctx.lr = 0x82099214;
	sub_82093370(ctx, base);
	// lwz r9,-31864(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31864);
loc_82099218:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r24,144
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 144, ctx.xer);
	// blt cr6,0x8209912c
	if (ctx.cr6.lt) goto loc_8209912C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82099230"))) PPC_WEAK_FUNC(sub_82099230);
PPC_FUNC_IMPL(__imp__sub_82099230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82099238;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8209934c
	if (ctx.cr6.eq) goto loc_8209934C;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x821847a8
	ctx.lr = 0x82099268;
	sub_821847A8(ctx, base);
	// lbz r8,477(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 477);
	// lbz r7,476(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 476);
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r6,476(r31)
	PPC_STORE_U16(ctx.r31.u32 + 476, ctx.r6.u16);
	// lbz r4,478(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 478);
	// lbz r5,479(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 479);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r3,478(r31)
	PPC_STORE_U16(ctx.r31.u32 + 478, ctx.r3.u16);
	// lhz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 476);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r3,r30,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// ble cr6,0x820992b8
	if (!ctx.cr6.gt) goto loc_820992B8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820992B8:
	// bl 0x82080d68
	ctx.lr = 0x820992BC;
	sub_82080D68(ctx, base);
	// stw r3,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r3.u32);
	// rlwinm r5,r30,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x821847a8
	ctx.lr = 0x820992CC;
	sub_821847A8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8209934c
	if (!ctx.cr6.gt) goto loc_8209934C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_820992DC:
	// lwz r10,488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// lwz r10,488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
	// lhz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r4,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
	// lwz r10,488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// lbz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r3,9(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r3,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r3.u8);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// lhz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r8,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r8.u16);
	// bdnz 0x820992dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820992DC;
loc_8209934C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82099354"))) PPC_WEAK_FUNC(sub_82099354);
PPC_FUNC_IMPL(__imp__sub_82099354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82099358"))) PPC_WEAK_FUNC(sub_82099358);
PPC_FUNC_IMPL(__imp__sub_82099358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82099360;
	sub_82248774(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// addi r31,r3,452
	ctx.r31.s64 = ctx.r3.s64 + 452;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x822aa648
	ctx.lr = 0x82099388;
	sub_822AA648(ctx, base);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_8209939C:
	// lbzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820993c4
	if (!ctx.cr6.gt) goto loc_820993C4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820993B0:
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// bge cr6,0x820993c0
	if (!ctx.cr6.lt) goto loc_820993C0;
	// stbx r10,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820993C0:
	// bdnz 0x820993b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820993B0;
loc_820993C4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8209939c
	if (ctx.cr6.lt) goto loc_8209939C;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// addi r29,r10,-9760
	ctx.r29.s64 = ctx.r10.s64 + -9760;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// ori r11,r11,26215
	ctx.r11.u64 = ctx.r11.u64 | 26215;
loc_820993EC:
	// lbz r9,-8977(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8977);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r5,r9,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mulhw r3,r5,r11
	ctx.r3.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32)) >> 32;
	// stb r6,-8977(r30)
	PPC_STORE_U8(ctx.r30.u32 + -8977, ctx.r6.u8);
	// lbzx r4,r10,r29
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// srawi r10,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 3;
	// mulhw r3,r4,r11
	ctx.r3.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r3,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r3.s64;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lbzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// stbx r6,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// stbx r7,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u8);
	// lbz r9,-8977(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8977);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lbzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// lbzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// mulhw r4,r5,r11
	ctx.r4.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32)) >> 32;
	// mulhw r9,r3,r11
	ctx.r9.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// srawi r8,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 3;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
	// subf r9,r6,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stb r4,-8977(r30)
	PPC_STORE_U8(ctx.r30.u32 + -8977, ctx.r4.u8);
	// lbzx r8,r31,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// lbzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// stbx r7,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u8);
	// stbx r8,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// lbz r9,-8977(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8977);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// lbzx r4,r9,r29
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// lbzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// mulhw r8,r5,r11
	ctx.r8.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32)) >> 32;
	// mulhw r3,r4,r11
	ctx.r3.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r3,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r7,r9,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r9.s64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stb r8,-8977(r30)
	PPC_STORE_U8(ctx.r30.u32 + -8977, ctx.r8.u8);
	// lbzx r4,r31,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// lbzx r5,r31,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// stbx r5,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u8);
	// stbx r4,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u8);
	// lbz r9,-8977(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8977);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lbzx r5,r9,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// mulhw r4,r5,r11
	ctx.r4.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32)) >> 32;
	// lbzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// mulhw r8,r3,r11
	ctx.r8.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r9,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 3;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r4,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r4.s64;
	// subf r6,r9,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stb r8,-8977(r30)
	PPC_STORE_U8(ctx.r30.u32 + -8977, ctx.r8.u8);
	// lbzx r5,r31,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r4,r31,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// stbx r4,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u8);
	// stbx r5,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u8);
	// lbz r9,-8977(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8977);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// lbzx r5,r9,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lbzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// mulhw r8,r3,r11
	ctx.r8.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32)) >> 32;
	// mulhw r4,r5,r11
	ctx.r4.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r9,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 3;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// subf r6,r8,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r8.s64;
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	// stb r10,-8977(r30)
	PPC_STORE_U8(ctx.r30.u32 + -8977, ctx.r10.u8);
	// lbzx r3,r31,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// lbzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// stbx r3,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u8);
	// stbx r4,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u8);
	// bdnz 0x820993ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820993EC;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x8209961C;
	sub_822AA648(ctx, base);
	// lis r11,-30584
	ctx.r11.s64 = -2004353024;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// li r26,64
	ctx.r26.s64 = 64;
	// ori r27,r11,34953
	ctx.r27.u64 = ctx.r11.u64 | 34953;
loc_8209962C:
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209970c
	if (ctx.cr6.eq) goto loc_8209970C;
	// lbzx r9,r31,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwx r6,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
	// bgt cr6,0x820996a0
	if (ctx.cr6.gt) goto loc_820996A0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82099684
	// bdzf 4*cr6+eq,0x8209968c
	// bdzf 4*cr6+eq,0x82099694
	// bne cr6,0x8209969c
	if (!ctx.cr6.eq) goto loc_8209969C;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// b 0x820996a0
	goto loc_820996A0;
loc_82099684:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x820996a0
	goto loc_820996A0;
loc_8209968C:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x820996a0
	goto loc_820996A0;
loc_82099694:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x820996a0
	goto loc_820996A0;
loc_8209969C:
	// li r10,4
	ctx.r10.s64 = 4;
loc_820996A0:
	// sth r10,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r10.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r10.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r10,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r10.u16);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r25,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r25.u8);
	// li r5,14001
	ctx.r5.s64 = 14001;
	// stb r25,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r25.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r25,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r25.u8);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// lbz r10,-8977(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8977);
	// addi r23,r10,1
	ctx.r23.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// mulhw r3,r9,r27
	ctx.r3.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32)) >> 32;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stb r23,-8977(r30)
	PPC_STORE_U8(ctx.r30.u32 + -8977, ctx.r23.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// srawi r9,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mulli r3,r9,60
	ctx.r3.s64 = ctx.r9.s64 * 60;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// sth r10,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// lwz r3,48(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// bl 0x82093370
	ctx.lr = 0x8209970C;
	sub_82093370(ctx, base);
loc_8209970C:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r26,144
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 144, ctx.xer);
	// blt cr6,0x8209962c
	if (ctx.cr6.lt) goto loc_8209962C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82099734
	if (!ctx.cr6.lt) goto loc_82099734;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82099734:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82099750
	if (!ctx.cr6.lt) goto loc_82099750;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82099750:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8209976c
	if (!ctx.cr6.lt) goto loc_8209976C;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8209976C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82099788
	if (!ctx.cr6.lt) goto loc_82099788;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82099788:
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// bne 0x82099798
	if (!ctx.cr0.eq) goto loc_82099798;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82099798:
	// stw r11,-8992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8992, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820997A4"))) PPC_WEAK_FUNC(sub_820997A4);
PPC_FUNC_IMPL(__imp__sub_820997A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820997A8"))) PPC_WEAK_FUNC(sub_820997A8);
PPC_FUNC_IMPL(__imp__sub_820997A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820997B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
loc_820997C4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820997f4
	if (ctx.cr6.eq) goto loc_820997F4;
	// lwz r11,1956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820997f4
	if (!ctx.cr6.eq) goto loc_820997F4;
	// lwz r11,1392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1392);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820997f4
	if (!ctx.cr6.eq) goto loc_820997F4;
	// bl 0x8208e2d8
	ctx.lr = 0x820997EC;
	sub_8208E2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82099810
	if (!ctx.cr6.eq) goto loc_82099810;
loc_820997F4:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,36
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 36, ctx.xer);
	// blt cr6,0x820997c4
	if (ctx.cr6.lt) goto loc_820997C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82099810:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8209981C"))) PPC_WEAK_FUNC(sub_8209981C);
PPC_FUNC_IMPL(__imp__sub_8209981C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82099820"))) PPC_WEAK_FUNC(sub_82099820);
PPC_FUNC_IMPL(__imp__sub_82099820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82099828;
	sub_82248750(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// bge 0x8209b53c
	if (!ctx.cr0.lt) goto loc_8209B53C;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r9,r10,-5052
	ctx.r9.s64 = ctx.r10.s64 + -5052;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// lwzx r27,r8,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8209b53c
	if (ctx.cr6.eq) goto loc_8209B53C;
	// lwz r31,344(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82098c38
	ctx.lr = 0x82099874;
	sub_82098C38(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82098c38
	ctx.lr = 0x82099884;
	sub_82098C38(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82098c38
	ctx.lr = 0x82099894;
	sub_82098C38(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82098c38
	ctx.lr = 0x820998A4;
	sub_82098C38(ctx, base);
	// addi r21,r22,488
	ctx.r21.s64 = ctx.r22.s64 + 488;
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r17,1
	ctx.r17.s64 = 1;
loc_820998C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8209991c
	if (ctx.cr6.lt) goto loc_8209991C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,30(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82099900
	if (!ctx.cr6.eq) goto loc_82099900;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820997a8
	ctx.lr = 0x820998F8;
	sub_820997A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x82099910
	goto loc_82099910;
loc_82099900:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82099918
	if (!ctx.cr6.eq) goto loc_82099918;
	// lbz r11,1550(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1550);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_82099910:
	// bne cr6,0x82099918
	if (!ctx.cr6.eq) goto loc_82099918;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82099918:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_8209991C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x820998c4
	if (!ctx.cr0.eq) goto loc_820998C4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209b53c
	if (ctx.cr6.eq) goto loc_8209B53C;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// lwz r29,48(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// li r30,68
	ctx.r30.s64 = 68;
	// addi r31,r6,-4
	ctx.r31.s64 = ctx.r6.s64 + -4;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// add r6,r30,r29
	ctx.r6.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_82099968:
	// lwz r6,-4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820999f4
	if (ctx.cr6.eq) goto loc_820999F4;
	// lwz r28,8(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x820999f4
	if (!ctx.cr6.eq) goto loc_820999F4;
	// lhz r6,44(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 44);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x820999a4
	if (!ctx.cr6.eq) goto loc_820999A4;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x820999f4
	goto loc_820999F4;
loc_820999A4:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x820999c0
	if (!ctx.cr6.eq) goto loc_820999C0;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x820999f4
	goto loc_820999F4;
loc_820999C0:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x820999dc
	if (!ctx.cr6.eq) goto loc_820999DC;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x820999f4
	goto loc_820999F4;
loc_820999DC:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x820999f4
	if (!ctx.cr6.eq) goto loc_820999F4;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_820999F4:
	// lwzx r6,r30,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82099a80
	if (ctx.cr6.eq) goto loc_82099A80;
	// lwz r28,8(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82099a80
	if (!ctx.cr6.eq) goto loc_82099A80;
	// lhz r6,44(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 44);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82099a30
	if (!ctx.cr6.eq) goto loc_82099A30;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82099a80
	goto loc_82099A80;
loc_82099A30:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82099a4c
	if (!ctx.cr6.eq) goto loc_82099A4C;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x82099a80
	goto loc_82099A80;
loc_82099A4C:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82099a68
	if (!ctx.cr6.eq) goto loc_82099A68;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x82099a80
	goto loc_82099A80;
loc_82099A68:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82099a80
	if (!ctx.cr6.eq) goto loc_82099A80;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82099A80:
	// add r6,r30,r29
	ctx.r6.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82099b00
	if (ctx.cr6.eq) goto loc_82099B00;
	// lwz r28,8(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82099b00
	if (!ctx.cr6.eq) goto loc_82099B00;
	// lhz r6,44(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 44);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82099abc
	if (!ctx.cr6.eq) goto loc_82099ABC;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82099b00
	goto loc_82099B00;
loc_82099ABC:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82099ad4
	if (!ctx.cr6.eq) goto loc_82099AD4;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x82099b00
	goto loc_82099B00;
loc_82099AD4:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82099aec
	if (!ctx.cr6.eq) goto loc_82099AEC;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x82099b00
	goto loc_82099B00;
loc_82099AEC:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82099b00
	if (!ctx.cr6.eq) goto loc_82099B00;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82099B00:
	// add r6,r30,r29
	ctx.r6.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82099b90
	if (ctx.cr6.eq) goto loc_82099B90;
	// lwz r28,8(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82099b90
	if (!ctx.cr6.eq) goto loc_82099B90;
	// lhz r6,44(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 44);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82099b40
	if (!ctx.cr6.eq) goto loc_82099B40;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82099b90
	goto loc_82099B90;
loc_82099B40:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82099b5c
	if (!ctx.cr6.eq) goto loc_82099B5C;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x82099b90
	goto loc_82099B90;
loc_82099B5C:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82099b78
	if (!ctx.cr6.eq) goto loc_82099B78;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x82099b90
	goto loc_82099B90;
loc_82099B78:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82099b90
	if (!ctx.cr6.eq) goto loc_82099B90;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82099B90:
	// add r6,r30,r29
	ctx.r6.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82099c10
	if (ctx.cr6.eq) goto loc_82099C10;
	// lwz r28,8(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82099c10
	if (!ctx.cr6.eq) goto loc_82099C10;
	// lhz r6,44(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 44);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82099bcc
	if (!ctx.cr6.eq) goto loc_82099BCC;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// b 0x82099c10
	goto loc_82099C10;
loc_82099BCC:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82099be4
	if (!ctx.cr6.eq) goto loc_82099BE4;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwu r6,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r4.u32 = ea;
	// b 0x82099c10
	goto loc_82099C10;
loc_82099BE4:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82099bfc
	if (!ctx.cr6.eq) goto loc_82099BFC;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// b 0x82099c10
	goto loc_82099C10;
loc_82099BFC:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82099c10
	if (!ctx.cr6.eq) goto loc_82099C10;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r6,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r31.u32 = ea;
loc_82099C10:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r28,r11,-2
	ctx.r28.s64 = ctx.r11.s64 + -2;
	// add r6,r30,r29
	ctx.r6.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// blt cr6,0x82099968
	if (ctx.cr6.lt) goto loc_82099968;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r4,20971
	ctx.r4.s64 = 1374355456;
	// lis r3,-30584
	ctx.r3.s64 = -2004353024;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lfs f0,8616(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// ori r18,r4,34079
	ctx.r18.u64 = ctx.r4.u64 | 34079;
	// lfs f13,9228(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9228);
	ctx.f13.f64 = double(temp.f32);
	// ori r20,r3,34953
	ctx.r20.u64 = ctx.r3.u64 | 34953;
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-9760
	ctx.r11.s64 = ctx.r11.s64 + -9760;
	// beq cr6,0x8209a2c4
	if (ctx.cr6.eq) goto loc_8209A2C4;
	// lwz r23,112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x8209a2c4
	if (ctx.cr6.lt) goto loc_8209A2C4;
	// lbz r4,-8977(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + -8977);
	// addi r31,r1,288
	ctx.r31.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
	// addi r28,r1,288
	ctx.r28.s64 = ctx.r1.s64 + 288;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbzx r25,r4,r11
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r29,r1,288
	ctx.r29.s64 = ctx.r1.s64 + 288;
	// addi r30,r6,1
	ctx.r30.s64 = ctx.r6.s64 + 1;
	// divw r24,r25,r10
	ctx.r24.s32 = ctx.r25.s32 / ctx.r10.s32;
	// addi r27,r1,288
	ctx.r27.s64 = ctx.r1.s64 + 288;
	// lbzx r18,r6,r11
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// mullw r4,r24,r10
	ctx.r4.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r10.s32);
	// lbzx r24,r6,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// divw r30,r18,r10
	ctx.r30.s32 = ctx.r18.s32 / ctx.r10.s32;
	// subf r4,r4,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r4.s64;
	// mullw r30,r30,r10
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// subf r30,r30,r18
	ctx.r30.s64 = ctx.r18.s64 - ctx.r30.s64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// divw r16,r24,r10
	ctx.r16.s32 = ctx.r24.s32 / ctx.r10.s32;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lwzx r17,r4,r3
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// mullw r16,r16,r10
	ctx.r16.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r10.s32);
	// lwzx r15,r30,r31
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stwx r15,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r15.u32);
	// stwx r17,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r17.u32);
	// addi r14,r6,1
	ctx.r14.s64 = ctx.r6.s64 + 1;
	// lbzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// subf r30,r16,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r16.s64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// clrlwi r6,r14,24
	ctx.r6.u64 = ctx.r14.u32 & 0xFF;
	// divw r4,r17,r10
	ctx.r4.s32 = ctx.r17.s32 / ctx.r10.s32;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// lbzx r31,r6,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// subf r4,r4,r17
	ctx.r4.s64 = ctx.r17.s64 - ctx.r4.s64;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// rotlwi r30,r24,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// rotlwi r31,r18,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r18.u32, 1);
	// lbzx r15,r6,r11
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r18,r3,r28
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// rotlwi r24,r17,1
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r17.u32, 1);
	// lwzx r17,r4,r29
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rotlwi r25,r25,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// divw r14,r16,r10
	ctx.r14.s32 = ctx.r16.s32 / ctx.r10.s32;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// stwx r18,r4,r29
	PPC_STORE_U32(ctx.r4.u32 + ctx.r29.u32, ctx.r18.u32);
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// stwx r17,r3,r28
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, ctx.r17.u32);
	// addi r3,r30,-1
	ctx.r3.s64 = ctx.r30.s64 + -1;
	// addi r31,r24,-1
	ctx.r31.s64 = ctx.r24.s64 + -1;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// mullw r30,r14,r10
	ctx.r30.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r10.s32);
	// lbzx r29,r6,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// andc r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// andc r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 & ~ctx.r25.u64;
	// andc r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 & ~ctx.r3.u64;
	// andc r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// subf r30,r30,r16
	ctx.r30.s64 = ctx.r16.s64 - ctx.r30.s64;
	// twlgei r4,-1
	// addi r26,r1,288
	ctx.r26.s64 = ctx.r1.s64 + 288;
	// twllei r10,0
	// twllei r10,0
	// twllei r10,0
	// twllei r10,0
	// twllei r10,0
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// divw r24,r15,r10
	ctx.r24.s32 = ctx.r15.s32 / ctx.r10.s32;
	// twllei r10,0
	// twlgei r25,-1
	// twlgei r3,-1
	// twlgei r31,-1
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mullw r3,r24,r10
	ctx.r3.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r10.s32);
	// lwzx r31,r4,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	// subf r3,r3,r15
	ctx.r3.s64 = ctx.r15.s64 - ctx.r3.s64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r6,1
	ctx.r30.s64 = ctx.r6.s64 + 1;
	// divw r25,r29,r10
	ctx.r25.s32 = ctx.r29.s32 / ctx.r10.s32;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// lbzx r24,r6,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// lwzx r30,r3,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// mullw r25,r25,r10
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r10.s32);
	// lbzx r18,r6,r11
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stwx r30,r4,r27
	PPC_STORE_U32(ctx.r4.u32 + ctx.r27.u32, ctx.r30.u32);
	// stwx r31,r3,r26
	PPC_STORE_U32(ctx.r3.u32 + ctx.r26.u32, ctx.r31.u32);
	// divw r4,r24,r10
	ctx.r4.s32 = ctx.r24.s32 / ctx.r10.s32;
	// subf r3,r25,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r25.s64;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// subf r30,r4,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r4.s64;
	// addi r31,r1,288
	ctx.r31.s64 = ctx.r1.s64 + 288;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// lwzx r27,r30,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// divw r24,r18,r10
	ctx.r24.s32 = ctx.r18.s32 / ctx.r10.s32;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r18,r3,r4
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// mullw r24,r24,r10
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r10.s32);
	// stwx r27,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r27.u32);
	// stwx r18,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r18.u32);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// subf r30,r24,r25
	ctx.r30.s64 = ctx.r25.s64 - ctx.r24.s64;
	// addi r17,r6,1
	ctx.r17.s64 = ctx.r6.s64 + 1;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,288
	ctx.r31.s64 = ctx.r1.s64 + 288;
	// lbzx r15,r6,r11
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// clrlwi r6,r17,24
	ctx.r6.u64 = ctx.r17.u32 & 0xFF;
	// rotlwi r27,r29,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// divw r3,r15,r10
	ctx.r3.s32 = ctx.r15.s32 / ctx.r10.s32;
	// addi r4,r6,1
	ctx.r4.s64 = ctx.r6.s64 + 1;
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// lbzx r24,r6,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// subf r3,r3,r15
	ctx.r3.s64 = ctx.r15.s64 - ctx.r3.s64;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// rotlwi r29,r16,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r16.u32, 1);
	// lwzx r16,r30,r31
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lbzx r17,r6,r11
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rotlwi r26,r26,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r15,r3,r4
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// twllei r10,0
	// twllei r10,0
	// twllei r10,0
	// stwx r15,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r15.u32);
	// addi r31,r29,-1
	ctx.r31.s64 = ctx.r29.s64 + -1;
	// stwx r16,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r16.u32);
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
	// addi r4,r26,-1
	ctx.r4.s64 = ctx.r26.s64 + -1;
	// lbzx r16,r6,r11
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// divw r3,r24,r10
	ctx.r3.s32 = ctx.r24.s32 / ctx.r10.s32;
	// divw r29,r17,r10
	ctx.r29.s32 = ctx.r17.s32 / ctx.r10.s32;
	// andc r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// andc r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 & ~ctx.r30.u64;
	// andc r28,r10,r27
	ctx.r28.u64 = ctx.r10.u64 & ~ctx.r27.u64;
	// andc r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// twllei r10,0
	// twllei r10,0
	// twllei r10,0
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mullw r29,r29,r10
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// twlgei r31,-1
	// twlgei r30,-1
	// twlgei r28,-1
	// twlgei r4,-1
	// subf r4,r3,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r3.s64;
	// subf r3,r29,r17
	ctx.r3.s64 = ctx.r17.s64 - ctx.r29.s64;
	// addi r31,r1,288
	ctx.r31.s64 = ctx.r1.s64 + 288;
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rotlwi r27,r25,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// lwzx r29,r30,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// divw r28,r16,r10
	ctx.r28.s32 = ctx.r16.s32 / ctx.r10.s32;
	// lwzx r26,r3,r4
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// addi r25,r6,1
	ctx.r25.s64 = ctx.r6.s64 + 1;
	// mullw r28,r28,r10
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// stwx r29,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r29.u32);
	// lbzx r15,r6,r11
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stwx r26,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r26.u32);
	// divw r3,r15,r10
	ctx.r3.s32 = ctx.r15.s32 / ctx.r10.s32;
	// subf r4,r28,r16
	ctx.r4.s64 = ctx.r16.s64 - ctx.r28.s64;
	// mullw r6,r3,r10
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// subf r3,r6,r15
	ctx.r3.s64 = ctx.r15.s64 - ctx.r6.s64;
	// clrlwi r6,r25,24
	ctx.r6.u64 = ctx.r25.u32 & 0xFF;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,288
	ctx.r28.s64 = ctx.r1.s64 + 288;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,288
	ctx.r29.s64 = ctx.r1.s64 + 288;
	// addi r31,r6,1
	ctx.r31.s64 = ctx.r6.s64 + 1;
	// lbzx r26,r6,r11
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rotlwi r30,r18,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r18.u32, 1);
	// lwzx r25,r3,r28
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r28.u32);
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// lwzx r31,r4,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// addi r26,r6,1
	ctx.r26.s64 = ctx.r6.s64 + 1;
	// divw r14,r18,r10
	ctx.r14.s32 = ctx.r18.s32 / ctx.r10.s32;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stwx r25,r4,r29
	PPC_STORE_U32(ctx.r4.u32 + ctx.r29.u32, ctx.r25.u32);
	// mullw r4,r14,r10
	ctx.r4.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r10.s32);
	// lbzx r14,r6,r11
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stwx r31,r3,r28
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, ctx.r31.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// divw r3,r14,r10
	ctx.r3.s32 = ctx.r14.s32 / ctx.r10.s32;
	// clrlwi r6,r26,24
	ctx.r6.u64 = ctx.r26.u32 & 0xFF;
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// lbzx r29,r6,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r31,r6,1
	ctx.r31.s64 = ctx.r6.s64 + 1;
	// subf r28,r3,r14
	ctx.r28.s64 = ctx.r14.s64 - ctx.r3.s64;
	// subf r4,r4,r18
	ctx.r4.s64 = ctx.r18.s64 - ctx.r4.s64;
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r31,r1,288
	ctx.r31.s64 = ctx.r1.s64 + 288;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r26,r24,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// lbzx r28,r6,r11
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rotlwi r25,r17,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r17.u32, 1);
	// lwzx r17,r30,r3
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// rotlwi r24,r16,1
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r16.u32, 1);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r16,r4,r31
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// stwx r17,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r17.u32);
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// stwx r16,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r16.u32);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// lwz r16,96(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// andc r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r27.u64;
	// andc r31,r10,r26
	ctx.r31.u64 = ctx.r10.u64 & ~ctx.r26.u64;
	// lbzx r27,r6,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// twllei r10,0
	// twllei r10,0
	// twllei r10,0
	// twllei r10,0
	// andc r3,r10,r16
	ctx.r3.u64 = ctx.r10.u64 & ~ctx.r16.u64;
	// andc r30,r10,r25
	ctx.r30.u64 = ctx.r10.u64 & ~ctx.r25.u64;
	// andc r29,r10,r24
	ctx.r29.u64 = ctx.r10.u64 & ~ctx.r24.u64;
	// divw r26,r17,r10
	ctx.r26.s32 = ctx.r17.s32 / ctx.r10.s32;
	// twllei r10,0
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r28.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// twlgei r4,-1
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// twlgei r30,-1
	// rlwinm r24,r23,5,0,26
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r4,r26,r10
	ctx.r4.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r10.s32);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// addi r30,r6,1
	ctx.r30.s64 = ctx.r6.s64 + 1;
	// rotlwi r27,r18,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r18.u32, 1);
	// lbzx r18,r6,r11
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// twlgei r3,-1
	// subf r3,r4,r17
	ctx.r3.s64 = ctx.r17.s64 - ctx.r4.s64;
	// lbz r16,88(r1)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// twlgei r31,-1
	// divw r4,r16,r10
	ctx.r4.s32 = ctx.r16.s32 / ctx.r10.s32;
	// stb r6,-8977(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8977, ctx.r6.u8);
	// twlgei r29,-1
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// subf r4,r4,r16
	ctx.r4.s64 = ctx.r16.s64 - ctx.r4.s64;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,288
	ctx.r29.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// divw r30,r23,r10
	ctx.r30.s32 = ctx.r23.s32 / ctx.r10.s32;
	// rotlwi r28,r15,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r15.u32, 1);
	// addi r15,r27,-1
	ctx.r15.s64 = ctx.r27.s64 + -1;
	// lwzx r26,r4,r29
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// rotlwi r27,r23,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// lwzx r25,r31,r3
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// twllei r10,0
	// twllei r10,0
	// twllei r10,0
	// stwx r26,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r26.u32);
	// mullw r3,r30,r10
	ctx.r3.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// stwx r25,r4,r29
	PPC_STORE_U32(ctx.r4.u32 + ctx.r29.u32, ctx.r25.u32);
	// lwz r29,0(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r29,r24,r29
	ctx.r29.u64 = ctx.r24.u64 + ctx.r29.u64;
	// divw r31,r18,r10
	ctx.r31.s32 = ctx.r18.s32 / ctx.r10.s32;
	// subf r3,r3,r23
	ctx.r3.s64 = ctx.r23.s64 - ctx.r3.s64;
	// mullw r31,r31,r10
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// lbz r4,5(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// lbz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mullw r4,r30,r10
	ctx.r4.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// subf r30,r31,r18
	ctx.r30.s64 = ctx.r18.s64 - ctx.r31.s64;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// addi r31,r1,288
	ctx.r31.s64 = ctx.r1.s64 + 288;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rotlwi r25,r17,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r17.u32, 1);
	// lwzx r24,r30,r31
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rotlwi r26,r14,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r14.u32, 1);
	// lwzx r17,r3,r4
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// addi r21,r28,-1
	ctx.r21.s64 = ctx.r28.s64 + -1;
	// rotlwi r28,r16,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r16.u32, 1);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// addi r14,r26,-1
	ctx.r14.s64 = ctx.r26.s64 + -1;
	// rotlwi r26,r18,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r18.u32, 1);
	// stwx r24,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r24.u32);
	// addi r4,r28,-1
	ctx.r4.s64 = ctx.r28.s64 + -1;
	// addi r3,r25,-1
	ctx.r3.s64 = ctx.r25.s64 + -1;
	// stwx r17,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r17.u32);
	// addi r28,r27,-1
	ctx.r28.s64 = ctx.r27.s64 + -1;
	// addi r31,r26,-1
	ctx.r31.s64 = ctx.r26.s64 + -1;
	// andc r30,r10,r21
	ctx.r30.u64 = ctx.r10.u64 & ~ctx.r21.u64;
	// andc r27,r10,r15
	ctx.r27.u64 = ctx.r10.u64 & ~ctx.r15.u64;
	// andc r26,r10,r14
	ctx.r26.u64 = ctx.r10.u64 & ~ctx.r14.u64;
	// andc r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 & ~ctx.r3.u64;
	// andc r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// andc r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 & ~ctx.r28.u64;
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// andc r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// twlgei r4,-1
	// twlgei r3,-1
	// twlgei r28,-1
	// twlgei r31,-1
	// twlgei r30,-1
	// twlgei r27,-1
	// twlgei r26,-1
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fctiwz f4,f6
	ctx.f4.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r17,1
	ctx.r17.s64 = 1;
	// fctiwz f3,f5
	ctx.f3.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r28,r3,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r3.s64;
	// ble cr6,0x8209a2cc
	if (!ctx.cr6.gt) goto loc_8209A2CC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// addi r26,r29,10
	ctx.r26.s64 = ctx.r29.s64 + 10;
	// addi r27,r1,288
	ctx.r27.s64 = ctx.r1.s64 + 288;
	// ori r18,r10,34079
	ctx.r18.u64 = ctx.r10.u64 | 34079;
loc_8209A1E8:
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbzx r25,r10,r11
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r6,-8977(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8977, ctx.r6.u8);
	// mulhw r10,r25,r18
	ctx.r10.s64 = (int64_t(ctx.r25.s32) * int64_t(ctx.r18.s32)) >> 32;
	// lbzx r24,r26,r3
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r3.u32);
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// rlwinm r30,r10,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// extsb r30,r24
	ctx.r30.s64 = ctx.r24.s8;
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// subf r10,r10,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x8209a2b4
	if (ctx.cr6.gt) goto loc_8209A2B4;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8209a238
	if (!ctx.cr6.lt) goto loc_8209A238;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// b 0x8209a248
	goto loc_8209A248;
loc_8209A238:
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// li r10,2
	ctx.r10.s64 = 2;
	// blt cr6,0x8209a248
	if (ctx.cr6.lt) goto loc_8209A248;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8209A248:
	// addi r6,r3,16
	ctx.r6.s64 = ctx.r3.s64 + 16;
	// lwz r3,48(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r10,r3
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lhz r6,44(r25)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r25.u32 + 44);
	// stb r19,51(r25)
	PPC_STORE_U8(ctx.r25.u32 + 51, ctx.r19.u8);
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// stb r3,52(r25)
	PPC_STORE_U8(ctx.r25.u32 + 52, ctx.r3.u8);
	// sth r6,48(r25)
	PPC_STORE_U16(ctx.r25.u32 + 48, ctx.r6.u16);
	// lbz r10,-8977(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + -8977);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mulhw r3,r10,r20
	ctx.r3.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32)) >> 32;
	// stb r6,-8977(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8977, ctx.r6.u8);
	// sth r30,46(r25)
	PPC_STORE_U16(ctx.r25.u32 + 46, ctx.r30.u16);
	// stw r17,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r17.u32);
	// add r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 + ctx.r10.u64;
	// srawi r6,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 5;
	// rlwinm r3,r6,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// mulli r6,r3,60
	ctx.r6.s64 = ctx.r3.s64 * 60;
	// subf r3,r6,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r6.s64;
	// sth r3,40(r25)
	PPC_STORE_U16(ctx.r25.u32 + 40, ctx.r3.u16);
	// lbz r6,-8977(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + -8977);
loc_8209A2B4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bdnz 0x8209a1e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209A1E8;
	// b 0x8209a2d4
	goto loc_8209A2D4;
loc_8209A2C4:
	// lbz r6,-8977(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + -8977);
	// b 0x8209a2d4
	goto loc_8209A2D4;
loc_8209A2CC:
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// ori r18,r10,34079
	ctx.r18.u64 = ctx.r10.u64 | 34079;
loc_8209A2D4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8209a8f0
	if (ctx.cr6.eq) goto loc_8209A8F0;
	// lwz r24,116(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x8209a8f0
	if (ctx.cr6.lt) goto loc_8209A8F0;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r28,r6,r11
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// divw r27,r28,r9
	ctx.r27.s32 = ctx.r28.s32 / ctx.r9.s32;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// lbzx r26,r10,r11
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// mullw r6,r27,r9
	ctx.r6.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r9.s32);
	// lbzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// divw r31,r26,r9
	ctx.r31.s32 = ctx.r26.s32 / ctx.r9.s32;
	// subf r6,r6,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r6.s64;
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// subf r31,r31,r26
	ctx.r31.s64 = ctx.r26.s64 - ctx.r31.s64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r23,r27,r9
	ctx.r23.s32 = ctx.r27.s32 / ctx.r9.s32;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwzx r25,r6,r4
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// mullw r23,r23,r9
	ctx.r23.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r9.s32);
	// lwzx r21,r31,r3
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// stwx r21,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r21.u32);
	// stwx r25,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r25.u32);
	// addi r16,r10,1
	ctx.r16.s64 = ctx.r10.s64 + 1;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r31,r27,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// clrlwi r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	// divw r6,r25,r9
	ctx.r6.s32 = ctx.r25.s32 / ctx.r9.s32;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lbzx r21,r10,r11
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// subf r6,r3,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r3.s64;
	// subf r3,r23,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r23.s64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r23,r10,r11
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r3,r26,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// lwzx r23,r4,r29
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// rotlwi r27,r25,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// lwzx r16,r6,r30
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// divw r25,r21,r9
	ctx.r25.s32 = ctx.r21.s32 / ctx.r9.s32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stwx r23,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r23.u32);
	// addi r6,r28,-1
	ctx.r6.s64 = ctx.r28.s64 + -1;
	// stwx r16,r4,r29
	PPC_STORE_U32(ctx.r4.u32 + ctx.r29.u32, ctx.r16.u32);
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// addi r31,r27,-1
	ctx.r31.s64 = ctx.r27.s64 + -1;
	// mullw r30,r25,r9
	ctx.r30.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r9.s32);
	// lbzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// divw r28,r26,r9
	ctx.r28.s32 = ctx.r26.s32 / ctx.r9.s32;
	// andc r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// andc r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r3.u64;
	// andc r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r4.u64;
	// andc r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 & ~ctx.r31.u64;
	// subf r30,r30,r21
	ctx.r30.s64 = ctx.r21.s64 - ctx.r30.s64;
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// twlgei r6,-1
	// twlgei r3,-1
	// twlgei r4,-1
	// twlgei r31,-1
	// twllei r9,0
	// twllei r9,0
	// twllei r9,0
	// twllei r9,0
	// twllei r9,0
	// twllei r9,0
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r28,r26
	ctx.r31.s64 = ctx.r26.s64 - ctx.r28.s64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r4,r6
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r25,r29,r9
	ctx.r25.s32 = ctx.r29.s32 / ctx.r9.s32;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mullw r25,r25,r9
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r9.s32);
	// lwzx r23,r31,r3
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// stwx r23,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r23.u32);
	// stwx r28,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r28.u32);
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// subf r4,r25,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r25.s64;
	// divw r3,r10,r9
	ctx.r3.s32 = ctx.r10.s32 / ctx.r9.s32;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mullw r6,r3,r9
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// subf r3,r6,r23
	ctx.r3.s64 = ctx.r23.s64 - ctx.r6.s64;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lbzx r25,r10,r11
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// twllei r9,0
	// lwzx r31,r3,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// divw r28,r25,r9
	ctx.r28.s32 = ctx.r25.s32 / ctx.r9.s32;
	// lwzx r27,r4,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// addi r16,r10,1
	ctx.r16.s64 = ctx.r10.s64 + 1;
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// stwx r31,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r31.u32);
	// lbzx r15,r10,r11
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stwx r27,r3,r30
	PPC_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r27.u32);
	// divw r6,r15,r9
	ctx.r6.s32 = ctx.r15.s32 / ctx.r9.s32;
	// clrlwi r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lbzx r16,r10,r11
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// subf r6,r3,r15
	ctx.r6.s64 = ctx.r15.s64 - ctx.r3.s64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// subf r31,r28,r25
	ctx.r31.s64 = ctx.r25.s64 - ctx.r28.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r14,r10,r11
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r28,r29,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// lwzx r30,r4,r6
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// rotlwi r29,r26,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// rotlwi r27,r23,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r26,r31,r3
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// divw r23,r16,r9
	ctx.r23.s32 = ctx.r16.s32 / ctx.r9.s32;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// rotlwi r30,r21,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r21.u32, 1);
	// lwz r21,96(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// twllei r9,0
	// stwx r21,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r21.u32);
	// addi r31,r30,-1
	ctx.r31.s64 = ctx.r30.s64 + -1;
	// stwx r26,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r26.u32);
	// addi r6,r29,-1
	ctx.r6.s64 = ctx.r29.s64 + -1;
	// addi r4,r27,-1
	ctx.r4.s64 = ctx.r27.s64 + -1;
	// lbzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r28,-1
	ctx.r3.s64 = ctx.r28.s64 + -1;
	// mullw r30,r23,r9
	ctx.r30.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r9.s32);
	// divw r29,r14,r9
	ctx.r29.s32 = ctx.r14.s32 / ctx.r9.s32;
	// andc r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 & ~ctx.r31.u64;
	// andc r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// andc r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r3.u64;
	// andc r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r4.u64;
	// twllei r9,0
	// twllei r9,0
	// twllei r9,0
	// twllei r9,0
	// subf r30,r30,r16
	ctx.r30.s64 = ctx.r16.s64 - ctx.r30.s64;
	// mullw r29,r29,r9
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// twlgei r31,-1
	// twlgei r6,-1
	// twlgei r3,-1
	// twlgei r4,-1
	// subf r6,r29,r14
	ctx.r6.s64 = ctx.r14.s64 - ctx.r29.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// rotlwi r28,r25,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lwzx r30,r31,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// divw r29,r27,r9
	ctx.r29.s32 = ctx.r27.s32 / ctx.r9.s32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r27,r4,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// mullw r29,r29,r9
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// stwx r30,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r30.u32);
	// stwx r27,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r27.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// subf r6,r29,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r29.s64;
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r23,r10,r11
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// divw r4,r23,r9
	ctx.r4.s32 = ctx.r23.s32 / ctx.r9.s32;
	// rotlwi r31,r15,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r15.u32, 1);
	// mullw r3,r4,r9
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lbzx r21,r10,r11
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// subf r4,r3,r23
	ctx.r4.s64 = ctx.r23.s64 - ctx.r3.s64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwzx r3,r6,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// divw r15,r21,r9
	ctx.r15.s32 = ctx.r21.s32 / ctx.r9.s32;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwzx r26,r4,r29
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// rotlwi r25,r25,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// twllei r9,0
	// twllei r9,0
	// stwx r26,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r26.u32);
	// mullw r6,r15,r9
	ctx.r6.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r9.s32);
	// stwx r3,r4,r29
	PPC_STORE_U32(ctx.r4.u32 + ctx.r29.u32, ctx.r3.u32);
	// lbzx r15,r10,r11
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// divw r4,r15,r9
	ctx.r4.s32 = ctx.r15.s32 / ctx.r9.s32;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lbzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// subf r29,r4,r15
	ctx.r29.s64 = ctx.r15.s64 - ctx.r4.s64;
	// subf r6,r6,r21
	ctx.r6.s64 = ctx.r21.s64 - ctx.r6.s64;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r26,r14,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r14.u32, 1);
	// rotlwi r27,r16,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r16.u32, 1);
	// lbzx r16,r10,r11
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r29,r31,r4
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwzx r14,r6,r3
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// twllei r9,0
	// stwx r29,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// andc r30,r9,r26
	ctx.r30.u64 = ctx.r9.u64 & ~ctx.r26.u64;
	// stwx r14,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r14.u32);
	// andc r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r28.u64;
	// lwz r14,96(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// andc r31,r9,r27
	ctx.r31.u64 = ctx.r9.u64 & ~ctx.r27.u64;
	// lbzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// twllei r9,0
	// andc r3,r9,r14
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r14.u64;
	// andc r29,r9,r25
	ctx.r29.u64 = ctx.r9.u64 & ~ctx.r25.u64;
	// divw r26,r6,r9
	ctx.r26.s32 = ctx.r6.s32 / ctx.r9.s32;
	// twllei r9,0
	// twlgei r4,-1
	// mullw r4,r26,r9
	ctx.r4.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// twlgei r3,-1
	// subf r3,r4,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r4.s64;
	// divw r4,r16,r9
	ctx.r4.s32 = ctx.r16.s32 / ctx.r9.s32;
	// twlgei r31,-1
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r3,r4,r9
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// subf r4,r3,r16
	ctx.r4.s64 = ctx.r16.s64 - ctx.r3.s64;
	// twlgei r30,-1
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r28,r21,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r21.u32, 1);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwzx r25,r4,r30
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// twlgei r29,-1
	// lwzx r27,r31,r3
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// rotlwi r29,r23,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// addi r16,r10,1
	ctx.r16.s64 = ctx.r10.s64 + 1;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stwx r25,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r25.u32);
	// divw r26,r21,r9
	ctx.r26.s32 = ctx.r21.s32 / ctx.r9.s32;
	// clrlwi r6,r16,24
	ctx.r6.u64 = ctx.r16.u32 & 0xFF;
	// stwx r27,r4,r30
	PPC_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r27.u32);
	// rlwinm r30,r24,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0xFFFFFFE0;
	// stb r6,-8977(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8977, ctx.r6.u8);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lwz r25,508(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 508);
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// lbz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// divw r3,r24,r9
	ctx.r3.s32 = ctx.r24.s32 / ctx.r9.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// subf r4,r10,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r10.s64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// mullw r26,r26,r9
	ctx.r26.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r26,r21
	ctx.r4.s64 = ctx.r21.s64 - ctx.r26.s64;
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rotlwi r27,r15,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r15.u32, 1);
	// addi r25,r29,-1
	ctx.r25.s64 = ctx.r29.s64 + -1;
	// lwzx r16,r31,r3
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r14,r28,-1
	ctx.r14.s64 = ctx.r28.s64 + -1;
	// rotlwi r29,r23,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// lwzx r15,r4,r10
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rotlwi r26,r26,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// rotlwi r28,r21,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r21.u32, 1);
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// twllei r9,0
	// stwx r16,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r16.u32);
	// rotlwi r10,r24,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// addi r4,r27,-1
	ctx.r4.s64 = ctx.r27.s64 + -1;
	// stwx r15,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r15.u32);
	// addi r3,r29,-1
	ctx.r3.s64 = ctx.r29.s64 + -1;
	// addi r27,r26,-1
	ctx.r27.s64 = ctx.r26.s64 + -1;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r9,0
	// twllei r9,0
	// andc r28,r9,r25
	ctx.r28.u64 = ctx.r9.u64 & ~ctx.r25.u64;
	// andc r26,r9,r14
	ctx.r26.u64 = ctx.r9.u64 & ~ctx.r14.u64;
	// andc r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r4.u64;
	// andc r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 & ~ctx.r27.u64;
	// andc r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r3.u64;
	// andc r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 & ~ctx.r29.u64;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// twlgei r4,-1
	// twlgei r28,-1
	// twlgei r26,-1
	// twlgei r27,-1
	// twlgei r3,-1
	// twlgei r29,-1
	// twlgei r10,-1
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8209a8f0
	if (!ctx.cr6.gt) goto loc_8209A8F0;
	// addi r28,r30,10
	ctx.r28.s64 = ctx.r30.s64 + 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
loc_8209A82C:
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbzx r27,r9,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r6,-8977(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8977, ctx.r6.u8);
	// mulhw r3,r27,r18
	ctx.r3.s64 = (int64_t(ctx.r27.s32) * int64_t(ctx.r18.s32)) >> 32;
	// lbzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// extsb r26,r9
	ctx.r26.s64 = ctx.r9.s8;
	// srawi r9,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mulli r3,r9,100
	ctx.r3.s64 = ctx.r9.s64 * 100;
	// subf r9,r3,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r3.s64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x8209a8e4
	if (ctx.cr6.gt) goto loc_8209A8E4;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8209a87c
	if (!ctx.cr6.lt) goto loc_8209A87C;
	// li r9,4
	ctx.r9.s64 = 4;
loc_8209A87C:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r6,48(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lhz r9,44(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 44);
	// stb r19,51(r27)
	PPC_STORE_U8(ctx.r27.u32 + 51, ctx.r19.u8);
	// lhz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// stb r6,52(r27)
	PPC_STORE_U8(ctx.r27.u32 + 52, ctx.r6.u8);
	// sth r9,48(r27)
	PPC_STORE_U16(ctx.r27.u32 + 48, ctx.r9.u16);
	// lbz r10,-8977(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + -8977);
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mulhw r6,r9,r20
	ctx.r6.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r20.s32)) >> 32;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stb r26,-8977(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8977, ctx.r26.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// sth r3,46(r27)
	PPC_STORE_U16(ctx.r27.u32 + 46, ctx.r3.u16);
	// srawi r9,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 5;
	// stw r17,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r17.u32);
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mulli r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 * 60;
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r6,40(r27)
	PPC_STORE_U16(ctx.r27.u32 + 40, ctx.r6.u16);
	// lbz r6,-8977(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + -8977);
loc_8209A8E4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bdnz 0x8209a82c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209A82C;
loc_8209A8F0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8209af3c
	if (ctx.cr6.eq) goto loc_8209AF3C;
	// lwz r25,120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x8209af3c
	if (ctx.cr6.lt) goto loc_8209AF3C;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r29,r9,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// divw r28,r29,r8
	ctx.r28.s32 = ctx.r29.s32 / ctx.r8.s32;
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
	// lbzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mullw r3,r28,r8
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// lbzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// divw r9,r27,r8
	ctx.r9.s32 = ctx.r27.s32 / ctx.r8.s32;
	// subf r3,r3,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r3.s64;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r26,r9,r27
	ctx.r26.s64 = ctx.r27.s64 - ctx.r9.s64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r26,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r24,r28,r8
	ctx.r24.s32 = ctx.r28.s32 / ctx.r8.s32;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwzx r26,r9,r6
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// mullw r24,r24,r8
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// lwzx r23,r3,r4
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// stwx r23,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r23.u32);
	// stwx r26,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r26.u32);
	// addi r21,r10,1
	ctx.r21.s64 = ctx.r10.s64 + 1;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// subf r9,r24,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r24.s64;
	// divw r6,r10,r8
	ctx.r6.s32 = ctx.r10.s32 / ctx.r8.s32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r4,r6,r8
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r3,r4,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r4.s64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	// lwzx r24,r9,r31
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rotlwi r4,r27,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// lwzx r23,r6,r30
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// lbzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// rotlwi r3,r28,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// rotlwi r28,r26,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// divw r26,r27,r8
	ctx.r26.s32 = ctx.r27.s32 / ctx.r8.s32;
	// stwx r23,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r23.u32);
	// addi r31,r29,-1
	ctx.r31.s64 = ctx.r29.s64 + -1;
	// mullw r9,r26,r8
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// lbzx r21,r10,r11
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stwx r24,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r24.u32);
	// subf r6,r9,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r9.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// divw r28,r21,r8
	ctx.r28.s32 = ctx.r21.s32 / ctx.r8.s32;
	// andc r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ~ctx.r3.u64;
	// andc r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ~ctx.r31.u64;
	// andc r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// lwzx r26,r6,r9
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// andc r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ~ctx.r29.u64;
	// lbzx r24,r10,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mullw r28,r28,r8
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// twlgei r3,-1
	// twllei r8,0
	// twllei r8,0
	// twllei r8,0
	// twllei r8,0
	// twllei r8,0
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// twllei r8,0
	// twlgei r31,-1
	// twlgei r4,-1
	// twlgei r29,-1
	// subf r3,r28,r21
	ctx.r3.s64 = ctx.r21.s64 - ctx.r28.s64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// divw r31,r24,r8
	ctx.r31.s32 = ctx.r24.s32 / ctx.r8.s32;
	// lwzx r28,r3,r4
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// addi r24,r10,1
	ctx.r24.s64 = ctx.r10.s64 + 1;
	// mullw r31,r31,r8
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stwx r28,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r28.u32);
	// stwx r26,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r26.u32);
	// divw r4,r10,r8
	ctx.r4.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r6,r31,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mullw r3,r4,r8
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// lbzx r26,r10,r11
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// lwzx r24,r4,r31
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// divw r21,r26,r8
	ctx.r21.s32 = ctx.r26.s32 / ctx.r8.s32;
	// lwzx r3,r6,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// addi r23,r10,1
	ctx.r23.s64 = ctx.r10.s64 + 1;
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// stwx r24,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r24.u32);
	// mullw r9,r21,r8
	ctx.r9.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r8.s32);
	// lbzx r24,r10,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stwx r3,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r3.u32);
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// divw r4,r24,r8
	ctx.r4.s32 = ctx.r24.s32 / ctx.r8.s32;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// mullw r6,r4,r8
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// lbzx r21,r10,r11
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// subf r4,r6,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r6.s64;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subf r3,r9,r26
	ctx.r3.s64 = ctx.r26.s64 - ctx.r9.s64;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lbzx r23,r10,r11
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r31,r27,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r27,r6,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// divw r16,r21,r8
	ctx.r16.s32 = ctx.r21.s32 / ctx.r8.s32;
	// lwzx r15,r3,r4
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// andc r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ~ctx.r31.u64;
	// stwx r27,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r27.u32);
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// addi r3,r28,-1
	ctx.r3.s64 = ctx.r28.s64 + -1;
	// stwx r15,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r15.u32);
	// andc r30,r8,r29
	ctx.r30.u64 = ctx.r8.u64 & ~ctx.r29.u64;
	// mullw r9,r16,r8
	ctx.r9.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r8.s32);
	// lbzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// divw r6,r23,r8
	ctx.r6.s32 = ctx.r23.s32 / ctx.r8.s32;
	// andc r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// andc r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ~ctx.r3.u64;
	// twllei r8,0
	// twllei r8,0
	// twllei r8,0
	// twllei r8,0
	// twllei r8,0
	// twllei r8,0
	// subf r9,r9,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r9.s64;
	// mullw r27,r6,r8
	ctx.r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// twlgei r31,-1
	// twlgei r4,-1
	// twlgei r30,-1
	// twlgei r3,-1
	// rotlwi r29,r26,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// subf r3,r27,r23
	ctx.r3.s64 = ctx.r23.s64 - ctx.r27.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// divw r30,r28,r8
	ctx.r30.s32 = ctx.r28.s32 / ctx.r8.s32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r31,r3,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// lwzx r28,r6,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stwx r31,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r31.u32);
	// stwx r28,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r28.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// subf r9,r30,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r30.s64;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r16,r10,r11
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
	// divw r6,r16,r8
	ctx.r6.s32 = ctx.r16.s32 / ctx.r8.s32;
	// rotlwi r26,r26,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// mullw r4,r6,r8
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lbzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// subf r3,r4,r16
	ctx.r3.s64 = ctx.r16.s64 - ctx.r4.s64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rotlwi r3,r24,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// addi r14,r3,-1
	ctx.r14.s64 = ctx.r3.s64 + -1;
	// lwzx r27,r6,r30
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// divw r15,r24,r8
	ctx.r15.s32 = ctx.r24.s32 / ctx.r8.s32;
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// mullw r3,r15,r8
	ctx.r3.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r8.s32);
	// lbzx r15,r10,r11
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stwx r27,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r27.u32);
	// stwx r4,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r4.u32);
	// divw r9,r15,r8
	ctx.r9.s32 = ctx.r15.s32 / ctx.r8.s32;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// mullw r4,r9,r8
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lbzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// subf r9,r4,r15
	ctx.r9.s64 = ctx.r15.s64 - ctx.r4.s64;
	// subf r30,r3,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r3.s64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// rotlwi r27,r23,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// rotlwi r28,r21,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r21.u32, 1);
	// lbzx r21,r10,r11
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r30,r3,r6
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwzx r23,r9,r4
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// stwx r30,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r30.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// stwx r23,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r23.u32);
	// andc r6,r8,r29
	ctx.r6.u64 = ctx.r8.u64 & ~ctx.r29.u64;
	// andc r4,r8,r14
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r14.u64;
	// lbzx r23,r10,r11
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// andc r3,r8,r28
	ctx.r3.u64 = ctx.r8.u64 & ~ctx.r28.u64;
	// andc r31,r8,r27
	ctx.r31.u64 = ctx.r8.u64 & ~ctx.r27.u64;
	// twllei r8,0
	// twllei r8,0
	// twllei r8,0
	// twllei r8,0
	// andc r30,r8,r26
	ctx.r30.u64 = ctx.r8.u64 & ~ctx.r26.u64;
	// divw r27,r9,r8
	ctx.r27.s32 = ctx.r9.s32 / ctx.r8.s32;
	// twllei r8,0
	// twlgei r6,-1
	// twlgei r4,-1
	// twlgei r3,-1
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// divw r3,r21,r8
	ctx.r3.s32 = ctx.r21.s32 / ctx.r8.s32;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mullw r4,r3,r8
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r27,r8
	ctx.r6.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r8.s32);
	// subf r4,r4,r21
	ctx.r4.s64 = ctx.r21.s64 - ctx.r4.s64;
	// subf r6,r6,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rotlwi r29,r24,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// lbzx r24,r10,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// twlgei r31,-1
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// divw r28,r24,r8
	ctx.r28.s32 = ctx.r24.s32 / ctx.r8.s32;
	// stb r6,-8977(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8977, ctx.r6.u8);
	// divw r21,r23,r8
	ctx.r21.s32 = ctx.r23.s32 / ctx.r8.s32;
	// lwzx r27,r4,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// mullw r28,r28,r8
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// stwx r3,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r9,528(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 528);
	// stwx r27,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r27.u32);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r25,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r4,r21,r8
	ctx.r4.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r8.s32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// mullw r9,r10,r8
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lbz r3,5(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// subf r10,r28,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r28.s64;
	// mullw r3,r9,r8
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// subf r9,r4,r23
	ctx.r9.s64 = ctx.r23.s64 - ctx.r4.s64;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// extsw r28,r3
	ctx.r28.s64 = ctx.r3.s32;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// twlgei r30,-1
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwzx r21,r3,r4
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// rotlwi r30,r16,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r16.u32, 1);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// rotlwi r28,r15,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r15.u32, 1);
	// addi r25,r30,-1
	ctx.r25.s64 = ctx.r30.s64 + -1;
	// rotlwi r30,r26,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// lwzx r26,r9,r10
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r16,r29,-1
	ctx.r16.s64 = ctx.r29.s64 + -1;
	// addi r15,r28,-1
	ctx.r15.s64 = ctx.r28.s64 + -1;
	// stwx r21,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r21.u32);
	// rotlwi r29,r23,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// rotlwi r28,r24,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// rotlwi r27,r27,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// stwx r26,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r26.u32);
	// addi r30,r29,-1
	ctx.r30.s64 = ctx.r29.s64 + -1;
	// addi r4,r28,-1
	ctx.r4.s64 = ctx.r28.s64 + -1;
	// addi r10,r27,-1
	ctx.r10.s64 = ctx.r27.s64 + -1;
	// twllei r8,0
	// twllei r8,0
	// twllei r8,0
	// andc r3,r8,r25
	ctx.r3.u64 = ctx.r8.u64 & ~ctx.r25.u64;
	// andc r29,r8,r16
	ctx.r29.u64 = ctx.r8.u64 & ~ctx.r16.u64;
	// andc r28,r8,r15
	ctx.r28.u64 = ctx.r8.u64 & ~ctx.r15.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// andc r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ~ctx.r30.u64;
	// andc r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// twlgei r10,-1
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// twlgei r9,-1
	// twlgei r3,-1
	// twlgei r30,-1
	// twlgei r29,-1
	// twlgei r28,-1
	// twlgei r4,-1
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fctiwz f4,f6
	ctx.f4.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// fctiwz f3,f5
	ctx.f3.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f3.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// ble cr6,0x8209af3c
	if (!ctx.cr6.gt) goto loc_8209AF3C;
	// addi r28,r31,10
	ctx.r28.s64 = ctx.r31.s64 + 10;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
loc_8209AE6C:
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r6,-8977(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8977, ctx.r6.u8);
	// mulhw r4,r27,r18
	ctx.r4.s64 = (int64_t(ctx.r27.s32) * int64_t(ctx.r18.s32)) >> 32;
	// lbzx r10,r28,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r8.u32);
	// extsb r26,r10
	ctx.r26.s64 = ctx.r10.s8;
	// srawi r10,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 5;
	// rlwinm r4,r10,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mulli r4,r10,100
	ctx.r4.s64 = ctx.r10.s64 * 100;
	// subf r10,r4,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r4.s64;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x8209af30
	if (ctx.cr6.gt) goto loc_8209AF30;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8209aebc
	if (!ctx.cr6.lt) goto loc_8209AEBC;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// b 0x8209aecc
	goto loc_8209AECC;
loc_8209AEBC:
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// li r10,3
	ctx.r10.s64 = 3;
	// blt cr6,0x8209aecc
	if (ctx.cr6.lt) goto loc_8209AECC;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8209AECC:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lwz r6,48(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lhz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 44);
	// stb r19,51(r27)
	PPC_STORE_U8(ctx.r27.u32 + 51, ctx.r19.u8);
	// lhz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// stb r8,52(r27)
	PPC_STORE_U8(ctx.r27.u32 + 52, ctx.r8.u8);
	// sth r10,48(r27)
	PPC_STORE_U16(ctx.r27.u32 + 48, ctx.r10.u16);
	// lbz r10,-8977(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + -8977);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r8,-8977(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8977, ctx.r8.u8);
	// mulhw r8,r10,r20
	ctx.r8.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32)) >> 32;
	// sth r4,46(r27)
	PPC_STORE_U16(ctx.r27.u32 + 46, ctx.r4.u16);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r17,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r17.u32);
	// srawi r8,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 5;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mulli r6,r8,60
	ctx.r6.s64 = ctx.r8.s64 * 60;
	// subf r4,r6,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r6.s64;
	// sth r4,40(r27)
	PPC_STORE_U16(ctx.r27.u32 + 40, ctx.r4.u16);
	// lbz r6,-8977(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + -8977);
loc_8209AF30:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bdnz 0x8209ae6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209AE6C;
loc_8209AF3C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8209b53c
	if (ctx.cr6.eq) goto loc_8209B53C;
	// lwz r26,124(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8209b53c
	if (ctx.cr6.lt) goto loc_8209B53C;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r30,r9,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r31,r1,368
	ctx.r31.s64 = ctx.r1.s64 + 368;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// divw r29,r30,r7
	ctx.r29.s32 = ctx.r30.s32 / ctx.r7.s32;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lbzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mullw r4,r29,r7
	ctx.r4.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// lbzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// divw r9,r28,r7
	ctx.r9.s32 = ctx.r28.s32 / ctx.r7.s32;
	// subf r4,r4,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r4.s64;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// subf r27,r9,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r9.s64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r27,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r25,r29,r7
	ctx.r25.s32 = ctx.r29.s32 / ctx.r7.s32;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwzx r27,r9,r8
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mullw r25,r25,r7
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// lwzx r24,r4,r6
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// stwx r24,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r24.u32);
	// stwx r27,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r27.u32);
	// addi r23,r10,1
	ctx.r23.s64 = ctx.r10.s64 + 1;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r4,r29,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// divw r9,r27,r7
	ctx.r9.s32 = ctx.r27.s32 / ctx.r7.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lbzx r24,r10,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// subf r9,r6,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r6.s64;
	// subf r6,r25,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r25.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r25,r10,r11
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r6,r28,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwzx r25,r8,r31
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rotlwi r29,r27,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// lwzx r23,r9,r3
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// divw r27,r24,r7
	ctx.r27.s32 = ctx.r24.s32 / ctx.r7.s32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stwx r25,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r25.u32);
	// addi r3,r30,-1
	ctx.r3.s64 = ctx.r30.s64 + -1;
	// stwx r23,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r23.u32);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// addi r8,r29,-1
	ctx.r8.s64 = ctx.r29.s64 + -1;
	// mullw r4,r27,r7
	ctx.r4.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// lbzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// divw r30,r28,r7
	ctx.r30.s32 = ctx.r28.s32 / ctx.r7.s32;
	// andc r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// andc r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// andc r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// subf r4,r4,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r4.s64;
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// twlgei r3,-1
	// twlgei r6,-1
	// twlgei r9,-1
	// twlgei r8,-1
	// twllei r7,0
	// twllei r7,0
	// twllei r7,0
	// twllei r7,0
	// twllei r7,0
	// twllei r7,0
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r30,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r30.s64;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r27,r29,r7
	ctx.r27.s32 = ctx.r29.s32 / ctx.r7.s32;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mullw r27,r27,r7
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// lwzx r25,r4,r6
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// stwx r25,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r25.u32);
	// stwx r30,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r30.u32);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// subf r8,r27,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r27.s64;
	// divw r6,r10,r7
	ctx.r6.s32 = ctx.r10.s32 / ctx.r7.s32;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mullw r4,r6,r7
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r6,r4,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r4.s64;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lbzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// twllei r7,0
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwzx r4,r6,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// divw r31,r27,r7
	ctx.r31.s32 = ctx.r27.s32 / ctx.r7.s32;
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r23,r10,1
	ctx.r23.s64 = ctx.r10.s64 + 1;
	// mullw r31,r31,r7
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// stwx r4,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u32);
	// lbzx r21,r10,r11
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stwx r30,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r30.u32);
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// divw r9,r21,r7
	ctx.r9.s32 = ctx.r21.s32 / ctx.r7.s32;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lbzx r23,r10,r11
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// subf r9,r6,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r6.s64;
	// subf r8,r31,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r31.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lbzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// rotlwi r3,r24,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// rotlwi r31,r28,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// lwzx r16,r6,r4
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// rotlwi r30,r29,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// lwzx r28,r9,r8
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rotlwi r29,r25,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r25,r23,r7
	ctx.r25.s32 = ctx.r23.s32 / ctx.r7.s32;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stwx r16,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r16.u32);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// stwx r28,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r28.u32);
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
	// addi r6,r30,-1
	ctx.r6.s64 = ctx.r30.s64 + -1;
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// mullw r3,r25,r7
	ctx.r3.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// lbzx r25,r10,r11
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// divw r31,r24,r7
	ctx.r31.s32 = ctx.r24.s32 / ctx.r7.s32;
	// andc r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// andc r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// andc r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// twllei r7,0
	// twllei r7,0
	// twllei r7,0
	// twllei r7,0
	// twllei r7,0
	// subf r3,r3,r23
	ctx.r3.s64 = ctx.r23.s64 - ctx.r3.s64;
	// mullw r31,r31,r7
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// twlgei r9,-1
	// twlgei r8,-1
	// twlgei r6,-1
	// twlgei r4,-1
	// rotlwi r27,r27,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// subf r9,r31,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r31.s64;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,368
	ctx.r31.s64 = ctx.r1.s64 + 368;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rotlwi r28,r21,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r21.u32, 1);
	// lwzx r4,r9,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// divw r8,r25,r7
	ctx.r8.s32 = ctx.r25.s32 / ctx.r7.s32;
	// lwzx r30,r3,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// stwx r4,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbzx r16,r10,r11
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stwx r30,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r30.u32);
	// divw r4,r16,r7
	ctx.r4.s32 = ctx.r16.s32 / ctx.r7.s32;
	// subf r6,r8,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r8.s64;
	// mullw r3,r4,r7
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// subf r9,r3,r16
	ctx.r9.s64 = ctx.r16.s64 - ctx.r3.s64;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// lbzx r15,r10,r11
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwzx r29,r9,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// divw r14,r15,r7
	ctx.r14.s32 = ctx.r15.s32 / ctx.r7.s32;
	// lwzx r31,r6,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stwx r29,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r29.u32);
	// mullw r6,r14,r7
	ctx.r6.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r7.s32);
	// lbzx r21,r10,r11
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stwx r31,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u32);
	// divw r9,r21,r7
	ctx.r9.s32 = ctx.r21.s32 / ctx.r7.s32;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// mullw r4,r9,r7
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lbzx r14,r10,r11
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// subf r9,r4,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r4.s64;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r6,r15
	ctx.r6.s64 = ctx.r15.s64 - ctx.r6.s64;
	// rotlwi r30,r24,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r24,r10,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rotlwi r31,r25,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// rotlwi r29,r23,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwzx r25,r6,r3
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stwx r10,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r10.u32);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// andc r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r30.u64;
	// andc r3,r7,r31
	ctx.r3.u64 = ctx.r7.u64 & ~ctx.r31.u64;
	// stwx r25,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r25.u32);
	// andc r9,r7,r27
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r27.u64;
	// andc r8,r7,r28
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r28.u64;
	// andc r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r29.u64;
	// lbzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// twllei r7,0
	// twllei r7,0
	// twllei r7,0
	// twllei r7,0
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// divw r31,r14,r7
	ctx.r31.s32 = ctx.r14.s32 / ctx.r7.s32;
	// twllei r7,0
	// twlgei r9,-1
	// twlgei r8,-1
	// twlgei r6,-1
	// twlgei r4,-1
	// twlgei r3,-1
	// divw r6,r24,r7
	ctx.r6.s32 = ctx.r24.s32 / ctx.r7.s32;
	// mullw r9,r31,r7
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// mullw r3,r6,r7
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r6,r3,r24
	ctx.r6.s64 = ctx.r24.s64 - ctx.r3.s64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// subf r8,r9,r14
	ctx.r8.s64 = ctx.r14.s64 - ctx.r9.s64;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// stb r3,-8977(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8977, ctx.r3.u8);
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// rlwinm r31,r26,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// rotlwi r27,r16,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r16.u32, 1);
	// lbzx r16,r10,r11
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r30,r6,r4
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// lwzx r29,r9,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// divw r24,r26,r7
	ctx.r24.s32 = ctx.r26.s32 / ctx.r7.s32;
	// rotlwi r28,r15,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r15.u32, 1);
	// mullw r24,r24,r7
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// stwx r30,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r30.u32);
	// stwx r29,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r29.u32);
	// rotlwi r30,r14,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r14.u32, 1);
	// rotlwi r29,r21,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r21.u32, 1);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// lwz r4,548(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 548);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// twllei r7,0
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// rotlwi r31,r26,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// twllei r7,0
	// twllei r7,0
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// divw r8,r16,r7
	ctx.r8.s32 = ctx.r16.s32 / ctx.r7.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// subf r10,r6,r16
	ctx.r10.s64 = ctx.r16.s64 - ctx.r6.s64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r24,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r24.s64;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r30,-1
	ctx.r26.s64 = ctx.r30.s64 + -1;
	// lwzx r24,r10,r9
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rotlwi r30,r25,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// addi r25,r31,-1
	ctx.r25.s64 = ctx.r31.s64 + -1;
	// lwzx r23,r8,r6
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stwx r24,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r24.u32);
	// rotlwi r8,r16,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r16.u32, 1);
	// addi r6,r27,-1
	ctx.r6.s64 = ctx.r27.s64 + -1;
	// stwx r23,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r23.u32);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// andc r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// andc r6,r7,r28
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r28.u64;
	// andc r30,r7,r29
	ctx.r30.u64 = ctx.r7.u64 & ~ctx.r29.u64;
	// andc r29,r7,r26
	ctx.r29.u64 = ctx.r7.u64 & ~ctx.r26.u64;
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// andc r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// andc r28,r7,r25
	ctx.r28.u64 = ctx.r7.u64 & ~ctx.r25.u64;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// andc r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	// twlgei r6,-1
	// twlgei r30,-1
	// twlgei r29,-1
	// twlgei r10,-1
	// twlgei r28,-1
	// twlgei r9,-1
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8209b53c
	if (!ctx.cr6.gt) goto loc_8209B53C;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r30,r4,10
	ctx.r30.s64 = ctx.r4.s64 + 10;
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
loc_8209B478:
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r29,r9,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r3,-8977(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8977, ctx.r3.u8);
	// mulhw r8,r29,r18
	ctx.r8.s64 = (int64_t(ctx.r29.s32) * int64_t(ctx.r18.s32)) >> 32;
	// srawi r9,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 5;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r28,r30,r10
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// mulli r9,r9,100
	ctx.r9.s64 = ctx.r9.s64 * 100;
	// extsb r8,r28
	ctx.r8.s64 = ctx.r28.s8;
	// subf r9,r9,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r9.s64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8209b530
	if (ctx.cr6.gt) goto loc_8209B530;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8209b4c8
	if (!ctx.cr6.lt) goto loc_8209B4C8;
	// li r9,4
	ctx.r9.s64 = 4;
loc_8209B4C8:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r8,48(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lhz r9,44(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 44);
	// stb r19,51(r29)
	PPC_STORE_U8(ctx.r29.u32 + 51, ctx.r19.u8);
	// lhz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// stb r8,52(r29)
	PPC_STORE_U8(ctx.r29.u32 + 52, ctx.r8.u8);
	// sth r9,48(r29)
	PPC_STORE_U16(ctx.r29.u32 + 48, ctx.r9.u16);
	// lbz r10,-8977(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + -8977);
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r28,-8977(r5)
	PPC_STORE_U8(ctx.r5.u32 + -8977, ctx.r28.u8);
	// mulhw r8,r9,r20
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r20.s32)) >> 32;
	// sth r3,46(r29)
	PPC_STORE_U16(ctx.r29.u32 + 46, ctx.r3.u16);
	// stw r17,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r17.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// srawi r9,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 5;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 * 60;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r8,40(r29)
	PPC_STORE_U16(ctx.r29.u32 + 40, ctx.r8.u16);
	// lbz r3,-8977(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + -8977);
loc_8209B530:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8209b478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209B478;
loc_8209B53C:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209B544"))) PPC_WEAK_FUNC(sub_8209B544);
PPC_FUNC_IMPL(__imp__sub_8209B544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209B548"))) PPC_WEAK_FUNC(sub_8209B548);
PPC_FUNC_IMPL(__imp__sub_8209B548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8209B550;
	sub_82248768(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,-19792(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19792);
	// bl 0x822aa648
	ctx.lr = 0x8209B56C;
	sub_822AA648(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r26,r31,-24
	ctx.r26.s64 = ctx.r31.s64 + -24;
	// li r28,64
	ctx.r28.s64 = 64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// li r20,-1
	ctx.r20.s64 = -1;
	// li r23,2
	ctx.r23.s64 = 2;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r21,11
	ctx.r21.s64 = 11;
	// li r22,10
	ctx.r22.s64 = 10;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r29,r11,-9248
	ctx.r29.s64 = ctx.r11.s64 + -9248;
loc_8209B59C:
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209b7ec
	if (ctx.cr6.eq) goto loc_8209B7EC;
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwzx r10,r26,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r28.u32);
	// lwz r9,388(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r8,r6,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r5,r8,95
	ctx.r5.s64 = ctx.r8.s64 + 95;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8209b604
	if (!ctx.cr6.gt) goto loc_8209B604;
	// addi r9,r9,95
	ctx.r9.s64 = ctx.r9.s64 + 95;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// lbz r10,51(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stb r6,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r6.u8);
loc_8209B604:
	// lhz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// lhz r7,46(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 46);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8209b64c
	if (ctx.cr6.eq) goto loc_8209B64C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209b62c
	if (ctx.cr6.eq) goto loc_8209B62C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8209b67c
	if (!ctx.cr6.eq) goto loc_8209B67C;
loc_8209B62C:
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sth r6,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r6.u16);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x8209b67c
	if (!ctx.cr6.lt) goto loc_8209B67C;
	// stb r20,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r20.u8);
	// b 0x8209b67c
	goto loc_8209B67C;
loc_8209B64C:
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// blt cr6,0x8209b67c
	if (ctx.cr6.lt) goto loc_8209B67C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8209b668
	if (!ctx.cr6.eq) goto loc_8209B668;
	// sth r30,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r30.u16);
	// b 0x8209b67c
	goto loc_8209B67C;
loc_8209B668:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8209b678
	if (ctx.cr6.eq) goto loc_8209B678;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8209b67c
	if (!ctx.cr6.eq) goto loc_8209B67C;
loc_8209B678:
	// sth r23,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r23.u16);
loc_8209B67C:
	// lbz r10,51(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x8209b7ec
	if (ctx.cr6.lt) goto loc_8209B7EC;
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// stb r30,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r30.u8);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8209b7ac
	if (ctx.cr6.eq) goto loc_8209B7AC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209b6b4
	if (ctx.cr6.eq) goto loc_8209B6B4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8209b6b4
	if (ctx.cr6.eq) goto loc_8209B6B4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x8209b6e0
	if (!ctx.cr6.eq) goto loc_8209B6E0;
loc_8209B6B4:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8209b6d4
	if (ctx.cr6.eq) goto loc_8209B6D4;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8209b6d4
	if (ctx.cr6.eq) goto loc_8209B6D4;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x8209b6d4
	if (ctx.cr6.eq) goto loc_8209B6D4;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// bne cr6,0x8209b724
	if (!ctx.cr6.eq) goto loc_8209B724;
loc_8209B6D4:
	// sth r21,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r21.u16);
	// sth r21,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r21.u16);
	// b 0x8209b768
	goto loc_8209B768;
loc_8209B6E0:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8209b700
	if (ctx.cr6.eq) goto loc_8209B700;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8209b700
	if (ctx.cr6.eq) goto loc_8209B700;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8209b700
	if (ctx.cr6.eq) goto loc_8209B700;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8209b724
	if (!ctx.cr6.eq) goto loc_8209B724;
loc_8209B700:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8209b718
	if (ctx.cr6.eq) goto loc_8209B718;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8209b718
	if (ctx.cr6.eq) goto loc_8209B718;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x8209b724
	if (!ctx.cr6.eq) goto loc_8209B724;
loc_8209B718:
	// sth r22,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r22.u16);
	// sth r22,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r22.u16);
	// b 0x8209b768
	goto loc_8209B768;
loc_8209B724:
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// sth r9,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r9.u16);
	// sth r7,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r7.u16);
	// stb r10,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r10.u8);
	// beq cr6,0x8209b764
	if (ctx.cr6.eq) goto loc_8209B764;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// beq cr6,0x8209b764
	if (ctx.cr6.eq) goto loc_8209B764;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8209b75c
	if (ctx.cr6.eq) goto loc_8209B75C;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x8209b75c
	if (ctx.cr6.eq) goto loc_8209B75C;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// bne cr6,0x8209b768
	if (!ctx.cr6.eq) goto loc_8209B768;
loc_8209B75C:
	// sth r23,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r23.u16);
	// b 0x8209b768
	goto loc_8209B768;
loc_8209B764:
	// sth r30,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r30.u16);
loc_8209B768:
	// lhz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8209b788
	if (!ctx.cr6.eq) goto loc_8209B788;
	// lbz r10,-8980(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8980);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r9,-8980(r31)
	PPC_STORE_U8(ctx.r31.u32 + -8980, ctx.r9.u8);
	// lbzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// stb r8,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r8.u8);
loc_8209B788:
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,14001
	ctx.r5.s64 = 14001;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82093370
	ctx.lr = 0x8209B7A8;
	sub_82093370(ctx, base);
	// b 0x8209b7ec
	goto loc_8209B7EC;
loc_8209B7AC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8209b7ec
	if (!ctx.cr6.eq) goto loc_8209B7EC;
	// lbz r10,53(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stb r7,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r7.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8209b7ec
	if (!ctx.cr6.lt) goto loc_8209B7EC;
	// sth r9,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r9.u16);
	// sth r30,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r30.u16);
	// stb r24,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r24.u8);
	// lbz r10,-8980(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8980);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// stb r9,-8980(r31)
	PPC_STORE_U8(ctx.r31.u32 + -8980, ctx.r9.u8);
	// stb r8,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r8.u8);
loc_8209B7EC:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r28,144
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 144, ctx.xer);
	// blt cr6,0x8209b59c
	if (ctx.cr6.lt) goto loc_8209B59C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8209b810
	if (!ctx.cr6.lt) goto loc_8209B810;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8209B810:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8209b82c
	if (!ctx.cr6.lt) goto loc_8209B82C;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8209B82C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8209b848
	if (!ctx.cr6.lt) goto loc_8209B848;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8209B848:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8209b864
	if (!ctx.cr6.lt) goto loc_8209B864;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8209B864:
	// addic. r11,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r11.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// bne 0x8209b874
	if (!ctx.cr0.eq) goto loc_8209B874;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8209B874:
	// stw r11,-8992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8992, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8209B880"))) PPC_WEAK_FUNC(sub_8209B880);
PPC_FUNC_IMPL(__imp__sub_8209B880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x8209B888;
	sub_8224875C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8209bd44
	if (!ctx.cr6.gt) goto loc_8209BD44;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lwz r27,-19792(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19792);
	// addi r18,r5,-1
	ctx.r18.s64 = ctx.r5.s64 + -1;
	// bl 0x822aa648
	ctx.lr = 0x8209B8C0;
	sub_822AA648(ctx, base);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r29,r27,40
	ctx.r29.s64 = ctx.r27.s64 + 40;
loc_8209B8C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209b8ec
	if (ctx.cr6.eq) goto loc_8209B8EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// bl 0x82093350
	ctx.lr = 0x8209B8E0;
	sub_82093350(ctx, base);
	// cmpwi cr6,r3,14001
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14001, ctx.xer);
	// beq cr6,0x8209b8ec
	if (ctx.cr6.eq) goto loc_8209B8EC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8209B8EC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// blt cr6,0x8209b8c8
	if (ctx.cr6.lt) goto loc_8209B8C8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8209bd44
	if (ctx.cr6.eq) goto loc_8209BD44;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8209b928
	if (ctx.cr6.eq) goto loc_8209B928;
	// cmpwi cr6,r28,100
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 100, ctx.xer);
	// bge cr6,0x8209b928
	if (!ctx.cr6.lt) goto loc_8209B928;
	// li r11,10
	ctx.r11.s64 = 10;
	// divw r10,r28,r11
	ctx.r10.s32 = ctx.r28.s32 / ctx.r11.s32;
	// mullw r9,r10,r31
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// divw r11,r9,r11
	ctx.r11.s32 = ctx.r9.s32 / ctx.r11.s32;
loc_8209B928:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209bd44
	if (ctx.cr6.eq) goto loc_8209BD44;
	// ble cr6,0x8209b950
	if (!ctx.cr6.gt) goto loc_8209B950;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209b950
	if (ctx.cr6.eq) goto loc_8209B950;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8209B948:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8209b948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209B948;
loc_8209B950:
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r20,-32182
	ctx.r20.s64 = -2109079552;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r30,r11,-9760
	ctx.r30.s64 = ctx.r11.s64 + -9760;
	// lbz r11,-8977(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + -8977);
loc_8209B968:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// twllei r31,0
	// lbzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// divw r7,r3,r31
	ctx.r7.s32 = ctx.r3.s32 / ctx.r31.s32;
	// divw r10,r29,r31
	ctx.r10.s32 = ctx.r29.s32 / ctx.r31.s32;
	// mullw r4,r7,r31
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// lbzx r28,r11,r30
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// subf r7,r10,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divw r24,r28,r31
	ctx.r24.s32 = ctx.r28.s32 / ctx.r31.s32;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r25,r7,r8
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// rotlwi r4,r28,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// lbzx r22,r10,r9
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// twllei r31,0
	// twllei r31,0
	// lbzx r21,r11,r30
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// stbx r25,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r25.u8);
	// mullw r26,r24,r31
	ctx.r26.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r31.s32);
	// stbx r22,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r22.u8);
	// lbzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// divw r10,r21,r31
	ctx.r10.s32 = ctx.r21.s32 / ctx.r31.s32;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mullw r7,r10,r31
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// lbzx r24,r11,r30
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// subf r10,r26,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r26.s64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// subf r9,r7,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r7.s64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// rotlwi r8,r3,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lbzx r26,r11,r30
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r22,r9,r5
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// rotlwi r7,r29,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// lbzx r29,r10,r6
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// rotlwi r3,r21,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r21.u32, 1);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// lbzx r25,r11,r30
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// stbx r22,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r22.u8);
	// addi r6,r4,-1
	ctx.r6.s64 = ctx.r4.s64 + -1;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// stbx r29,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r29.u8);
	// andc r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 & ~ctx.r8.u64;
	// divw r3,r28,r31
	ctx.r3.s32 = ctx.r28.s32 / ctx.r31.s32;
	// andc r8,r31,r7
	ctx.r8.u64 = ctx.r31.u64 & ~ctx.r7.u64;
	// divw r10,r24,r31
	ctx.r10.s32 = ctx.r24.s32 / ctx.r31.s32;
	// andc r7,r31,r6
	ctx.r7.u64 = ctx.r31.u64 & ~ctx.r6.u64;
	// andc r6,r31,r4
	ctx.r6.u64 = ctx.r31.u64 & ~ctx.r4.u64;
	// mullw r5,r3,r31
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// mullw r3,r10,r31
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// twlgei r9,-1
	// twlgei r8,-1
	// twlgei r7,-1
	// twlgei r6,-1
	// twllei r31,0
	// twllei r31,0
	// twllei r31,0
	// rotlwi r4,r28,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r9,r3,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r3.s64;
	// subf r7,r5,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r5.s64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// divw r5,r25,r31
	ctx.r5.s32 = ctx.r25.s32 / ctx.r31.s32;
	// lbzx r28,r7,r8
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// divw r29,r26,r31
	ctx.r29.s32 = ctx.r26.s32 / ctx.r31.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r3,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r3.u8);
	// mullw r7,r5,r31
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// stbx r28,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u8);
	// mullw r5,r29,r31
	ctx.r5.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// subf r7,r7,r25
	ctx.r7.s64 = ctx.r25.s64 - ctx.r7.s64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// subf r9,r5,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r5.s64;
	// lbzx r26,r11,r30
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rotlwi r3,r24,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// lbzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// rotlwi r29,r6,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lbzx r28,r9,r10
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// twllei r31,0
	// stbx r5,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u8);
	// divw r10,r26,r31
	ctx.r10.s32 = ctx.r26.s32 / ctx.r31.s32;
	// lbzx r24,r11,r30
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stbx r28,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r28.u8);
	// mullw r9,r10,r31
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// divw r6,r24,r31
	ctx.r6.s32 = ctx.r24.s32 / ctx.r31.s32;
	// rotlwi r8,r25,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// mullw r25,r6,r31
	ctx.r25.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// subf r10,r9,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r9.s64;
	// subf r9,r25,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r25.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r26,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// rotlwi r28,r24,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lbzx r25,r9,r5
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lbzx r26,r10,r6
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// twllei r31,0
	// twllei r31,0
	// twllei r31,0
	// stbx r25,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r25.u8);
	// andc r6,r31,r4
	ctx.r6.u64 = ctx.r31.u64 & ~ctx.r4.u64;
	// stbx r26,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r26.u8);
	// andc r5,r31,r3
	ctx.r5.u64 = ctx.r31.u64 & ~ctx.r3.u64;
	// andc r3,r31,r8
	ctx.r3.u64 = ctx.r31.u64 & ~ctx.r8.u64;
	// andc r4,r31,r29
	ctx.r4.u64 = ctx.r31.u64 & ~ctx.r29.u64;
	// andc r10,r31,r7
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r7.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// andc r8,r31,r28
	ctx.r8.u64 = ctx.r31.u64 & ~ctx.r28.u64;
	// twlgei r6,-1
	// twlgei r5,-1
	// twlgei r4,-1
	// twlgei r3,-1
	// twlgei r10,-1
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// twlgei r8,-1
	// bdnz 0x8209b968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209B968;
	// stb r11,-8977(r20)
	PPC_STORE_U8(ctx.r20.u32 + -8977, ctx.r11.u8);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// li r31,64
	ctx.r31.s64 = 64;
	// addi r21,r27,-24
	ctx.r21.s64 = ctx.r27.s64 + -24;
loc_8209BBBC:
	// lwz r3,48(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209bbe0
	if (ctx.cr6.eq) goto loc_8209BBE0;
	// lwzx r11,r21,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209bbe0
	if (ctx.cr6.eq) goto loc_8209BBE0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82093350
	ctx.lr = 0x8209BBE0;
	sub_82093350(ctx, base);
loc_8209BBE0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r31,144
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 144, ctx.xer);
	// blt cr6,0x8209bbbc
	if (ctx.cr6.lt) goto loc_8209BBBC;
	// lis r11,-30584
	ctx.r11.s64 = -2004353024;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// li r25,64
	ctx.r25.s64 = 64;
	// li r22,-1
	ctx.r22.s64 = -1;
	// li r26,12
	ctx.r26.s64 = 12;
	// ori r28,r11,34953
	ctx.r28.u64 = ctx.r11.u64 | 34953;
loc_8209BC0C:
	// lwz r3,48(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// lwzx r27,r25,r3
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r3.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8209bd34
	if (ctx.cr6.eq) goto loc_8209BD34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r29,r25,r21
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r21.u32);
	// bl 0x82093350
	ctx.lr = 0x8209BC28;
	sub_82093350(ctx, base);
	// cmpwi cr6,r3,14001
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14001, ctx.xer);
	// beq cr6,0x8209bd34
	if (ctx.cr6.eq) goto loc_8209BD34;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8209bc4c
	if (ctx.cr6.eq) goto loc_8209BC4C;
	// lbz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209bc4c
	if (!ctx.cr6.eq) goto loc_8209BC4C;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x8209bd34
	goto loc_8209BD34;
loc_8209BC4C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplwi cr6,r17,6
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 6, ctx.xer);
	// bgt cr6,0x8209bd34
	if (ctx.cr6.gt) goto loc_8209BD34;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8209bc84
	// bdzf 4*cr6+eq,0x8209bc84
	// bdzf 4*cr6+eq,0x8209bc84
	// bdzf 4*cr6+eq,0x8209bc84
	// bdzf 4*cr6+eq,0x8209bc84
	// bne cr6,0x8209bc84
	if (!ctx.cr6.eq) goto loc_8209BC84;
	// stb r22,51(r27)
	PPC_STORE_U8(ctx.r27.u32 + 51, ctx.r22.u8);
	// b 0x8209bd34
	goto loc_8209BD34;
loc_8209BC84:
	// lwz r11,48(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// lwzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lhz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x8209bd34
	if (ctx.cr6.eq) goto loc_8209BD34;
	// lwz r10,388(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 388);
	// addi r10,r10,95
	ctx.r10.s64 = ctx.r10.s64 + 95;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r23.u32);
	// lhz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8209bcc8
	if (ctx.cr6.eq) goto loc_8209BCC8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8209bcc8
	if (ctx.cr6.eq) goto loc_8209BCC8;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x8209bccc
	if (!ctx.cr6.eq) goto loc_8209BCCC;
loc_8209BCC8:
	// li r6,5
	ctx.r6.s64 = 5;
loc_8209BCCC:
	// sth r10,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r10.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r10.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r23,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r23.u8);
	// li r5,14001
	ctx.r5.s64 = 14001;
	// sth r26,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r26.u16);
	// stb r18,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r18.u8);
	// stb r23,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r23.u8);
	// lbz r10,-8977(r20)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r20.u32 + -8977);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mulhw r4,r4,r28
	ctx.r4.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32)) >> 32;
	// stb r9,-8977(r20)
	PPC_STORE_U8(ctx.r20.u32 + -8977, ctx.r9.u8);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srawi r9,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mulli r3,r9,60
	ctx.r3.s64 = ctx.r9.s64 * 60;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// sth r10,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// lwz r3,48(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// bl 0x82093370
	ctx.lr = 0x8209BD34;
	sub_82093370(ctx, base);
loc_8209BD34:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r25,144
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 144, ctx.xer);
	// blt cr6,0x8209bc0c
	if (ctx.cr6.lt) goto loc_8209BC0C;
loc_8209BD44:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_8209BD4C"))) PPC_WEAK_FUNC(sub_8209BD4C);
PPC_FUNC_IMPL(__imp__sub_8209BD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209BD50"))) PPC_WEAK_FUNC(sub_8209BD50);
PPC_FUNC_IMPL(__imp__sub_8209BD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8209BD58;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215c078
	ctx.lr = 0x8209BD64;
	sub_8215C078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8209BD6C;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8209BD78;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8209BD7C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8209bd94
	if (ctx.cr6.eq) goto loc_8209BD94;
	// li r3,572
	ctx.r3.s64 = 572;
	// bl 0x82183448
	ctx.lr = 0x8209BD90;
	sub_82183448(ctx, base);
	// b 0x8209bd9c
	goto loc_8209BD9C;
loc_8209BD94:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x821845a0
	ctx.lr = 0x8209BD9C;
	sub_821845A0(ctx, base);
loc_8209BD9C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209bdb4
	if (ctx.cr6.eq) goto loc_8209BDB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82098ea8
	ctx.lr = 0x8209BDAC;
	sub_82098EA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209bdb8
	goto loc_8209BDB8;
loc_8209BDB4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8209BDB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209BDCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8209BDD4;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8209BDDC"))) PPC_WEAK_FUNC(sub_8209BDDC);
PPC_FUNC_IMPL(__imp__sub_8209BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209BDE0"))) PPC_WEAK_FUNC(sub_8209BDE0);
PPC_FUNC_IMPL(__imp__sub_8209BDE0) {
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
	// bl 0x82098f70
	ctx.lr = 0x8209BE00;
	sub_82098F70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209be1c
	if (ctx.cr6.eq) goto loc_8209BE1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8209BE18;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8209BE1C:
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

__attribute__((alias("__imp__sub_8209BE34"))) PPC_WEAK_FUNC(sub_8209BE34);
PPC_FUNC_IMPL(__imp__sub_8209BE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209BE38"))) PPC_WEAK_FUNC(sub_8209BE38);
PPC_FUNC_IMPL(__imp__sub_8209BE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8209BE40;
	sub_82248774(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32185
	ctx.r25.s64 = -2109276160;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r28,64
	ctx.r28.s64 = 64;
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r24,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r24.u32);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,-19792(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19792);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r23,1
	ctx.r23.s64 = 1;
loc_8209BE94:
	// lwz r31,-24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209bf4c
	if (ctx.cr6.eq) goto loc_8209BF4C;
	// cmpwi cr6,r26,52
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 52, ctx.xer);
	// bge cr6,0x8209bf4c
	if (!ctx.cr6.lt) goto loc_8209BF4C;
	// stfs f31,1296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1296, temp.u32);
	// stw r30,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r30.u32);
	// sth r30,1294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1294, ctx.r30.u16);
	// sth r24,1292(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1292, ctx.r24.u16);
	// stfs f31,1320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1320, temp.u32);
	// stfs f31,1316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// stfs f31,1312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// stfs f30,1324(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1324, temp.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// bl 0x820ef8f8
	ctx.lr = 0x8209BEE8;
	sub_820EF8F8(ctx, base);
	// stw r30,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r30.u32);
	// addi r29,r31,1216
	ctx.r29.s64 = ctx.r31.s64 + 1216;
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,18543
	ctx.r4.u64 = ctx.r4.u64 | 18543;
	// bl 0x821882d0
	ctx.lr = 0x8209BF00;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209bf18
	if (ctx.cr6.eq) goto loc_8209BF18;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209bf18
	if (ctx.cr6.eq) goto loc_8209BF18;
	// stw r23,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r23.u32);
loc_8209BF18:
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,17524
	ctx.r4.u64 = ctx.r4.u64 | 17524;
	// bl 0x821882d0
	ctx.lr = 0x8209BF28;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209bf4c
	if (ctx.cr6.eq) goto loc_8209BF4C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209bf4c
	if (ctx.cr6.eq) goto loc_8209BF4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209BF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209BF4C:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209bf90
	if (ctx.cr6.eq) goto loc_8209BF90;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// sth r30,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r30.u16);
	// stb r30,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r30.u8);
	// sth r30,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r30.u16);
	// sth r30,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r30.u16);
	// sth r30,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r30.u16);
	// stb r30,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r30.u8);
	// stb r30,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r30.u8);
	// sth r30,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r30.u16);
	// stb r30,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r30.u8);
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
	// stw r30,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r30.u32);
	// stw r23,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r23.u32);
loc_8209BF90:
	// lwz r11,-19792(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19792);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r28,272
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 272, ctx.xer);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// blt cr6,0x8209be94
	if (ctx.cr6.lt) goto loc_8209BE94;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82098cd0
	ctx.lr = 0x8209BFB0;
	sub_82098CD0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82099358
	ctx.lr = 0x8209BFBC;
	sub_82099358(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82098fd8
	ctx.lr = 0x8209BFC4;
	sub_82098FD8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8209BFD4"))) PPC_WEAK_FUNC(sub_8209BFD4);
PPC_FUNC_IMPL(__imp__sub_8209BFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209BFD8"))) PPC_WEAK_FUNC(sub_8209BFD8);
PPC_FUNC_IMPL(__imp__sub_8209BFD8) {
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
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// bgt 0x8209c004
	if (ctx.cr0.gt) goto loc_8209C004;
	// li r11,120
	ctx.r11.s64 = 120;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
loc_8209C004:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r10,-5052
	ctx.r9.s64 = ctx.r10.s64 + -5052;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8209c028
	if (ctx.cr6.eq) goto loc_8209C028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82099820
	ctx.lr = 0x8209C028;
	sub_82099820(ctx, base);
loc_8209C028:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C044"))) PPC_WEAK_FUNC(sub_8209C044);
PPC_FUNC_IMPL(__imp__sub_8209C044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C048"))) PPC_WEAK_FUNC(sub_8209C048);
PPC_FUNC_IMPL(__imp__sub_8209C048) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8209c084
	if (!ctx.cr6.lt) goto loc_8209C084;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82099358
	ctx.lr = 0x8209C070;
	sub_82099358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8209C084:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-19792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c0a0
	if (ctx.cr6.eq) goto loc_8209C0A0;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8209c0b0
	if (!ctx.cr6.eq) goto loc_8209C0B0;
loc_8209C0A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209bfd8
	ctx.lr = 0x8209C0A8;
	sub_8209BFD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209b548
	ctx.lr = 0x8209C0B0;
	sub_8209B548(ctx, base);
loc_8209C0B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C0C4"))) PPC_WEAK_FUNC(sub_8209C0C4);
PPC_FUNC_IMPL(__imp__sub_8209C0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C0C8"))) PPC_WEAK_FUNC(sub_8209C0C8);
PPC_FUNC_IMPL(__imp__sub_8209C0C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8209c048
	sub_8209C048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209C0CC"))) PPC_WEAK_FUNC(sub_8209C0CC);
PPC_FUNC_IMPL(__imp__sub_8209C0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C0D0"))) PPC_WEAK_FUNC(sub_8209C0D0);
PPC_FUNC_IMPL(__imp__sub_8209C0D0) {
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
	// bl 0x8215bd60
	ctx.lr = 0x8209C0E4;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// beq cr6,0x8209c128
	if (ctx.cr6.eq) goto loc_8209C128;
	// lwz r31,-4964(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4964);
	// bl 0x82225508
	ctx.lr = 0x8209C0FC;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209c110
	if (ctx.cr6.eq) goto loc_8209C110;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// lwz r31,748(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
loc_8209C110:
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
loc_8209C128:
	// lwz r3,-4964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4964);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C140"))) PPC_WEAK_FUNC(sub_8209C140);
PPC_FUNC_IMPL(__imp__sub_8209C140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r10,1548(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1548, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C15C"))) PPC_WEAK_FUNC(sub_8209C15C);
PPC_FUNC_IMPL(__imp__sub_8209C15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C160"))) PPC_WEAK_FUNC(sub_8209C160);
PPC_FUNC_IMPL(__imp__sub_8209C160) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8209c17c
	if (!ctx.cr6.eq) goto loc_8209C17C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8209c184
	if (ctx.cr6.eq) goto loc_8209C184;
	// lwz r11,96(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c184
	if (ctx.cr6.eq) goto loc_8209C184;
loc_8209C17C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8209C184:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C18C"))) PPC_WEAK_FUNC(sub_8209C18C);
PPC_FUNC_IMPL(__imp__sub_8209C18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C190"))) PPC_WEAK_FUNC(sub_8209C190);
PPC_FUNC_IMPL(__imp__sub_8209C190) {
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
	// lbz r4,2(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r3,1(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// bl 0x8209eda0
	ctx.lr = 0x8209C1A8;
	sub_8209EDA0(ctx, base);
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

__attribute__((alias("__imp__sub_8209C1BC"))) PPC_WEAK_FUNC(sub_8209C1BC);
PPC_FUNC_IMPL(__imp__sub_8209C1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C1C0"))) PPC_WEAK_FUNC(sub_8209C1C0);
PPC_FUNC_IMPL(__imp__sub_8209C1C0) {
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
	// lbz r3,1(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// bl 0x8209eda0
	ctx.lr = 0x8209C1D4;
	sub_8209EDA0(ctx, base);
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

__attribute__((alias("__imp__sub_8209C1E8"))) PPC_WEAK_FUNC(sub_8209C1E8);
PPC_FUNC_IMPL(__imp__sub_8209C1E8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbz r5,3(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// bl 0x820933d8
	ctx.lr = 0x8209C208;
	sub_820933D8(ctx, base);
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

__attribute__((alias("__imp__sub_8209C21C"))) PPC_WEAK_FUNC(sub_8209C21C);
PPC_FUNC_IMPL(__imp__sub_8209C21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C220"))) PPC_WEAK_FUNC(sub_8209C220);
PPC_FUNC_IMPL(__imp__sub_8209C220) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1476, ctx.r11.u32);
	// stw r9,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r9.u32);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C240"))) PPC_WEAK_FUNC(sub_8209C240);
PPC_FUNC_IMPL(__imp__sub_8209C240) {
	PPC_FUNC_PROLOGUE();
	// b 0x820f4390
	sub_820F4390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209C244"))) PPC_WEAK_FUNC(sub_8209C244);
PPC_FUNC_IMPL(__imp__sub_8209C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C248"))) PPC_WEAK_FUNC(sub_8209C248);
PPC_FUNC_IMPL(__imp__sub_8209C248) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820ae430
	ctx.lr = 0x8209C260;
	sub_820AE430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c2a0
	if (ctx.cr6.eq) goto loc_8209C2A0;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,9852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x8209C2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209C2A0:
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

__attribute__((alias("__imp__sub_8209C2B8"))) PPC_WEAK_FUNC(sub_8209C2B8);
PPC_FUNC_IMPL(__imp__sub_8209C2B8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// bl 0x820aea58
	ctx.lr = 0x8209C2D4;
	sub_820AEA58(ctx, base);
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

__attribute__((alias("__imp__sub_8209C2E8"))) PPC_WEAK_FUNC(sub_8209C2E8);
PPC_FUNC_IMPL(__imp__sub_8209C2E8) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820f3f70
	ctx.lr = 0x8209C2FC;
	sub_820F3F70(ctx, base);
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

__attribute__((alias("__imp__sub_8209C314"))) PPC_WEAK_FUNC(sub_8209C314);
PPC_FUNC_IMPL(__imp__sub_8209C314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C318"))) PPC_WEAK_FUNC(sub_8209C318);
PPC_FUNC_IMPL(__imp__sub_8209C318) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,36(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8209c33c
	if (ctx.cr6.eq) goto loc_8209C33C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8209C33C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C344"))) PPC_WEAK_FUNC(sub_8209C344);
PPC_FUNC_IMPL(__imp__sub_8209C344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C348"))) PPC_WEAK_FUNC(sub_8209C348);
PPC_FUNC_IMPL(__imp__sub_8209C348) {
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
	// bl 0x820f3a78
	ctx.lr = 0x8209C360;
	sub_820F3A78(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
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
}

__attribute__((alias("__imp__sub_8209C388"))) PPC_WEAK_FUNC(sub_8209C388);
PPC_FUNC_IMPL(__imp__sub_8209C388) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C3A8"))) PPC_WEAK_FUNC(sub_8209C3A8);
PPC_FUNC_IMPL(__imp__sub_8209C3A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C3C8"))) PPC_WEAK_FUNC(sub_8209C3C8);
PPC_FUNC_IMPL(__imp__sub_8209C3C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C3E8"))) PPC_WEAK_FUNC(sub_8209C3E8);
PPC_FUNC_IMPL(__imp__sub_8209C3E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C408"))) PPC_WEAK_FUNC(sub_8209C408);
PPC_FUNC_IMPL(__imp__sub_8209C408) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C428"))) PPC_WEAK_FUNC(sub_8209C428);
PPC_FUNC_IMPL(__imp__sub_8209C428) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C448"))) PPC_WEAK_FUNC(sub_8209C448);
PPC_FUNC_IMPL(__imp__sub_8209C448) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C468"))) PPC_WEAK_FUNC(sub_8209C468);
PPC_FUNC_IMPL(__imp__sub_8209C468) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C488"))) PPC_WEAK_FUNC(sub_8209C488);
PPC_FUNC_IMPL(__imp__sub_8209C488) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C4A4"))) PPC_WEAK_FUNC(sub_8209C4A4);
PPC_FUNC_IMPL(__imp__sub_8209C4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C4A8"))) PPC_WEAK_FUNC(sub_8209C4A8);
PPC_FUNC_IMPL(__imp__sub_8209C4A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C4C8"))) PPC_WEAK_FUNC(sub_8209C4C8);
PPC_FUNC_IMPL(__imp__sub_8209C4C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820f37c0
	sub_820F37C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209C4CC"))) PPC_WEAK_FUNC(sub_8209C4CC);
PPC_FUNC_IMPL(__imp__sub_8209C4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C4D0"))) PPC_WEAK_FUNC(sub_8209C4D0);
PPC_FUNC_IMPL(__imp__sub_8209C4D0) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c540
	if (ctx.cr6.eq) goto loc_8209C540;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r10,372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209c538
	if (ctx.cr6.eq) goto loc_8209C538;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8209C538:
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// bl 0x820977c8
	ctx.lr = 0x8209C540;
	sub_820977C8(ctx, base);
loc_8209C540:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C554"))) PPC_WEAK_FUNC(sub_8209C554);
PPC_FUNC_IMPL(__imp__sub_8209C554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C558"))) PPC_WEAK_FUNC(sub_8209C558);
PPC_FUNC_IMPL(__imp__sub_8209C558) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c5cc
	if (ctx.cr6.eq) goto loc_8209C5CC;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r10,372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209c5c0
	if (ctx.cr6.eq) goto loc_8209C5C0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8209C5C0:
	// addi r5,r11,10
	ctx.r5.s64 = ctx.r11.s64 + 10;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x820977c8
	ctx.lr = 0x8209C5CC;
	sub_820977C8(ctx, base);
loc_8209C5CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C5E0"))) PPC_WEAK_FUNC(sub_8209C5E0);
PPC_FUNC_IMPL(__imp__sub_8209C5E0) {
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
	// lis r4,19801
	ctx.r4.s64 = 1297678336;
	// lwz r3,1972(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1972);
	// ori r4,r4,21076
	ctx.r4.u64 = ctx.r4.u64 | 21076;
	// bl 0x821882d0
	ctx.lr = 0x8209C5FC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c618
	if (ctx.cr6.eq) goto loc_8209C618;
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
loc_8209C618:
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

__attribute__((alias("__imp__sub_8209C62C"))) PPC_WEAK_FUNC(sub_8209C62C);
PPC_FUNC_IMPL(__imp__sub_8209C62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C630"))) PPC_WEAK_FUNC(sub_8209C630);
PPC_FUNC_IMPL(__imp__sub_8209C630) {
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
	// lis r4,17985
	ctx.r4.s64 = 1178664960;
	// ori r4,r4,17477
	ctx.r4.u64 = ctx.r4.u64 | 17477;
	// bl 0x821882d0
	ctx.lr = 0x8209C648;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c664
	if (ctx.cr6.eq) goto loc_8209C664;
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
loc_8209C664:
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

__attribute__((alias("__imp__sub_8209C678"))) PPC_WEAK_FUNC(sub_8209C678);
PPC_FUNC_IMPL(__imp__sub_8209C678) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_8209C688"))) PPC_WEAK_FUNC(sub_8209C688);
PPC_FUNC_IMPL(__imp__sub_8209C688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8209C698"))) PPC_WEAK_FUNC(sub_8209C698);
PPC_FUNC_IMPL(__imp__sub_8209C698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8209C6A8"))) PPC_WEAK_FUNC(sub_8209C6A8);
PPC_FUNC_IMPL(__imp__sub_8209C6A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8209C6B8"))) PPC_WEAK_FUNC(sub_8209C6B8);
PPC_FUNC_IMPL(__imp__sub_8209C6B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8209C6C8"))) PPC_WEAK_FUNC(sub_8209C6C8);
PPC_FUNC_IMPL(__imp__sub_8209C6C8) {
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
	// bl 0x820f3d00
	ctx.lr = 0x8209C6E0;
	sub_820F3D00(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,9232
	ctx.r9.s64 = ctx.r10.s64 + 9232;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// sth r11,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r11.u16);
	// sth r11,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r11.u16);
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// stb r11,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C71C"))) PPC_WEAK_FUNC(sub_8209C71C);
PPC_FUNC_IMPL(__imp__sub_8209C71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C720"))) PPC_WEAK_FUNC(sub_8209C720);
PPC_FUNC_IMPL(__imp__sub_8209C720) {
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
	// addi r10,r11,9232
	ctx.r10.s64 = ctx.r11.s64 + 9232;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820f3310
	ctx.lr = 0x8209C74C;
	sub_820F3310(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8209c768
	if (ctx.cr6.eq) goto loc_8209C768;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8209C764;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8209C768:
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

__attribute__((alias("__imp__sub_8209C780"))) PPC_WEAK_FUNC(sub_8209C780);
PPC_FUNC_IMPL(__imp__sub_8209C780) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c7d4
	if (ctx.cr6.eq) goto loc_8209C7D4;
	// lis r4,20548
	ctx.r4.s64 = 1346633728;
	// lbz r31,1(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,21332
	ctx.r4.u64 = ctx.r4.u64 | 21332;
	// bl 0x821882d0
	ctx.lr = 0x8209C7B4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c7d4
	if (ctx.cr6.eq) goto loc_8209C7D4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c7d4
	if (ctx.cr6.eq) goto loc_8209C7D4;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820af408
	ctx.lr = 0x8209C7D4;
	sub_820AF408(ctx, base);
loc_8209C7D4:
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

__attribute__((alias("__imp__sub_8209C7EC"))) PPC_WEAK_FUNC(sub_8209C7EC);
PPC_FUNC_IMPL(__imp__sub_8209C7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C7F0"))) PPC_WEAK_FUNC(sub_8209C7F0);
PPC_FUNC_IMPL(__imp__sub_8209C7F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c82c
	if (ctx.cr6.eq) goto loc_8209C82C;
	// lwz r10,1356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8209c820
	if (ctx.cr6.eq) goto loc_8209C820;
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8209c82c
	if (!ctx.cr6.eq) goto loc_8209C82C;
	// lwz r11,1364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8209c82c
	if (!ctx.cr6.eq) goto loc_8209C82C;
loc_8209C820:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-8600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8600, ctx.r11.u32);
loc_8209C82C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209C834"))) PPC_WEAK_FUNC(sub_8209C834);
PPC_FUNC_IMPL(__imp__sub_8209C834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209C838"))) PPC_WEAK_FUNC(sub_8209C838);
PPC_FUNC_IMPL(__imp__sub_8209C838) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c908
	if (ctx.cr6.eq) goto loc_8209C908;
	// lis r4,27725
	ctx.r4.s64 = 1816985600;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,28487
	ctx.r4.u64 = ctx.r4.u64 | 28487;
	// bl 0x821882d0
	ctx.lr = 0x8209C868;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c908
	if (ctx.cr6.eq) goto loc_8209C908;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209c908
	if (ctx.cr6.eq) goto loc_8209C908;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8209c8c8
	if (ctx.cr6.gt) goto loc_8209C8C8;
	// stfs f0,2116(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2116, temp.u32);
	// stfs f0,2152(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2152, temp.u32);
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
loc_8209C8C8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r9,-7560
	ctx.r8.s64 = ctx.r9.s64 + -7560;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f10,2116(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2116, temp.u32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f9,2152(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2152, temp.u32);
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
loc_8209C908:
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

__attribute__((alias("__imp__sub_8209C920"))) PPC_WEAK_FUNC(sub_8209C920);
PPC_FUNC_IMPL(__imp__sub_8209C920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8209C928;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8209cac4
	if (ctx.cr6.eq) goto loc_8209CAC4;
	// lis r4,27725
	ctx.r4.s64 = 1816985600;
	// addi r3,r30,1248
	ctx.r3.s64 = ctx.r30.s64 + 1248;
	// ori r4,r4,28487
	ctx.r4.u64 = ctx.r4.u64 | 28487;
	// bl 0x821882d0
	ctx.lr = 0x8209C954;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209c964
	if (ctx.cr6.eq) goto loc_8209C964;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209c968
	goto loc_8209C968;
loc_8209C964:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8209C968:
	// lwz r11,1028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r29,1932(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lhz r28,28(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// ble cr6,0x8209c9e4
	if (!ctx.cr6.gt) goto loc_8209C9E4;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r31,2688
	ctx.r8.s64 = ctx.r31.s64 + 2688;
loc_8209C98C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lhzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8209c9ac
	if (!ctx.cr6.eq) goto loc_8209C9AC;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x8209c9b8
	goto loc_8209C9B8;
loc_8209C9AC:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8209C9B8:
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// std r10,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// std r5,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r5.u64);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8209c98c
	if (ctx.cr6.lt) goto loc_8209C98C;
loc_8209C9E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ef360
	ctx.lr = 0x8209C9F4;
	sub_820EF360(ctx, base);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lfs f0,2656(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2656);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,48(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
	// lfs f11,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,2664(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2664);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,56(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 56, temp.u32);
	// bl 0x820af5b8
	ctx.lr = 0x8209CA24;
	sub_820AF5B8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// clrlwi r7,r28,16
	ctx.r7.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f31,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8209caac
	if (ctx.cr6.eq) goto loc_8209CAAC;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,9860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9860);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x8209ca78
	if (!ctx.cr6.gt) goto loc_8209CA78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x8209ca94
	goto loc_8209CA94;
loc_8209CA78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8209ca94
	if (!ctx.cr6.lt) goto loc_8209CA94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_8209CA94:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820efa60
	ctx.lr = 0x8209CAA4;
	sub_820EFA60(ctx, base);
	// stfs f31,2116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2116, temp.u32);
	// stfs f31,2152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2152, temp.u32);
loc_8209CAAC:
	// stfs f31,10960(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10960, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f31,10968(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10968, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8209CAC4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8209CAE4"))) PPC_WEAK_FUNC(sub_8209CAE4);
PPC_FUNC_IMPL(__imp__sub_8209CAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209CAE8"))) PPC_WEAK_FUNC(sub_8209CAE8);
PPC_FUNC_IMPL(__imp__sub_8209CAE8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r3,r4,1248
	ctx.r3.s64 = ctx.r4.s64 + 1248;
	// bne cr6,0x8209cb0c
	if (!ctx.cr6.eq) goto loc_8209CB0C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209CB0C:
	// lis r4,18252
	ctx.r4.s64 = 1196163072;
	// ori r4,r4,19795
	ctx.r4.u64 = ctx.r4.u64 | 19795;
	// bl 0x821882d0
	ctx.lr = 0x8209CB18;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209cb2c
	if (ctx.cr6.eq) goto loc_8209CB2C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209cb44
	if (!ctx.cr6.eq) goto loc_8209CB44;
loc_8209CB2C:
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
loc_8209CB44:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x8209cb60
	if (!ctx.cr6.eq) goto loc_8209CB60;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x820afa08
	ctx.lr = 0x8209CB5C;
	sub_820AFA08(ctx, base);
	// b 0x8209cb68
	goto loc_8209CB68;
loc_8209CB60:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x820afa00
	ctx.lr = 0x8209CB68;
	sub_820AFA00(ctx, base);
loc_8209CB68:
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

__attribute__((alias("__imp__sub_8209CB80"))) PPC_WEAK_FUNC(sub_8209CB80);
PPC_FUNC_IMPL(__imp__sub_8209CB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8209CB88;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 6);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r9,5(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rotlwi r7,r11,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r6,2(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// or r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lbz r9,1(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r7,3(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// lwz r11,-8976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8976);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// or r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 | ctx.r9.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// or r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 | ctx.r7.u64;
	// lfs f0,8616(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bne cr6,0x8209cc04
	if (!ctx.cr6.eq) goto loc_8209CC04;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209CC04:
	// lis r4,21065
	ctx.r4.s64 = 1380515840;
	// ori r4,r4,20039
	ctx.r4.u64 = ctx.r4.u64 | 20039;
	// bl 0x821882d0
	ctx.lr = 0x8209CC10;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209cc3c
	if (ctx.cr6.eq) goto loc_8209CC3C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209cc3c
	if (ctx.cr6.eq) goto loc_8209CC3C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,1304(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1304);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a2e50
	ctx.lr = 0x8209CC3C;
	sub_820A2E50(ctx, base);
loc_8209CC3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8209CC4C"))) PPC_WEAK_FUNC(sub_8209CC4C);
PPC_FUNC_IMPL(__imp__sub_8209CC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209CC50"))) PPC_WEAK_FUNC(sub_8209CC50);
PPC_FUNC_IMPL(__imp__sub_8209CC50) {
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
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r3,1(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x82093390
	ctx.lr = 0x8209CC78;
	sub_82093390(ctx, base);
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

__attribute__((alias("__imp__sub_8209CC8C"))) PPC_WEAK_FUNC(sub_8209CC8C);
PPC_FUNC_IMPL(__imp__sub_8209CC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209CC90"))) PPC_WEAK_FUNC(sub_8209CC90);
PPC_FUNC_IMPL(__imp__sub_8209CC90) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209cccc
	if (ctx.cr6.eq) goto loc_8209CCCC;
	// lbz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209ccb8
	if (ctx.cr6.eq) goto loc_8209CCB8;
	// lwz r11,1284(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1284);
loc_8209CCB8:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lbz r4,1(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,-444(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -444);
	// bl 0x82160e78
	ctx.lr = 0x8209CCCC;
	sub_82160E78(ctx, base);
loc_8209CCCC:
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

__attribute__((alias("__imp__sub_8209CCE0"))) PPC_WEAK_FUNC(sub_8209CCE0);
PPC_FUNC_IMPL(__imp__sub_8209CCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8209CCE8;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,1936(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1936);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,1932(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1932);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r25,84(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r10,1028(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1028);
	// lfs f1,9864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f1.f64 = double(temp.f32);
	// lhz r29,28(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 28);
	// bl 0x820ef360
	ctx.lr = 0x8209CD20;
	sub_820EF360(ctx, base);
	// lwz r8,176(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 176);
	// lfs f0,2656(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 2656);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f13,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,48(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// lfs f11,56(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,2664(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 2664);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stfs f9,56(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfs f31,10960(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 10960, temp.u32);
	// stfs f31,10968(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 10968, temp.u32);
	// bl 0x820f03a8
	ctx.lr = 0x8209CD6C;
	sub_820F03A8(ctx, base);
	// stfs f31,2116(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 2116, temp.u32);
	// stfs f31,2152(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 2152, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8209cde8
	if (ctx.cr6.eq) goto loc_8209CDE8;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,9860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9860);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x8209cdbc
	if (!ctx.cr6.gt) goto loc_8209CDBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x8209cdd8
	goto loc_8209CDD8;
loc_8209CDBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8209cdd8
	if (!ctx.cr6.lt) goto loc_8209CDD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_8209CDD8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820efa60
	ctx.lr = 0x8209CDE8;
	sub_820EFA60(ctx, base);
loc_8209CDE8:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi cr6,r11,2130
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2130, ctx.xer);
	// blt cr6,0x8209cdfc
	if (ctx.cr6.lt) goto loc_8209CDFC;
	// cmpwi cr6,r11,2139
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2139, ctx.xer);
	// ble cr6,0x8209ce20
	if (!ctx.cr6.gt) goto loc_8209CE20;
loc_8209CDFC:
	// cmpwi cr6,r11,2750
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2750, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8209ce24
	if (!ctx.cr6.eq) goto loc_8209CE24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8209CE20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8209CE24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8209CE30"))) PPC_WEAK_FUNC(sub_8209CE30);
PPC_FUNC_IMPL(__imp__sub_8209CE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8209CE38;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,88(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stfs f31,0(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// beq cr6,0x8209cfd0
	if (ctx.cr6.eq) goto loc_8209CFD0;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,88(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x822e6048
	ctx.lr = 0x8209CEA8;
	sub_822E6048(ctx, base);
	// lwz r6,88(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// ori r4,r4,21579
	ctx.r4.u64 = ctx.r4.u64 | 21579;
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r3,344(r5)
	PPC_STORE_U32(ctx.r5.u32 + 344, ctx.r3.u32);
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// bl 0x821882d0
	ctx.lr = 0x8209CEC8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ced8
	if (ctx.cr6.eq) goto loc_8209CED8;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209cedc
	goto loc_8209CEDC;
loc_8209CED8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209CEDC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209CEEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// ori r4,r4,21579
	ctx.r4.u64 = ctx.r4.u64 | 21579;
	// lwz r3,1292(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1292);
	// bl 0x821882d0
	ctx.lr = 0x8209CF00;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209cf10
	if (ctx.cr6.eq) goto loc_8209CF10;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209cf14
	goto loc_8209CF14;
loc_8209CF10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209CF14:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209CF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209CF38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820ef350
	ctx.lr = 0x8209CF44;
	sub_820EF350(ctx, base);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,1296(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1296);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8209CF5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r5,352(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lwz r4,348(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// lwz r3,344(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// bl 0x82084b50
	ctx.lr = 0x8209CF70;
	sub_82084B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4b0
	ctx.lr = 0x8209CF7C;
	sub_820EF4B0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,352(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// lwz r4,348(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// lwz r3,344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x82084b50
	ctx.lr = 0x8209CF90;
	sub_82084B50(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x8209cfa8
	if (!ctx.cr6.eq) goto loc_8209CFA8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209CFA8:
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x8209CFB4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209cfc4
	if (ctx.cr6.eq) goto loc_8209CFC4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209cfc8
	goto loc_8209CFC8;
loc_8209CFC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209CFC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ef4b0
	ctx.lr = 0x8209CFD0;
	sub_820EF4B0(ctx, base);
loc_8209CFD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8209CFE0"))) PPC_WEAK_FUNC(sub_8209CFE0);
PPC_FUNC_IMPL(__imp__sub_8209CFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8209CFE8;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r27,3(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// or r26,r7,r8
	ctx.r26.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r4,92(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// stw r27,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r27.u32);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209d228
	if (ctx.cr6.eq) goto loc_8209D228;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209d228
	if (ctx.cr6.eq) goto loc_8209D228;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// bl 0x820f16a8
	ctx.lr = 0x8209D05C;
	sub_820F16A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8209d1e4
	if (!ctx.cr6.gt) goto loc_8209D1E4;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8209D074:
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// ori r4,r4,16722
	ctx.r4.u64 = ctx.r4.u64 | 16722;
	// bl 0x821882d0
	ctx.lr = 0x8209D084;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d094
	if (ctx.cr6.eq) goto loc_8209D094;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209d098
	goto loc_8209D098;
loc_8209D094:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8209D098:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8209d074
	if (!ctx.cr0.eq) goto loc_8209D074;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8209d1e4
	if (!ctx.cr6.gt) goto loc_8209D1E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8209D0C4:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8209d110
	if (ctx.cr6.eq) goto loc_8209D110;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209d110
	if (ctx.cr6.eq) goto loc_8209D110;
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,352(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 352);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8209d110
	if (ctx.cr6.eq) goto loc_8209D110;
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 344, ctx.r7.u32);
	// lwz r6,32(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r5,92(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r4,348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 348, ctx.r4.u32);
loc_8209D110:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bdnz 0x8209d0c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209D0C4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8209d1e4
	if (!ctx.cr6.gt) goto loc_8209D1E4;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8209D12C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209d16c
	if (ctx.cr6.eq) goto loc_8209D16C;
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// lwz r3,1292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// ori r4,r4,21579
	ctx.r4.u64 = ctx.r4.u64 | 21579;
	// bl 0x821882d0
	ctx.lr = 0x8209D148;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d158
	if (ctx.cr6.eq) goto loc_8209D158;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209d15c
	goto loc_8209D15C;
loc_8209D158:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209D15C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209D16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209D16C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8209d12c
	if (!ctx.cr0.eq) goto loc_8209D12C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8209d1e4
	if (!ctx.cr6.gt) goto loc_8209D1E4;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8209D188:
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209d1d4
	if (ctx.cr6.eq) goto loc_8209D1D4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8209d1d4
	if (ctx.cr6.eq) goto loc_8209D1D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef8f8
	ctx.lr = 0x8209D1B0;
	sub_820EF8F8(ctx, base);
	// lwz r3,1296(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209D1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,348(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f2268
	ctx.lr = 0x8209D1D4;
	sub_820F2268(ctx, base);
loc_8209D1D4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// bne 0x8209d188
	if (!ctx.cr0.eq) goto loc_8209D188;
loc_8209D1E4:
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,352(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// bl 0x822e6048
	ctx.lr = 0x8209D204;
	sub_822E6048(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r6,352(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// bl 0x822e6048
	ctx.lr = 0x8209D228;
	sub_822E6048(ctx, base);
loc_8209D228:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8209D238"))) PPC_WEAK_FUNC(sub_8209D238);
PPC_FUNC_IMPL(__imp__sub_8209D238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8209D240;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lbz r5,3(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// lbz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stfs f31,0(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// beq cr6,0x8209d3c4
	if (ctx.cr6.eq) goto loc_8209D3C4;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x822e6048
	ctx.lr = 0x8209D2C8;
	sub_822E6048(ctx, base);
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x822e6048
	ctx.lr = 0x8209D2F4;
	sub_822E6048(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// ori r4,r4,21579
	ctx.r4.u64 = ctx.r4.u64 | 21579;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r10.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 348, ctx.r7.u32);
	// lbz r6,5(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r6,352(r5)
	PPC_STORE_U32(ctx.r5.u32 + 352, ctx.r6.u32);
	// lwz r3,1292(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// bl 0x821882d0
	ctx.lr = 0x8209D330;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d340
	if (ctx.cr6.eq) goto loc_8209D340;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209d344
	goto loc_8209D344;
loc_8209D340:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209D344:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209D354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// ori r4,r4,21579
	ctx.r4.u64 = ctx.r4.u64 | 21579;
	// lwz r3,1292(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1292);
	// bl 0x821882d0
	ctx.lr = 0x8209D368;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d378
	if (ctx.cr6.eq) goto loc_8209D378;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209d37c
	goto loc_8209D37C;
loc_8209D378:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209D37C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209D38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1296(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209D3A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x820ef8f8
	ctx.lr = 0x8209D3AC;
	sub_820EF8F8(ctx, base);
	// lwz r7,96(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r3,1296(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1296);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8209D3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209D3C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8209D3D4"))) PPC_WEAK_FUNC(sub_8209D3D4);
PPC_FUNC_IMPL(__imp__sub_8209D3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209D3D8"))) PPC_WEAK_FUNC(sub_8209D3D8);
PPC_FUNC_IMPL(__imp__sub_8209D3D8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-2032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209d420
	if (ctx.cr6.eq) goto loc_8209D420;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209d420
	if (ctx.cr6.eq) goto loc_8209D420;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82127b48
	ctx.lr = 0x8209D410;
	sub_82127B48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d420
	if (ctx.cr6.eq) goto loc_8209D420;
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// bl 0x8212a9a0
	ctx.lr = 0x8209D420;
	sub_8212A9A0(ctx, base);
loc_8209D420:
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

__attribute__((alias("__imp__sub_8209D438"))) PPC_WEAK_FUNC(sub_8209D438);
PPC_FUNC_IMPL(__imp__sub_8209D438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8209D440;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,40(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r30,1(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r28,596
	ctx.r3.s64 = ctx.r28.s64 + 596;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r27,36(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x820eff10
	ctx.lr = 0x8209D464;
	sub_820EFF10(ctx, base);
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// bne cr6,0x8209d550
	if (!ctx.cr6.eq) goto loc_8209D550;
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// bl 0x821882d0
	ctx.lr = 0x8209D47C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d4f0
	if (ctx.cr6.eq) goto loc_8209D4F0;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8209d4f0
	if (ctx.cr6.eq) goto loc_8209D4F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x820f1650
	ctx.lr = 0x8209D4A0;
	sub_820F1650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d4e8
	if (ctx.cr6.eq) goto loc_8209D4E8;
loc_8209D4AC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef488
	ctx.lr = 0x8209D4BC;
	sub_820EF488(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4b0
	ctx.lr = 0x8209D4CC;
	sub_820EF4B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f1650
	ctx.lr = 0x8209D4DC;
	sub_820F1650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209d4ac
	if (!ctx.cr6.eq) goto loc_8209D4AC;
loc_8209D4E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f1580
	ctx.lr = 0x8209D4F0;
	sub_820F1580(ctx, base);
loc_8209D4F0:
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209d508
	if (ctx.cr6.eq) goto loc_8209D508;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4b0
	ctx.lr = 0x8209D508;
	sub_820EF4B0(ctx, base);
loc_8209D508:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8209d548
	if (ctx.cr6.eq) goto loc_8209D548;
	// lis r4,19801
	ctx.r4.s64 = 1297678336;
	// lwz r3,1972(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1972);
	// ori r4,r4,21076
	ctx.r4.u64 = ctx.r4.u64 | 21076;
	// bl 0x821882d0
	ctx.lr = 0x8209D520;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d548
	if (ctx.cr6.eq) goto loc_8209D548;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d548
	if (ctx.cr6.eq) goto loc_8209D548;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209D548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209D548:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r11.u32);
loc_8209D550:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8209D55C"))) PPC_WEAK_FUNC(sub_8209D55C);
PPC_FUNC_IMPL(__imp__sub_8209D55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209D560"))) PPC_WEAK_FUNC(sub_8209D560);
PPC_FUNC_IMPL(__imp__sub_8209D560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8209D568;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,40(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,44(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209d600
	if (ctx.cr6.eq) goto loc_8209D600;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// cmpwi cr6,r10,2800
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2800, ctx.xer);
	// blt cr6,0x8209d600
	if (ctx.cr6.lt) goto loc_8209D600;
	// cmpwi cr6,r10,2900
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2900, ctx.xer);
	// bge cr6,0x8209d600
	if (!ctx.cr6.lt) goto loc_8209D600;
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8209d600
	if (!ctx.cr6.eq) goto loc_8209D600;
	// bl 0x82097028
	ctx.lr = 0x8209D5B0;
	sub_82097028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ef360
	ctx.lr = 0x8209D5BC;
	sub_820EF360(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// bl 0x82097028
	ctx.lr = 0x8209D5E4;
	sub_82097028(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,9860(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9860);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x8209d830
	goto loc_8209D830;
loc_8209D600:
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21057
	ctx.r4.u64 = ctx.r4.u64 | 21057;
	// beq cr6,0x8209d6c8
	if (ctx.cr6.eq) goto loc_8209D6C8;
	// bl 0x821882d0
	ctx.lr = 0x8209D618;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d628
	if (ctx.cr6.eq) goto loc_8209D628;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209d62c
	goto loc_8209D62C;
loc_8209D628:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209D62C:
	// lfs f1,420(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ef360
	ctx.lr = 0x8209D634;
	sub_820EF360(ctx, base);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21057
	ctx.r4.u64 = ctx.r4.u64 | 21057;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lfs f0,9860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9860);
	ctx.f0.f64 = double(temp.f32);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x821882d0
	ctx.lr = 0x8209D678;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d6a4
	if (ctx.cr6.eq) goto loc_8209D6A4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820efa60
	ctx.lr = 0x8209D694;
	sub_820EFA60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8209D6A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820efa60
	ctx.lr = 0x8209D6B8;
	sub_820EFA60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8209D6C8:
	// bl 0x821882d0
	ctx.lr = 0x8209D6CC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d860
	if (ctx.cr6.eq) goto loc_8209D860;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8209d860
	if (ctx.cr6.eq) goto loc_8209D860;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209d7e4
	if (ctx.cr6.eq) goto loc_8209D7E4;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209d7e4
	if (ctx.cr6.eq) goto loc_8209D7E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ef360
	ctx.lr = 0x8209D708;
	sub_820EF360(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lfs f31,9860(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9860);
	ctx.f31.f64 = double(temp.f32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82096ec8
	ctx.lr = 0x8209D74C;
	sub_82096EC8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820efa60
	ctx.lr = 0x8209D760;
	sub_820EFA60(ctx, base);
	// lbz r4,1(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f10,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82096ec8
	ctx.lr = 0x8209D798;
	sub_82096EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82093478
	ctx.lr = 0x8209D7A0;
	sub_82093478(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d860
	if (ctx.cr6.eq) goto loc_8209D860;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,9856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9856);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r9,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r9.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8209D7E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ef360
	ctx.lr = 0x8209D7F4;
	sub_820EF360(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lfs f0,9860(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9860);
	ctx.f0.f64 = double(temp.f32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_8209D830:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820efa60
	ctx.lr = 0x8209D83C;
	sub_820EFA60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82093478
	ctx.lr = 0x8209D844;
	sub_82093478(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209d860
	if (ctx.cr6.eq) goto loc_8209D860;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r8,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r8.u16);
loc_8209D860:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8209D870"))) PPC_WEAK_FUNC(sub_8209D870);
PPC_FUNC_IMPL(__imp__sub_8209D870) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209d8a4
	if (ctx.cr6.eq) goto loc_8209D8A4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209d8a4
	if (ctx.cr6.eq) goto loc_8209D8A4;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// ori r4,r11,32768
	ctx.r4.u64 = ctx.r11.u64 | 32768;
loc_8209D8A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820e75b8
	ctx.lr = 0x8209D8B4;
	sub_820E75B8(ctx, base);
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

__attribute__((alias("__imp__sub_8209D8C8"))) PPC_WEAK_FUNC(sub_8209D8C8);
PPC_FUNC_IMPL(__imp__sub_8209D8C8) {
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
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// beq cr6,0x8209d90c
	if (ctx.cr6.eq) goto loc_8209D90C;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209d90c
	if (ctx.cr6.eq) goto loc_8209D90C;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// ori r4,r10,32768
	ctx.r4.u64 = ctx.r10.u64 | 32768;
loc_8209D90C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820e75b8
	ctx.lr = 0x8209D91C;
	sub_820E75B8(ctx, base);
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

__attribute__((alias("__imp__sub_8209D930"))) PPC_WEAK_FUNC(sub_8209D930);
PPC_FUNC_IMPL(__imp__sub_8209D930) {
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
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209d968
	if (ctx.cr6.eq) goto loc_8209D968;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209d968
	if (ctx.cr6.eq) goto loc_8209D968;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// ori r4,r10,32768
	ctx.r4.u64 = ctx.r10.u64 | 32768;
loc_8209D968:
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x820e75b8
	ctx.lr = 0x8209D97C;
	sub_820E75B8(ctx, base);
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

__attribute__((alias("__imp__sub_8209D990"))) PPC_WEAK_FUNC(sub_8209D990);
PPC_FUNC_IMPL(__imp__sub_8209D990) {
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
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// beq cr6,0x8209d9d4
	if (ctx.cr6.eq) goto loc_8209D9D4;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209d9d4
	if (ctx.cr6.eq) goto loc_8209D9D4;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// ori r4,r10,32768
	ctx.r4.u64 = ctx.r10.u64 | 32768;
loc_8209D9D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// bl 0x820e75b8
	ctx.lr = 0x8209D9E4;
	sub_820E75B8(ctx, base);
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

__attribute__((alias("__imp__sub_8209D9F8"))) PPC_WEAK_FUNC(sub_8209D9F8);
PPC_FUNC_IMPL(__imp__sub_8209D9F8) {
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
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// beq cr6,0x8209da3c
	if (ctx.cr6.eq) goto loc_8209DA3C;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209da3c
	if (ctx.cr6.eq) goto loc_8209DA3C;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// ori r4,r10,32768
	ctx.r4.u64 = ctx.r10.u64 | 32768;
loc_8209DA3C:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// bl 0x820e75b8
	ctx.lr = 0x8209DA50;
	sub_820E75B8(ctx, base);
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

__attribute__((alias("__imp__sub_8209DA64"))) PPC_WEAK_FUNC(sub_8209DA64);
PPC_FUNC_IMPL(__imp__sub_8209DA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209DA68"))) PPC_WEAK_FUNC(sub_8209DA68);
PPC_FUNC_IMPL(__imp__sub_8209DA68) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209da94
	if (ctx.cr6.eq) goto loc_8209DA94;
	// lwz r11,1580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209da94
	if (ctx.cr6.eq) goto loc_8209DA94;
	// li r4,2080
	ctx.r4.s64 = 2080;
	// bl 0x820f03b0
	ctx.lr = 0x8209DA94;
	sub_820F03B0(ctx, base);
loc_8209DA94:
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

__attribute__((alias("__imp__sub_8209DAA8"))) PPC_WEAK_FUNC(sub_8209DAA8);
PPC_FUNC_IMPL(__imp__sub_8209DAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8209DAB0;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209dc3c
	if (ctx.cr6.eq) goto loc_8209DC3C;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r9,1360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r28,3(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 | ctx.r10.u64;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8209db08
	if (!ctx.cr6.eq) goto loc_8209DB08;
	// lwz r11,1364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8209db08
	if (!ctx.cr6.eq) goto loc_8209DB08;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r28,6(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// or r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_8209DB08:
	// cmpwi cr6,r27,2050
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2050, ctx.xer);
	// bne cr6,0x8209db7c
	if (!ctx.cr6.eq) goto loc_8209DB7C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8209db7c
	if (!ctx.cr6.eq) goto loc_8209DB7C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,1936(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// li r8,2050
	ctx.r8.s64 = 2050;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,176(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2656(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2656);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f11,48(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 48, temp.u32);
	// lfs f10,56(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,2664(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2664);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f8,56(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 56, temp.u32);
	// stfs f0,10960(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 10960, temp.u32);
	// stfs f0,10968(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 10968, temp.u32);
	// stw r8,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r8.u32);
	// stw r7,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r7.u32);
	// bl 0x820b19c8
	ctx.lr = 0x8209DB6C;
	sub_820B19C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8209DB7C:
	// lwz r25,1936(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,1932(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lwz r24,84(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,1028(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1028);
	// lfs f1,9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f1.f64 = double(temp.f32);
	// lhz r29,28(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 28);
	// bl 0x820ef360
	ctx.lr = 0x8209DBA0;
	sub_820EF360(ctx, base);
	// lwz r8,176(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 176);
	// lfs f0,2656(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2656);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f13,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,48(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// lfs f11,56(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,2664(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2664);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stfs f9,56(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfs f31,10960(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 10960, temp.u32);
	// stfs f31,10968(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 10968, temp.u32);
	// bl 0x820f03a8
	ctx.lr = 0x8209DBEC;
	sub_820F03A8(ctx, base);
	// stfs f31,2116(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2116, temp.u32);
	// stfs f31,2152(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 2152, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8209dc3c
	if (ctx.cr6.eq) goto loc_8209DC3C;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,9860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9860);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82096ec8
	ctx.lr = 0x8209DC28;
	sub_82096EC8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820efa60
	ctx.lr = 0x8209DC3C;
	sub_820EFA60(ctx, base);
loc_8209DC3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8209DC4C"))) PPC_WEAK_FUNC(sub_8209DC4C);
PPC_FUNC_IMPL(__imp__sub_8209DC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209DC50"))) PPC_WEAK_FUNC(sub_8209DC50);
PPC_FUNC_IMPL(__imp__sub_8209DC50) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r4,17985
	ctx.r4.s64 = 1178664960;
	// ori r4,r4,17477
	ctx.r4.u64 = ctx.r4.u64 | 17477;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x8209DC7C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209dcc8
	if (ctx.cr6.eq) goto loc_8209DCC8;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209dcc8
	if (ctx.cr6.eq) goto loc_8209DCC8;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8209dca8
	if (!ctx.cr6.lt) goto loc_8209DCA8;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8209dcb4
	goto loc_8209DCB4;
loc_8209DCA8:
	// cmpwi cr6,r7,255
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 255, ctx.xer);
	// ble cr6,0x8209dcb4
	if (!ctx.cr6.gt) goto loc_8209DCB4;
	// li r7,255
	ctx.r7.s64 = 255;
loc_8209DCB4:
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r6,3(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// bl 0x820f28e0
	ctx.lr = 0x8209DCC8;
	sub_820F28E0(ctx, base);
loc_8209DCC8:
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

__attribute__((alias("__imp__sub_8209DCE0"))) PPC_WEAK_FUNC(sub_8209DCE0);
PPC_FUNC_IMPL(__imp__sub_8209DCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8209DCE8;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249908
	ctx.lr = 0x8209DCF0;
	sub_82249908(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r6,5(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r7,6(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lfs f26,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f26.f64 = double(temp.f32);
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
	// lfs f31,8616(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8616);
	ctx.f31.f64 = double(temp.f32);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lwz r28,40(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f29,f10
	ctx.f29.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f30,f26
	ctx.cr6.compare(ctx.f30.f64, ctx.f26.f64);
	// frsp f28,f9
	ctx.f28.f64 = double(float(ctx.f9.f64));
	// beq cr6,0x8209ddc8
	if (ctx.cr6.eq) goto loc_8209DDC8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f30,f30,f31
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// bl 0x82097388
	ctx.lr = 0x8209DD9C;
	sub_82097388(ctx, base);
	// lfs f13,420(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x8209ddb4
	if (!ctx.cr6.lt) goto loc_8209DDB4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8209DDB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8209ddc8
	if (!ctx.cr6.lt) goto loc_8209DDC8;
	// fsubs f30,f1,f13
	ctx.f30.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
loc_8209DDC8:
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,18543
	ctx.r4.u64 = ctx.r4.u64 | 18543;
	// bl 0x821882d0
	ctx.lr = 0x8209DDD8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209dde8
	if (ctx.cr6.eq) goto loc_8209DDE8;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209ddec
	goto loc_8209DDEC;
loc_8209DDE8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8209DDEC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,404(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 404);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821875f8
	ctx.lr = 0x8209DDF8;
	sub_821875F8(ctx, base);
	// fmuls f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f13,f28,f31
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f26,108(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x8209DE1C;
	sub_8208EA90(ctx, base);
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f12,416(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 416);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,420(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r28,416
	ctx.r30.s64 = ctx.r28.s64 + 416;
	// lfs f10,424(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lwz r9,432(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// fadds f29,f6,f12
	ctx.f29.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f25,f11,f5
	ctx.f25.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f24,f10,f4
	ctx.f24.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f7,f29
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f29.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f2,f9,f25
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f25.f64));
	// fsubs f1,f8,f24
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f24.f64));
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x8209de9c
	if (ctx.cr6.eq) goto loc_8209DE9C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_8209DE9C:
	// addi r29,r29,7
	ctx.r29.s64 = ctx.r29.s64 + 7;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r7,1(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// lbz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lfs f22,2140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	ctx.f22.f64 = double(temp.f32);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lfs f21,9860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9860);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,2132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2132);
	ctx.f20.f64 = double(temp.f32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// lfs f23,2136(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2136);
	ctx.f23.f64 = double(temp.f32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f21
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f21.f64));
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// ble cr6,0x8209def8
	if (!ctx.cr6.gt) goto loc_8209DEF8;
	// fsubs f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f23.f64));
	// b 0x8209df04
	goto loc_8209DF04;
loc_8209DEF8:
	// fcmpu cr6,f0,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// bge cr6,0x8209df04
	if (!ctx.cr6.lt) goto loc_8209DF04;
	// fadds f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f23.f64));
loc_8209DF04:
	// lfs f13,404(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// ble cr6,0x8209df1c
	if (!ctx.cr6.gt) goto loc_8209DF1C;
	// fsubs f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f23.f64));
	// b 0x8209df28
	goto loc_8209DF28;
loc_8209DF1C:
	// fcmpu cr6,f0,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// bge cr6,0x8209df28
	if (!ctx.cr6.lt) goto loc_8209DF28;
	// fadds f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f23.f64));
loc_8209DF28:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fneg f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x821875f8
	ctx.lr = 0x8209DF34;
	sub_821875F8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8208ea90
	ctx.lr = 0x8209DF40;
	sub_8208EA90(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f27,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8209dfc4
	if (ctx.cr6.eq) goto loc_8209DFC4;
	// stfs f29,0(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfs f31,160(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// fcmpu cr6,f30,f26
	ctx.cr6.compare(ctx.f30.f64, ctx.f26.f64);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfs f31,64(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfs f31,16(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// beq cr6,0x8209df94
	if (ctx.cr6.eq) goto loc_8209DF94;
	// stfs f25,420(r28)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r28.u32 + 420, temp.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfs f28,164(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfs f28,68(r10)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfs f28,20(r9)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
loc_8209DF94:
	// stfs f24,424(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r28.u32 + 424, temp.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfs f27,168(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfs f27,72(r10)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stfs f27,24(r9)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lbz r8,1(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r5,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r5.u16);
loc_8209DFC4:
	// lis r4,21299
	ctx.r4.s64 = 1395851264;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,19799
	ctx.r4.u64 = ctx.r4.u64 | 19799;
	// bl 0x821882d0
	ctx.lr = 0x8209DFD4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e024
	if (ctx.cr6.eq) goto loc_8209E024;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e024
	if (ctx.cr6.eq) goto loc_8209E024;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stfs f29,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fcmpu cr6,f30,f26
	ctx.cr6.compare(ctx.f30.f64, ctx.f26.f64);
	// stfs f31,160(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// stfs f31,64(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// beq cr6,0x8209e014
	if (ctx.cr6.eq) goto loc_8209E014;
	// stfs f25,420(r28)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r28.u32 + 420, temp.u32);
	// stfs f28,164(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// stfs f28,68(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f28,20(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_8209E014:
	// stfs f24,424(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r28.u32 + 424, temp.u32);
	// stfs f27,168(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stfs f27,72(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f27,24(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_8209E024:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f21
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f21.f64));
	// fcmpu cr6,f31,f22
	ctx.cr6.compare(ctx.f31.f64, ctx.f22.f64);
	// ble cr6,0x8209e05c
	if (!ctx.cr6.gt) goto loc_8209E05C;
	// fsubs f31,f31,f23
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f23.f64));
	// b 0x8209e068
	goto loc_8209E068;
loc_8209E05C:
	// fcmpu cr6,f31,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f20.f64);
	// bge cr6,0x8209e068
	if (!ctx.cr6.lt) goto loc_8209E068;
	// fadds f31,f31,f23
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f23.f64));
loc_8209E068:
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,21057
	ctx.r4.u64 = ctx.r4.u64 | 21057;
	// bl 0x821882d0
	ctx.lr = 0x8209E078;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e088
	if (ctx.cr6.eq) goto loc_8209E088;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209e08c
	goto loc_8209E08C;
loc_8209E088:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209E08C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820efa60
	ctx.lr = 0x8209E09C;
	sub_820EFA60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249954
	ctx.lr = 0x8209E0AC;
	sub_82249954(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8209E0B0"))) PPC_WEAK_FUNC(sub_8209E0B0);
PPC_FUNC_IMPL(__imp__sub_8209E0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r9,9868
	ctx.r8.s64 = ctx.r9.s64 + 9868;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// sth r10,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r10.u16);
	// sth r10,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r10.u16);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r11.u16);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// sth r11,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r11.u16);
	// sth r11,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r11.u16);
	// sth r11,46(r3)
	PPC_STORE_U16(ctx.r3.u32 + 46, ctx.r11.u16);
	// sth r11,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r11.u16);
	// stb r11,50(r3)
	PPC_STORE_U8(ctx.r3.u32 + 50, ctx.r11.u8);
	// stb r11,51(r3)
	PPC_STORE_U8(ctx.r3.u32 + 51, ctx.r11.u8);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stb r11,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r11.u8);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209E14C"))) PPC_WEAK_FUNC(sub_8209E14C);
PPC_FUNC_IMPL(__imp__sub_8209E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E150"))) PPC_WEAK_FUNC(sub_8209E150);
PPC_FUNC_IMPL(__imp__sub_8209E150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// lbz r10,18(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// stb r10,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r10.u8);
	// lbz r9,19(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// stb r9,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r9.u8);
	// lbz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// stb r8,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r8.u8);
	// lbz r7,21(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// stb r7,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r7.u8);
	// lbz r6,22(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 22);
	// stb r6,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r6.u8);
	// lbz r5,23(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 23);
	// stb r5,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r5.u8);
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// lbz r10,25(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// stb r10,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r10.u8);
	// lbz r9,26(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 26);
	// stb r9,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r9.u8);
	// lbz r8,27(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 27);
	// stb r8,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r8.u8);
	// lhz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 28);
	// sth r7,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r7.u16);
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// ld r6,48(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r6,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r6.u64);
	// ld r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r5,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r5.u64);
	// ld r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 64);
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// ld r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 72);
	// std r10,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r10.u64);
	// ld r9,80(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// std r9,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r9.u64);
	// ld r8,88(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 88);
	// std r8,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r8.u64);
	// ld r7,96(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 96);
	// std r7,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r7.u64);
	// ld r6,104(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 104);
	// std r6,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r6.u64);
	// ld r5,112(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 112);
	// std r5,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r5.u64);
	// ld r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 120);
	// std r11,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r11.u64);
	// ld r10,128(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 128);
	// std r10,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.r10.u64);
	// ld r9,136(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 136);
	// std r9,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.r9.u64);
	// lwz r8,144(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// stw r8,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r8.u32);
	// lwz r7,148(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// stw r7,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r7.u32);
	// lwz r6,152(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// stw r6,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209E234"))) PPC_WEAK_FUNC(sub_8209E234);
PPC_FUNC_IMPL(__imp__sub_8209E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E238"))) PPC_WEAK_FUNC(sub_8209E238);
PPC_FUNC_IMPL(__imp__sub_8209E238) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,9868
	ctx.r9.s64 = ctx.r10.s64 + 9868;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8209e2b0
	if (ctx.cr6.eq) goto loc_8209E2B0;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209e2a8
	if (ctx.cr6.eq) goto loc_8209E2A8;
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
	ctx.lr = 0x8209E28C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8209E2A8:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8209E2B0;
	sub_82183E40(ctx, base);
loc_8209E2B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209E2CC"))) PPC_WEAK_FUNC(sub_8209E2CC);
PPC_FUNC_IMPL(__imp__sub_8209E2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E2D0"))) PPC_WEAK_FUNC(sub_8209E2D0);
PPC_FUNC_IMPL(__imp__sub_8209E2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x8209E2D8;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8215c078
	ctx.lr = 0x8209E2E4;
	sub_8215C078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8209E2EC;
	sub_82183078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8209E2F8;
	sub_821837D0(ctx, base);
	// lwz r6,20(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r9,56(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8209e508
	if (ctx.cr6.eq) goto loc_8209E508;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8209e350
	if (!ctx.cr6.gt) goto loc_8209E350;
	// li r11,0
	ctx.r11.s64 = 0;
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8209E324:
	// lwz r8,152(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 152);
	// lhz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// rlwinm r4,r5,0,20,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209e33c
	if (ctx.cr6.eq) goto loc_8209E33C;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
loc_8209E33C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x8209e324
	if (ctx.cr6.lt) goto loc_8209E324;
loc_8209E350:
	// cmpw cr6,r22,r6
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8209e508
	if (ctx.cr6.eq) goto loc_8209E508;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8209e4c0
	if (ctx.cr6.eq) goto loc_8209E4C0;
	// lis r11,409
	ctx.r11.s64 = 26804224;
	// ori r10,r11,39321
	ctx.r10.u64 = ctx.r11.u64 | 39321;
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8209e390
	if (ctx.cr6.gt) goto loc_8209E390;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,-17
	ctx.r10.s64 = -17;
	// add r9,r22,r11
	ctx.r9.u64 = ctx.r22.u64 + ctx.r11.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x8209e394
	if (!ctx.cr6.gt) goto loc_8209E394;
loc_8209E390:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8209E394:
	// bl 0x82183850
	ctx.lr = 0x8209E398;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8209e3b0
	if (ctx.cr6.eq) goto loc_8209E3B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x8209E3AC;
	sub_82183448(ctx, base);
	// b 0x8209e3bc
	goto loc_8209E3BC;
loc_8209E3B0:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8209E3BC;
	sub_821845A0(ctx, base);
loc_8209E3BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e3f4
	if (ctx.cr6.eq) goto loc_8209E3F4;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// addic. r31,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r31.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x8209e3ec
	if (ctx.cr0.lt) goto loc_8209E3EC;
loc_8209E3D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b2088
	ctx.lr = 0x8209E3E0;
	sub_820B2088(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x8209e3d8
	if (!ctx.cr0.lt) goto loc_8209E3D8;
loc_8209E3EC:
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// b 0x8209e3f8
	goto loc_8209E3F8;
loc_8209E3F4:
	// li r23,0
	ctx.r23.s64 = 0;
loc_8209E3F8:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8209e4c0
	if (!ctx.cr6.gt) goto loc_8209E4C0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r23,148
	ctx.r31.s64 = ctx.r23.s64 + 148;
loc_8209E41C:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// add r4,r25,r11
	ctx.r4.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r11,152(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// lhz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r30,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8209e4ac
	if (!ctx.cr6.eq) goto loc_8209E4AC;
	// lwz r11,148(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,-148
	ctx.r3.s64 = ctx.r31.s64 + -148;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// bl 0x8209e150
	ctx.lr = 0x8209E458;
	sub_8209E150(ctx, base);
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// stw r6,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r6.u32);
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r31,r31,160
	ctx.r31.s64 = ctx.r31.s64 + 160;
	// sth r30,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r30.u16);
loc_8209E4AC:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,160
	ctx.r25.s64 = ctx.r25.s64 + 160;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8209e41c
	if (ctx.cr6.lt) goto loc_8209E41C;
loc_8209E4C0:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e500
	if (ctx.cr6.eq) goto loc_8209E500;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209e4f8
	if (ctx.cr6.eq) goto loc_8209E4F8;
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
	ctx.lr = 0x8209E4F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8209e500
	goto loc_8209E500;
loc_8209E4F8:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8209E500;
	sub_82183E40(ctx, base);
loc_8209E500:
	// stw r23,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r23.u32);
	// stw r22,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r22.u32);
loc_8209E508:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821837d0
	ctx.lr = 0x8209E510;
	sub_821837D0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_8209E518"))) PPC_WEAK_FUNC(sub_8209E518);
PPC_FUNC_IMPL(__imp__sub_8209E518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8209E520;
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
	// beq cr6,0x8209e590
	if (ctx.cr6.eq) goto loc_8209E590;
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// addi r29,r3,-16
	ctx.r29.s64 = ctx.r3.s64 + -16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x8209e56c
	if (ctx.cr0.lt) goto loc_8209E56C;
loc_8209E558:
	// addi r30,r30,-160
	ctx.r30.s64 = ctx.r30.s64 + -160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b2078
	ctx.lr = 0x8209E564;
	sub_820B2078(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8209e558
	if (!ctx.cr0.lt) goto loc_8209E558;
loc_8209E56C:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e584
	if (ctx.cr6.eq) goto loc_8209E584;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8209E584;
	sub_82183E40(ctx, base);
loc_8209E584:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8209E590:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b2078
	ctx.lr = 0x8209E598;
	sub_820B2078(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e5b0
	if (ctx.cr6.eq) goto loc_8209E5B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8209E5B0;
	sub_82183E40(ctx, base);
loc_8209E5B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8209E5BC"))) PPC_WEAK_FUNC(sub_8209E5BC);
PPC_FUNC_IMPL(__imp__sub_8209E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E5C0"))) PPC_WEAK_FUNC(sub_8209E5C0);
PPC_FUNC_IMPL(__imp__sub_8209E5C0) {
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
	// bl 0x8209e238
	ctx.lr = 0x8209E5E0;
	sub_8209E238(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e5fc
	if (ctx.cr6.eq) goto loc_8209E5FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8209E5F8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8209E5FC:
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

__attribute__((alias("__imp__sub_8209E614"))) PPC_WEAK_FUNC(sub_8209E614);
PPC_FUNC_IMPL(__imp__sub_8209E614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E618"))) PPC_WEAK_FUNC(sub_8209E618);
PPC_FUNC_IMPL(__imp__sub_8209E618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8209E620;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215c078
	ctx.lr = 0x8209E62C;
	sub_8215C078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8209E634;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8209E640;
	sub_821837D0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8209e65c
	if (ctx.cr6.eq) goto loc_8209E65C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8209E650;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8209E65C:
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82080000
	ctx.lr = 0x8209E664;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e68c
	if (ctx.cr6.eq) goto loc_8209E68C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820b2140
	ctx.lr = 0x8209E674;
	sub_820B2140(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8209E680;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8209E68C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8209E698;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8209E6A4"))) PPC_WEAK_FUNC(sub_8209E6A4);
PPC_FUNC_IMPL(__imp__sub_8209E6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E6A8"))) PPC_WEAK_FUNC(sub_8209E6A8);
PPC_FUNC_IMPL(__imp__sub_8209E6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,9912
	ctx.r9.s64 = ctx.r11.s64 + 9912;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209E6C8"))) PPC_WEAK_FUNC(sub_8209E6C8);
PPC_FUNC_IMPL(__imp__sub_8209E6C8) {
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
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// lwz r3,1964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// bl 0x821882d0
	ctx.lr = 0x8209E6E4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e700
	if (ctx.cr6.eq) goto loc_8209E700;
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
loc_8209E700:
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

__attribute__((alias("__imp__sub_8209E714"))) PPC_WEAK_FUNC(sub_8209E714);
PPC_FUNC_IMPL(__imp__sub_8209E714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E718"))) PPC_WEAK_FUNC(sub_8209E718);
PPC_FUNC_IMPL(__imp__sub_8209E718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8209E720;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
loc_8209E730:
	// lwz r3,-4900(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4900);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8209e730
	if (!ctx.cr0.eq) goto loc_8209E730;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8209E75C"))) PPC_WEAK_FUNC(sub_8209E75C);
PPC_FUNC_IMPL(__imp__sub_8209E75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209E760"))) PPC_WEAK_FUNC(sub_8209E760);
PPC_FUNC_IMPL(__imp__sub_8209E760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8209E768;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82225508
	ctx.lr = 0x8209E77C;
	sub_82225508(ctx, base);
	// lis r22,-32178
	ctx.r22.s64 = -2108817408;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209e794
	if (ctx.cr6.eq) goto loc_8209E794;
	// lwz r3,-740(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -740);
	// bl 0x822254b8
	ctx.lr = 0x8209E790;
	sub_822254B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8209E794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218fb20
	ctx.lr = 0x8209E79C;
	sub_8218FB20(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lwz r3,-8548(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8548);
	// stb r31,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r31.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e7b8
	if (ctx.cr6.eq) goto loc_8209E7B8;
	// bl 0x820b3278
	ctx.lr = 0x8209E7B8;
	sub_820B3278(ctx, base);
loc_8209E7B8:
	// bl 0x8208ea08
	ctx.lr = 0x8209E7BC;
	sub_8208EA08(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r4,21059
	ctx.r4.s64 = 1380122624;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x8209E7D4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e7e4
	if (ctx.cr6.eq) goto loc_8209E7E4;
	// lwz r25,24(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209e7e8
	goto loc_8209E7E8;
loc_8209E7E4:
	// li r25,0
	ctx.r25.s64 = 0;
loc_8209E7E8:
	// bl 0x820f0ef0
	ctx.lr = 0x8209E7EC;
	sub_820F0EF0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r24,r11,-5052
	ctx.r24.s64 = ctx.r11.s64 + -5052;
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e838
	if (ctx.cr6.eq) goto loc_8209E838;
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// lwz r3,1964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// bl 0x821882d0
	ctx.lr = 0x8209E814;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e838
	if (ctx.cr6.eq) goto loc_8209E838;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e838
	if (ctx.cr6.eq) goto loc_8209E838;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209E838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209E838:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8209e8cc
	if (ctx.cr6.eq) goto loc_8209E8CC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8209e8cc
	if (ctx.cr6.eq) goto loc_8209E8CC;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// li r28,9
	ctx.r28.s64 = 9;
	// li r27,5
	ctx.r27.s64 = 5;
loc_8209E854:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8209e8c0
	if (ctx.cr6.eq) goto loc_8209E8C0;
	// addi r31,r30,1248
	ctx.r31.s64 = ctx.r30.s64 + 1248;
	// lis r4,21061
	ctx.r4.s64 = 1380253696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// bl 0x821882d0
	ctx.lr = 0x8209E874;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e890
	if (ctx.cr6.eq) goto loc_8209E890;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209e890
	if (ctx.cr6.eq) goto loc_8209E890;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820f09e8
	ctx.lr = 0x8209E890;
	sub_820F09E8(ctx, base);
loc_8209E890:
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// bl 0x821882d0
	ctx.lr = 0x8209E8A0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e8bc
	if (ctx.cr6.eq) goto loc_8209E8BC;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209e8bc
	if (ctx.cr6.eq) goto loc_8209E8BC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820f09e8
	ctx.lr = 0x8209E8BC;
	sub_820F09E8(ctx, base);
loc_8209E8BC:
	// stw r27,1952(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1952, ctx.r27.u32);
loc_8209E8C0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8209e854
	if (!ctx.cr0.eq) goto loc_8209E854;
loc_8209E8CC:
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// lis r29,-32185
	ctx.r29.s64 = -2109276160;
	// lwz r3,-8552(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e908
	if (ctx.cr6.eq) goto loc_8209E908;
	// lwz r11,-18236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e908
	if (ctx.cr6.eq) goto loc_8209E908;
	// bl 0x820b2c00
	ctx.lr = 0x8209E8F0;
	sub_820B2C00(ctx, base);
	// lwz r3,-18236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18236);
	// bl 0x82094d68
	ctx.lr = 0x8209E8F8;
	sub_82094D68(ctx, base);
	// lwz r3,-18236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18236);
	// bl 0x82094d58
	ctx.lr = 0x8209E900;
	sub_82094D58(ctx, base);
	// lwz r3,-8552(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8552);
	// bl 0x820b2bd8
	ctx.lr = 0x8209E908;
	sub_820B2BD8(ctx, base);
loc_8209E908:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x8209e924
	if (!ctx.cr6.eq) goto loc_8209E924;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e924
	if (ctx.cr6.eq) goto loc_8209E924;
	// bl 0x82128f58
	ctx.lr = 0x8209E924;
	sub_82128F58(ctx, base);
loc_8209E924:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x8209e93c
	if (!ctx.cr6.eq) goto loc_8209E93C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209E93C:
	// lis r4,21065
	ctx.r4.s64 = 1380515840;
	// ori r4,r4,20039
	ctx.r4.u64 = ctx.r4.u64 | 20039;
	// bl 0x821882d0
	ctx.lr = 0x8209E948;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209e970
	if (ctx.cr6.eq) goto loc_8209E970;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e970
	if (ctx.cr6.eq) goto loc_8209E970;
	// lwz r10,1248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1248);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209E970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209E970:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_8209E97C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209e994
	if (ctx.cr6.eq) goto loc_8209E994;
	// addi r3,r11,1440
	ctx.r3.s64 = ctx.r11.s64 + 1440;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820981b8
	ctx.lr = 0x8209E994;
	sub_820981B8(ctx, base);
loc_8209E994:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r24,36
	ctx.r11.s64 = ctx.r24.s64 + 36;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8209e97c
	if (ctx.cr6.lt) goto loc_8209E97C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,-1512(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1512);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209e9e8
	if (ctx.cr6.eq) goto loc_8209E9E8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,-8556(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8556);
	// bl 0x8212d138
	ctx.lr = 0x8209E9C8;
	sub_8212D138(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212d090
	ctx.lr = 0x8209E9D8;
	sub_8212D090(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8209E9E8;
	sub_8209EDA0(ctx, base);
loc_8209E9E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820b3e00
	ctx.lr = 0x8209E9F0;
	sub_820B3E00(ctx, base);
	// bl 0x82213448
	ctx.lr = 0x8209E9F4;
	sub_82213448(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ea14
	if (ctx.cr6.eq) goto loc_8209EA14;
	// bl 0x82213448
	ctx.lr = 0x8209EA00;
	sub_82213448(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209EA14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209EA14:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-18236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18236);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82094db0
	ctx.lr = 0x8209EA24;
	sub_82094DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-18236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18236);
	// bl 0x82094dd0
	ctx.lr = 0x8209EA30;
	sub_82094DD0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8552(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8552);
	// bl 0x820b2bc0
	ctx.lr = 0x8209EA3C;
	sub_820B2BC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8552(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8552);
	// bl 0x820b2ba8
	ctx.lr = 0x8209EA48;
	sub_820B2BA8(ctx, base);
	// bl 0x82225508
	ctx.lr = 0x8209EA4C;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209ea60
	if (ctx.cr6.eq) goto loc_8209EA60;
	// lwz r11,-740(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -740);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 740, ctx.r10.u32);
loc_8209EA60:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8209EA6C"))) PPC_WEAK_FUNC(sub_8209EA6C);
PPC_FUNC_IMPL(__imp__sub_8209EA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209EA70"))) PPC_WEAK_FUNC(sub_8209EA70);
PPC_FUNC_IMPL(__imp__sub_8209EA70) {
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
	// bl 0x82220c48
	ctx.lr = 0x8209EA84;
	sub_82220C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209eb24
	if (ctx.cr6.eq) goto loc_8209EB24;
	// bl 0x82225508
	ctx.lr = 0x8209EA90;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209eb24
	if (ctx.cr6.eq) goto loc_8209EB24;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// bl 0x822276f8
	ctx.lr = 0x8209EAA4;
	sub_822276F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209eb24
	if (ctx.cr6.eq) goto loc_8209EB24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821636d8
	ctx.lr = 0x8209EAB4;
	sub_821636D8(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// bl 0x8209eda0
	ctx.lr = 0x8209EACC;
	sub_8209EDA0(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x8209EAD0;
	sub_8215BEC8(ctx, base);
	// lbz r11,71(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209eb04
	if (!ctx.cr6.eq) goto loc_8209EB04;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// bl 0x820a04b8
	ctx.lr = 0x8209EAE8;
	sub_820A04B8(ctx, base);
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209eb04
	if (ctx.cr6.eq) goto loc_8209EB04;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-5052
	ctx.r4.s64 = ctx.r11.s64 + -5052;
	// bl 0x821281e0
	ctx.lr = 0x8209EB04;
	sub_821281E0(ctx, base);
loc_8209EB04:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8209e760
	ctx.lr = 0x8209EB0C;
	sub_8209E760(ctx, base);
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
loc_8209EB24:
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

__attribute__((alias("__imp__sub_8209EB3C"))) PPC_WEAK_FUNC(sub_8209EB3C);
PPC_FUNC_IMPL(__imp__sub_8209EB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209EB40"))) PPC_WEAK_FUNC(sub_8209EB40);
PPC_FUNC_IMPL(__imp__sub_8209EB40) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8209eb74
	if (!ctx.cr6.eq) goto loc_8209EB74;
	// bl 0x8209ea70
	ctx.lr = 0x8209EB64;
	sub_8209EA70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209eb74
	if (ctx.cr6.eq) goto loc_8209EB74;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8209EB74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209EB88"))) PPC_WEAK_FUNC(sub_8209EB88);
PPC_FUNC_IMPL(__imp__sub_8209EB88) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r30,r11,3312
	ctx.r30.s64 = ctx.r11.s64 + 3312;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82183e40
	ctx.lr = 0x8209EBB8;
	sub_82183E40(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82183e40
	ctx.lr = 0x8209EBC8;
	sub_82183E40(ctx, base);
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

__attribute__((alias("__imp__sub_8209EBE0"))) PPC_WEAK_FUNC(sub_8209EBE0);
PPC_FUNC_IMPL(__imp__sub_8209EBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8209EBE8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r30,r11,3312
	ctx.r30.s64 = ctx.r11.s64 + 3312;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// bl 0x82183850
	ctx.lr = 0x8209EC10;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8209ec28
	if (ctx.cr6.eq) goto loc_8209EC28;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8209EC24;
	sub_82183448(ctx, base);
	// b 0x8209ec30
	goto loc_8209EC30;
loc_8209EC28:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8209EC30;
	sub_821845A0(ctx, base);
loc_8209EC30:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// bl 0x82183850
	ctx.lr = 0x8209EC44;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8209ec68
	if (ctx.cr6.eq) goto loc_8209EC68;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8209EC58;
	sub_82183448(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8209EC68:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8209EC70;
	sub_821845A0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8209EC80"))) PPC_WEAK_FUNC(sub_8209EC80);
PPC_FUNC_IMPL(__imp__sub_8209EC80) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8209ecdc
	if (ctx.cr6.eq) goto loc_8209ECDC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r30,r4,44
	ctx.r30.s64 = ctx.r4.s64 * 44;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x820b6358
	ctx.lr = 0x8209ECBC;
	sub_820B6358(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209ecd4
	if (!ctx.cr6.eq) goto loc_8209ECD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x820b6740
	ctx.lr = 0x8209ECD0;
	sub_820B6740(ctx, base);
	// b 0x8209ecf4
	goto loc_8209ECF4;
loc_8209ECD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8209ecf4
	goto loc_8209ECF4;
loc_8209ECDC:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820b5b10
	ctx.lr = 0x8209ECF4;
	sub_820B5B10(ctx, base);
loc_8209ECF4:
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

__attribute__((alias("__imp__sub_8209ED0C"))) PPC_WEAK_FUNC(sub_8209ED0C);
PPC_FUNC_IMPL(__imp__sub_8209ED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209ED10"))) PPC_WEAK_FUNC(sub_8209ED10);
PPC_FUNC_IMPL(__imp__sub_8209ED10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8209ed34
	if (ctx.cr6.eq) goto loc_8209ED34;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x820b6370
	sub_820B6370(ctx, base);
	return;
loc_8209ED34:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x820b5be0
	sub_820B5BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209ED4C"))) PPC_WEAK_FUNC(sub_8209ED4C);
PPC_FUNC_IMPL(__imp__sub_8209ED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209ED50"))) PPC_WEAK_FUNC(sub_8209ED50);
PPC_FUNC_IMPL(__imp__sub_8209ED50) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209ed68
	if (ctx.cr6.eq) goto loc_8209ED68;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8209ED68:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209ED78"))) PPC_WEAK_FUNC(sub_8209ED78);
PPC_FUNC_IMPL(__imp__sub_8209ED78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209ED84"))) PPC_WEAK_FUNC(sub_8209ED84);
PPC_FUNC_IMPL(__imp__sub_8209ED84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209ED88"))) PPC_WEAK_FUNC(sub_8209ED88);
PPC_FUNC_IMPL(__imp__sub_8209ED88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209EDA0"))) PPC_WEAK_FUNC(sub_8209EDA0);
PPC_FUNC_IMPL(__imp__sub_8209EDA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209EDA4"))) PPC_WEAK_FUNC(sub_8209EDA4);
PPC_FUNC_IMPL(__imp__sub_8209EDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209EDA8"))) PPC_WEAK_FUNC(sub_8209EDA8);
PPC_FUNC_IMPL(__imp__sub_8209EDA8) {
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
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,116
	ctx.r11.s64 = ctx.r3.s64 + 116;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8209EDD0:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8209edd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209EDD0;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r11,r31,212
	ctx.r11.s64 = ctx.r31.s64 + 212;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8209EDE8:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8209ede8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209EDE8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bl 0x822aa648
	ctx.lr = 0x8209EE18;
	sub_822AA648(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x822aa648
	ctx.lr = 0x8209EE24;
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

__attribute__((alias("__imp__sub_8209EE3C"))) PPC_WEAK_FUNC(sub_8209EE3C);
PPC_FUNC_IMPL(__imp__sub_8209EE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209EE40"))) PPC_WEAK_FUNC(sub_8209EE40);
PPC_FUNC_IMPL(__imp__sub_8209EE40) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209EE5C"))) PPC_WEAK_FUNC(sub_8209EE5C);
PPC_FUNC_IMPL(__imp__sub_8209EE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209EE60"))) PPC_WEAK_FUNC(sub_8209EE60);
PPC_FUNC_IMPL(__imp__sub_8209EE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8209EE68;
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
	// beq cr6,0x8209eed0
	if (ctx.cr6.eq) goto loc_8209EED0;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 * 44;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x8209eeac
	if (ctx.cr0.lt) goto loc_8209EEAC;
loc_8209EE98:
	// addi r30,r30,-44
	ctx.r30.s64 = ctx.r30.s64 + -44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b62c0
	ctx.lr = 0x8209EEA4;
	sub_820B62C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8209ee98
	if (!ctx.cr0.lt) goto loc_8209EE98;
loc_8209EEAC:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209eec4
	if (ctx.cr6.eq) goto loc_8209EEC4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8209EEC4;
	sub_82183E40(ctx, base);
loc_8209EEC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8209EED0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b62c0
	ctx.lr = 0x8209EED8;
	sub_820B62C0(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209eef0
	if (ctx.cr6.eq) goto loc_8209EEF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8209EEF0;
	sub_82183E40(ctx, base);
loc_8209EEF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8209EEFC"))) PPC_WEAK_FUNC(sub_8209EEFC);
PPC_FUNC_IMPL(__imp__sub_8209EEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209EF00"))) PPC_WEAK_FUNC(sub_8209EF00);
PPC_FUNC_IMPL(__imp__sub_8209EF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8209EF08;
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
	// beq cr6,0x8209ef78
	if (ctx.cr6.eq) goto loc_8209EF78;
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
	// blt 0x8209ef54
	if (ctx.cr0.lt) goto loc_8209EF54;
loc_8209EF40:
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b5a78
	ctx.lr = 0x8209EF4C;
	sub_820B5A78(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8209ef40
	if (!ctx.cr0.lt) goto loc_8209EF40;
loc_8209EF54:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209ef6c
	if (ctx.cr6.eq) goto loc_8209EF6C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8209EF6C;
	sub_82183E40(ctx, base);
loc_8209EF6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8209EF78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b5a78
	ctx.lr = 0x8209EF80;
	sub_820B5A78(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209ef98
	if (ctx.cr6.eq) goto loc_8209EF98;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8209EF98;
	sub_82183E40(ctx, base);
loc_8209EF98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8209EFA4"))) PPC_WEAK_FUNC(sub_8209EFA4);
PPC_FUNC_IMPL(__imp__sub_8209EFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209EFA8"))) PPC_WEAK_FUNC(sub_8209EFA8);
PPC_FUNC_IMPL(__imp__sub_8209EFA8) {
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
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8209eff8
	if (ctx.cr6.eq) goto loc_8209EFF8;
	// addi r11,r4,18
	ctx.r11.s64 = ctx.r4.s64 + 18;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// bl 0x82181040
	ctx.lr = 0x8209EFE8;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209eff8
	if (ctx.cr6.eq) goto loc_8209EFF8;
	// li r4,66
	ctx.r4.s64 = 66;
	// bl 0x82181370
	ctx.lr = 0x8209EFF8;
	sub_82181370(ctx, base);
loc_8209EFF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209F008"))) PPC_WEAK_FUNC(sub_8209F008);
PPC_FUNC_IMPL(__imp__sub_8209F008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8209F010;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// li r10,100
	ctx.r10.s64 = 100;
	// ori r9,r11,34079
	ctx.r9.u64 = ctx.r11.u64 | 34079;
	// divwu r29,r5,r10
	ctx.r29.u32 = ctx.r5.u32 / ctx.r10.u32;
	// mulhwu r8,r5,r9
	ctx.r8.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mulli r6,r7,100
	ctx.r6.s64 = ctx.r7.s64 * 100;
	// cmpwi cr6,r29,225
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 225, ctx.xer);
	// subf r28,r6,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r6.s64;
	// bge cr6,0x8209f0b8
	if (!ctx.cr6.lt) goto loc_8209F0B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82230b90
	ctx.lr = 0x8209F048;
	sub_82230B90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f0b8
	if (ctx.cr6.eq) goto loc_8209F0B8;
	// lbz r11,412(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f0b8
	if (ctx.cr6.eq) goto loc_8209F0B8;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,-8964(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8964);
	// bl 0x82230d40
	ctx.lr = 0x8209F078;
	sub_82230D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209f090
	if (ctx.cr6.eq) goto loc_8209F090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230dd8
	ctx.lr = 0x8209F088;
	sub_82230DD8(ctx, base);
	// bl 0x82164c98
	ctx.lr = 0x8209F08C;
	sub_82164C98(ctx, base);
	// b 0x8209f0ac
	goto loc_8209F0AC;
loc_8209F090:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209f008
	ctx.lr = 0x8209F0A0;
	sub_8209F008(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188748
	ctx.lr = 0x8209F0AC;
	sub_82188748(ctx, base);
loc_8209F0AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209f0b8
	if (ctx.cr6.eq) goto loc_8209F0B8;
	// lbz r29,412(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 412);
loc_8209F0B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,9936
	ctx.r4.s64 = ctx.r11.s64 + 9936;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82248910
	ctx.lr = 0x8209F0D0;
	sub_82248910(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8209F0D8"))) PPC_WEAK_FUNC(sub_8209F0D8);
PPC_FUNC_IMPL(__imp__sub_8209F0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8209F0E0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209f134
	if (ctx.cr6.eq) goto loc_8209F134;
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r29,r10,-4
	ctx.r29.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt 0x8209f128
	if (ctx.cr0.lt) goto loc_8209F128;
loc_8209F114:
	// addi r30,r30,-96
	ctx.r30.s64 = ctx.r30.s64 + -96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f6c88
	ctx.lr = 0x8209F120;
	sub_820F6C88(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8209f114
	if (!ctx.cr0.lt) goto loc_8209F114;
loc_8209F128:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8209F134;
	sub_82183E40(ctx, base);
loc_8209F134:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f17c
	if (ctx.cr6.eq) goto loc_8209F17C;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209f174
	if (ctx.cr6.eq) goto loc_8209F174;
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
	ctx.lr = 0x8209F170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8209f17c
	goto loc_8209F17C;
loc_8209F174:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8209F17C;
	sub_82183E40(ctx, base);
loc_8209F17C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f1c0
	if (ctx.cr6.eq) goto loc_8209F1C0;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209f1b8
	if (ctx.cr6.eq) goto loc_8209F1B8;
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
	ctx.lr = 0x8209F1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8209f1c0
	goto loc_8209F1C0;
loc_8209F1B8:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8209F1C0;
	sub_82183E40(ctx, base);
loc_8209F1C0:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f1d8
	if (ctx.cr6.eq) goto loc_8209F1D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8209F1D8;
	sub_82183E40(ctx, base);
loc_8209F1D8:
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8209F1EC"))) PPC_WEAK_FUNC(sub_8209F1EC);
PPC_FUNC_IMPL(__imp__sub_8209F1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209F1F0"))) PPC_WEAK_FUNC(sub_8209F1F0);
PPC_FUNC_IMPL(__imp__sub_8209F1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8209F1F8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8209f0d8
	ctx.lr = 0x8209F208;
	sub_8209F0D8(ctx, base);
	// lis r11,682
	ctx.r11.s64 = 44695552;
	// li r25,-1
	ctx.r25.s64 = -1;
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// li r27,-5
	ctx.r27.s64 = -5;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8209f238
	if (ctx.cr6.gt) goto loc_8209F238;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x8209f23c
	if (!ctx.cr6.gt) goto loc_8209F23C;
loc_8209F238:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8209F23C:
	// bl 0x82183850
	ctx.lr = 0x8209F240;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8209f258
	if (ctx.cr6.eq) goto loc_8209F258;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x8209F254;
	sub_82183448(ctx, base);
	// b 0x8209f264
	goto loc_8209F264;
loc_8209F258:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8209F264;
	sub_821845A0(ctx, base);
loc_8209F264:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f298
	if (ctx.cr6.eq) goto loc_8209F298;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r31,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r31.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// blt 0x8209f29c
	if (ctx.cr0.lt) goto loc_8209F29C;
loc_8209F280:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f6a28
	ctx.lr = 0x8209F288;
	sub_820F6A28(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// bge 0x8209f280
	if (!ctx.cr0.lt) goto loc_8209F280;
	// b 0x8209f29c
	goto loc_8209F29C;
loc_8209F298:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8209F29C:
	// lis r11,1489
	ctx.r11.s64 = 97583104;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// ori r10,r11,29789
	ctx.r10.u64 = ctx.r11.u64 | 29789;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8209f2c0
	if (ctx.cr6.gt) goto loc_8209F2C0;
	// mulli r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 * 44;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x8209f2c4
	if (!ctx.cr6.gt) goto loc_8209F2C4;
loc_8209F2C0:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8209F2C4:
	// bl 0x82183850
	ctx.lr = 0x8209F2C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8209f2e0
	if (ctx.cr6.eq) goto loc_8209F2E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x8209F2DC;
	sub_82183448(ctx, base);
	// b 0x8209f2ec
	goto loc_8209F2EC;
loc_8209F2E0:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8209F2EC;
	sub_821845A0(ctx, base);
loc_8209F2EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f320
	if (ctx.cr6.eq) goto loc_8209F320;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r31,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r31.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// blt 0x8209f324
	if (ctx.cr0.lt) goto loc_8209F324;
loc_8209F308:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b6688
	ctx.lr = 0x8209F310;
	sub_820B6688(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// bge 0x8209f308
	if (!ctx.cr0.lt) goto loc_8209F308;
	// b 0x8209f324
	goto loc_8209F324;
loc_8209F320:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8209F324:
	// lis r11,1365
	ctx.r11.s64 = 89456640;
	// stw r28,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r28.u32);
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8209f350
	if (ctx.cr6.gt) goto loc_8209F350;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x8209f354
	if (!ctx.cr6.gt) goto loc_8209F354;
loc_8209F350:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8209F354:
	// bl 0x82183850
	ctx.lr = 0x8209F358;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8209f370
	if (ctx.cr6.eq) goto loc_8209F370;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x8209F36C;
	sub_82183448(ctx, base);
	// b 0x8209f37c
	goto loc_8209F37C;
loc_8209F370:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8209F37C;
	sub_821845A0(ctx, base);
loc_8209F37C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f3b0
	if (ctx.cr6.eq) goto loc_8209F3B0;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r31,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r31.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// blt 0x8209f3b4
	if (ctx.cr0.lt) goto loc_8209F3B4;
loc_8209F398:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b5c60
	ctx.lr = 0x8209F3A0;
	sub_820B5C60(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bge 0x8209f398
	if (!ctx.cr0.lt) goto loc_8209F398;
	// b 0x8209f3b4
	goto loc_8209F3B4;
loc_8209F3B0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8209F3B4:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r28,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r28.u32);
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8209f3d0
	if (!ctx.cr6.gt) goto loc_8209F3D0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8209F3D0:
	// bl 0x82183850
	ctx.lr = 0x8209F3D4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8209f3ec
	if (ctx.cr6.eq) goto loc_8209F3EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x8209F3E8;
	sub_82183448(ctx, base);
	// b 0x8209f3f8
	goto loc_8209F3F8;
loc_8209F3EC:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8209F3F8;
	sub_821845A0(ctx, base);
loc_8209F3F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r3,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r3.u32);
	// ble cr6,0x8209f420
	if (!ctx.cr6.gt) goto loc_8209F420;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8209F410:
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209f410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209F410;
loc_8209F420:
	// stw r29,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8209F42C"))) PPC_WEAK_FUNC(sub_8209F42C);
PPC_FUNC_IMPL(__imp__sub_8209F42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209F430"))) PPC_WEAK_FUNC(sub_8209F430);
PPC_FUNC_IMPL(__imp__sub_8209F430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8209F438;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r29,r10,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8209f484
	if (ctx.cr6.eq) goto loc_8209F484;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8209f500
	if (ctx.cr6.eq) goto loc_8209F500;
	// bl 0x8209efa8
	ctx.lr = 0x8209F484;
	sub_8209EFA8(ctx, base);
loc_8209F484:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822310a0
	ctx.lr = 0x8209F48C;
	sub_822310A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x8209f4d0
	if (ctx.cr6.eq) goto loc_8209F4D0;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820b5cd0
	ctx.lr = 0x8209F4B8;
	sub_820B5CD0(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r7,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8209F4D0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 * 44;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r5,r29,r9
	ctx.r5.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820b6330
	ctx.lr = 0x8209F4F0;
	sub_820B6330(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_8209F500:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8209F508"))) PPC_WEAK_FUNC(sub_8209F508);
PPC_FUNC_IMPL(__imp__sub_8209F508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8209F510;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8209f578
	if (!ctx.cr6.gt) goto loc_8209F578;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,72
	ctx.r31.s64 = ctx.r3.s64 + 72;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8209F534:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8209f560
	if (ctx.cr6.eq) goto loc_8209F560;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// bl 0x82181040
	ctx.lr = 0x8209F550;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f560
	if (ctx.cr6.eq) goto loc_8209F560;
	// li r4,66
	ctx.r4.s64 = 66;
	// bl 0x82181370
	ctx.lr = 0x8209F560;
	sub_82181370(ctx, base);
loc_8209F560:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8209f534
	if (ctx.cr6.lt) goto loc_8209F534;
loc_8209F578:
	// bl 0x82181040
	ctx.lr = 0x8209F57C;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f58c
	if (ctx.cr6.eq) goto loc_8209F58C;
	// li r4,65
	ctx.r4.s64 = 65;
	// bl 0x82181370
	ctx.lr = 0x8209F58C;
	sub_82181370(ctx, base);
loc_8209F58C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8209F594"))) PPC_WEAK_FUNC(sub_8209F594);
PPC_FUNC_IMPL(__imp__sub_8209F594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209F598"))) PPC_WEAK_FUNC(sub_8209F598);
PPC_FUNC_IMPL(__imp__sub_8209F598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8209F5A0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r3,72
	ctx.r29.s64 = ctx.r3.s64 + 72;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
loc_8209F5BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209f61c
	if (ctx.cr6.eq) goto loc_8209F61C;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// lwz r11,-752(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -752);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209f5e4
	if (ctx.cr6.eq) goto loc_8209F5E4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82213fe8
	ctx.lr = 0x8209F5E4;
	sub_82213FE8(ctx, base);
loc_8209F5E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209f610
	if (ctx.cr6.eq) goto loc_8209F610;
	// stw r27,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822337a0
	ctx.lr = 0x8209F604;
	sub_822337A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8209F610;
	sub_82183E40(ctx, base);
loc_8209F610:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x820f6bd0
	ctx.lr = 0x8209F61C;
	sub_820F6BD0(ctx, base);
loc_8209F61C:
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,1152
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1152, ctx.xer);
	// blt cr6,0x8209f5bc
	if (ctx.cr6.lt) goto loc_8209F5BC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8209F638"))) PPC_WEAK_FUNC(sub_8209F638);
PPC_FUNC_IMPL(__imp__sub_8209F638) {
	PPC_FUNC_PROLOGUE();
	// b 0x8209f0d8
	sub_8209F0D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209F63C"))) PPC_WEAK_FUNC(sub_8209F63C);
PPC_FUNC_IMPL(__imp__sub_8209F63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209F640"))) PPC_WEAK_FUNC(sub_8209F640);
PPC_FUNC_IMPL(__imp__sub_8209F640) {
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
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// bl 0x821882d0
	ctx.lr = 0x8209F658;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f674
	if (ctx.cr6.eq) goto loc_8209F674;
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
loc_8209F674:
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

__attribute__((alias("__imp__sub_8209F688"))) PPC_WEAK_FUNC(sub_8209F688);
PPC_FUNC_IMPL(__imp__sub_8209F688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8209F690;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8209f730
	if (!ctx.cr6.gt) goto loc_8209F730;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x8209f6b4
	if (!ctx.cr6.gt) goto loc_8209F6B4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8209f730
	if (!ctx.cr6.eq) goto loc_8209F730;
loc_8209F6B4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lbz r31,5(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// li r3,1012
	ctx.r3.s64 = 1012;
	// lwz r30,1088(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// bl 0x82080000
	ctx.lr = 0x8209F6C8;
	sub_82080000(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f720
	if (ctx.cr6.eq) goto loc_8209F720;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230678
	ctx.lr = 0x8209F6E0;
	sub_82230678(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230668
	ctx.lr = 0x8209F6F0;
	sub_82230668(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x820a6058
	ctx.lr = 0x8209F708;
	sub_820A6058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820f12b0
	ctx.lr = 0x8209F718;
	sub_820F12B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8209F720:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820f12b0
	ctx.lr = 0x8209F730;
	sub_820F12B0(ctx, base);
loc_8209F730:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8209F738"))) PPC_WEAK_FUNC(sub_8209F738);
PPC_FUNC_IMPL(__imp__sub_8209F738) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8209f764
	if (ctx.cr6.eq) goto loc_8209F764;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x8209f7d0
	if (!ctx.cr6.eq) goto loc_8209F7D0;
loc_8209F764:
	// bl 0x82183850
	ctx.lr = 0x8209F768;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8209f780
	if (ctx.cr6.eq) goto loc_8209F780;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82183448
	ctx.lr = 0x8209F77C;
	sub_82183448(ctx, base);
	// b 0x8209f788
	goto loc_8209F788;
loc_8209F780:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8209F788;
	sub_821845A0(ctx, base);
loc_8209F788:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f7ac
	if (ctx.cr6.eq) goto loc_8209F7AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r4,r30,1248
	ctx.r4.s64 = ctx.r30.s64 + 1248;
	// bne cr6,0x8209f7a0
	if (!ctx.cr6.eq) goto loc_8209F7A0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8209F7A0:
	// bl 0x8209c6c8
	ctx.lr = 0x8209F7A4;
	sub_8209C6C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8209f7b0
	goto loc_8209F7B0;
loc_8209F7AC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8209F7B0:
	// lwz r11,1248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1248);
	// addi r3,r30,1248
	ctx.r3.s64 = ctx.r30.s64 + 1248;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209F7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8209F7D0:
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

__attribute__((alias("__imp__sub_8209F7E8"))) PPC_WEAK_FUNC(sub_8209F7E8);
PPC_FUNC_IMPL(__imp__sub_8209F7E8) {
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
	// lbz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8209f84c
	if (ctx.cr6.eq) goto loc_8209F84C;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8209f84c
	if (!ctx.cr6.gt) goto loc_8209F84C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8209f824
	if (!ctx.cr6.gt) goto loc_8209F824;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8209f84c
	if (!ctx.cr6.eq) goto loc_8209F84C;
loc_8209F824:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6048
	ctx.lr = 0x8209F82C;
	sub_822E6048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f84c
	if (ctx.cr6.eq) goto loc_8209F84C;
	// lwz r11,1248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1248);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209F84C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209F84C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209F860"))) PPC_WEAK_FUNC(sub_8209F860);
PPC_FUNC_IMPL(__imp__sub_8209F860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8209F868;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lwz r9,164(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8209f904
	if (ctx.cr6.eq) goto loc_8209F904;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// lwzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209f904
	if (ctx.cr6.eq) goto loc_8209F904;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8209f8b4
	if (!ctx.cr6.eq) goto loc_8209F8B4;
	// lwz r11,1956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8209f904
	if (ctx.cr6.eq) goto loc_8209F904;
loc_8209F8B4:
	// stw r30,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r30.u32);
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r29,r31,596
	ctx.r29.s64 = ctx.r31.s64 + 596;
	// subfe r4,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x8209F8CC;
	sub_820EF4F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209e6c8
	ctx.lr = 0x8209F8D4;
	sub_8209E6C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f8e0
	if (ctx.cr6.eq) goto loc_8209F8E0;
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
loc_8209F8E0:
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bl 0x820970b8
	ctx.lr = 0x8209F8E8;
	sub_820970B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209f904
	if (ctx.cr6.eq) goto loc_8209F904;
	// stw r30,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209f904
	if (!ctx.cr6.eq) goto loc_8209F904;
	// stw r11,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r11.u32);
loc_8209F904:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8209F90C"))) PPC_WEAK_FUNC(sub_8209F90C);
PPC_FUNC_IMPL(__imp__sub_8209F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8209F910"))) PPC_WEAK_FUNC(sub_8209F910);
PPC_FUNC_IMPL(__imp__sub_8209F910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x8209F918;
	sub_8224876C(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r29,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r29.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r21,r11,-5052
	ctx.r21.s64 = ctx.r11.s64 + -5052;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822aa648
	ctx.lr = 0x8209F93C;
	sub_822AA648(ctx, base);
	// addi r31,r24,92
	ctx.r31.s64 = ctx.r24.s64 + 92;
	// li r30,9
	ctx.r30.s64 = 9;
loc_8209F944:
	// lwz r10,164(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 164);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// beq cr6,0x8209f96c
	if (ctx.cr6.eq) goto loc_8209F96C;
	// stw r29,1224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1224, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,1240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1240, ctx.r29.u32);
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x82163ef8
	ctx.lr = 0x8209F96C;
	sub_82163EF8(ctx, base);
loc_8209F96C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8209f944
	if (!ctx.cr0.eq) goto loc_8209F944;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x8209F984;
	sub_822AA648(ctx, base);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r26,r24,128
	ctx.r26.s64 = ctx.r24.s64 + 128;
	// lis r22,-32182
	ctx.r22.s64 = -2109079552;
	// lis r23,-32180
	ctx.r23.s64 = -2108948480;
	// lis r25,-32182
	ctx.r25.s64 = -2109079552;
loc_8209F998:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-420(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -420);
	// bl 0x82163a78
	ctx.lr = 0x8209F9A4;
	sub_82163A78(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8209faa8
	if (ctx.cr6.lt) goto loc_8209FAA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215bd28
	ctx.lr = 0x8209F9C0;
	sub_8215BD28(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x8209faa8
	if (ctx.cr6.eq) goto loc_8209FAA8;
	// lwz r3,14516(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14516);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r31,-36(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + -36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8209f9f8
	if (ctx.cr6.eq) goto loc_8209F9F8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82166180
	ctx.lr = 0x8209F9EC;
	sub_82166180(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8209faa8
	if (ctx.cr6.eq) goto loc_8209FAA8;
loc_8209F9F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209fa9c
	if (ctx.cr6.eq) goto loc_8209FA9C;
	// stw r29,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r29.u32);
	// stw r30,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r30.u32);
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8209fa18
	if (!ctx.cr6.eq) goto loc_8209FA18;
	// lbz r11,5(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5);
loc_8209FA18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r11.u32);
	// bl 0x8215bd28
	ctx.lr = 0x8209FA28;
	sub_8215BD28(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stw r9,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r9.u32);
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r7,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r7.u32);
	// lbz r6,2(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// stw r5,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r5.u32);
	// lbz r4,3(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// stw r3,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r3.u32);
	// lwz r11,-4984(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4984);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8209fa78
	if (!ctx.cr6.eq) goto loc_8209FA78;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-420(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -420);
	// bl 0x82163a78
	ctx.lr = 0x8209FA70;
	sub_82163A78(ctx, base);
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// b 0x8209fa84
	goto loc_8209FA84;
loc_8209FA78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215bd28
	ctx.lr = 0x8209FA80;
	sub_8215BD28(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
loc_8209FA84:
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// stw r11,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r11.u32);
	// stb r10,1549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1549, ctx.r10.u8);
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r24)
	PPC_STORE_U32(ctx.r24.u32 + 68, ctx.r11.u32);
loc_8209FA9C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r21
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r31.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
loc_8209FAA8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r27,9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 9, ctx.xer);
	// blt cr6,0x8209f998
	if (ctx.cr6.lt) goto loc_8209F998;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// li r29,9
	ctx.r29.s64 = 9;
loc_8209FAC0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8209faf4
	if (ctx.cr6.eq) goto loc_8209FAF4;
	// lwz r11,1248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1248);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209FAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1992);
	// bl 0x8215bd28
	ctx.lr = 0x8209FAE8;
	sub_8215BD28(ctx, base);
	// lbz r9,13(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stw r8,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r8.u32);
loc_8209FAF4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8209fac0
	if (!ctx.cr0.eq) goto loc_8209FAC0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_8209FB08"))) PPC_WEAK_FUNC(sub_8209FB08);
PPC_FUNC_IMPL(__imp__sub_8209FB08) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8209fb48
	if (ctx.cr6.eq) goto loc_8209FB48;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8209FB20:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8209fb38
	if (!ctx.cr6.gt) goto loc_8209FB38;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x8209fb50
	if (!ctx.cr6.gt) goto loc_8209FB50;
loc_8209FB38:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8209fb20
	if (ctx.cr6.lt) goto loc_8209FB20;
loc_8209FB48:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8209FB50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209FB58"))) PPC_WEAK_FUNC(sub_8209FB58);
PPC_FUNC_IMPL(__imp__sub_8209FB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x8209FB60;
	sub_82248764(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8209fb7c
	if (!ctx.cr6.eq) goto loc_8209FB7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
loc_8209FB7C:
	// addi r19,r31,1908
	ctx.r19.s64 = ctx.r31.s64 + 1908;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x820f1270
	ctx.lr = 0x8209FB88;
	sub_820F1270(ctx, base);
	// addi r28,r31,1248
	ctx.r28.s64 = ctx.r31.s64 + 1248;
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// bl 0x821882d0
	ctx.lr = 0x8209FB9C;
	sub_821882D0(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fc80
	if (ctx.cr6.eq) goto loc_8209FC80;
	// lwz r20,24(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8209fbbc
	if (ctx.cr6.eq) goto loc_8209FBBC;
	// addi r3,r20,16
	ctx.r3.s64 = ctx.r20.s64 + 16;
	// bl 0x82188260
	ctx.lr = 0x8209FBBC;
	sub_82188260(ctx, base);
loc_8209FBBC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82188208
	ctx.lr = 0x8209FBC4;
	sub_82188208(ctx, base);
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// bl 0x82188208
	ctx.lr = 0x8209FBCC;
	sub_82188208(ctx, base);
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// bl 0x82188208
	ctx.lr = 0x8209FBD4;
	sub_82188208(ctx, base);
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fbe4
	if (ctx.cr6.eq) goto loc_8209FBE4;
	// bl 0x82188208
	ctx.lr = 0x8209FBE4;
	sub_82188208(ctx, base);
loc_8209FBE4:
	// lwz r3,1296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fbf4
	if (ctx.cr6.eq) goto loc_8209FBF4;
	// bl 0x82188208
	ctx.lr = 0x8209FBF4;
	sub_82188208(ctx, base);
loc_8209FBF4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,1284(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a78
	ctx.lr = 0x8209FC08;
	sub_82163A78(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,-8968(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8968);
	// bl 0x8209ed88
	ctx.lr = 0x8209FC1C;
	sub_8209ED88(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lbz r10,6(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 6);
	// lwz r30,20(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r10,-4984(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4984);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfe r25,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r25.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r10,-5
	ctx.r5.s64 = ctx.r10.s64 + -5;
	// rlwinm r27,r6,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r26,r4,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8209FC58;
	sub_82183078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8209FC64;
	sub_821837D0(ctx, base);
	// li r3,928
	ctx.r3.s64 = 928;
	// bl 0x82080000
	ctx.lr = 0x8209FC6C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fc88
	if (ctx.cr6.eq) goto loc_8209FC88;
	// bl 0x820bd628
	ctx.lr = 0x8209FC78;
	sub_820BD628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209fc8c
	goto loc_8209FC8C;
loc_8209FC80:
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// b 0x8209fbbc
	goto loc_8209FBBC;
loc_8209FC88:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FC8C:
	// lwz r11,816(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 816);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,816(r4)
	PPC_STORE_U32(ctx.r4.u32 + 816, ctx.r10.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209FCB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8209ff84
	if (!ctx.cr6.eq) goto loc_8209FF84;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x8209FCC0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fcdc
	if (ctx.cr6.eq) goto loc_8209FCDC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820bd4c8
	ctx.lr = 0x8209FCD0;
	sub_820BD4C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// bne cr6,0x8209fce0
	if (!ctx.cr6.eq) goto loc_8209FCE0;
loc_8209FCDC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FCE0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209FCF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82080000
	ctx.lr = 0x8209FD00;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fd18
	if (ctx.cr6.eq) goto loc_8209FD18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f2170
	ctx.lr = 0x8209FD10;
	sub_820F2170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209fd1c
	goto loc_8209FD1C;
loc_8209FD18:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FD1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209FD34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1792
	ctx.r3.s64 = 1792;
	// bl 0x82080000
	ctx.lr = 0x8209FD3C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fd54
	if (ctx.cr6.eq) goto loc_8209FD54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820bc290
	ctx.lr = 0x8209FD4C;
	sub_820BC290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209fd58
	goto loc_8209FD58;
loc_8209FD54:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FD58:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209FD70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,800
	ctx.r3.s64 = 800;
	// bl 0x82080000
	ctx.lr = 0x8209FD78;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fda0
	if (ctx.cr6.eq) goto loc_8209FDA0;
	// lis r7,21061
	ctx.r7.s64 = 1380253696;
	// li r6,21
	ctx.r6.s64 = 21;
	// ori r7,r7,17996
	ctx.r7.u64 = ctx.r7.u64 | 17996;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82100288
	ctx.lr = 0x8209FD98;
	sub_82100288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209fda4
	goto loc_8209FDA4;
loc_8209FDA0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FDA4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8209fdb8
	if (ctx.cr6.eq) goto loc_8209FDB8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209fdb8
	if (ctx.cr6.eq) goto loc_8209FDB8;
	// stw r22,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r22.u32);
loc_8209FDB8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,25
	ctx.r5.s64 = 25;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209FDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,10784
	ctx.r3.s64 = 10784;
	// bl 0x82080000
	ctx.lr = 0x8209FDD8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fdf0
	if (ctx.cr6.eq) goto loc_8209FDF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820bbcc0
	ctx.lr = 0x8209FDE8;
	sub_820BBCC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209fdf4
	goto loc_8209FDF4;
loc_8209FDF0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FDF4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209FE0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209f688
	ctx.lr = 0x8209FE18;
	sub_8209F688(ctx, base);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82080000
	ctx.lr = 0x8209FE20;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fe38
	if (ctx.cr6.eq) goto loc_8209FE38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ba748
	ctx.lr = 0x8209FE30;
	sub_820BA748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209fe3c
	goto loc_8209FE3C;
loc_8209FE38:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FE3C:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f12b0
	ctx.lr = 0x8209FE48;
	sub_820F12B0(ctx, base);
	// li r3,820
	ctx.r3.s64 = 820;
	// bl 0x82080000
	ctx.lr = 0x8209FE50;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fe6c
	if (ctx.cr6.eq) goto loc_8209FE6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a8780
	ctx.lr = 0x8209FE64;
	sub_820A8780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209fe70
	goto loc_8209FE70;
loc_8209FE6C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FE70:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f12b0
	ctx.lr = 0x8209FE7C;
	sub_820F12B0(ctx, base);
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82080000
	ctx.lr = 0x8209FE84;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fe9c
	if (ctx.cr6.eq) goto loc_8209FE9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ba120
	ctx.lr = 0x8209FE94;
	sub_820BA120(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209fea0
	goto loc_8209FEA0;
loc_8209FE9C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FEA0:
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f12b0
	ctx.lr = 0x8209FEAC;
	sub_820F12B0(ctx, base);
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82080000
	ctx.lr = 0x8209FEB4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fecc
	if (ctx.cr6.eq) goto loc_8209FECC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b9aa0
	ctx.lr = 0x8209FEC4;
	sub_820B9AA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209fed0
	goto loc_8209FED0;
loc_8209FECC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FED0:
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f12b0
	ctx.lr = 0x8209FEDC;
	sub_820F12B0(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82080000
	ctx.lr = 0x8209FEE4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209fefc
	if (ctx.cr6.eq) goto loc_8209FEFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b9668
	ctx.lr = 0x8209FEF4;
	sub_820B9668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209ff00
	goto loc_8209FF00;
loc_8209FEFC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FF00:
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209FF14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82080000
	ctx.lr = 0x8209FF1C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ff34
	if (ctx.cr6.eq) goto loc_8209FF34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b9608
	ctx.lr = 0x8209FF2C;
	sub_820B9608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209ff38
	goto loc_8209FF38;
loc_8209FF34:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FF38:
	// lwz r3,1296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209FF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82080000
	ctx.lr = 0x8209FF54;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ff6c
	if (ctx.cr6.eq) goto loc_8209FF6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b9588
	ctx.lr = 0x8209FF64;
	sub_820B9588(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209ff70
	goto loc_8209FF70;
loc_8209FF6C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_8209FF70:
	// lwz r3,1296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209FF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209FF84:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82080000
	ctx.lr = 0x8209FF8C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ffa4
	if (ctx.cr6.eq) goto loc_8209FFA4;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x820e7cb0
	ctx.lr = 0x8209FF9C;
	sub_820E7CB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8209ffa8
	goto loc_8209FFA8;
loc_8209FFA4:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8209FFA8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209FFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82080000
	ctx.lr = 0x8209FFCC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ffe8
	if (ctx.cr6.eq) goto loc_8209FFE8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e8178
	ctx.lr = 0x8209FFE0;
	sub_820E8178(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8209ffec
	goto loc_8209FFEC;
loc_8209FFE8:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8209FFEC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82080000
	ctx.lr = 0x820A0014;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a002c
	if (ctx.cr6.eq) goto loc_820A002C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820feb78
	ctx.lr = 0x820A0024;
	sub_820FEB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a0030
	goto loc_820A0030;
loc_820A002C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820A0030:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82080000
	ctx.lr = 0x820A0050;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a006c
	if (ctx.cr6.eq) goto loc_820A006C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x820ff8a0
	ctx.lr = 0x820A0064;
	sub_820FF8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a0070
	goto loc_820A0070;
loc_820A006C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820A0070:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2384
	ctx.r3.s64 = 2384;
	// bl 0x82080000
	ctx.lr = 0x820A0090;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a00b0
	if (ctx.cr6.eq) goto loc_820A00B0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820ec368
	ctx.lr = 0x820A00A8;
	sub_820EC368(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820a00b4
	goto loc_820A00B4;
loc_820A00B0:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_820A00B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A00D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,1820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1820, ctx.r22.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82080000
	ctx.lr = 0x820A00DC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a00f4
	if (ctx.cr6.eq) goto loc_820A00F4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820ff430
	ctx.lr = 0x820A00EC;
	sub_820FF430(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a00f8
	goto loc_820A00F8;
loc_820A00F4:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820A00F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x820A0114;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820a012c
	if (ctx.cr6.eq) goto loc_820A012C;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82183448
	ctx.lr = 0x820A0128;
	sub_82183448(ctx, base);
	// b 0x820a0134
	goto loc_820A0134;
loc_820A012C:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x820A0134;
	sub_821845A0(ctx, base);
loc_820A0134:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a014c
	if (ctx.cr6.eq) goto loc_820A014C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8209c6c8
	ctx.lr = 0x820A0144;
	sub_8209C6C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820a0150
	goto loc_820A0150;
loc_820A014C:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_820A0150:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A016C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82080000
	ctx.lr = 0x820A0174;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0190
	if (ctx.cr6.eq) goto loc_820A0190;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ef9d8
	ctx.lr = 0x820A0188;
	sub_820EF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a0194
	goto loc_820A0194;
loc_820A0190:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820A0194:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x820a01a8
	if (ctx.cr6.eq) goto loc_820A01A8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820a01a8
	if (ctx.cr6.eq) goto loc_820A01A8;
	// stw r22,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r22.u32);
loc_820A01A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A01C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,15104
	ctx.r3.s64 = 15104;
	// bl 0x82080000
	ctx.lr = 0x820A01C8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a01e4
	if (ctx.cr6.eq) goto loc_820A01E4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820fd1a0
	ctx.lr = 0x820A01DC;
	sub_820FD1A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x820a01e8
	goto loc_820A01E8;
loc_820A01E4:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_820A01E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x820a0248
	if (!ctx.cr6.eq) goto loc_820A0248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b8c20
	ctx.lr = 0x820A0218;
	sub_820B8C20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x820a0230
	if (ctx.cr6.eq) goto loc_820A0230;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0230
	if (ctx.cr6.eq) goto loc_820A0230;
	// stw r22,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r22.u32);
loc_820A0230:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A0248:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x820a0350
	if (ctx.cr6.eq) goto loc_820A0350;
	// li r3,1712
	ctx.r3.s64 = 1712;
	// bl 0x82080000
	ctx.lr = 0x820A0258;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0274
	if (ctx.cr6.eq) goto loc_820A0274;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f95b8
	ctx.lr = 0x820A026C;
	sub_820F95B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820a0278
	goto loc_820A0278;
loc_820A0274:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_820A0278:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x82080000
	ctx.lr = 0x820A029C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a02b8
	if (ctx.cr6.eq) goto loc_820A02B8;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f71e8
	ctx.lr = 0x820A02B0;
	sub_820F71E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a02bc
	goto loc_820A02BC;
loc_820A02B8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820A02BC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A02D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82080000
	ctx.lr = 0x820A02DC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a02fc
	if (ctx.cr6.eq) goto loc_820A02FC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f7190
	ctx.lr = 0x820A02F4;
	sub_820F7190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a0300
	goto loc_820A0300;
loc_820A02FC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820A0300:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82080000
	ctx.lr = 0x820A0320;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0338
	if (ctx.cr6.eq) goto loc_820A0338;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f6e00
	ctx.lr = 0x820A0330;
	sub_820F6E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a033c
	goto loc_820A033C;
loc_820A0338:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820A033C:
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A0350:
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82080000
	ctx.lr = 0x820A0358;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0370
	if (ctx.cr6.eq) goto loc_820A0370;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820aedf0
	ctx.lr = 0x820A0368;
	sub_820AEDF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a0374
	goto loc_820A0374;
loc_820A0370:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820A0374:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A038C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x820A0394;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a03ac
	if (ctx.cr6.eq) goto loc_820A03AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a6170
	ctx.lr = 0x820A03A4;
	sub_820A6170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a03b0
	goto loc_820A03B0;
loc_820A03AC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820A03B0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A03C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r7,32(r24)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r24.u32 + 32);
	// addi r9,r24,32
	ctx.r9.s64 = ctx.r24.s64 + 32;
	// addi r8,r31,416
	ctx.r8.s64 = ctx.r31.s64 + 416;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// std r7,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r7.u64);
	// ld r6,40(r24)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r24.u32 + 40);
	// std r6,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r6.u64);
	// ld r5,48(r24)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r24.u32 + 48);
	// std r5,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r5.u64);
	// ld r4,56(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 56);
	// std r4,408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 408, ctx.r4.u64);
	// addi r4,r20,16
	ctx.r4.s64 = ctx.r20.s64 + 16;
	// bne cr6,0x820a0400
	if (!ctx.cr6.eq) goto loc_820A0400;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820A0400:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82080000
	ctx.lr = 0x820A041C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0434
	if (ctx.cr6.eq) goto loc_820A0434;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b0798
	ctx.lr = 0x820A042C;
	sub_820B0798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a0438
	goto loc_820A0438;
loc_820A0434:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820A0438:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A044C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,332
	ctx.r3.s64 = 332;
	// bl 0x82080000
	ctx.lr = 0x820A0454;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a046c
	if (ctx.cr6.eq) goto loc_820A046C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b7bd0
	ctx.lr = 0x820A0464;
	sub_820B7BD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820a0470
	goto loc_820A0470;
loc_820A046C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820A0470:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209f7e8
	ctx.lr = 0x820A0490;
	sub_8209F7E8(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x820f1270
	ctx.lr = 0x820A0498;
	sub_820F1270(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x820f18a8
	ctx.lr = 0x820A04A4;
	sub_820F18A8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821837d0
	ctx.lr = 0x820A04AC;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_820A04B8"))) PPC_WEAK_FUNC(sub_820A04B8);
PPC_FUNC_IMPL(__imp__sub_820A04B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820A04C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-5052
	ctx.r11.s64 = ctx.r11.s64 + -5052;
	// li r31,9
	ctx.r31.s64 = 9;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_820A04D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8209fb58
	ctx.lr = 0x820A04E4;
	sub_8209FB58(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x820a04d8
	if (!ctx.cr0.eq) goto loc_820A04D8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820A04F4"))) PPC_WEAK_FUNC(sub_820A04F4);
PPC_FUNC_IMPL(__imp__sub_820A04F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A04F8"))) PPC_WEAK_FUNC(sub_820A04F8);
PPC_FUNC_IMPL(__imp__sub_820A04F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820A0500;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820a0554
	if (!ctx.cr6.gt) goto loc_820A0554;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820A0520:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A0540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820a0520
	if (ctx.cr6.lt) goto loc_820A0520;
loc_820A0554:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820A055C"))) PPC_WEAK_FUNC(sub_820A055C);
PPC_FUNC_IMPL(__imp__sub_820A055C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A0560"))) PPC_WEAK_FUNC(sub_820A0560);
PPC_FUNC_IMPL(__imp__sub_820A0560) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x820a05e0
	if (!ctx.cr6.lt) goto loc_820A05E0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a05b4
	if (ctx.cr6.eq) goto loc_820A05B4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820A05A4;
	sub_82183E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820A05B4:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820a05cc
	if (!ctx.cr6.gt) goto loc_820A05CC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820A05CC:
	// bl 0x82080d68
	ctx.lr = 0x820A05D0;
	sub_82080D68(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_820A05E0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820A0608"))) PPC_WEAK_FUNC(sub_820A0608);
PPC_FUNC_IMPL(__imp__sub_820A0608) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x820a0648
	if (!ctx.cr6.eq) goto loc_820A0648;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a0648
	if (ctx.cr6.eq) goto loc_820A0648;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820a0648
	if (ctx.cr0.eq) goto loc_820A0648;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_820A0648:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820A0650"))) PPC_WEAK_FUNC(sub_820A0650);
PPC_FUNC_IMPL(__imp__sub_820A0650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820A0658;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820a0748
	if (!ctx.cr6.gt) goto loc_820A0748;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r27,r3,128
	ctx.r27.s64 = ctx.r3.s64 + 128;
	// addi r25,r11,-5052
	ctx.r25.s64 = ctx.r11.s64 + -5052;
loc_820A0688:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,164(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820a0734
	if (ctx.cr6.eq) goto loc_820A0734;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a0734
	if (ctx.cr6.eq) goto loc_820A0734;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x820a06bc
	if (!ctx.cr6.eq) goto loc_820A06BC;
	// lwz r11,1956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820a0734
	if (ctx.cr6.eq) goto loc_820A0734;
loc_820A06BC:
	// stw r29,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r29.u32);
	// addic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// addi r30,r31,596
	ctx.r30.s64 = ctx.r31.s64 + 596;
	// subfe r4,r11,r29
	temp.u8 = (~ctx.r11.u32 + ctx.r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r11.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x820A06D4;
	sub_820EF4F8(ctx, base);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// bl 0x821882d0
	ctx.lr = 0x820A06E4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a06fc
	if (ctx.cr6.eq) goto loc_820A06FC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a06fc
	if (ctx.cr6.eq) goto loc_820A06FC;
	// stw r29,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
loc_820A06FC:
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// bl 0x821882d0
	ctx.lr = 0x820A070C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0734
	if (ctx.cr6.eq) goto loc_820A0734;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0734
	if (ctx.cr6.eq) goto loc_820A0734;
	// stw r29,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r29.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a0734
	if (!ctx.cr6.eq) goto loc_820A0734;
	// stw r23,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r23.u32);
loc_820A0734:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820a0688
	if (ctx.cr6.lt) goto loc_820A0688;
loc_820A0748:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820A0750"))) PPC_WEAK_FUNC(sub_820A0750);
PPC_FUNC_IMPL(__imp__sub_820A0750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820A0758;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lwz r9,164(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820a0880
	if (ctx.cr6.eq) goto loc_820A0880;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// lwzx r27,r9,r8
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820a0880
	if (ctx.cr6.eq) goto loc_820A0880;
	// stw r5,1240(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1240, ctx.r5.u32);
	// addi r31,r27,1248
	ctx.r31.s64 = ctx.r27.s64 + 1248;
	// lis r4,17490
	ctx.r4.s64 = 1146224640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21586
	ctx.r4.u64 = ctx.r4.u64 | 21586;
	// bl 0x821882d0
	ctx.lr = 0x820A07A8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a07c0
	if (ctx.cr6.eq) goto loc_820A07C0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a07c0
	if (ctx.cr6.eq) goto loc_820A07C0;
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_820A07C0:
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// bl 0x821882d0
	ctx.lr = 0x820A07D0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0880
	if (ctx.cr6.eq) goto loc_820A0880;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a0880
	if (ctx.cr6.eq) goto loc_820A0880;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820a0848
	if (ctx.cr6.eq) goto loc_820A0848;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820a0848
	if (ctx.cr0.eq) goto loc_820A0848;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_820A0808:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,30000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30000, ctx.xer);
	// beq cr6,0x820a083c
	if (ctx.cr6.eq) goto loc_820A083C;
	// cmplwi cr6,r4,30001
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30001, ctx.xer);
	// beq cr6,0x820a083c
	if (ctx.cr6.eq) goto loc_820A083C;
	// cmplwi cr6,r4,30002
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30002, ctx.xer);
	// beq cr6,0x820a083c
	if (ctx.cr6.eq) goto loc_820A083C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820be098
	ctx.lr = 0x820A083C;
	sub_820BE098(ctx, base);
loc_820A083C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x820a0808
	if (!ctx.cr0.eq) goto loc_820A0808;
loc_820A0848:
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// lwz r3,1964(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1964);
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// bl 0x821882d0
	ctx.lr = 0x820A0858;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0870
	if (ctx.cr6.eq) goto loc_820A0870;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0870
	if (ctx.cr6.eq) goto loc_820A0870;
	// stw r28,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r28.u32);
loc_820A0870:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820be098
	ctx.lr = 0x820A0880;
	sub_820BE098(ctx, base);
loc_820A0880:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820A0888"))) PPC_WEAK_FUNC(sub_820A0888);
PPC_FUNC_IMPL(__imp__sub_820A0888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820A0890;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820a08f4
	if (!ctx.cr6.gt) goto loc_820A08F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820A08AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a08e0
	if (ctx.cr6.eq) goto loc_820A08E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820a08e0
	if (ctx.cr0.eq) goto loc_820A08E0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// lwz r11,1248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1248);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A08E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A08E0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820a08ac
	if (ctx.cr6.lt) goto loc_820A08AC;
loc_820A08F4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r11,-5052
	ctx.r3.s64 = ctx.r11.s64 + -5052;
	// bl 0x822aa648
	ctx.lr = 0x820A0904;
	sub_822AA648(ctx, base);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// lwz r8,164(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r7,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r4,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r4.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820A0954"))) PPC_WEAK_FUNC(sub_820A0954);
PPC_FUNC_IMPL(__imp__sub_820A0954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A0958"))) PPC_WEAK_FUNC(sub_820A0958);
PPC_FUNC_IMPL(__imp__sub_820A0958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x820A0960;
	sub_82248764(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r20,r3,32
	ctx.r20.s64 = ctx.r3.s64 + 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x820A0974;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r21,1
	ctx.r21.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r21,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r21.u32);
	// li r19,-1
	ctx.r19.s64 = -1;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r22,-8972(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8972);
	// beq cr6,0x820a0a00
	if (ctx.cr6.eq) goto loc_820A0A00;
	// addi r29,r31,204
	ctx.r29.s64 = ctx.r31.s64 + 204;
	// addi r30,r31,312
	ctx.r30.s64 = ctx.r31.s64 + 312;
loc_820A09A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820a09e8
	if (ctx.cr6.eq) goto loc_820A09E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r22,16
	ctx.r3.s64 = ctx.r22.s64 + 16;
	// bl 0x820a04f8
	ctx.lr = 0x820A09BC;
	sub_820A04F8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a09dc
	if (ctx.cr6.eq) goto loc_820A09DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820A09DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A09DC:
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// stw r19,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r19.u32);
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
loc_820A09E8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820a09a4
	if (ctx.cr6.lt) goto loc_820A09A4;
loc_820A0A00:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0b14
	if (ctx.cr6.eq) goto loc_820A0B14;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// addi r27,r31,240
	ctx.r27.s64 = ctx.r31.s64 + 240;
	// li r26,4
	ctx.r26.s64 = 4;
	// lis r24,-32180
	ctx.r24.s64 = -2108948480;
	// addi r23,r11,-5052
	ctx.r23.s64 = ctx.r11.s64 + -5052;
loc_820A0A28:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x820a0af8
	if (!ctx.cr6.eq) goto loc_820A0AF8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r21,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r21.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,-36(r30)
	PPC_STORE_U32(ctx.r30.u32 + -36, ctx.r9.u32);
	// stw r28,1288(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1288, ctx.r28.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820a0af8
	if (!ctx.cr6.eq) goto loc_820A0AF8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,-36(r30)
	PPC_STORE_U32(ctx.r30.u32 + -36, ctx.r9.u32);
	// stw r28,1288(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1288, ctx.r28.u32);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820a0ab4
	if (ctx.cr6.eq) goto loc_820A0AB4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820a04f8
	ctx.lr = 0x820A0AA8;
	sub_820A04F8(ctx, base);
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// stw r19,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r19.u32);
	// stw r25,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r25.u32);
loc_820A0AB4:
	// lwz r3,14516(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 14516);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820a0ae8
	if (ctx.cr6.eq) goto loc_820A0AE8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82166180
	ctx.lr = 0x820A0AD0;
	sub_82166180(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820a0ae8
	if (!ctx.cr6.eq) goto loc_820A0AE8;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x820a0af8
	goto loc_820A0AF8;
loc_820A0AE8:
	// lwz r10,-36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -36);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stwx r10,r9,r23
	PPC_STORE_U32(ctx.r9.u32 + ctx.r23.u32, ctx.r10.u32);
loc_820A0AF8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820a0a28
	if (ctx.cr6.lt) goto loc_820A0A28;
loc_820A0B14:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x820A0B1C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r25,28(r20)
	PPC_STORE_U32(ctx.r20.u32 + 28, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_820A0B28"))) PPC_WEAK_FUNC(sub_820A0B28);
PPC_FUNC_IMPL(__imp__sub_820A0B28) {
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
	// bl 0x820a0560
	ctx.lr = 0x820A0B48;
	sub_820A0560(ctx, base);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a0560
	ctx.lr = 0x820A0B58;
	sub_820A0560(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820a0b7c
	if (ctx.cr6.eq) goto loc_820A0B7C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820A0B6C:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820a0b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A0B6C;
loc_820A0B7C:
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

__attribute__((alias("__imp__sub_820A0B94"))) PPC_WEAK_FUNC(sub_820A0B94);
PPC_FUNC_IMPL(__imp__sub_820A0B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A0B98"))) PPC_WEAK_FUNC(sub_820A0B98);
PPC_FUNC_IMPL(__imp__sub_820A0B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820A0BA0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x820A0BB8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// bl 0x820a0b28
	ctx.lr = 0x820A0BD0;
	sub_820A0B28(ctx, base);
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// rlwinm r28,r31,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820a0be8
	if (!ctx.cr6.gt) goto loc_820A0BE8;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_820A0BE8:
	// bl 0x82183850
	ctx.lr = 0x820A0BEC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820a0c04
	if (ctx.cr6.eq) goto loc_820A0C04;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x820A0C00;
	sub_82183448(ctx, base);
	// b 0x820a0c10
	goto loc_820A0C10;
loc_820A0C04:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820A0C10;
	sub_821845A0(ctx, base);
loc_820A0C10:
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// rlwinm r4,r31,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x822aa648
	ctx.lr = 0x820A0C1C;
	sub_822AA648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x820A0C24;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820A0C34"))) PPC_WEAK_FUNC(sub_820A0C34);
PPC_FUNC_IMPL(__imp__sub_820A0C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A0C38"))) PPC_WEAK_FUNC(sub_820A0C38);
PPC_FUNC_IMPL(__imp__sub_820A0C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820A0C40;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,32
	ctx.r28.s64 = ctx.r3.s64 + 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x820A0C58;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r7,r30,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x820a0ca4
	if (!ctx.cr6.eq) goto loc_820A0CA4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a0ca4
	if (ctx.cr6.eq) goto loc_820A0CA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820a0ca4
	if (ctx.cr0.eq) goto loc_820A0CA4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820a0cbc
	if (!ctx.cr6.eq) goto loc_820A0CBC;
loc_820A0CA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x820A0CAC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820A0CBC:
	// addi r11,r30,51
	ctx.r11.s64 = ctx.r30.s64 + 51;
	// addi r10,r30,23
	ctx.r10.s64 = ctx.r30.s64 + 23;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r6,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r6.u32);
	// li r4,-14336
	ctx.r4.s64 = -14336;
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// sthx r4,r5,r31
	PPC_STORE_U16(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u16);
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820a0d18
	if (ctx.cr6.eq) goto loc_820A0D18;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r6,-5052
	ctx.r4.s64 = ctx.r6.s64 + -5052;
	// stwx r29,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r29.u32);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
loc_820A0D18:
	// addi r11,r30,39
	ctx.r11.s64 = ctx.r30.s64 + 39;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bl 0x822aa648
	ctx.lr = 0x820A0D44;
	sub_822AA648(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x820A0D4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820A0D58"))) PPC_WEAK_FUNC(sub_820A0D58);
PPC_FUNC_IMPL(__imp__sub_820A0D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820A0D60;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820a0eac
	if (!ctx.cr6.gt) goto loc_820A0EAC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r25,r3,128
	ctx.r25.s64 = ctx.r3.s64 + 128;
	// addi r23,r11,-5052
	ctx.r23.s64 = ctx.r11.s64 + -5052;
loc_820A0D88:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,164(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820a0e98
	if (ctx.cr6.eq) goto loc_820A0E98;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r23
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820a0e98
	if (ctx.cr6.eq) goto loc_820A0E98;
	// stw r27,1240(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1240, ctx.r27.u32);
	// addi r31,r28,1248
	ctx.r31.s64 = ctx.r28.s64 + 1248;
	// lis r4,17490
	ctx.r4.s64 = 1146224640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21586
	ctx.r4.u64 = ctx.r4.u64 | 21586;
	// bl 0x821882d0
	ctx.lr = 0x820A0DC0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0dd8
	if (ctx.cr6.eq) goto loc_820A0DD8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0dd8
	if (ctx.cr6.eq) goto loc_820A0DD8;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_820A0DD8:
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// bl 0x821882d0
	ctx.lr = 0x820A0DE8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0e98
	if (ctx.cr6.eq) goto loc_820A0E98;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820a0e98
	if (ctx.cr6.eq) goto loc_820A0E98;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x820a0e60
	if (ctx.cr6.eq) goto loc_820A0E60;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820a0e60
	if (ctx.cr0.eq) goto loc_820A0E60;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_820A0E20:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,30000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30000, ctx.xer);
	// beq cr6,0x820a0e54
	if (ctx.cr6.eq) goto loc_820A0E54;
	// cmplwi cr6,r4,30001
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30001, ctx.xer);
	// beq cr6,0x820a0e54
	if (ctx.cr6.eq) goto loc_820A0E54;
	// cmplwi cr6,r4,30002
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30002, ctx.xer);
	// beq cr6,0x820a0e54
	if (ctx.cr6.eq) goto loc_820A0E54;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820be098
	ctx.lr = 0x820A0E54;
	sub_820BE098(ctx, base);
loc_820A0E54:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x820a0e20
	if (!ctx.cr0.eq) goto loc_820A0E20;
loc_820A0E60:
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// lwz r3,1964(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1964);
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// bl 0x821882d0
	ctx.lr = 0x820A0E70;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0e88
	if (ctx.cr6.eq) goto loc_820A0E88;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a0e88
	if (ctx.cr6.eq) goto loc_820A0E88;
	// stw r27,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r27.u32);
loc_820A0E88:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820be098
	ctx.lr = 0x820A0E98;
	sub_820BE098(ctx, base);
loc_820A0E98:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820a0d88
	if (ctx.cr6.lt) goto loc_820A0D88;
loc_820A0EAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820A0EB4"))) PPC_WEAK_FUNC(sub_820A0EB4);
PPC_FUNC_IMPL(__imp__sub_820A0EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A0EB8"))) PPC_WEAK_FUNC(sub_820A0EB8);
PPC_FUNC_IMPL(__imp__sub_820A0EB8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0ef4
	if (ctx.cr6.eq) goto loc_820A0EF4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820A0EE8;
	sub_82183E40(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_820A0EF4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a0f14
	if (ctx.cr6.eq) goto loc_820A0F14;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820A0F08;
	sub_82183E40(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_820A0F14:
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

__attribute__((alias("__imp__sub_820A0F2C"))) PPC_WEAK_FUNC(sub_820A0F2C);
PPC_FUNC_IMPL(__imp__sub_820A0F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820A0F30"))) PPC_WEAK_FUNC(sub_820A0F30);
PPC_FUNC_IMPL(__imp__sub_820A0F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x820A0F38;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820a1044
	if (!ctx.cr6.gt) goto loc_820A1044;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r28,r3,32
	ctx.r28.s64 = ctx.r3.s64 + 32;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r26,r3,312
	ctx.r26.s64 = ctx.r3.s64 + 312;
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// addi r24,r3,72
	ctx.r24.s64 = ctx.r3.s64 + 72;
	// subfic r20,r3,-128
	ctx.xer.ca = ctx.r3.u32 <= 4294967168;
	ctx.r20.s64 = -128 - ctx.r3.s64;
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r22,r10,51200
	ctx.r22.u64 = ctx.r10.u64 | 51200;
	// addi r21,r11,-5052
	ctx.r21.s64 = ctx.r11.s64 + -5052;
loc_820A0F80:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x820A0F88;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r23,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r23.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x820a1018
	if (!ctx.cr6.eq) goto loc_820A1018;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r20,r30
	ctx.r10.u64 = ctx.r20.u64 + ctx.r30.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a1018
	if (ctx.cr6.eq) goto loc_820A1018;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820a1018
	if (ctx.cr0.eq) goto loc_820A1018;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820a1018
	if (ctx.cr6.eq) goto loc_820A1018;
	// stw r29,-36(r30)
	PPC_STORE_U32(ctx.r30.u32 + -36, ctx.r29.u32);
	// stw r23,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r23.u32);
	// sth r22,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r22.u16);
	// lwz r8,164(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820a0ff8
	if (ctx.cr6.eq) goto loc_820A0FF8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r21
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r29.u32);
	// lwz r8,164(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_820A0FF8:
	// stw r25,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r25.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x822aa648
	ctx.lr = 0x820A1018;
	sub_822AA648(ctx, base);
loc_820A1018:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x820A1020;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820a0f80
	if (ctx.cr6.lt) goto loc_820A0F80;
loc_820A1044:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_820A104C"))) PPC_WEAK_FUNC(sub_820A104C);
PPC_FUNC_IMPL(__imp__sub_820A104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

