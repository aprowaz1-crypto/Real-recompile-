#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82123FC4"))) PPC_WEAK_FUNC(sub_82123FC4);
PPC_FUNC_IMPL(__imp__sub_82123FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123FC8"))) PPC_WEAK_FUNC(sub_82123FC8);
PPC_FUNC_IMPL(__imp__sub_82123FC8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123FEC;
	sub_82120A18(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,288(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82124024"))) PPC_WEAK_FUNC(sub_82124024);
PPC_FUNC_IMPL(__imp__sub_82124024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82124028"))) PPC_WEAK_FUNC(sub_82124028);
PPC_FUNC_IMPL(__imp__sub_82124028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82124030;
	sub_82248768(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r25,4(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82124250
	if (ctx.cr6.eq) goto loc_82124250;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82124250
	if (ctx.cr6.eq) goto loc_82124250;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// lhz r22,216(r11)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// lhz r29,216(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 216);
	// lwz r21,32(r9)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82124250
	if (!ctx.cr6.gt) goto loc_82124250;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_82124080:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82124240
	if (ctx.cr6.gt) goto loc_82124240;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82124240
	if (ctx.cr6.eq) goto loc_82124240;
	// divw r11,r30,r29
	ctx.r11.s32 = ctx.r30.s32 / ctx.r29.s32;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rotlwi r8,r30,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// mullw r7,r11,r29
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// subf r11,r7,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r7.s64;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r5,r29,r6
	ctx.r5.u64 = ctx.r29.u64 & ~ctx.r6.u64;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// twllei r29,0
	// rlwinm r31,r4,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r9,r26
	ctx.r28.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// twlgei r5,-1
	// lhz r3,122(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82124118
	if (ctx.cr6.gt) goto loc_82124118;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212413c
	if (!ctx.cr6.eq) goto loc_8212413C;
loc_82124118:
	// lhz r11,122(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 122);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212413c
	if (!ctx.cr6.eq) goto loc_8212413C;
	// lhz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212413c
	if (ctx.cr6.eq) goto loc_8212413C;
	// stb r20,124(r28)
	PPC_STORE_U8(ctx.r28.u32 + 124, ctx.r20.u8);
	// sth r20,120(r28)
	PPC_STORE_U16(ctx.r28.u32 + 120, ctx.r20.u16);
	// b 0x82124240
	goto loc_82124240;
loc_8212413C:
	// li r4,2
	ctx.r4.s64 = 2;
	// lhz r27,122(r28)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r28.u32 + 122);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82120a18
	ctx.lr = 0x8212414C;
	sub_82120A18(ctx, base);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82124240
	if (ctx.cr6.lt) goto loc_82124240;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82120a18
	ctx.lr = 0x82124160;
	sub_82120A18(ctx, base);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82124240
	if (ctx.cr6.gt) goto loc_82124240;
	// add r11,r31,r21
	ctx.r11.u64 = ctx.r31.u64 + ctx.r21.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,96
	ctx.r31.s64 = ctx.r11.s64 + 96;
	// ld r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lhz r7,122(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bge cr6,0x821241ac
	if (!ctx.cr6.lt) goto loc_821241AC;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// b 0x82124234
	goto loc_82124234;
loc_821241AC:
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x821241E8;
	sub_821209C0(ctx, base);
	// fneg f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f5,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f2,f5
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82124234:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211fe60
	ctx.lr = 0x82124240;
	sub_8211FE60(ctx, base);
loc_82124240:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,144
	ctx.r26.s64 = ctx.r26.s64 + 144;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82124080
	if (ctx.cr6.lt) goto loc_82124080;
loc_82124250:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82124258"))) PPC_WEAK_FUNC(sub_82124258);
PPC_FUNC_IMPL(__imp__sub_82124258) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,100(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82124328
	if (!ctx.cr6.eq) goto loc_82124328;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821209c0
	ctx.lr = 0x821242A8;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x821242B8;
	sub_821209C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x821242C8;
	sub_821209C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x821242D8;
	sub_821209C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f1,300(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 300, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f30,304(r9)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 304, temp.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f29,308(r8)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r8.u32 + 308, temp.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,312(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 312, temp.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r10,325(r6)
	PPC_STORE_U8(ctx.r6.u32 + 325, ctx.r10.u8);
	// bl 0x82120a18
	ctx.lr = 0x82124310;
	sub_82120A18(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mulli r3,r4,28
	ctx.r3.s64 = ctx.r4.s64 * 28;
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
loc_82124328:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212434C"))) PPC_WEAK_FUNC(sub_8212434C);
PPC_FUNC_IMPL(__imp__sub_8212434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82124350"))) PPC_WEAK_FUNC(sub_82124350);
PPC_FUNC_IMPL(__imp__sub_82124350) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821209c0
	ctx.lr = 0x82124380;
	sub_821209C0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82127378
	ctx.lr = 0x82124388;
	sub_82127378(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmuls f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// bl 0x821209c0
	ctx.lr = 0x82124398;
	sub_821209C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// bl 0x821209c0
	ctx.lr = 0x821243A8;
	sub_821209C0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82127378
	ctx.lr = 0x821243B0;
	sub_82127378(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmuls f30,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f1.f64));
	// bl 0x821209c0
	ctx.lr = 0x821243C0;
	sub_821209C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// bl 0x821209c0
	ctx.lr = 0x821243D0;
	sub_821209C0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82127378
	ctx.lr = 0x821243D8;
	sub_82127378(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f29,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f1.f64));
	// bl 0x821209c0
	ctx.lr = 0x821243E8;
	sub_821209C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fneg f13,f30
	ctx.f13.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212442C"))) PPC_WEAK_FUNC(sub_8212442C);
PPC_FUNC_IMPL(__imp__sub_8212442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82124430"))) PPC_WEAK_FUNC(sub_82124430);
PPC_FUNC_IMPL(__imp__sub_82124430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// b 0x82124350
	sub_82124350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82124458"))) PPC_WEAK_FUNC(sub_82124458);
PPC_FUNC_IMPL(__imp__sub_82124458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82124460;
	sub_82248788(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,152(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,96(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_82124490:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82124490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82124490;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82120a18
	ctx.lr = 0x821244C8;
	sub_82120A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82124508
	if (ctx.cr6.eq) goto loc_82124508;
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// twllei r3,0
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// divwu r8,r29,r3
	ctx.r8.u32 = ctx.r29.u32 / ctx.r3.u32;
	// mullw r7,r8,r3
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// subf. r6,r7,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82124798
	if (!ctx.cr0.eq) goto loc_82124798;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82124350
	ctx.lr = 0x82124500;
	sub_82124350(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82124518
	if (!ctx.cr6.eq) goto loc_82124518;
loc_82124508:
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// ld r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
loc_82124518:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bl 0x82120a18
	ctx.lr = 0x82124538;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8212454c
	if (!ctx.cr6.eq) goto loc_8212454C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x8212454C;
	sub_8208EA90(ctx, base);
loc_8212454C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lhz r7,216(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82124708
	if (ctx.cr6.lt) goto loc_82124708;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r6,r7,-3
	ctx.r6.s64 = ctx.r7.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82124578:
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,122(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// lhz r4,120(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 120);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x821245d8
	if (ctx.cr6.gt) goto loc_821245D8;
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,120(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 120);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821245d8
	if (ctx.cr6.eq) goto loc_821245D8;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_821245D8:
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,266(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 266);
	// lhz r4,264(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 264);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82124638
	if (ctx.cr6.gt) goto loc_82124638;
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,264(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 264);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82124638
	if (ctx.cr6.eq) goto loc_82124638;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 + 208;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82124638:
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,410(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 410);
	// lhz r4,408(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 408);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82124698
	if (ctx.cr6.gt) goto loc_82124698;
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,408(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 408);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82124698
	if (ctx.cr6.eq) goto loc_82124698;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,352
	ctx.r10.s64 = ctx.r10.s64 + 352;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82124698:
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,554(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 554);
	// lhz r4,552(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 552);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x821246f8
	if (ctx.cr6.gt) goto loc_821246F8;
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,552(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 552);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821246f8
	if (ctx.cr6.eq) goto loc_821246F8;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,496
	ctx.r10.s64 = ctx.r10.s64 + 496;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_821246F8:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,576
	ctx.r11.s64 = ctx.r11.s64 + 576;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82124578
	if (ctx.cr6.lt) goto loc_82124578;
loc_82124708:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82124790
	if (!ctx.cr6.lt) goto loc_82124790;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r7,r8,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82124728:
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,122(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r7,120(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82124788
	if (ctx.cr6.gt) goto loc_82124788;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82124788
	if (ctx.cr6.eq) goto loc_82124788;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82124788:
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// bdnz 0x82124728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82124728;
loc_82124790:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82124798:
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f0,9852(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fadds f1,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fadds f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fadds f13,f11,f2
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82124518
	goto loc_82124518;
}

__attribute__((alias("__imp__sub_82124800"))) PPC_WEAK_FUNC(sub_82124800);
PPC_FUNC_IMPL(__imp__sub_82124800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82124808;
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x821209e8
	ctx.lr = 0x82124838;
	sub_821209E8(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821209e8
	ctx.lr = 0x82124848;
	sub_821209E8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821209e8
	ctx.lr = 0x82124858;
	sub_821209E8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82120a18
	ctx.lr = 0x82124868;
	sub_82120A18(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82120a18
	ctx.lr = 0x82124878;
	sub_82120A18(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82120a18
	ctx.lr = 0x82124888;
	sub_82120A18(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120a18
	ctx.lr = 0x82124898;
	sub_82120A18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a18
	ctx.lr = 0x821248A8;
	sub_82120A18(ctx, base);
	// subf r9,r29,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r29.s64;
	// li r10,3
	ctx.r10.s64 = 3;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821248CC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x821248dc
	if (!ctx.cr6.eq) goto loc_821248DC;
	// stfsx f31,r11,r31
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// b 0x8212490c
	goto loc_8212490C;
loc_821248DC:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfsx f10,r11,r31
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_8212490C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821248cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821248CC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82124920"))) PPC_WEAK_FUNC(sub_82124920);
PPC_FUNC_IMPL(__imp__sub_82124920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82124928;
	sub_82248764(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r25,4(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lhz r31,216(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// bl 0x82120a18
	ctx.lr = 0x82124948;
	sub_82120A18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82120a18
	ctx.lr = 0x82124958;
	sub_82120A18(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82124b1c
	if (ctx.cr6.lt) goto loc_82124B1C;
	// lwz r21,0(r23)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82124b1c
	if (!ctx.cr6.gt) goto loc_82124B1C;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// li r20,255
	ctx.r20.s64 = 255;
loc_82124984:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82124b0c
	if (ctx.cr6.gt) goto loc_82124B0C;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82124b0c
	if (ctx.cr6.eq) goto loc_82124B0C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r11,122(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82124b0c
	if (ctx.cr6.lt) goto loc_82124B0C;
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x821249e0
	if (!ctx.cr6.gt) goto loc_821249E0;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82124b0c
	if (!ctx.cr6.lt) goto loc_82124B0C;
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, ctx.xer);
loc_821249E0:
	// bne cr6,0x821249ec
	if (!ctx.cr6.eq) goto loc_821249EC;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x82124b0c
	if (ctx.cr6.gt) goto loc_82124B0C;
loc_821249EC:
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// subf. r31,r29,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r10,r27
	ctx.r30.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bne 0x82124a5c
	if (!ctx.cr0.eq) goto loc_82124A5C;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82124a5c
	if (!ctx.cr6.eq) goto loc_82124A5C;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x82124a5c
	if (!ctx.cr6.eq) goto loc_82124A5C;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x82124a5c
	if (!ctx.cr6.eq) goto loc_82124A5C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82120a18
	ctx.lr = 0x82124A38;
	sub_82120A18(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82120a18
	ctx.lr = 0x82124A48;
	sub_82120A18(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82120a18
	ctx.lr = 0x82124A58;
	sub_82120A18(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
loc_82124A5C:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// li r10,3
	ctx.r10.s64 = 3;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r8,r8,r21
	ctx.r8.s64 = ctx.r21.s64 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
loc_82124A9C:
	// lfsx f12,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f9.u64);
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82124ae0
	if (!ctx.cr6.lt) goto loc_82124AE0;
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// b 0x82124aec
	goto loc_82124AEC;
loc_82124AE0:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82124aec
	if (!ctx.cr6.gt) goto loc_82124AEC;
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
loc_82124AEC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82124a9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82124A9C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// stb r9,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r9.u8);
loc_82124B0C:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r28,r28,144
	ctx.r28.s64 = ctx.r28.s64 + 144;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82124984
	if (!ctx.cr0.eq) goto loc_82124984;
loc_82124B1C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82124B24"))) PPC_WEAK_FUNC(sub_82124B24);
PPC_FUNC_IMPL(__imp__sub_82124B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82124B28"))) PPC_WEAK_FUNC(sub_82124B28);
PPC_FUNC_IMPL(__imp__sub_82124B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82124B30;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249918
	ctx.lr = 0x82124B38;
	sub_82249918(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,96(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_82124B64:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82124b64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82124B64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f24,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f24.f64 = double(temp.f32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f24,236(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x821272d0
	ctx.lr = 0x82124B94;
	sub_821272D0(ctx, base);
	// lbz r11,15(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 15);
	// addi r9,r11,33
	ctx.r9.s64 = ctx.r11.s64 + 33;
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,216(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82124db8
	if (!ctx.cr6.gt) goto loc_82124DB8;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82124BBC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82124dac
	if (ctx.cr6.gt) goto loc_82124DAC;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82124dac
	if (ctx.cr6.eq) goto loc_82124DAC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,122(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82124dac
	if (!ctx.cr6.eq) goto loc_82124DAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821209c0
	ctx.lr = 0x82124C10;
	sub_821209C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82124C20;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82124C30;
	sub_821209C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82124C40;
	sub_821209C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82124C50;
	sub_821209C0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82124C60;
	sub_821209C0(ctx, base);
	// fadds f11,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// stfs f24,92(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fadds f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// ble cr6,0x82124ce0
	if (!ctx.cr6.gt) goto loc_82124CE0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82120a48
	ctx.lr = 0x82124C98;
	sub_82120A48(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82127378
	ctx.lr = 0x82124CA0;
	sub_82127378(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82127330
	ctx.lr = 0x82124CAC;
	sub_82127330(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a42e0
	ctx.lr = 0x82124CB8;
	sub_820A42E0(ctx, base);
	// bl 0x82127378
	ctx.lr = 0x82124CBC;
	sub_82127378(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f0,f11,f30
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f13,f10,f29
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f12,f9,f28
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
loc_82124CE0:
	// fadds f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f25.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821209e8
	ctx.lr = 0x82124D04;
	sub_821209E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82124d78
	if (!ctx.cr6.eq) goto loc_82124D78;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820804f8
	ctx.lr = 0x82124D14;
	sub_820804F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// bl 0x82127430
	ctx.lr = 0x82124D3C;
	sub_82127430(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82127430
	ctx.lr = 0x82124D48;
	sub_82127430(ctx, base);
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f12,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f8,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,80(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f7,84(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// b 0x82124da4
	goto loc_82124DA4;
loc_82124D78:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,80(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,84(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
loc_82124DA4:
	// stfs f6,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// addi r11,r30,80
	ctx.r11.s64 = ctx.r30.s64 + 80;
loc_82124DAC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,144
	ctx.r29.s64 = ctx.r29.s64 + 144;
	// bne 0x82124bbc
	if (!ctx.cr0.eq) goto loc_82124BBC;
loc_82124DB8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249964
	ctx.lr = 0x82124DC4;
	sub_82249964(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82124DC8"))) PPC_WEAK_FUNC(sub_82124DC8);
PPC_FUNC_IMPL(__imp__sub_82124DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82124DD0;
	sub_82248774(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249910
	ctx.lr = 0x82124DD8;
	sub_82249910(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lwz r23,4(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lhz r8,216(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 216);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r11,96(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// beq cr6,0x821250c8
	if (ctx.cr6.eq) goto loc_821250C8;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82124E1C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82124e1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82124E1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f24,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f24.f64 = double(temp.f32);
	// lfs f22,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f22.f64 = double(temp.f32);
	// stfs f24,248(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f24,244(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f24,240(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f22,252(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// ble cr6,0x821250c8
	if (!ctx.cr6.gt) goto loc_821250C8;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
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
	// lfs f23,2132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f23.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f26,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,2140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	ctx.f25.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f29,8608(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8608);
	ctx.f29.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f27,30768(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30768);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,30760(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 30760);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,14780(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14780);
	ctx.f28.f64 = double(temp.f32);
loc_82124E94:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x821250b8
	if (ctx.cr6.gt) goto loc_821250B8;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821250b8
	if (ctx.cr6.eq) goto loc_821250B8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,122(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 122);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821250b8
	if (!ctx.cr6.eq) goto loc_821250B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821209c0
	ctx.lr = 0x82124EE8;
	sub_821209C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82124EF8;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82124F08;
	sub_821209C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82124F18;
	sub_821209C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82124F28;
	sub_821209C0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82124F38;
	sub_821209C0(ctx, base);
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82124F40:
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// lfsx f31,r31,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f24
	ctx.cr6.compare(ctx.f31.f64, ctx.f24.f64);
	// beq cr6,0x82124f6c
	if (ctx.cr6.eq) goto loc_82124F6C;
	// bl 0x82127378
	ctx.lr = 0x82124F54;
	sub_82127378(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfsx f0,r31,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
	// lfsx f13,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f12,r31,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
loc_82124F6C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82124f84
	if (ctx.cr6.lt) goto loc_82124F84;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
loc_82124F84:
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82124f98
	if (!ctx.cr6.lt) goto loc_82124F98;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
loc_82124F98:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// blt cr6,0x82124f40
	if (ctx.cr6.lt) goto loc_82124F40;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82124fe8
	if (!ctx.cr6.eq) goto loc_82124FE8;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f29,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x82124fd4
	if (!ctx.cr6.gt) goto loc_82124FD4;
	// fsubs f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// stfs f0,112(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 112, temp.u32);
	// b 0x821250b8
	goto loc_821250B8;
loc_82124FD4:
	// fcmpu cr6,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x82124fe0
	if (!ctx.cr6.lt) goto loc_82124FE0;
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
loc_82124FE0:
	// stfs f0,112(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 112, temp.u32);
	// b 0x821250b8
	goto loc_821250B8;
loc_82124FE8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820804f8
	ctx.lr = 0x82124FF0;
	sub_820804F8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f22,124(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82187920
	ctx.lr = 0x82125024;
	sub_82187920(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821209e8
	ctx.lr = 0x82125030;
	sub_821209E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82125054
	if (ctx.cr6.eq) goto loc_82125054;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x82127430
	ctx.lr = 0x82125048;
	sub_82127430(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82127430
	ctx.lr = 0x82125054;
	sub_82127430(ctx, base);
loc_82125054:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821250b8
	if (ctx.cr6.eq) goto loc_821250B8;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r11,r25,r10
	ctx.r11.u64 = ctx.r25.u64 + ctx.r10.u64;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stdx r5,r25,r10
	PPC_STORE_U64(ctx.r25.u32 + ctx.r10.u32, ctx.r5.u64);
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
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r8,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r8.u64);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r7,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r7.u64);
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r5,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r5.u64);
	// ld r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r4,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r4.u64);
loc_821250B8:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r29,r29,144
	ctx.r29.s64 = ctx.r29.s64 + 144;
	// addi r25,r25,64
	ctx.r25.s64 = ctx.r25.s64 + 64;
	// bne 0x82124e94
	if (!ctx.cr0.eq) goto loc_82124E94;
loc_821250C8:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8224995c
	ctx.lr = 0x821250D4;
	sub_8224995C(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821250D8"))) PPC_WEAK_FUNC(sub_821250D8);
PPC_FUNC_IMPL(__imp__sub_821250D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821250E0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8212521c
	if (ctx.cr6.eq) goto loc_8212521C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lhz r30,216(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// bl 0x82120a18
	ctx.lr = 0x8212510C;
	sub_82120A18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x8212511C;
	sub_821209E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x8212512C;
	sub_82120A18(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bge cr6,0x82125138
	if (!ctx.cr6.lt) goto loc_82125138;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82125138:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8212521c
	if (!ctx.cr6.gt) goto loc_8212521C;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82125148:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r10,125(r9)
	PPC_STORE_U8(ctx.r9.u32 + 125, ctx.r10.u8);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r6,122(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r5,120(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82125214
	if (ctx.cr6.gt) goto loc_82125214;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82125214
	if (ctx.cr6.eq) goto loc_82125214;
	// lhz r11,122(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 122);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x821251b8
	if (!ctx.cr6.eq) goto loc_821251B8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82125214
	if (!ctx.cr6.eq) goto loc_82125214;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82125214
	if (ctx.cr6.lt) goto loc_82125214;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,125(r9)
	PPC_STORE_U8(ctx.r9.u32 + 125, ctx.r11.u8);
	// b 0x82125214
	goto loc_82125214;
loc_821251B8:
	// divwu r11,r11,r26
	ctx.r11.u32 = ctx.r11.u32 / ctx.r26.u32;
	// twllei r26,0
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821251f8
	if (ctx.cr6.lt) goto loc_821251F8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821251f4
	if (ctx.cr6.eq) goto loc_821251F4;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r7,r11,r29
	ctx.r7.s32 = ctx.r11.s32 / ctx.r29.s32;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r5,r7,r29
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// andc r4,r29,r6
	ctx.r4.u64 = ctx.r29.u64 & ~ctx.r6.u64;
	// twllei r29,0
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// twlgei r4,-1
	// b 0x821251f8
	goto loc_821251F8;
loc_821251F4:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
loc_821251F8:
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82125214
	if (ctx.cr6.lt) goto loc_82125214;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stb r7,125(r9)
	PPC_STORE_U8(ctx.r9.u32 + 125, ctx.r7.u8);
loc_82125214:
	// addi r8,r8,144
	ctx.r8.s64 = ctx.r8.s64 + 144;
	// bdnz 0x82125148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82125148;
loc_8212521C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82125224"))) PPC_WEAK_FUNC(sub_82125224);
PPC_FUNC_IMPL(__imp__sub_82125224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82125228"))) PPC_WEAK_FUNC(sub_82125228);
PPC_FUNC_IMPL(__imp__sub_82125228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82125230;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184800
	ctx.lr = 0x8212524C;
	sub_82184800(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// stb r6,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r6.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r4.u8);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r3,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r3.u8);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r6,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r6.u8);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r4,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r4.u8);
	// lbz r3,11(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// stb r3,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r3.u8);
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// stb r10,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r10.u8);
	// lbz r9,9(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r9,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r9.u8);
	// lbz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r6,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r6.u8);
	// lbz r4,15(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// stb r4,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r4.u8);
	// lbz r3,14(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// stb r3,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r3.u8);
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r10,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r10.u8);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r9,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r9.u8);
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// beq cr6,0x821253e8
	if (ctx.cr6.eq) goto loc_821253E8;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821209e8
	ctx.lr = 0x8212530C;
	sub_821209E8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r29,32(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a18
	ctx.lr = 0x82125320;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x821253e8
	if (ctx.cr6.lt) goto loc_821253E8;
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lfs f12,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r5,r6,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// rlwinm r4,r6,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF;
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// rlwinm r3,r6,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f10,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r6,r10,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// rlwinm r9,r10,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// lfs f8,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r4,r5,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// rlwinm r3,r5,16,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// rlwinm r11,r5,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_821253E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821253F0"))) PPC_WEAK_FUNC(sub_821253F0);
PPC_FUNC_IMPL(__imp__sub_821253F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82125228
	sub_82125228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821253F4"))) PPC_WEAK_FUNC(sub_821253F4);
PPC_FUNC_IMPL(__imp__sub_821253F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821253F8"))) PPC_WEAK_FUNC(sub_821253F8);
PPC_FUNC_IMPL(__imp__sub_821253F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82125400;
	sub_82248774(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249908
	ctx.lr = 0x82125408;
	sub_82249908(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lhz r23,216(r11)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8212566c
	if (!ctx.cr6.eq) goto loc_8212566C;
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212544c
	if (!ctx.cr6.eq) goto loc_8212544C;
	// bl 0x8218f720
	ctx.lr = 0x82125448;
	sub_8218F720(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_8212544C:
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x8212545C;
	sub_821209E8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x8212546C;
	sub_821209E8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8212566c
	if (!ctx.cr6.gt) goto loc_8212566C;
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
	// lfs f22,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f22.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f24,8608(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8608);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,30760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30760);
	ctx.f23.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f28,14780(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14780);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,8328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8328);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,8060(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8060);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,30772(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 30772);
	ctx.f31.f64 = double(temp.f32);
loc_821254B8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x821209c0
	ctx.lr = 0x821254D0;
	sub_821209C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x821254E0;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x821254F0;
	sub_821209C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82125500;
	sub_821209C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f20,f1
	ctx.fpscr.disableFlushMode();
	ctx.f20.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82125510;
	sub_821209C0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82125520;
	sub_821209C0(ctx, base);
	// clrlwi r9,r30,17
	ctx.r9.u64 = ctx.r30.u32 & 0x7FFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmadds f12,f10,f20,f21
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f20.f64 + ctx.f21.f64));
	// fcmpu cr6,f12,f28
	ctx.cr6.compare(ctx.f12.f64, ctx.f28.f64);
	// ble cr6,0x8212554c
	if (!ctx.cr6.gt) goto loc_8212554C;
	// fsubs f12,f12,f23
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f23.f64));
loc_8212554C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r11,17
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmsubs f10,f11,f31,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fmuls f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmadds f13,f9,f26,f27
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f26.f64 + ctx.f27.f64));
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// ble cr6,0x82125588
	if (!ctx.cr6.gt) goto loc_82125588;
	// fsubs f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f23.f64));
loc_82125588:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r11,17
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f9,f10,f31,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fmuls f8,f9,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmadds f0,f8,f1,f25
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f25.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x821255c4
	if (!ctx.cr6.gt) goto loc_821255C4;
	// fsubs f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f23.f64));
loc_821255C4:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r8,122(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r7,120(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8212565c
	if (ctx.cr6.gt) goto loc_8212565C;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212565c
	if (ctx.cr6.eq) goto loc_8212565C;
	// lhz r11,122(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 122);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8212565c
	if (ctx.cr6.lt) goto loc_8212565C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82125620
	if (!ctx.cr6.gt) goto loc_82125620;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x8212565c
	if (!ctx.cr6.lt) goto loc_8212565C;
loc_82125620:
	// fmuls f12,f12,f24
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f24.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f13,f24
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f10,f0,f24
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f22,124(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82187920
	ctx.lr = 0x82125648;
	sub_82187920(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211e710
	ctx.lr = 0x82125654;
	sub_8211E710(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82127430
	ctx.lr = 0x8212565C;
	sub_82127430(ctx, base);
loc_8212565C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,144
	ctx.r29.s64 = ctx.r29.s64 + 144;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x821254b8
	if (ctx.cr6.lt) goto loc_821254B8;
loc_8212566C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249954
	ctx.lr = 0x82125678;
	sub_82249954(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8212567C"))) PPC_WEAK_FUNC(sub_8212567C);
PPC_FUNC_IMPL(__imp__sub_8212567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82125680"))) PPC_WEAK_FUNC(sub_82125680);
PPC_FUNC_IMPL(__imp__sub_82125680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82125688;
	sub_8224877C(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249928
	ctx.lr = 0x82125690;
	sub_82249928(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r31,216(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 216);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821209e8
	ctx.lr = 0x821256B4;
	sub_821209E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821209e8
	ctx.lr = 0x821256C4;
	sub_821209E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821209c0
	ctx.lr = 0x821256D4;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x821256E4;
	sub_821209C0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lfs f31,14876(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f28,f1,f31
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// ble cr6,0x82125820
	if (!ctx.cr6.gt) goto loc_82125820;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lfs f30,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
loc_82125708:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82125814
	if (ctx.cr6.gt) goto loc_82125814;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82125814
	if (ctx.cr6.eq) goto loc_82125814;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r11,122(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82125814
	if (ctx.cr6.lt) goto loc_82125814;
	// subf r31,r27,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82125814
	if (ctx.cr6.lt) goto loc_82125814;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82127330
	ctx.lr = 0x82125764;
	sub_82127330(ctx, base);
	// lbz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 124);
	// fmuls f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmadds f0,f1,f28,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64 + ctx.f0.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// bne cr6,0x821257c0
	if (!ctx.cr6.eq) goto loc_821257C0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821257a4
	if (!ctx.cr6.gt) goto loc_821257A4;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lbz r11,103(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// b 0x82125810
	goto loc_82125810;
loc_821257A4:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x821257b0
	if (!ctx.cr6.lt) goto loc_821257B0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_821257B0:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lbz r11,103(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// b 0x82125810
	goto loc_82125810;
loc_821257C0:
	// subf r11,r31,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r31.s64;
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fadds f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821257f8
	if (!ctx.cr6.gt) goto loc_821257F8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82125804
	goto loc_82125804;
loc_821257F8:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82125804
	if (!ctx.cr6.lt) goto loc_82125804;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_82125804:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lbz r11,103(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
loc_82125810:
	// stb r11,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r11.u8);
loc_82125814:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,144
	ctx.r29.s64 = ctx.r29.s64 + 144;
	// bne 0x82125708
	if (!ctx.cr0.eq) goto loc_82125708;
loc_82125820:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249974
	ctx.lr = 0x8212582C;
	sub_82249974(ctx, base);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82125830"))) PPC_WEAK_FUNC(sub_82125830);
PPC_FUNC_IMPL(__imp__sub_82125830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248758
	ctx.lr = 0x82125838;
	sub_82248758(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lwz r18,4(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lhz r30,216(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 216);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82125874
	if (!ctx.cr6.eq) goto loc_82125874;
	// bl 0x822488d0
	ctx.lr = 0x82125870;
	sub_822488D0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82125874:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821209e8
	ctx.lr = 0x8212588C;
	sub_821209E8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x8212589C;
	sub_821209E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x821258AC;
	sub_821209E8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x821258BC;
	sub_821209E8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x821258CC;
	sub_821209E8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x821258DC;
	sub_821209E8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x821258EC;
	sub_821209E8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x821258FC;
	sub_821209E8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82125b08
	if (!ctx.cr6.gt) goto loc_82125B08;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r17,255
	ctx.r17.s64 = 255;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_82125918:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82125af8
	if (ctx.cr6.gt) goto loc_82125AF8;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82125af8
	if (ctx.cr6.eq) goto loc_82125AF8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r11,122(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x82125af8
	if (ctx.cr6.lt) goto loc_82125AF8;
	// subf. r11,r19,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r19.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82125af8
	if (!ctx.cr0.eq) goto loc_82125AF8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mullw r11,r11,r11
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82127330
	ctx.lr = 0x8212597C;
	sub_82127330(ctx, base);
	// extsw r9,r23
	ctx.r9.s64 = ctx.r23.s32;
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmadds f8,f1,f10,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x82127378
	ctx.lr = 0x821259BC;
	sub_82127378(ctx, base);
	// extsw r6,r22
	ctx.r6.s64 = ctx.r22.s32;
	// extsw r7,r25
	ctx.r7.s64 = ctx.r25.s32;
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f5,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f0,f3
	ctx.f0.f64 = double(float(ctx.f3.f64));
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmadds f13,f1,f2,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// bl 0x82127330
	ctx.lr = 0x82125A00;
	sub_82127330(ctx, base);
	// extsw r3,r21
	ctx.r3.s64 = ctx.r21.s32;
	// extsw r4,r24
	ctx.r4.s64 = ctx.r24.s32;
	// std r3,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// lfd f10,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// li r10,3
	ctx.r10.s64 = 3;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmadds f5,f1,f7,f6
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f4.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// bne cr6,0x82125a7c
	if (!ctx.cr6.eq) goto loc_82125A7C;
loc_82125A50:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82125a64
	if (!ctx.cr6.gt) goto loc_82125A64;
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// b 0x82125a70
	goto loc_82125A70;
loc_82125A64:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82125a70
	if (!ctx.cr6.lt) goto loc_82125A70;
	// stw r16,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
loc_82125A70:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82125a50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82125A50;
	// b 0x82125acc
	goto loc_82125ACC;
loc_82125A7C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82125aa0
	if (!ctx.cr6.gt) goto loc_82125AA0;
loc_82125A88:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-256
	ctx.r10.s64 = ctx.r10.s64 + -256;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// bgt cr6,0x82125a88
	if (ctx.cr6.gt) goto loc_82125A88;
loc_82125AA0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82125ac4
	if (!ctx.cr6.lt) goto loc_82125AC4;
loc_82125AAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82125aac
	if (ctx.cr6.lt) goto loc_82125AAC;
loc_82125AC4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82125a7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82125A7C;
loc_82125ACC:
	// lwz r11,24(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 24);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stbx r10,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r11,24(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 24);
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// lwz r11,24(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 24);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stb r7,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r7.u8);
loc_82125AF8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82125918
	if (!ctx.cr0.eq) goto loc_82125918;
loc_82125B08:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487a8
	// ERROR 822487A8
	return;
}

__attribute__((alias("__imp__sub_82125B10"))) PPC_WEAK_FUNC(sub_82125B10);
PPC_FUNC_IMPL(__imp__sub_82125B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82125B18;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249920
	ctx.lr = 0x82125B20;
	sub_82249920(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lhz r30,216(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 216);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82125b58
	if (!ctx.cr6.eq) goto loc_82125B58;
	// bl 0x822488d0
	ctx.lr = 0x82125B54;
	sub_822488D0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82125B58:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821209e8
	ctx.lr = 0x82125B6C;
	sub_821209E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x82125B7C;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82125B8C;
	sub_821209C0(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82125c58
	if (!ctx.cr6.gt) goto loc_82125C58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f29,2132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f29.f64 = double(temp.f32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lfs f31,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,8608(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8608);
	ctx.f28.f64 = double(temp.f32);
loc_82125BC0:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82125c4c
	if (ctx.cr6.gt) goto loc_82125C4C;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82125c4c
	if (ctx.cr6.eq) goto loc_82125C4C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r11,122(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82125c4c
	if (ctx.cr6.lt) goto loc_82125C4C;
	// subf. r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82125c4c
	if (!ctx.cr0.eq) goto loc_82125C4C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82127330
	ctx.lr = 0x82125C18;
	sub_82127330(ctx, base);
	// fmadds f0,f1,f26,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f26.f64 + ctx.f27.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82125c34
	if (!ctx.cr6.gt) goto loc_82125C34;
loc_82125C28:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82125c28
	if (ctx.cr6.gt) goto loc_82125C28;
loc_82125C34:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82125c48
	if (!ctx.cr6.lt) goto loc_82125C48;
loc_82125C3C:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x82125c3c
	if (ctx.cr6.lt) goto loc_82125C3C;
loc_82125C48:
	// stfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
loc_82125C4C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// bne 0x82125bc0
	if (!ctx.cr0.eq) goto loc_82125BC0;
loc_82125C58:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8224996c
	ctx.lr = 0x82125C64;
	sub_8224996C(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82125C68"))) PPC_WEAK_FUNC(sub_82125C68);
PPC_FUNC_IMPL(__imp__sub_82125C68) {
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
	// bl 0x822488d0
	ctx.lr = 0x82125C80;
	sub_822488D0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82125C98"))) PPC_WEAK_FUNC(sub_82125C98);
PPC_FUNC_IMPL(__imp__sub_82125C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82125CA0;
	sub_8224878C(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249920
	ctx.lr = 0x82125CA8;
	sub_82249920(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,16(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x821209c0
	ctx.lr = 0x82125CC8;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x82125CD8;
	sub_821209C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82125CE8;
	sub_821209C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82125CF8;
	sub_821209C0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82125D08;
	sub_821209C0(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x821272b0
	ctx.lr = 0x82125D14;
	sub_821272B0(ctx, base);
	// rlwinm r9,r3,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,11300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f13,8060(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f29,2148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f12,8328(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8328);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f7,f9,f0,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmsubs f8,f10,f0,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f28,f6,f28,f31
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f31.f64));
	// fmadds f31,f5,f26,f27
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f26.f64 + ctx.f27.f64));
	// beq cr6,0x82125d94
	if (ctx.cr6.eq) goto loc_82125D94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a48
	ctx.lr = 0x82125D88;
	sub_82120A48(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fadds f28,f0,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82125D94:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bne cr6,0x82125da4
	if (!ctx.cr6.eq) goto loc_82125DA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,11484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11484);
	ctx.f31.f64 = double(temp.f32);
loc_82125DA4:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stfs f28,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8224996c
	ctx.lr = 0x82125DC0;
	sub_8224996C(ctx, base);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82125DC4"))) PPC_WEAK_FUNC(sub_82125DC4);
PPC_FUNC_IMPL(__imp__sub_82125DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82125DC8"))) PPC_WEAK_FUNC(sub_82125DC8);
PPC_FUNC_IMPL(__imp__sub_82125DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82125DD0;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lhz r22,216(r11)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// bl 0x821209e8
	ctx.lr = 0x82125DF4;
	sub_821209E8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821209e8
	ctx.lr = 0x82125E04;
	sub_821209E8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82125f08
	if (!ctx.cr6.gt) goto loc_82125F08;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
loc_82125E28:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82125ef4
	if (ctx.cr6.gt) goto loc_82125EF4;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82125ef4
	if (ctx.cr6.eq) goto loc_82125EF4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,122(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 122);
	// subf r30,r23,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r23.s64;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82125ef4
	if (ctx.cr6.gt) goto loc_82125EF4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82125e88
	if (!ctx.cr6.eq) goto loc_82125E88;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82125c98
	ctx.lr = 0x82125E88;
	sub_82125C98(ctx, base);
loc_82125E88:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82125eac
	if (!ctx.cr6.eq) goto loc_82125EAC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82125ef4
	if (!ctx.cr6.eq) goto loc_82125EF4;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// b 0x82125ef4
	goto loc_82125EF4;
loc_82125EAC:
	// subf r11,r30,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r30.s64;
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
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
	// fdivs f7,f31,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 / ctx.f8.f64));
	// fmadds f6,f12,f7,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,128(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fmadds f3,f4,f7,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,132(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
loc_82125EF4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,144
	ctx.r29.s64 = ctx.r29.s64 + 144;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82125e28
	if (ctx.cr6.lt) goto loc_82125E28;
loc_82125F08:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82125F14"))) PPC_WEAK_FUNC(sub_82125F14);
PPC_FUNC_IMPL(__imp__sub_82125F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82125F18"))) PPC_WEAK_FUNC(sub_82125F18);
PPC_FUNC_IMPL(__imp__sub_82125F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82125F20;
	sub_82248778(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249918
	ctx.lr = 0x82125F28;
	sub_82249918(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r31,216(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// bl 0x821272d0
	ctx.lr = 0x82125F40;
	sub_821272D0(ctx, base);
	// lbz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 14);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,33
	ctx.r10.s64 = ctx.r11.s64 + 33;
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821209e8
	ctx.lr = 0x82125F5C;
	sub_821209E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821209c0
	ctx.lr = 0x82125F6C;
	sub_821209C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82125F7C;
	sub_821209C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82125F8C;
	sub_821209C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82125F9C;
	sub_821209C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82125FAC;
	sub_821209C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82125FBC;
	sub_821209C0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x821209e8
	ctx.lr = 0x82125FCC;
	sub_821209E8(ctx, base);
	// lwz r8,152(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mulli r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 * 28;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r25,96(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// ble cr6,0x821261b0
	if (!ctx.cr6.gt) goto loc_821261B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f27,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f28.f64 = double(temp.f32);
loc_82125FFC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x821261a4
	if (ctx.cr6.gt) goto loc_821261A4;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821261a4
	if (ctx.cr6.eq) goto loc_821261A4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r11,122(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 122);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x821261a4
	if (ctx.cr6.lt) goto loc_821261A4;
	// subf. r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821261a4
	if (!ctx.cr0.eq) goto loc_821261A4;
	// stfs f28,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82120a48
	ctx.lr = 0x82126064;
	sub_82120A48(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82127378
	ctx.lr = 0x82126070;
	sub_82127378(ctx, base);
	// fmuls f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82127330
	ctx.lr = 0x82126080;
	sub_82127330(ctx, base);
	// fmuls f12,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821209e8
	ctx.lr = 0x82126094;
	sub_821209E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821260d0
	if (ctx.cr6.eq) goto loc_821260D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a42e0
	ctx.lr = 0x821260A4;
	sub_820A42E0(ctx, base);
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f31,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f12,f29,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fsqrts f8,f12
	ctx.f8.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// b 0x821260dc
	goto loc_821260DC;
loc_821260D0:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
loc_821260DC:
	// fadds f12,f12,f26
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f26.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f11,f13,f25
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f25.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f10,f0,f24
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82126198
	if (ctx.cr6.eq) goto loc_82126198;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r11,r25,-8
	ctx.r11.s64 = ctx.r25.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8212610C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8212610c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212610C;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8212612C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8212612c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212612C;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfs f28,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f28,228(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f28,224(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f27,236(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f27,172(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x82126160;
	sub_820804F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// bl 0x82127430
	ctx.lr = 0x82126184;
	sub_82127430(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82127430
	ctx.lr = 0x82126190;
	sub_82127430(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// b 0x8212619c
	goto loc_8212619C;
loc_82126198:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8212619C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8211fe88
	ctx.lr = 0x821261A4;
	sub_8211FE88(ctx, base);
loc_821261A4:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r28,r28,144
	ctx.r28.s64 = ctx.r28.s64 + 144;
	// bne 0x82125ffc
	if (!ctx.cr0.eq) goto loc_82125FFC;
loc_821261B0:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249964
	ctx.lr = 0x821261BC;
	sub_82249964(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821261C0"))) PPC_WEAK_FUNC(sub_821261C0);
PPC_FUNC_IMPL(__imp__sub_821261C0) {
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
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,100(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821262a8
	if (!ctx.cr6.eq) goto loc_821262A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x82248a40
	ctx.lr = 0x82126210;
	sub_82248A40(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82120a18
	ctx.lr = 0x82126224;
	sub_82120A18(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126240;
	sub_821209C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126250;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126260;
	sub_821209C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126270;
	sub_821209C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126280;
	sub_821209C0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126290;
	sub_821209C0(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// bl 0x82248a40
	ctx.lr = 0x821262A8;
	sub_82248A40(ctx, base);
loc_821262A8:
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

__attribute__((alias("__imp__sub_821262C0"))) PPC_WEAK_FUNC(sub_821262C0);
PPC_FUNC_IMPL(__imp__sub_821262C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821262C8;
	sub_8224877C(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249928
	ctx.lr = 0x821262D0;
	sub_82249928(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r8,156(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 * 28;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r10,240
	ctx.r4.s64 = ctx.r10.s64 + 240;
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r29,r9,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x82248a40
	ctx.lr = 0x82126310;
	sub_82248A40(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// bl 0x82120a18
	ctx.lr = 0x82126324;
	sub_82120A18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82126334;
	sub_82120A18(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// add r10,r26,r3
	ctx.r10.u64 = ctx.r26.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821264cc
	if (!ctx.cr6.eq) goto loc_821264CC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82126354
	if (!ctx.cr6.eq) goto loc_82126354;
loc_8212634C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82126358
	if (!ctx.cr6.eq) goto loc_82126358;
loc_82126354:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82126358:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82126530
	if (ctx.cr6.eq) goto loc_82126530;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82126530
	if (ctx.cr6.eq) goto loc_82126530;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82126378;
	sub_82120A18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82126384;
	sub_82120A18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// bl 0x82120a18
	ctx.lr = 0x82126398;
	sub_82120A18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f29,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82126410
	if (ctx.cr6.eq) goto loc_82126410;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x821263BC;
	sub_82120A18(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bl 0x82127378
	ctx.lr = 0x821263D4;
	sub_82127378(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821263e4
	if (!ctx.cr6.gt) goto loc_821263E4;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
loc_821263E4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821263f0
	if (!ctx.cr6.lt) goto loc_821263F0;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
loc_821263F0:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
loc_82126410:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x8212641C;
	sub_821209E8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r29,216(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// bl 0x82120a18
	ctx.lr = 0x82126434;
	sub_82120A18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82126444;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821264fc
	if (ctx.cr6.eq) goto loc_821264FC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8212651c
	if (!ctx.cr6.gt) goto loc_8212651C;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f28,f11
	ctx.f28.f64 = double(float(ctx.f11.f64));
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
loc_82126480:
	// bl 0x82127378
	ctx.lr = 0x82126484;
	sub_82127378(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82126494
	if (!ctx.cr6.gt) goto loc_82126494;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
loc_82126494:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821264a0
	if (!ctx.cr6.lt) goto loc_821264A0;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
loc_821264A0:
	// fadds f0,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821264b0
	if (!ctx.cr6.lt) goto loc_821264B0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_821264B0:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stfiwx f0,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.f0.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82126480
	if (!ctx.cr0.eq) goto loc_82126480;
	// b 0x8212651c
	goto loc_8212651C;
loc_821264CC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212634c
	if (ctx.cr6.eq) goto loc_8212634C;
	// rotlwi r10,r29,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// divw r9,r29,r11
	ctx.r9.s32 = ctx.r29.s32 / ctx.r11.s32;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// andc r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twllei r11,0
	// subf. r6,r8,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// twlgei r5,-1
	// bne 0x82126358
	if (!ctx.cr0.eq) goto loc_82126358;
	// b 0x82126354
	goto loc_82126354;
loc_821264FC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8212651c
	if (!ctx.cr6.gt) goto loc_8212651C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_8212650C:
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8212650c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212650C;
loc_8212651C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// bl 0x82248a40
	ctx.lr = 0x82126530;
	sub_82248A40(ctx, base);
loc_82126530:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249974
	ctx.lr = 0x8212653C;
	sub_82249974(ctx, base);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82126540"))) PPC_WEAK_FUNC(sub_82126540);
PPC_FUNC_IMPL(__imp__sub_82126540) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82184800
	ctx.lr = 0x82126574;
	sub_82184800(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82126580;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bgt cr6,0x821265a8
	if (ctx.cr6.gt) goto loc_821265A8;
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8211e668
	ctx.lr = 0x82126594;
	sub_8211E668(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821265a8
	if (ctx.cr6.eq) goto loc_821265A8;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82120a18
	ctx.lr = 0x821265A4;
	sub_82120A18(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_821265A8:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x821265B4;
	sub_821209C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x821265C4;
	sub_821209C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82120a48
	ctx.lr = 0x821265D0;
	sub_82120A48(ctx, base);
	// fmadds f12,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82126600
	if (!ctx.cr6.gt) goto loc_82126600;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x8212661c
	goto loc_8212661C;
loc_82126600:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8212661c
	if (!ctx.cr6.lt) goto loc_8212661C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_8212661C:
	// stfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82126640"))) PPC_WEAK_FUNC(sub_82126640);
PPC_FUNC_IMPL(__imp__sub_82126640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82126648;
	sub_8224876C(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8224990c
	ctx.lr = 0x82126650;
	sub_8224990C(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r23,0(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r24,4(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82120a18
	ctx.lr = 0x8212666C;
	sub_82120A18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x8212667C;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x8212668C;
	sub_821209C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f26,8608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8608);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f1,f26
	ctx.f25.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// bl 0x821209c0
	ctx.lr = 0x821266A4;
	sub_821209C0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r22,14(r31)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// fmuls f23,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// lbz r21,15(r31)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f24,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f24.f64 = double(temp.f32);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// fmr f28,f24
	ctx.f28.f64 = ctx.f24.f64;
	// lhz r11,216(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821269ac
	if (!ctx.cr6.gt) goto loc_821269AC;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f30,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,2132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2132);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,2140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	ctx.f29.f64 = double(temp.f32);
loc_821266FC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f24.f64;
	// fcmpu cr6,f23,f24
	ctx.cr6.compare(ctx.f23.f64, ctx.f24.f64);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// beq cr6,0x82126728
	if (ctx.cr6.eq) goto loc_82126728;
	// addi r5,r21,750
	ctx.r5.s64 = ctx.r21.s64 + 750;
	// addi r4,r22,300
	ctx.r4.s64 = ctx.r22.s64 + 300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821273c8
	ctx.lr = 0x82126724;
	sub_821273C8(ctx, base);
	// fmuls f0,f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f23.f64));
loc_82126728:
	// lhz r11,122(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// lfs f13,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f9,f10,f25,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f25.f64 + ctx.f0.f64));
	// fadds f31,f9,f13
	ctx.f31.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
loc_82126750:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bgt cr6,0x82126760
	if (ctx.cr6.gt) goto loc_82126760;
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bge cr6,0x82126780
	if (!ctx.cr6.lt) goto loc_82126780;
loc_82126760:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x82126770
	if (!ctx.cr6.gt) goto loc_82126770;
	// fsubs f31,f31,f30
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// b 0x82126750
	goto loc_82126750;
loc_82126770:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bge cr6,0x82126750
	if (!ctx.cr6.lt) goto loc_82126750;
	// fadds f31,f31,f30
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// b 0x82126750
	goto loc_82126750;
loc_82126780:
	// fadds f1,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f25.f64));
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x82126794
	if (!ctx.cr6.gt) goto loc_82126794;
	// fsubs f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// b 0x821267a0
	goto loc_821267A0;
loc_82126794:
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// bge cr6,0x821267a0
	if (!ctx.cr6.lt) goto loc_821267A0;
	// fadds f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
loc_821267A0:
	// bl 0x82249e70
	ctx.lr = 0x821267A4;
	sub_82249E70(ctx, base);
	// frsp f21,f1
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82249e70
	ctx.lr = 0x821267B0;
	sub_82249E70(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmplwi cr6,r28,9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 9, ctx.xer);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// fsubs f13,f21,f0
	ctx.f13.f64 = double(float(ctx.f21.f64 - ctx.f0.f64));
	// fmuls f0,f13,f22
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// bgt cr6,0x82126888
	if (ctx.cr6.gt) goto loc_82126888;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26596
	ctx.r12.s64 = ctx.r12.s64 + 26596;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,26636(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26636);
	// lwz r16,26644(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26644);
	// lwz r16,26652(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26652);
	// lwz r16,26660(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26660);
	// lwz r16,26668(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26668);
	// lwz r16,26684(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26684);
	// lwz r16,26700(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26700);
	// lwz r16,26716(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26716);
	// lwz r16,26724(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26724);
	// lwz r16,26732(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26732);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// b 0x82126890
	goto loc_82126890;
	// lbz r31,1(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// b 0x82126890
	goto loc_82126890;
	// lbz r31,2(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// b 0x82126890
	goto loc_82126890;
	// lbz r31,124(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 124);
	// b 0x82126890
	goto loc_82126890;
	// lfs f13,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,64(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// b 0x82126890
	goto loc_82126890;
	// lfs f13,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,68(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// b 0x82126890
	goto loc_82126890;
	// lfs f13,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,72(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// b 0x82126890
	goto loc_82126890;
	// lfs f28,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f28.f64 = double(temp.f32);
	// b 0x82126890
	goto loc_82126890;
	// lfs f28,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f28.f64 = double(temp.f32);
	// b 0x82126890
	goto loc_82126890;
	// lfs f13,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,128(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// stfs f10,132(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// b 0x8212699c
	goto loc_8212699C;
loc_82126888:
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// bgt cr6,0x8212699c
	if (ctx.cr6.gt) goto loc_8212699C;
loc_82126890:
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821268b8
	// bdzf 4*cr6+eq,0x821268b8
	// bdzf 4*cr6+eq,0x821268b8
	// bdzf 4*cr6+eq,0x82126938
	// bdzf 4*cr6+eq,0x82126938
	// bdzf 4*cr6+eq,0x82126938
	// bdzf 4*cr6+eq,0x82126914
	// bne cr6,0x82126914
	if (!ctx.cr6.eq) goto loc_82126914;
loc_821268B8:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821268f0
	if (!ctx.cr6.eq) goto loc_821268F0;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add. r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x821268e0
	if (!ctx.cr0.lt) goto loc_821268E0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82126938
	goto loc_82126938;
loc_821268E0:
	// cmpwi cr6,r31,255
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 255, ctx.xer);
	// ble cr6,0x82126938
	if (!ctx.cr6.gt) goto loc_82126938;
	// li r31,255
	ctx.r31.s64 = 255;
	// b 0x82126938
	goto loc_82126938;
loc_821268F0:
	// stfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add. r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82126904
	if (!ctx.cr0.lt) goto loc_82126904;
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
loc_82126904:
	// cmpwi cr6,r31,255
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 255, ctx.xer);
	// ble cr6,0x82126938
	if (!ctx.cr6.gt) goto loc_82126938;
	// addi r31,r31,-256
	ctx.r31.s64 = ctx.r31.s64 + -256;
	// b 0x82126938
	goto loc_82126938;
loc_82126914:
	// fmadds f0,f0,f26,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f28.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82126928
	if (!ctx.cr6.gt) goto loc_82126928;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// b 0x82126934
	goto loc_82126934;
loc_82126928:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82126934
	if (!ctx.cr6.lt) goto loc_82126934;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
loc_82126934:
	// fmr f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f0.f64;
loc_82126938:
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8212696c
	// bdzf 4*cr6+eq,0x82126978
	// bdzf 4*cr6+eq,0x82126984
	// bdzf 4*cr6+eq,0x8212699c
	// bdzf 4*cr6+eq,0x8212699c
	// bdzf 4*cr6+eq,0x8212699c
	// bdzf 4*cr6+eq,0x82126990
	// bne cr6,0x82126998
	if (!ctx.cr6.eq) goto loc_82126998;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// b 0x8212699c
	goto loc_8212699C;
loc_8212696C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// b 0x8212699c
	goto loc_8212699C;
loc_82126978:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// b 0x8212699c
	goto loc_8212699C;
loc_82126984:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stb r11,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r11.u8);
	// b 0x8212699c
	goto loc_8212699C;
loc_82126990:
	// stfs f28,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// b 0x8212699c
	goto loc_8212699C;
loc_82126998:
	// stfs f28,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
loc_8212699C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,144
	ctx.r27.s64 = ctx.r27.s64 + 144;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x821266fc
	if (!ctx.cr0.eq) goto loc_821266FC;
loc_821269AC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82249958
	ctx.lr = 0x821269B8;
	sub_82249958(ctx, base);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_821269BC"))) PPC_WEAK_FUNC(sub_821269BC);
PPC_FUNC_IMPL(__imp__sub_821269BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821269C0"))) PPC_WEAK_FUNC(sub_821269C0);
PPC_FUNC_IMPL(__imp__sub_821269C0) {
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
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,100(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82126a98
	if (!ctx.cr6.eq) goto loc_82126A98;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x82248a40
	ctx.lr = 0x82126A10;
	sub_82248A40(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82120a18
	ctx.lr = 0x82126A24;
	sub_82120A18(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126A40;
	sub_821209C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126A50;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126A60;
	sub_821209C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126A70;
	sub_821209C0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126A80;
	sub_821209C0(ctx, base);
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// bl 0x82248a40
	ctx.lr = 0x82126A98;
	sub_82248A40(ctx, base);
loc_82126A98:
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

__attribute__((alias("__imp__sub_82126AB0"))) PPC_WEAK_FUNC(sub_82126AB0);
PPC_FUNC_IMPL(__imp__sub_82126AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82126AB8;
	sub_82248788(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x821209e8
	ctx.lr = 0x82126AEC;
	sub_821209E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x82126AFC;
	sub_821209E8(ctx, base);
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82126e14
	if (ctx.cr6.lt) goto loc_82126E14;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82126b48
	if (!ctx.cr6.gt) goto loc_82126B48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82126b68
	goto loc_82126B68;
loc_82126B48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82126b64
	if (ctx.cr6.gt) goto loc_82126B64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82126b68
	goto loc_82126B68;
loc_82126B64:
	// fdivs f30,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82126B68:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x82126B74;
	sub_821209C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,8616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f29,f1,f31
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x821209c0
	ctx.lr = 0x82126B8C;
	sub_821209C0(ctx, base);
	// fmsubs f0,f1,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 - ctx.f29.f64));
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r7,216(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 216);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// fmadds f0,f0,f30,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f29.f64));
	// blt cr6,0x82126d80
	if (ctx.cr6.lt) goto loc_82126D80;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r6,r7,-3
	ctx.r6.s64 = ctx.r7.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82126BB4:
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,122(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// lhz r4,120(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 120);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82126c20
	if (ctx.cr6.gt) goto loc_82126C20;
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,120(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 120);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82126c20
	if (ctx.cr6.eq) goto loc_82126C20;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r5,122(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82126c20
	if (!ctx.cr6.eq) goto loc_82126C20;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82126C20:
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,266(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 266);
	// lhz r4,264(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 264);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82126c90
	if (ctx.cr6.gt) goto loc_82126C90;
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,264(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 264);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82126c90
	if (ctx.cr6.eq) goto loc_82126C90;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// lhz r5,122(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82126c90
	if (!ctx.cr6.eq) goto loc_82126C90;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82126C90:
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,410(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 410);
	// lhz r4,408(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 408);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82126d00
	if (ctx.cr6.gt) goto loc_82126D00;
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,408(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 408);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82126d00
	if (ctx.cr6.eq) goto loc_82126D00;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,288
	ctx.r10.s64 = ctx.r10.s64 + 288;
	// lhz r5,122(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82126d00
	if (!ctx.cr6.eq) goto loc_82126D00;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82126D00:
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,554(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 554);
	// lhz r4,552(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 552);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82126d70
	if (ctx.cr6.gt) goto loc_82126D70;
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,552(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 552);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82126d70
	if (ctx.cr6.eq) goto loc_82126D70;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// lhz r5,122(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82126d70
	if (!ctx.cr6.eq) goto loc_82126D70;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82126D70:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,576
	ctx.r11.s64 = ctx.r11.s64 + 576;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82126bb4
	if (ctx.cr6.lt) goto loc_82126BB4;
loc_82126D80:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82126e14
	if (!ctx.cr6.lt) goto loc_82126E14;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82126DA0:
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,122(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// lhz r7,120(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 120);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82126e0c
	if (ctx.cr6.gt) goto loc_82126E0C;
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,120(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 120);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82126e0c
	if (ctx.cr6.eq) goto loc_82126E0C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,122(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82126e0c
	if (!ctx.cr6.eq) goto loc_82126E0C;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82126E0C:
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// bdnz 0x82126da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82126DA0;
loc_82126E14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82126E28"))) PPC_WEAK_FUNC(sub_82126E28);
PPC_FUNC_IMPL(__imp__sub_82126E28) {
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
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,100(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82126ed0
	if (!ctx.cr6.eq) goto loc_82126ED0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x82248a40
	ctx.lr = 0x82126E78;
	sub_82248A40(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82120a18
	ctx.lr = 0x82126E8C;
	sub_82120A18(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126EA8;
	sub_821209C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82126EB8;
	sub_821209C0(ctx, base);
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// bl 0x82248a40
	ctx.lr = 0x82126ED0;
	sub_82248A40(ctx, base);
loc_82126ED0:
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

__attribute__((alias("__imp__sub_82126EE8"))) PPC_WEAK_FUNC(sub_82126EE8);
PPC_FUNC_IMPL(__imp__sub_82126EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82126EF0;
	sub_82248770(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82249920
	ctx.lr = 0x82126EF8;
	sub_82249920(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821272a0
	if (ctx.cr6.eq) goto loc_821272A0;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821272a0
	if (ctx.cr6.eq) goto loc_821272A0;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// ld r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
	// ld r27,32(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// ld r25,40(r11)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
	// ld r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r22,56(r11)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// lfs f31,2148(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lfs f30,2144(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// std r30,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r30.u64);
	// std r27,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r27.u64);
	// std r25,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r25.u64);
	// std r23,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r23.u64);
	// std r22,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r22.u64);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f30,220(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x82120a18
	ctx.lr = 0x82126FB0;
	sub_82120A18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82126FC0;
	sub_82120A18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82126FD0;
	sub_82120A18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82126fec
	if (!ctx.cr6.eq) goto loc_82126FEC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82126fec
	if (!ctx.cr6.eq) goto loc_82126FEC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821272a0
	if (ctx.cr6.eq) goto loc_821272A0;
loc_82126FEC:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x82127004;
	sub_820804F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f26,2132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,2140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,7948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7948);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x8212711c
	if (ctx.cr6.eq) goto loc_8212711C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821270bc
	if (ctx.cr6.eq) goto loc_821270BC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x821270bc
	if (ctx.cr6.eq) goto loc_821270BC;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82096f18
	ctx.lr = 0x82127058;
	sub_82096F18(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// std r3,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// ld r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r31,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r31.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// std r30,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r30.u64);
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// std r29,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r29.u64);
	// std r8,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// b 0x821271e4
	goto loc_821271E4;
loc_821270BC:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x821270D8;
	sub_8208EA90(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82187270
	ctx.lr = 0x821270F8;
	sub_82187270(ctx, base);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x8212710c
	if (!ctx.cr6.gt) goto loc_8212710C;
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// b 0x82127118
	goto loc_82127118;
loc_8212710C:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82127118
	if (!ctx.cr6.lt) goto loc_82127118;
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
loc_82127118:
	// stfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_8212711C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82127170
	if (ctx.cr6.eq) goto loc_82127170;
	// stfs f30,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82127140;
	sub_8208EA90(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82187270
	ctx.lr = 0x8212714C;
	sub_82187270(ctx, base);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82127160
	if (!ctx.cr6.gt) goto loc_82127160;
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// b 0x8212716c
	goto loc_8212716C;
loc_82127160:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x8212716c
	if (!ctx.cr6.lt) goto loc_8212716C;
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
loc_8212716C:
	// stfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_82127170:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x821271d8
	if (ctx.cr6.eq) goto loc_821271D8;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82127194;
	sub_8208EA90(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82187270
	ctx.lr = 0x821271B4;
	sub_82187270(ctx, base);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x821271c8
	if (!ctx.cr6.gt) goto loc_821271C8;
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// b 0x821271d4
	goto loc_821271D4;
loc_821271C8:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x821271d4
	if (!ctx.cr6.lt) goto loc_821271D4;
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
loc_821271D4:
	// stfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_821271D8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82187920
	ctx.lr = 0x821271E4;
	sub_82187920(ctx, base);
loc_821271E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821272a0
	if (!ctx.cr6.gt) goto loc_821272A0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82127200:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r6,122(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r5,120(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82127290
	if (ctx.cr6.gt) goto loc_82127290;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82127290
	if (ctx.cr6.eq) goto loc_82127290;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// ld r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r3,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r3.u64);
	// ld r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// ld r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r6,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r6.u64);
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r5,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r5.u64);
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r3,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r3.u64);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r10.u64);
loc_82127290:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,144
	ctx.r9.s64 = ctx.r9.s64 + 144;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// bne 0x82127200
	if (!ctx.cr0.eq) goto loc_82127200;
loc_821272A0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8224996c
	ctx.lr = 0x821272AC;
	sub_8224996C(ctx, base);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_821272B0"))) PPC_WEAK_FUNC(sub_821272B0);
PPC_FUNC_IMPL(__imp__sub_821272B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,100
	ctx.r10.s64 = 100;
	// mulli r11,r11,765
	ctx.r11.s64 = ctx.r11.s64 * 765;
	// addi r9,r11,893
	ctx.r9.s64 = ctx.r11.s64 + 893;
	// divwu r8,r9,r10
	ctx.r8.u32 = ctx.r9.u32 / ctx.r10.u32;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// rlwinm r3,r8,0,16,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821272D0"))) PPC_WEAK_FUNC(sub_821272D0);
PPC_FUNC_IMPL(__imp__sub_821272D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r9,100
	ctx.r9.s64 = 100;
	// lwz r11,-23608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23608);
	// mulli r11,r11,765
	ctx.r11.s64 = ctx.r11.s64 * 765;
	// addi r8,r11,893
	ctx.r8.s64 = ctx.r11.s64 + 893;
	// divwu r11,r8,r9
	ctx.r11.u32 = ctx.r8.u32 / ctx.r9.u32;
	// stw r11,-23608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23608, ctx.r11.u32);
	// rlwinm r3,r11,0,16,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821272F4"))) PPC_WEAK_FUNC(sub_821272F4);
PPC_FUNC_IMPL(__imp__sub_821272F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821272F8"))) PPC_WEAK_FUNC(sub_821272F8);
PPC_FUNC_IMPL(__imp__sub_821272F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mulli r11,r11,765
	ctx.r11.s64 = ctx.r11.s64 * 765;
	// lfd f0,30776(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 30776);
	// addi r11,r11,893
	ctx.r11.s64 = ctx.r11.s64 + 893;
	// clrlwi r9,r11,8
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212732C"))) PPC_WEAK_FUNC(sub_8212732C);
PPC_FUNC_IMPL(__imp__sub_8212732C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127330"))) PPC_WEAK_FUNC(sub_82127330);
PPC_FUNC_IMPL(__imp__sub_82127330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mulli r11,r11,765
	ctx.r11.s64 = ctx.r11.s64 * 765;
	// lfd f0,30776(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 30776);
	// lfs f13,8328(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,893
	ctx.r11.s64 = ctx.r11.s64 + 893;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// clrlwi r7,r11,8
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// lfs f0,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmsubs f1,f9,f13,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127378"))) PPC_WEAK_FUNC(sub_82127378);
PPC_FUNC_IMPL(__imp__sub_82127378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,-23608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23608);
	// lfd f0,30776(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 30776);
	// mulli r11,r11,765
	ctx.r11.s64 = ctx.r11.s64 * 765;
	// lfs f13,8328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,893
	ctx.r11.s64 = ctx.r11.s64 + 893;
	// clrlwi r6,r11,8
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,-23608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23608, ctx.r11.u32);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmul f9,f10,f0
	ctx.f9.f64 = ctx.f10.f64 * ctx.f0.f64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmsubs f1,f8,f13,f12
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821273C4"))) PPC_WEAK_FUNC(sub_821273C4);
PPC_FUNC_IMPL(__imp__sub_821273C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821273C8"))) PPC_WEAK_FUNC(sub_821273C8);
PPC_FUNC_IMPL(__imp__sub_821273C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,100
	ctx.r10.s64 = 100;
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// divw r6,r8,r10
	ctx.r6.s32 = ctx.r8.s32 / ctx.r10.s32;
	// clrlwi r11,r6,8
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFFFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82127400
	if (!ctx.cr6.eq) goto loc_82127400;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82127400:
	// addis r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -8388608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,30784(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 30784);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212742C"))) PPC_WEAK_FUNC(sub_8212742C);
PPC_FUNC_IMPL(__imp__sub_8212742C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127430"))) PPC_WEAK_FUNC(sub_82127430);
PPC_FUNC_IMPL(__imp__sub_82127430) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82289c50
	sub_82289C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212743C"))) PPC_WEAK_FUNC(sub_8212743C);
PPC_FUNC_IMPL(__imp__sub_8212743C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127440"))) PPC_WEAK_FUNC(sub_82127440);
PPC_FUNC_IMPL(__imp__sub_82127440) {
	PPC_FUNC_PROLOGUE();
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82127490
	if (ctx.cr6.eq) goto loc_82127490;
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
loc_8212745C:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82127478
	if (ctx.cr6.gt) goto loc_82127478;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212745c
	if (!ctx.cr6.eq) goto loc_8212745C;
loc_82127478:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82127490
	if (ctx.cr6.eq) goto loc_82127490;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// blr 
	return;
loc_82127490:
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212749C"))) PPC_WEAK_FUNC(sub_8212749C);
PPC_FUNC_IMPL(__imp__sub_8212749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821274A0"))) PPC_WEAK_FUNC(sub_821274A0);
PPC_FUNC_IMPL(__imp__sub_821274A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821274e0
	if (ctx.cr6.eq) goto loc_821274E0;
loc_821274C0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821274d8
	if (ctx.cr6.eq) goto loc_821274D8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821274c0
	if (!ctx.cr6.eq) goto loc_821274C0;
loc_821274D8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821274f4
	if (!ctx.cr6.eq) goto loc_821274F4;
loc_821274E0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
loc_821274F4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127508"))) PPC_WEAK_FUNC(sub_82127508);
PPC_FUNC_IMPL(__imp__sub_82127508) {
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
	// lwz r3,-2036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2036);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212753c
	if (ctx.cr6.eq) goto loc_8212753C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8212753c
	if (ctx.cr6.eq) goto loc_8212753C;
	// bl 0x82088268
	ctx.lr = 0x82127534;
	sub_82088268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2036, ctx.r11.u32);
loc_8212753C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127550"))) PPC_WEAK_FUNC(sub_82127550);
PPC_FUNC_IMPL(__imp__sub_82127550) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82127728
	if (ctx.cr6.eq) goto loc_82127728;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// beq cr6,0x821275a0
	if (ctx.cr6.eq) goto loc_821275A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821275A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821275A0:
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82184800
	ctx.lr = 0x821275B4;
	sub_82184800(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821275dc
	if (ctx.cr6.eq) goto loc_821275DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821275DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821275DC:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127600
	if (ctx.cr6.eq) goto loc_82127600;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82127600:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127624
	if (ctx.cr6.eq) goto loc_82127624;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82127624:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127648
	if (ctx.cr6.eq) goto loc_82127648;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82127648:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212766c
	if (ctx.cr6.eq) goto loc_8212766C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212766C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212766C:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127690
	if (ctx.cr6.eq) goto loc_82127690;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82127690:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821276b4
	if (ctx.cr6.eq) goto loc_821276B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821276B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821276B4:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821276d8
	if (ctx.cr6.eq) goto loc_821276D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821276D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821276D8:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821276fc
	if (ctx.cr6.eq) goto loc_821276FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821276FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821276FC:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127720
	if (ctx.cr6.eq) goto loc_82127720;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82127720:
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_82127728:
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

__attribute__((alias("__imp__sub_82127740"))) PPC_WEAK_FUNC(sub_82127740);
PPC_FUNC_IMPL(__imp__sub_82127740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-2032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,1284(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r10,r10,22
	ctx.r10.s64 = ctx.r10.s64 + 22;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8212cb30
	sub_8212CB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82127774"))) PPC_WEAK_FUNC(sub_82127774);
PPC_FUNC_IMPL(__imp__sub_82127774) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127778"))) PPC_WEAK_FUNC(sub_82127778);
PPC_FUNC_IMPL(__imp__sub_82127778) {
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
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821277c0
	if (ctx.cr6.eq) goto loc_821277C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821277A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x8212e7b0
	ctx.lr = 0x821277B0;
	sub_8212E7B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821277c0
	if (ctx.cr6.eq) goto loc_821277C0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_821277C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821277D4"))) PPC_WEAK_FUNC(sub_821277D4);
PPC_FUNC_IMPL(__imp__sub_821277D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821277D8"))) PPC_WEAK_FUNC(sub_821277D8);
PPC_FUNC_IMPL(__imp__sub_821277D8) {
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
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127834
	if (ctx.cr6.eq) goto loc_82127834;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r9,532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82127834
	if (ctx.cr6.eq) goto loc_82127834;
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82127834
	if (ctx.cr6.gt) goto loc_82127834;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
loc_82127834:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127848"))) PPC_WEAK_FUNC(sub_82127848);
PPC_FUNC_IMPL(__imp__sub_82127848) {
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
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821278a4
	if (ctx.cr6.eq) goto loc_821278A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r9,528(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821278a4
	if (ctx.cr6.eq) goto loc_821278A4;
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821278a4
	if (ctx.cr6.gt) goto loc_821278A4;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
loc_821278A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821278B8"))) PPC_WEAK_FUNC(sub_821278B8);
PPC_FUNC_IMPL(__imp__sub_821278B8) {
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
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212799c
	if (ctx.cr6.eq) goto loc_8212799C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821278E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x8212ed90
	ctx.lr = 0x821278F0;
	sub_8212ED90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212799c
	if (ctx.cr6.eq) goto loc_8212799C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x8212ecf0
	ctx.lr = 0x82127900;
	sub_8212ECF0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x8212799c
	if (ctx.cr6.gt) goto loc_8212799C;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82127954
	// bdzf 4*cr6+eq,0x8212798c
	// bne cr6,0x8212798c
	if (!ctx.cr6.eq) goto loc_8212798C;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8215bec8
	ctx.lr = 0x82127928;
	sub_8215BEC8(ctx, base);
	// lwz r10,684(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// li r11,4
	ctx.r11.s64 = 4;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x8212793c
	if (ctx.cr6.eq) goto loc_8212793C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212793C:
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82127954:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8215bec8
	ctx.lr = 0x82127960;
	sub_8215BEC8(ctx, base);
	// lwz r10,684(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// li r11,5
	ctx.r11.s64 = 5;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x82127974
	if (ctx.cr6.eq) goto loc_82127974;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82127974:
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8212798C:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8212799C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821279B0"))) PPC_WEAK_FUNC(sub_821279B0);
PPC_FUNC_IMPL(__imp__sub_821279B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_821279D0"))) PPC_WEAK_FUNC(sub_821279D0);
PPC_FUNC_IMPL(__imp__sub_821279D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821279D4"))) PPC_WEAK_FUNC(sub_821279D4);
PPC_FUNC_IMPL(__imp__sub_821279D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821279D8"))) PPC_WEAK_FUNC(sub_821279D8);
PPC_FUNC_IMPL(__imp__sub_821279D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_821279F8"))) PPC_WEAK_FUNC(sub_821279F8);
PPC_FUNC_IMPL(__imp__sub_821279F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821279FC"))) PPC_WEAK_FUNC(sub_821279FC);
PPC_FUNC_IMPL(__imp__sub_821279FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127A00"))) PPC_WEAK_FUNC(sub_82127A00);
PPC_FUNC_IMPL(__imp__sub_82127A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_82127A20"))) PPC_WEAK_FUNC(sub_82127A20);
PPC_FUNC_IMPL(__imp__sub_82127A20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127A24"))) PPC_WEAK_FUNC(sub_82127A24);
PPC_FUNC_IMPL(__imp__sub_82127A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127A28"))) PPC_WEAK_FUNC(sub_82127A28);
PPC_FUNC_IMPL(__imp__sub_82127A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_82127A48"))) PPC_WEAK_FUNC(sub_82127A48);
PPC_FUNC_IMPL(__imp__sub_82127A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127A4C"))) PPC_WEAK_FUNC(sub_82127A4C);
PPC_FUNC_IMPL(__imp__sub_82127A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127A50"))) PPC_WEAK_FUNC(sub_82127A50);
PPC_FUNC_IMPL(__imp__sub_82127A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127a68
	if (ctx.cr6.eq) goto loc_82127A68;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
loc_82127A68:
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127a80
	if (ctx.cr6.eq) goto loc_82127A80;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
loc_82127A80:
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127A9C"))) PPC_WEAK_FUNC(sub_82127A9C);
PPC_FUNC_IMPL(__imp__sub_82127A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127AA0"))) PPC_WEAK_FUNC(sub_82127AA0);
PPC_FUNC_IMPL(__imp__sub_82127AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82133098
	sub_82133098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82127AB0"))) PPC_WEAK_FUNC(sub_82127AB0);
PPC_FUNC_IMPL(__imp__sub_82127AB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127AB4"))) PPC_WEAK_FUNC(sub_82127AB4);
PPC_FUNC_IMPL(__imp__sub_82127AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127AB8"))) PPC_WEAK_FUNC(sub_82127AB8);
PPC_FUNC_IMPL(__imp__sub_82127AB8) {
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
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127b08
	if (ctx.cr6.eq) goto loc_82127B08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82127B08:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127B24"))) PPC_WEAK_FUNC(sub_82127B24);
PPC_FUNC_IMPL(__imp__sub_82127B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127B28"))) PPC_WEAK_FUNC(sub_82127B28);
PPC_FUNC_IMPL(__imp__sub_82127B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82133f78
	sub_82133F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82127B40"))) PPC_WEAK_FUNC(sub_82127B40);
PPC_FUNC_IMPL(__imp__sub_82127B40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127B44"))) PPC_WEAK_FUNC(sub_82127B44);
PPC_FUNC_IMPL(__imp__sub_82127B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127B48"))) PPC_WEAK_FUNC(sub_82127B48);
PPC_FUNC_IMPL(__imp__sub_82127B48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82127b80
	if (ctx.cr6.eq) goto loc_82127B80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 + 88;
loc_82127B58:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127b70
	if (ctx.cr6.eq) goto loc_82127B70;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82127b88
	if (ctx.cr6.eq) goto loc_82127B88;
loc_82127B70:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x82127b58
	if (ctx.cr6.lt) goto loc_82127B58;
loc_82127B80:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82127B88:
	// addi r11,r9,22
	ctx.r11.s64 = ctx.r9.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127B98"))) PPC_WEAK_FUNC(sub_82127B98);
PPC_FUNC_IMPL(__imp__sub_82127B98) {
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
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127bcc
	if (ctx.cr6.eq) goto loc_82127BCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82127BCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127BEC"))) PPC_WEAK_FUNC(sub_82127BEC);
PPC_FUNC_IMPL(__imp__sub_82127BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127BF0"))) PPC_WEAK_FUNC(sub_82127BF0);
PPC_FUNC_IMPL(__imp__sub_82127BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127c20
	if (ctx.cr6.eq) goto loc_82127C20;
	// lwz r10,792(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 792);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82127c18
	if (ctx.cr6.eq) goto loc_82127C18;
	// lwz r11,796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 796);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82127C18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82127C20:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127C28"))) PPC_WEAK_FUNC(sub_82127C28);
PPC_FUNC_IMPL(__imp__sub_82127C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8212e8e8
	sub_8212E8E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82127C38"))) PPC_WEAK_FUNC(sub_82127C38);
PPC_FUNC_IMPL(__imp__sub_82127C38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127C3C"))) PPC_WEAK_FUNC(sub_82127C3C);
PPC_FUNC_IMPL(__imp__sub_82127C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127C40"))) PPC_WEAK_FUNC(sub_82127C40);
PPC_FUNC_IMPL(__imp__sub_82127C40) {
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
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127c8c
	if (ctx.cr6.eq) goto loc_82127C8C;
	// bl 0x821274a0
	ctx.lr = 0x82127C64;
	sub_821274A0(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127c84
	if (ctx.cr6.eq) goto loc_82127C84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82127C84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82127C8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127CA0"))) PPC_WEAK_FUNC(sub_82127CA0);
PPC_FUNC_IMPL(__imp__sub_82127CA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82127CD0"))) PPC_WEAK_FUNC(sub_82127CD0);
PPC_FUNC_IMPL(__imp__sub_82127CD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127CD4"))) PPC_WEAK_FUNC(sub_82127CD4);
PPC_FUNC_IMPL(__imp__sub_82127CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127CD8"))) PPC_WEAK_FUNC(sub_82127CD8);
PPC_FUNC_IMPL(__imp__sub_82127CD8) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127d0c
	if (ctx.cr6.eq) goto loc_82127D0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82127D0C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r9,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127D38"))) PPC_WEAK_FUNC(sub_82127D38);
PPC_FUNC_IMPL(__imp__sub_82127D38) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127d88
	if (ctx.cr6.eq) goto loc_82127D88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82127D88:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127DA4"))) PPC_WEAK_FUNC(sub_82127DA4);
PPC_FUNC_IMPL(__imp__sub_82127DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127DA8"))) PPC_WEAK_FUNC(sub_82127DA8);
PPC_FUNC_IMPL(__imp__sub_82127DA8) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127df0
	if (ctx.cr6.eq) goto loc_82127DF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821344a0
	ctx.lr = 0x82127DD0;
	sub_821344A0(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134500
	ctx.lr = 0x82127DF0;
	sub_82134500(ctx, base);
loc_82127DF0:
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

__attribute__((alias("__imp__sub_82127E04"))) PPC_WEAK_FUNC(sub_82127E04);
PPC_FUNC_IMPL(__imp__sub_82127E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127E08"))) PPC_WEAK_FUNC(sub_82127E08);
PPC_FUNC_IMPL(__imp__sub_82127E08) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82127e40
	if (ctx.cr6.eq) goto loc_82127E40;
loc_82127E28:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x82134ca0
	ctx.lr = 0x82127E34;
	sub_82134CA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82127e28
	if (!ctx.cr6.eq) goto loc_82127E28;
loc_82127E40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127E54"))) PPC_WEAK_FUNC(sub_82127E54);
PPC_FUNC_IMPL(__imp__sub_82127E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127E58"))) PPC_WEAK_FUNC(sub_82127E58);
PPC_FUNC_IMPL(__imp__sub_82127E58) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82127e90
	if (ctx.cr6.eq) goto loc_82127E90;
loc_82127E78:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x82134c20
	ctx.lr = 0x82127E84;
	sub_82134C20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82127e78
	if (!ctx.cr6.eq) goto loc_82127E78;
loc_82127E90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127EA4"))) PPC_WEAK_FUNC(sub_82127EA4);
PPC_FUNC_IMPL(__imp__sub_82127EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127EA8"))) PPC_WEAK_FUNC(sub_82127EA8);
PPC_FUNC_IMPL(__imp__sub_82127EA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82127e08
	sub_82127E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82127EAC"))) PPC_WEAK_FUNC(sub_82127EAC);
PPC_FUNC_IMPL(__imp__sub_82127EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127EB0"))) PPC_WEAK_FUNC(sub_82127EB0);
PPC_FUNC_IMPL(__imp__sub_82127EB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82127e58
	sub_82127E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82127EB4"))) PPC_WEAK_FUNC(sub_82127EB4);
PPC_FUNC_IMPL(__imp__sub_82127EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127EB8"))) PPC_WEAK_FUNC(sub_82127EB8);
PPC_FUNC_IMPL(__imp__sub_82127EB8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,30800
	ctx.r9.s64 = ctx.r11.s64 + 30800;
	// addi r8,r10,30792
	ctx.r8.s64 = ctx.r10.s64 + 30792;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x82127550
	ctx.lr = 0x82127EF0;
	sub_82127550(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f0,2144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,8616(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8616);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-17112(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + -17112, temp.u32);
	// stfs f13,-17108(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + -17108, temp.u32);
	// stfs f0,-17116(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -17116, temp.u32);
	// bl 0x82185a50
	ctx.lr = 0x82127F20;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82127F28;
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

__attribute__((alias("__imp__sub_82127F40"))) PPC_WEAK_FUNC(sub_82127F40);
PPC_FUNC_IMPL(__imp__sub_82127F40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82129398
	sub_82129398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82127F48"))) PPC_WEAK_FUNC(sub_82127F48);
PPC_FUNC_IMPL(__imp__sub_82127F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82127F50;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82127F64;
	sub_8215BD60(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82127fac
	if (ctx.cr6.eq) goto loc_82127FAC;
	// bl 0x8215bd08
	ctx.lr = 0x82127F74;
	sub_8215BD08(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82127f9c
	if (ctx.cr6.lt) goto loc_82127F9C;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bge cr6,0x82127f9c
	if (!ctx.cr6.lt) goto loc_82127F9C;
	// bl 0x8215bec8
	ctx.lr = 0x82127F8C;
	sub_8215BEC8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r10,611(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 611);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82128018
	if (ctx.cr6.eq) goto loc_82128018;
loc_82127F9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,332(r27)
	PPC_STORE_U32(ctx.r27.u32 + 332, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82127FAC:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,40
	ctx.r29.s64 = 40;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82127FB8:
	// bl 0x8215bd08
	ctx.lr = 0x82127FBC;
	sub_8215BD08(ctx, base);
	// lwzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82128008
	if (ctx.cr6.eq) goto loc_82128008;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82127FCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215bd28
	ctx.lr = 0x82127FD4;
	sub_8215BD28(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82127ff0
	if (ctx.cr6.eq) goto loc_82127FF0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,33
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 33, ctx.xer);
	// blt cr6,0x82127fcc
	if (ctx.cr6.lt) goto loc_82127FCC;
	// b 0x82128008
	goto loc_82128008;
loc_82127FF0:
	// bl 0x8215bec8
	ctx.lr = 0x82127FF4;
	sub_8215BEC8(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lbz r10,611(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 611);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82128008
	if (ctx.cr6.eq) goto loc_82128008;
	// stw r28,332(r27)
	PPC_STORE_U32(ctx.r27.u32 + 332, ctx.r28.u32);
loc_82128008:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 64, ctx.xer);
	// blt cr6,0x82127fb8
	if (ctx.cr6.lt) goto loc_82127FB8;
loc_82128018:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82128020"))) PPC_WEAK_FUNC(sub_82128020);
PPC_FUNC_IMPL(__imp__sub_82128020) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128030"))) PPC_WEAK_FUNC(sub_82128030);
PPC_FUNC_IMPL(__imp__sub_82128030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82128038;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// lwz r30,-8540(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r9,-2032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
loc_82128058:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821280c4
	if (ctx.cr6.eq) goto loc_821280C4;
	// lwz r10,1924(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// lwz r10,1008(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821280c4
	if (ctx.cr6.eq) goto loc_821280C4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821280c4
	if (ctx.cr6.eq) goto loc_821280C4;
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x821280c4
	if (ctx.cr6.gt) goto loc_821280C4;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821280c4
	if (ctx.cr6.eq) goto loc_821280C4;
	// lwz r9,1636(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r6,10(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// bl 0x8212b330
	ctx.lr = 0x821280C0;
	sub_8212B330(ctx, base);
	// lwz r9,-2032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
loc_821280C4:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82128058
	if (ctx.cr6.lt) goto loc_82128058;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821280DC"))) PPC_WEAK_FUNC(sub_821280DC);
PPC_FUNC_IMPL(__imp__sub_821280DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821280E0"))) PPC_WEAK_FUNC(sub_821280E0);
PPC_FUNC_IMPL(__imp__sub_821280E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// lwz r10,1008(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r9,-2032(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-8540(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8540);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,1636(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,10(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 10);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// b 0x8212b330
	sub_8212B330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212814C"))) PPC_WEAK_FUNC(sub_8212814C);
PPC_FUNC_IMPL(__imp__sub_8212814C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128150"))) PPC_WEAK_FUNC(sub_82128150);
PPC_FUNC_IMPL(__imp__sub_82128150) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82232d88
	ctx.lr = 0x82128170;
	sub_82232D88(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212819c
	if (ctx.cr6.eq) goto loc_8212819C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r9,1956(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8212819c
	if (!ctx.cr6.eq) goto loc_8212819C;
	// lwz r11,1468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_8212819C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821281cc
	if (ctx.cr6.eq) goto loc_821281CC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lwz r9,1956(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x821281cc
	if (!ctx.cr6.eq) goto loc_821281CC;
	// lwz r11,1468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
loc_821281CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821281E0"))) PPC_WEAK_FUNC(sub_821281E0);
PPC_FUNC_IMPL(__imp__sub_821281E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821281E8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r27,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r27.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r27,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r27.u32);
	// addi r31,r3,76
	ctx.r31.s64 = ctx.r3.s64 + 76;
	// stw r27,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r27.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82128340
	if (ctx.cr6.eq) goto loc_82128340;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821282a4
	if (!ctx.cr6.gt) goto loc_821282A4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r31,-4
	ctx.r28.s64 = ctx.r31.s64 + -4;
loc_82128228:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128280
	if (ctx.cr6.eq) goto loc_82128280;
	// lwz r3,1992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1992);
	// bl 0x8215bd28
	ctx.lr = 0x8212823C;
	sub_8215BD28(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x82128294
	if (ctx.cr6.eq) goto loc_82128294;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82128280
	if (ctx.cr6.eq) goto loc_82128280;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82128268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82128280
	if (!ctx.cr6.eq) goto loc_82128280;
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x82128294
	goto loc_82128294;
loc_82128280:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// bge cr6,0x821282a4
	if (!ctx.cr6.lt) goto loc_821282A4;
loc_82128294:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82128228
	if (ctx.cr6.lt) goto loc_82128228;
loc_821282A4:
	// stw r29,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r29.u32);
	// addi r11,r26,56
	ctx.r11.s64 = ctx.r26.s64 + 56;
	// stw r27,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r27.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r27,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r27.u32);
	// li r29,1
	ctx.r29.s64 = 1;
loc_821282BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128320
	if (ctx.cr6.eq) goto loc_82128320;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821282DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82128320
	if (!ctx.cr6.eq) goto loc_82128320;
	// bl 0x8215bd60
	ctx.lr = 0x821282E8;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x82128308
	if (ctx.cr6.eq) goto loc_82128308;
	// lwz r3,1992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1992);
	// bl 0x8215bd28
	ctx.lr = 0x82128300;
	sub_8215BD28(ctx, base);
	// lbz r11,43(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// b 0x8212830c
	goto loc_8212830C;
loc_82128308:
	// lwz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
loc_8212830C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82128320
	if (!ctx.cr6.lt) goto loc_82128320;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r29.u32);
loc_82128320:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821282bc
	if (!ctx.cr0.eq) goto loc_821282BC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82128340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82128340:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82128348"))) PPC_WEAK_FUNC(sub_82128348);
PPC_FUNC_IMPL(__imp__sub_82128348) {
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
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// lwz r3,-1736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1736);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
loc_82128378:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82128378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82128378;
	// bl 0x821d1688
	ctx.lr = 0x82128388;
	sub_821D1688(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x8212838C;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821283a8
	if (!ctx.cr6.eq) goto loc_821283A8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821283d4
	if (ctx.cr6.eq) goto loc_821283D4;
loc_821283A8:
	// bl 0x8215bec8
	ctx.lr = 0x821283AC;
	sub_8215BEC8(ctx, base);
	// lbz r11,655(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 655);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821283c8
	if (ctx.cr6.eq) goto loc_821283C8;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x82131938
	ctx.lr = 0x821283C0;
	sub_82131938(ctx, base);
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// bl 0x82131c80
	ctx.lr = 0x821283C8;
	sub_82131C80(ctx, base);
loc_821283C8:
	// lwz r4,344(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x82127e58
	ctx.lr = 0x821283D4;
	sub_82127E58(ctx, base);
loc_821283D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-1736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1736);
	// bl 0x821d16c0
	ctx.lr = 0x821283E0;
	sub_821D16C0(ctx, base);
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

__attribute__((alias("__imp__sub_821283F8"))) PPC_WEAK_FUNC(sub_821283F8);
PPC_FUNC_IMPL(__imp__sub_821283F8) {
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
	// bl 0x8215bec8
	ctx.lr = 0x82128410;
	sub_8215BEC8(ctx, base);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128428
	if (ctx.cr6.eq) goto loc_82128428;
	// bl 0x8215bec8
	ctx.lr = 0x82128420;
	sub_8215BEC8(ctx, base);
	// lbz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// b 0x8212842c
	goto loc_8212842C;
loc_82128428:
	// li r9,10
	ctx.r9.s64 = 10;
loc_8212842C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r8,r11,-7560
	ctx.r8.s64 = ctx.r11.s64 + -7560;
	// lwz r10,-8608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8608);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// twllei r11,0
	// mulli r6,r7,60
	ctx.r6.s64 = ctx.r7.s64 * 60;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subfic r4,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addme r9,r10
	// and r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 & ctx.r5.u64;
	// divwu r4,r8,r11
	ctx.r4.u32 = ctx.r8.u32 / ctx.r11.u32;
	// bl 0x82132db0
	ctx.lr = 0x82128470;
	sub_82132DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128484"))) PPC_WEAK_FUNC(sub_82128484);
PPC_FUNC_IMPL(__imp__sub_82128484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128488"))) PPC_WEAK_FUNC(sub_82128488);
PPC_FUNC_IMPL(__imp__sub_82128488) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8212849C"))) PPC_WEAK_FUNC(sub_8212849C);
PPC_FUNC_IMPL(__imp__sub_8212849C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821284A0"))) PPC_WEAK_FUNC(sub_821284A0);
PPC_FUNC_IMPL(__imp__sub_821284A0) {
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
	// li r31,40
	ctx.r31.s64 = 40;
loc_821284BC:
	// bl 0x8215bd08
	ctx.lr = 0x821284C0;
	sub_8215BD08(ctx, base);
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821284f8
	if (!ctx.cr6.eq) goto loc_821284F8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 48, ctx.xer);
	// blt cr6,0x821284bc
	if (ctx.cr6.lt) goto loc_821284BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821284E0:
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
loc_821284F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x821284e0
	goto loc_821284E0;
}

__attribute__((alias("__imp__sub_82128500"))) PPC_WEAK_FUNC(sub_82128500);
PPC_FUNC_IMPL(__imp__sub_82128500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82128508;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-4944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821285ac
	if (ctx.cr6.eq) goto loc_821285AC;
	// bl 0x82182e90
	ctx.lr = 0x82128524;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212852C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82128538;
	sub_821837D0(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82128558
	if (ctx.cr6.eq) goto loc_82128558;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82128558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82128558:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,520
	ctx.r3.s64 = 520;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x82080000
	ctx.lr = 0x82128568;
	sub_82080000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82128594
	if (ctx.cr6.eq) goto loc_82128594;
	// bl 0x8215bec8
	ctx.lr = 0x82128578;
	sub_8215BEC8(ctx, base);
	// lbz r28,108(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// bl 0x8215c080
	ctx.lr = 0x82128580;
	sub_8215C080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsb r5,r28
	ctx.r5.s64 = ctx.r28.s8;
	// bl 0x8212ec00
	ctx.lr = 0x82128590;
	sub_8212EC00(ctx, base);
	// b 0x82128598
	goto loc_82128598;
loc_82128594:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82128598:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821285AC;
	sub_821837D0(ctx, base);
loc_821285AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821285B4"))) PPC_WEAK_FUNC(sub_821285B4);
PPC_FUNC_IMPL(__imp__sub_821285B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821285B8"))) PPC_WEAK_FUNC(sub_821285B8);
PPC_FUNC_IMPL(__imp__sub_821285B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821285C0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x821285CC;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821285D4;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821285E0;
	sub_821837D0(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82128600
	if (ctx.cr6.eq) goto loc_82128600;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82128600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82128600:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// bl 0x82183850
	ctx.lr = 0x8212860C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82128624
	if (ctx.cr6.eq) goto loc_82128624;
	// li r3,1952
	ctx.r3.s64 = 1952;
	// bl 0x82183448
	ctx.lr = 0x82128620;
	sub_82183448(ctx, base);
	// b 0x8212862c
	goto loc_8212862C;
loc_82128624:
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x821845a0
	ctx.lr = 0x8212862C;
	sub_821845A0(ctx, base);
loc_8212862C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82128650
	if (ctx.cr6.eq) goto loc_82128650;
	// bl 0x8215c080
	ctx.lr = 0x8212863C;
	sub_8215C080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821359d0
	ctx.lr = 0x8212864C;
	sub_821359D0(ctx, base);
	// b 0x82128654
	goto loc_82128654;
loc_82128650:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82128654:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8212866C;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82128674"))) PPC_WEAK_FUNC(sub_82128674);
PPC_FUNC_IMPL(__imp__sub_82128674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128678"))) PPC_WEAK_FUNC(sub_82128678);
PPC_FUNC_IMPL(__imp__sub_82128678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82128680;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x8212868C;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82128694;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821286A0;
	sub_821837D0(ctx, base);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821286c0
	if (ctx.cr6.eq) goto loc_821286C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821286C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821286C0:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// bl 0x82183850
	ctx.lr = 0x821286CC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821286e4
	if (ctx.cr6.eq) goto loc_821286E4;
	// li r3,960
	ctx.r3.s64 = 960;
	// bl 0x82183448
	ctx.lr = 0x821286E0;
	sub_82183448(ctx, base);
	// b 0x821286ec
	goto loc_821286EC;
loc_821286E4:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x821845a0
	ctx.lr = 0x821286EC;
	sub_821845A0(ctx, base);
loc_821286EC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212870c
	if (ctx.cr6.eq) goto loc_8212870C;
	// bl 0x8215c080
	ctx.lr = 0x821286FC;
	sub_8215C080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82136ac8
	ctx.lr = 0x82128708;
	sub_82136AC8(ctx, base);
	// b 0x82128710
	goto loc_82128710;
loc_8212870C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82128710:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82128728;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82128730"))) PPC_WEAK_FUNC(sub_82128730);
PPC_FUNC_IMPL(__imp__sub_82128730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82128738;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x82128744;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212874C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82128758;
	sub_821837D0(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82128778
	if (ctx.cr6.eq) goto loc_82128778;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82128778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82128778:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x8215bd60
	ctx.lr = 0x82128788;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212879c
	if (ctx.cr6.eq) goto loc_8212879C;
	// bl 0x82227aa0
	ctx.lr = 0x82128798;
	sub_82227AA0(ctx, base);
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_8212879C:
	// bl 0x82183850
	ctx.lr = 0x821287A0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821287b8
	if (ctx.cr6.eq) goto loc_821287B8;
	// li r3,3120
	ctx.r3.s64 = 3120;
	// bl 0x82183448
	ctx.lr = 0x821287B4;
	sub_82183448(ctx, base);
	// b 0x821287c0
	goto loc_821287C0;
loc_821287B8:
	// li r3,195
	ctx.r3.s64 = 195;
	// bl 0x821845a0
	ctx.lr = 0x821287C0;
	sub_821845A0(ctx, base);
loc_821287C0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821287e4
	if (ctx.cr6.eq) goto loc_821287E4;
	// bl 0x8215c080
	ctx.lr = 0x821287D0;
	sub_8215C080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82131740
	ctx.lr = 0x821287E0;
	sub_82131740(ctx, base);
	// b 0x821287e8
	goto loc_821287E8;
loc_821287E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821287E8:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// stw r28,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82128800;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82128808"))) PPC_WEAK_FUNC(sub_82128808);
PPC_FUNC_IMPL(__imp__sub_82128808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82128810;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8215bd08
	ctx.lr = 0x82128824;
	sub_8215BD08(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82128830;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x823c2ea8
	ctx.lr = 0x82128850;
	sub_823C2EA8(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82128868"))) PPC_WEAK_FUNC(sub_82128868);
PPC_FUNC_IMPL(__imp__sub_82128868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82128870;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82128960
	if (ctx.cr6.eq) goto loc_82128960;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821288ac
	if (ctx.cr6.eq) goto loc_821288AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821288AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821288AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-1512(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1512);
	// bl 0x8212d138
	ctx.lr = 0x821288C4;
	sub_8212D138(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x821288C8;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821288D0;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821288DC;
	sub_821837D0(ctx, base);
	// li r3,704
	ctx.r3.s64 = 704;
	// bl 0x82080000
	ctx.lr = 0x821288E4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82128918
	if (ctx.cr6.eq) goto loc_82128918;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,-23604
	ctx.r5.s64 = ctx.r11.s64 + -23604;
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r5,r10,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// bl 0x821370c8
	ctx.lr = 0x82128914;
	sub_821370C8(ctx, base);
	// b 0x8212891c
	goto loc_8212891C;
loc_82128918:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212891C:
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82128930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,688(r7)
	PPC_STORE_U32(ctx.r7.u32 + 688, ctx.r9.u32);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// stw r6,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r6.u32);
	// bl 0x821837d0
	ctx.lr = 0x82128960;
	sub_821837D0(ctx, base);
loc_82128960:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8212896C"))) PPC_WEAK_FUNC(sub_8212896C);
PPC_FUNC_IMPL(__imp__sub_8212896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128970"))) PPC_WEAK_FUNC(sub_82128970);
PPC_FUNC_IMPL(__imp__sub_82128970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82128978;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,76
	ctx.r30.s64 = ctx.r3.s64 + 76;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82128984:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821289e4
	if (ctx.cr6.eq) goto loc_821289E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821289A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821289e4
	if (!ctx.cr6.eq) goto loc_821289E4;
	// lis r4,26448
	ctx.r4.s64 = 1733296128;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,16708
	ctx.r4.u64 = ctx.r4.u64 | 16708;
	// bl 0x821882d0
	ctx.lr = 0x821289BC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821289e4
	if (ctx.cr6.eq) goto loc_821289E4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821289e4
	if (ctx.cr6.eq) goto loc_821289E4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821289E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821289E4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82128984
	if (!ctx.cr0.eq) goto loc_82128984;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821289F8"))) PPC_WEAK_FUNC(sub_821289F8);
PPC_FUNC_IMPL(__imp__sub_821289F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82128a08
	if (!ctx.cr6.eq) goto loc_82128A08;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82128A08:
	// lwz r11,1956(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82128a1c
	if (!ctx.cr6.eq) goto loc_82128A1C;
loc_82128A14:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82128A1C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82128a14
	if (ctx.cr6.eq) goto loc_82128A14;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128A34"))) PPC_WEAK_FUNC(sub_82128A34);
PPC_FUNC_IMPL(__imp__sub_82128A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128A38"))) PPC_WEAK_FUNC(sub_82128A38);
PPC_FUNC_IMPL(__imp__sub_82128A38) {
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
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82128aa0
	if (!ctx.cr6.eq) goto loc_82128AA0;
	// bl 0x8215bd60
	ctx.lr = 0x82128A64;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82128ad8
	if (!ctx.cr6.eq) goto loc_82128AD8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82128ad8
	if (ctx.cr6.eq) goto loc_82128AD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,104(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82128A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82128aa8
	if (ctx.cr6.eq) goto loc_82128AA8;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x82128ad8
	if (ctx.cr6.eq) goto loc_82128AD8;
loc_82128AA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82128adc
	goto loc_82128ADC;
loc_82128AA8:
	// bl 0x8215bd60
	ctx.lr = 0x82128AAC;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82128ac8
	if (ctx.cr6.eq) goto loc_82128AC8;
	// lwz r3,1992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1992);
	// bl 0x8215bd28
	ctx.lr = 0x82128AC0;
	sub_8215BD28(ctx, base);
	// lbz r11,43(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// b 0x82128acc
	goto loc_82128ACC;
loc_82128AC8:
	// lwz r11,1280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
loc_82128ACC:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82128adc
	if (!ctx.cr6.eq) goto loc_82128ADC;
loc_82128AD8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82128ADC:
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

__attribute__((alias("__imp__sub_82128AF4"))) PPC_WEAK_FUNC(sub_82128AF4);
PPC_FUNC_IMPL(__imp__sub_82128AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128AF8"))) PPC_WEAK_FUNC(sub_82128AF8);
PPC_FUNC_IMPL(__imp__sub_82128AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82128B00;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82128b68
	if (!ctx.cr6.gt) goto loc_82128B68;
	// addi r31,r3,76
	ctx.r31.s64 = ctx.r3.s64 + 76;
loc_82128B20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128b54
	if (ctx.cr6.eq) goto loc_82128B54;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82128b54
	if (ctx.cr6.eq) goto loc_82128B54;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82128B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82128b74
	if (ctx.cr6.eq) goto loc_82128B74;
loc_82128B54:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82128b20
	if (ctx.cr6.lt) goto loc_82128B20;
loc_82128B68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82128B74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82128B80"))) PPC_WEAK_FUNC(sub_82128B80);
PPC_FUNC_IMPL(__imp__sub_82128B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82128B88;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
loc_82128B94:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82128bf8
	if (ctx.cr6.eq) goto loc_82128BF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82128b94
	if (ctx.cr6.lt) goto loc_82128B94;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r29,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r29.s64 = 32 - ctx.r3.s64;
loc_82128BBC:
	// bl 0x8215bd08
	ctx.lr = 0x82128BC0;
	sub_8215BD08(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82128bdc
	if (ctx.cr6.eq) goto loc_82128BDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82128bf8
	if (ctx.cr6.eq) goto loc_82128BF8;
loc_82128BDC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82128bbc
	if (ctx.cr6.lt) goto loc_82128BBC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82128BF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82128C04"))) PPC_WEAK_FUNC(sub_82128C04);
PPC_FUNC_IMPL(__imp__sub_82128C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128C08"))) PPC_WEAK_FUNC(sub_82128C08);
PPC_FUNC_IMPL(__imp__sub_82128C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82128C10;
	sub_82248778(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x8215bec8
	ctx.lr = 0x82128C20;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82128f4c
	if (ctx.cr6.eq) goto loc_82128F4C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82128f4c
	if (ctx.cr6.eq) goto loc_82128F4C;
	// lwz r11,232(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r11,232(r28)
	PPC_STORE_U32(ctx.r28.u32 + 232, ctx.r11.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// bl 0x82128af8
	ctx.lr = 0x82128C7C;
	sub_82128AF8(ctx, base);
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82128d24
	if (!ctx.cr6.gt) goto loc_82128D24;
	// addi r31,r28,76
	ctx.r31.s64 = ctx.r28.s64 + 76;
loc_82128C94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128d10
	if (ctx.cr6.eq) goto loc_82128D10;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82128CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82128d10
	if (!ctx.cr6.eq) goto loc_82128D10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,1280(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// bl 0x8215bd60
	ctx.lr = 0x82128CC8;
	sub_8215BD60(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82128ce4
	if (ctx.cr6.eq) goto loc_82128CE4;
	// bl 0x8215bd08
	ctx.lr = 0x82128CD8;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82128d10
	if (!ctx.cr6.eq) goto loc_82128D10;
loc_82128CE4:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bge cr6,0x82128d10
	if (!ctx.cr6.lt) goto loc_82128D10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218e938
	ctx.lr = 0x82128CF4;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82128D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stwx r3,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u32);
loc_82128D10:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82128c94
	if (ctx.cr6.lt) goto loc_82128C94;
loc_82128D24:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82128d60
	if (ctx.cr6.eq) goto loc_82128D60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821284a0
	ctx.lr = 0x82128D34;
	sub_821284A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82128d60
	if (ctx.cr6.lt) goto loc_82128D60;
	// bl 0x8218e938
	ctx.lr = 0x82128D44;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82128D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stwx r3,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u32);
loc_82128D60:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822aa648
	ctx.lr = 0x82128D6C;
	sub_822AA648(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82128D74:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bge cr6,0x82128e08
	if (!ctx.cr6.lt) goto loc_82128E08;
	// addi r11,r29,19
	ctx.r11.s64 = ctx.r29.s64 + 19;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82128e08
	if (ctx.cr6.eq) goto loc_82128E08;
	// lwz r30,1280(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// bl 0x8215bd60
	ctx.lr = 0x82128D98;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82128db4
	if (ctx.cr6.eq) goto loc_82128DB4;
	// bl 0x8215bd08
	ctx.lr = 0x82128DA8;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82128e08
	if (!ctx.cr6.eq) goto loc_82128E08;
loc_82128DB4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82128ddc
	if (!ctx.cr6.eq) goto loc_82128DDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82128DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82128e08
	if (!ctx.cr6.eq) goto loc_82128E08;
	// b 0x82128df0
	goto loc_82128DF0;
loc_82128DDC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82128e08
	if (!ctx.cr6.eq) goto loc_82128E08;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821284a0
	ctx.lr = 0x82128DEC;
	sub_821284A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82128DF0:
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// bge cr6,0x82128e08
	if (!ctx.cr6.lt) goto loc_82128E08;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stwx r26,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
loc_82128E08:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x82128d74
	if (ctx.cr6.lt) goto loc_82128D74;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82128e54
	if (!ctx.cr6.eq) goto loc_82128E54;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,40
	ctx.r31.s64 = 40;
loc_82128E24:
	// bl 0x8215bd08
	ctx.lr = 0x82128E28;
	sub_8215BD08(ctx, base);
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82128e48
	if (!ctx.cr6.eq) goto loc_82128E48;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,72
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 72, ctx.xer);
	// blt cr6,0x82128e24
	if (ctx.cr6.lt) goto loc_82128E24;
	// b 0x82128e54
	goto loc_82128E54;
loc_82128E48:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stwx r26,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
loc_82128E54:
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// addi r11,r24,16
	ctx.r11.s64 = ctx.r24.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r7,r24,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r24.s64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
loc_82128E74:
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82128e90
	if (ctx.cr6.eq) goto loc_82128E90;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r6,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r6.u32);
	// b 0x82128e94
	goto loc_82128E94;
loc_82128E90:
	// stw r26,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r26.u32);
loc_82128E94:
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// clrlwi r9,r5,31
	ctx.r9.u64 = ctx.r5.u32 & 0x1;
	// lwzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82128ebc
	if (ctx.cr6.eq) goto loc_82128EBC;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwzx r5,r10,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// b 0x82128ec0
	goto loc_82128EC0;
loc_82128EBC:
	// stw r26,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r26.u32);
loc_82128EC0:
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// lwzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82128ee8
	if (ctx.cr6.eq) goto loc_82128EE8;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwzx r5,r10,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// b 0x82128eec
	goto loc_82128EEC;
loc_82128EE8:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82128EEC:
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// lwzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82128f14
	if (ctx.cr6.eq) goto loc_82128F14;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// lwzx r5,r10,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// b 0x82128f18
	goto loc_82128F18;
loc_82128F14:
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82128F18:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82128f30
	if (ctx.cr6.eq) goto loc_82128F30;
	// stw r26,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r26.u32);
	// b 0x82128f38
	goto loc_82128F38;
loc_82128F30:
	// lwzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
loc_82128F38:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// bdnz 0x82128e74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82128E74;
loc_82128F4C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82128F54"))) PPC_WEAK_FUNC(sub_82128F54);
PPC_FUNC_IMPL(__imp__sub_82128F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128F58"))) PPC_WEAK_FUNC(sub_82128F58);
PPC_FUNC_IMPL(__imp__sub_82128F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82128F60;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// bl 0x822aa648
	ctx.lr = 0x82128F88;
	sub_822AA648(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r9,-5052
	ctx.r4.s64 = ctx.r9.s64 + -5052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821281e0
	ctx.lr = 0x82128F9C;
	sub_821281E0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x822aa648
	ctx.lr = 0x82128FA8;
	sub_822AA648(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x822aa648
	ctx.lr = 0x82128FB4;
	sub_822AA648(ctx, base);
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r29,r31,184
	ctx.r29.s64 = ctx.r31.s64 + 184;
loc_82128FBC:
	// bl 0x8215bd08
	ctx.lr = 0x82128FC0;
	sub_8215BD08(ctx, base);
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,40
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 40, ctx.xer);
	// blt cr6,0x82128fbc
	if (ctx.cr6.lt) goto loc_82128FBC;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82128c08
	ctx.lr = 0x82128FE0;
	sub_82128C08(ctx, base);
	// bl 0x82134398
	ctx.lr = 0x82128FE4;
	sub_82134398(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stfs f1,-17116(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -17116, temp.u32);
	// bl 0x8215bec8
	ctx.lr = 0x82128FF0;
	sub_8215BEC8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82129008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8212901C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82129024"))) PPC_WEAK_FUNC(sub_82129024);
PPC_FUNC_IMPL(__imp__sub_82129024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129028"))) PPC_WEAK_FUNC(sub_82129028);
PPC_FUNC_IMPL(__imp__sub_82129028) {
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
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129050
	if (ctx.cr6.eq) goto loc_82129050;
	// bl 0x82131a00
	ctx.lr = 0x82129050;
	sub_82131A00(ctx, base);
loc_82129050:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129060
	if (ctx.cr6.eq) goto loc_82129060;
	// bl 0x82131b08
	ctx.lr = 0x82129060;
	sub_82131B08(ctx, base);
loc_82129060:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129080
	if (ctx.cr6.eq) goto loc_82129080;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82129080:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821290a8
	if (ctx.cr6.eq) goto loc_821290A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821290A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821290A8:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821290cc
	if (ctx.cr6.eq) goto loc_821290CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821290CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821290CC:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821290f0
	if (ctx.cr6.eq) goto loc_821290F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821290F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821290F0:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129114
	if (ctx.cr6.eq) goto loc_82129114;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82129114:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82129138
	if (ctx.cr6.eq) goto loc_82129138;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82129138
	if (!ctx.cr6.eq) goto loc_82129138;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82127d38
	ctx.lr = 0x82129138;
	sub_82127D38(ctx, base);
loc_82129138:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129158
	if (ctx.cr6.eq) goto loc_82129158;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82129158:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82129194"))) PPC_WEAK_FUNC(sub_82129194);
PPC_FUNC_IMPL(__imp__sub_82129194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129198"))) PPC_WEAK_FUNC(sub_82129198);
PPC_FUNC_IMPL(__imp__sub_82129198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821291A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x821291B4;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x821859a0
	ctx.lr = 0x821291C8;
	sub_821859A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,30800
	ctx.r8.s64 = ctx.r10.s64 + 30800;
	// addi r7,r9,30792
	ctx.r7.s64 = ctx.r9.s64 + 30792;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r6,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r6.u32);
	// stw r5,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r5.u32);
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x822aa648
	ctx.lr = 0x821292F0;
	sub_822AA648(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x822aa648
	ctx.lr = 0x821292FC;
	sub_822AA648(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x822aa648
	ctx.lr = 0x82129308;
	sub_822AA648(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x822aa648
	ctx.lr = 0x82129314;
	sub_822AA648(ctx, base);
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r29,r31,184
	ctx.r29.s64 = ctx.r31.s64 + 184;
loc_8212931C:
	// bl 0x8215bd08
	ctx.lr = 0x82129320;
	sub_8215BD08(ctx, base);
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,40
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 40, ctx.xer);
	// blt cr6,0x8212931c
	if (ctx.cr6.lt) goto loc_8212931C;
	// bl 0x8215bec8
	ctx.lr = 0x82129338;
	sub_8215BEC8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82128c08
	ctx.lr = 0x82129348;
	sub_82128C08(ctx, base);
	// bl 0x82134398
	ctx.lr = 0x8212934C;
	sub_82134398(ctx, base);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lwz r11,-2036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2036);
	// lfs f0,8616(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,-17108(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -17108, temp.u32);
	// stfs f1,-17112(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + -17112, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82129388
	if (!ctx.cr6.eq) goto loc_82129388;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822565c8
	ctx.lr = 0x82129380;
	sub_822565C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,-2036(r30)
	PPC_STORE_U32(ctx.r30.u32 + -2036, ctx.r3.u32);
loc_82129388:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82129394"))) PPC_WEAK_FUNC(sub_82129394);
PPC_FUNC_IMPL(__imp__sub_82129394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129398"))) PPC_WEAK_FUNC(sub_82129398);
PPC_FUNC_IMPL(__imp__sub_82129398) {
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
	// bl 0x82127eb8
	ctx.lr = 0x821293B8;
	sub_82127EB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821293d4
	if (ctx.cr6.eq) goto loc_821293D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821293D0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821293D4:
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

__attribute__((alias("__imp__sub_821293EC"))) PPC_WEAK_FUNC(sub_821293EC);
PPC_FUNC_IMPL(__imp__sub_821293EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821293F0"))) PPC_WEAK_FUNC(sub_821293F0);
PPC_FUNC_IMPL(__imp__sub_821293F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821293F8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82129590
	if (ctx.cr6.eq) goto loc_82129590;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adca8
	ctx.lr = 0x8212941C;
	sub_821ADCA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x82129428;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc30
	ctx.lr = 0x82129434;
	sub_821ADC30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ade28
	ctx.lr = 0x82129444;
	sub_821ADE28(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad498
	ctx.lr = 0x82129454;
	sub_821AD498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad1f8
	ctx.lr = 0x82129460;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x8212946C;
	sub_821AD288(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8212955c
	if (ctx.cr6.gt) goto loc_8212955C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821294b4
	// bdzf 4*cr6+eq,0x821294cc
	// bdzf 4*cr6+eq,0x821294e4
	// bdzf 4*cr6+eq,0x821294fc
	// bdzf 4*cr6+eq,0x82129514
	// bdzf 4*cr6+eq,0x8212952c
	// bne cr6,0x82129554
	if (!ctx.cr6.eq) goto loc_82129554;
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821294B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8212955c
	goto loc_8212955C;
loc_821294B4:
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821294C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8212955c
	goto loc_8212955C;
loc_821294CC:
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821294E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8212955c
	goto loc_8212955C;
loc_821294E4:
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821294F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8212955c
	goto loc_8212955C;
loc_821294FC:
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8212955c
	goto loc_8212955C;
loc_82129514:
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8212955c
	goto loc_8212955C;
loc_8212952C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8212955c
	if (ctx.cr6.eq) goto loc_8212955C;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8212955c
	goto loc_8212955C;
loc_82129554:
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// bl 0x82127da8
	ctx.lr = 0x8212955C;
	sub_82127DA8(ctx, base);
loc_8212955C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x82129568;
	sub_821AD1F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x82129574;
	sub_821AD288(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82129580;
	sub_821AD498(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x82129590;
	sub_821AD6A0(ctx, base);
loc_82129590:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82129598"))) PPC_WEAK_FUNC(sub_82129598);
PPC_FUNC_IMPL(__imp__sub_82129598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821295A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82129708
	if (!ctx.cr6.eq) goto loc_82129708;
	// bl 0x8215c080
	ctx.lr = 0x821295B8;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821295C0;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821295CC;
	sub_821837D0(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82080000
	ctx.lr = 0x821295D4;
	sub_82080000(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821295ec
	if (ctx.cr6.eq) goto loc_821295EC;
	// bl 0x82134b40
	ctx.lr = 0x821295E4;
	sub_82134B40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x821295f0
	goto loc_821295F0;
loc_821295EC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821295F0:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82080000
	ctx.lr = 0x821295FC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129610
	if (ctx.cr6.eq) goto loc_82129610;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82131cf8
	ctx.lr = 0x8212960C;
	sub_82131CF8(ctx, base);
	// b 0x82129614
	goto loc_82129614;
loc_82129610:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82129614:
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x82129620;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129634
	if (ctx.cr6.eq) goto loc_82129634;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82131ac0
	ctx.lr = 0x82129630;
	sub_82131AC0(ctx, base);
	// b 0x82129638
	goto loc_82129638;
loc_82129634:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82129638:
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// li r3,1008
	ctx.r3.s64 = 1008;
	// bl 0x82080000
	ctx.lr = 0x82129644;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129654
	if (ctx.cr6.eq) goto loc_82129654;
	// bl 0x821331b8
	ctx.lr = 0x82129650;
	sub_821331B8(ctx, base);
	// b 0x82129658
	goto loc_82129658;
loc_82129654:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82129658:
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821296c0
	if (!ctx.cr6.eq) goto loc_821296C0;
	// li r3,2800
	ctx.r3.s64 = 2800;
	// bl 0x82080000
	ctx.lr = 0x82129684;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129694
	if (ctx.cr6.eq) goto loc_82129694;
	// bl 0x82132e08
	ctx.lr = 0x82129690;
	sub_82132E08(ctx, base);
	// b 0x82129698
	goto loc_82129698;
loc_82129694:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82129698:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821296c0
	if (ctx.cr6.eq) goto loc_821296C0;
	// li r11,102
	ctx.r11.s64 = 102;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// bl 0x82127440
	ctx.lr = 0x821296C0;
	sub_82127440(ctx, base);
loc_821296C0:
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r7.u32);
	// ori r5,r6,8
	ctx.r5.u64 = ctx.r6.u64 | 8;
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r5.u32);
	// ori r11,r4,16
	ctx.r11.u64 = ctx.r4.u64 | 16;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82129708;
	sub_821837D0(ctx, base);
loc_82129708:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82129710"))) PPC_WEAK_FUNC(sub_82129710);
PPC_FUNC_IMPL(__imp__sub_82129710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82129718;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82134398
	ctx.lr = 0x82129724;
	sub_82134398(ctx, base);
	// lis r25,-32187
	ctx.r25.s64 = -2109407232;
	// li r26,2
	ctx.r26.s64 = 2;
	// addi r31,r29,88
	ctx.r31.s64 = ctx.r29.s64 + 88;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f1,-17116(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r25.u32 + -17116, temp.u32);
	// li r28,100
	ctx.r28.s64 = 100;
loc_82129740:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// beq cr6,0x8212976c
	if (ctx.cr6.eq) goto loc_8212976C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8212976C:
	// bl 0x82183850
	ctx.lr = 0x82129770;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82129788
	if (ctx.cr6.eq) goto loc_82129788;
	// li r3,7680
	ctx.r3.s64 = 7680;
	// bl 0x82183448
	ctx.lr = 0x82129784;
	sub_82183448(ctx, base);
	// b 0x82129790
	goto loc_82129790;
loc_82129788:
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x821845a0
	ctx.lr = 0x82129790;
	sub_821845A0(ctx, base);
loc_82129790:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821297a4
	if (ctx.cr6.eq) goto loc_821297A4;
	// lwz r4,72(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x8212bb38
	ctx.lr = 0x821297A0;
	sub_8212BB38(ctx, base);
	// b 0x821297a8
	goto loc_821297A8;
loc_821297A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821297A8:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82129820
	if (ctx.cr6.eq) goto loc_82129820;
	// lwz r8,84(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82129818
	if (ctx.cr6.eq) goto loc_82129818;
loc_821297E4:
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r6,100
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 100, ctx.xer);
	// bgt cr6,0x82129800
	if (ctx.cr6.gt) goto loc_82129800;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821297e4
	if (!ctx.cr6.eq) goto loc_821297E4;
loc_82129800:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82129818
	if (ctx.cr6.eq) goto loc_82129818;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// b 0x82129820
	goto loc_82129820;
loc_82129818:
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
loc_82129820:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82129740
	if (!ctx.cr0.eq) goto loc_82129740;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-17116(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + -17116, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82129840"))) PPC_WEAK_FUNC(sub_82129840);
PPC_FUNC_IMPL(__imp__sub_82129840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82129848;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82128150
	ctx.lr = 0x82129854;
	sub_82128150(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r25,88
	ctx.r31.s64 = ctx.r25.s64 + 88;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r23,0
	ctx.r23.s64 = 0;
loc_82129868:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82129924
	if (ctx.cr6.eq) goto loc_82129924;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,-12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212988C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x821298f4
	if (ctx.cr6.eq) goto loc_821298F4;
	// lwz r28,-12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821298b8
	if (!ctx.cr6.eq) goto loc_821298B8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821298B8:
	// bl 0x820ef4c8
	ctx.lr = 0x821298BC;
	sub_820EF4C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212c580
	ctx.lr = 0x821298C8;
	sub_8212C580(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212c500
	ctx.lr = 0x821298D4;
	sub_8212C500(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r24,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r24.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821298F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82129924
	goto loc_82129924;
loc_821298F4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82129900
	if (!ctx.cr6.eq) goto loc_82129900;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82129900:
	// bl 0x820ef4c8
	ctx.lr = 0x82129904;
	sub_820EF4C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212c580
	ctx.lr = 0x82129910;
	sub_8212C580(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212c500
	ctx.lr = 0x8212991C;
	sub_8212C500(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r23.u32);
loc_82129924:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82129868
	if (!ctx.cr0.eq) goto loc_82129868;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8212993C"))) PPC_WEAK_FUNC(sub_8212993C);
PPC_FUNC_IMPL(__imp__sub_8212993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129940"))) PPC_WEAK_FUNC(sub_82129940);
PPC_FUNC_IMPL(__imp__sub_82129940) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82129958"))) PPC_WEAK_FUNC(sub_82129958);
PPC_FUNC_IMPL(__imp__sub_82129958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82129960;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// addi r30,r3,88
	ctx.r30.s64 = ctx.r3.s64 + 88;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82129978:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821299c4
	if (ctx.cr6.eq) goto loc_821299C4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821299ac
	if (ctx.cr6.eq) goto loc_821299AC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821299A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821299c4
	if (ctx.cr6.eq) goto loc_821299C4;
loc_821299AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82128a38
	ctx.lr = 0x821299BC;
	sub_82128A38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821299e0
	if (ctx.cr6.eq) goto loc_821299E0;
loc_821299C4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82129978
	if (ctx.cr6.lt) goto loc_82129978;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821299E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821281e0
	ctx.lr = 0x821299F0;
	sub_821281E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821299F8"))) PPC_WEAK_FUNC(sub_821299F8);
PPC_FUNC_IMPL(__imp__sub_821299F8) {
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
	// lwz r3,-1496(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1496);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129a20
	if (ctx.cr6.eq) goto loc_82129A20;
	// bl 0x8209eda0
	ctx.lr = 0x82129A20;
	sub_8209EDA0(ctx, base);
loc_82129A20:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82131ee0
	ctx.lr = 0x82129A28;
	sub_82131EE0(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82131bd0
	ctx.lr = 0x82129A30;
	sub_82131BD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821283f8
	ctx.lr = 0x82129A38;
	sub_821283F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// bl 0x82127e08
	ctx.lr = 0x82129A58;
	sub_82127E08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82129A6C"))) PPC_WEAK_FUNC(sub_82129A6C);
PPC_FUNC_IMPL(__imp__sub_82129A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129A70"))) PPC_WEAK_FUNC(sub_82129A70);
PPC_FUNC_IMPL(__imp__sub_82129A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82129A78;
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
	// bl 0x82128af8
	ctx.lr = 0x82129A94;
	sub_82128AF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x82133398
	ctx.lr = 0x82129AB4;
	sub_82133398(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82129ACC"))) PPC_WEAK_FUNC(sub_82129ACC);
PPC_FUNC_IMPL(__imp__sub_82129ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129AD0"))) PPC_WEAK_FUNC(sub_82129AD0);
PPC_FUNC_IMPL(__imp__sub_82129AD0) {
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
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82129b98
	if (ctx.cr6.eq) goto loc_82129B98;
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82129b78
	if (ctx.cr6.eq) goto loc_82129B78;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82129b50
	if (ctx.cr6.eq) goto loc_82129B50;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82129b98
	if (!ctx.cr6.eq) goto loc_82129B98;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,-4940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4940, ctx.r11.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82129B50:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,-4940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4940, ctx.r11.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82129B78:
	// bl 0x8215bd60
	ctx.lr = 0x82129B7C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82129b90
	if (!ctx.cr6.eq) goto loc_82129B90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82128970
	ctx.lr = 0x82129B90;
	sub_82128970(ctx, base);
loc_82129B90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82129B98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82129BAC"))) PPC_WEAK_FUNC(sub_82129BAC);
PPC_FUNC_IMPL(__imp__sub_82129BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129BB0"))) PPC_WEAK_FUNC(sub_82129BB0);
PPC_FUNC_IMPL(__imp__sub_82129BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82129BB8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821284a0
	ctx.lr = 0x82129BC8;
	sub_821284A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82128af8
	ctx.lr = 0x82129BD4;
	sub_82128AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82129c24
	if (ctx.cr6.eq) goto loc_82129C24;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82129bf0
	if (ctx.cr6.eq) goto loc_82129BF0;
loc_82129BE4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82129BF0:
	// bl 0x8215bd08
	ctx.lr = 0x82129BF4;
	sub_8215BD08(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82129c1c
	if (ctx.cr6.lt) goto loc_82129C1C;
	// bl 0x8215bd08
	ctx.lr = 0x82129C04;
	sub_8215BD08(ctx, base);
	// addi r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82129c1c
	if (ctx.cr6.eq) goto loc_82129C1C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82129C1C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82129c5c
	goto loc_82129C5C;
loc_82129C24:
	// addi r11,r30,19
	ctx.r11.s64 = ctx.r30.s64 + 19;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82129be4
	if (ctx.cr6.eq) goto loc_82129BE4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82129be4
	if (!ctx.cr6.eq) goto loc_82129BE4;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r31,1280(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
loc_82129C5C:
	// bl 0x8215bd60
	ctx.lr = 0x82129C60;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82129c80
	if (ctx.cr6.eq) goto loc_82129C80;
	// bl 0x8215bd08
	ctx.lr = 0x82129C70;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82129c84
	if (!ctx.cr6.eq) goto loc_82129C84;
loc_82129C80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82129C84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82129C8C"))) PPC_WEAK_FUNC(sub_82129C8C);
PPC_FUNC_IMPL(__imp__sub_82129C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129C90"))) PPC_WEAK_FUNC(sub_82129C90);
PPC_FUNC_IMPL(__imp__sub_82129C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82129C98;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x82129CA4;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82129e9c
	if (ctx.cr6.eq) goto loc_82129E9C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82129e9c
	if (ctx.cr6.eq) goto loc_82129E9C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82129e9c
	if (ctx.cr6.eq) goto loc_82129E9C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82129e9c
	if (ctx.cr6.eq) goto loc_82129E9C;
	// bl 0x8215bec8
	ctx.lr = 0x82129CDC;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82129e9c
	if (!ctx.cr6.eq) goto loc_82129E9C;
	// bl 0x8215bd60
	ctx.lr = 0x82129CEC;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82129e9c
	if (!ctx.cr6.eq) goto loc_82129E9C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,-2036(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2036);
	// bl 0x8241e0ac
	ctx.lr = 0x82129D10;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82129e9c
	if (ctx.cr6.eq) goto loc_82129E9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x82129e9c
	if (!ctx.cr6.eq) goto loc_82129E9C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82129e40
	if (!ctx.cr6.eq) goto loc_82129E40;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82129d84
	if (!ctx.cr6.eq) goto loc_82129D84;
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82129d60
	if (ctx.cr6.eq) goto loc_82129D60;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82129d84
	if (ctx.cr6.eq) goto loc_82129D84;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82129D60:
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82129e9c
	if (ctx.cr6.eq) goto loc_82129E9C;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82129e9c
	if (!ctx.cr6.eq) goto loc_82129E9C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82129e9c
	if (!ctx.cr6.eq) goto loc_82129E9C;
loc_82129D84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82128af8
	ctx.lr = 0x82129D8C;
	sub_82128AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82129dec
	if (!ctx.cr6.eq) goto loc_82129DEC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82129D98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216c098
	ctx.lr = 0x82129DA0;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x82129DA4;
	sub_8215BD28(ctx, base);
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82129de0
	if (!ctx.cr6.eq) goto loc_82129DE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216c098
	ctx.lr = 0x82129DB8;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x82129DBC;
	sub_8215BD28(ctx, base);
	// lbz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82129de0
	if (ctx.cr6.eq) goto loc_82129DE0;
	// bl 0x8215bd08
	ctx.lr = 0x82129DCC;
	sub_8215BD08(ctx, base);
	// addi r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82129e38
	if (!ctx.cr6.eq) goto loc_82129E38;
loc_82129DE0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x82129d98
	if (ctx.cr6.lt) goto loc_82129D98;
loc_82129DEC:
	// bl 0x8215bd08
	ctx.lr = 0x82129DF0;
	sub_8215BD08(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82129DF4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82129a70
	ctx.lr = 0x82129E08;
	sub_82129A70(ctx, base);
	// lwz r3,108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,108(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,512(r9)
	PPC_STORE_U32(ctx.r9.u32 + 512, ctx.r11.u32);
	// stw r11,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82129E38:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// b 0x82129df4
	goto loc_82129DF4;
loc_82129E40:
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82129e9c
	if (ctx.cr6.eq) goto loc_82129E9C;
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82129e94
	if (ctx.cr6.eq) goto loc_82129E94;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82129e8c
	if (!ctx.cr6.eq) goto loc_82129E8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82129E8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
loc_82129E94:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r11.u32);
loc_82129E9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82129EA8"))) PPC_WEAK_FUNC(sub_82129EA8);
PPC_FUNC_IMPL(__imp__sub_82129EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82129EB0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x82129EBC;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82129EC4;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82129ED0;
	sub_821837D0(ctx, base);
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129ef0
	if (ctx.cr6.eq) goto loc_82129EF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82129EF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x82129EFC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82129f14
	if (ctx.cr6.eq) goto loc_82129F14;
	// li r3,1824
	ctx.r3.s64 = 1824;
	// bl 0x82183448
	ctx.lr = 0x82129F10;
	sub_82183448(ctx, base);
	// b 0x82129f1c
	goto loc_82129F1C;
loc_82129F14:
	// li r3,114
	ctx.r3.s64 = 114;
	// bl 0x821845a0
	ctx.lr = 0x82129F1C;
	sub_821845A0(ctx, base);
loc_82129F1C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129f4c
	if (ctx.cr6.eq) goto loc_82129F4C;
	// bl 0x8215c080
	ctx.lr = 0x82129F2C;
	sub_8215C080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82138788
	ctx.lr = 0x82129F38;
	sub_82138788(ctx, base);
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82129F44;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82129F4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82129F5C;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82129F64"))) PPC_WEAK_FUNC(sub_82129F64);
PPC_FUNC_IMPL(__imp__sub_82129F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129F68"))) PPC_WEAK_FUNC(sub_82129F68);
PPC_FUNC_IMPL(__imp__sub_82129F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82129F70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215c080
	ctx.lr = 0x82129F7C;
	sub_8215C080(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82129F84;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82129F90;
	sub_821837D0(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129fc8
	if (ctx.cr6.eq) goto loc_82129FC8;
	// bl 0x821274a0
	ctx.lr = 0x82129FA0;
	sub_821274A0(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129fc0
	if (ctx.cr6.eq) goto loc_82129FC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82129FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82129FC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82129FC8:
	// bl 0x82183850
	ctx.lr = 0x82129FCC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82129fe4
	if (ctx.cr6.eq) goto loc_82129FE4;
	// li r3,4848
	ctx.r3.s64 = 4848;
	// bl 0x82183448
	ctx.lr = 0x82129FE0;
	sub_82183448(ctx, base);
	// b 0x82129fec
	goto loc_82129FEC;
loc_82129FE4:
	// li r3,303
	ctx.r3.s64 = 303;
	// bl 0x821845a0
	ctx.lr = 0x82129FEC;
	sub_821845A0(ctx, base);
loc_82129FEC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129ffc
	if (ctx.cr6.eq) goto loc_82129FFC;
	// bl 0x82139af8
	ctx.lr = 0x82129FF8;
	sub_82139AF8(ctx, base);
	// b 0x8212a000
	goto loc_8212A000;
loc_82129FFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212A000:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212a028
	if (ctx.cr6.eq) goto loc_8212A028;
	// li r11,102
	ctx.r11.s64 = 102;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// bl 0x82127440
	ctx.lr = 0x8212A028;
	sub_82127440(ctx, base);
loc_8212A028:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212A030;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8212A038"))) PPC_WEAK_FUNC(sub_8212A038);
PPC_FUNC_IMPL(__imp__sub_8212A038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8212A040;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212a1f4
	if (ctx.cr6.eq) goto loc_8212A1F4;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8212A068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,132(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r7,156(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 156);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8212a1f4
	if (!ctx.cr6.eq) goto loc_8212A1F4;
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// bl 0x82128b80
	ctx.lr = 0x8212A080;
	sub_82128B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212a1f4
	if (ctx.cr6.eq) goto loc_8212A1F4;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r28,144(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bne cr6,0x8212a0ec
	if (!ctx.cr6.eq) goto loc_8212A0EC;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8212a0bc
	if (!ctx.cr6.eq) goto loc_8212A0BC;
	// bl 0x8215bd08
	ctx.lr = 0x8212A0AC;
	sub_8215BD08(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212a0bc
	if (ctx.cr6.eq) goto loc_8212A0BC;
	// li r28,4
	ctx.r28.s64 = 4;
loc_8212A0BC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8212A0C0:
	// bl 0x8215bd08
	ctx.lr = 0x8212A0C4;
	sub_8215BD08(ctx, base);
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8212a0ec
	if (!ctx.cr6.eq) goto loc_8212A0EC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8212a0c0
	if (ctx.cr6.lt) goto loc_8212A0C0;
loc_8212A0EC:
	// bl 0x8215bd08
	ctx.lr = 0x8212A0F0;
	sub_8215BD08(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8212A0FC;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x823c2ea8
	ctx.lr = 0x8212A11C;
	sub_823C2EA8(ctx, base);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212a13c
	if (ctx.cr6.eq) goto loc_8212A13C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212A13C:
	// stw r27,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r27.u32);
	// bl 0x8215bd60
	ctx.lr = 0x8212A144;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212a1c4
	if (ctx.cr6.eq) goto loc_8212A1C4;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212a1b0
	if (!ctx.cr6.gt) goto loc_8212A1B0;
	// addi r29,r30,76
	ctx.r29.s64 = ctx.r30.s64 + 76;
loc_8212A164:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212a184
	if (ctx.cr6.eq) goto loc_8212A184;
	// lwz r26,1280(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// bl 0x8215bd08
	ctx.lr = 0x8212A178;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8212a1ac
	if (ctx.cr6.eq) goto loc_8212A1AC;
loc_8212A184:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212a164
	if (ctx.cr6.lt) goto loc_8212A164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82128af8
	ctx.lr = 0x8212A1A0;
	sub_82128AF8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// b 0x8212a1d4
	goto loc_8212A1D4;
loc_8212A1AC:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8212A1B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82128af8
	ctx.lr = 0x8212A1B8;
	sub_82128AF8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// b 0x8212a1d4
	goto loc_8212A1D4;
loc_8212A1C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82128af8
	ctx.lr = 0x8212A1CC;
	sub_82128AF8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_8212A1D4:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x82133398
	ctx.lr = 0x8212A1EC;
	sub_82133398(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_8212A1F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8212A1FC"))) PPC_WEAK_FUNC(sub_8212A1FC);
PPC_FUNC_IMPL(__imp__sub_8212A1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212A200"))) PPC_WEAK_FUNC(sub_8212A200);
PPC_FUNC_IMPL(__imp__sub_8212A200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8212A208;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212a284
	if (!ctx.cr6.eq) goto loc_8212A284;
	// bl 0x8215bd60
	ctx.lr = 0x8212A22C;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212a284
	if (!ctx.cr6.eq) goto loc_8212A284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82128af8
	ctx.lr = 0x8212A240;
	sub_82128AF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x82133398
	ctx.lr = 0x8212A260;
	sub_82133398(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8212A284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212A284:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8212A290"))) PPC_WEAK_FUNC(sub_8212A290);
PPC_FUNC_IMPL(__imp__sub_8212A290) {
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
	ctx.lr = 0x8212A2A0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8212a2b8
	if (ctx.cr6.eq) goto loc_8212A2B8;
	// li r3,352
	ctx.r3.s64 = 352;
	// bl 0x82183448
	ctx.lr = 0x8212A2B4;
	sub_82183448(ctx, base);
	// b 0x8212a2c0
	goto loc_8212A2C0;
loc_8212A2B8:
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x821845a0
	ctx.lr = 0x8212A2C0;
	sub_821845A0(ctx, base);
loc_8212A2C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212a2e4
	if (ctx.cr6.eq) goto loc_8212A2E4;
	// bl 0x82129198
	ctx.lr = 0x8212A2CC;
	sub_82129198(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-2032(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8212A2E4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-2032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2032, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212A300"))) PPC_WEAK_FUNC(sub_8212A300);
PPC_FUNC_IMPL(__imp__sub_8212A300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8212A308;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x8212A314;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8212a454
	if (ctx.cr6.eq) goto loc_8212A454;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8212a454
	if (ctx.cr6.eq) goto loc_8212A454;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212a454
	if (ctx.cr6.eq) goto loc_8212A454;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212a454
	if (!ctx.cr6.eq) goto loc_8212A454;
	// bl 0x8215bec8
	ctx.lr = 0x8212A354;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212a454
	if (!ctx.cr6.eq) goto loc_8212A454;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212a454
	if (!ctx.cr6.gt) goto loc_8212A454;
loc_8212A374:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82129bb0
	ctx.lr = 0x8212A380;
	sub_82129BB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8212a3d8
	if (ctx.cr6.eq) goto loc_8212A3D8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82128808
	ctx.lr = 0x8212A3A8;
	sub_82128808(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c2e70
	ctx.lr = 0x8212A3B0;
	sub_823C2E70(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8212a3f0
	if (!ctx.cr6.eq) goto loc_8212A3F0;
loc_8212A3D8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212a374
	if (ctx.cr6.lt) goto loc_8212A374;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8212A3F0:
	// bl 0x8215bd60
	ctx.lr = 0x8212A3F4;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212a414
	if (ctx.cr6.eq) goto loc_8212A414;
	// bl 0x82128af8
	ctx.lr = 0x8212A408;
	sub_82128AF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// b 0x8212a420
	goto loc_8212A420;
loc_8212A414:
	// bl 0x82128af8
	ctx.lr = 0x8212A418;
	sub_82128AF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_8212A420:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82133398
	ctx.lr = 0x8212A438;
	sub_82133398(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
loc_8212A454:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8212A45C"))) PPC_WEAK_FUNC(sub_8212A45C);
PPC_FUNC_IMPL(__imp__sub_8212A45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212A460"))) PPC_WEAK_FUNC(sub_8212A460);
PPC_FUNC_IMPL(__imp__sub_8212A460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8212A468;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212a538
	if (ctx.cr6.eq) goto loc_8212A538;
	// bl 0x8215bec8
	ctx.lr = 0x8212A480;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212a538
	if (!ctx.cr6.eq) goto loc_8212A538;
	// bl 0x8215bec8
	ctx.lr = 0x8212A490;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8212a538
	if (ctx.cr6.eq) goto loc_8212A538;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8212a4b4
	if (ctx.cr6.lt) goto loc_8212A4B4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x8212a538
	if (!ctx.cr6.gt) goto loc_8212A538;
loc_8212A4B4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212a538
	if (ctx.cr6.eq) goto loc_8212A538;
	// addi r3,r30,168
	ctx.r3.s64 = ctx.r30.s64 + 168;
	// bl 0x82128b80
	ctx.lr = 0x8212A4CC;
	sub_82128B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8212a538
	if (!ctx.cr6.eq) goto loc_8212A538;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212a530
	if (!ctx.cr6.eq) goto loc_8212A530;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212a530
	if (!ctx.cr6.gt) goto loc_8212A530;
loc_8212A4F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82129bb0
	ctx.lr = 0x8212A500;
	sub_82129BB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8212a520
	if (ctx.cr6.eq) goto loc_8212A520;
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8212a544
	if (ctx.cr6.eq) goto loc_8212A544;
loc_8212A520:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212a4f4
	if (ctx.cr6.lt) goto loc_8212A4F4;
loc_8212A530:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r11.u32);
loc_8212A538:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8212A544:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82128808
	ctx.lr = 0x8212A558;
	sub_82128808(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8212a200
	ctx.lr = 0x8212A570;
	sub_8212A200(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8212A57C"))) PPC_WEAK_FUNC(sub_8212A57C);
PPC_FUNC_IMPL(__imp__sub_8212A57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212A580"))) PPC_WEAK_FUNC(sub_8212A580);
PPC_FUNC_IMPL(__imp__sub_8212A580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8212A588;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212a7f8
	if (ctx.cr6.eq) goto loc_8212A7F8;
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212a5b4
	if (!ctx.cr6.eq) goto loc_8212A5B4;
	// bl 0x82127f48
	ctx.lr = 0x8212A5AC;
	sub_82127F48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
loc_8212A5B4:
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// lwz r11,-4984(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8212a5d4
	if (ctx.cr6.eq) goto loc_8212A5D4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8212a5dc
	if (ctx.cr6.eq) goto loc_8212A5DC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8212a7f8
	if (!ctx.cr6.eq) goto loc_8212A7F8;
loc_8212A5D4:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8212a5ec
	if (!ctx.cr6.eq) goto loc_8212A5EC;
loc_8212A5DC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8212a7f8
	if (ctx.cr6.eq) goto loc_8212A7F8;
loc_8212A5EC:
	// bl 0x8215bd60
	ctx.lr = 0x8212A5F0;
	sub_8215BD60(ctx, base);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8215c080
	ctx.lr = 0x8212A5F8;
	sub_8215C080(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212A600;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212A60C;
	sub_821837D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82128c08
	ctx.lr = 0x8212A62C;
	sub_82128C08(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8212a760
	if (ctx.cr6.gt) goto loc_8212A760;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8212a684
	// bdzf 4*cr6+eq,0x8212a69c
	// bdzf 4*cr6+eq,0x8212a6b4
	// bdzf 4*cr6+eq,0x8212a6cc
	// bdzf 4*cr6+eq,0x8212a6e4
	// bdzf 4*cr6+eq,0x8212a6fc
	// bne cr6,0x8212a734
	if (!ctx.cr6.eq) goto loc_8212A734;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212a460
	ctx.lr = 0x8212A678;
	sub_8212A460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82129c90
	ctx.lr = 0x8212A680;
	sub_82129C90(ctx, base);
	// b 0x8212a760
	goto loc_8212A760;
loc_8212A684:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8212a760
	goto loc_8212A760;
loc_8212A69C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8212a760
	goto loc_8212A760;
loc_8212A6B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A6C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8212a760
	goto loc_8212A760;
loc_8212A6CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8212a760
	goto loc_8212A760;
loc_8212A6E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8212a760
	goto loc_8212A760;
loc_8212A6FC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8212a718
	if (ctx.cr6.eq) goto loc_8212A718;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212A718:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82129ad0
	ctx.lr = 0x8212A720;
	sub_82129AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212a460
	ctx.lr = 0x8212A728;
	sub_8212A460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82129c90
	ctx.lr = 0x8212A730;
	sub_82129C90(ctx, base);
	// b 0x8212a760
	goto loc_8212A760;
loc_8212A734:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8212a750
	if (ctx.cr6.eq) goto loc_8212A750;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212A750:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212a038
	ctx.lr = 0x8212A758;
	sub_8212A038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212a460
	ctx.lr = 0x8212A760;
	sub_8212A460(ctx, base);
loc_8212A760:
	// bl 0x8215bec8
	ctx.lr = 0x8212A764;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8212a798
	if (ctx.cr6.eq) goto loc_8212A798;
	// lwz r11,-4984(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4984);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8212a798
	if (ctx.cr6.eq) goto loc_8212A798;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8212a798
	if (ctx.cr6.eq) goto loc_8212A798;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212a798
	if (!ctx.cr6.eq) goto loc_8212A798;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212a300
	ctx.lr = 0x8212A798;
	sub_8212A300(ctx, base);
loc_8212A798:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r4,16972
	ctx.r4.s64 = 1112276992;
	// li r30,16
	ctx.r30.s64 = 16;
	// ori r4,r4,21842
	ctx.r4.u64 = ctx.r4.u64 | 21842;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x8212A7B4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212a7c8
	if (ctx.cr6.eq) goto loc_8212A7C8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212a7ec
	if (!ctx.cr6.eq) goto loc_8212A7EC;
loc_8212A7C8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r30,18
	ctx.r30.s64 = 18;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212a7ec
	if (ctx.cr6.eq) goto loc_8212A7EC;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// li r30,22
	ctx.r30.s64 = 22;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212a7ec
	if (ctx.cr6.eq) goto loc_8212A7EC;
	// li r30,30
	ctx.r30.s64 = 30;
loc_8212A7EC:
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212A7F8;
	sub_821837D0(ctx, base);
loc_8212A7F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8212A800"))) PPC_WEAK_FUNC(sub_8212A800);
PPC_FUNC_IMPL(__imp__sub_8212A800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8212A808;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,5584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5584);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,30908
	ctx.r10.s64 = ctx.r11.s64 + 30908;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8212a83c
	if (ctx.cr6.eq) goto loc_8212A83C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212A83C:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,4700
	ctx.r30.s64 = ctx.r31.s64 + 4700;
	// stw r28,5584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5584, ctx.r28.u32);
	// li r29,12
	ctx.r29.s64 = 12;
loc_8212A84C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212a86c
	if (ctx.cr6.eq) goto loc_8212A86C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212A86C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// bne 0x8212a84c
	if (!ctx.cr0.eq) goto loc_8212A84C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212a898
	if (ctx.cr6.eq) goto loc_8212A898;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212A898:
	// lwz r3,6536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6536);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212a8bc
	if (ctx.cr6.eq) goto loc_8212A8BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212A8BC:
	// stw r28,6536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6536, ctx.r28.u32);
	// addi r3,r31,6568
	ctx.r3.s64 = ctx.r31.s64 + 6568;
	// bl 0x82162518
	ctx.lr = 0x8212A8C8;
	sub_82162518(ctx, base);
	// addi r3,r31,6484
	ctx.r3.s64 = ctx.r31.s64 + 6484;
	// bl 0x823c3048
	ctx.lr = 0x8212A8D0;
	sub_823C3048(ctx, base);
	// addi r3,r31,6436
	ctx.r3.s64 = ctx.r31.s64 + 6436;
	// bl 0x823c3048
	ctx.lr = 0x8212A8D8;
	sub_823C3048(ctx, base);
	// addi r3,r31,5888
	ctx.r3.s64 = ctx.r31.s64 + 5888;
	// bl 0x823c30b8
	ctx.lr = 0x8212A8E0;
	sub_823C30B8(ctx, base);
	// addi r3,r31,5588
	ctx.r3.s64 = ctx.r31.s64 + 5588;
	// bl 0x823c31a0
	ctx.lr = 0x8212A8E8;
	sub_823C31A0(ctx, base);
	// addi r30,r31,5584
	ctx.r30.s64 = ctx.r31.s64 + 5584;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8212A8F0:
	// addi r30,r30,-416
	ctx.r30.s64 = ctx.r30.s64 + -416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a470
	ctx.lr = 0x8212A8FC;
	sub_8213A470(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8212a8f0
	if (!ctx.cr0.lt) goto loc_8212A8F0;
	// addi r30,r31,4704
	ctx.r30.s64 = ctx.r31.s64 + 4704;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8212A90C:
	// addi r30,r30,-416
	ctx.r30.s64 = ctx.r30.s64 + -416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a470
	ctx.lr = 0x8212A918;
	sub_8213A470(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8212a90c
	if (!ctx.cr0.lt) goto loc_8212A90C;
	// addi r30,r31,2624
	ctx.r30.s64 = ctx.r31.s64 + 2624;
	// li r29,5
	ctx.r29.s64 = 5;
loc_8212A928:
	// addi r30,r30,-416
	ctx.r30.s64 = ctx.r30.s64 + -416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a470
	ctx.lr = 0x8212A934;
	sub_8213A470(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8212a928
	if (!ctx.cr0.lt) goto loc_8212A928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82134bb0
	ctx.lr = 0x8212A944;
	sub_82134BB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8212A94C"))) PPC_WEAK_FUNC(sub_8212A94C);
PPC_FUNC_IMPL(__imp__sub_8212A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212A950"))) PPC_WEAK_FUNC(sub_8212A950);
PPC_FUNC_IMPL(__imp__sub_8212A950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-19408
	ctx.r10.s64 = ctx.r10.s64 + -19408;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,7648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7648, ctx.r11.u32);
	// stfs f0,7660(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7660, temp.u32);
	// stw r11,7652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7652, ctx.r11.u32);
	// ldx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r6,7632(r3)
	PPC_STORE_U64(ctx.r3.u32 + 7632, ctx.r6.u64);
	// ld r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lfs f0,2144(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7656(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7656, temp.u32);
	// std r4,7640(r3)
	PPC_STORE_U64(ctx.r3.u32 + 7640, ctx.r4.u64);
	// stw r11,7664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7664, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212A9A0"))) PPC_WEAK_FUNC(sub_8212A9A0);
PPC_FUNC_IMPL(__imp__sub_8212A9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,7652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7652, ctx.r4.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r9,7648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7648, ctx.r9.u32);
	// lfs f0,3688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3688);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,7664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7664, ctx.r8.u32);
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,7656(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7656, temp.u32);
	// stfs f13,7660(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7660, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212A9D0"))) PPC_WEAK_FUNC(sub_8212A9D0);
PPC_FUNC_IMPL(__imp__sub_8212A9D0) {
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
	// lwz r11,7648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7648);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8212aacc
	if (ctx.cr6.gt) goto loc_8212AACC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ab6c
	if (ctx.cr6.eq) goto loc_8212AB6C;
	// bdz 0x8212aa08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8212AA08;
	// bdz 0x8212aa50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8212AA50;
	// b 0x8212aa7c
	goto loc_8212AA7C;
loc_8212AA08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7656(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7656);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,30900
	ctx.r9.s64 = ctx.r11.s64 + 30900;
	// lfs f0,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,7656(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7656, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8212aa3c
	if (!ctx.cr6.lt) goto loc_8212AA3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f0,7656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7656, temp.u32);
	// stw r11,7648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7648, ctx.r11.u32);
loc_8212AA3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7656(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7656);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,30932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30932);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8212aac4
	goto loc_8212AAC4;
loc_8212AA50:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,7664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7664);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,7664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7664, ctx.r11.u32);
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7656, temp.u32);
	// stfs f0,7660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7660, temp.u32);
	// bgt 0x8212aacc
	if (ctx.cr0.gt) goto loc_8212AACC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,7648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7648, ctx.r11.u32);
	// b 0x8212aacc
	goto loc_8212AACC;
loc_8212AA7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7656(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7656);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,30900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30900);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,3688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3688);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,7656(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7656, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8212aaac
	if (!ctx.cr6.gt) goto loc_8212AAAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,7656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7656, temp.u32);
	// stw r11,7648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7648, ctx.r11.u32);
loc_8212AAAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7656(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7656);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,30932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30932);
	ctx.f13.f64 = double(temp.f32);
loc_8212AAC4:
	// fnmsubs f11,f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// stfs f11,7660(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7660, temp.u32);
loc_8212AACC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7660(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7660);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8212aae4
	if (!ctx.cr6.lt) goto loc_8212AAE4;
	// stfs f0,7660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7660, temp.u32);
loc_8212AAE4:
	// lfs f0,7656(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7656);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,7652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7652);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r9,r10,416
	ctx.r9.s64 = ctx.r10.s64 * 416;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,-19792
	ctx.r8.s64 = ctx.r8.s64 + -19792;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r4,r31,7632
	ctx.r4.s64 = ctx.r31.s64 + 7632;
	// addi r3,r10,4752
	ctx.r3.s64 = ctx.r10.s64 + 4752;
	// bl 0x821345c8
	ctx.lr = 0x8212AB30;
	sub_821345C8(ctx, base);
	// lwz r5,7652(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7652);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,7660(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7660);
	ctx.f13.f64 = double(temp.f32);
	// mulli r11,r5,416
	ctx.r11.s64 = ctx.r5.s64 * 416;
	// lfs f0,14876(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14876);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4752
	ctx.r3.s64 = ctx.r11.s64 + 4752;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4752);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212AB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212AB6C:
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

__attribute__((alias("__imp__sub_8212AB80"))) PPC_WEAK_FUNC(sub_8212AB80);
PPC_FUNC_IMPL(__imp__sub_8212AB80) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6532);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8212ac18
	if (ctx.cr6.eq) goto loc_8212AC18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,6484
	ctx.r3.s64 = ctx.r3.s64 + 6484;
	// lfs f0,10184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8324);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x8212ABE4;
	sub_823C3320(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r31,6436
	ctx.r3.s64 = ctx.r31.s64 + 6436;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,14876(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x8212AC10;
	sub_823C3320(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,6532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6532, ctx.r7.u32);
loc_8212AC18:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_8212AC34"))) PPC_WEAK_FUNC(sub_8212AC34);
PPC_FUNC_IMPL(__imp__sub_8212AC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212AC38"))) PPC_WEAK_FUNC(sub_8212AC38);
PPC_FUNC_IMPL(__imp__sub_8212AC38) {
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
	// bl 0x8212a800
	ctx.lr = 0x8212AC58;
	sub_8212A800(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212ac74
	if (ctx.cr6.eq) goto loc_8212AC74;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8212AC70;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8212AC74:
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

__attribute__((alias("__imp__sub_8212AC8C"))) PPC_WEAK_FUNC(sub_8212AC8C);
PPC_FUNC_IMPL(__imp__sub_8212AC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212AC90"))) PPC_WEAK_FUNC(sub_8212AC90);
PPC_FUNC_IMPL(__imp__sub_8212AC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8212AC98;
	sub_82248780(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249928
	ctx.lr = 0x8212ACA0;
	sub_82249928(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,6372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6372);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f29,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x8212ad00
	if (ctx.cr6.eq) goto loc_8212AD00;
	// lwz r10,5928(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5928);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212ace8
	if (ctx.cr6.eq) goto loc_8212ACE8;
	// lwz r10,5976(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5976);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212ace8
	if (ctx.cr6.eq) goto loc_8212ACE8;
	// stw r26,6372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6372, ctx.r26.u32);
	// stb r26,6400(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6400, ctx.r26.u8);
loc_8212ACE8:
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8212ad00
	if (!ctx.cr6.lt) goto loc_8212AD00;
	// stw r26,6372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6372, ctx.r26.u32);
	// stb r26,6400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6400, ctx.r26.u8);
loc_8212AD00:
	// lwz r10,6372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6372);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212ae2c
	if (!ctx.cr6.eq) goto loc_8212AE2C;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8212ae2c
	if (!ctx.cr6.lt) goto loc_8212AE2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r31,5588
	ctx.r30.s64 = ctx.r31.s64 + 5588;
	// stw r11,6372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6372, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3240
	ctx.lr = 0x8212AD34;
	sub_823C3240(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,14876(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,21044(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21044);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x8212AD54;
	sub_823C31B0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,6380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r30,r31,5888
	ctx.r30.s64 = ctx.r31.s64 + 5888;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f30,7884(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7884);
	ctx.f30.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f31,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823c3558
	ctx.lr = 0x8212AD94;
	sub_823C3558(ctx, base);
	// lfs f13,6376(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	ctx.f13.f64 = double(temp.f32);
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x823c3558
	ctx.lr = 0x8212ADC0;
	sub_823C3558(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,10340(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8212ade4
	if (!ctx.cr6.gt) goto loc_8212ADE4;
	// lbz r10,6400(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6400);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,6400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6400, ctx.r9.u8);
loc_8212ADE4:
	// lfs f13,628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8212adfc
	if (!ctx.cr6.gt) goto loc_8212ADFC;
	// lbz r10,6400(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6400);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,6400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6400, ctx.r9.u8);
loc_8212ADFC:
	// lfs f13,636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8212ae14
	if (!ctx.cr6.gt) goto loc_8212AE14;
	// lbz r10,6400(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6400);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,6400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6400, ctx.r9.u8);
loc_8212AE14:
	// lfs f13,640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8212ae2c
	if (!ctx.cr6.gt) goto loc_8212AE2C;
	// lbz r11,6400(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6400);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,6400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6400, ctx.r10.u8);
loc_8212AE2C:
	// stfs f28,6376(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6376, temp.u32);
	// stfs f29,6380(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6384, temp.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f13,192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,6388(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6388, temp.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f12,240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,6392(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6392, temp.u32);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f11,288(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6396(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6396, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r7,6372(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6372);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// beq cr6,0x8212ae8c
	if (ctx.cr6.eq) goto loc_8212AE8C;
	// lfs f0,5956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5956);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fdivs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
loc_8212AE8C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r30,r11,-23568
	ctx.r30.s64 = ctx.r11.s64 + -23568;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r30,96
	ctx.r7.s64 = ctx.r30.s64 + 96;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r29,r31,544
	ctx.r29.s64 = ctx.r31.s64 + 544;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_8212AEC4:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8212aec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212AEC4;
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// addi r28,r11,30888
	ctx.r28.s64 = ctx.r11.s64 + 30888;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f30,30948(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30948);
	ctx.f30.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// bl 0x821345c8
	ctx.lr = 0x8212AF28;
	sub_821345C8(ctx, base);
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f7,6456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	ctx.f7.f64 = double(temp.f32);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lfs f29,11300(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11300);
	ctx.f29.f64 = double(temp.f32);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f6,f7,f29
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f2,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bctrl 
	ctx.lr = 0x8212AF74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,6372(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6372);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// beq cr6,0x8212af98
	if (ctx.cr6.eq) goto loc_8212AF98;
	// lfs f0,5908(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5908);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_8212AF98:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r29,r31,960
	ctx.r29.s64 = ctx.r31.s64 + 960;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_8212AFC8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8212afc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212AFC8;
	// lwz r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// fmuls f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// bl 0x821345c8
	ctx.lr = 0x8212B01C;
	sub_821345C8(ctx, base);
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8212b058
	if (ctx.cr6.gt) goto loc_8212B058;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8212B058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212B058:
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lfs f0,6456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r8,100(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bctrl 
	ctx.lr = 0x8212B09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r6,6372(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6372);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f7,36(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8212b0cc
	if (ctx.cr6.eq) goto loc_8212B0CC;
	// lfs f0,5908(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5908);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8212B0CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r31,6401
	ctx.r29.s64 = ctx.r31.s64 + 6401;
	// addi r5,r11,30940
	ctx.r5.s64 = ctx.r11.s64 + 30940;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x8218a5f0
	ctx.lr = 0x8212B0E4;
	sub_8218A5F0(ctx, base);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r10,r30,3648
	ctx.r10.s64 = ctx.r30.s64 + 3648;
	// lwz r3,5584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5584);
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82134848
	ctx.lr = 0x8212B108;
	sub_82134848(ctx, base);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r30,3648
	ctx.r11.s64 = ctx.r30.s64 + 3648;
	// lfs f0,6456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r4,r6,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// addi r7,r11,44
	ctx.r7.s64 = ctx.r11.s64 + 44;
	// lwz r5,5584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5584);
	// li r8,60
	ctx.r8.s64 = 60;
	// lwzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.f8.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249974
	ctx.lr = 0x8212B158;
	sub_82249974(ctx, base);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8212B15C"))) PPC_WEAK_FUNC(sub_8212B15C);
PPC_FUNC_IMPL(__imp__sub_8212B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212B160"))) PPC_WEAK_FUNC(sub_8212B160);
PPC_FUNC_IMPL(__imp__sub_8212B160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8212B168;
	sub_82248784(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212b194
	if (ctx.cr6.eq) goto loc_8212B194;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8212B194:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r30,r10,-23568
	ctx.r30.s64 = ctx.r10.s64 + -23568;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// li r11,12
	ctx.r11.s64 = 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lfs f0,30952(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30952);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// fmuls f30,f31,f0
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8212B1E0:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8212b1e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212B1E0;
	// lwz r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stfs f30,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// addi r29,r11,30888
	ctx.r29.s64 = ctx.r11.s64 + 30888;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,1792
	ctx.r3.s64 = ctx.r31.s64 + 1792;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// bl 0x821345c8
	ctx.lr = 0x8212B238;
	sub_821345C8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r30,480
	ctx.r10.s64 = ctx.r30.s64 + 480;
	// addi r8,r9,-8
	ctx.r8.s64 = ctx.r9.s64 + -8;
	// addi r3,r31,2208
	ctx.r3.s64 = ctx.r31.s64 + 2208;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_8212B268:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8212b268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212B268;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f30,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// bne cr6,0x8212b2b8
	if (!ctx.cr6.eq) goto loc_8212B2B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_8212B2B8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821345c8
	ctx.lr = 0x8212B2C8;
	sub_821345C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,5588
	ctx.r3.s64 = ctx.r31.s64 + 5588;
	// bl 0x823c3280
	ctx.lr = 0x8212B2D4;
	sub_823C3280(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,4716(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4716);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,11300(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// li r6,60
	ctx.r6.s64 = 60;
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.f6.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8212B330"))) PPC_WEAK_FUNC(sub_8212B330);
PPC_FUNC_IMPL(__imp__sub_8212B330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8212B338;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,6548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6548, ctx.r4.u32);
	// li r10,90
	ctx.r10.s64 = 90;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,6544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6544, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,6552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6552, ctx.r9.u32);
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6540(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6540, temp.u32);
	// bl 0x8215c080
	ctx.lr = 0x8212B364;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212B36C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212B378;
	sub_821837D0(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82134258
	ctx.lr = 0x8212B380;
	sub_82134258(ctx, base);
	// ld r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,6536(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6536);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// ld r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212B3B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6536);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8212B3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,6536(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6536);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r7,124(r6)
	PPC_STORE_U32(ctx.r6.u32 + 124, ctx.r7.u32);
	// bl 0x821837d0
	ctx.lr = 0x8212B3DC;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8212B3E4"))) PPC_WEAK_FUNC(sub_8212B3E4);
PPC_FUNC_IMPL(__imp__sub_8212B3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212B3E8"))) PPC_WEAK_FUNC(sub_8212B3E8);
PPC_FUNC_IMPL(__imp__sub_8212B3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8212B3F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6552);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8212b4ac
	if (ctx.cr6.eq) goto loc_8212B4AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8212b46c
	if (ctx.cr6.eq) goto loc_8212B46C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8212b53c
	if (!ctx.cr6.eq) goto loc_8212B53C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,6544(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6544);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,6544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6544, ctx.r11.u32);
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6540(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6540, temp.u32);
	// bgt 0x8212b52c
	if (ctx.cr0.gt) goto loc_8212B52C;
	// bl 0x8215c080
	ctx.lr = 0x8212B434;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212B43C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212B448;
	sub_821837D0(ctx, base);
	// lwz r3,6536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6536);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212B460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// b 0x8212b518
	goto loc_8212B518;
loc_8212B46C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f12,6540(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6540);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,3692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3692);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f10,6540(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6540, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x8212b52c
	if (ctx.cr6.gt) goto loc_8212B52C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6552, ctx.r11.u32);
	// b 0x8212b52c
	goto loc_8212B52C;
loc_8212B4AC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f12,6540(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6540);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,3692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3692);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,6540(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6540, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x8212b52c
	if (ctx.cr6.lt) goto loc_8212B52C;
	// bl 0x8215c080
	ctx.lr = 0x8212B4E4;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212B4EC;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212B4F8;
	sub_821837D0(ctx, base);
	// lwz r3,6536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6536);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212B510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,3
	ctx.r8.s64 = 3;
loc_8212B518:
	// lwz r7,6536(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6536);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,124(r7)
	PPC_STORE_U32(ctx.r7.u32 + 124, ctx.r9.u32);
	// stw r8,6552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6552, ctx.r8.u32);
	// bl 0x821837d0
	ctx.lr = 0x8212B52C;
	sub_821837D0(ctx, base);
loc_8212B52C:
	// lwz r3,6536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212b53c
	if (ctx.cr6.eq) goto loc_8212B53C;
	// bl 0x8213b478
	ctx.lr = 0x8212B53C;
	sub_8213B478(ctx, base);
loc_8212B53C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8212B544"))) PPC_WEAK_FUNC(sub_8212B544);
PPC_FUNC_IMPL(__imp__sub_8212B544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212B548"))) PPC_WEAK_FUNC(sub_8212B548);
PPC_FUNC_IMPL(__imp__sub_8212B548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8212B550;
	sub_82248780(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82134258
	ctx.lr = 0x8212B560;
	sub_82134258(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,6540(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6540);
	ctx.f13.f64 = double(temp.f32);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,6552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6552);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f0,14876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14876);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r26,100(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x8212b5ac
	if (ctx.cr6.eq) goto loc_8212B5AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8212b5ac
	if (ctx.cr6.eq) goto loc_8212B5AC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8212b7c0
	if (!ctx.cr6.eq) goto loc_8212B7C0;
loc_8212B5AC:
	// lwz r11,6536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6536);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212B5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r4,6548(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6548);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8212B5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r11,30956
	ctx.r28.s64 = ctx.r11.s64 + 30956;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8224a7b8
	ctx.lr = 0x8212B5F0;
	sub_8224A7B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// lwz r4,6548(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6548);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x8212b768
	if (ctx.cr6.eq) goto loc_8212B768;
	// bctrl 
	ctx.lr = 0x8212B610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
loc_8212B618:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x8212b618
	if (!ctx.cr6.eq) goto loc_8212B618;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8224a698
	ctx.lr = 0x8212B63C;
	sub_8224A698(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224a698
	ctx.lr = 0x8212B64C;
	sub_8224A698(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,-2024
	ctx.r30.s64 = ctx.r11.s64 + -2024;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r10,r29,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r29.s64;
loc_8212B660:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8212b660
	if (!ctx.cr6.eq) goto loc_8212B660;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,4720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4720);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r10,-21456
	ctx.r29.s64 = ctx.r10.s64 + -21456;
	// lfs f0,3688(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3688);
	ctx.f0.f64 = double(temp.f32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r29,256
	ctx.r11.s64 = ctx.r29.s64 + 256;
	// addi r28,r8,30888
	ctx.r28.s64 = ctx.r8.s64 + 30888;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82134848
	ctx.lr = 0x8212B6C8;
	sub_82134848(ctx, base);
	// lwz r5,4720(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4720);
	// stw r26,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r26.u32);
	// lwz r3,4720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4720);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212B6E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r10,r27,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r27.s64;
loc_8212B6EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8212b6ec
	if (!ctx.cr6.eq) goto loc_8212B6EC;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r9,r29,320
	ctx.r9.s64 = ctx.r29.s64 + 320;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,4724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4724);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lfs f0,7952(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7952);
	ctx.f0.f64 = double(temp.f32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82134848
	ctx.lr = 0x8212B744;
	sub_82134848(ctx, base);
	// lwz r5,4724(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4724);
	// stw r26,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r26.u32);
	// lwz r3,4724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4724);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212B760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8212B768:
	// bctrl 
	ctx.lr = 0x8212B76C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-21456
	ctx.r9.s64 = ctx.r9.s64 + -21456;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r9,256
	ctx.r11.s64 = ctx.r9.s64 + 256;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,4720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4720);
	// addi r5,r8,30888
	ctx.r5.s64 = ctx.r8.s64 + 30888;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82134848
	ctx.lr = 0x8212B7A4;
	sub_82134848(ctx, base);
	// lwz r6,4720(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4720);
	// stw r26,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r26.u32);
	// lwz r3,4720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4720);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8212B7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212B7C0:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8212B7C8"))) PPC_WEAK_FUNC(sub_8212B7C8);
PPC_FUNC_IMPL(__imp__sub_8212B7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8212B7D0;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212B7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8212bad8
	if (!ctx.cr6.eq) goto loc_8212BAD8;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x821342f8
	ctx.lr = 0x8212B7FC;
	sub_821342F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6556(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6556);
	ctx.f0.f64 = double(temp.f32);
	// ld r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f13,14876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f13,8620(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8620);
	ctx.f13.f64 = double(temp.f32);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x8212b848
	if (!ctx.cr6.eq) goto loc_8212B848;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16992);
	ctx.f13.f64 = double(temp.f32);
loc_8212B848:
	// lwz r10,6564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6564);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8212b880
	if (ctx.cr6.eq) goto loc_8212B880;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8212b868
	if (ctx.cr6.eq) goto loc_8212B868;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8212bad8
	if (!ctx.cr6.eq) goto loc_8212BAD8;
	// b 0x8212b898
	goto loc_8212B898;
loc_8212B868:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f9,f10,f13,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// b 0x8212b894
	goto loc_8212B894;
loc_8212B880:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fnmsubs f9,f10,f13,f11
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f11.f64)));
loc_8212B894:
	// stfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8212B898:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,4728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4728);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r9,-21456
	ctx.r30.s64 = ctx.r9.s64 + -21456;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r28,r7,30888
	ctx.r28.s64 = ctx.r7.s64 + 30888;
	// addi r11,r30,384
	ctx.r11.s64 = ctx.r30.s64 + 384;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82134848
	ctx.lr = 0x8212B8D0;
	sub_82134848(ctx, base);
	// lwz r6,4728(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4728);
	// stw r29,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r29.u32);
	// lwz r3,4728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4728);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8212B8EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,4732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4732);
	// addi r9,r30,448
	ctx.r9.s64 = ctx.r30.s64 + 448;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82134848
	ctx.lr = 0x8212B918;
	sub_82134848(ctx, base);
	// lwz r10,4732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4732);
	// stw r29,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r29.u32);
	// lwz r3,4732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4732);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8212B934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// lwz r5,7624(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7624);
	// addi r27,r7,26232
	ctx.r27.s64 = ctx.r7.s64 + 26232;
	// addi r26,r6,-2024
	ctx.r26.s64 = ctx.r6.s64 + -2024;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82248910
	ctx.lr = 0x8212B954;
	sub_82248910(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r9,r30,512
	ctx.r9.s64 = ctx.r30.s64 + 512;
	// lwz r3,4736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4736);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82134848
	ctx.lr = 0x8212B980;
	sub_82134848(ctx, base);
	// lwz r3,4736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4736);
	// stw r29,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r29.u32);
	// lwz r3,4736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4736);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212B99C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,7624(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7624);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82248910
	ctx.lr = 0x8212B9AC;
	sub_82248910(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r9,r30,576
	ctx.r9.s64 = ctx.r30.s64 + 576;
	// lwz r3,4740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4740);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82134848
	ctx.lr = 0x8212B9D8;
	sub_82134848(ctx, base);
	// lwz r7,4740(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4740);
	// stw r29,60(r7)
	PPC_STORE_U32(ctx.r7.u32 + 60, ctx.r29.u32);
	// lwz r3,4740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4740);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8212B9F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
	// lwz r3,-4904(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4904);
	// lwz r4,7620(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7620);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212BA10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,7624(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7624);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82248910
	ctx.lr = 0x8212BA20;
	sub_82248910(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r9,r30,640
	ctx.r9.s64 = ctx.r30.s64 + 640;
	// lwz r3,4744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4744);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82134848
	ctx.lr = 0x8212BA4C;
	sub_82134848(ctx, base);
	// lwz r7,4744(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4744);
	// stw r29,60(r7)
	PPC_STORE_U32(ctx.r7.u32 + 60, ctx.r29.u32);
	// lwz r3,4744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4744);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8212BA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-4904(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,7620(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7620);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212BA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,7624(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7624);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82248910
	ctx.lr = 0x8212BA90;
	sub_82248910(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r9,r30,704
	ctx.r9.s64 = ctx.r30.s64 + 704;
	// lwz r3,4748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4748);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82134848
	ctx.lr = 0x8212BABC;
	sub_82134848(ctx, base);
	// lwz r7,4748(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4748);
	// stw r29,60(r7)
	PPC_STORE_U32(ctx.r7.u32 + 60, ctx.r29.u32);
	// lwz r3,4748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4748);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8212BAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212BAD8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8212BAE0"))) PPC_WEAK_FUNC(sub_8212BAE0);
PPC_FUNC_IMPL(__imp__sub_8212BAE0) {
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
	// bl 0x82162518
	ctx.lr = 0x8212BB00;
	sub_82162518(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212bb1c
	if (ctx.cr6.eq) goto loc_8212BB1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8212BB18;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8212BB1C:
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

__attribute__((alias("__imp__sub_8212BB34"))) PPC_WEAK_FUNC(sub_8212BB34);
PPC_FUNC_IMPL(__imp__sub_8212BB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212BB38"))) PPC_WEAK_FUNC(sub_8212BB38);
PPC_FUNC_IMPL(__imp__sub_8212BB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x8212BB40;
	sub_8224876C(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82134b40
	ctx.lr = 0x8212BB54;
	sub_82134B40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,30908
	ctx.r10.s64 = ctx.r11.s64 + 30908;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r28,r31,128
	ctx.r28.s64 = ctx.r31.s64 + 128;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r29,5
	ctx.r29.s64 = 5;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_8212BB94:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213a6f8
	ctx.lr = 0x8212BB9C;
	sub_8213A6F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,416
	ctx.r28.s64 = ctx.r28.s64 + 416;
	// bge 0x8212bb94
	if (!ctx.cr0.lt) goto loc_8212BB94;
	// addi r28,r31,2624
	ctx.r28.s64 = ctx.r31.s64 + 2624;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8212BBB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213a6f8
	ctx.lr = 0x8212BBB8;
	sub_8213A6F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,416
	ctx.r28.s64 = ctx.r28.s64 + 416;
	// bge 0x8212bbb0
	if (!ctx.cr0.lt) goto loc_8212BBB0;
	// addi r28,r31,4752
	ctx.r28.s64 = ctx.r31.s64 + 4752;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8212BBCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213a6f8
	ctx.lr = 0x8212BBD4;
	sub_8213A6F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,416
	ctx.r28.s64 = ctx.r28.s64 + 416;
	// bge 0x8212bbcc
	if (!ctx.cr0.lt) goto loc_8212BBCC;
	// stw r30,5584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5584, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,5588
	ctx.r3.s64 = ctx.r31.s64 + 5588;
	// bl 0x823c35b8
	ctx.lr = 0x8212BBF4;
	sub_823C35B8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,5888
	ctx.r3.s64 = ctx.r31.s64 + 5888;
	// bl 0x823c34c0
	ctx.lr = 0x8212BC04;
	sub_823C34C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,6372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6372, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stb r30,6400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6400, ctx.r30.u8);
	// addi r3,r31,6436
	ctx.r3.s64 = ctx.r31.s64 + 6436;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,6376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6376, temp.u32);
	// stfs f31,6380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
	// bl 0x823c2ff0
	ctx.lr = 0x8212BC28;
	sub_823C2FF0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,6484
	ctx.r3.s64 = ctx.r31.s64 + 6484;
	// bl 0x823c2ff0
	ctx.lr = 0x8212BC34;
	sub_823C2FF0(ctx, base);
	// stw r30,6532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6532, ctx.r30.u32);
	// stw r30,6536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6536, ctx.r30.u32);
	// addi r27,r31,6568
	ctx.r27.s64 = ctx.r31.s64 + 6568;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r27,28
	ctx.r4.s64 = ctx.r27.s64 + 28;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82194cd0
	ctx.lr = 0x8212BC54;
	sub_82194CD0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,30936
	ctx.r8.s64 = ctx.r10.s64 + 30936;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stw r8,6568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6568, ctx.r8.u32);
	// stfs f31,7660(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7660, temp.u32);
	// stw r30,7648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7648, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,7652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7652, ctx.r30.u32);
	// stfs f0,7656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7656, temp.u32);
	// stw r30,7664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7664, ctx.r30.u32);
	// stw r30,7668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7668, ctx.r30.u32);
	// stw r30,7672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7672, ctx.r30.u32);
	// lwz r24,-1512(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + -1512);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8212d0b0
	ctx.lr = 0x8212BC98;
	sub_8212D0B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8212d0b0
	ctx.lr = 0x8212BCA8;
	sub_8212D0B0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x8215c080
	ctx.lr = 0x8212BCB0;
	sub_8215C080(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212BCB8;
	sub_82183078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212BCC4;
	sub_821837D0(ctx, base);
	// addi r29,r31,4704
	ctx.r29.s64 = ctx.r31.s64 + 4704;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x8212BCD4;
	sub_822AA648(ctx, base);
	// addi r28,r29,-4
	ctx.r28.s64 = ctx.r29.s64 + -4;
	// addi r25,r26,12
	ctx.r25.s64 = ctx.r26.s64 + 12;
	// li r29,12
	ctx.r29.s64 = 12;
	// lis r23,-32256
	ctx.r23.s64 = -2113929216;
loc_8212BCE4:
	// bl 0x82183850
	ctx.lr = 0x8212BCE8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8212bd00
	if (ctx.cr6.eq) goto loc_8212BD00;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82183448
	ctx.lr = 0x8212BCFC;
	sub_82183448(ctx, base);
	// b 0x8212bd08
	goto loc_8212BD08;
loc_8212BD00:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821845a0
	ctx.lr = 0x8212BD08;
	sub_821845A0(ctx, base);
loc_8212BD08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212bd18
	if (ctx.cr6.eq) goto loc_8212BD18;
	// bl 0x8213bbc0
	ctx.lr = 0x8212BD14;
	sub_8213BBC0(ctx, base);
	// b 0x8212bd1c
	goto loc_8212BD1C;
loc_8212BD18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8212BD1C:
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// ld r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4);
	// bl 0x821d9300
	ctx.lr = 0x8212BD2C;
	sub_821D9300(ctx, base);
	// lwzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// lwz r10,32616(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32616);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r10,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r10.u32);
	// bne 0x8212bce4
	if (!ctx.cr0.eq) goto loc_8212BCE4;
	// bl 0x82183850
	ctx.lr = 0x8212BD44;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8212bd5c
	if (ctx.cr6.eq) goto loc_8212BD5C;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82183448
	ctx.lr = 0x8212BD58;
	sub_82183448(ctx, base);
	// b 0x8212bd64
	goto loc_8212BD64;
loc_8212BD5C:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821845a0
	ctx.lr = 0x8212BD64;
	sub_821845A0(ctx, base);
loc_8212BD64:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212bd74
	if (ctx.cr6.eq) goto loc_8212BD74;
	// bl 0x8213bbc0
	ctx.lr = 0x8212BD70;
	sub_8213BBC0(ctx, base);
	// b 0x8212bd78
	goto loc_8212BD78;
loc_8212BD74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8212BD78:
	// stw r3,5584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5584, ctx.r3.u32);
	// addi r5,r22,12
	ctx.r5.s64 = ctx.r22.s64 + 12;
	// ld r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r22.u32 + 4);
	// bl 0x821d9300
	ctx.lr = 0x8212BD88;
	sub_821D9300(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,5584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5584);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,6384
	ctx.r3.s64 = ctx.r31.s64 + 6384;
	// lwz r11,32620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32620);
	// stw r11,392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 392, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x8212BDA4;
	sub_822AA648(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,6401
	ctx.r3.s64 = ctx.r31.s64 + 6401;
	// bl 0x822aa648
	ctx.lr = 0x8212BDB0;
	sub_822AA648(ctx, base);
	// stfs f31,6540(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6540, temp.u32);
	// stfs f31,6556(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6556, temp.u32);
	// stw r30,6544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6544, ctx.r30.u32);
	// stw r30,6548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6548, ctx.r30.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r30,6552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6552, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r30,6564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6564, ctx.r30.u32);
	// stw r30,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r30.u32);
	// stw r30,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r30.u32);
	// stw r30,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r30.u32);
	// stw r30,7620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7620, ctx.r30.u32);
	// stw r30,7624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7624, ctx.r30.u32);
	// bl 0x8212d148
	ctx.lr = 0x8212BDF0;
	sub_8212D148(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8212BE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r30,124(r7)
	PPC_STORE_U32(ctx.r7.u32 + 124, ctx.r30.u32);
	// bl 0x8212d148
	ctx.lr = 0x8212BE20;
	sub_8212D148(ctx, base);
	// stw r3,6536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6536, ctx.r3.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8212BE38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,6536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6536);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r30,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r30.u32);
	// bl 0x821837d0
	ctx.lr = 0x8212BE48;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_8212BE58"))) PPC_WEAK_FUNC(sub_8212BE58);
PPC_FUNC_IMPL(__imp__sub_8212BE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8212BE60;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c01c
	if (ctx.cr6.eq) goto loc_8212C01C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134510
	ctx.lr = 0x8212BE7C;
	sub_82134510(ctx, base);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212be9c
	if (ctx.cr6.eq) goto loc_8212BE9C;
	// lwz r11,576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212be9c
	if (ctx.cr6.eq) goto loc_8212BE9C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8212BE9C:
	// bl 0x8215bec8
	ctx.lr = 0x8212BEA0;
	sub_8215BEC8(ctx, base);
	// lbz r11,654(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 654);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212bf88
	if (ctx.cr6.eq) goto loc_8212BF88;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,128
	ctx.r30.s64 = ctx.r29.s64 + 128;
loc_8212BEB4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8212bec4
	if (ctx.cr6.eq) goto loc_8212BEC4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// b 0x8212bec8
	goto loc_8212BEC8;
loc_8212BEC4:
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
loc_8212BEC8:
	// beq cr6,0x8212bee0
	if (ctx.cr6.eq) goto loc_8212BEE0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212BEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212BEE0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,416
	ctx.r30.s64 = ctx.r30.s64 + 416;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x8212beb4
	if (ctx.cr6.lt) goto loc_8212BEB4;
	// addi r31,r29,2624
	ctx.r31.s64 = ctx.r29.s64 + 2624;
	// li r30,5
	ctx.r30.s64 = 5;
loc_8212BEF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212BF0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,416
	ctx.r31.s64 = ctx.r31.s64 + 416;
	// bne 0x8212bef8
	if (!ctx.cr0.eq) goto loc_8212BEF8;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,4704
	ctx.r30.s64 = ctx.r29.s64 + 4704;
loc_8212BF20:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212bf58
	if (ctx.cr6.eq) goto loc_8212BF58;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8212bf3c
	if (ctx.cr6.eq) goto loc_8212BF3C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// b 0x8212bf40
	goto loc_8212BF40;
loc_8212BF3C:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
loc_8212BF40:
	// beq cr6,0x8212bf58
	if (ctx.cr6.eq) goto loc_8212BF58;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212BF58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212BF58:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// ble cr6,0x8212bf20
	if (!ctx.cr6.gt) goto loc_8212BF20;
	// lwz r11,5584(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212bf88
	if (ctx.cr6.eq) goto loc_8212BF88;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212BF88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212BF88:
	// bl 0x8215bec8
	ctx.lr = 0x8212BF8C;
	sub_8215BEC8(ctx, base);
	// lbz r11,655(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 655);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212bfa8
	if (ctx.cr6.eq) goto loc_8212BFA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8212b548
	ctx.lr = 0x8212BFA0;
	sub_8212B548(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8212b7c8
	ctx.lr = 0x8212BFA8;
	sub_8212B7C8(ctx, base);
loc_8212BFA8:
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212bfd8
	if (ctx.cr6.eq) goto loc_8212BFD8;
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212bfd8
	if (ctx.cr6.eq) goto loc_8212BFD8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212BFD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212BFD8:
	// bl 0x8215bec8
	ctx.lr = 0x8212BFDC;
	sub_8215BEC8(ctx, base);
	// lbz r11,655(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 655);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c014
	if (ctx.cr6.eq) goto loc_8212C014;
	// lwz r11,7648(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212c014
	if (ctx.cr6.eq) goto loc_8212C014;
	// lwz r11,7652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7652);
	// mulli r11,r11,416
	ctx.r11.s64 = ctx.r11.s64 * 416;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,4752
	ctx.r3.s64 = ctx.r11.s64 + 4752;
	// lwz r10,4752(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4752);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8212C014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212C014:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82134578
	ctx.lr = 0x8212C01C;
	sub_82134578(ctx, base);
loc_8212C01C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8212C024"))) PPC_WEAK_FUNC(sub_8212C024);
PPC_FUNC_IMPL(__imp__sub_8212C024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212C028"))) PPC_WEAK_FUNC(sub_8212C028);
PPC_FUNC_IMPL(__imp__sub_8212C028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x8212C030;
	sub_8224876C(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x82134510
	ctx.lr = 0x8212C04C;
	sub_82134510(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r22,-1512(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1512);
	// bl 0x8215c080
	ctx.lr = 0x8212C058;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212C060;
	sub_82183078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212C06C;
	sub_821837D0(ctx, base);
	// li r9,14
	ctx.r9.s64 = 14;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r26,r11,-4
	ctx.r26.s64 = ctx.r11.s64 + -4;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// li r28,6
	ctx.r28.s64 = 6;
loc_8212C0A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzu r6,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212d0d8
	ctx.lr = 0x8212C0BC;
	sub_8212D0D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x821d25f8
	ctx.lr = 0x8212C0C8;
	sub_821D25F8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,416
	ctx.r27.s64 = ctx.r27.s64 + 416;
	// bne 0x8212c0a8
	if (!ctx.cr0.eq) goto loc_8212C0A8;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c328
	if (ctx.cr6.eq) goto loc_8212C328;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// add r8,r23,r11
	ctx.r8.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lfs f9,6504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6504);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,40(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// rlwinm r25,r8,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lfs f31,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r26,r11,30888
	ctx.r26.s64 = ctx.r11.s64 + 30888;
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r29,r10,-23568
	ctx.r29.s64 = ctx.r10.s64 + -23568;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8212C154:
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r27,r11,5,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r27,r29
	ctx.r6.u64 = ctx.r27.u64 + ctx.r29.u64;
	// bl 0x821345c8
	ctx.lr = 0x8212C178;
	sub_821345C8(ctx, base);
	// addi r10,r29,60
	ctx.r10.s64 = ctx.r29.s64 + 60;
	// lfs f0,6456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwz r6,100(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bctrl 
	ctx.lr = 0x8212C1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,416
	ctx.r30.s64 = ctx.r30.s64 + 416;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// blt cr6,0x8212c154
	if (ctx.cr6.lt) goto loc_8212C154;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// addi r27,r31,4700
	ctx.r27.s64 = ctx.r31.s64 + 4700;
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,60
	ctx.r25.s64 = 60;
loc_8212C1E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8212c1fc
	if (ctx.cr6.eq) goto loc_8212C1FC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8212c204
	if (!ctx.cr6.eq) goto loc_8212C204;
loc_8212C1FC:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r7,r11,486
	ctx.r7.s64 = ctx.r11.s64 + 486;
loc_8212C204:
	// add r10,r24,r30
	ctx.r10.u64 = ctx.r24.u64 + ctx.r30.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r29,2112
	ctx.r11.s64 = ctx.r29.s64 + 2112;
	// rlwinm r28,r10,6,0,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82134848
	ctx.lr = 0x8212C224;
	sub_82134848(ctx, base);
	// addi r11,r29,2112
	ctx.r11.s64 = ctx.r29.s64 + 2112;
	// lfs f0,6456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// lwzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.f8.u32);
	// blt cr6,0x8212c1e8
	if (ctx.cr6.lt) goto loc_8212C1E8;
	// addi r11,r29,3648
	ctx.r11.s64 = ctx.r29.s64 + 3648;
	// lwz r3,5584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5584);
	// rlwinm r28,r23,6,0,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82134848
	ctx.lr = 0x8212C288;
	sub_82134848(ctx, base);
	// addi r11,r29,3648
	ctx.r11.s64 = ctx.r29.s64 + 3648;
	// lfs f0,6456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,5584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5584);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,4752
	ctx.r29.s64 = ctx.r31.s64 + 4752;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r9,r25
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, ctx.f8.u32);
loc_8212C2C8:
	// addi r6,r30,30
	ctx.r6.s64 = ctx.r30.s64 + 30;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212d0d8
	ctx.lr = 0x8212C2DC;
	sub_8212D0D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x821d25f8
	ctx.lr = 0x8212C2E8;
	sub_821D25F8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,416
	ctx.r29.s64 = ctx.r29.s64 + 416;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x8212c2c8
	if (ctx.cr6.lt) goto loc_8212C2C8;
	// addi r31,r31,5588
	ctx.r31.s64 = ctx.r31.s64 + 5588;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3240
	ctx.lr = 0x8212C308;
	sub_823C3240(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,30
	ctx.r7.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x8212C328;
	sub_823C31B0(ctx, base);
loc_8212C328:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212C330;
	sub_821837D0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82134578
	ctx.lr = 0x8212C338;
	sub_82134578(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_8212C344"))) PPC_WEAK_FUNC(sub_8212C344);
PPC_FUNC_IMPL(__imp__sub_8212C344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212C348"))) PPC_WEAK_FUNC(sub_8212C348);
PPC_FUNC_IMPL(__imp__sub_8212C348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8212C350;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8215c080
	ctx.lr = 0x8212C368;
	sub_8215C080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212C370;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212C37C;
	sub_821837D0(ctx, base);
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r7,18
	ctx.r7.s64 = 18;
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// addi r31,r28,2624
	ctx.r31.s64 = ctx.r28.s64 + 2624;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// add r26,r29,r11
	ctx.r26.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lwz r27,-1512(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + -1512);
loc_8212C3D8:
	// add r10,r26,r30
	ctx.r10.u64 = ctx.r26.u64 + ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x8212d0d8
	ctx.lr = 0x8212C3F4;
	sub_8212D0D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x821d25f8
	ctx.lr = 0x8212C400;
	sub_821D25F8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,416
	ctx.r29.s64 = ctx.r29.s64 + 416;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// blt cr6,0x8212c3d8
	if (ctx.cr6.lt) goto loc_8212C3D8;
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c4ec
	if (ctx.cr6.eq) goto loc_8212C4EC;
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// lfs f0,6504(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6504);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f31,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r11,-22416
	ctx.r27.s64 = ctx.r11.s64 + -22416;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r25,r10,30888
	ctx.r25.s64 = ctx.r10.s64 + 30888;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8212C470:
	// add r11,r26,r30
	ctx.r11.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r29,r11,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r29,r27
	ctx.r6.u64 = ctx.r29.u64 + ctx.r27.u64;
	// bl 0x821345c8
	ctx.lr = 0x8212C494;
	sub_821345C8(ctx, base);
	// addi r10,r27,60
	ctx.r10.s64 = ctx.r27.s64 + 60;
	// lfs f0,6456(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6456);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r6,100(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bctrl 
	ctx.lr = 0x8212C4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,416
	ctx.r31.s64 = ctx.r31.s64 + 416;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x8212c470
	if (ctx.cr6.lt) goto loc_8212C470;
loc_8212C4EC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212C4F4;
	sub_821837D0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8212C500"))) PPC_WEAK_FUNC(sub_8212C500);
PPC_FUNC_IMPL(__imp__sub_8212C500) {
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
	// stw r4,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212C530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82134118
	ctx.lr = 0x8212C538;
	sub_82134118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8212c028
	ctx.lr = 0x8212C548;
	sub_8212C028(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821341b8
	ctx.lr = 0x8212C550;
	sub_821341B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8212c348
	ctx.lr = 0x8212C560;
	sub_8212C348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212ab80
	ctx.lr = 0x8212C568;
	sub_8212AB80(ctx, base);
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

__attribute__((alias("__imp__sub_8212C580"))) PPC_WEAK_FUNC(sub_8212C580);
PPC_FUNC_IMPL(__imp__sub_8212C580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8212C588;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r30.u32);
	// stw r30,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r30.u32);
	// beq cr6,0x8212c628
	if (ctx.cr6.eq) goto loc_8212C628;
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// lwz r3,1964(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1964);
	// ori r4,r4,20512
	ctx.r4.u64 = ctx.r4.u64 | 20512;
	// bl 0x821882d0
	ctx.lr = 0x8212C5C0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212c5d0
	if (ctx.cr6.eq) goto loc_8212C5D0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8212c5d4
	goto loc_8212C5D4;
loc_8212C5D0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8212C5D4:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r4,17232
	ctx.r4.s64 = 1129316352;
	// lwz r3,1964(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1964);
	// ori r4,r4,21071
	ctx.r4.u64 = ctx.r4.u64 | 21071;
	// bl 0x821882d0
	ctx.lr = 0x8212C5E8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212c5f8
	if (ctx.cr6.eq) goto loc_8212C5F8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8212c5fc
	goto loc_8212C5FC;
loc_8212C5F8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8212C5FC:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lis r4,26448
	ctx.r4.s64 = 1733296128;
	// addi r3,r29,1248
	ctx.r3.s64 = ctx.r29.s64 + 1248;
	// ori r4,r4,16708
	ctx.r4.u64 = ctx.r4.u64 | 16708;
	// bl 0x821882d0
	ctx.lr = 0x8212C610;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212c620
	if (ctx.cr6.eq) goto loc_8212C620;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8212c624
	goto loc_8212C624;
loc_8212C620:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8212C624:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_8212C628:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c6bc
	if (ctx.cr6.eq) goto loc_8212C6BC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c6bc
	if (ctx.cr6.eq) goto loc_8212C6BC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c6bc
	if (ctx.cr6.eq) goto loc_8212C6BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82134bc0
	ctx.lr = 0x8212C654;
	sub_82134BC0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// bl 0x8215bd60
	ctx.lr = 0x8212C65C;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212c67c
	if (ctx.cr6.eq) goto loc_8212C67C;
	// lwz r3,1992(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1992);
	// bl 0x8216bfb8
	ctx.lr = 0x8212C670;
	sub_8216BFB8(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x8212C674;
	sub_8215BD28(ctx, base);
	// lbz r11,43(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_8212C67C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,6544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6544, ctx.r30.u32);
	// stw r30,6548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6548, ctx.r30.u32);
	// stw r30,6552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6552, ctx.r30.u32);
	// stw r30,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r30.u32);
	// stw r30,6564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6564, ctx.r30.u32);
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6540, temp.u32);
	// stfs f0,6556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6556, temp.u32);
	// stw r30,6584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6584, ctx.r30.u32);
	// stw r30,6588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6588, ctx.r30.u32);
	// stw r30,6592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6592, ctx.r30.u32);
	// stw r30,7620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7620, ctx.r30.u32);
	// stw r30,7624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7624, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8212C6BC:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8212C6D4"))) PPC_WEAK_FUNC(sub_8212C6D4);
PPC_FUNC_IMPL(__imp__sub_8212C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212C6D8"))) PPC_WEAK_FUNC(sub_8212C6D8);
PPC_FUNC_IMPL(__imp__sub_8212C6D8) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c884
	if (ctx.cr6.eq) goto loc_8212C884;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212c884
	if (ctx.cr6.eq) goto loc_8212C884;
	// bl 0x821a2a60
	ctx.lr = 0x8212C710;
	sub_821A2A60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212c884
	if (ctx.cr6.eq) goto loc_8212C884;
	// bl 0x8215bd60
	ctx.lr = 0x8212C71C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212c7b8
	if (ctx.cr6.eq) goto loc_8212C7B8;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c884
	if (ctx.cr6.eq) goto loc_8212C884;
	// lwz r3,1992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1992);
	// bl 0x8216bfb8
	ctx.lr = 0x8212C73C;
	sub_8216BFB8(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x8212C740;
	sub_8215BD28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,43(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82225508
	ctx.lr = 0x8212C750;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212c7b8
	if (ctx.cr6.eq) goto loc_8212C7B8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,-740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// bl 0x82225a70
	ctx.lr = 0x8212C768;
	sub_82225A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212c7b8
	if (ctx.cr6.eq) goto loc_8212C7B8;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// addi r8,r9,32320
	ctx.r8.s64 = ctx.r9.s64 + 32320;
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r6,32320(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32320);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r3,108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 108, ctx.r3.u32);
	// stw r7,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
loc_8212C7B8:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212c884
	if (ctx.cr6.eq) goto loc_8212C884;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c884
	if (ctx.cr6.eq) goto loc_8212C884;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82134118
	ctx.lr = 0x8212C7D8;
	sub_82134118(ctx, base);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// addi r10,r6,-19360
	ctx.r10.s64 = ctx.r6.s64 + -19360;
	// std r3,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// std r9,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r9.u64);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// std r8,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r8.u64);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8212C87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8213b478
	ctx.lr = 0x8212C884;
	sub_8213B478(ctx, base);
loc_8212C884:
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

__attribute__((alias("__imp__sub_8212C89C"))) PPC_WEAK_FUNC(sub_8212C89C);
PPC_FUNC_IMPL(__imp__sub_8212C89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212C8A0"))) PPC_WEAK_FUNC(sub_8212C8A0);
PPC_FUNC_IMPL(__imp__sub_8212C8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8212C8A8;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f31,6504(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6504);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x821341b8
	ctx.lr = 0x8212C8C0;
	sub_821341B8(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r31,2624
	ctx.r29.s64 = ctx.r31.s64 + 2624;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r28,r11,-22416
	ctx.r28.s64 = ctx.r11.s64 + -22416;
	// lfs f31,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r10,30888
	ctx.r27.s64 = ctx.r10.s64 + 30888;
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_8212C914:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x821345c8
	ctx.lr = 0x8212C944;
	sub_821345C8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r9,r28,60
	ctx.r9.s64 = ctx.r28.s64 + 60;
	// lfs f0,6456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,100(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bctrl 
	ctx.lr = 0x8212C9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,416
	ctx.r29.s64 = ctx.r29.s64 + 416;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x8212c914
	if (ctx.cr6.lt) goto loc_8212C914;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r25,r11,-19328
	ctx.r25.s64 = ctx.r11.s64 + -19328;
	// li r29,255
	ctx.r29.s64 = 255;
	// addi r30,r25,4
	ctx.r30.s64 = ctx.r25.s64 + 4;
	// li r28,128
	ctx.r28.s64 = 128;
loc_8212C9D0:
	// lwz r11,6372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6372);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// beq cr6,0x8212ca34
	if (ctx.cr6.eq) goto loc_8212CA34;
	// lbz r11,6400(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6400);
	// and r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212ca34
	if (ctx.cr6.eq) goto loc_8212CA34;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,5588
	ctx.r3.s64 = ctx.r31.s64 + 5588;
	// bl 0x823c3280
	ctx.lr = 0x8212CA08;
	sub_823C3280(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mulli r11,r11,416
	ctx.r11.s64 = ctx.r11.s64 * 416;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,2624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// b 0x8212cb00
	goto loc_8212CB00;
loc_8212CA34:
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x820a75f0
	ctx.lr = 0x8212CA40;
	sub_820A75F0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8212ca74
	if (!ctx.cr6.eq) goto loc_8212CA74;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mulli r11,r11,416
	ctx.r11.s64 = ctx.r11.s64 * 416;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,2624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// b 0x8212cb00
	goto loc_8212CB00;
loc_8212CA74:
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x820a75f0
	ctx.lr = 0x8212CA80;
	sub_820A75F0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8212cab4
	if (!ctx.cr6.eq) goto loc_8212CAB4;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mulli r11,r11,416
	ctx.r11.s64 = ctx.r11.s64 * 416;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,2624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// b 0x8212cb00
	goto loc_8212CB00;
loc_8212CAB4:
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x820a75f0
	ctx.lr = 0x8212CAC0;
	sub_820A75F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mulli r11,r11,416
	ctx.r11.s64 = ctx.r11.s64 * 416;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x8212caf4
	if (!ctx.cr6.eq) goto loc_8212CAF4;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// lwz r10,2624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// b 0x8212cb00
	goto loc_8212CB00;
loc_8212CAF4:
	// lwz r10,2624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
loc_8212CB00:
	// addi r3,r11,2624
	ctx.r3.s64 = ctx.r11.s64 + 2624;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8212CB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r25,36
	ctx.r11.s64 = ctx.r25.s64 + 36;
	// rotlwi r27,r27,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212c9d0
	if (ctx.cr6.lt) goto loc_8212C9D0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8212CB2C"))) PPC_WEAK_FUNC(sub_8212CB2C);
PPC_FUNC_IMPL(__imp__sub_8212CB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212CB30"))) PPC_WEAK_FUNC(sub_8212CB30);
PPC_FUNC_IMPL(__imp__sub_8212CB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8212CB38;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6584);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8212cb9c
	if (ctx.cr6.eq) goto loc_8212CB9C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212cb88
	if (ctx.cr6.eq) goto loc_8212CB88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,6568
	ctx.r3.s64 = ctx.r3.s64 + 6568;
	// bl 0x82194de8
	ctx.lr = 0x8212CB68;
	sub_82194DE8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212cb88
	if (!ctx.cr6.eq) goto loc_8212CB88;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8212CB88:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r31,6568
	ctx.r3.s64 = ctx.r31.s64 + 6568;
	// bl 0x82194d68
	ctx.lr = 0x8212CB9C;
	sub_82194D68(ctx, base);
loc_8212CB9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8212CBA4"))) PPC_WEAK_FUNC(sub_8212CBA4);
PPC_FUNC_IMPL(__imp__sub_8212CBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212CBA8"))) PPC_WEAK_FUNC(sub_8212CBA8);
PPC_FUNC_IMPL(__imp__sub_8212CBA8) {
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
	// lwz r11,6564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8212ccd0
	if (ctx.cr6.gt) goto loc_8212CCD0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8212cc34
	// bdzf 4*cr6+eq,0x8212cc94
	// bne cr6,0x8212cc70
	if (!ctx.cr6.eq) goto loc_8212CC70;
	// lwz r11,6584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212ccd0
	if (ctx.cr6.eq) goto loc_8212CCD0;
	// addi r30,r31,6568
	ctx.r30.s64 = ctx.r31.s64 + 6568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82194d00
	ctx.lr = 0x8212CBF8;
	sub_82194D00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,90
	ctx.r9.s64 = 90;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,7620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7620, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,6556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6556, temp.u32);
	// stw r6,7624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7624, ctx.r6.u32);
	// stw r9,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r9.u32);
	// stw r8,6564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6564, ctx.r8.u32);
	// bl 0x82194d30
	ctx.lr = 0x8212CC30;
	sub_82194D30(ctx, base);
	// b 0x8212ccd0
	goto loc_8212CCD0;
loc_8212CC34:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f12,6556(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6556);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,13660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13660);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,6556(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6556, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x8212ccd0
	if (ctx.cr6.lt) goto loc_8212CCD0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8212cccc
	goto loc_8212CCCC;
loc_8212CC70:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,6560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6560);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r11.u32);
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6556, temp.u32);
	// bgt 0x8212ccd0
	if (ctx.cr0.gt) goto loc_8212CCD0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8212cccc
	goto loc_8212CCCC;
loc_8212CC94:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f12,6556(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6556);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,13660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13660);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f10,6556(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6556, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x8212ccd0
	if (ctx.cr6.gt) goto loc_8212CCD0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212CCCC:
	// stw r11,6564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6564, ctx.r11.u32);
loc_8212CCD0:
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

__attribute__((alias("__imp__sub_8212CCE8"))) PPC_WEAK_FUNC(sub_8212CCE8);
PPC_FUNC_IMPL(__imp__sub_8212CCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8212CCF0;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212cfcc
	if (ctx.cr6.eq) goto loc_8212CFCC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-5000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212cfcc
	if (!ctx.cr6.eq) goto loc_8212CFCC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82134510
	ctx.lr = 0x8212CD20;
	sub_82134510(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212cfbc
	if (ctx.cr6.eq) goto loc_8212CFBC;
	// lfs f31,6504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6504);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82134118
	ctx.lr = 0x8212CD38;
	sub_82134118(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r27,r11,30888
	ctx.r27.s64 = ctx.r11.s64 + 30888;
	// lfs f31,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// addi r28,r10,-23568
	ctx.r28.s64 = ctx.r10.s64 + -23568;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8212CD8C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x821345c8
	ctx.lr = 0x8212CDC0;
	sub_821345C8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r9,r28,60
	ctx.r9.s64 = ctx.r28.s64 + 60;
	// lfs f0,6456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// rlwinm r6,r7,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bctrl 
	ctx.lr = 0x8212CE28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,416
	ctx.r29.s64 = ctx.r29.s64 + 416;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x8212cd8c
	if (ctx.cr6.lt) goto loc_8212CD8C;
	// bl 0x8215bd60
	ctx.lr = 0x8212CE3C;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ceb4
	if (ctx.cr6.eq) goto loc_8212CEB4;
	// bl 0x8215bd08
	ctx.lr = 0x8212CE4C;
	sub_8215BD08(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8218e938
	ctx.lr = 0x8212CE54;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212CE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212ce90
	if (ctx.cr6.eq) goto loc_8212CE90;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// stw r10,7668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7668, ctx.r10.u32);
	// li r3,10000
	ctx.r3.s64 = 10000;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,7672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7672, ctx.r8.u32);
	// bl 0x8208f658
	ctx.lr = 0x8212CE90;
	sub_8208F658(ctx, base);
loc_8212CE90:
	// lwz r11,7668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ceb4
	if (ctx.cr6.eq) goto loc_8212CEB4;
	// lwz r11,7672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7672);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,7672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7672, ctx.r11.u32);
	// bgt 0x8212ceb4
	if (ctx.cr0.gt) goto loc_8212CEB4;
	// stw r25,7668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7668, ctx.r25.u32);
	// stw r25,7672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7672, ctx.r25.u32);
loc_8212CEB4:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r29,r31,4700
	ctx.r29.s64 = ctx.r31.s64 + 4700;
	// li r26,60
	ctx.r26.s64 = 60;
loc_8212CEC0:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8212ced4
	if (ctx.cr6.eq) goto loc_8212CED4;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8212cef8
	if (!ctx.cr6.eq) goto loc_8212CEF8;
loc_8212CED4:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,7668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7668);
	// addi r7,r11,486
	ctx.r7.s64 = ctx.r11.s64 + 486;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212cef8
	if (ctx.cr6.eq) goto loc_8212CEF8;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x8216c098
	ctx.lr = 0x8212CEF0;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x8212CEF4;
	sub_8215BD28(ctx, base);
	// addi r7,r3,45
	ctx.r7.s64 = ctx.r3.s64 + 45;
loc_8212CEF8:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r9,r28,2112
	ctx.r9.s64 = ctx.r28.s64 + 2112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82134848
	ctx.lr = 0x8212CF28;
	sub_82134848(ctx, base);
	// addi r11,r28,2112
	ctx.r11.s64 = ctx.r28.s64 + 2112;
	// lfs f0,6456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	ctx.f0.f64 = double(temp.f32);
	// lwzu r10,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r8,r11,44
	ctx.r8.s64 = ctx.r11.s64 + 44;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r5,r6,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// lwzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.f8.u32);
	// blt cr6,0x8212cec0
	if (ctx.cr6.lt) goto loc_8212CEC0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212ac90
	ctx.lr = 0x8212CF90;
	sub_8212AC90(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212b160
	ctx.lr = 0x8212CF9C;
	sub_8212B160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212c8a0
	ctx.lr = 0x8212CFA4;
	sub_8212C8A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212b3e8
	ctx.lr = 0x8212CFAC;
	sub_8212B3E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212cba8
	ctx.lr = 0x8212CFB4;
	sub_8212CBA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212a9d0
	ctx.lr = 0x8212CFBC;
	sub_8212A9D0(ctx, base);
loc_8212CFBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212c6d8
	ctx.lr = 0x8212CFC4;
	sub_8212C6D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82134578
	ctx.lr = 0x8212CFCC;
	sub_82134578(ctx, base);
loc_8212CFCC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8212CFD8"))) PPC_WEAK_FUNC(sub_8212CFD8);
PPC_FUNC_IMPL(__imp__sub_8212CFD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-5000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8212be58
	sub_8212BE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212CFF8"))) PPC_WEAK_FUNC(sub_8212CFF8);
PPC_FUNC_IMPL(__imp__sub_8212CFF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212CFFC"))) PPC_WEAK_FUNC(sub_8212CFFC);
PPC_FUNC_IMPL(__imp__sub_8212CFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D000"))) PPC_WEAK_FUNC(sub_8212D000);
PPC_FUNC_IMPL(__imp__sub_8212D000) {
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
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x8212D030;
	sub_822AA648(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x822aa648
	ctx.lr = 0x8212D03C;
	sub_822AA648(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x822aa648
	ctx.lr = 0x8212D048;
	sub_822AA648(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x822aa648
	ctx.lr = 0x8212D054;
	sub_822AA648(ctx, base);
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x822aa648
	ctx.lr = 0x8212D060;
	sub_822AA648(ctx, base);
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x822aa648
	ctx.lr = 0x8212D06C;
	sub_822AA648(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// bl 0x822aa648
	ctx.lr = 0x8212D078;
	sub_822AA648(ctx, base);
	// bl 0x821343a8
	ctx.lr = 0x8212D07C;
	sub_821343A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212D090"))) PPC_WEAK_FUNC(sub_8212D090);
PPC_FUNC_IMPL(__imp__sub_8212D090) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8212d0a8
	if (!ctx.cr6.eq) goto loc_8212D0A8;
	// blr 
	return;
loc_8212D0A8:
	// b 0x8213bc78
	sub_8213BC78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212D0AC"))) PPC_WEAK_FUNC(sub_8212D0AC);
PPC_FUNC_IMPL(__imp__sub_8212D0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D0B0"))) PPC_WEAK_FUNC(sub_8212D0B0);
PPC_FUNC_IMPL(__imp__sub_8212D0B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212d0cc
	if (!ctx.cr6.eq) goto loc_8212D0CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8212D0CC:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212D0D8"))) PPC_WEAK_FUNC(sub_8212D0D8);
PPC_FUNC_IMPL(__imp__sub_8212D0D8) {
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
	// addi r11,r5,9
	ctx.r11.s64 = ctx.r5.s64 + 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwzx r3,r10,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// bl 0x8213beb8
	ctx.lr = 0x8212D104;
	sub_8213BEB8(ctx, base);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8212D138"))) PPC_WEAK_FUNC(sub_8212D138);
PPC_FUNC_IMPL(__imp__sub_8212D138) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x8213beb8
	sub_8213BEB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212D148"))) PPC_WEAK_FUNC(sub_8212D148);
PPC_FUNC_IMPL(__imp__sub_8212D148) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 + 9;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x8213bfc8
	sub_8213BFC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212D15C"))) PPC_WEAK_FUNC(sub_8212D15C);
PPC_FUNC_IMPL(__imp__sub_8212D15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D160"))) PPC_WEAK_FUNC(sub_8212D160);
PPC_FUNC_IMPL(__imp__sub_8212D160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8212D168;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-1512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212d1d0
	if (ctx.cr6.eq) goto loc_8212D1D0;
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212d1d0
	if (ctx.cr6.eq) goto loc_8212D1D0;
	// lwz r31,136(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8212d1d0
	if (ctx.cr6.eq) goto loc_8212D1D0;
	// bl 0x82133f88
	ctx.lr = 0x8212D1A4;
	sub_82133F88(ctx, base);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// bl 0x821324d8
	ctx.lr = 0x8212D1CC;
	sub_821324D8(ctx, base);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_8212D1D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8212D1D8"))) PPC_WEAK_FUNC(sub_8212D1D8);
PPC_FUNC_IMPL(__imp__sub_8212D1D8) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8212d218
	if (ctx.cr6.lt) goto loc_8212D218;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bgt cr6,0x8212d218
	if (ctx.cr6.gt) goto loc_8212D218;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212d160
	ctx.lr = 0x8212D20C;
	sub_8212D160(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-5388
	ctx.r3.s64 = ctx.r3.s64 + -5388;
	// bl 0x8208f658
	ctx.lr = 0x8212D218;
	sub_8208F658(ctx, base);
loc_8212D218:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212D22C"))) PPC_WEAK_FUNC(sub_8212D22C);
PPC_FUNC_IMPL(__imp__sub_8212D22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D230"))) PPC_WEAK_FUNC(sub_8212D230);
PPC_FUNC_IMPL(__imp__sub_8212D230) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x8212d160
	sub_8212D160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212D250"))) PPC_WEAK_FUNC(sub_8212D250);
PPC_FUNC_IMPL(__imp__sub_8212D250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212D254"))) PPC_WEAK_FUNC(sub_8212D254);
PPC_FUNC_IMPL(__imp__sub_8212D254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D258"))) PPC_WEAK_FUNC(sub_8212D258);
PPC_FUNC_IMPL(__imp__sub_8212D258) {
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
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8212d284
	if (ctx.cr6.eq) goto loc_8212D284;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x8212d284
	if (ctx.cr6.eq) goto loc_8212D284;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bne cr6,0x8212d2a0
	if (!ctx.cr6.eq) goto loc_8212D2A0;
loc_8212D284:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8212d160
	ctx.lr = 0x8212D294;
	sub_8212D160(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-5388
	ctx.r3.s64 = ctx.r3.s64 + -5388;
	// bl 0x8208f658
	ctx.lr = 0x8212D2A0;
	sub_8208F658(ctx, base);
loc_8212D2A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212D2B4"))) PPC_WEAK_FUNC(sub_8212D2B4);
PPC_FUNC_IMPL(__imp__sub_8212D2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D2B8"))) PPC_WEAK_FUNC(sub_8212D2B8);
PPC_FUNC_IMPL(__imp__sub_8212D2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8212D2C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x8212D2CC;
	sub_8215BEC8(ctx, base);
	// addi r31,r3,64
	ctx.r31.s64 = ctx.r3.s64 + 64;
	// bl 0x8215bec8
	ctx.lr = 0x8212D2D4;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// bl 0x8215bec8
	ctx.lr = 0x8212D2E0;
	sub_8215BEC8(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lbz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,-1512(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1512);
	// beq cr6,0x8212d30c
	if (ctx.cr6.eq) goto loc_8212D30C;
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8212d3a8
	if (ctx.cr6.eq) goto loc_8212D3A8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8212d3a8
	if (ctx.cr6.eq) goto loc_8212D3A8;
loc_8212D30C:
	// lwz r11,260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212d3a8
	if (ctx.cr6.eq) goto loc_8212D3A8;
	// lwz r31,140(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8212d3a8
	if (ctx.cr6.eq) goto loc_8212D3A8;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8212d3a8
	if (ctx.cr6.gt) goto loc_8212D3A8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8212d34c
	// bdzf 4*cr6+eq,0x8212d34c
	// bdzf 4*cr6+eq,0x8212d354
	// bdzf 4*cr6+eq,0x8212d3a8
	// bne cr6,0x8212d38c
	if (!ctx.cr6.eq) goto loc_8212D38C;
loc_8212D34C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8212d3a8
	if (ctx.cr6.lt) goto loc_8212D3A8;
loc_8212D354:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82132418
	ctx.lr = 0x8212D35C;
	sub_82132418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8212d380
	if (!ctx.cr6.eq) goto loc_8212D380;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8212d3a8
	if (ctx.cr6.eq) goto loc_8212D3A8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821322b8
	ctx.lr = 0x8212D380;
	sub_821322B8(ctx, base);
loc_8212D380:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8212D38C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-2032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// addi r10,r11,0
	ctx.r10.s64 = ctx.r11.s64 + 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8212D3A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8212D3B4"))) PPC_WEAK_FUNC(sub_8212D3B4);
PPC_FUNC_IMPL(__imp__sub_8212D3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D3B8"))) PPC_WEAK_FUNC(sub_8212D3B8);
PPC_FUNC_IMPL(__imp__sub_8212D3B8) {
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
	ctx.lr = 0x8212D3C8;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8212d454
	if (ctx.cr6.gt) goto loc_8212D454;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8212d40c
	// bdzf 4*cr6+eq,0x8212d424
	// bdzf 4*cr6+eq,0x8212d454
	// bdzf 4*cr6+eq,0x8212d454
	// bne cr6,0x8212d43c
	if (!ctx.cr6.eq) goto loc_8212D43C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8212d2b8
	ctx.lr = 0x8212D3FC;
	sub_8212D2B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8212D40C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8212d2b8
	ctx.lr = 0x8212D414;
	sub_8212D2B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8212D424:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8212d2b8
	ctx.lr = 0x8212D42C;
	sub_8212D2B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8212D43C:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8212d2b8
	ctx.lr = 0x8212D444;
	sub_8212D2B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8212D454:
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

__attribute__((alias("__imp__sub_8212D468"))) PPC_WEAK_FUNC(sub_8212D468);
PPC_FUNC_IMPL(__imp__sub_8212D468) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,30960
	ctx.r10.s64 = ctx.r11.s64 + 30960;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8212d000
	ctx.lr = 0x8212D48C;
	sub_8212D000(ctx, base);
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

__attribute__((alias("__imp__sub_8212D4A4"))) PPC_WEAK_FUNC(sub_8212D4A4);
PPC_FUNC_IMPL(__imp__sub_8212D4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D4A8"))) PPC_WEAK_FUNC(sub_8212D4A8);
PPC_FUNC_IMPL(__imp__sub_8212D4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8212D4B0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwzx r30,r31,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8212d4e8
	if (ctx.cr6.eq) goto loc_8212D4E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213bdf0
	ctx.lr = 0x8212D4DC;
	sub_8213BDF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8212D4E8;
	sub_82183E40(ctx, base);
loc_8212D4E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stwx r11,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// beq cr6,0x8212d690
	if (ctx.cr6.eq) goto loc_8212D690;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8212d584
	if (!ctx.cr6.eq) goto loc_8212D584;
	// bl 0x8215c080
	ctx.lr = 0x8212D504;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212D50C;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D518;
	sub_821837D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x8212D520;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212d56c
	if (ctx.cr6.eq) goto loc_8212D56C;
	// li r11,16368
	ctx.r11.s64 = 16368;
	// li r10,16382
	ctx.r10.s64 = 16382;
	// li r9,6144
	ctx.r9.s64 = 6144;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r8,8703
	ctx.r8.s64 = 8703;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// sth r9,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r9.u16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// sth r8,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8213bca0
	ctx.lr = 0x8212D558;
	sub_8213BCA0(ctx, base);
	// stw r3,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D564;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8212D56C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D57C;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8212D584:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8212d60c
	if (!ctx.cr6.eq) goto loc_8212D60C;
	// bl 0x8215c080
	ctx.lr = 0x8212D590;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212D598;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D5A4;
	sub_821837D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x8212D5AC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212d5f4
	if (ctx.cr6.eq) goto loc_8212D5F4;
	// li r11,16368
	ctx.r11.s64 = 16368;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// li r9,5151
	ctx.r9.s64 = 5151;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r9,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r9.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8213bca0
	ctx.lr = 0x8212D5E0;
	sub_8213BCA0(ctx, base);
	// stw r3,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D5EC;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8212D5F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D604;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8212D60C:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x8212d690
	if (!ctx.cr6.eq) goto loc_8212D690;
	// bl 0x8215c080
	ctx.lr = 0x8212D618;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212D620;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D62C;
	sub_821837D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x8212D634;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212d680
	if (ctx.cr6.eq) goto loc_8212D680;
	// li r11,16368
	ctx.r11.s64 = 16368;
	// li r10,16382
	ctx.r10.s64 = 16382;
	// li r9,16371
	ctx.r9.s64 = 16371;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r8,16374
	ctx.r8.s64 = 16374;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// sth r9,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// sth r8,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x8213bca0
	ctx.lr = 0x8212D66C;
	sub_8213BCA0(ctx, base);
	// stw r3,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D678;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8212D680:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D690;
	sub_821837D0(ctx, base);
loc_8212D690:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8212D698"))) PPC_WEAK_FUNC(sub_8212D698);
PPC_FUNC_IMPL(__imp__sub_8212D698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8212D6A0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8212d764
	if (ctx.cr6.eq) goto loc_8212D764;
	// bl 0x8215c080
	ctx.lr = 0x8212D6BC;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212D6C4;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D6D0;
	sub_821837D0(ctx, base);
	// addi r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 9;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212d700
	if (ctx.cr6.eq) goto loc_8212D700;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212D6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r31,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r31.u32);
loc_8212D700:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82080000
	ctx.lr = 0x8212D708;
	sub_82080000(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212d754
	if (ctx.cr6.eq) goto loc_8212D754;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// bl 0x8215c080
	ctx.lr = 0x8212D728;
	sub_8215C080(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213bec8
	ctx.lr = 0x8212D740;
	sub_8213BEC8(ctx, base);
	// stwx r3,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D74C;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8212D754:
	// stwx r31,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D764;
	sub_821837D0(ctx, base);
loc_8212D764:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8212D76C"))) PPC_WEAK_FUNC(sub_8212D76C);
PPC_FUNC_IMPL(__imp__sub_8212D76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D770"))) PPC_WEAK_FUNC(sub_8212D770);
PPC_FUNC_IMPL(__imp__sub_8212D770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8212D778;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212d7b8
	if (!ctx.cr6.eq) goto loc_8212D7B8;
	// bl 0x8215c080
	ctx.lr = 0x8212D794;
	sub_8215C080(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212D79C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D7A8;
	sub_821837D0(ctx, base);
	// bl 0x8212a290
	ctx.lr = 0x8212D7AC;
	sub_8212A290(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212D7B4;
	sub_821837D0(ctx, base);
	// lwz r11,-2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
loc_8212D7B8:
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8212D7D0"))) PPC_WEAK_FUNC(sub_8212D7D0);
PPC_FUNC_IMPL(__imp__sub_8212D7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8212D7D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r29,r11,-19296
	ctx.r29.s64 = ctx.r11.s64 + -19296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1508);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// lwz r30,-1512(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1512);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212d828
	if (!ctx.cr6.eq) goto loc_8212D828;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1508, ctx.r11.u32);
	// lfs f0,32608(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f13,12(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
loc_8212D828:
	// bl 0x8215bec8
	ctx.lr = 0x8212D82C;
	sub_8215BEC8(ctx, base);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212d84c
	if (ctx.cr6.eq) goto loc_8212D84C;
	// bl 0x8215bec8
	ctx.lr = 0x8212D83C;
	sub_8215BEC8(ctx, base);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8212d864
	if (ctx.cr6.eq) goto loc_8212D864;
loc_8212D84C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8212d85c
	if (!ctx.cr6.lt) goto loc_8212D85C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8212d868
	goto loc_8212D868;
loc_8212D85C:
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// ble cr6,0x8212d868
	if (!ctx.cr6.gt) goto loc_8212D868;
loc_8212D864:
	// li r31,10
	ctx.r31.s64 = 10;
loc_8212D868:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8212d8b0
	if (ctx.cr6.eq) goto loc_8212D8B0;
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212d8b0
	if (ctx.cr6.eq) goto loc_8212D8B0;
	// lwz r30,136(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8212d8b0
	if (ctx.cr6.eq) goto loc_8212D8B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,5
	ctx.r4.s64 = ctx.r31.s64 + 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821324d8
	ctx.lr = 0x8212D8AC;
	sub_821324D8(ctx, base);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
loc_8212D8B0:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-5403
	ctx.r3.s64 = ctx.r3.s64 + -5403;
	// bl 0x8208f658
	ctx.lr = 0x8212D8BC;
	sub_8208F658(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8212D8C4"))) PPC_WEAK_FUNC(sub_8212D8C4);
PPC_FUNC_IMPL(__imp__sub_8212D8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D8C8"))) PPC_WEAK_FUNC(sub_8212D8C8);
PPC_FUNC_IMPL(__imp__sub_8212D8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1512);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// lhz r8,14(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 14);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212d940
	if (ctx.cr6.eq) goto loc_8212D940;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lfs f0,30964(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30964);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fcmpu cr6,f13,f5
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8212D940:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212D948"))) PPC_WEAK_FUNC(sub_8212D948);
PPC_FUNC_IMPL(__imp__sub_8212D948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8212D950;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8212D95C;
	sub_8209EDA0(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212d98c
	if (ctx.cr6.eq) goto loc_8212D98C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212D984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,-2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2032, ctx.r28.u32);
loc_8212D98C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r30,5
	ctx.r30.s64 = 5;
loc_8212D994:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8212d9b4
	if (ctx.cr6.eq) goto loc_8212D9B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a7f0
	ctx.lr = 0x8212D9A8;
	sub_8218A7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8212D9B4;
	sub_82183E40(ctx, base);
loc_8212D9B4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8212d994
	if (!ctx.cr0.eq) goto loc_8212D994;
	// addi r31,r27,20
	ctx.r31.s64 = ctx.r27.s64 + 20;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8212D9C8:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8212d9e8
	if (ctx.cr6.eq) goto loc_8212D9E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a7f0
	ctx.lr = 0x8212D9DC;
	sub_8218A7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8212D9E8;
	sub_82183E40(ctx, base);
loc_8212D9E8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8212d9c8
	if (!ctx.cr0.eq) goto loc_8212D9C8;
	// addi r31,r27,32
	ctx.r31.s64 = ctx.r27.s64 + 32;
	// li r30,5
	ctx.r30.s64 = 5;
loc_8212D9FC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212da1c
	if (ctx.cr6.eq) goto loc_8212DA1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212DA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212DA1C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8212d9fc
	if (!ctx.cr0.eq) goto loc_8212D9FC;
	// addi r31,r27,52
	ctx.r31.s64 = ctx.r27.s64 + 52;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8212DA30:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8212da50
	if (ctx.cr6.eq) goto loc_8212DA50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213bdf0
	ctx.lr = 0x8212DA44;
	sub_8213BDF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8212DA50;
	sub_82183E40(ctx, base);
loc_8212DA50:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8212da30
	if (!ctx.cr0.eq) goto loc_8212DA30;
	// addi r31,r27,64
	ctx.r31.s64 = ctx.r27.s64 + 64;
	// li r30,23
	ctx.r30.s64 = 23;
loc_8212DA64:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212da84
	if (ctx.cr6.eq) goto loc_8212DA84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212DA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212DA84:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8212da64
	if (!ctx.cr0.eq) goto loc_8212DA64;
	// addi r31,r27,156
	ctx.r31.s64 = ctx.r27.s64 + 156;
	// li r30,23
	ctx.r30.s64 = 23;
loc_8212DA98:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212dab8
	if (ctx.cr6.eq) goto loc_8212DAB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212DAB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212DAB8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8212da98
	if (!ctx.cr0.eq) goto loc_8212DA98;
	// addi r31,r27,248
	ctx.r31.s64 = ctx.r27.s64 + 248;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8212DACC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212daec
	if (ctx.cr6.eq) goto loc_8212DAEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212DAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212DAEC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8212dacc
	if (!ctx.cr0.eq) goto loc_8212DACC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8212DB00"))) PPC_WEAK_FUNC(sub_8212DB00);
PPC_FUNC_IMPL(__imp__sub_8212DB00) {
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
	// addi r10,r11,30960
	ctx.r10.s64 = ctx.r11.s64 + 30960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82127508
	ctx.lr = 0x8212DB2C;
	sub_82127508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212d948
	ctx.lr = 0x8212DB34;
	sub_8212D948(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212db50
	if (ctx.cr6.eq) goto loc_8212DB50;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8212DB4C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8212DB50:
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

__attribute__((alias("__imp__sub_8212DB68"))) PPC_WEAK_FUNC(sub_8212DB68);
PPC_FUNC_IMPL(__imp__sub_8212DB68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,30968
	ctx.r9.s64 = ctx.r10.s64 + 30968;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212DB88"))) PPC_WEAK_FUNC(sub_8212DB88);
PPC_FUNC_IMPL(__imp__sub_8212DB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1500(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1500);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212DB94"))) PPC_WEAK_FUNC(sub_8212DB94);
PPC_FUNC_IMPL(__imp__sub_8212DB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212DB98"))) PPC_WEAK_FUNC(sub_8212DB98);
PPC_FUNC_IMPL(__imp__sub_8212DB98) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,30968
	ctx.r10.s64 = ctx.r11.s64 + 30968;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8212dbd4
	if (ctx.cr6.eq) goto loc_8212DBD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8212DBD4;
	sub_82183E40(ctx, base);
loc_8212DBD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212dbf8
	if (ctx.cr6.eq) goto loc_8212DBF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8212DBF4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8212DBF8:
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

__attribute__((alias("__imp__sub_8212DC10"))) PPC_WEAK_FUNC(sub_8212DC10);
PPC_FUNC_IMPL(__imp__sub_8212DC10) {
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
	// bl 0x82182e90
	ctx.lr = 0x8212DC28;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8212DC30;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212DC3C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8212DC40;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8212dc58
	if (ctx.cr6.eq) goto loc_8212DC58;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82183448
	ctx.lr = 0x8212DC54;
	sub_82183448(ctx, base);
	// b 0x8212dc60
	goto loc_8212DC60;
loc_8212DC58:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x8212DC60;
	sub_821845A0(ctx, base);
loc_8212DC60:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212dc88
	if (ctx.cr6.eq) goto loc_8212DC88;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r9,30972
	ctx.r4.s64 = ctx.r9.s64 + 30972;
	// lwz r11,26852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26852);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,-1500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1500, ctx.r11.u32);
	// bl 0x8213c060
	ctx.lr = 0x8212DC88;
	sub_8213C060(ctx, base);
loc_8212DC88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8212DC90;
	sub_821837D0(ctx, base);
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

