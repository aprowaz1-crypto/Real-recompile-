#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8213A7B8"))) PPC_WEAK_FUNC(sub_8213A7B8);
PPC_FUNC_IMPL(__imp__sub_8213A7B8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-32000
	ctx.r10.s64 = ctx.r11.s64 + -32000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821b1dc0
	ctx.lr = 0x8213A7E4;
	sub_821B1DC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8213a800
	if (ctx.cr6.eq) goto loc_8213A800;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213A7FC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213A800:
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

__attribute__((alias("__imp__sub_8213A818"))) PPC_WEAK_FUNC(sub_8213A818);
PPC_FUNC_IMPL(__imp__sub_8213A818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,208(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,212(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r11,-16128
	ctx.r9.s64 = ctx.r11.s64 + -16128;
	// lfs f10,216(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-16128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213A860"))) PPC_WEAK_FUNC(sub_8213A860);
PPC_FUNC_IMPL(__imp__sub_8213A860) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213a968
	if (ctx.cr6.eq) goto loc_8213A968;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213a8a0
	if (ctx.cr6.eq) goto loc_8213A8A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213A8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213A8A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d1ce8
	ctx.lr = 0x8213A8AC;
	sub_821D1CE8(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213a938
	if (ctx.cr6.eq) goto loc_8213A938;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,356(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// lfs f1,372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f1,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// lfs f13,384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fadds f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f3,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f3.f64 = double(temp.f32);
	// fadds f1,f6,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fadds f13,f3,f7
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_8213A938:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213A954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b35e8
	ctx.lr = 0x8213A968;
	sub_821B35E8(ctx, base);
loc_8213A968:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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
}

__attribute__((alias("__imp__sub_8213A980"))) PPC_WEAK_FUNC(sub_8213A980);
PPC_FUNC_IMPL(__imp__sub_8213A980) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8213A9BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r4,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r4.u64);
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// fmuls f12,f11,f9
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r7,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r7.u64);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r8,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r8.u64);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// fadds f9,f2,f13
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f8,f1,f12
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r10,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r10.u64);
	// std r9,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r9.u64);
	// bl 0x8209eda0
	ctx.lr = 0x8213AA9C;
	sub_8209EDA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d16c8
	ctx.lr = 0x8213AAA8;
	sub_821D16C8(ctx, base);
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

__attribute__((alias("__imp__sub_8213AAC0"))) PPC_WEAK_FUNC(sub_8213AAC0);
PPC_FUNC_IMPL(__imp__sub_8213AAC0) {
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
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8213a980
	ctx.lr = 0x8213AAEC;
	sub_8213A980(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213AAFC"))) PPC_WEAK_FUNC(sub_8213AAFC);
PPC_FUNC_IMPL(__imp__sub_8213AAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213AB00"))) PPC_WEAK_FUNC(sub_8213AB00);
PPC_FUNC_IMPL(__imp__sub_8213AB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213AB08;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8213AB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f10,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,8328(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// li r11,164
	ctx.r11.s64 = 164;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f2,f6,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// ld r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// std r8,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r5,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r5.u64);
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r10,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r10.u64);
	// ld r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r6,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r6.u64);
	// std r7,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r7.u64);
	// lfs f5,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f4.u32);
	// bl 0x8209eda0
	ctx.lr = 0x8213AC3C;
	sub_8209EDA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d16c8
	ctx.lr = 0x8213AC48;
	sub_821D16C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213AC50"))) PPC_WEAK_FUNC(sub_8213AC50);
PPC_FUNC_IMPL(__imp__sub_8213AC50) {
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
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8213ab00
	ctx.lr = 0x8213AC7C;
	sub_8213AB00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213AC8C"))) PPC_WEAK_FUNC(sub_8213AC8C);
PPC_FUNC_IMPL(__imp__sub_8213AC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213AC90"))) PPC_WEAK_FUNC(sub_8213AC90);
PPC_FUNC_IMPL(__imp__sub_8213AC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213AC98;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213ACBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// li r6,164
	ctx.r6.s64 = 164;
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f8,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f9,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f11,f8,f6
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// lfs f0,8328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f5,16(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// fmuls f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// std r5,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r5.u64);
	// ld r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// fmuls f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// std r4,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r4.u64);
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fadds f11,f1,f3
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fadds f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f10,f0,f2
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r8,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r8.u64);
	// std r9,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r9.u64);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,228(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,244(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f6.u32);
	// bl 0x8209eda0
	ctx.lr = 0x8213AD94;
	sub_8209EDA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d16c8
	ctx.lr = 0x8213ADA0;
	sub_821D16C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213ADA8"))) PPC_WEAK_FUNC(sub_8213ADA8);
PPC_FUNC_IMPL(__imp__sub_8213ADA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213ADD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bne cr6,0x8213ae84
	if (!ctx.cr6.eq) goto loc_8213AE84;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// std r11,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r11.u64);
	// lfs f11,8328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8328);
	ctx.f11.f64 = double(temp.f32);
	// std r9,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r9.u64);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fadds f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r4,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r4.u64);
	// std r3,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r3.u64);
	// b 0x8213af50
	goto loc_8213AF50;
loc_8213AE84:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8213aeb8
	if (!ctx.cr6.eq) goto loc_8213AEB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,228(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// stfs f11,240(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f12,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f9,f0,f12,f11
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f11.f64)));
	// stfs f9,224(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// fmadds f8,f13,f12,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f8,244(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// b 0x8213af50
	goto loc_8213AF50;
loc_8213AEB8:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lfs f6,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f2,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fadds f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f6,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r3,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r3.u64);
	// std r11,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r11.u64);
	// std r9,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r9.u64);
	// std r10,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r10.u64);
loc_8213AF50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8213AF58;
	sub_8209EDA0(ctx, base);
	// li r11,164
	ctx.r11.s64 = 164;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f13.u32);
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

__attribute__((alias("__imp__sub_8213AF7C"))) PPC_WEAK_FUNC(sub_8213AF7C);
PPC_FUNC_IMPL(__imp__sub_8213AF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213AF80"))) PPC_WEAK_FUNC(sub_8213AF80);
PPC_FUNC_IMPL(__imp__sub_8213AF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8213AF88;
	sub_82248784(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8213b00c
	if (ctx.cr6.eq) goto loc_8213B00C;
	// ld r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// ld r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// std r3,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// ld r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// ld r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 120);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// ld r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 128);
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// ld r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 136);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// ld r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 144);
	// std r9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// ld r8,152(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 152);
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// bl 0x82289c50
	ctx.lr = 0x8213B008;
	sub_82289C50(ctx, base);
	// b 0x8213b060
	goto loc_8213B060;
loc_8213B00C:
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// ld r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// ld r8,104(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 104);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 112);
	// ld r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 120);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ld r29,128(r30)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r30.u32 + 128);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r28,136(r30)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r30.u32 + 136);
	// ld r27,144(r30)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r30.u32 + 144);
	// ld r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 152);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// std r29,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r29.u64);
	// std r28,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r28.u64);
	// std r27,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r27.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
loc_8213B060:
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82187bd0
	ctx.lr = 0x8213B06C;
	sub_82187BD0(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// bl 0x82289c50
	ctx.lr = 0x8213B094;
	sub_82289C50(ctx, base);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r29,4
	ctx.r29.s64 = 4;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
loc_8213B0B4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82187400
	ctx.lr = 0x8213B0C4;
	sub_82187400(ctx, base);
	// lwz r11,-1736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1736);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8213b0fc
	if (!ctx.cr6.eq) goto loc_8213B0FC;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,-1736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1736);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,-1736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1736);
loc_8213B0FC:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8213b12c
	if (!ctx.cr6.eq) goto loc_8213B12C;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,-1736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1736);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_8213B12C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x8213b0b4
	if (!ctx.cr0.eq) goto loc_8213B0B4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8213B140"))) PPC_WEAK_FUNC(sub_8213B140);
PPC_FUNC_IMPL(__imp__sub_8213B140) {
	PPC_FUNC_PROLOGUE();
	// stw r5,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r5.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213B14C"))) PPC_WEAK_FUNC(sub_8213B14C);
PPC_FUNC_IMPL(__imp__sub_8213B14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213B150"))) PPC_WEAK_FUNC(sub_8213B150);
PPC_FUNC_IMPL(__imp__sub_8213B150) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,144(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213B174"))) PPC_WEAK_FUNC(sub_8213B174);
PPC_FUNC_IMPL(__imp__sub_8213B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213B178"))) PPC_WEAK_FUNC(sub_8213B178);
PPC_FUNC_IMPL(__imp__sub_8213B178) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,144(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
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

__attribute__((alias("__imp__sub_8213B198"))) PPC_WEAK_FUNC(sub_8213B198);
PPC_FUNC_IMPL(__imp__sub_8213B198) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-31852
	ctx.r9.s64 = ctx.r11.s64 + -31852;
	// addi r8,r10,-31864
	ctx.r8.s64 = ctx.r10.s64 + -31864;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// bl 0x82134bb0
	ctx.lr = 0x8213B1D0;
	sub_82134BB0(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// addi r6,r7,-31884
	ctx.r6.s64 = ctx.r7.s64 + -31884;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x821d44a8
	ctx.lr = 0x8213B1E4;
	sub_821D44A8(ctx, base);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d4d30
	ctx.lr = 0x8213B1F0;
	sub_821D4D30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d90b0
	ctx.lr = 0x8213B1F8;
	sub_821D90B0(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x821138d0
	ctx.lr = 0x8213B200;
	sub_821138D0(ctx, base);
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

__attribute__((alias("__imp__sub_8213B218"))) PPC_WEAK_FUNC(sub_8213B218);
PPC_FUNC_IMPL(__imp__sub_8213B218) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-176
	ctx.r3.s64 = ctx.r3.s64 + -176;
	// b 0x8213b798
	sub_8213B798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213B220"))) PPC_WEAK_FUNC(sub_8213B220);
PPC_FUNC_IMPL(__imp__sub_8213B220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213B228;
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213b284
	if (ctx.cr6.eq) goto loc_8213B284;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8213b284
	if (ctx.cr6.eq) goto loc_8213B284;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213b25c
	if (ctx.cr6.eq) goto loc_8213B25C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8213B25C;
	sub_82183E40(ctx, base);
loc_8213B25C:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82080d68
	ctx.lr = 0x8213B26C;
	sub_82080D68(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8213B284:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213B290"))) PPC_WEAK_FUNC(sub_8213B290);
PPC_FUNC_IMPL(__imp__sub_8213B290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8213B298;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8218a810
	ctx.lr = 0x8213B2B4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8213b37c
	if (ctx.cr6.eq) goto loc_8213B37C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ab00
	ctx.lr = 0x8213B2C8;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213b37c
	if (ctx.cr6.eq) goto loc_8213B37C;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x8213B2E0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8213b2fc
	if (ctx.cr6.eq) goto loc_8213B2FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x8213B2F4;
	sub_8218AC78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8213b300
	goto loc_8213B300;
loc_8213B2FC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8213B300:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8213b338
	if (!ctx.cr6.gt) goto loc_8213B338;
	// bl 0x8215c080
	ctx.lr = 0x8213B310;
	sub_8215C080(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8213B318;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213B324;
	sub_821837D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213b220
	ctx.lr = 0x8213B330;
	sub_8213B220(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213B338;
	sub_821837D0(ctx, base);
loc_8213B338:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x8213B34C;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8213b368
	if (ctx.cr6.eq) goto loc_8213B368;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ad90
	ctx.lr = 0x8213B368;
	sub_8218AD90(ctx, base);
loc_8213B368:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d9068
	ctx.lr = 0x8213B370;
	sub_821D9068(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8213B37C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8213B388"))) PPC_WEAK_FUNC(sub_8213B388);
PPC_FUNC_IMPL(__imp__sub_8213B388) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-31884
	ctx.r10.s64 = ctx.r11.s64 + -31884;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x821138b8
	ctx.lr = 0x8213B3BC;
	sub_821138B8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821d4c78
	ctx.lr = 0x8213B3CC;
	sub_821D4C78(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x821d29d8
	ctx.lr = 0x8213B3D8;
	sub_821D29D8(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r7,r9,-7560
	ctx.r7.s64 = ctx.r9.s64 + -7560;
	// sth r8,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r8.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,60(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
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

__attribute__((alias("__imp__sub_8213B410"))) PPC_WEAK_FUNC(sub_8213B410);
PPC_FUNC_IMPL(__imp__sub_8213B410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213B418;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// addi r10,r11,-31884
	ctx.r10.s64 = ctx.r11.s64 + -31884;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821d44a8
	ctx.lr = 0x8213B438;
	sub_821D44A8(ctx, base);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d4d30
	ctx.lr = 0x8213B444;
	sub_821D4D30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d90b0
	ctx.lr = 0x8213B44C;
	sub_821D90B0(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x821138d0
	ctx.lr = 0x8213B454;
	sub_821138D0(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8213b470
	if (ctx.cr6.eq) goto loc_8213B470;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213B46C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213B470:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213B478"))) PPC_WEAK_FUNC(sub_8213B478);
PPC_FUNC_IMPL(__imp__sub_8213B478) {
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
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213b4a8
	if (ctx.cr6.eq) goto loc_8213B4A8;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9130
	ctx.lr = 0x8213B4A0;
	sub_821D9130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2ee0
	ctx.lr = 0x8213B4A8;
	sub_821D2EE0(ctx, base);
loc_8213B4A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213B4BC"))) PPC_WEAK_FUNC(sub_8213B4BC);
PPC_FUNC_IMPL(__imp__sub_8213B4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213B4C0"))) PPC_WEAK_FUNC(sub_8213B4C0);
PPC_FUNC_IMPL(__imp__sub_8213B4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8213B4C8;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8218a810
	ctx.lr = 0x8213B4E0;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8213b4f4
	if (!ctx.cr6.eq) goto loc_8213B4F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8213B4F4:
	// sth r31,164(r29)
	PPC_STORE_U16(ctx.r29.u32 + 164, ctx.r31.u16);
	// addi r28,r29,148
	ctx.r28.s64 = ctx.r29.s64 + 148;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213b290
	ctx.lr = 0x8213B50C;
	sub_8213B290(ctx, base);
	// addi r26,r29,32
	ctx.r26.s64 = ctx.r29.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821d90b8
	ctx.lr = 0x8213B51C;
	sub_821D90B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d29f8
	ctx.lr = 0x8213B524;
	sub_821D29F8(ctx, base);
	// addi r25,r29,20
	ctx.r25.s64 = ctx.r29.s64 + 20;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82113920
	ctx.lr = 0x8213B538;
	sub_82113920(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821d3768
	ctx.lr = 0x8213B544;
	sub_821D3768(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8213b708
	if (ctx.cr6.eq) goto loc_8213B708;
	// lis r9,16711
	ctx.r9.s64 = 1095172096;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r22,r9,12868
	ctx.r22.u64 = ctx.r9.u64 | 12868;
	// addi r24,r11,27180
	ctx.r24.s64 = ctx.r11.s64 + 27180;
	// addi r23,r10,27168
	ctx.r23.s64 = ctx.r10.s64 + 27168;
loc_8213B568:
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213b580
	if (ctx.cr6.eq) goto loc_8213B580;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213b6fc
	if (!ctx.cr6.eq) goto loc_8213B6FC;
loc_8213B580:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d2a40
	ctx.lr = 0x8213B58C;
	sub_821D2A40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d2ac0
	ctx.lr = 0x8213B59C;
	sub_821D2AC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213b644
	if (ctx.cr6.eq) goto loc_8213B644;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8213B5B0:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq cr6,0x8213b5d4
	if (ctx.cr6.eq) goto loc_8213B5D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8213b5b0
	if (ctx.cr6.eq) goto loc_8213B5B0;
loc_8213B5D4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8213b5f8
	if (!ctx.cr6.eq) goto loc_8213B5F8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213B5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8213b6d8
	goto loc_8213B6D8;
loc_8213B5F8:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_8213B5FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8213b620
	if (ctx.cr6.eq) goto loc_8213B620;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8213b5fc
	if (ctx.cr6.eq) goto loc_8213B5FC;
loc_8213B620:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8213b644
	if (!ctx.cr6.eq) goto loc_8213B644;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213B640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8213b6d8
	goto loc_8213B6D8;
loc_8213B644:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8213b690
	if (!ctx.cr6.lt) goto loc_8213B690;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d4510
	ctx.lr = 0x8213B658;
	sub_821D4510(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213b678
	if (ctx.cr6.eq) goto loc_8213B678;
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x82080000
	ctx.lr = 0x8213B668;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213b6ac
	if (ctx.cr6.eq) goto loc_8213B6AC;
	// bl 0x821b2270
	ctx.lr = 0x8213B674;
	sub_821B2270(ctx, base);
	// b 0x8213b6d8
	goto loc_8213B6D8;
loc_8213B678:
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82080000
	ctx.lr = 0x8213B680;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213b6ac
	if (ctx.cr6.eq) goto loc_8213B6AC;
	// bl 0x821b2118
	ctx.lr = 0x8213B68C;
	sub_821B2118(ctx, base);
	// b 0x8213b6d8
	goto loc_8213B6D8;
loc_8213B690:
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x8213b6b4
	if (!ctx.cr6.eq) goto loc_8213B6B4;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213b6b4
	if (ctx.cr6.lt) goto loc_8213B6B4;
loc_8213B6AC:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8213b6dc
	goto loc_8213B6DC;
loc_8213B6B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,144(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ldx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8213B6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213B6D8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8213B6DC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82113870
	ctx.lr = 0x8213B6EC;
	sub_82113870(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821d2ce8
	ctx.lr = 0x8213B6FC;
	sub_821D2CE8(ctx, base);
loc_8213B6FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8213b568
	if (ctx.cr6.lt) goto loc_8213B568;
loc_8213B708:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8213B714"))) PPC_WEAK_FUNC(sub_8213B714);
PPC_FUNC_IMPL(__imp__sub_8213B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213B718"))) PPC_WEAK_FUNC(sub_8213B718);
PPC_FUNC_IMPL(__imp__sub_8213B718) {
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
	// bl 0x8213b388
	ctx.lr = 0x8213B730;
	sub_8213B388(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82134b40
	ctx.lr = 0x8213B738;
	sub_82134B40(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r7,r11,-7560
	ctx.r7.s64 = ctx.r11.s64 + -7560;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,-31852
	ctx.r6.s64 = ctx.r10.s64 + -31852;
	// addi r5,r9,-31864
	ctx.r5.s64 = ctx.r9.s64 + -31864;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r5.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lfs f0,-17116(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213B794"))) PPC_WEAK_FUNC(sub_8213B794);
PPC_FUNC_IMPL(__imp__sub_8213B794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213B798"))) PPC_WEAK_FUNC(sub_8213B798);
PPC_FUNC_IMPL(__imp__sub_8213B798) {
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
	// bl 0x8213b198
	ctx.lr = 0x8213B7B8;
	sub_8213B198(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213b7d4
	if (ctx.cr6.eq) goto loc_8213B7D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213B7D0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213B7D4:
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

__attribute__((alias("__imp__sub_8213B7EC"))) PPC_WEAK_FUNC(sub_8213B7EC);
PPC_FUNC_IMPL(__imp__sub_8213B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213B7F0"))) PPC_WEAK_FUNC(sub_8213B7F0);
PPC_FUNC_IMPL(__imp__sub_8213B7F0) {
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
	// lwz r10,-24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24);
	// addi r11,r3,-176
	ctx.r11.s64 = ctx.r3.s64 + -176;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213b824
	if (ctx.cr6.eq) goto loc_8213B824;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9130
	ctx.lr = 0x8213B81C;
	sub_821D9130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d2ee0
	ctx.lr = 0x8213B824;
	sub_821D2EE0(ctx, base);
loc_8213B824:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213B838"))) PPC_WEAK_FUNC(sub_8213B838);
PPC_FUNC_IMPL(__imp__sub_8213B838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213B840;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213b8a8
	if (ctx.cr6.eq) goto loc_8213B8A8;
	// bl 0x8209eda0
	ctx.lr = 0x8213B858;
	sub_8209EDA0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ade28
	ctx.lr = 0x8213B86C;
	sub_821ADE28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x8213B880;
	sub_821AD6A0(ctx, base);
	// lwz r10,-24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// addi r11,r30,-176
	ctx.r11.s64 = ctx.r30.s64 + -176;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213b898
	if (ctx.cr6.eq) goto loc_8213B898;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x821d2c68
	ctx.lr = 0x8213B898;
	sub_821D2C68(ctx, base);
loc_8213B898:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x8213B8A8;
	sub_821AD6A0(ctx, base);
loc_8213B8A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213B8B0"))) PPC_WEAK_FUNC(sub_8213B8B0);
PPC_FUNC_IMPL(__imp__sub_8213B8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,208
	ctx.r11.s64 = ctx.r3.s64 + 208;
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,212(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,216(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// ld r9,208(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 208);
	// ld r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 216);
	// std r10,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r10.u64);
	// std r9,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213B8E0"))) PPC_WEAK_FUNC(sub_8213B8E0);
PPC_FUNC_IMPL(__imp__sub_8213B8E0) {
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
	ctx.lr = 0x8213B8F0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213b908
	if (ctx.cr6.eq) goto loc_8213B908;
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x82183448
	ctx.lr = 0x8213B904;
	sub_82183448(ctx, base);
	// b 0x8213b910
	goto loc_8213B910;
loc_8213B908:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x821845a0
	ctx.lr = 0x8213B910;
	sub_821845A0(ctx, base);
loc_8213B910:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213b92c
	if (ctx.cr6.eq) goto loc_8213B92C;
	// bl 0x8213dd80
	ctx.lr = 0x8213B91C;
	sub_8213DD80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8213B92C:
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

__attribute__((alias("__imp__sub_8213B940"))) PPC_WEAK_FUNC(sub_8213B940);
PPC_FUNC_IMPL(__imp__sub_8213B940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213B948;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183850
	ctx.lr = 0x8213B954;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213b96c
	if (ctx.cr6.eq) goto loc_8213B96C;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82183448
	ctx.lr = 0x8213B968;
	sub_82183448(ctx, base);
	// b 0x8213b974
	goto loc_8213B974;
loc_8213B96C:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821845a0
	ctx.lr = 0x8213B974;
	sub_821845A0(ctx, base);
loc_8213B974:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213b98c
	if (ctx.cr6.eq) goto loc_8213B98C;
	// bl 0x8213de90
	ctx.lr = 0x8213B984;
	sub_8213DE90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8213b990
	goto loc_8213B990;
loc_8213B98C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8213B990:
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213b9ec
	if (ctx.cr6.eq) goto loc_8213B9EC;
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213b9ec
	if (ctx.cr6.eq) goto loc_8213B9EC;
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// ld r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// bl 0x821d9300
	ctx.lr = 0x8213B9BC;
	sub_821D9300(ctx, base);
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r10,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r10.u32);
	// stw r8,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r8.u32);
	// bl 0x821d9c10
	ctx.lr = 0x8213B9E8;
	sub_821D9C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213B9EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213B9F4"))) PPC_WEAK_FUNC(sub_8213B9F4);
PPC_FUNC_IMPL(__imp__sub_8213B9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213B9F8"))) PPC_WEAK_FUNC(sub_8213B9F8);
PPC_FUNC_IMPL(__imp__sub_8213B9F8) {
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
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// bl 0x82092930
	ctx.lr = 0x8213BA10;
	sub_82092930(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ba44
	if (ctx.cr6.eq) goto loc_8213BA44;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82080000
	ctx.lr = 0x8213BA24;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213ba44
	if (ctx.cr6.eq) goto loc_8213BA44;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x821b2a50
	ctx.lr = 0x8213BA34;
	sub_821B2A50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8213BA44:
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

__attribute__((alias("__imp__sub_8213BA58"))) PPC_WEAK_FUNC(sub_8213BA58);
PPC_FUNC_IMPL(__imp__sub_8213BA58) {
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
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82092930
	ctx.lr = 0x8213BA7C;
	sub_82092930(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213ba90
	if (!ctx.cr6.eq) goto loc_8213BA90;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213bad0
	goto loc_8213BAD0;
loc_8213BA90:
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82080000
	ctx.lr = 0x8213BA98;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213baac
	if (ctx.cr6.eq) goto loc_8213BAAC;
	// bl 0x8213df38
	ctx.lr = 0x8213BAA4;
	sub_8213DF38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8213bab0
	goto loc_8213BAB0;
loc_8213BAAC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8213BAB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x821d25f8
	ctx.lr = 0x8213BABC;
	sub_821D25F8(ctx, base);
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213bacc
	if (ctx.cr6.eq) goto loc_8213BACC;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
loc_8213BACC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213BAD0:
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

__attribute__((alias("__imp__sub_8213BAE8"))) PPC_WEAK_FUNC(sub_8213BAE8);
PPC_FUNC_IMPL(__imp__sub_8213BAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-31816
	ctx.r10.s64 = ctx.r11.s64 + -31816;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821dbcc8
	sub_821DBCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213BAF8"))) PPC_WEAK_FUNC(sub_8213BAF8);
PPC_FUNC_IMPL(__imp__sub_8213BAF8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213BB0C"))) PPC_WEAK_FUNC(sub_8213BB0C);
PPC_FUNC_IMPL(__imp__sub_8213BB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213BB10"))) PPC_WEAK_FUNC(sub_8213BB10);
PPC_FUNC_IMPL(__imp__sub_8213BB10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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

__attribute__((alias("__imp__sub_8213BB2C"))) PPC_WEAK_FUNC(sub_8213BB2C);
PPC_FUNC_IMPL(__imp__sub_8213BB2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213BB30"))) PPC_WEAK_FUNC(sub_8213BB30);
PPC_FUNC_IMPL(__imp__sub_8213BB30) {
	PPC_FUNC_PROLOGUE();
	// b 0x821da270
	sub_821DA270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213BB34"))) PPC_WEAK_FUNC(sub_8213BB34);
PPC_FUNC_IMPL(__imp__sub_8213BB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213BB38"))) PPC_WEAK_FUNC(sub_8213BB38);
PPC_FUNC_IMPL(__imp__sub_8213BB38) {
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
	// bl 0x821da9a8
	ctx.lr = 0x8213BB48;
	sub_821DA9A8(ctx, base);
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

__attribute__((alias("__imp__sub_8213BB5C"))) PPC_WEAK_FUNC(sub_8213BB5C);
PPC_FUNC_IMPL(__imp__sub_8213BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213BB60"))) PPC_WEAK_FUNC(sub_8213BB60);
PPC_FUNC_IMPL(__imp__sub_8213BB60) {
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
	// bl 0x821d9328
	ctx.lr = 0x8213BB70;
	sub_821D9328(ctx, base);
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

__attribute__((alias("__imp__sub_8213BB84"))) PPC_WEAK_FUNC(sub_8213BB84);
PPC_FUNC_IMPL(__imp__sub_8213BB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213BB88"))) PPC_WEAK_FUNC(sub_8213BB88);
PPC_FUNC_IMPL(__imp__sub_8213BB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f3,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213BBA4"))) PPC_WEAK_FUNC(sub_8213BBA4);
PPC_FUNC_IMPL(__imp__sub_8213BBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213BBA8"))) PPC_WEAK_FUNC(sub_8213BBA8);
PPC_FUNC_IMPL(__imp__sub_8213BBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,412(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// stfs f2,416(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// stfs f1,32(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f2,36(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f3,40(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213BBC0"))) PPC_WEAK_FUNC(sub_8213BBC0);
PPC_FUNC_IMPL(__imp__sub_8213BBC0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821dbc88
	ctx.lr = 0x8213BBDC;
	sub_821DBC88(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r9,r10,-31816
	ctx.r9.s64 = ctx.r10.s64 + -31816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213BC14"))) PPC_WEAK_FUNC(sub_8213BC14);
PPC_FUNC_IMPL(__imp__sub_8213BC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213BC18"))) PPC_WEAK_FUNC(sub_8213BC18);
PPC_FUNC_IMPL(__imp__sub_8213BC18) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31816
	ctx.r10.s64 = ctx.r11.s64 + -31816;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821dbcc8
	ctx.lr = 0x8213BC44;
	sub_821DBCC8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8213bc60
	if (ctx.cr6.eq) goto loc_8213BC60;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213BC5C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213BC60:
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

__attribute__((alias("__imp__sub_8213BC78"))) PPC_WEAK_FUNC(sub_8213BC78);
PPC_FUNC_IMPL(__imp__sub_8213BC78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8213bc84
	if (!ctx.cr6.eq) goto loc_8213BC84;
	// blr 
	return;
loc_8213BC84:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213BCA0"))) PPC_WEAK_FUNC(sub_8213BCA0);
PPC_FUNC_IMPL(__imp__sub_8213BCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8213BCA8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8213BCC4:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x8213BCD4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8213bd9c
	if (ctx.cr6.eq) goto loc_8213BD9C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ab00
	ctx.lr = 0x8213BCE8;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213bd9c
	if (ctx.cr6.eq) goto loc_8213BD9C;
	// bl 0x82183850
	ctx.lr = 0x8213BCF4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213bd0c
	if (ctx.cr6.eq) goto loc_8213BD0C;
	// li r3,1072
	ctx.r3.s64 = 1072;
	// bl 0x82183448
	ctx.lr = 0x8213BD08;
	sub_82183448(ctx, base);
	// b 0x8213bd14
	goto loc_8213BD14;
loc_8213BD0C:
	// li r3,67
	ctx.r3.s64 = 67;
	// bl 0x821845a0
	ctx.lr = 0x8213BD14;
	sub_821845A0(ctx, base);
loc_8213BD14:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213bd70
	if (ctx.cr6.eq) goto loc_8213BD70;
	// bl 0x82183850
	ctx.lr = 0x8213BD24;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213bd3c
	if (ctx.cr6.eq) goto loc_8213BD3C;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82183448
	ctx.lr = 0x8213BD38;
	sub_82183448(ctx, base);
	// b 0x8213bd44
	goto loc_8213BD44;
loc_8213BD3C:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821845a0
	ctx.lr = 0x8213BD44;
	sub_821845A0(ctx, base);
loc_8213BD44:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213bd60
	if (ctx.cr6.eq) goto loc_8213BD60;
	// bl 0x8213bbc0
	ctx.lr = 0x8213BD50;
	sub_8213BBC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82112688
	ctx.lr = 0x8213BD5C;
	sub_82112688(ctx, base);
	// b 0x8213bd74
	goto loc_8213BD74;
loc_8213BD60:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82112688
	ctx.lr = 0x8213BD6C;
	sub_82112688(ctx, base);
	// b 0x8213bd74
	goto loc_8213BD74;
loc_8213BD70:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8213BD74:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x8215c080
	ctx.lr = 0x8213BD80;
	sub_8215C080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82112358
	ctx.lr = 0x8213BD8C;
	sub_82112358(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82112a38
	ctx.lr = 0x8213BD9C;
	sub_82112A38(ctx, base);
loc_8213BD9C:
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 30, ctx.xer);
	// blt cr6,0x8213bcc4
	if (ctx.cr6.lt) goto loc_8213BCC4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8213bde4
	if (ctx.cr6.eq) goto loc_8213BDE4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213bde4
	if (ctx.cr6.eq) goto loc_8213BDE4;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213bde8
	if (ctx.cr6.eq) goto loc_8213BDE8;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8213BDE4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8213BDE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8213BDF0"))) PPC_WEAK_FUNC(sub_8213BDF0);
PPC_FUNC_IMPL(__imp__sub_8213BDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8213BDF8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-4
	ctx.r31.s64 = ctx.r3.s64 + -4;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8213BE08:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8213be28
	if (ctx.cr6.eq) goto loc_8213BE28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821129f8
	ctx.lr = 0x8213BE1C;
	sub_821129F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8213BE28;
	sub_82183E40(ctx, base);
loc_8213BE28:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8213be08
	if (!ctx.cr0.eq) goto loc_8213BE08;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8213BE3C"))) PPC_WEAK_FUNC(sub_8213BE3C);
PPC_FUNC_IMPL(__imp__sub_8213BE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213BE40"))) PPC_WEAK_FUNC(sub_8213BE40);
PPC_FUNC_IMPL(__imp__sub_8213BE40) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-31596
	ctx.r10.s64 = ctx.r11.s64 + -31596;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8213be9c
	if (ctx.cr6.eq) goto loc_8213BE9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213BE80;
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
loc_8213BE9C:
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

__attribute__((alias("__imp__sub_8213BEB8"))) PPC_WEAK_FUNC(sub_8213BEB8);
PPC_FUNC_IMPL(__imp__sub_8213BEB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,90
	ctx.r4.s64 = 90;
	// b 0x82113988
	sub_82113988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213BEC4"))) PPC_WEAK_FUNC(sub_8213BEC4);
PPC_FUNC_IMPL(__imp__sub_8213BEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213BEC8"))) PPC_WEAK_FUNC(sub_8213BEC8);
PPC_FUNC_IMPL(__imp__sub_8213BEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8213BED0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-31596
	ctx.r10.s64 = ctx.r11.s64 + -31596;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// li r3,76
	ctx.r3.s64 = 76;
	// bne cr6,0x8213bf28
	if (!ctx.cr6.eq) goto loc_8213BF28;
	// bl 0x82080000
	ctx.lr = 0x8213BF00;
	sub_82080000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213bf48
	if (ctx.cr6.eq) goto loc_8213BF48;
	// bl 0x82182e90
	ctx.lr = 0x8213BF10;
	sub_82182E90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82113b78
	ctx.lr = 0x8213BF24;
	sub_82113B78(ctx, base);
	// b 0x8213bf4c
	goto loc_8213BF4C;
loc_8213BF28:
	// bl 0x82080000
	ctx.lr = 0x8213BF2C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213bf48
	if (ctx.cr6.eq) goto loc_8213BF48;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82113b78
	ctx.lr = 0x8213BF44;
	sub_82113B78(ctx, base);
	// b 0x8213bf4c
	goto loc_8213BF4C;
loc_8213BF48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213BF4C:
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213bf64
	if (ctx.cr6.eq) goto loc_8213BF64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82113f00
	ctx.lr = 0x8213BF64;
	sub_82113F00(ctx, base);
loc_8213BF64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8213BF70"))) PPC_WEAK_FUNC(sub_8213BF70);
PPC_FUNC_IMPL(__imp__sub_8213BF70) {
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
	// bl 0x8213be40
	ctx.lr = 0x8213BF90;
	sub_8213BE40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213bfac
	if (ctx.cr6.eq) goto loc_8213BFAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213BFA8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213BFAC:
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

__attribute__((alias("__imp__sub_8213BFC4"))) PPC_WEAK_FUNC(sub_8213BFC4);
PPC_FUNC_IMPL(__imp__sub_8213BFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213BFC8"))) PPC_WEAK_FUNC(sub_8213BFC8);
PPC_FUNC_IMPL(__imp__sub_8213BFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213BFD0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82183850
	ctx.lr = 0x8213BFE0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213bff8
	if (ctx.cr6.eq) goto loc_8213BFF8;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82183448
	ctx.lr = 0x8213BFF4;
	sub_82183448(ctx, base);
	// b 0x8213c000
	goto loc_8213C000;
loc_8213BFF8:
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x821845a0
	ctx.lr = 0x8213C000;
	sub_821845A0(ctx, base);
loc_8213C000:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213c018
	if (ctx.cr6.eq) goto loc_8213C018;
	// bl 0x8213b718
	ctx.lr = 0x8213C00C;
	sub_8213B718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8213c024
	if (!ctx.cr6.eq) goto loc_8213C024;
loc_8213C018:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8213C024:
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82113988
	ctx.lr = 0x8213C030;
	sub_82113988(ctx, base);
	// addi r11,r29,10000
	ctx.r11.s64 = ctx.r29.s64 + 10000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x821139c8
	ctx.lr = 0x8213C044;
	sub_821139C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8213b140
	ctx.lr = 0x8213C054;
	sub_8213B140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213C060"))) PPC_WEAK_FUNC(sub_8213C060);
PPC_FUNC_IMPL(__imp__sub_8213C060) {
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
	ctx.lr = 0x8213C080;
	sub_8218B1E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r11,-31592
	ctx.r9.s64 = ctx.r11.s64 + -31592;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r11,-1504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1504);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8213c0b4
	if (!ctx.cr6.eq) goto loc_8213C0B4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8213C0B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x8213C0C4;
	sub_8218B2D0(ctx, base);
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

__attribute__((alias("__imp__sub_8213C0E0"))) PPC_WEAK_FUNC(sub_8213C0E0);
PPC_FUNC_IMPL(__imp__sub_8213C0E0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31592
	ctx.r10.s64 = ctx.r11.s64 + -31592;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x8213C10C;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8213c128
	if (ctx.cr6.eq) goto loc_8213C128;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213C124;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213C128:
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

__attribute__((alias("__imp__sub_8213C140"))) PPC_WEAK_FUNC(sub_8213C140);
PPC_FUNC_IMPL(__imp__sub_8213C140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8213C148;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8215c080
	ctx.lr = 0x8213C158;
	sub_8215C080(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8213C160;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213C16C;
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
	ctx.lr = 0x8213C180;
	sub_8218AA18(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r27,-1512(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1512);
	// bl 0x820da330
	ctx.lr = 0x8213C18C;
	sub_820DA330(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8213C198:
	// and r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 & ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213c2d0
	if (ctx.cr6.eq) goto loc_8213C2D0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8213c23c
	if (ctx.cr6.eq) goto loc_8213C23C;
	// bl 0x82182e90
	ctx.lr = 0x8213C1B0;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8213C1B8;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213C1C4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8213C1C8;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8213C1D4;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8213C1DC;
	sub_821830F8(ctx, base);
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x8213C1E8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8213c204
	if (ctx.cr6.eq) goto loc_8213C204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218af88
	ctx.lr = 0x8213C1FC;
	sub_8218AF88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8213c208
	goto loc_8213C208;
loc_8213C204:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8213C208:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8213c228
	if (ctx.cr6.lt) goto loc_8213C228;
	// bne cr6,0x8213c230
	if (!ctx.cr6.eq) goto loc_8213C230;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8213C21C;
	sub_821830F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213C224;
	sub_821837D0(ctx, base);
	// b 0x8213c260
	goto loc_8213C260;
loc_8213C228:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x8213C230;
	sub_821830F8(ctx, base);
loc_8213C230:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213C238;
	sub_821837D0(ctx, base);
	// b 0x8213c260
	goto loc_8213C260;
loc_8213C23C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x8213C248;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8213c2d0
	if (ctx.cr6.eq) goto loc_8213C2D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218af88
	ctx.lr = 0x8213C25C;
	sub_8218AF88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8213C260:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8213c2d0
	if (ctx.cr6.eq) goto loc_8213C2D0;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bgt cr6,0x8213c2d0
	if (ctx.cr6.gt) goto loc_8213C2D0;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8213c29c
	// bdzf 4*cr6+eq,0x8213c2a4
	// bne cr6,0x8213c2ac
	if (!ctx.cr6.eq) goto loc_8213C2AC;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8212d698
	ctx.lr = 0x8213C298;
	sub_8212D698(ctx, base);
	// b 0x8213c2d0
	goto loc_8213C2D0;
loc_8213C29C:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8213c2b0
	goto loc_8213C2B0;
loc_8213C2A4:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8213c2b0
	goto loc_8213C2B0;
loc_8213C2AC:
	// li r4,2
	ctx.r4.s64 = 2;
loc_8213C2B0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8212d4a8
	ctx.lr = 0x8213C2BC;
	sub_8212D4A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a7f0
	ctx.lr = 0x8213C2C4;
	sub_8218A7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8213C2D0;
	sub_82183E40(ctx, base);
loc_8213C2D0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rotlwi r26,r26,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x8213c198
	if (ctx.cr6.lt) goto loc_8213C198;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1504);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r25,264(r27)
	PPC_STORE_U32(ctx.r27.u32 + 264, ctx.r25.u32);
	// bl 0x8218a7f0
	ctx.lr = 0x8213C300;
	sub_8218A7F0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213C308;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8213C310"))) PPC_WEAK_FUNC(sub_8213C310);
PPC_FUNC_IMPL(__imp__sub_8213C310) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8213c140
	ctx.lr = 0x8213C328;
	sub_8213C140(ctx, base);
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

__attribute__((alias("__imp__sub_8213C33C"))) PPC_WEAK_FUNC(sub_8213C33C);
PPC_FUNC_IMPL(__imp__sub_8213C33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213C340"))) PPC_WEAK_FUNC(sub_8213C340);
PPC_FUNC_IMPL(__imp__sub_8213C340) {
	PPC_FUNC_PROLOGUE();
	// b 0x8213db48
	sub_8213DB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213C344"))) PPC_WEAK_FUNC(sub_8213C344);
PPC_FUNC_IMPL(__imp__sub_8213C344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213C348"))) PPC_WEAK_FUNC(sub_8213C348);
PPC_FUNC_IMPL(__imp__sub_8213C348) {
	PPC_FUNC_PROLOGUE();
	// b 0x8213d750
	sub_8213D750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213C34C"))) PPC_WEAK_FUNC(sub_8213C34C);
PPC_FUNC_IMPL(__imp__sub_8213C34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213C350"))) PPC_WEAK_FUNC(sub_8213C350);
PPC_FUNC_IMPL(__imp__sub_8213C350) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ebaa8
	ctx.lr = 0x8213C36C;
	sub_821EBAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213db80
	ctx.lr = 0x8213C374;
	sub_8213DB80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213C388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8213c3a4
	if (!ctx.cr6.eq) goto loc_8213C3A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3948
	ctx.lr = 0x8213C398;
	sub_823C3948(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
loc_8213C3A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213C3B8"))) PPC_WEAK_FUNC(sub_8213C3B8);
PPC_FUNC_IMPL(__imp__sub_8213C3B8) {
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
	// bl 0x821ebaa8
	ctx.lr = 0x8213C3D4;
	sub_821EBAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213dbd0
	ctx.lr = 0x8213C3DC;
	sub_8213DBD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213C3F0"))) PPC_WEAK_FUNC(sub_8213C3F0);
PPC_FUNC_IMPL(__imp__sub_8213C3F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
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

__attribute__((alias("__imp__sub_8213C410"))) PPC_WEAK_FUNC(sub_8213C410);
PPC_FUNC_IMPL(__imp__sub_8213C410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213C414"))) PPC_WEAK_FUNC(sub_8213C414);
PPC_FUNC_IMPL(__imp__sub_8213C414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213C418"))) PPC_WEAK_FUNC(sub_8213C418);
PPC_FUNC_IMPL(__imp__sub_8213C418) {
	PPC_FUNC_PROLOGUE();
	// b 0x8213dc20
	sub_8213DC20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213C41C"))) PPC_WEAK_FUNC(sub_8213C41C);
PPC_FUNC_IMPL(__imp__sub_8213C41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213C420"))) PPC_WEAK_FUNC(sub_8213C420);
PPC_FUNC_IMPL(__imp__sub_8213C420) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3d18
	sub_823C3D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213C424"))) PPC_WEAK_FUNC(sub_8213C424);
PPC_FUNC_IMPL(__imp__sub_8213C424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213C428"))) PPC_WEAK_FUNC(sub_8213C428);
PPC_FUNC_IMPL(__imp__sub_8213C428) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3d48
	sub_823C3D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213C42C"))) PPC_WEAK_FUNC(sub_8213C42C);
PPC_FUNC_IMPL(__imp__sub_8213C42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213C430"))) PPC_WEAK_FUNC(sub_8213C430);
PPC_FUNC_IMPL(__imp__sub_8213C430) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3d50
	sub_823C3D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213C434"))) PPC_WEAK_FUNC(sub_8213C434);
PPC_FUNC_IMPL(__imp__sub_8213C434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213C438"))) PPC_WEAK_FUNC(sub_8213C438);
PPC_FUNC_IMPL(__imp__sub_8213C438) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x8213c4e0
	sub_8213C4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213C440"))) PPC_WEAK_FUNC(sub_8213C440);
PPC_FUNC_IMPL(__imp__sub_8213C440) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x8213c4e0
	sub_8213C4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213C448"))) PPC_WEAK_FUNC(sub_8213C448);
PPC_FUNC_IMPL(__imp__sub_8213C448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213C450;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-5052
	ctx.r30.s64 = ctx.r11.s64 + -5052;
loc_8213C460:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8213c4b4
	if (ctx.cr6.eq) goto loc_8213C4B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0e0
	ctx.lr = 0x8213C474;
	sub_8208E0E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213c4d0
	if (!ctx.cr6.eq) goto loc_8213C4D0;
	// lwz r11,1360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8213c498
	if (!ctx.cr6.eq) goto loc_8213C498;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e148
	ctx.lr = 0x8213C490;
	sub_8208E148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213c4d0
	if (!ctx.cr6.eq) goto loc_8213C4D0;
loc_8213C498:
	// lwz r11,1364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8213c4b4
	if (!ctx.cr6.eq) goto loc_8213C4B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e118
	ctx.lr = 0x8213C4AC;
	sub_8208E118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213c4d0
	if (!ctx.cr6.eq) goto loc_8213C4D0;
loc_8213C4B4:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x8213c460
	if (ctx.cr6.lt) goto loc_8213C460;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8213C4D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213C4DC"))) PPC_WEAK_FUNC(sub_8213C4DC);
PPC_FUNC_IMPL(__imp__sub_8213C4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213C4E0"))) PPC_WEAK_FUNC(sub_8213C4E0);
PPC_FUNC_IMPL(__imp__sub_8213C4E0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,-31376
	ctx.r8.s64 = ctx.r11.s64 + -31376;
	// addi r7,r10,-31436
	ctx.r7.s64 = ctx.r10.s64 + -31436;
	// addi r6,r9,-31448
	ctx.r6.s64 = ctx.r9.s64 + -31448;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8213d918
	ctx.lr = 0x8213C524;
	sub_8213D918(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8213c540
	if (ctx.cr6.eq) goto loc_8213C540;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213C53C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213C540:
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

__attribute__((alias("__imp__sub_8213C558"))) PPC_WEAK_FUNC(sub_8213C558);
PPC_FUNC_IMPL(__imp__sub_8213C558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8213C560;
	sub_82248750(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249924
	ctx.lr = 0x8213C568;
	sub_82249924(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r4,144(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-8460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8460);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213C590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213c5d0
	if (!ctx.cr6.eq) goto loc_8213C5D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213C5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8213C5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213C5D0:
	// lwz r3,-8460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8460);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x820e5670
	ctx.lr = 0x8213C5DC;
	sub_820E5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213c600
	if (!ctx.cr6.eq) goto loc_8213C600;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213C600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213C600:
	// bl 0x8213c448
	ctx.lr = 0x8213C604;
	sub_8213C448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213c644
	if (ctx.cr6.eq) goto loc_8213C644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213C628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8213C644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213C644:
	// bl 0x8215bd60
	ctx.lr = 0x8213C648;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213c68c
	if (ctx.cr6.eq) goto loc_8213C68C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213C670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8213C68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213C68C:
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// bl 0x82107368
	ctx.lr = 0x8213C694;
	sub_82107368(ctx, base);
	// li r11,381
	ctx.r11.s64 = 381;
	// li r10,391
	ctx.r10.s64 = 391;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r10.u32);
	// bl 0x8218b408
	ctx.lr = 0x8213C6AC;
	sub_8218B408(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lis r30,2
	ctx.r30.s64 = 131072;
	// li r28,543
	ctx.r28.s64 = 543;
	// ori r30,r30,7936
	ctx.r30.u64 = ctx.r30.u64 | 7936;
	// li r27,1
	ctx.r27.s64 = 1;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
loc_8213C6D0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r29,r28,-543
	ctx.r29.s64 = ctx.r28.s64 + -543;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// addic. r11,r28,-9
	ctx.xer.ca = ctx.r28.u32 > 8;
	ctx.r11.s64 = ctx.r28.s64 + -9;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8213c738
	if (!ctx.cr6.lt) goto loc_8213C738;
	// blt 0x8213c6fc
	if (ctx.cr0.lt) goto loc_8213C6FC;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,-2108(r9)
	PPC_STORE_U32(ctx.r9.u32 + -2108, ctx.r10.u32);
loc_8213C6FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213C710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8213c74c
	if (!ctx.cr6.eq) goto loc_8213C74C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8213c764
	if (ctx.cr6.lt) goto loc_8213C764;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r10.u32);
	// b 0x8213c764
	goto loc_8213C764;
loc_8213C738:
	// blt 0x8213c74c
	if (ctx.cr0.lt) goto loc_8213C74C;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r27,-2108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2108, ctx.r27.u32);
loc_8213C74C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8213c764
	if (ctx.cr6.lt) goto loc_8213C764;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r27,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r27.u32);
loc_8213C764:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// addi r11,r28,-543
	ctx.r11.s64 = ctx.r28.s64 + -543;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x8213c6d0
	if (ctx.cr6.lt) goto loc_8213C6D0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8213cad8
	if (!ctx.cr6.gt) goto loc_8213CAD8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r24,124(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r23,120(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r22,116(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f27,11300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,10388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10388);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lfs f29,9052(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9052);
	ctx.f29.f64 = double(temp.f32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lfs f30,-31244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31244);
	ctx.f30.f64 = double(temp.f32);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lfs f31,11308(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11308);
	ctx.f31.f64 = double(temp.f32);
	// mr r14,r25
	ctx.r14.u64 = ctx.r25.u64;
	// lis r15,-32182
	ctx.r15.s64 = -2109079552;
	// addi r20,r11,30956
	ctx.r20.s64 = ctx.r11.s64 + 30956;
	// addi r19,r10,-15764
	ctx.r19.s64 = ctx.r10.s64 + -15764;
	// addi r18,r9,-15800
	ctx.r18.s64 = ctx.r9.s64 + -15800;
	// addi r17,r8,-15836
	ctx.r17.s64 = ctx.r8.s64 + -15836;
	// addi r16,r7,-15872
	ctx.r16.s64 = ctx.r7.s64 + -15872;
loc_8213C7F4:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8213cab8
	if (!ctx.cr6.eq) goto loc_8213CAB8;
	// lwz r3,-4904(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -4904);
	// lwz r26,16(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r30,r25,r16
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r16.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r29,r25,r17
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r17.u32);
	// lwzx r28,r25,r18
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r18.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r27,r25,r19
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r19.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213C834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8224a7b8
	ctx.lr = 0x8213C83C;
	sub_8224A7B8(ctx, base);
	// lwz r6,652(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// rlwinm r11,r30,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r10,r29,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r28,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r8,r27,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x8213c8c8
	if (ctx.cr6.eq) goto loc_8213C8C8;
	// stfs f31,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stfs f31,12(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f31,16(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f31,12(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lwz r5,652(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stfs f30,16(r4)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stfs f30,12(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r6,652(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfs f30,16(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfs f30,12(r4)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// b 0x8213c92c
	goto loc_8213C92C;
loc_8213C8C8:
	// stfs f29,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stfs f29,12(r4)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stfs f29,16(r7)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stfs f29,12(r6)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lwz r5,652(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f28,16(r4)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f28,12(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r6,652(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stfs f28,16(r5)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stfs f28,12(r4)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
loc_8213C92C:
	// lwz r7,148(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwzx r6,r7,r14
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r14.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8213ca6c
	if (ctx.cr6.eq) goto loc_8213CA6C;
	// extsw r3,r22
	ctx.r3.s64 = ctx.r22.s32;
	// lwz r6,652(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// extsw r5,r23
	ctx.r5.s64 = ctx.r23.s32;
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// extsw r7,r21
	ctx.r7.s64 = ctx.r21.s32;
	// extsw r4,r24
	ctx.r4.s64 = ctx.r24.s32;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f1,f4,f27
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f27.f64));
	// stfs f1,200(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f9,f27
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// stfs f5,204(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// fmuls f0,f3,f27
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f27.f64));
	// stfs f0,208(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// fmuls f13,f2,f27
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f27.f64));
	// stfs f13,212(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lwz r7,652(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f1,200(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f5,204(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,208(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f13,212(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f1,200(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f5,204(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f0,208(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f13,212(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 212, temp.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f1,200(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f5,204(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 204, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f0,208(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 208, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f13,212(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 212, temp.u32);
loc_8213CA6C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82106f58
	ctx.lr = 0x8213CA7C;
	sub_82106F58(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// bl 0x82106f58
	ctx.lr = 0x8213CA8C;
	sub_82106F58(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// bl 0x82106f58
	ctx.lr = 0x8213CA9C;
	sub_82106F58(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// bl 0x82106f58
	ctx.lr = 0x8213CAAC;
	sub_82106F58(ctx, base);
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
loc_8213CAB8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r14,r14,20
	ctx.r14.s64 = ctx.r14.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8213c7f4
	if (ctx.cr6.lt) goto loc_8213C7F4;
loc_8213CAD8:
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213cb0c
	if (ctx.cr6.eq) goto loc_8213CB0C;
	// lwz r10,652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r9,5592
	ctx.r7.u64 = ctx.r9.u64 | 5592;
	// ori r6,r8,5612
	ctx.r6.u64 = ctx.r8.u64 | 5612;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r5,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r5.u32);
loc_8213CB0C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249970
	ctx.lr = 0x8213CB18;
	sub_82249970(ctx, base);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213CB1C"))) PPC_WEAK_FUNC(sub_8213CB1C);
PPC_FUNC_IMPL(__imp__sub_8213CB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213CB20"))) PPC_WEAK_FUNC(sub_8213CB20);
PPC_FUNC_IMPL(__imp__sub_8213CB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8213CB28;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8213cbd4
	if (!ctx.cr6.gt) goto loc_8213CBD4;
	// lis r30,2
	ctx.r30.s64 = 131072;
	// li r29,543
	ctx.r29.s64 = 543;
	// ori r30,r30,7936
	ctx.r30.u64 = ctx.r30.u64 | 7936;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8213CB50:
	// addic. r11,r29,-9
	ctx.xer.ca = ctx.r29.u32 > 8;
	ctx.r11.s64 = ctx.r29.s64 + -9;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8213cb68
	if (ctx.cr0.lt) goto loc_8213CB68;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,-2108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2108, ctx.r28.u32);
loc_8213CB68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213CB7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r29,-543
	ctx.r9.s64 = ctx.r29.s64 + -543;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8213cba4
	if (!ctx.cr6.eq) goto loc_8213CBA4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8213cbbc
	if (ctx.cr6.lt) goto loc_8213CBBC;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r28.u32);
	// b 0x8213cbbc
	goto loc_8213CBBC;
loc_8213CBA4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8213cbbc
	if (ctx.cr6.lt) goto loc_8213CBBC;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r27,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r27.u32);
loc_8213CBBC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// addi r10,r29,-543
	ctx.r10.s64 = ctx.r29.s64 + -543;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213cb50
	if (ctx.cr6.lt) goto loc_8213CB50;
loc_8213CBD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8213CBDC"))) PPC_WEAK_FUNC(sub_8213CBDC);
PPC_FUNC_IMPL(__imp__sub_8213CBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213CBE0"))) PPC_WEAK_FUNC(sub_8213CBE0);
PPC_FUNC_IMPL(__imp__sub_8213CBE0) {
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
	// bl 0x8213d758
	ctx.lr = 0x8213CBF8;
	sub_8213D758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213cb20
	ctx.lr = 0x8213CC00;
	sub_8213CB20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213CC14"))) PPC_WEAK_FUNC(sub_8213CC14);
PPC_FUNC_IMPL(__imp__sub_8213CC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213CC18"))) PPC_WEAK_FUNC(sub_8213CC18);
PPC_FUNC_IMPL(__imp__sub_8213CC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8213CC20;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8215bd60
	ctx.lr = 0x8213CC30;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213cd8c
	if (ctx.cr6.eq) goto loc_8213CD8C;
	// lwz r11,-28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -28);
	// addi r31,r26,-28
	ctx.r31.s64 = ctx.r26.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213CC54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8213cce4
	if (!ctx.cr6.eq) goto loc_8213CCE4;
	// addic. r30,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r30.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8213cca8
	if (ctx.cr0.lt) goto loc_8213CCA8;
loc_8213CC70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213CC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213cc9c
	if (ctx.cr6.eq) goto loc_8213CC9C;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8213cc70
	if (!ctx.cr0.lt) goto loc_8213CC70;
	// b 0x8213cca8
	goto loc_8213CCA8;
loc_8213CC9C:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8213cd74
	if (!ctx.cr6.eq) goto loc_8213CD74;
loc_8213CCA8:
	// li r30,5
	ctx.r30.s64 = 5;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// bge cr6,0x8213cd74
	if (!ctx.cr6.lt) goto loc_8213CD74;
loc_8213CCB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213CCCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213cd70
	if (ctx.cr6.eq) goto loc_8213CD70;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x8213ccb4
	if (ctx.cr6.gt) goto loc_8213CCB4;
	// b 0x8213cd74
	goto loc_8213CD74;
loc_8213CCE4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8213cd8c
	if (!ctx.cr6.eq) goto loc_8213CD8C;
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bge cr6,0x8213cd34
	if (!ctx.cr6.lt) goto loc_8213CD34;
loc_8213CCF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213CD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213cd28
	if (ctx.cr6.eq) goto loc_8213CD28;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x8213ccf8
	if (ctx.cr6.lt) goto loc_8213CCF8;
	// b 0x8213cd34
	goto loc_8213CD34;
loc_8213CD28:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8213cd74
	if (!ctx.cr6.eq) goto loc_8213CD74;
loc_8213CD34:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8213cd74
	if (!ctx.cr6.gt) goto loc_8213CD74;
loc_8213CD40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213CD58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213cd70
	if (ctx.cr6.eq) goto loc_8213CD70;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8213cd40
	if (ctx.cr6.lt) goto loc_8213CD40;
	// b 0x8213cd74
	goto loc_8213CD74;
loc_8213CD70:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8213CD74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213CD8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213CD8C:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8213cda0
	if (ctx.cr6.eq) goto loc_8213CDA0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8213cdac
	if (!ctx.cr6.eq) goto loc_8213CDAC;
loc_8213CDA0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8213daf0
	ctx.lr = 0x8213CDAC;
	sub_8213DAF0(ctx, base);
loc_8213CDAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8213CDB4"))) PPC_WEAK_FUNC(sub_8213CDB4);
PPC_FUNC_IMPL(__imp__sub_8213CDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213CDB8"))) PPC_WEAK_FUNC(sub_8213CDB8);
PPC_FUNC_IMPL(__imp__sub_8213CDB8) {
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
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213cdfc
	if (ctx.cr6.eq) goto loc_8213CDFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213CDE8;
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
loc_8213CDFC:
	// bl 0x8215bd60
	ctx.lr = 0x8213CE00;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213ce54
	if (ctx.cr6.eq) goto loc_8213CE54;
	// bl 0x8215bec8
	ctx.lr = 0x8213CE10;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213ce54
	if (ctx.cr6.eq) goto loc_8213CE54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213CE38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8213CE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213CE54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8213CE5C;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213CE70"))) PPC_WEAK_FUNC(sub_8213CE70);
PPC_FUNC_IMPL(__imp__sub_8213CE70) {
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
	// lwz r11,612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,588(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,132(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 132, temp.u32);
	// lwz r4,588(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 616);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f13,132(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// lwz r4,612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// lwz r3,588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// bl 0x8210a9b0
	ctx.lr = 0x8213CEE0;
	sub_8210A9B0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,616(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// lwz r3,588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// bl 0x8210a9b0
	ctx.lr = 0x8213CEF4;
	sub_8210A9B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213CF08"))) PPC_WEAK_FUNC(sub_8213CF08);
PPC_FUNC_IMPL(__imp__sub_8213CF08) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r11,-31568
	ctx.r6.s64 = ctx.r11.s64 + -31568;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8213d770
	ctx.lr = 0x8213CF44;
	sub_8213D770(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r10,-31376
	ctx.r7.s64 = ctx.r10.s64 + -31376;
	// addi r6,r9,-31436
	ctx.r6.s64 = ctx.r9.s64 + -31436;
	// addi r5,r8,-31448
	ctx.r5.s64 = ctx.r8.s64 + -31448;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r4.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8213d758
	ctx.lr = 0x8213CF7C;
	sub_8213D758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213cb20
	ctx.lr = 0x8213CF84;
	sub_8213CB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213c558
	ctx.lr = 0x8213CF8C;
	sub_8213C558(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821ebaa8
	ctx.lr = 0x8213CF94;
	sub_821EBAA8(ctx, base);
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

__attribute__((alias("__imp__sub_8213CFB0"))) PPC_WEAK_FUNC(sub_8213CFB0);
PPC_FUNC_IMPL(__imp__sub_8213CFB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x8213d050
	sub_8213D050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213CFB8"))) PPC_WEAK_FUNC(sub_8213CFB8);
PPC_FUNC_IMPL(__imp__sub_8213CFB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x8213d050
	sub_8213D050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213CFC0"))) PPC_WEAK_FUNC(sub_8213CFC0);
PPC_FUNC_IMPL(__imp__sub_8213CFC0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r6,r11,-31240
	ctx.r6.s64 = ctx.r11.s64 + -31240;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8213d770
	ctx.lr = 0x8213D000;
	sub_8213D770(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r10,-31152
	ctx.r7.s64 = ctx.r10.s64 + -31152;
	// addi r6,r9,-31208
	ctx.r6.s64 = ctx.r9.s64 + -31208;
	// addi r5,r8,-31220
	ctx.r5.s64 = ctx.r8.s64 + -31220;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-8460(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8460);
	// bl 0x820e5500
	ctx.lr = 0x8213D034;
	sub_820E5500(ctx, base);
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

__attribute__((alias("__imp__sub_8213D050"))) PPC_WEAK_FUNC(sub_8213D050);
PPC_FUNC_IMPL(__imp__sub_8213D050) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,-31152
	ctx.r8.s64 = ctx.r11.s64 + -31152;
	// addi r7,r10,-31208
	ctx.r7.s64 = ctx.r10.s64 + -31208;
	// addi r6,r9,-31220
	ctx.r6.s64 = ctx.r9.s64 + -31220;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8213d918
	ctx.lr = 0x8213D094;
	sub_8213D918(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8213d0b0
	if (ctx.cr6.eq) goto loc_8213D0B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213D0AC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213D0B0:
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

__attribute__((alias("__imp__sub_8213D0C8"))) PPC_WEAK_FUNC(sub_8213D0C8);
PPC_FUNC_IMPL(__imp__sub_8213D0C8) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5218
	ctx.lr = 0x8213D0E0;
	sub_820E5218(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213D0F8"))) PPC_WEAK_FUNC(sub_8213D0F8);
PPC_FUNC_IMPL(__imp__sub_8213D0F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821477e8
	sub_821477E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D108"))) PPC_WEAK_FUNC(sub_8213D108);
PPC_FUNC_IMPL(__imp__sub_8213D108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213D10C"))) PPC_WEAK_FUNC(sub_8213D10C);
PPC_FUNC_IMPL(__imp__sub_8213D10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D110"))) PPC_WEAK_FUNC(sub_8213D110);
PPC_FUNC_IMPL(__imp__sub_8213D110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x821474f0
	sub_821474F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D128"))) PPC_WEAK_FUNC(sub_8213D128);
PPC_FUNC_IMPL(__imp__sub_8213D128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213D12C"))) PPC_WEAK_FUNC(sub_8213D12C);
PPC_FUNC_IMPL(__imp__sub_8213D12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D130"))) PPC_WEAK_FUNC(sub_8213D130);
PPC_FUNC_IMPL(__imp__sub_8213D130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8213D138;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r6,r11,-31020
	ctx.r6.s64 = ctx.r11.s64 + -31020;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8213d770
	ctx.lr = 0x8213D164;
	sub_8213D770(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r10,-30928
	ctx.r7.s64 = ctx.r10.s64 + -30928;
	// addi r6,r9,-30988
	ctx.r6.s64 = ctx.r9.s64 + -30988;
	// addi r5,r8,-31000
	ctx.r5.s64 = ctx.r8.s64 + -31000;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r29,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r29.u32);
	// bl 0x821ebaa8
	ctx.lr = 0x8213D198;
	sub_821EBAA8(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// bl 0x8215c080
	ctx.lr = 0x8213D1A0;
	sub_8215C080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8213D1A8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213D1B4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8213D1B8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213d1d0
	if (ctx.cr6.eq) goto loc_8213D1D0;
	// li r3,1088
	ctx.r3.s64 = 1088;
	// bl 0x82183448
	ctx.lr = 0x8213D1CC;
	sub_82183448(ctx, base);
	// b 0x8213d1d8
	goto loc_8213D1D8;
loc_8213D1D0:
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x821845a0
	ctx.lr = 0x8213D1D8;
	sub_821845A0(ctx, base);
loc_8213D1D8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213d1fc
	if (ctx.cr6.eq) goto loc_8213D1FC;
	// bl 0x8215c080
	ctx.lr = 0x8213D1E8;
	sub_8215C080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82149188
	ctx.lr = 0x8213D1F8;
	sub_82149188(ctx, base);
	// b 0x8213d200
	goto loc_8213D200;
loc_8213D1FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8213D200:
	// stw r3,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213D20C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8213D218"))) PPC_WEAK_FUNC(sub_8213D218);
PPC_FUNC_IMPL(__imp__sub_8213D218) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x8213d2e8
	sub_8213D2E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D220"))) PPC_WEAK_FUNC(sub_8213D220);
PPC_FUNC_IMPL(__imp__sub_8213D220) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x8213d2e8
	sub_8213D2E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D228"))) PPC_WEAK_FUNC(sub_8213D228);
PPC_FUNC_IMPL(__imp__sub_8213D228) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,-30928
	ctx.r8.s64 = ctx.r11.s64 + -30928;
	// addi r7,r10,-30988
	ctx.r7.s64 = ctx.r10.s64 + -30988;
	// addi r6,r9,-31000
	ctx.r6.s64 = ctx.r9.s64 + -31000;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// bl 0x8215bd60
	ctx.lr = 0x8213D268;
	sub_8215BD60(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8213d2a0
	if (ctx.cr6.eq) goto loc_8213D2A0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-784(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8213d2a0
	if (ctx.cr6.eq) goto loc_8213D2A0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213D298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec900
	ctx.lr = 0x8213D2A0;
	sub_821EC900(ctx, base);
loc_8213D2A0:
	// lwz r3,672(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213d2c0
	if (ctx.cr6.eq) goto loc_8213D2C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213D2C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213D2C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 672, ctx.r11.u32);
	// bl 0x8213d918
	ctx.lr = 0x8213D2D0;
	sub_8213D918(ctx, base);
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

__attribute__((alias("__imp__sub_8213D2E8"))) PPC_WEAK_FUNC(sub_8213D2E8);
PPC_FUNC_IMPL(__imp__sub_8213D2E8) {
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
	// bl 0x8213d228
	ctx.lr = 0x8213D308;
	sub_8213D228(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d324
	if (ctx.cr6.eq) goto loc_8213D324;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213D320;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213D324:
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

__attribute__((alias("__imp__sub_8213D33C"))) PPC_WEAK_FUNC(sub_8213D33C);
PPC_FUNC_IMPL(__imp__sub_8213D33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D340"))) PPC_WEAK_FUNC(sub_8213D340);
PPC_FUNC_IMPL(__imp__sub_8213D340) {
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
	// lwz r3,672(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,-30704
	ctx.r8.s64 = ctx.r11.s64 + -30704;
	// addi r7,r10,-30764
	ctx.r7.s64 = ctx.r10.s64 + -30764;
	// addi r6,r9,-30776
	ctx.r6.s64 = ctx.r9.s64 + -30776;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// beq cr6,0x8213d398
	if (ctx.cr6.eq) goto loc_8213D398;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213D398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213D398:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// bl 0x8213d918
	ctx.lr = 0x8213D3A8;
	sub_8213D918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213D3BC"))) PPC_WEAK_FUNC(sub_8213D3BC);
PPC_FUNC_IMPL(__imp__sub_8213D3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D3C0"))) PPC_WEAK_FUNC(sub_8213D3C0);
PPC_FUNC_IMPL(__imp__sub_8213D3C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213D3DC"))) PPC_WEAK_FUNC(sub_8213D3DC);
PPC_FUNC_IMPL(__imp__sub_8213D3DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213D3E0"))) PPC_WEAK_FUNC(sub_8213D3E0);
PPC_FUNC_IMPL(__imp__sub_8213D3E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213D404"))) PPC_WEAK_FUNC(sub_8213D404);
PPC_FUNC_IMPL(__imp__sub_8213D404) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213D408"))) PPC_WEAK_FUNC(sub_8213D408);
PPC_FUNC_IMPL(__imp__sub_8213D408) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,672(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
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

__attribute__((alias("__imp__sub_8213D430"))) PPC_WEAK_FUNC(sub_8213D430);
PPC_FUNC_IMPL(__imp__sub_8213D430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213D434"))) PPC_WEAK_FUNC(sub_8213D434);
PPC_FUNC_IMPL(__imp__sub_8213D434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D438"))) PPC_WEAK_FUNC(sub_8213D438);
PPC_FUNC_IMPL(__imp__sub_8213D438) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x8213d538
	sub_8213D538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D440"))) PPC_WEAK_FUNC(sub_8213D440);
PPC_FUNC_IMPL(__imp__sub_8213D440) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x8213d538
	sub_8213D538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D448"))) PPC_WEAK_FUNC(sub_8213D448);
PPC_FUNC_IMPL(__imp__sub_8213D448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8213D450;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r11,-30796
	ctx.r6.s64 = ctx.r11.s64 + -30796;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8213d770
	ctx.lr = 0x8213D480;
	sub_8213D770(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r10,-30704
	ctx.r7.s64 = ctx.r10.s64 + -30704;
	// addi r6,r9,-30764
	ctx.r6.s64 = ctx.r9.s64 + -30764;
	// addi r5,r8,-30776
	ctx.r5.s64 = ctx.r8.s64 + -30776;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// stw r28,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r28.u32);
	// bl 0x8215c080
	ctx.lr = 0x8213D4B0;
	sub_8215C080(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8213D4B8;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213D4C4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8213D4C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213d4e0
	if (ctx.cr6.eq) goto loc_8213D4E0;
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x82183448
	ctx.lr = 0x8213D4DC;
	sub_82183448(ctx, base);
	// b 0x8213d4e8
	goto loc_8213D4E8;
loc_8213D4E0:
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x821845a0
	ctx.lr = 0x8213D4E8;
	sub_821845A0(ctx, base);
loc_8213D4E8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213d518
	if (ctx.cr6.eq) goto loc_8213D518;
	// bl 0x8215c080
	ctx.lr = 0x8213D4F8;
	sub_8215C080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x821eeb08
	ctx.lr = 0x8213D514;
	sub_821EEB08(ctx, base);
	// b 0x8213d51c
	goto loc_8213D51C;
loc_8213D518:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8213D51C:
	// stw r3,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// bl 0x821837d0
	ctx.lr = 0x8213D52C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8213D538"))) PPC_WEAK_FUNC(sub_8213D538);
PPC_FUNC_IMPL(__imp__sub_8213D538) {
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
	// bl 0x8213d340
	ctx.lr = 0x8213D558;
	sub_8213D340(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d574
	if (ctx.cr6.eq) goto loc_8213D574;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213D570;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213D574:
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

__attribute__((alias("__imp__sub_8213D58C"))) PPC_WEAK_FUNC(sub_8213D58C);
PPC_FUNC_IMPL(__imp__sub_8213D58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D590"))) PPC_WEAK_FUNC(sub_8213D590);
PPC_FUNC_IMPL(__imp__sub_8213D590) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,672(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
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

__attribute__((alias("__imp__sub_8213D5A4"))) PPC_WEAK_FUNC(sub_8213D5A4);
PPC_FUNC_IMPL(__imp__sub_8213D5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D5A8"))) PPC_WEAK_FUNC(sub_8213D5A8);
PPC_FUNC_IMPL(__imp__sub_8213D5A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,672(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// b 0x82349038
	sub_82349038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D5B0"))) PPC_WEAK_FUNC(sub_8213D5B0);
PPC_FUNC_IMPL(__imp__sub_8213D5B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,672(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213D5C4"))) PPC_WEAK_FUNC(sub_8213D5C4);
PPC_FUNC_IMPL(__imp__sub_8213D5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D5C8"))) PPC_WEAK_FUNC(sub_8213D5C8);
PPC_FUNC_IMPL(__imp__sub_8213D5C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,672(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
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

__attribute__((alias("__imp__sub_8213D5DC"))) PPC_WEAK_FUNC(sub_8213D5DC);
PPC_FUNC_IMPL(__imp__sub_8213D5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D5E0"))) PPC_WEAK_FUNC(sub_8213D5E0);
PPC_FUNC_IMPL(__imp__sub_8213D5E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x8213d6b8
	sub_8213D6B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D5E8"))) PPC_WEAK_FUNC(sub_8213D5E8);
PPC_FUNC_IMPL(__imp__sub_8213D5E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x8213d6b8
	sub_8213D6B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D5F0"))) PPC_WEAK_FUNC(sub_8213D5F0);
PPC_FUNC_IMPL(__imp__sub_8213D5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213D5F8;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r11,-30572
	ctx.r6.s64 = ctx.r11.s64 + -30572;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8213d770
	ctx.lr = 0x8213D628;
	sub_8213D770(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r10,-30464
	ctx.r7.s64 = ctx.r10.s64 + -30464;
	// addi r6,r9,-30520
	ctx.r6.s64 = ctx.r9.s64 + -30520;
	// addi r5,r8,-30532
	ctx.r5.s64 = ctx.r8.s64 + -30532;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// bl 0x821ebb58
	ctx.lr = 0x8213D654;
	sub_821EBB58(ctx, base);
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r11,-784(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -784);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,112(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8213D69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// bl 0x821ec800
	ctx.lr = 0x8213D6A8;
	sub_821EC800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213D6B4"))) PPC_WEAK_FUNC(sub_8213D6B4);
PPC_FUNC_IMPL(__imp__sub_8213D6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D6B8"))) PPC_WEAK_FUNC(sub_8213D6B8);
PPC_FUNC_IMPL(__imp__sub_8213D6B8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,-30464
	ctx.r8.s64 = ctx.r11.s64 + -30464;
	// addi r7,r10,-30520
	ctx.r7.s64 = ctx.r10.s64 + -30520;
	// addi r6,r9,-30532
	ctx.r6.s64 = ctx.r9.s64 + -30532;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8213d918
	ctx.lr = 0x8213D6FC;
	sub_8213D918(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8213d718
	if (ctx.cr6.eq) goto loc_8213D718;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213D714;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213D718:
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

__attribute__((alias("__imp__sub_8213D730"))) PPC_WEAK_FUNC(sub_8213D730);
PPC_FUNC_IMPL(__imp__sub_8213D730) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_8213D740"))) PPC_WEAK_FUNC(sub_8213D740);
PPC_FUNC_IMPL(__imp__sub_8213D740) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c39f0
	sub_823C39F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D744"))) PPC_WEAK_FUNC(sub_8213D744);
PPC_FUNC_IMPL(__imp__sub_8213D744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D748"))) PPC_WEAK_FUNC(sub_8213D748);
PPC_FUNC_IMPL(__imp__sub_8213D748) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3a50
	sub_823C3A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D74C"))) PPC_WEAK_FUNC(sub_8213D74C);
PPC_FUNC_IMPL(__imp__sub_8213D74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D750"))) PPC_WEAK_FUNC(sub_8213D750);
PPC_FUNC_IMPL(__imp__sub_8213D750) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3908
	sub_823C3908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D754"))) PPC_WEAK_FUNC(sub_8213D754);
PPC_FUNC_IMPL(__imp__sub_8213D754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D758"))) PPC_WEAK_FUNC(sub_8213D758);
PPC_FUNC_IMPL(__imp__sub_8213D758) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3958
	sub_823C3958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D75C"))) PPC_WEAK_FUNC(sub_8213D75C);
PPC_FUNC_IMPL(__imp__sub_8213D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D760"))) PPC_WEAK_FUNC(sub_8213D760);
PPC_FUNC_IMPL(__imp__sub_8213D760) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// b 0x823c30f0
	sub_823C30F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D770"))) PPC_WEAK_FUNC(sub_8213D770);
PPC_FUNC_IMPL(__imp__sub_8213D770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8213D778;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x823c3aa8
	ctx.lr = 0x8213D7AC;
	sub_823C3AA8(ctx, base);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82134b40
	ctx.lr = 0x8213D7B8;
	sub_82134B40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r24,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r24.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// addi r8,r11,-30232
	ctx.r8.s64 = ctx.r11.s64 + -30232;
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
	// addi r7,r10,-30292
	ctx.r7.s64 = ctx.r10.s64 + -30292;
	// addi r6,r9,-30304
	ctx.r6.s64 = ctx.r9.s64 + -30304;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x823c34c0
	ctx.lr = 0x8213D7F8;
	sub_823C34C0(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// stw r23,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r23.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r3,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r3.u32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lfs f0,2144(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,3276
	ctx.r8.s64 = 214695936;
	// stfs f0,668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// lwz r11,-792(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -792);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// ori r7,r8,52428
	ctx.r7.u64 = ctx.r8.u64 | 52428;
	// stw r6,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r6.u32);
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// stw r5,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r5.u32);
	// lfs f0,-17104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// lfs f0,-17100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// bgt cr6,0x8213d860
	if (ctx.cr6.gt) goto loc_8213D860;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8213d864
	goto loc_8213D864;
loc_8213D860:
	// li r28,-1
	ctx.r28.s64 = -1;
loc_8213D864:
	// bl 0x82183850
	ctx.lr = 0x8213D868;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8213d880
	if (ctx.cr6.eq) goto loc_8213D880;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x8213D87C;
	sub_82183448(ctx, base);
	// b 0x8213d88c
	goto loc_8213D88C;
loc_8213D880:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8213D88C;
	sub_821845A0(ctx, base);
loc_8213D88C:
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821847a8
	ctx.lr = 0x8213D8A4;
	sub_821847A8(ctx, base);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x823c3878
	ctx.lr = 0x8213D8B8;
	sub_823C3878(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3958
	ctx.lr = 0x8213D8C4;
	sub_823C3958(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r7,r9,-30320
	ctx.r7.s64 = ctx.r9.s64 + -30320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,-30320(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30320);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stw r5,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r5.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,32(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// stfs f12,40(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8213D908"))) PPC_WEAK_FUNC(sub_8213D908);
PPC_FUNC_IMPL(__imp__sub_8213D908) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x8213dc98
	sub_8213DC98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D910"))) PPC_WEAK_FUNC(sub_8213D910);
PPC_FUNC_IMPL(__imp__sub_8213D910) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// b 0x8213dc98
	sub_8213DC98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D918"))) PPC_WEAK_FUNC(sub_8213D918);
PPC_FUNC_IMPL(__imp__sub_8213D918) {
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
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,-30232
	ctx.r8.s64 = ctx.r11.s64 + -30232;
	// addi r7,r10,-30292
	ctx.r7.s64 = ctx.r10.s64 + -30292;
	// addi r6,r9,-30304
	ctx.r6.s64 = ctx.r9.s64 + -30304;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// beq cr6,0x8213d96c
	if (ctx.cr6.eq) goto loc_8213D96C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8213D96C;
	sub_82183E40(ctx, base);
loc_8213D96C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// bl 0x823c30b8
	ctx.lr = 0x8213D97C;
	sub_823C30B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82134bb0
	ctx.lr = 0x8213D984;
	sub_82134BB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c37f0
	ctx.lr = 0x8213D98C;
	sub_823C37F0(ctx, base);
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

__attribute__((alias("__imp__sub_8213D9A4"))) PPC_WEAK_FUNC(sub_8213D9A4);
PPC_FUNC_IMPL(__imp__sub_8213D9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D9A8"))) PPC_WEAK_FUNC(sub_8213D9A8);
PPC_FUNC_IMPL(__imp__sub_8213D9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8213d9d8
	if (!ctx.cr6.gt) goto loc_8213D9D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8213D9D8:
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

__attribute__((alias("__imp__sub_8213D9E8"))) PPC_WEAK_FUNC(sub_8213D9E8);
PPC_FUNC_IMPL(__imp__sub_8213D9E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213D9EC"))) PPC_WEAK_FUNC(sub_8213D9EC);
PPC_FUNC_IMPL(__imp__sub_8213D9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D9F0"))) PPC_WEAK_FUNC(sub_8213D9F0);
PPC_FUNC_IMPL(__imp__sub_8213D9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8213da20
	if (!ctx.cr6.gt) goto loc_8213DA20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8213DA20:
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

__attribute__((alias("__imp__sub_8213DA30"))) PPC_WEAK_FUNC(sub_8213DA30);
PPC_FUNC_IMPL(__imp__sub_8213DA30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213DA34"))) PPC_WEAK_FUNC(sub_8213DA34);
PPC_FUNC_IMPL(__imp__sub_8213DA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213DA38"))) PPC_WEAK_FUNC(sub_8213DA38);
PPC_FUNC_IMPL(__imp__sub_8213DA38) {
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
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,140
	ctx.r3.s64 = 140;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213da98
	if (ctx.cr6.eq) goto loc_8213DA98;
	// bl 0x82080000
	ctx.lr = 0x8213DA60;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213dad4
	if (ctx.cr6.eq) goto loc_8213DAD4;
	// addi r6,r31,28
	ctx.r6.s64 = ctx.r31.s64 + 28;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x823c28e0
	ctx.lr = 0x8213DA84;
	sub_823C28E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8213DA98:
	// bl 0x82080000
	ctx.lr = 0x8213DA9C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213dad4
	if (ctx.cr6.eq) goto loc_8213DAD4;
	// addi r6,r31,28
	ctx.r6.s64 = ctx.r31.s64 + 28;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x823c2990
	ctx.lr = 0x8213DAC0;
	sub_823C2990(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8213DAD4:
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

__attribute__((alias("__imp__sub_8213DAEC"))) PPC_WEAK_FUNC(sub_8213DAEC);
PPC_FUNC_IMPL(__imp__sub_8213DAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213DAF0"))) PPC_WEAK_FUNC(sub_8213DAF0);
PPC_FUNC_IMPL(__imp__sub_8213DAF0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,32(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213DB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c39a0
	ctx.lr = 0x8213DB30;
	sub_823C39A0(ctx, base);
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

__attribute__((alias("__imp__sub_8213DB48"))) PPC_WEAK_FUNC(sub_8213DB48);
PPC_FUNC_IMPL(__imp__sub_8213DB48) {
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
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// bl 0x823c3410
	ctx.lr = 0x8213DB64;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3918
	ctx.lr = 0x8213DB6C;
	sub_823C3918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213DB80"))) PPC_WEAK_FUNC(sub_8213DB80);
PPC_FUNC_IMPL(__imp__sub_8213DB80) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// lfs f0,7948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// bl 0x823c3468
	ctx.lr = 0x8213DBA8;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3928
	ctx.lr = 0x8213DBB0;
	sub_823C3928(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213DBCC"))) PPC_WEAK_FUNC(sub_8213DBCC);
PPC_FUNC_IMPL(__imp__sub_8213DBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213DBD0"))) PPC_WEAK_FUNC(sub_8213DBD0);
PPC_FUNC_IMPL(__imp__sub_8213DBD0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// bl 0x823c3468
	ctx.lr = 0x8213DBF8;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3938
	ctx.lr = 0x8213DC00;
	sub_823C3938(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213DC1C"))) PPC_WEAK_FUNC(sub_8213DC1C);
PPC_FUNC_IMPL(__imp__sub_8213DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213DC20"))) PPC_WEAK_FUNC(sub_8213DC20);
PPC_FUNC_IMPL(__imp__sub_8213DC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8213dc58
	if (ctx.cr6.eq) goto loc_8213DC58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8213dc6c
	if (!ctx.cr6.gt) goto loc_8213DC6C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x8213dc6c
	if (ctx.cr6.gt) goto loc_8213DC6C;
	// lfs f13,580(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f11,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// b 0x8213dc68
	goto loc_8213DC68;
loc_8213DC58:
	// lfs f13,580(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f11,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
loc_8213DC68:
	// stfs f10,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
loc_8213DC6C:
	// lfs f13,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8213dc7c
	if (!ctx.cr6.gt) goto loc_8213DC7C;
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
loc_8213DC7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213DC98"))) PPC_WEAK_FUNC(sub_8213DC98);
PPC_FUNC_IMPL(__imp__sub_8213DC98) {
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
	// bl 0x8213d918
	ctx.lr = 0x8213DCB8;
	sub_8213D918(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213dcd4
	if (ctx.cr6.eq) goto loc_8213DCD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213DCD0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213DCD4:
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

__attribute__((alias("__imp__sub_8213DCEC"))) PPC_WEAK_FUNC(sub_8213DCEC);
PPC_FUNC_IMPL(__imp__sub_8213DCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213DCF0"))) PPC_WEAK_FUNC(sub_8213DCF0);
PPC_FUNC_IMPL(__imp__sub_8213DCF0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-30064
	ctx.r9.s64 = ctx.r11.s64 + -30064;
	// addi r8,r10,-30100
	ctx.r8.s64 = ctx.r10.s64 + -30100;
	// addi r30,r31,336
	ctx.r30.s64 = ctx.r31.s64 + 336;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213dd44
	if (ctx.cr6.eq) goto loc_8213DD44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213DD44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213DD44:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// bl 0x821883b8
	ctx.lr = 0x8213DD54;
	sub_821883B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1de0
	ctx.lr = 0x8213DD5C;
	sub_821B1DE0(ctx, base);
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

__attribute__((alias("__imp__sub_8213DD74"))) PPC_WEAK_FUNC(sub_8213DD74);
PPC_FUNC_IMPL(__imp__sub_8213DD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213DD78"))) PPC_WEAK_FUNC(sub_8213DD78);
PPC_FUNC_IMPL(__imp__sub_8213DD78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-336
	ctx.r3.s64 = ctx.r3.s64 + -336;
	// b 0x8213dde0
	sub_8213DDE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213DD80"))) PPC_WEAK_FUNC(sub_8213DD80);
PPC_FUNC_IMPL(__imp__sub_8213DD80) {
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
	// bl 0x821b2bf8
	ctx.lr = 0x8213DD98;
	sub_821B2BF8(ctx, base);
	// lis r4,26418
	ctx.r4.s64 = 1731330048;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17485
	ctx.r4.u64 = ctx.r4.u64 | 17485;
	// bl 0x82188378
	ctx.lr = 0x8213DDAC;
	sub_82188378(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r31,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r31.u32);
	// addi r9,r11,-30064
	ctx.r9.s64 = ctx.r11.s64 + -30064;
	// addi r8,r10,-30100
	ctx.r8.s64 = ctx.r10.s64 + -30100;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213DDE0"))) PPC_WEAK_FUNC(sub_8213DDE0);
PPC_FUNC_IMPL(__imp__sub_8213DDE0) {
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
	// bl 0x8213dcf0
	ctx.lr = 0x8213DE00;
	sub_8213DCF0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213de1c
	if (ctx.cr6.eq) goto loc_8213DE1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213DE18;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213DE1C:
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

__attribute__((alias("__imp__sub_8213DE34"))) PPC_WEAK_FUNC(sub_8213DE34);
PPC_FUNC_IMPL(__imp__sub_8213DE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213DE38"))) PPC_WEAK_FUNC(sub_8213DE38);
PPC_FUNC_IMPL(__imp__sub_8213DE38) {
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
	// bl 0x821d95b8
	ctx.lr = 0x8213DE50;
	sub_821D95B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213DE90"))) PPC_WEAK_FUNC(sub_8213DE90);
PPC_FUNC_IMPL(__imp__sub_8213DE90) {
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
	// bl 0x8213bbc0
	ctx.lr = 0x8213DEA8;
	sub_8213BBC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-29984
	ctx.r9.s64 = ctx.r11.s64 + -29984;
	// stw r10,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213DED4"))) PPC_WEAK_FUNC(sub_8213DED4);
PPC_FUNC_IMPL(__imp__sub_8213DED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213DED8"))) PPC_WEAK_FUNC(sub_8213DED8);
PPC_FUNC_IMPL(__imp__sub_8213DED8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-29984
	ctx.r10.s64 = ctx.r11.s64 + -29984;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8213bae8
	ctx.lr = 0x8213DF04;
	sub_8213BAE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8213df20
	if (ctx.cr6.eq) goto loc_8213DF20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213DF1C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213DF20:
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

__attribute__((alias("__imp__sub_8213DF38"))) PPC_WEAK_FUNC(sub_8213DF38);
PPC_FUNC_IMPL(__imp__sub_8213DF38) {
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
	// bl 0x8213a6f8
	ctx.lr = 0x8213DF50;
	sub_8213A6F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-29760
	ctx.r10.s64 = ctx.r11.s64 + -29760;
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

__attribute__((alias("__imp__sub_8213DF74"))) PPC_WEAK_FUNC(sub_8213DF74);
PPC_FUNC_IMPL(__imp__sub_8213DF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213DF78"))) PPC_WEAK_FUNC(sub_8213DF78);
PPC_FUNC_IMPL(__imp__sub_8213DF78) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-29760
	ctx.r10.s64 = ctx.r11.s64 + -29760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8213a470
	ctx.lr = 0x8213DFA4;
	sub_8213A470(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8213dfc0
	if (ctx.cr6.eq) goto loc_8213DFC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213DFBC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213DFC0:
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

__attribute__((alias("__imp__sub_8213DFD8"))) PPC_WEAK_FUNC(sub_8213DFD8);
PPC_FUNC_IMPL(__imp__sub_8213DFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821d1c80
	ctx.lr = 0x8213DFF8;
	sub_821D1C80(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8213e08c
	if (!ctx.cr6.eq) goto loc_8213E08C;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lfs f0,8328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// std r9,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x8213e16c
	goto loc_8213E16C;
loc_8213E08C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8213e0c0
	if (!ctx.cr6.eq) goto loc_8213E0C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f9,f9,f12,f0
	ctx.f9.f64 = double(float(-(ctx.f9.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// fmadds f13,f8,f12,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f13.f64));
	// b 0x8213e17c
	goto loc_8213E17C;
loc_8213E0C0:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fsubs f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
loc_8213E16C:
	// lfs f9,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
loc_8213E17C:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f10,196(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stfs f6,184(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f6,200(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f6,216(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bctrl 
	ctx.lr = 0x8213E204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// ld r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r4,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r4.u64);
	// std r3,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r3.u64);
	// std r11,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r11.u64);
	// std r10,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r10.u64);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213E240"))) PPC_WEAK_FUNC(sub_8213E240);
PPC_FUNC_IMPL(__imp__sub_8213E240) {
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
	ctx.lr = 0x8213E250;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213e268
	if (ctx.cr6.eq) goto loc_8213E268;
	// li r3,2008
	ctx.r3.s64 = 2008;
	// bl 0x82183448
	ctx.lr = 0x8213E264;
	sub_82183448(ctx, base);
	// b 0x8213e270
	goto loc_8213E270;
loc_8213E268:
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x821845a0
	ctx.lr = 0x8213E270;
	sub_821845A0(ctx, base);
loc_8213E270:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213e294
	if (ctx.cr6.eq) goto loc_8213E294;
	// bl 0x82142628
	ctx.lr = 0x8213E27C;
	sub_82142628(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-1428(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8213E294:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1428, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213E2B0"))) PPC_WEAK_FUNC(sub_8213E2B0);
PPC_FUNC_IMPL(__imp__sub_8213E2B0) {
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
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8218ca50
	ctx.lr = 0x8213E2D0;
	sub_8218CA50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-29644
	ctx.r10.s64 = ctx.r11.s64 + -29644;
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8213E2E8;
	sub_8215BD08(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// stw r9,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r9.u32);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// lwz r3,-8460(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8460);
	// bl 0x820e52a8
	ctx.lr = 0x8213E314;
	sub_820E52A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8213E330"))) PPC_WEAK_FUNC(sub_8213E330);
PPC_FUNC_IMPL(__imp__sub_8213E330) {
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
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-29644
	ctx.r10.s64 = ctx.r11.s64 + -29644;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8213e378
	if (ctx.cr6.eq) goto loc_8213E378;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213E378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213E378:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x8218cc18
	ctx.lr = 0x8213E388;
	sub_8218CC18(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213e3a4
	if (ctx.cr6.eq) goto loc_8213E3A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213E3A0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213E3A4:
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

__attribute__((alias("__imp__sub_8213E3BC"))) PPC_WEAK_FUNC(sub_8213E3BC);
PPC_FUNC_IMPL(__imp__sub_8213E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213E3C0"))) PPC_WEAK_FUNC(sub_8213E3C0);
PPC_FUNC_IMPL(__imp__sub_8213E3C0) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8213e59c
	if (ctx.cr6.gt) goto loc_8213E59C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8213e428
	// bdzf 4*cr6+eq,0x8213e450
	// bdzf 4*cr6+eq,0x8213e480
	// bdzf 4*cr6+eq,0x8213e4b0
	// bdzf 4*cr6+eq,0x8213e4e0
	// bdzf 4*cr6+eq,0x8213e504
	// bne cr6,0x8213e530
	if (!ctx.cr6.eq) goto loc_8213E530;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821411b0
	ctx.lr = 0x8213E414;
	sub_821411B0(ctx, base);
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821403e8
	ctx.lr = 0x8213E41C;
	sub_821403E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x8213e59c
	goto loc_8213E59C;
loc_8213E428:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821406e0
	ctx.lr = 0x8213E434;
	sub_821406E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8213e59c
	if (!ctx.cr6.eq) goto loc_8213E59C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821406e8
	ctx.lr = 0x8213E44C;
	sub_821406E8(ctx, base);
	// b 0x8213e59c
	goto loc_8213E59C;
loc_8213E450:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821406f0
	ctx.lr = 0x8213E45C;
	sub_821406F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213e59c
	if (ctx.cr6.eq) goto loc_8213E59C;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x82140830
	ctx.lr = 0x8213E46C;
	sub_82140830(ctx, base);
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821406f8
	ctx.lr = 0x8213E474;
	sub_821406F8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x8213e59c
	goto loc_8213E59C;
loc_8213E480:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x82140840
	ctx.lr = 0x8213E48C;
	sub_82140840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213e59c
	if (ctx.cr6.eq) goto loc_8213E59C;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x82140400
	ctx.lr = 0x8213E49C;
	sub_82140400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213e59c
	if (ctx.cr6.eq) goto loc_8213E59C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x8213e59c
	goto loc_8213E59C;
loc_8213E4B0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213e4c4
	if (ctx.cr6.eq) goto loc_8213E4C4;
	// bl 0x821ef038
	ctx.lr = 0x8213E4C4;
	sub_821EF038(ctx, base);
loc_8213E4C4:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213e4d4
	if (ctx.cr6.eq) goto loc_8213E4D4;
	// bl 0x8213ee68
	ctx.lr = 0x8213E4D4;
	sub_8213EE68(ctx, base);
loc_8213E4D4:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x8213e59c
	goto loc_8213E59C;
loc_8213E4E0:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213e4f8
	if (ctx.cr6.eq) goto loc_8213E4F8;
	// bl 0x8213e978
	ctx.lr = 0x8213E4F0;
	sub_8213E978(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213e59c
	if (ctx.cr6.eq) goto loc_8213E59C;
loc_8213E4F8:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x8213e59c
	goto loc_8213E59C;
loc_8213E504:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213e524
	if (ctx.cr6.eq) goto loc_8213E524;
	// bl 0x821ef080
	ctx.lr = 0x8213E518;
	sub_821EF080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213e59c
	if (ctx.cr6.eq) goto loc_8213E59C;
	// bl 0x821eedf0
	ctx.lr = 0x8213E524;
	sub_821EEDF0(ctx, base);
loc_8213E524:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x8213e59c
	goto loc_8213E59C;
loc_8213E530:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1428);
	// bl 0x82140690
	ctx.lr = 0x8213E53C;
	sub_82140690(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8213e598
	if (!ctx.cr6.eq) goto loc_8213E598;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8213e598
	if (!ctx.cr6.eq) goto loc_8213E598;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213e578
	if (!ctx.cr6.eq) goto loc_8213E578;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82163640
	ctx.lr = 0x8213E56C;
	sub_82163640(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82163890
	ctx.lr = 0x8213E574;
	sub_82163890(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
loc_8213E578:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x8215ff30
	ctx.lr = 0x8213E584;
	sub_8215FF30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213e59c
	if (ctx.cr6.eq) goto loc_8213E59C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8213E598:
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_8213E59C:
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

__attribute__((alias("__imp__sub_8213E5B4"))) PPC_WEAK_FUNC(sub_8213E5B4);
PPC_FUNC_IMPL(__imp__sub_8213E5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213E5B8"))) PPC_WEAK_FUNC(sub_8213E5B8);
PPC_FUNC_IMPL(__imp__sub_8213E5B8) {
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
	// bl 0x82183078
	ctx.lr = 0x8213E5D0;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8213E5DC;
	sub_821837D0(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-1428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213e608
	if (ctx.cr6.eq) goto loc_8213E608;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213E600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1428, ctx.r11.u32);
loc_8213E608:
	// bl 0x8213e240
	ctx.lr = 0x8213E60C;
	sub_8213E240(ctx, base);
	// lwz r3,-1428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1428);
	// bl 0x82141b70
	ctx.lr = 0x8213E614;
	sub_82141B70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213E61C;
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

__attribute__((alias("__imp__sub_8213E634"))) PPC_WEAK_FUNC(sub_8213E634);
PPC_FUNC_IMPL(__imp__sub_8213E634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213E638"))) PPC_WEAK_FUNC(sub_8213E638);
PPC_FUNC_IMPL(__imp__sub_8213E638) {
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
	// bl 0x82183078
	ctx.lr = 0x8213E654;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8213E660;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8213E664;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213e67c
	if (ctx.cr6.eq) goto loc_8213E67C;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82183448
	ctx.lr = 0x8213E678;
	sub_82183448(ctx, base);
	// b 0x8213e684
	goto loc_8213E684;
loc_8213E67C:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821845a0
	ctx.lr = 0x8213E684;
	sub_821845A0(ctx, base);
loc_8213E684:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213e698
	if (ctx.cr6.eq) goto loc_8213E698;
	// bl 0x8213f2b8
	ctx.lr = 0x8213E690;
	sub_8213F2B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8213e69c
	goto loc_8213E69C;
loc_8213E698:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8213E69C:
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1428);
	// bl 0x82140640
	ctx.lr = 0x8213E6AC;
	sub_82140640(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213E6B4;
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

__attribute__((alias("__imp__sub_8213E6CC"))) PPC_WEAK_FUNC(sub_8213E6CC);
PPC_FUNC_IMPL(__imp__sub_8213E6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213E6D0"))) PPC_WEAK_FUNC(sub_8213E6D0);
PPC_FUNC_IMPL(__imp__sub_8213E6D0) {
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
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// blt cr6,0x8213e704
	if (ctx.cr6.lt) goto loc_8213E704;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4936, ctx.r11.u32);
	// b 0x8213e708
	goto loc_8213E708;
loc_8213E704:
	// bl 0x820eccb8
	ctx.lr = 0x8213E708;
	sub_820ECCB8(ctx, base);
loc_8213E708:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213e784
	if (ctx.cr6.eq) goto loc_8213E784;
	// cmplwi cr6,r31,22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 22, ctx.xer);
	// bne cr6,0x8213e728
	if (!ctx.cr6.eq) goto loc_8213E728;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8213e788
	goto loc_8213E788;
loc_8213E728:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8213e768
	if (ctx.cr6.eq) goto loc_8213E768;
	// cmplwi cr6,r31,29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 29, ctx.xer);
	// beq cr6,0x8213e768
	if (ctx.cr6.eq) goto loc_8213E768;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x8213e768
	if (ctx.cr6.eq) goto loc_8213E768;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// beq cr6,0x8213e768
	if (ctx.cr6.eq) goto loc_8213E768;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// beq cr6,0x8213e768
	if (ctx.cr6.eq) goto loc_8213E768;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// beq cr6,0x8213e768
	if (ctx.cr6.eq) goto loc_8213E768;
	// cmplwi cr6,r31,28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 28, ctx.xer);
	// beq cr6,0x8213e768
	if (ctx.cr6.eq) goto loc_8213E768;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213e788
	goto loc_8213E788;
loc_8213E768:
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bne cr6,0x8213e784
	if (!ctx.cr6.eq) goto loc_8213E784;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-5008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213e788
	if (!ctx.cr6.eq) goto loc_8213E788;
loc_8213E784:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8213E788:
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

__attribute__((alias("__imp__sub_8213E7A0"))) PPC_WEAK_FUNC(sub_8213E7A0);
PPC_FUNC_IMPL(__imp__sub_8213E7A0) {
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
	// lwz r31,-780(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8213e7f0
	if (ctx.cr6.eq) goto loc_8213E7F0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213e7dc
	if (ctx.cr6.eq) goto loc_8213E7DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5cd0
	ctx.lr = 0x8213E7D4;
	sub_820E5CD0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8213e7f0
	if (!ctx.cr6.eq) goto loc_8213E7F0;
loc_8213E7DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822344a8
	ctx.lr = 0x8213E7E4;
	sub_822344A8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8213e7f4
	if (ctx.cr6.eq) goto loc_8213E7F4;
loc_8213E7F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213E7F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213E808"))) PPC_WEAK_FUNC(sub_8213E808);
PPC_FUNC_IMPL(__imp__sub_8213E808) {
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
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8213e8c0
	if (ctx.cr6.gt) goto loc_8213E8C0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8213e85c
	// bdzf 4*cr6+eq,0x8213e8a0
	// bne cr6,0x8213e8b0
	if (!ctx.cr6.eq) goto loc_8213E8B0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213e854
	if (!ctx.cr6.eq) goto loc_8213E854;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821efaa0
	ctx.lr = 0x8213E854;
	sub_821EFAA0(ctx, base);
loc_8213E854:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8213e8bc
	goto loc_8213E8BC;
loc_8213E85C:
	// bl 0x8213e7a0
	ctx.lr = 0x8213E860;
	sub_8213E7A0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8213e8c0
	if (!ctx.cr6.eq) goto loc_8213E8C0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213e8c0
	if (ctx.cr6.eq) goto loc_8213E8C0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,856(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8213e8c0
	if (ctx.cr6.eq) goto loc_8213E8C0;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213e8c0
	if (ctx.cr6.eq) goto loc_8213E8C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8213e8bc
	goto loc_8213E8BC;
loc_8213E8A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e5b8
	ctx.lr = 0x8213E8A8;
	sub_8213E5B8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8213e8bc
	goto loc_8213E8BC;
loc_8213E8B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e638
	ctx.lr = 0x8213E8B8;
	sub_8213E638(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
loc_8213E8BC:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8213E8C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213E8D4"))) PPC_WEAK_FUNC(sub_8213E8D4);
PPC_FUNC_IMPL(__imp__sub_8213E8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213E8D8"))) PPC_WEAK_FUNC(sub_8213E8D8);
PPC_FUNC_IMPL(__imp__sub_8213E8D8) {
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
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213e944
	if (ctx.cr6.eq) goto loc_8213E944;
	// bl 0x82140678
	ctx.lr = 0x8213E904;
	sub_82140678(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213e944
	if (ctx.cr6.eq) goto loc_8213E944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e3c0
	ctx.lr = 0x8213E914;
	sub_8213E3C0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8213e944
	if (!ctx.cr6.eq) goto loc_8213E944;
	// lwz r11,-1428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1816, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8213E944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213E944:
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

__attribute__((alias("__imp__sub_8213E95C"))) PPC_WEAK_FUNC(sub_8213E95C);
PPC_FUNC_IMPL(__imp__sub_8213E95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213E960"))) PPC_WEAK_FUNC(sub_8213E960);
PPC_FUNC_IMPL(__imp__sub_8213E960) {
	PPC_FUNC_PROLOGUE();
	// b 0x8213e808
	sub_8213E808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213E964"))) PPC_WEAK_FUNC(sub_8213E964);
PPC_FUNC_IMPL(__imp__sub_8213E964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213E968"))) PPC_WEAK_FUNC(sub_8213E968);
PPC_FUNC_IMPL(__imp__sub_8213E968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1464);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213E974"))) PPC_WEAK_FUNC(sub_8213E974);
PPC_FUNC_IMPL(__imp__sub_8213E974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213E978"))) PPC_WEAK_FUNC(sub_8213E978);
PPC_FUNC_IMPL(__imp__sub_8213E978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-9764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8213e98c
	if (!ctx.cr6.eq) goto loc_8213E98C;
	// blr 
	return;
loc_8213E98C:
	// b 0x82098510
	sub_82098510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213E990"))) PPC_WEAK_FUNC(sub_8213E990);
PPC_FUNC_IMPL(__imp__sub_8213E990) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x82143010
	sub_82143010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213E998"))) PPC_WEAK_FUNC(sub_8213E998);
PPC_FUNC_IMPL(__imp__sub_8213E998) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,15468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// bl 0x8216dd30
	ctx.lr = 0x8213E9BC;
	sub_8216DD30(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r10.u32);
	// stw r9,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r9.u32);
	// stw r8,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r8.u32);
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213ea08
	if (ctx.cr6.eq) goto loc_8213EA08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213E9F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8213EA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213EA08:
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

__attribute__((alias("__imp__sub_8213EA20"))) PPC_WEAK_FUNC(sub_8213EA20);
PPC_FUNC_IMPL(__imp__sub_8213EA20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8213ea30
	if (!ctx.cr6.eq) goto loc_8213EA30;
	// blr 
	return;
loc_8213EA30:
	// b 0x821434a0
	sub_821434A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213EA34"))) PPC_WEAK_FUNC(sub_8213EA34);
PPC_FUNC_IMPL(__imp__sub_8213EA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213EA38"))) PPC_WEAK_FUNC(sub_8213EA38);
PPC_FUNC_IMPL(__imp__sub_8213EA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// lwz r3,-8552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x820b2ba8
	sub_820B2BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213EA50"))) PPC_WEAK_FUNC(sub_8213EA50);
PPC_FUNC_IMPL(__imp__sub_8213EA50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213EA54"))) PPC_WEAK_FUNC(sub_8213EA54);
PPC_FUNC_IMPL(__imp__sub_8213EA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213EA58"))) PPC_WEAK_FUNC(sub_8213EA58);
PPC_FUNC_IMPL(__imp__sub_8213EA58) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,-4972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4972, ctx.r11.u32);
loc_8213EA78:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821930b0
	ctx.lr = 0x8213EA84;
	sub_821930B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8213ea78
	if (ctx.cr6.lt) goto loc_8213EA78;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213EAA4"))) PPC_WEAK_FUNC(sub_8213EAA4);
PPC_FUNC_IMPL(__imp__sub_8213EAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213EAA8"))) PPC_WEAK_FUNC(sub_8213EAA8);
PPC_FUNC_IMPL(__imp__sub_8213EAA8) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4972, ctx.r11.u32);
	// bl 0x821930c8
	ctx.lr = 0x8213EAC8;
	sub_821930C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8213EACC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821930b0
	ctx.lr = 0x8213EAD8;
	sub_821930B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8213eacc
	if (ctx.cr6.lt) goto loc_8213EACC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213EAF8"))) PPC_WEAK_FUNC(sub_8213EAF8);
PPC_FUNC_IMPL(__imp__sub_8213EAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8213EB00;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82163ee8
	ctx.lr = 0x8213EB0C;
	sub_82163EE8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
loc_8213EB18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-420(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -420);
	// bl 0x82163a78
	ctx.lr = 0x8213EB24;
	sub_82163A78(ctx, base);
	// bl 0x821012b0
	ctx.lr = 0x8213EB28;
	sub_821012B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x8213eb18
	if (ctx.cr6.lt) goto loc_8213EB18;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8213EB38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-420(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -420);
	// bl 0x82163a60
	ctx.lr = 0x8213EB44;
	sub_82163A60(ctx, base);
	// bl 0x82101208
	ctx.lr = 0x8213EB48;
	sub_82101208(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x8213eb38
	if (ctx.cr6.lt) goto loc_8213EB38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r24,-32178
	ctx.r24.s64 = -2108817408;
	// lfs f31,13912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13912);
	ctx.f31.f64 = double(temp.f32);
loc_8213EB64:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8213eb78
	if (!ctx.cr6.eq) goto loc_8213EB78;
	// lhz r28,3348(r25)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r25.u32 + 3348);
	// lwz r27,3352(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3352);
	// b 0x8213eb80
	goto loc_8213EB80;
loc_8213EB78:
	// lhz r28,3360(r25)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r25.u32 + 3360);
	// lwz r27,3364(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3364);
loc_8213EB80:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-420(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -420);
	// bl 0x82163a60
	ctx.lr = 0x8213EB8C;
	sub_82163A60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82101208
	ctx.lr = 0x8213EB94;
	sub_82101208(ctx, base);
	// clrlwi r29,r30,24
	ctx.r29.u64 = ctx.r30.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82231530
	ctx.lr = 0x8213EBAC;
	sub_82231530(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82230c00
	ctx.lr = 0x8213EBB8;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213ebd0
	if (ctx.cr6.eq) goto loc_8213EBD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1088(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1088);
	// bl 0x82230668
	ctx.lr = 0x8213EBCC;
	sub_82230668(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8213EBD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215c050
	ctx.lr = 0x8213EBD8;
	sub_8215C050(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-420(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -420);
	// bl 0x82163a78
	ctx.lr = 0x8213EBE8;
	sub_82163A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821012b0
	ctx.lr = 0x8213EBF0;
	sub_821012B0(ctx, base);
	// stb r29,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r29.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82230b90
	ctx.lr = 0x8213EBFC;
	sub_82230B90(ctx, base);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82231530
	ctx.lr = 0x8213EC30;
	sub_82231530(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215c060
	ctx.lr = 0x8213EC3C;
	sub_8215C060(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8213ec5c
	if (!ctx.cr6.eq) goto loc_8213EC5C;
	// bl 0x8215bd08
	ctx.lr = 0x8213EC4C;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r10.u8);
	// b 0x8213ec78
	goto loc_8213EC78;
loc_8213EC5C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8213ec78
	if (!ctx.cr6.eq) goto loc_8213EC78;
	// bl 0x8215bd08
	ctx.lr = 0x8213EC68;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r9.u8);
loc_8213EC78:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x8213eb64
	if (ctx.cr6.lt) goto loc_8213EB64;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,14516(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14516);
	// bl 0x82166158
	ctx.lr = 0x8213EC90;
	sub_82166158(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r5,3348(r25)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r25.u32 + 3348);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,1088(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1088);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230860
	ctx.lr = 0x8213ECA8;
	sub_82230860(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r5,3360(r25)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r25.u32 + 3360);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230860
	ctx.lr = 0x8213ECBC;
	sub_82230860(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x8213ECC0;
	sub_8215BD08(ctx, base);
	// bl 0x8216ce40
	ctx.lr = 0x8213ECC4;
	sub_8216CE40(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8213ECD0"))) PPC_WEAK_FUNC(sub_8213ECD0);
PPC_FUNC_IMPL(__imp__sub_8213ECD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213ECD8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8213ed94
	if (ctx.cr6.gt) goto loc_8213ED94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8213ed20
	// bdzf 4*cr6+eq,0x8213ed30
	// bne cr6,0x8213ed40
	if (!ctx.cr6.eq) goto loc_8213ED40;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8213ED20:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8213ED30:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8213ED40:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213ed60
	if (ctx.cr6.eq) goto loc_8213ED60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213ED60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213ED60:
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8213ed88
	if (ctx.cr6.eq) goto loc_8213ED88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143128
	ctx.lr = 0x8213ED7C;
	sub_82143128(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8213ED88;
	sub_82183E40(ctx, base);
loc_8213ED88:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_8213ED94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213ED9C"))) PPC_WEAK_FUNC(sub_8213ED9C);
PPC_FUNC_IMPL(__imp__sub_8213ED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213EDA0"))) PPC_WEAK_FUNC(sub_8213EDA0);
PPC_FUNC_IMPL(__imp__sub_8213EDA0) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ede8
	if (ctx.cr6.eq) goto loc_8213EDE8;
	// lis r4,21328
	ctx.r4.s64 = 1397751808;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,17491
	ctx.r4.u64 = ctx.r4.u64 | 17491;
	// bl 0x821882d0
	ctx.lr = 0x8213EDCC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213ede8
	if (ctx.cr6.eq) goto loc_8213EDE8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ede8
	if (ctx.cr6.eq) goto loc_8213EDE8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
loc_8213EDE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213EDF8"))) PPC_WEAK_FUNC(sub_8213EDF8);
PPC_FUNC_IMPL(__imp__sub_8213EDF8) {
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
	// lwz r11,-9764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ee54
	if (ctx.cr6.eq) goto loc_8213EE54;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,-7488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// bl 0x821ad8c8
	ctx.lr = 0x8213EE2C;
	sub_821AD8C8(ctx, base);
	// lwz r3,-9764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9764);
	// bl 0x82098498
	ctx.lr = 0x8213EE34;
	sub_82098498(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,-1464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213ee54
	if (ctx.cr6.eq) goto loc_8213EE54;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-18236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18236);
	// bl 0x82094dd0
	ctx.lr = 0x8213EE54;
	sub_82094DD0(ctx, base);
loc_8213EE54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213EE68"))) PPC_WEAK_FUNC(sub_8213EE68);
PPC_FUNC_IMPL(__imp__sub_8213EE68) {
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
	// lis r4,17985
	ctx.r4.s64 = 1178664960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,17477
	ctx.r4.u64 = ctx.r4.u64 | 17477;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x8213EE98;
	sub_821882D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213eeac
	if (ctx.cr6.eq) goto loc_8213EEAC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8213eeb0
	goto loc_8213EEB0;
loc_8213EEAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8213EEB0:
	// bl 0x820f2688
	ctx.lr = 0x8213EEB4;
	sub_820F2688(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,-8668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8668, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8213EEEC"))) PPC_WEAK_FUNC(sub_8213EEEC);
PPC_FUNC_IMPL(__imp__sub_8213EEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213EEF0"))) PPC_WEAK_FUNC(sub_8213EEF0);
PPC_FUNC_IMPL(__imp__sub_8213EEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-1428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1428);
	// lfs f13,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213ef40
	if (ctx.cr6.eq) goto loc_8213EF40;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x8213ef40
	if (ctx.cr6.eq) goto loc_8213EF40;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x8213ef60
	if (!ctx.cr6.gt) goto loc_8213EF60;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// b 0x8213ef60
	goto loc_8213EF60;
loc_8213EF40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,9852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x8213ef60
	if (!ctx.cr6.lt) goto loc_8213EF60;
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
loc_8213EF60:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// beq cr6,0x8213efcc
	if (ctx.cr6.eq) goto loc_8213EFCC;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213efcc
	if (ctx.cr6.eq) goto loc_8213EFCC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,276(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f0,26104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29620(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29620);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r6,288(r11)
	PPC_STORE_U64(ctx.r11.u32 + 288, ctx.r6.u64);
	// std r5,296(r11)
	PPC_STORE_U64(ctx.r11.u32 + 296, ctx.r5.u64);
	// blr 
	return;
loc_8213EFCC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213EFD8"))) PPC_WEAK_FUNC(sub_8213EFD8);
PPC_FUNC_IMPL(__imp__sub_8213EFD8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,15485
	ctx.r10.s64 = 15485;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,50
	ctx.r8.s64 = 50;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r3,-5064(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -5064);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82104820
	ctx.lr = 0x8213F034;
	sub_82104820(ctx, base);
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-4900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4900);
	// bl 0x820ee1d8
	ctx.lr = 0x8213F044;
	sub_820EE1D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213F054"))) PPC_WEAK_FUNC(sub_8213F054);
PPC_FUNC_IMPL(__imp__sub_8213F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213F058"))) PPC_WEAK_FUNC(sub_8213F058);
PPC_FUNC_IMPL(__imp__sub_8213F058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f0a0
	if (ctx.cr6.eq) goto loc_8213F0A0;
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213f0a0
	if (ctx.cr6.eq) goto loc_8213F0A0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8213f0a0
	if (!ctx.cr6.eq) goto loc_8213F0A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f0a0
	if (ctx.cr6.eq) goto loc_8213F0A0;
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,15485
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15485, ctx.xer);
	// bne cr6,0x8213f0a0
	if (!ctx.cr6.eq) goto loc_8213F0A0;
	// lwz r3,1140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	// blr 
	return;
loc_8213F0A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213F0A8"))) PPC_WEAK_FUNC(sub_8213F0A8);
PPC_FUNC_IMPL(__imp__sub_8213F0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8213F0B0;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,14520(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f0d0
	if (ctx.cr6.eq) goto loc_8213F0D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82167158
	ctx.lr = 0x8213F0D0;
	sub_82167158(ctx, base);
loc_8213F0D0:
	// lis r24,-32185
	ctx.r24.s64 = -2109276160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-18236(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18236);
	// bl 0x82094db0
	ctx.lr = 0x8213F0E4;
	sub_82094DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-18236(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18236);
	// bl 0x82094dd0
	ctx.lr = 0x8213F0F0;
	sub_82094DD0(ctx, base);
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
	ctx.lr = 0x8213F108;
	sub_821882D0(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f11c
	if (ctx.cr6.eq) goto loc_8213F11C;
	// lwz r28,24(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8213f120
	goto loc_8213F120;
loc_8213F11C:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8213F120:
	// bl 0x820f0ef0
	ctx.lr = 0x8213F124;
	sub_820F0EF0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r26,r11,-5052
	ctx.r26.s64 = ctx.r11.s64 + -5052;
	// beq cr6,0x8213f1bc
	if (ctx.cr6.eq) goto loc_8213F1BC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f1bc
	if (ctx.cr6.eq) goto loc_8213F1BC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r29,9
	ctx.r29.s64 = 9;
loc_8213F148:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f1b0
	if (ctx.cr6.eq) goto loc_8213F1B0;
	// addi r31,r11,1248
	ctx.r31.s64 = ctx.r11.s64 + 1248;
	// lis r4,21061
	ctx.r4.s64 = 1380253696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// bl 0x821882d0
	ctx.lr = 0x8213F168;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f184
	if (ctx.cr6.eq) goto loc_8213F184;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8213f184
	if (ctx.cr6.eq) goto loc_8213F184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820f09e8
	ctx.lr = 0x8213F184;
	sub_820F09E8(ctx, base);
loc_8213F184:
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// bl 0x821882d0
	ctx.lr = 0x8213F194;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f1b0
	if (ctx.cr6.eq) goto loc_8213F1B0;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8213f1b0
	if (ctx.cr6.eq) goto loc_8213F1B0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820f09e8
	ctx.lr = 0x8213F1B0;
	sub_820F09E8(ctx, base);
loc_8213F1B0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8213f148
	if (!ctx.cr0.eq) goto loc_8213F148;
loc_8213F1BC:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r9,r26,4
	ctx.r9.s64 = ctx.r26.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// addi r10,r11,-20416
	ctx.r10.s64 = ctx.r11.s64 + -20416;
loc_8213F1D0:
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f1fc
	if (ctx.cr6.eq) goto loc_8213F1FC;
	// lwz r11,1476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1476);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8213f1fc
	if (ctx.cr6.eq) goto loc_8213F1FC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f1fc
	if (ctx.cr6.eq) goto loc_8213F1FC;
	// stw r25,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r25.u32);
loc_8213F1FC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f228
	if (ctx.cr6.eq) goto loc_8213F228;
	// lwz r11,1476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1476);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8213f228
	if (ctx.cr6.eq) goto loc_8213F228;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f228
	if (ctx.cr6.eq) goto loc_8213F228;
	// stw r25,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r25.u32);
loc_8213F228:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f254
	if (ctx.cr6.eq) goto loc_8213F254;
	// lwz r11,1476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1476);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8213f254
	if (ctx.cr6.eq) goto loc_8213F254;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f254
	if (ctx.cr6.eq) goto loc_8213F254;
	// stw r25,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r25.u32);
loc_8213F254:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// bdnz 0x8213f1d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213F1D0;
	// lwz r3,-18236(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -18236);
	// bl 0x82094d68
	ctx.lr = 0x8213F264;
	sub_82094D68(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r23)
	PPC_STORE_U32(ctx.r23.u32 + 52, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8213F274"))) PPC_WEAK_FUNC(sub_8213F274);
PPC_FUNC_IMPL(__imp__sub_8213F274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213F278"))) PPC_WEAK_FUNC(sub_8213F278);
PPC_FUNC_IMPL(__imp__sub_8213F278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9fe8
	ctx.lr = 0x8213F2A8;
	sub_821A9FE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213F2B8"))) PPC_WEAK_FUNC(sub_8213F2B8);
PPC_FUNC_IMPL(__imp__sub_8213F2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213F2C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821855f0
	ctx.lr = 0x8213F2CC;
	sub_821855F0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82185740
	ctx.lr = 0x8213F2DC;
	sub_82185740(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,82
	ctx.r4.s64 = 82;
	// bl 0x821859a0
	ctx.lr = 0x8213F2F0;
	sub_821859A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r6,r10,-29592
	ctx.r6.s64 = ctx.r10.s64 + -29592;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r5,r9,-29600
	ctx.r5.s64 = ctx.r9.s64 + -29600;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r4,r8,-29608
	ctx.r4.s64 = ctx.r8.s64 + -29608;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lis r3,-32180
	ctx.r3.s64 = -2108948480;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r30,-1464(r7)
	PPC_STORE_U32(ctx.r7.u32 + -1464, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// lwz r3,15468(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15468);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213f394
	if (!ctx.cr6.eq) goto loc_8213F394;
	// bl 0x8216e390
	ctx.lr = 0x8213F380;
	sub_8216E390(ctx, base);
	// bl 0x82163728
	ctx.lr = 0x8213F384;
	sub_82163728(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8213f394
	if (!ctx.cr6.eq) goto loc_8213F394;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82163a30
	ctx.lr = 0x8213F394;
	sub_82163A30(ctx, base);
loc_8213F394:
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// bl 0x82183850
	ctx.lr = 0x8213F39C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213f3b4
	if (ctx.cr6.eq) goto loc_8213F3B4;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x8213F3B0;
	sub_82183448(ctx, base);
	// b 0x8213f3bc
	goto loc_8213F3BC;
loc_8213F3B4:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x8213F3BC;
	sub_821845A0(ctx, base);
loc_8213F3BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f3cc
	if (ctx.cr6.eq) goto loc_8213F3CC;
	// bl 0x82143068
	ctx.lr = 0x8213F3C8;
	sub_82143068(ctx, base);
	// b 0x8213f3d0
	goto loc_8213F3D0;
loc_8213F3CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8213F3D0:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x8213F3D8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213f3f0
	if (ctx.cr6.eq) goto loc_8213F3F0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x8213F3EC;
	sub_82183448(ctx, base);
	// b 0x8213f3f8
	goto loc_8213F3F8;
loc_8213F3F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8213F3F8;
	sub_821845A0(ctx, base);
loc_8213F3F8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f438
	if (ctx.cr6.eq) goto loc_8213F438;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821859a0
	ctx.lr = 0x8213F414;
	sub_821859A0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r10,-29616
	ctx.r9.s64 = ctx.r10.s64 + -29616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8213F438:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8213F450"))) PPC_WEAK_FUNC(sub_8213F450);
PPC_FUNC_IMPL(__imp__sub_8213F450) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x8213fb38
	sub_8213FB38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213F458"))) PPC_WEAK_FUNC(sub_8213F458);
PPC_FUNC_IMPL(__imp__sub_8213F458) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8213fb38
	sub_8213FB38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213F460"))) PPC_WEAK_FUNC(sub_8213F460);
PPC_FUNC_IMPL(__imp__sub_8213F460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8213F468;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// addi r7,r11,-29592
	ctx.r7.s64 = ctx.r11.s64 + -29592;
	// addi r6,r10,-29600
	ctx.r6.s64 = ctx.r10.s64 + -29600;
	// addi r5,r9,-29608
	ctx.r5.s64 = ctx.r9.s64 + -29608;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,-8976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8976);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// addi r27,r3,20
	ctx.r27.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f4d8
	if (ctx.cr6.eq) goto loc_8213F4D8;
	// lis r4,21328
	ctx.r4.s64 = 1397751808;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,17491
	ctx.r4.u64 = ctx.r4.u64 | 17491;
	// bl 0x821882d0
	ctx.lr = 0x8213F4C0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f4d8
	if (ctx.cr6.eq) goto loc_8213F4D8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f4d8
	if (ctx.cr6.eq) goto loc_8213F4D8;
	// stw r29,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r29.u32);
loc_8213F4D8:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8213F4DC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821930b0
	ctx.lr = 0x8213F4E8;
	sub_821930B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8213f4dc
	if (ctx.cr6.lt) goto loc_8213F4DC;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f514
	if (ctx.cr6.eq) goto loc_8213F514;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213F514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213F514:
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8213f538
	if (ctx.cr6.eq) goto loc_8213F538;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143128
	ctx.lr = 0x8213F52C;
	sub_82143128(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8213F538;
	sub_82183E40(ctx, base);
loc_8213F538:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f55c
	if (ctx.cr6.eq) goto loc_8213F55C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213F55C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213F55C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// stw r29,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r29.u32);
	// lwz r11,-19048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// stw r9,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r9.u32);
	// lwz r3,-9764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f5a0
	if (ctx.cr6.eq) goto loc_8213F5A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213F5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213F5A0:
	// stw r29,-9764(r30)
	PPC_STORE_U32(ctx.r30.u32 + -9764, ctx.r29.u32);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r3,15468(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15468);
	// bl 0x8216dc78
	ctx.lr = 0x8213F5B4;
	sub_8216DC78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82185a50
	ctx.lr = 0x8213F5BC;
	sub_82185A50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821857f0
	ctx.lr = 0x8213F5C4;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185670
	ctx.lr = 0x8213F5CC;
	sub_82185670(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8213F5D4"))) PPC_WEAK_FUNC(sub_8213F5D4);
PPC_FUNC_IMPL(__imp__sub_8213F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213F5D8"))) PPC_WEAK_FUNC(sub_8213F5D8);
PPC_FUNC_IMPL(__imp__sub_8213F5D8) {
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
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x8213F5F8;
	sub_822AA648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822331c8
	ctx.lr = 0x8213F604;
	sub_822331C8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// stb r30,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r30.u8);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r30.u8);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// lwz r31,1092(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1092);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232b60
	ctx.lr = 0x8213F644;
	sub_82232B60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82232ac8
	ctx.lr = 0x8213F650;
	sub_82232AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232a50
	ctx.lr = 0x8213F658;
	sub_82232A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232ab8
	ctx.lr = 0x8213F660;
	sub_82232AB8(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef480
	ctx.lr = 0x8213F66C;
	sub_820EF480(ctx, base);
loc_8213F66C:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,225
	ctx.r5.s64 = 225;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822327a8
	ctx.lr = 0x8213F690;
	sub_822327A8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x8213f66c
	if (ctx.cr6.lt) goto loc_8213F66C;
	// bl 0x82163ee8
	ctx.lr = 0x8213F6A0;
	sub_82163EE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r7,3352(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3352);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r5,3348(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3348);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822327a8
	ctx.lr = 0x8213F6C8;
	sub_822327A8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,3364(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3364);
	// li r8,2
	ctx.r8.s64 = 2;
	// lhz r5,3360(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3360);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822327a8
	ctx.lr = 0x8213F6EC;
	sub_822327A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231e88
	ctx.lr = 0x8213F6FC;
	sub_82231E88(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231e88
	ctx.lr = 0x8213F70C;
	sub_82231E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232530
	ctx.lr = 0x8213F714;
	sub_82232530(ctx, base);
	// bl 0x8213eaf8
	ctx.lr = 0x8213F718;
	sub_8213EAF8(ctx, base);
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

__attribute__((alias("__imp__sub_8213F730"))) PPC_WEAK_FUNC(sub_8213F730);
PPC_FUNC_IMPL(__imp__sub_8213F730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8213F738;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8213f8ec
	if (ctx.cr6.gt) goto loc_8213F8EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8213f78c
	// bdzf 4*cr6+eq,0x8213f8ec
	// bdzf 4*cr6+eq,0x8213f8ec
	// bdzf 4*cr6+eq,0x8213f8ec
	// bdzf 4*cr6+eq,0x8213f8ec
	// bdzf 4*cr6+eq,0x8213f8ec
	// bdzf 4*cr6+eq,0x8213f888
	// bne cr6,0x8213f830
	if (!ctx.cr6.eq) goto loc_8213F830;
	// bl 0x8213f5d8
	ctx.lr = 0x8213F77C;
	sub_8213F5D8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8213F78C:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8213f8ec
	if (!ctx.cr6.eq) goto loc_8213F8EC;
	// li r11,9
	ctx.r11.s64 = 9;
	// lis r31,-32185
	ctx.r31.s64 = -2109276160;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// lwz r3,-18236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18236);
	// bl 0x82094d58
	ctx.lr = 0x8213F7B4;
	sub_82094D58(ctx, base);
	// bl 0x820d4178
	ctx.lr = 0x8213F7B8;
	sub_820D4178(ctx, base);
	// bl 0x820d40d0
	ctx.lr = 0x8213F7BC;
	sub_820D40D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820d4568
	ctx.lr = 0x8213F7C4;
	sub_820D4568(ctx, base);
	// bl 0x820d4440
	ctx.lr = 0x8213F7C8;
	sub_820D4440(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-18236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18236);
	// bl 0x82094db0
	ctx.lr = 0x8213F7D8;
	sub_82094DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-18236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18236);
	// bl 0x82094dd0
	ctx.lr = 0x8213F7E4;
	sub_82094DD0(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r30,-8960(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8960);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8213f820
	if (ctx.cr6.eq) goto loc_8213F820;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8213F7FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a0608
	ctx.lr = 0x8213F808;
	sub_820A0608(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f814
	if (ctx.cr6.eq) goto loc_8213F814;
	// stw r29,2008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2008, ctx.r29.u32);
loc_8213F814:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8213f7fc
	if (ctx.cr6.lt) goto loc_8213F7FC;
loc_8213F820:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8213F830:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r11.u32);
	// bne 0x8213f844
	if (!ctx.cr0.eq) goto loc_8213F844;
	// bl 0x820d45d0
	ctx.lr = 0x8213F844;
	sub_820D45D0(ctx, base);
loc_8213F844:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8213f8ec
	if (!ctx.cr6.lt) goto loc_8213F8EC;
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-18236(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18236);
	// bl 0x82094dd0
	ctx.lr = 0x8213F868;
	sub_82094DD0(ctx, base);
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// lwz r3,14520(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f8ec
	if (ctx.cr6.eq) goto loc_8213F8EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82167158
	ctx.lr = 0x8213F880;
	sub_82167158(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8213F888:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8213F898:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f8cc
	if (ctx.cr6.eq) goto loc_8213F8CC;
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// lwz r3,1964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// bl 0x821882d0
	ctx.lr = 0x8213F8B4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213f8ec
	if (ctx.cr6.eq) goto loc_8213F8EC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f8ec
	if (ctx.cr6.eq) goto loc_8213F8EC;
	// clrlwi r29,r29,31
	ctx.r29.u64 = ctx.r29.u32 & 0x1;
loc_8213F8CC:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,36
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 36, ctx.xer);
	// blt cr6,0x8213f898
	if (ctx.cr6.lt) goto loc_8213F898;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8213f8ec
	if (ctx.cr6.eq) goto loc_8213F8EC;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
loc_8213F8EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8213F8F4"))) PPC_WEAK_FUNC(sub_8213F8F4);
PPC_FUNC_IMPL(__imp__sub_8213F8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213F8F8"))) PPC_WEAK_FUNC(sub_8213F8F8);
PPC_FUNC_IMPL(__imp__sub_8213F8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8213F900;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,-4900(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213fb2c
	if (ctx.cr6.eq) goto loc_8213FB2C;
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213fb2c
	if (ctx.cr6.eq) goto loc_8213FB2C;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// lwz r3,-8532(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213fb2c
	if (ctx.cr6.eq) goto loc_8213FB2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213F944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213fb2c
	if (!ctx.cr6.eq) goto loc_8213FB2C;
	// lwz r3,-8532(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8532);
	// bl 0x820cc6e0
	ctx.lr = 0x8213F954;
	sub_820CC6E0(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x8213f96c
	if (!ctx.cr6.eq) goto loc_8213F96C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821636d8
	ctx.lr = 0x8213F968;
	sub_821636D8(ctx, base);
	// stw r27,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r27.u32);
loc_8213F96C:
	// lwz r3,-8532(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8532);
	// bl 0x820cc6e0
	ctx.lr = 0x8213F974;
	sub_820CC6E0(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8213fa3c
	if (ctx.cr6.eq) goto loc_8213FA3C;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8213fa3c
	if (!ctx.cr6.eq) goto loc_8213FA3C;
	// lwz r11,-1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1464);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8213fa10
	if (!ctx.cr6.eq) goto loc_8213FA10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213f058
	ctx.lr = 0x8213F9A0;
	sub_8213F058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213fb2c
	if (ctx.cr6.eq) goto loc_8213FB2C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-2088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f9c0
	if (ctx.cr6.eq) goto loc_8213F9C0;
	// stw r27,1140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1140, ctx.r27.u32);
	// stw r27,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r27.u32);
loc_8213F9C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82080068
	ctx.lr = 0x8213F9C8;
	sub_82080068(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82104060
	ctx.lr = 0x8213F9D0;
	sub_82104060(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,-4900(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4900);
	// addi r10,r11,11728
	ctx.r10.s64 = ctx.r11.s64 + 11728;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x820ee190
	ctx.lr = 0x8213F9E8;
	sub_820EE190(ctx, base);
	// bl 0x820ae430
	ctx.lr = 0x8213F9EC;
	sub_820AE430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213fa08
	if (ctx.cr6.eq) goto loc_8213FA08;
	// bl 0x820ae430
	ctx.lr = 0x8213F9F8;
	sub_820AE430(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213FA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213FA08:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821837d0
	ctx.lr = 0x8213FA10;
	sub_821837D0(ctx, base);
loc_8213FA10:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// stw r11,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,-1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1464, ctx.r11.u32);
	// lwz r3,-18236(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18236);
	// bl 0x82094dd0
	ctx.lr = 0x8213FA2C;
	sub_82094DD0(ctx, base);
	// bl 0x8208f8e8
	ctx.lr = 0x8213FA30;
	sub_8208F8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213fa3c
	if (!ctx.cr6.eq) goto loc_8213FA3C;
	// bl 0x8208f948
	ctx.lr = 0x8213FA3C;
	sub_8208F948(ctx, base);
loc_8213FA3C:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r11,-1428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213fb2c
	if (!ctx.cr6.eq) goto loc_8213FB2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,40(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8213fb2c
	if (ctx.cr6.gt) goto loc_8213FB2C;
	// lwz r3,-8532(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8532);
	// bl 0x820cc6e0
	ctx.lr = 0x8213FA6C;
	sub_820CC6E0(ctx, base);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x8213fa8c
	if (!ctx.cr6.eq) goto loc_8213FA8C;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213fa8c
	if (!ctx.cr6.eq) goto loc_8213FA8C;
	// lwz r3,92(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// bl 0x821437d8
	ctx.lr = 0x8213FA88;
	sub_821437D8(ctx, base);
	// stw r27,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r27.u32);
loc_8213FA8C:
	// lwz r11,-1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213faac
	if (ctx.cr6.eq) goto loc_8213FAAC;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x8213fb04
	if (ctx.cr6.eq) goto loc_8213FB04;
loc_8213FAAC:
	// lwz r11,-1428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213fb04
	if (!ctx.cr6.eq) goto loc_8213FB04;
	// lwz r11,-4900(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4900);
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213fadc
	if (ctx.cr6.eq) goto loc_8213FADC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,236(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8213fb2c
	if (ctx.cr6.eq) goto loc_8213FB2C;
loc_8213FADC:
	// lwz r3,712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmpwi cr6,r11,15485
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15485, ctx.xer);
	// bne cr6,0x8213fb2c
	if (!ctx.cr6.eq) goto loc_8213FB2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213FAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8213FB04:
	// lwz r11,-4900(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4900);
	// lwz r10,712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213fb2c
	if (ctx.cr6.eq) goto loc_8213FB2C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8213fb2c
	if (!ctx.cr6.eq) goto loc_8213FB2C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213efd8
	ctx.lr = 0x8213FB2C;
	sub_8213EFD8(ctx, base);
loc_8213FB2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8213FB34"))) PPC_WEAK_FUNC(sub_8213FB34);
PPC_FUNC_IMPL(__imp__sub_8213FB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213FB38"))) PPC_WEAK_FUNC(sub_8213FB38);
PPC_FUNC_IMPL(__imp__sub_8213FB38) {
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
	// bl 0x8213f460
	ctx.lr = 0x8213FB58;
	sub_8213F460(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213fb74
	if (ctx.cr6.eq) goto loc_8213FB74;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8213FB70;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213FB74:
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

__attribute__((alias("__imp__sub_8213FB8C"))) PPC_WEAK_FUNC(sub_8213FB8C);
PPC_FUNC_IMPL(__imp__sub_8213FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213FB90"))) PPC_WEAK_FUNC(sub_8213FB90);
PPC_FUNC_IMPL(__imp__sub_8213FB90) {
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
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-4984(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4984, ctx.r11.u32);
	// stw r10,-4976(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4976, ctx.r10.u32);
	// bl 0x8213f5d8
	ctx.lr = 0x8213FBBC;
	sub_8213F5D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82098200
	ctx.lr = 0x8213FBC4;
	sub_82098200(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x8213FBDC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213fbf4
	if (ctx.cr6.eq) goto loc_8213FBF4;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x8213FBF0;
	sub_82183448(ctx, base);
	// b 0x8213fbfc
	goto loc_8213FBFC;
loc_8213FBF4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x8213FBFC;
	sub_821845A0(ctx, base);
loc_8213FBFC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213fc14
	if (ctx.cr6.eq) goto loc_8213FC14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82098b80
	ctx.lr = 0x8213FC0C;
	sub_82098B80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8213fc18
	goto loc_8213FC18;
loc_8213FC14:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8213FC18:
	// bl 0x82183850
	ctx.lr = 0x8213FC1C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8213fc34
	if (ctx.cr6.eq) goto loc_8213FC34;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8213FC30;
	sub_82183448(ctx, base);
	// b 0x8213fc3c
	goto loc_8213FC3C;
loc_8213FC34:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8213FC3C;
	sub_821845A0(ctx, base);
loc_8213FC3C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213fc58
	if (ctx.cr6.eq) goto loc_8213FC58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,7960
	ctx.r10.s64 = ctx.r11.s64 + 7960;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8213fc5c
	goto loc_8213FC5C;
loc_8213FC58:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8213FC5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef488
	ctx.lr = 0x8213FC64;
	sub_820EF488(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -432);
	// bl 0x82162c00
	ctx.lr = 0x8213FC70;
	sub_82162C00(ctx, base);
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

__attribute__((alias("__imp__sub_8213FC84"))) PPC_WEAK_FUNC(sub_8213FC84);
PPC_FUNC_IMPL(__imp__sub_8213FC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213FC88"))) PPC_WEAK_FUNC(sub_8213FC88);
PPC_FUNC_IMPL(__imp__sub_8213FC88) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8213ff60
	if (ctx.cr6.gt) goto loc_8213FF60;
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-824
	ctx.r12.s64 = ctx.r12.s64 + -824;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-784(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + -784);
	// lwz r16,-752(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + -752);
	// lwz r16,-560(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + -560);
	// lwz r16,-520(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + -520);
	// lwz r16,-712(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + -712);
	// lwz r16,-460(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + -460);
	// lwz r16,-312(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + -312);
	// lwz r16,-160(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + -160);
	// lwz r16,-160(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + -160);
	// lwz r16,-252(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + -252);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213fd24
	if (ctx.cr6.eq) goto loc_8213FD24;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8213ff60
	goto loc_8213FF60;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8213ff60
	if (!ctx.cr6.eq) goto loc_8213FF60;
loc_8213FD24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213fb90
	ctx.lr = 0x8213FD2C;
	sub_8213FB90(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8213ff60
	goto loc_8213FF60;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r11,-4900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ff60
	if (ctx.cr6.eq) goto loc_8213FF60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82104060
	ctx.lr = 0x8213FD50;
	sub_82104060(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-4900(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4900);
	// addi r10,r11,11728
	ctx.r10.s64 = ctx.r11.s64 + 11728;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x820ee190
	ctx.lr = 0x8213FD68;
	sub_820EE190(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x8213FD6C;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8213FD78;
	sub_821837D0(ctx, base);
	// li r3,2184
	ctx.r3.s64 = 2184;
	// bl 0x82080000
	ctx.lr = 0x8213FD80;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213fd90
	if (ctx.cr6.eq) goto loc_8213FD90;
	// bl 0x82143690
	ctx.lr = 0x8213FD8C;
	sub_82143690(ctx, base);
	// b 0x8213fd94
	goto loc_8213FD94;
loc_8213FD90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213FD94:
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8213FDA0;
	sub_821837D0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8213fdb8
	if (!ctx.cr6.eq) goto loc_8213FDB8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8213ff60
	goto loc_8213FF60;
loc_8213FDB8:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// stw r11,-1464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1464, ctx.r11.u32);
	// b 0x8213ff60
	goto loc_8213FF60;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213fdec
	if (ctx.cr6.eq) goto loc_8213FDEC;
	// bl 0x820cc6e0
	ctx.lr = 0x8213FDE4;
	sub_820CC6E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8213ff60
	if (ctx.cr6.lt) goto loc_8213FF60;
loc_8213FDEC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8213ff60
	goto loc_8213FF60;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213fe14
	if (ctx.cr6.eq) goto loc_8213FE14;
	// bl 0x820cc6e0
	ctx.lr = 0x8213FE0C;
	sub_820CC6E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8213ff60
	if (ctx.cr6.eq) goto loc_8213FF60;
loc_8213FE14:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r11,-1464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1464, ctx.r11.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// b 0x8213ff60
	goto loc_8213FF60;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ff60
	if (ctx.cr6.eq) goto loc_8213FF60;
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,15485
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15485, ctx.xer);
	// bne cr6,0x8213ff60
	if (!ctx.cr6.eq) goto loc_8213FF60;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8552);
	// bl 0x820b2ba8
	ctx.lr = 0x8213FE64;
	sub_820B2BA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8552);
	// bl 0x820b2bc0
	ctx.lr = 0x8213FE70;
	sub_820B2BC0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x8213FE80;
	sub_8209C630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820f2688
	ctx.lr = 0x8213FE88;
	sub_820F2688(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f2640
	ctx.lr = 0x8213FEA0;
	sub_820F2640(ctx, base);
	// li r8,30
	ctx.r8.s64 = 30;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f28e0
	ctx.lr = 0x8213FEBC;
	sub_820F28E0(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// b 0x8213ff60
	goto loc_8213FF60;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x8213FED8;
	sub_8209C630(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8213ff60
	if (!ctx.cr6.gt) goto loc_8213FF60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ff60
	if (ctx.cr6.eq) goto loc_8213FF60;
	// bl 0x820f2698
	ctx.lr = 0x8213FEF8;
	sub_820F2698(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8213ff60
	goto loc_8213FF60;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x8213FF14;
	sub_8209C630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820f2688
	ctx.lr = 0x8213FF1C;
	sub_820F2688(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f2640
	ctx.lr = 0x8213FF34;
	sub_820F2640(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f28e0
	ctx.lr = 0x8213FF50;
	sub_820F28E0(ctx, base);
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
loc_8213FF60:
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

__attribute__((alias("__imp__sub_8213FF78"))) PPC_WEAK_FUNC(sub_8213FF78);
PPC_FUNC_IMPL(__imp__sub_8213FF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8213FF80;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-9764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82140154
	if (ctx.cr6.eq) goto loc_82140154;
	// bl 0x82098470
	ctx.lr = 0x8213FF9C;
	sub_82098470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f8f8
	ctx.lr = 0x8213FFA4;
	sub_8213F8F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213eef0
	ctx.lr = 0x8213FFAC;
	sub_8213EEF0(ctx, base);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,-1428(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -1428);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,380(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8213fff0
	if (!ctx.cr6.eq) goto loc_8213FFF0;
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82140000
	if (!ctx.cr6.eq) goto loc_82140000;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82140000
	if (ctx.cr6.eq) goto loc_82140000;
	// stw r29,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r29.u32);
	// b 0x82140000
	goto loc_82140000;
loc_8213FFF0:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82140000
	if (ctx.cr6.eq) goto loc_82140000;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
loc_82140000:
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8214004c
	if (ctx.cr6.eq) goto loc_8214004C;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8214003c
	if (!ctx.cr6.eq) goto loc_8214003C;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// lwz r9,14520(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14520);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8214003c
	if (ctx.cr6.eq) goto loc_8214003C;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8214003c
	if (!ctx.cr6.eq) goto loc_8214003C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8214003C:
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8214004c
	if (ctx.cr6.eq) goto loc_8214004C;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_8214004C:
	// lwz r10,-1428(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -1428);
	// lwz r9,380(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 380);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82140108
	if (!ctx.cr6.eq) goto loc_82140108;
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82140108
	if (!ctx.cr6.eq) goto loc_82140108;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r10,-1464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82140108
	if (!ctx.cr6.eq) goto loc_82140108;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,-4972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4972, ctx.r11.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82140154
	if (ctx.cr6.eq) goto loc_82140154;
	// bl 0x821434a0
	ctx.lr = 0x82140094;
	sub_821434A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821400ac
	if (ctx.cr6.eq) goto loc_821400AC;
loc_8214009C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213eaa8
	ctx.lr = 0x821400A4;
	sub_8213EAA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821400AC:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-784(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821400ec
	if (ctx.cr6.eq) goto loc_821400EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821400CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821400ec
	if (!ctx.cr6.eq) goto loc_821400EC;
	// lwz r11,-784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -784);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,34463
	ctx.r9.u64 = ctx.r10.u64 | 34463;
	// lwz r8,1768(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1768);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8214009c
	if (!ctx.cr6.eq) goto loc_8214009C;
loc_821400EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213ea58
	ctx.lr = 0x821400F4;
	sub_8213EA58(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82140108:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213eaa8
	ctx.lr = 0x82140110;
	sub_8213EAA8(ctx, base);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-2032(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82140154
	if (ctx.cr6.eq) goto loc_82140154;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82140154
	if (!ctx.cr6.eq) goto loc_82140154;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8214013C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-2032(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2032);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82140150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_82140154:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

