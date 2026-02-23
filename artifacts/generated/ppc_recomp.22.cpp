#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82147720"))) PPC_WEAK_FUNC(sub_82147720);
PPC_FUNC_IMPL(__imp__sub_82147720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwa r9,0(r6)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r6.u32 + 0));
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,11300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,200(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwa r8,4(r6)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r6.u32 + 4));
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,204(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwa r8,8(r6)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r6.u32 + 8));
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,208(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 208, temp.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwa r8,12(r6)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r6.u32 + 12));
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,212(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821477E4"))) PPC_WEAK_FUNC(sub_821477E4);
PPC_FUNC_IMPL(__imp__sub_821477E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821477E8"))) PPC_WEAK_FUNC(sub_821477E8);
PPC_FUNC_IMPL(__imp__sub_821477E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821477F0;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821478f4
	if (ctx.cr0.eq) goto loc_821478F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x82147814;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x82147820;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82147830;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x8214783C;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,588(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 588);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x821478cc
	if (!ctx.cr6.gt) goto loc_821478CC;
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r10,r10,57732
	ctx.r10.u64 = ctx.r10.u64 | 57732;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,400
	ctx.r4.s64 = 400;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f31,r11,r10
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x8210a9b0
	ctx.lr = 0x82147884;
	sub_8210A9B0(ctx, base);
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821478a4
	if (ctx.cr6.lt) goto loc_821478A4;
	// bne cr6,0x821478cc
	if (!ctx.cr6.eq) goto loc_821478CC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,402
	ctx.r4.s64 = 402;
	// ori r10,r10,58020
	ctx.r10.u64 = ctx.r10.u64 | 58020;
	// b 0x821478b0
	goto loc_821478B0;
loc_821478A4:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,401
	ctx.r4.s64 = 401;
	// ori r10,r10,57876
	ctx.r10.u64 = ctx.r10.u64 | 57876;
loc_821478B0:
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f31,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x8210a9b0
	ctx.lr = 0x821478CC;
	sub_8210A9B0(ctx, base);
loc_821478CC:
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821478dc
	if (ctx.cr6.eq) goto loc_821478DC;
	// bl 0x82154878
	ctx.lr = 0x821478DC;
	sub_82154878(ctx, base);
loc_821478DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x821478E8;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x821478F4;
	sub_821AD498(ctx, base);
loc_821478F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82147900"))) PPC_WEAK_FUNC(sub_82147900);
PPC_FUNC_IMPL(__imp__sub_82147900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82147924"))) PPC_WEAK_FUNC(sub_82147924);
PPC_FUNC_IMPL(__imp__sub_82147924) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82147928"))) PPC_WEAK_FUNC(sub_82147928);
PPC_FUNC_IMPL(__imp__sub_82147928) {
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
	// addi r3,r3,568
	ctx.r3.s64 = ctx.r3.s64 + 568;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x823c3468
	ctx.lr = 0x8214794C;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3cd8
	ctx.lr = 0x82147954;
	sub_823C3CD8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82147968"))) PPC_WEAK_FUNC(sub_82147968);
PPC_FUNC_IMPL(__imp__sub_82147968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82147984"))) PPC_WEAK_FUNC(sub_82147984);
PPC_FUNC_IMPL(__imp__sub_82147984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82147988"))) PPC_WEAK_FUNC(sub_82147988);
PPC_FUNC_IMPL(__imp__sub_82147988) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821563d8
	ctx.lr = 0x821479A4;
	sub_821563D8(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x82147a0c
	if (ctx.cr6.eq) goto loc_82147A0C;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821479C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// mulli r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 * 15;
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228b00
	ctx.lr = 0x821479D4;
	sub_82228B00(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821563f0
	ctx.lr = 0x821479E0;
	sub_821563F0(ctx, base);
	// ld r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x82154fb0
	ctx.lr = 0x821479E8;
	sub_82154FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821479fc
	if (ctx.cr0.eq) goto loc_821479FC;
	// ld r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x82155040
	ctx.lr = 0x821479F8;
	sub_82155040(ctx, base);
	// b 0x82147a0c
	goto loc_82147A0C;
loc_821479FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x82147A0C;
	sub_823C5728(ctx, base);
loc_82147A0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
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

__attribute__((alias("__imp__sub_82147A24"))) PPC_WEAK_FUNC(sub_82147A24);
PPC_FUNC_IMPL(__imp__sub_82147A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82147A28"))) PPC_WEAK_FUNC(sub_82147A28);
PPC_FUNC_IMPL(__imp__sub_82147A28) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821563d8
	ctx.lr = 0x82147A44;
	sub_821563D8(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x82147aac
	if (ctx.cr6.eq) goto loc_82147AAC;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// mulli r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 * 15;
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228b00
	ctx.lr = 0x82147A74;
	sub_82228B00(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821563f0
	ctx.lr = 0x82147A80;
	sub_821563F0(ctx, base);
	// ld r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x82154fb0
	ctx.lr = 0x82147A88;
	sub_82154FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82147a9c
	if (ctx.cr0.eq) goto loc_82147A9C;
	// ld r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x82155040
	ctx.lr = 0x82147A98;
	sub_82155040(ctx, base);
	// b 0x82147aac
	goto loc_82147AAC;
loc_82147A9C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x82147AAC;
	sub_823C5728(ctx, base);
loc_82147AAC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
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

__attribute__((alias("__imp__sub_82147AC4"))) PPC_WEAK_FUNC(sub_82147AC4);
PPC_FUNC_IMPL(__imp__sub_82147AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82147AC8"))) PPC_WEAK_FUNC(sub_82147AC8);
PPC_FUNC_IMPL(__imp__sub_82147AC8) {
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
	// ld r11,648(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 648);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82147c28
	if (ctx.cr6.eq) goto loc_82147C28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,268
	ctx.r3.s64 = ctx.r3.s64 + 268;
	// bl 0x823c3280
	ctx.lr = 0x82147AF4;
	sub_823C3280(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,162
	ctx.r4.s64 = ctx.r3.s64 + 162;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x82147B38;
	sub_82147720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,162
	ctx.r4.s64 = ctx.r3.s64 + 162;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x82147B60;
	sub_82147720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,180
	ctx.r4.s64 = ctx.r3.s64 + 180;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x82147B88;
	sub_82147720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,180
	ctx.r4.s64 = ctx.r3.s64 + 180;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x82147BB0;
	sub_82147720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,198
	ctx.r4.s64 = ctx.r3.s64 + 198;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x82147BD8;
	sub_82147720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,198
	ctx.r4.s64 = ctx.r3.s64 + 198;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x82147C00;
	sub_82147720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,198
	ctx.r4.s64 = ctx.r3.s64 + 198;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x82147C28;
	sub_82147720(ctx, base);
loc_82147C28:
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

__attribute__((alias("__imp__sub_82147C3C"))) PPC_WEAK_FUNC(sub_82147C3C);
PPC_FUNC_IMPL(__imp__sub_82147C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82147C40"))) PPC_WEAK_FUNC(sub_82147C40);
PPC_FUNC_IMPL(__imp__sub_82147C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82147C48;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8218b408
	ctx.lr = 0x82147C58;
	sub_8218B408(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r30,180
	ctx.r30.s64 = 180;
	// li r28,15
	ctx.r28.s64 = 15;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_82147C74:
	// addi r29,r30,-18
	ctx.r29.s64 = ctx.r30.s64 + -18;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82147720
	ctx.lr = 0x82147C8C;
	sub_82147720(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82147720
	ctx.lr = 0x82147CA0;
	sub_82147720(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82147720
	ctx.lr = 0x82147CB4;
	sub_82147720(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82147720
	ctx.lr = 0x82147CC8;
	sub_82147720(ctx, base);
	// addi r29,r30,18
	ctx.r29.s64 = ctx.r30.s64 + 18;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82147720
	ctx.lr = 0x82147CE0;
	sub_82147720(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82147720
	ctx.lr = 0x82147CF4;
	sub_82147720(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82147720
	ctx.lr = 0x82147D08;
	sub_82147720(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82147c74
	if (!ctx.cr0.eq) goto loc_82147C74;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82147D1C"))) PPC_WEAK_FUNC(sub_82147D1C);
PPC_FUNC_IMPL(__imp__sub_82147D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82147D20"))) PPC_WEAK_FUNC(sub_82147D20);
PPC_FUNC_IMPL(__imp__sub_82147D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,256(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r4,162
	ctx.r11.s64 = ctx.r4.s64 + 162;
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 * 12;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82147d70
	if (!ctx.cr6.gt) goto loc_82147D70;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82147D48:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82147d48
	if (ctx.cr6.lt) goto loc_82147D48;
loc_82147D70:
	// lwz r7,256(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r4,180
	ctx.r11.s64 = ctx.r4.s64 + 180;
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 * 12;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82147dc0
	if (!ctx.cr6.gt) goto loc_82147DC0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82147D98:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82147d98
	if (ctx.cr6.lt) goto loc_82147D98;
loc_82147DC0:
	// lwz r7,256(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r4,198
	ctx.r11.s64 = ctx.r4.s64 + 198;
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 * 12;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82147DE8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82147de8
	if (ctx.cr6.lt) goto loc_82147DE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82147E14"))) PPC_WEAK_FUNC(sub_82147E14);
PPC_FUNC_IMPL(__imp__sub_82147E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82147E18"))) PPC_WEAK_FUNC(sub_82147E18);
PPC_FUNC_IMPL(__imp__sub_82147E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,2124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82147e58
	if (!ctx.cr6.gt) goto loc_82147E58;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82147E34:
	// lwz r11,2128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,2124(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82147e34
	if (ctx.cr6.lt) goto loc_82147E34;
loc_82147E58:
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,2340(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82147e98
	if (!ctx.cr6.gt) goto loc_82147E98;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82147E74:
	// lwz r11,2344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2344);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,2340(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82147e74
	if (ctx.cr6.lt) goto loc_82147E74;
loc_82147E98:
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,2556(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2556);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82147EB4:
	// lwz r11,2560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2560);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,2556(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2556);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82147eb4
	if (ctx.cr6.lt) goto loc_82147EB4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82147EDC"))) PPC_WEAK_FUNC(sub_82147EDC);
PPC_FUNC_IMPL(__imp__sub_82147EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82147EE0"))) PPC_WEAK_FUNC(sub_82147EE0);
PPC_FUNC_IMPL(__imp__sub_82147EE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r11,-28904
	ctx.r7.s64 = ctx.r11.s64 + -28904;
loc_82147EF8:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82147f20
	if (ctx.cr6.lt) goto loc_82147F20;
	// lwz r6,256(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
loc_82147F20:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82147ef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82147EF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82147F2C"))) PPC_WEAK_FUNC(sub_82147F2C);
PPC_FUNC_IMPL(__imp__sub_82147F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82147F30"))) PPC_WEAK_FUNC(sub_82147F30);
PPC_FUNC_IMPL(__imp__sub_82147F30) {
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
	// lwz r11,616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 616);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// li r9,521
	ctx.r9.s64 = 521;
	// li r8,522
	ctx.r8.s64 = 522;
	// li r7,523
	ctx.r7.s64 = 523;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// li r9,524
	ctx.r9.s64 = 524;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,525
	ctx.r8.s64 = 525;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r7,526
	ctx.r7.s64 = 526;
	// li r4,930
	ctx.r4.s64 = 930;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x82147FA4;
	sub_82106F58(ctx, base);
	// bl 0x821560d0
	ctx.lr = 0x82147FA8;
	sub_821560D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82147FAC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147d20
	ctx.lr = 0x82147FB8;
	sub_82147D20(ctx, base);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// blt cr6,0x82147fac
	if (ctx.cr6.lt) goto loc_82147FAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82147e18
	ctx.lr = 0x82147FCC;
	sub_82147E18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82147ee0
	ctx.lr = 0x82147FD4;
	sub_82147EE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82147ee0
	ctx.lr = 0x82147FDC;
	sub_82147EE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82147FFC"))) PPC_WEAK_FUNC(sub_82147FFC);
PPC_FUNC_IMPL(__imp__sub_82147FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82148000"))) PPC_WEAK_FUNC(sub_82148000);
PPC_FUNC_IMPL(__imp__sub_82148000) {
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
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214a978
	ctx.lr = 0x82148024;
	sub_8214A978(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82148060
	if (ctx.cr6.eq) goto loc_82148060;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8214803c
	if (ctx.cr6.eq) goto loc_8214803C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82148094
	if (!ctx.cr6.eq) goto loc_82148094;
loc_8214803C:
	// bl 0x821560d0
	ctx.lr = 0x82148040;
	sub_821560D0(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82148050
	if (ctx.cr6.eq) goto loc_82148050;
	// bl 0x82154aa8
	ctx.lr = 0x82148050;
	sub_82154AA8(ctx, base);
loc_82148050:
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214aa28
	ctx.lr = 0x82148058;
	sub_8214AA28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82148078
	goto loc_82148078;
loc_82148060:
	// bl 0x821560d0
	ctx.lr = 0x82148064;
	sub_821560D0(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82148074
	if (ctx.cr6.eq) goto loc_82148074;
	// bl 0x82154aa8
	ctx.lr = 0x82148074;
	sub_82154AA8(ctx, base);
loc_82148074:
	// li r4,30200
	ctx.r4.s64 = 30200;
loc_82148078:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82155bd0
	ctx.lr = 0x82148084;
	sub_82155BD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
loc_82148094:
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

__attribute__((alias("__imp__sub_821480AC"))) PPC_WEAK_FUNC(sub_821480AC);
PPC_FUNC_IMPL(__imp__sub_821480AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821480B0"))) PPC_WEAK_FUNC(sub_821480B0);
PPC_FUNC_IMPL(__imp__sub_821480B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821480B8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r11,-28904
	ctx.r8.s64 = ctx.r11.s64 + -28904;
loc_821480D8:
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82148104
	if (ctx.cr6.lt) goto loc_82148104;
	// lwz r6,256(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
loc_82148104:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x821480d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821480D8;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r3,256(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82106eb0
	ctx.lr = 0x82148124;
	sub_82106EB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82148158
	if (ctx.cr0.eq) goto loc_82148158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d38e8
	ctx.lr = 0x82148134;
	sub_821D38E8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821d2d38
	ctx.lr = 0x82148158;
	sub_821D2D38(ctx, base);
loc_82148158:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82148178
	if (ctx.cr6.lt) goto loc_82148178;
	// lwz r10,256(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// rlwinm r11,r30,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r9.u32);
loc_82148178:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82148180"))) PPC_WEAK_FUNC(sub_82148180);
PPC_FUNC_IMPL(__imp__sub_82148180) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r10.u32);
	// beq cr6,0x821481ac
	if (ctx.cr6.eq) goto loc_821481AC;
	// li r4,16000
	ctx.r4.s64 = 16000;
	// bl 0x82154c38
	ctx.lr = 0x821481AC;
	sub_82154C38(ctx, base);
loc_821481AC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214a800
	ctx.lr = 0x821481B8;
	sub_8214A800(ctx, base);
	// bl 0x82156160
	ctx.lr = 0x821481BC;
	sub_82156160(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821481CC"))) PPC_WEAK_FUNC(sub_821481CC);
PPC_FUNC_IMPL(__imp__sub_821481CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821481D0"))) PPC_WEAK_FUNC(sub_821481D0);
PPC_FUNC_IMPL(__imp__sub_821481D0) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r3,-744(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -744);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8214824c
	if (ctx.cr6.eq) goto loc_8214824C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82148254
	if (!ctx.cr6.eq) goto loc_82148254;
	// bl 0x82222168
	ctx.lr = 0x8214820C;
	sub_82222168(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82148240
	if (!ctx.cr0.eq) goto loc_82148240;
	// bl 0x821560d0
	ctx.lr = 0x82148218;
	sub_821560D0(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82148228
	if (ctx.cr6.eq) goto loc_82148228;
	// bl 0x82154aa8
	ctx.lr = 0x82148228;
	sub_82154AA8(ctx, base);
loc_82148228:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30515
	ctx.r4.s64 = 30515;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82155bd0
	ctx.lr = 0x82148238;
	sub_82155BD0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82148244
	goto loc_82148244;
loc_82148240:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82148244:
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// b 0x82148254
	goto loc_82148254;
loc_8214824C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148000
	ctx.lr = 0x82148254;
	sub_82148000(ctx, base);
loc_82148254:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82148268"))) PPC_WEAK_FUNC(sub_82148268);
PPC_FUNC_IMPL(__imp__sub_82148268) {
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
	ctx.lr = 0x82148284;
	sub_821EBAA8(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// beq cr6,0x821482a0
	if (ctx.cr6.eq) goto loc_821482A0;
	// li r4,16000
	ctx.r4.s64 = 16000;
	// bl 0x82154c38
	ctx.lr = 0x821482A0;
	sub_82154C38(ctx, base);
loc_821482A0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214a7e0
	ctx.lr = 0x821482AC;
	sub_8214A7E0(ctx, base);
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821482cc
	if (ctx.cr6.lt) goto loc_821482CC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x821482d0
	if (!ctx.cr6.lt) goto loc_821482D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821482d0
	goto loc_821482D0;
loc_821482CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821482D0:
	// bl 0x82156260
	ctx.lr = 0x821482D4;
	sub_82156260(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821482E8"))) PPC_WEAK_FUNC(sub_821482E8);
PPC_FUNC_IMPL(__imp__sub_821482E8) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82148360
	if (ctx.cr6.eq) goto loc_82148360;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82148368
	if (!ctx.cr6.eq) goto loc_82148368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228b00
	ctx.lr = 0x82148320;
	sub_82228B00(ctx, base);
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82148340
	if (ctx.cr6.lt) goto loc_82148340;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82148344
	if (!ctx.cr6.lt) goto loc_82148344;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82148344
	goto loc_82148344;
loc_82148340:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82148344:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82156418
	ctx.lr = 0x8214834C;
	sub_82156418(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r11,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r11.u64);
	// b 0x82148368
	goto loc_82148368;
loc_82148360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148000
	ctx.lr = 0x82148368;
	sub_82148000(ctx, base);
loc_82148368:
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

__attribute__((alias("__imp__sub_8214837C"))) PPC_WEAK_FUNC(sub_8214837C);
PPC_FUNC_IMPL(__imp__sub_8214837C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82148380"))) PPC_WEAK_FUNC(sub_82148380);
PPC_FUNC_IMPL(__imp__sub_82148380) {
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
	ctx.lr = 0x8214839C;
	sub_821EBAA8(ctx, base);
	// lwz r10,668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// mulli r10,r10,45
	ctx.r10.s64 = ctx.r10.s64 * 45;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// std r10,640(r31)
	PPC_STORE_U64(ctx.r31.u32 + 640, ctx.r10.u64);
	// beq cr6,0x821483c0
	if (ctx.cr6.eq) goto loc_821483C0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8214844c
	if (!ctx.cr6.eq) goto loc_8214844C;
loc_821483C0:
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821483dc
	if (ctx.cr6.lt) goto loc_821483DC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x821483e0
	if (!ctx.cr6.lt) goto loc_821483E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821483e0
	goto loc_821483E0;
loc_821483DC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821483E0:
	// bl 0x821564c0
	ctx.lr = 0x821483E4;
	sub_821564C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82148428
	if (!ctx.cr0.eq) goto loc_82148428;
	// bl 0x821560d0
	ctx.lr = 0x821483F0;
	sub_821560D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147e18
	ctx.lr = 0x821483FC;
	sub_82147E18(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214840c
	if (ctx.cr6.eq) goto loc_8214840C;
	// bl 0x82154aa8
	ctx.lr = 0x8214840C;
	sub_82154AA8(ctx, base);
loc_8214840C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30516
	ctx.r4.s64 = 30516;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82155bd0
	ctx.lr = 0x8214841C;
	sub_82155BD0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// b 0x821484bc
	goto loc_821484BC;
loc_82148428:
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214844c
	if (ctx.cr6.eq) goto loc_8214844C;
	// ld r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 632);
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// mulli r11,r11,45
	ctx.r11.s64 = ctx.r11.s64 * 45;
	// std r11,640(r31)
	PPC_STORE_U64(ctx.r31.u32 + 640, ctx.r11.u64);
loc_8214844C:
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82148468
	if (ctx.cr6.eq) goto loc_82148468;
	// li r4,16000
	ctx.r4.s64 = 16000;
	// bl 0x82154c38
	ctx.lr = 0x82148468;
	sub_82154C38(ctx, base);
loc_82148468:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214a7e0
	ctx.lr = 0x82148474;
	sub_8214A7E0(ctx, base);
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82148494
	if (ctx.cr6.lt) goto loc_82148494;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82148498
	if (!ctx.cr6.lt) goto loc_82148498;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82148498
	goto loc_82148498;
loc_82148494:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82148498:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821484a8
	if (ctx.cr6.eq) goto loc_821484A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821484b0
	if (!ctx.cr6.eq) goto loc_821484B0;
loc_821484A8:
	// bl 0x821562c8
	ctx.lr = 0x821484AC;
	sub_821562C8(ctx, base);
	// b 0x821484bc
	goto loc_821484BC;
loc_821484B0:
	// ld r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 640);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82156230
	ctx.lr = 0x821484BC;
	sub_82156230(ctx, base);
loc_821484BC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821484D0"))) PPC_WEAK_FUNC(sub_821484D0);
PPC_FUNC_IMPL(__imp__sub_821484D0) {
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
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82148630
	if (ctx.cr6.eq) goto loc_82148630;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82148638
	if (!ctx.cr6.eq) goto loc_82148638;
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82148510
	if (ctx.cr6.eq) goto loc_82148510;
	// bl 0x82154aa8
	ctx.lr = 0x82148510;
	sub_82154AA8(ctx, base);
loc_82148510:
	// bl 0x821563d8
	ctx.lr = 0x82148514;
	sub_821563D8(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x82148568
	if (!ctx.cr6.eq) goto loc_82148568;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147ee0
	ctx.lr = 0x8214852C;
	sub_82147EE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82147ee0
	ctx.lr = 0x82148534;
	sub_82147EE0(ctx, base);
	// bl 0x82147e18
	ctx.lr = 0x82148538;
	sub_82147E18(ctx, base);
	// bl 0x821560d0
	ctx.lr = 0x8214853C;
	sub_821560D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30514
	ctx.r4.s64 = 30514;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82155bd0
	ctx.lr = 0x8214854C;
	sub_82155BD0(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214855c
	if (ctx.cr6.eq) goto loc_8214855C;
	// bl 0x82154aa8
	ctx.lr = 0x8214855C;
	sub_82154AA8(ctx, base);
loc_8214855C:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// b 0x82148638
	goto loc_82148638;
loc_82148568:
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82148588
	if (ctx.cr6.lt) goto loc_82148588;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8214858c
	if (!ctx.cr6.lt) goto loc_8214858C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214858c
	goto loc_8214858C;
loc_82148588:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214858C:
	// bl 0x821564c0
	ctx.lr = 0x82148590;
	sub_821564C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bne 0x821485a4
	if (!ctx.cr0.eq) goto loc_821485A4;
	// li r4,1
	ctx.r4.s64 = 1;
loc_821485A4:
	// bl 0x82147e18
	ctx.lr = 0x821485A8;
	sub_82147E18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147ee0
	ctx.lr = 0x821485B8;
	sub_82147EE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82147ee0
	ctx.lr = 0x821485C0;
	sub_82147EE0(ctx, base);
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r10,7
	ctx.r10.s64 = 7;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// beq cr6,0x821485dc
	if (ctx.cr6.eq) goto loc_821485DC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82148638
	if (!ctx.cr6.eq) goto loc_82148638;
loc_821485DC:
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82148638
	if (ctx.cr6.eq) goto loc_82148638;
	// ld r10,632(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 632);
	// li r8,45
	ctx.r8.s64 = 45;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// divdu r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 / ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulli r7,r7,45
	ctx.r7.s64 = ctx.r7.s64 * 45;
	// divw r6,r10,r9
	ctx.r6.s32 = ctx.r10.s32 / ctx.r9.s32;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mulli r6,r6,15
	ctx.r6.s64 = ctx.r6.s64 * 15;
	// divdu r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 / ctx.r9.u64;
	// divdu r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 / ctx.r8.u64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stw r9,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r9.u32);
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// b 0x82148638
	goto loc_82148638;
loc_82148630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148000
	ctx.lr = 0x82148638;
	sub_82148000(ctx, base);
loc_82148638:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214864C"))) PPC_WEAK_FUNC(sub_8214864C);
PPC_FUNC_IMPL(__imp__sub_8214864C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82148650"))) PPC_WEAK_FUNC(sub_82148650);
PPC_FUNC_IMPL(__imp__sub_82148650) {
	PPC_FUNC_PROLOGUE();
	// li r10,15
	ctx.r10.s64 = 15;
	// li r11,2376
	ctx.r11.s64 = 2376;
	// li r7,6
	ctx.r7.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82148664:
	// lwz r6,256(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r9,r11,-432
	ctx.r9.s64 = ctx.r11.s64 + -432;
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,984(r8)
	PPC_STORE_U32(ctx.r8.u32 + 984, ctx.r10.u32);
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,1004(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1004, ctx.r10.u32);
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r7,1510(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1510, ctx.r7.u8);
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,1496(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1496, ctx.r10.u32);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r10,1516(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1516, ctx.r10.u32);
	// bdnz 0x82148664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82148664;
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,2128(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2128);
	// stw r10,984(r9)
	PPC_STORE_U32(ctx.r9.u32 + 984, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,2128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2128);
	// stw r10,1004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1004, ctx.r10.u32);
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,2560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2560);
	// stb r7,1510(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1510, ctx.r7.u8);
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,2560(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2560);
	// stw r10,1496(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1496, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,2560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2560);
	// stw r10,1516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1516, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82148718"))) PPC_WEAK_FUNC(sub_82148718);
PPC_FUNC_IMPL(__imp__sub_82148718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82148720;
	sub_8224878C(ctx, base);
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
	// addi r11,r11,-28680
	ctx.r11.s64 = ctx.r11.s64 + -28680;
	// addi r10,r10,-28816
	ctx.r10.s64 = ctx.r10.s64 + -28816;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r3,28
	ctx.r29.s64 = ctx.r3.s64 + 28;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r3,692(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// bl 0x821ebaa8
	ctx.lr = 0x8214874C;
	sub_821EBAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148650
	ctx.lr = 0x82148754;
	sub_82148650(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x82148758;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82148770
	if (!ctx.cr6.eq) goto loc_82148770;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82221280
	ctx.lr = 0x82148770;
	sub_82221280(ctx, base);
loc_82148770:
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82148790
	if (ctx.cr6.eq) goto loc_82148790;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82148790:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821487b8
	if (ctx.cr6.eq) goto loc_821487B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821487B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821487B8:
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821487cc
	if (ctx.cr6.eq) goto loc_821487CC;
	// bl 0x82145890
	ctx.lr = 0x821487CC;
	sub_82145890(ctx, base);
loc_821487CC:
	// bl 0x8215bd60
	ctx.lr = 0x821487D0;
	sub_8215BD60(ctx, base);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x823c3048
	ctx.lr = 0x821487DC;
	sub_823C3048(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x823c31a0
	ctx.lr = 0x821487E4;
	sub_823C31A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c52a0
	ctx.lr = 0x821487EC;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x821487F4;
	sub_823C3BC0(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8209eda0
	ctx.lr = 0x821487FC;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82148804"))) PPC_WEAK_FUNC(sub_82148804);
PPC_FUNC_IMPL(__imp__sub_82148804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82148808"))) PPC_WEAK_FUNC(sub_82148808);
PPC_FUNC_IMPL(__imp__sub_82148808) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,624(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82148810"))) PPC_WEAK_FUNC(sub_82148810);
PPC_FUNC_IMPL(__imp__sub_82148810) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82148b98
	sub_82148B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82148818"))) PPC_WEAK_FUNC(sub_82148818);
PPC_FUNC_IMPL(__imp__sub_82148818) {
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
	// lwz r10,588(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r9.u32);
	// bge 0x82148848
	if (!ctx.cr0.lt) goto loc_82148848;
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// b 0x82148854
	goto loc_82148854;
loc_82148848:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82148854
	if (ctx.cr6.lt) goto loc_82148854;
	// addi r11,r10,-7
	ctx.r11.s64 = ctx.r10.s64 + -7;
loc_82148854:
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x82147f30
	ctx.lr = 0x82148860;
	sub_82147F30(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82148874
	if (ctx.cr6.eq) goto loc_82148874;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8214887c
	if (!ctx.cr6.eq) goto loc_8214887C;
loc_82148874:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82148880
	goto loc_82148880;
loc_8214887C:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82148880:
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82148898"))) PPC_WEAK_FUNC(sub_82148898);
PPC_FUNC_IMPL(__imp__sub_82148898) {
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
	// lwz r10,588(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r11.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r9.u32);
	// bge 0x821488c8
	if (!ctx.cr0.lt) goto loc_821488C8;
	// addi r11,r10,7
	ctx.r11.s64 = ctx.r10.s64 + 7;
	// b 0x821488d4
	goto loc_821488D4;
loc_821488C8:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x821488d4
	if (ctx.cr6.lt) goto loc_821488D4;
	// addi r11,r10,-5
	ctx.r11.s64 = ctx.r10.s64 + -5;
loc_821488D4:
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x82147f30
	ctx.lr = 0x821488E0;
	sub_82147F30(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821488f4
	if (ctx.cr6.eq) goto loc_821488F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821488fc
	if (!ctx.cr6.eq) goto loc_821488FC;
loc_821488F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82148900
	goto loc_82148900;
loc_821488FC:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82148900:
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82148918"))) PPC_WEAK_FUNC(sub_82148918);
PPC_FUNC_IMPL(__imp__sub_82148918) {
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
	// bl 0x82147c40
	ctx.lr = 0x82148930;
	sub_82147C40(ctx, base);
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82148a8c
	if (!ctx.cr6.eq) goto loc_82148A8C;
	// ld r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 648);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82148a8c
	if (ctx.cr6.eq) goto loc_82148A8C;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8218b408
	ctx.lr = 0x82148950;
	sub_8218B408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x823c3240
	ctx.lr = 0x82148974;
	sub_823C3240(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,162
	ctx.r4.s64 = ctx.r3.s64 + 162;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x8214899C;
	sub_82147720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821489B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,162
	ctx.r4.s64 = ctx.r3.s64 + 162;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x821489C4;
	sub_82147720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821489D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,180
	ctx.r4.s64 = ctx.r3.s64 + 180;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x821489EC;
	sub_82147720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,180
	ctx.r4.s64 = ctx.r3.s64 + 180;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x82148A14;
	sub_82147720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,198
	ctx.r4.s64 = ctx.r3.s64 + 198;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x82148A3C;
	sub_82147720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,198
	ctx.r4.s64 = ctx.r3.s64 + 198;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x82148A64;
	sub_82147720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,198
	ctx.r4.s64 = ctx.r3.s64 + 198;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82147720
	ctx.lr = 0x82148A8C;
	sub_82147720(ctx, base);
loc_82148A8C:
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

__attribute__((alias("__imp__sub_82148AA0"))) PPC_WEAK_FUNC(sub_82148AA0);
PPC_FUNC_IMPL(__imp__sub_82148AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82148AA8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-23400
	ctx.r29.s64 = ctx.r11.s64 + -23400;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 + 12;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82148b24
	if (ctx.cr0.eq) goto loc_82148B24;
	// lwz r11,620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82148b24
	if (!ctx.cr6.eq) goto loc_82148B24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x82148AF4;
	sub_823C5728(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 620, ctx.r11.u32);
	// bl 0x821480b0
	ctx.lr = 0x82148B24;
	sub_821480B0(ctx, base);
loc_82148B24:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82148b8c
	if (ctx.cr0.eq) goto loc_82148B8C;
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82148b8c
	if (!ctx.cr6.eq) goto loc_82148B8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x82148B5C;
	sub_823C5728(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 620, ctx.r11.u32);
	// bl 0x821480b0
	ctx.lr = 0x82148B8C;
	sub_821480B0(ctx, base);
loc_82148B8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82148B94"))) PPC_WEAK_FUNC(sub_82148B94);
PPC_FUNC_IMPL(__imp__sub_82148B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82148B98"))) PPC_WEAK_FUNC(sub_82148B98);
PPC_FUNC_IMPL(__imp__sub_82148B98) {
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
	// bl 0x82148718
	ctx.lr = 0x82148BB8;
	sub_82148718(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82148bcc
	if (ctx.cr0.eq) goto loc_82148BCC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82148BCC;
	sub_82183E40(ctx, base);
loc_82148BCC:
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

__attribute__((alias("__imp__sub_82148BE8"))) PPC_WEAK_FUNC(sub_82148BE8);
PPC_FUNC_IMPL(__imp__sub_82148BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82148BF0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x82109e00
	ctx.lr = 0x82148C08;
	sub_82109E00(ctx, base);
	// lwz r30,684(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// bl 0x82183078
	ctx.lr = 0x82148C10;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82148C1C;
	sub_821837D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x82148C24;
	sub_82080000(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82148c44
	if (ctx.cr0.eq) goto loc_82148C44;
	// bl 0x82182e90
	ctx.lr = 0x82148C30;
	sub_82182E90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156630
	ctx.lr = 0x82148C40;
	sub_82156630(ctx, base);
	// b 0x82148c48
	goto loc_82148C48;
loc_82148C44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82148C48:
	// stw r3,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r3.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82080000
	ctx.lr = 0x82148C54;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82148c68
	if (ctx.cr0.eq) goto loc_82148C68;
	// lwz r4,688(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// bl 0x82154a08
	ctx.lr = 0x82148C64;
	sub_82154A08(ctx, base);
	// b 0x82148c6c
	goto loc_82148C6C;
loc_82148C68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82148C6C:
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// addi r30,r31,268
	ctx.r30.s64 = ctx.r31.s64 + 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3240
	ctx.lr = 0x82148C80;
	sub_823C3240(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,14780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14780);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,7884(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7884);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x82148CA0;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148918
	ctx.lr = 0x82148CA8;
	sub_82148918(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147f30
	ctx.lr = 0x82148CB0;
	sub_82147F30(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821480b0
	ctx.lr = 0x82148CC0;
	sub_821480B0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821480b0
	ctx.lr = 0x82148CD0;
	sub_821480B0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821480b0
	ctx.lr = 0x82148CE0;
	sub_821480B0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821480b0
	ctx.lr = 0x82148CF0;
	sub_821480B0(ctx, base);
	// bl 0x821eb440
	ctx.lr = 0x82148CF4;
	sub_821EB440(ctx, base);
	// stw r3,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82148CFC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147d20
	ctx.lr = 0x82148D08;
	sub_82147D20(ctx, base);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// blt cr6,0x82148cfc
	if (ctx.cr6.lt) goto loc_82148CFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82147e18
	ctx.lr = 0x82148D1C;
	sub_82147E18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82148D24;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82148D2C"))) PPC_WEAK_FUNC(sub_82148D2C);
PPC_FUNC_IMPL(__imp__sub_82148D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82148D30"))) PPC_WEAK_FUNC(sub_82148D30);
PPC_FUNC_IMPL(__imp__sub_82148D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82148D38;
	sub_82248764(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,700
	ctx.r27.s64 = ctx.r3.s64 + 700;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,240
	ctx.r4.s64 = 240;
	// bl 0x822aa648
	ctx.lr = 0x82148D50;
	sub_822AA648(ctx, base);
	// addi r26,r31,940
	ctx.r26.s64 = ctx.r31.s64 + 940;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822aa648
	ctx.lr = 0x82148D60;
	sub_822AA648(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,2160
	ctx.r30.s64 = 2160;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r22,r11,-14444
	ctx.r22.s64 = ctx.r11.s64 + -14444;
loc_82148D7C:
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ld r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 * 15;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// extsw r23,r11
	ctx.r23.s64 = ctx.r11.s32;
	// cmpld cr6,r10,r23
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r23.u64, ctx.xer);
	// bgt cr6,0x82148dac
	if (ctx.cr6.gt) goto loc_82148DAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82147d20
	ctx.lr = 0x82148DA8;
	sub_82147D20(ctx, base);
	// b 0x82148f74
	goto loc_82148F74;
loc_82148DAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82147d20
	ctx.lr = 0x82148DB4;
	sub_82147D20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228b00
	ctx.lr = 0x82148DBC;
	sub_82228B00(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rotlwi r3,r23,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r23.u32, 0);
	// bl 0x821563f0
	ctx.lr = 0x82148DC8;
	sub_821563F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82229288
	ctx.lr = 0x82148DD4;
	sub_82229288(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82229288
	ctx.lr = 0x82148DE4;
	sub_82229288(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82229288
	ctx.lr = 0x82148DF4;
	sub_82229288(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82229288
	ctx.lr = 0x82148E04;
	sub_82229288(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218a128
	ctx.lr = 0x82148E18;
	sub_8218A128(ctx, base);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147640
	ctx.lr = 0x82148E2C;
	sub_82147640(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r30,-216
	ctx.r11.s64 = ctx.r30.s64 + -216;
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 752, ctx.r9.u32);
	// stw r28,748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 748, ctx.r28.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r29,742(r10)
	PPC_STORE_U8(ctx.r10.u32 + 742, ctx.r29.u8);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r27,984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 984, ctx.r27.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r24,1004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1004, ctx.r24.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r23,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r23.u32);
	// stw r28,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r28.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,742(r11)
	PPC_STORE_U8(ctx.r11.u32 + 742, ctx.r29.u8);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r21,1008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1008, ctx.r21.u32);
	// stw r28,1004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1004, ctx.r28.u32);
	// addi r11,r30,216
	ctx.r11.s64 = ctx.r30.s64 + 216;
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r29,998(r10)
	PPC_STORE_U8(ctx.r10.u32 + 998, ctx.r29.u8);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r20,1008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1008, ctx.r20.u32);
	// stw r28,1004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1004, ctx.r28.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r29,998(r10)
	PPC_STORE_U8(ctx.r10.u32 + 998, ctx.r29.u8);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r19,1264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1264, ctx.r19.u32);
	// stw r28,1260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1260, ctx.r28.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r29,1254(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1254, ctx.r29.u8);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r29,1510(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1510, ctx.r29.u8);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r26,1496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1496, ctx.r26.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r24,1516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1516, ctx.r24.u32);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
loc_82148F74:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpwi cr6,r30,2340
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2340, ctx.xer);
	// blt cr6,0x82148d7c
	if (ctx.cr6.lt) goto loc_82148D7C;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82148F94"))) PPC_WEAK_FUNC(sub_82148F94);
PPC_FUNC_IMPL(__imp__sub_82148F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82148F98"))) PPC_WEAK_FUNC(sub_82148F98);
PPC_FUNC_IMPL(__imp__sub_82148F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82148FA0;
	sub_82248774(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 616);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82148fd0
	if (ctx.cr6.lt) goto loc_82148FD0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82148fd4
	if (!ctx.cr6.lt) goto loc_82148FD4;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// b 0x82148fd4
	goto loc_82148FD4;
loc_82148FD0:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82148FD4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821564c0
	ctx.lr = 0x82148FDC;
	sub_821564C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82149180
	if (ctx.cr0.eq) goto loc_82149180;
	// addi r29,r31,1060
	ctx.r29.s64 = ctx.r31.s64 + 1060;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x82148FF4;
	sub_822AA648(ctx, base);
	// addi r28,r31,1076
	ctx.r28.s64 = ctx.r31.s64 + 1076;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822aa648
	ctx.lr = 0x82149004;
	sub_822AA648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228b00
	ctx.lr = 0x8214900C;
	sub_82228B00(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82156418
	ctx.lr = 0x82149018;
	sub_82156418(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82229288
	ctx.lr = 0x82149024;
	sub_82229288(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82229288
	ctx.lr = 0x82149034;
	sub_82229288(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82229288
	ctx.lr = 0x82149044;
	sub_82229288(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82229288
	ctx.lr = 0x82149054;
	sub_82229288(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a128
	ctx.lr = 0x82149068;
	sub_8218A128(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147640
	ctx.lr = 0x8214907C;
	sub_82147640(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2128);
	// stw r9,752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 752, ctx.r9.u32);
	// stw r30,748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 748, ctx.r30.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2128);
	// stb r11,742(r10)
	PPC_STORE_U8(ctx.r10.u32 + 742, ctx.r11.u8);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,2128(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2128);
	// stw r29,984(r9)
	PPC_STORE_U32(ctx.r9.u32 + 984, ctx.r29.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2128);
	// stw r26,1004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1004, ctx.r26.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2344);
	// stw r27,752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 752, ctx.r27.u32);
	// stw r30,748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 748, ctx.r30.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2344);
	// stb r11,742(r10)
	PPC_STORE_U8(ctx.r10.u32 + 742, ctx.r11.u8);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2344);
	// stw r25,1008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1008, ctx.r25.u32);
	// stw r30,1004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1004, ctx.r30.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2344);
	// stb r11,998(r10)
	PPC_STORE_U8(ctx.r10.u32 + 998, ctx.r11.u8);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2560);
	// stw r24,1008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1008, ctx.r24.u32);
	// stw r30,1004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1004, ctx.r30.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2560);
	// stb r11,998(r10)
	PPC_STORE_U8(ctx.r10.u32 + 998, ctx.r11.u8);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2560);
	// stw r30,1260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1260, ctx.r30.u32);
	// stw r23,1264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1264, ctx.r23.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2560);
	// stb r11,1254(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1254, ctx.r11.u8);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2560);
	// stb r11,1510(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1510, ctx.r11.u8);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,2560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2560);
	// stw r28,1496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1496, ctx.r28.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,2560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2560);
	// stw r26,1516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1516, ctx.r26.u32);
loc_82149180:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82149188"))) PPC_WEAK_FUNC(sub_82149188);
PPC_FUNC_IMPL(__imp__sub_82149188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82149190;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821491A8;
	sub_8209EDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823c3b68
	ctx.lr = 0x821491B4;
	sub_823C3B68(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x821491B8;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823c58b0
	ctx.lr = 0x821491CC;
	sub_823C58B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28680
	ctx.r11.s64 = ctx.r11.s64 + -28680;
	// addi r10,r10,-28816
	ctx.r10.s64 = ctx.r10.s64 + -28816;
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// bl 0x823c35b8
	ctx.lr = 0x82149204;
	sub_823C35B8(ctx, base);
	// addi r29,r31,568
	ctx.r29.s64 = ctx.r31.s64 + 568;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c2ff0
	ctx.lr = 0x82149214;
	sub_823C2FF0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r26,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r26.u32);
	// addi r3,r31,700
	ctx.r3.s64 = ctx.r31.s64 + 700;
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// li r4,240
	ctx.r4.s64 = 240;
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// std r30,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r30.u64);
	// std r30,640(r31)
	PPC_STORE_U64(ctx.r31.u32 + 640, ctx.r30.u64);
	// std r30,648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 648, ctx.r30.u64);
	// std r30,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r30.u64);
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// stw r28,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r28.u32);
	// stw r27,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r27.u32);
	// bl 0x822aa648
	ctx.lr = 0x82149260;
	sub_822AA648(ctx, base);
	// addi r3,r31,940
	ctx.r3.s64 = ctx.r31.s64 + 940;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x822aa648
	ctx.lr = 0x8214926C;
	sub_822AA648(ctx, base);
	// addi r3,r31,1060
	ctx.r3.s64 = ctx.r31.s64 + 1060;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x82149278;
	sub_822AA648(ctx, base);
	// addi r3,r31,1076
	ctx.r3.s64 = ctx.r31.s64 + 1076;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822aa648
	ctx.lr = 0x82149284;
	sub_822AA648(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// bl 0x82148650
	ctx.lr = 0x8214929C;
	sub_82148650(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821492d0
	if (!ctx.cr6.eq) goto loc_821492D0;
	// lwz r30,684(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// bl 0x82183078
	ctx.lr = 0x821492B4;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821492C0;
	sub_821837D0(ctx, base);
	// bl 0x82145848
	ctx.lr = 0x821492C4;
	sub_82145848(ctx, base);
	// stw r28,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821492D0;
	sub_821837D0(ctx, base);
loc_821492D0:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r11,-744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821492f4
	if (ctx.cr6.eq) goto loc_821492F4;
	// bl 0x8215bd08
	ctx.lr = 0x821492E4;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82221060
	ctx.lr = 0x821492F4;
	sub_82221060(ctx, base);
loc_821492F4:
	// bl 0x82220c70
	ctx.lr = 0x821492F8;
	sub_82220C70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82221280
	ctx.lr = 0x82149304;
	sub_82221280(ctx, base);
	// li r11,811
	ctx.r11.s64 = 811;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82148be8
	ctx.lr = 0x82149314;
	sub_82148BE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x8214931C;
	sub_821EBAA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c3410
	ctx.lr = 0x82149324;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x8214932C;
	sub_823C3C70(ctx, base);
	// bl 0x821560d0
	ctx.lr = 0x82149330;
	sub_821560D0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x82149334;
	sub_8215BD60(ctx, base);
	// stw r28,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82149344"))) PPC_WEAK_FUNC(sub_82149344);
PPC_FUNC_IMPL(__imp__sub_82149344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149348"))) PPC_WEAK_FUNC(sub_82149348);
PPC_FUNC_IMPL(__imp__sub_82149348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82149350;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-23400
	ctx.r11.s64 = ctx.r11.s64 + -23400;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and. r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82149388
	if (ctx.cr0.eq) goto loc_82149388;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82149388:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214939c
	if (ctx.cr0.eq) goto loc_8214939C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8214939C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82149494
	if (ctx.cr6.eq) goto loc_82149494;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821493B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147548
	ctx.lr = 0x821493C4;
	sub_82147548(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82149444
	if (ctx.cr6.lt) goto loc_82149444;
	// beq cr6,0x8214940c
	if (ctx.cr6.eq) goto loc_8214940C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x82149494
	if (!ctx.cr6.lt) goto loc_82149494;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c5728
	ctx.lr = 0x821493E8;
	sub_823C5728(ctx, base);
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,14
	ctx.r9.s64 = 14;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r9.u32);
	// stw r8,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r8.u32);
	// b 0x82149434
	goto loc_82149434;
loc_8214940C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c5728
	ctx.lr = 0x8214941C;
	sub_823C5728(ctx, base);
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r29,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r29.u32);
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
loc_82149434:
	// stw r29,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r29.u32);
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// b 0x82149494
	goto loc_82149494;
loc_82149444:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x8214945c
	if (!ctx.cr6.eq) goto loc_8214945C;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821480b0
	ctx.lr = 0x8214945C;
	sub_821480B0(ctx, base);
loc_8214945C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82149474
	if (!ctx.cr6.eq) goto loc_82149474;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821480b0
	ctx.lr = 0x82149474;
	sub_821480B0(ctx, base);
loc_82149474:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148d30
	ctx.lr = 0x8214947C;
	sub_82148D30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c5728
	ctx.lr = 0x8214948C;
	sub_823C5728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148918
	ctx.lr = 0x82149494;
	sub_82148918(ctx, base);
loc_82149494:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8214949C"))) PPC_WEAK_FUNC(sub_8214949C);
PPC_FUNC_IMPL(__imp__sub_8214949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821494A0"))) PPC_WEAK_FUNC(sub_821494A0);
PPC_FUNC_IMPL(__imp__sub_821494A0) {
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
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x821ebaa8
	ctx.lr = 0x821494BC;
	sub_821EBAA8(ctx, base);
	// bl 0x821563c0
	ctx.lr = 0x821494C0;
	sub_821563C0(ctx, base);
	// std r3,648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 648, ctx.r3.u64);
	// bl 0x821563d8
	ctx.lr = 0x821494C8;
	sub_821563D8(ctx, base);
	// std r3,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148d30
	ctx.lr = 0x821494D4;
	sub_82148D30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148f98
	ctx.lr = 0x821494DC;
	sub_82148F98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148918
	ctx.lr = 0x821494E4;
	sub_82148918(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82149508"))) PPC_WEAK_FUNC(sub_82149508);
PPC_FUNC_IMPL(__imp__sub_82149508) {
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
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x821495cc
	if (ctx.cr6.gt) goto loc_821495CC;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-28840
	ctx.r12.s64 = ctx.r12.s64 + -28840;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// nop 
	// addi r12,r12,-27308
	ctx.r12.s64 = ctx.r12.s64 + -27308;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148180
	ctx.lr = 0x8214955C;
	sub_82148180(ctx, base);
	// b 0x821495cc
	goto loc_821495CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821481d0
	ctx.lr = 0x82149568;
	sub_821481D0(ctx, base);
	// b 0x821495cc
	goto loc_821495CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148268
	ctx.lr = 0x82149574;
	sub_82148268(ctx, base);
	// b 0x821495cc
	goto loc_821495CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821482e8
	ctx.lr = 0x82149580;
	sub_821482E8(ctx, base);
	// b 0x821495cc
	goto loc_821495CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148380
	ctx.lr = 0x8214958C;
	sub_82148380(ctx, base);
	// b 0x821495cc
	goto loc_821495CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821484d0
	ctx.lr = 0x82149598;
	sub_821484D0(ctx, base);
	// b 0x821495cc
	goto loc_821495CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821494a0
	ctx.lr = 0x821495A4;
	sub_821494A0(ctx, base);
	// b 0x821495cc
	goto loc_821495CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821476c0
	ctx.lr = 0x821495B0;
	sub_821476C0(ctx, base);
	// b 0x821495cc
	goto loc_821495CC;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82155dc0
	ctx.lr = 0x821495BC;
	sub_82155DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821495cc
	if (!ctx.cr0.eq) goto loc_821495CC;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
loc_821495CC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821495E0"))) PPC_WEAK_FUNC(sub_821495E0);
PPC_FUNC_IMPL(__imp__sub_821495E0) {
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
	// lwz r11,644(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 644);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82149618
	if (!ctx.cr6.eq) goto loc_82149618;
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147ac8
	ctx.lr = 0x82149608;
	sub_82147AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82149348
	ctx.lr = 0x82149610;
	sub_82149348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82148aa0
	ctx.lr = 0x82149618;
	sub_82148AA0(ctx, base);
loc_82149618:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214962C"))) PPC_WEAK_FUNC(sub_8214962C);
PPC_FUNC_IMPL(__imp__sub_8214962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149630"))) PPC_WEAK_FUNC(sub_82149630);
PPC_FUNC_IMPL(__imp__sub_82149630) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-28596
	ctx.r11.s64 = ctx.r11.s64 + -28596;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82149674
	if (ctx.cr6.eq) goto loc_82149674;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82149674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82149674:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x821f18c0
	ctx.lr = 0x82149680;
	sub_821F18C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214968c
	if (ctx.cr0.eq) goto loc_8214968C;
	// bl 0x821f1870
	ctx.lr = 0x8214968C;
	sub_821F1870(ctx, base);
loc_8214968C:
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821496ac
	if (ctx.cr6.eq) goto loc_821496AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821496AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821496AC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821496d0
	if (ctx.cr6.eq) goto loc_821496D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821496D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821496D0:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821496EC"))) PPC_WEAK_FUNC(sub_821496EC);
PPC_FUNC_IMPL(__imp__sub_821496EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821496F0"))) PPC_WEAK_FUNC(sub_821496F0);
PPC_FUNC_IMPL(__imp__sub_821496F0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82149748
	if (ctx.cr6.eq) goto loc_82149748;
	// bl 0x823e1cd0
	ctx.lr = 0x82149714;
	sub_823E1CD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// beq 0x82149760
	if (ctx.cr0.eq) goto loc_82149760;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214973c
	if (ctx.cr6.eq) goto loc_8214973C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214973C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214973C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
loc_82149748:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214974C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82149760:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82149770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214978c
	if (ctx.cr0.eq) goto loc_8214978C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214978C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214978C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214974c
	goto loc_8214974C;
}

__attribute__((alias("__imp__sub_82149794"))) PPC_WEAK_FUNC(sub_82149794);
PPC_FUNC_IMPL(__imp__sub_82149794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149798"))) PPC_WEAK_FUNC(sub_82149798);
PPC_FUNC_IMPL(__imp__sub_82149798) {
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
	// bl 0x823e36b8
	ctx.lr = 0x821497B4;
	sub_823E36B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821497D0"))) PPC_WEAK_FUNC(sub_821497D0);
PPC_FUNC_IMPL(__imp__sub_821497D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 772, ctx.r11.u32);
	// stw r10,764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 764, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821497E4"))) PPC_WEAK_FUNC(sub_821497E4);
PPC_FUNC_IMPL(__imp__sub_821497E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821497E8"))) PPC_WEAK_FUNC(sub_821497E8);
PPC_FUNC_IMPL(__imp__sub_821497E8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82149810
	if (!ctx.cr6.eq) goto loc_82149810;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82149834
	goto loc_82149834;
loc_82149810:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82149824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82149830
	if (ctx.cr0.eq) goto loc_82149830;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82149830:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82149834:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82149848"))) PPC_WEAK_FUNC(sub_82149848);
PPC_FUNC_IMPL(__imp__sub_82149848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214985C"))) PPC_WEAK_FUNC(sub_8214985C);
PPC_FUNC_IMPL(__imp__sub_8214985C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149860"))) PPC_WEAK_FUNC(sub_82149860);
PPC_FUNC_IMPL(__imp__sub_82149860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82149874"))) PPC_WEAK_FUNC(sub_82149874);
PPC_FUNC_IMPL(__imp__sub_82149874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149878"))) PPC_WEAK_FUNC(sub_82149878);
PPC_FUNC_IMPL(__imp__sub_82149878) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8214988c
	if (!ctx.cr6.eq) goto loc_8214988C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8214988C:
	// b 0x823e1cd0
	sub_823E1CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82149890"))) PPC_WEAK_FUNC(sub_82149890);
PPC_FUNC_IMPL(__imp__sub_82149890) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821498a8
	if (ctx.cr6.eq) goto loc_821498A8;
	// lwz r4,768(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// b 0x823e2460
	sub_823E2460(ctx, base);
	return;
loc_821498A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821498B0"))) PPC_WEAK_FUNC(sub_821498B0);
PPC_FUNC_IMPL(__imp__sub_821498B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,768(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// b 0x823e24c0
	sub_823E24C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821498C8"))) PPC_WEAK_FUNC(sub_821498C8);
PPC_FUNC_IMPL(__imp__sub_821498C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821498CC"))) PPC_WEAK_FUNC(sub_821498CC);
PPC_FUNC_IMPL(__imp__sub_821498CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821498D0"))) PPC_WEAK_FUNC(sub_821498D0);
PPC_FUNC_IMPL(__imp__sub_821498D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,768(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// b 0x823e2518
	sub_823E2518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821498E8"))) PPC_WEAK_FUNC(sub_821498E8);
PPC_FUNC_IMPL(__imp__sub_821498E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821498EC"))) PPC_WEAK_FUNC(sub_821498EC);
PPC_FUNC_IMPL(__imp__sub_821498EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821498F0"))) PPC_WEAK_FUNC(sub_821498F0);
PPC_FUNC_IMPL(__imp__sub_821498F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823e1d28
	sub_823E1D28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82149900"))) PPC_WEAK_FUNC(sub_82149900);
PPC_FUNC_IMPL(__imp__sub_82149900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82149904"))) PPC_WEAK_FUNC(sub_82149904);
PPC_FUNC_IMPL(__imp__sub_82149904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149908"))) PPC_WEAK_FUNC(sub_82149908);
PPC_FUNC_IMPL(__imp__sub_82149908) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x823e1dd8
	sub_823E1DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82149910"))) PPC_WEAK_FUNC(sub_82149910);
PPC_FUNC_IMPL(__imp__sub_82149910) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823e1d40
	sub_823E1D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82149920"))) PPC_WEAK_FUNC(sub_82149920);
PPC_FUNC_IMPL(__imp__sub_82149920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82149924"))) PPC_WEAK_FUNC(sub_82149924);
PPC_FUNC_IMPL(__imp__sub_82149924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149928"))) PPC_WEAK_FUNC(sub_82149928);
PPC_FUNC_IMPL(__imp__sub_82149928) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82149984
	if (ctx.cr6.eq) goto loc_82149984;
	// bl 0x82227aa0
	ctx.lr = 0x82149954;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82149968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lha r5,520(r11)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 520));
	// bl 0x823e1d80
	ctx.lr = 0x82149984;
	sub_823E1D80(ctx, base);
loc_82149984:
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

__attribute__((alias("__imp__sub_8214999C"))) PPC_WEAK_FUNC(sub_8214999C);
PPC_FUNC_IMPL(__imp__sub_8214999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821499A0"))) PPC_WEAK_FUNC(sub_821499A0);
PPC_FUNC_IMPL(__imp__sub_821499A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823e1de0
	sub_823E1DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821499B0"))) PPC_WEAK_FUNC(sub_821499B0);
PPC_FUNC_IMPL(__imp__sub_821499B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821499B4"))) PPC_WEAK_FUNC(sub_821499B4);
PPC_FUNC_IMPL(__imp__sub_821499B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821499B8"))) PPC_WEAK_FUNC(sub_821499B8);
PPC_FUNC_IMPL(__imp__sub_821499B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x823e1dc8
	sub_823E1DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821499C0"))) PPC_WEAK_FUNC(sub_821499C0);
PPC_FUNC_IMPL(__imp__sub_821499C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821499E0"))) PPC_WEAK_FUNC(sub_821499E0);
PPC_FUNC_IMPL(__imp__sub_821499E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821499E4"))) PPC_WEAK_FUNC(sub_821499E4);
PPC_FUNC_IMPL(__imp__sub_821499E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821499E8"))) PPC_WEAK_FUNC(sub_821499E8);
PPC_FUNC_IMPL(__imp__sub_821499E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82149A08"))) PPC_WEAK_FUNC(sub_82149A08);
PPC_FUNC_IMPL(__imp__sub_82149A08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82149A0C"))) PPC_WEAK_FUNC(sub_82149A0C);
PPC_FUNC_IMPL(__imp__sub_82149A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149A10"))) PPC_WEAK_FUNC(sub_82149A10);
PPC_FUNC_IMPL(__imp__sub_82149A10) {
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
	// lwz r4,768(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x823e23c0
	ctx.lr = 0x82149A30;
	sub_823E23C0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82149A4C"))) PPC_WEAK_FUNC(sub_82149A4C);
PPC_FUNC_IMPL(__imp__sub_82149A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149A50"))) PPC_WEAK_FUNC(sub_82149A50);
PPC_FUNC_IMPL(__imp__sub_82149A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823e4750
	sub_823E4750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82149A6C"))) PPC_WEAK_FUNC(sub_82149A6C);
PPC_FUNC_IMPL(__imp__sub_82149A6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82149A70"))) PPC_WEAK_FUNC(sub_82149A70);
PPC_FUNC_IMPL(__imp__sub_82149A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823e47b0
	sub_823E47B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82149A8C"))) PPC_WEAK_FUNC(sub_82149A8C);
PPC_FUNC_IMPL(__imp__sub_82149A8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82149A90"))) PPC_WEAK_FUNC(sub_82149A90);
PPC_FUNC_IMPL(__imp__sub_82149A90) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82149acc
	if (ctx.cr6.eq) goto loc_82149ACC;
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e42b0
	ctx.lr = 0x82149AC0;
	sub_823E42B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e5178
	ctx.lr = 0x82149ACC;
	sub_823E5178(ctx, base);
loc_82149ACC:
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

__attribute__((alias("__imp__sub_82149AE4"))) PPC_WEAK_FUNC(sub_82149AE4);
PPC_FUNC_IMPL(__imp__sub_82149AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149AE8"))) PPC_WEAK_FUNC(sub_82149AE8);
PPC_FUNC_IMPL(__imp__sub_82149AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x823e4e78
	sub_823E4E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82149AFC"))) PPC_WEAK_FUNC(sub_82149AFC);
PPC_FUNC_IMPL(__imp__sub_82149AFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82149B00"))) PPC_WEAK_FUNC(sub_82149B00);
PPC_FUNC_IMPL(__imp__sub_82149B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82149B08;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82149bbc
	if (ctx.cr6.eq) goto loc_82149BBC;
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82149bbc
	if (ctx.cr6.eq) goto loc_82149BBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82229288
	ctx.lr = 0x82149B58;
	sub_82229288(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229288
	ctx.lr = 0x82149B68;
	sub_82229288(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229288
	ctx.lr = 0x82149B78;
	sub_82229288(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229288
	ctx.lr = 0x82149B88;
	sub_82229288(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229288
	ctx.lr = 0x82149B98;
	sub_82229288(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229288
	ctx.lr = 0x82149BA8;
	sub_82229288(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823e51e0
	ctx.lr = 0x82149BBC;
	sub_823E51E0(ctx, base);
loc_82149BBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82149BC4"))) PPC_WEAK_FUNC(sub_82149BC4);
PPC_FUNC_IMPL(__imp__sub_82149BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149BC8"))) PPC_WEAK_FUNC(sub_82149BC8);
PPC_FUNC_IMPL(__imp__sub_82149BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823e4598
	sub_823E4598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82149BE4"))) PPC_WEAK_FUNC(sub_82149BE4);
PPC_FUNC_IMPL(__imp__sub_82149BE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82149BE8"))) PPC_WEAK_FUNC(sub_82149BE8);
PPC_FUNC_IMPL(__imp__sub_82149BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823e4660
	sub_823E4660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82149C04"))) PPC_WEAK_FUNC(sub_82149C04);
PPC_FUNC_IMPL(__imp__sub_82149C04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82149C08"))) PPC_WEAK_FUNC(sub_82149C08);
PPC_FUNC_IMPL(__imp__sub_82149C08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823e4698
	sub_823E4698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82149C24"))) PPC_WEAK_FUNC(sub_82149C24);
PPC_FUNC_IMPL(__imp__sub_82149C24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82149C28"))) PPC_WEAK_FUNC(sub_82149C28);
PPC_FUNC_IMPL(__imp__sub_82149C28) {
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
	// bl 0x82227aa0
	ctx.lr = 0x82149C40;
	sub_82227AA0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822283f8
	ctx.lr = 0x82149C48;
	sub_822283F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82149c84
	if (ctx.cr0.eq) goto loc_82149C84;
	// bl 0x82227aa0
	ctx.lr = 0x82149C54;
	sub_82227AA0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82227cd8
	ctx.lr = 0x82149C5C;
	sub_82227CD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82149c7c
	if (ctx.cr6.eq) goto loc_82149C7C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82149c84
	if (!ctx.cr6.eq) goto loc_82149C84;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82156898
	ctx.lr = 0x82149C74;
	sub_82156898(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82149c80
	goto loc_82149C80;
loc_82149C7C:
	// li r11,5
	ctx.r11.s64 = 5;
loc_82149C80:
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
loc_82149C84:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82149C98"))) PPC_WEAK_FUNC(sub_82149C98);
PPC_FUNC_IMPL(__imp__sub_82149C98) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// bl 0x82230ad0
	ctx.lr = 0x82149CBC;
	sub_82230AD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x82156b38
	ctx.lr = 0x82149CC8;
	sub_82156B38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82149cd8
	if (ctx.cr0.eq) goto loc_82149CD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
loc_82149CD8:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82149CF4"))) PPC_WEAK_FUNC(sub_82149CF4);
PPC_FUNC_IMPL(__imp__sub_82149CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149CF8"))) PPC_WEAK_FUNC(sub_82149CF8);
PPC_FUNC_IMPL(__imp__sub_82149CF8) {
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
	// bl 0x82227aa0
	ctx.lr = 0x82149D10;
	sub_82227AA0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x822283f8
	ctx.lr = 0x82149D18;
	sub_822283F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82149d58
	if (ctx.cr0.eq) goto loc_82149D58;
	// bl 0x82227aa0
	ctx.lr = 0x82149D24;
	sub_82227AA0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82227cd8
	ctx.lr = 0x82149D2C;
	sub_82227CD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82149d58
	if (!ctx.cr6.eq) goto loc_82149D58;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82149d48
	if (ctx.cr6.eq) goto loc_82149D48;
	// lwz r4,768(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x823e24c0
	ctx.lr = 0x82149D48;
	sub_823E24C0(ctx, base);
loc_82149D48:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82156898
	ctx.lr = 0x82149D50;
	sub_82156898(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
loc_82149D58:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82149D6C"))) PPC_WEAK_FUNC(sub_82149D6C);
PPC_FUNC_IMPL(__imp__sub_82149D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149D70"))) PPC_WEAK_FUNC(sub_82149D70);
PPC_FUNC_IMPL(__imp__sub_82149D70) {
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
	// lwz r4,768(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x823e2340
	ctx.lr = 0x82149D90;
	sub_823E2340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82149da0
	if (!ctx.cr0.eq) goto loc_82149DA0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
loc_82149DA0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82149DB4"))) PPC_WEAK_FUNC(sub_82149DB4);
PPC_FUNC_IMPL(__imp__sub_82149DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149DB8"))) PPC_WEAK_FUNC(sub_82149DB8);
PPC_FUNC_IMPL(__imp__sub_82149DB8) {
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
	// bl 0x82149630
	ctx.lr = 0x82149DD8;
	sub_82149630(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82149dec
	if (ctx.cr0.eq) goto loc_82149DEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82149DEC;
	sub_82183E40(ctx, base);
loc_82149DEC:
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

__attribute__((alias("__imp__sub_82149E08"))) PPC_WEAK_FUNC(sub_82149E08);
PPC_FUNC_IMPL(__imp__sub_82149E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82149E10;
	sub_82248778(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r4,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r4.u32);
	// stw r5,772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 772, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 776, ctx.r27.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x82182e90
	ctx.lr = 0x82149E38;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82149E40;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82149E4C;
	sub_821837D0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r10,r10,34463
	ctx.r10.u64 = ctx.r10.u64 | 34463;
	// li r28,512
	ctx.r28.s64 = 512;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r8,135
	ctx.r8.s64 = 135;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82149EA4;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82149edc
	if (ctx.cr6.eq) goto loc_82149EDC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82149ed4
	if (ctx.cr6.eq) goto loc_82149ED4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82149ee4
	if (!ctx.cr6.eq) goto loc_82149EE4;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x82149ee0
	goto loc_82149EE0;
loc_82149ED4:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82149ee0
	goto loc_82149EE0;
loc_82149EDC:
	// li r11,15
	ctx.r11.s64 = 15;
loc_82149EE0:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82149EE4:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82170770
	ctx.lr = 0x82149EEC;
	sub_82170770(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82149EF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230c00
	ctx.lr = 0x82149EFC;
	sub_82230C00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82149f14
	if (ctx.cr0.eq) goto loc_82149F14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822310b0
	ctx.lr = 0x82149F0C;
	sub_822310B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82149f24
	if (!ctx.cr0.eq) goto loc_82149F24;
loc_82149F14:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// blt cr6,0x82149ef4
	if (ctx.cr6.lt) goto loc_82149EF4;
	// b 0x82149f28
	goto loc_82149F28;
loc_82149F24:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82149F28:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82149f3c
	if (ctx.cr6.lt) goto loc_82149F3C;
	// bne cr6,0x82149f40
	if (!ctx.cr6.eq) goto loc_82149F40;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// b 0x82149f40
	goto loc_82149F40;
loc_82149F3C:
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
loc_82149F40:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82149f60
	if (ctx.cr6.eq) goto loc_82149F60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82149F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82149F60:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x82080000
	ctx.lr = 0x82149F6C;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82149f80
	if (ctx.cr0.eq) goto loc_82149F80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823e2ff8
	ctx.lr = 0x82149F7C;
	sub_823E2FF8(ctx, base);
	// b 0x82149f84
	goto loc_82149F84;
loc_82149F80:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82149F84:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r25,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r25.u32);
	// bl 0x821837d0
	ctx.lr = 0x82149F94;
	sub_821837D0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82149F9C"))) PPC_WEAK_FUNC(sub_82149F9C);
PPC_FUNC_IMPL(__imp__sub_82149F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82149FA0"))) PPC_WEAK_FUNC(sub_82149FA0);
PPC_FUNC_IMPL(__imp__sub_82149FA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82149FB8"))) PPC_WEAK_FUNC(sub_82149FB8);
PPC_FUNC_IMPL(__imp__sub_82149FB8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82149ff4
	if (ctx.cr6.eq) goto loc_82149FF4;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82149ff4
	if (ctx.cr6.eq) goto loc_82149FF4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823e4598
	ctx.lr = 0x82149FF4;
	sub_823E4598(ctx, base);
loc_82149FF4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a018
	if (ctx.cr6.eq) goto loc_8214A018;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214a018
	if (ctx.cr6.eq) goto loc_8214A018;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823e4660
	ctx.lr = 0x8214A018;
	sub_823E4660(ctx, base);
loc_8214A018:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214a030
	if (ctx.cr6.eq) goto loc_8214A030;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823e1de0
	ctx.lr = 0x8214A030;
	sub_823E1DE0(ctx, base);
loc_8214A030:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214a044
	if (ctx.cr6.eq) goto loc_8214A044;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823e1d60
	ctx.lr = 0x8214A044;
	sub_823E1D60(ctx, base);
loc_8214A044:
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

__attribute__((alias("__imp__sub_8214A05C"))) PPC_WEAK_FUNC(sub_8214A05C);
PPC_FUNC_IMPL(__imp__sub_8214A05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214A060"))) PPC_WEAK_FUNC(sub_8214A060);
PPC_FUNC_IMPL(__imp__sub_8214A060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8214A068;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f18c0
	ctx.lr = 0x8214A074;
	sub_821F18C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8214a084
	if (!ctx.cr0.eq) goto loc_8214A084;
loc_8214A07C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214a114
	goto loc_8214A114;
loc_8214A084:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a07c
	if (ctx.cr6.eq) goto loc_8214A07C;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214a07c
	if (ctx.cr6.eq) goto loc_8214A07C;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x8215bd60
	ctx.lr = 0x8214A0C4;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bl 0x82227aa0
	ctx.lr = 0x8214A0D8;
	sub_82227AA0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82228080
	ctx.lr = 0x8214A0E0;
	sub_82228080(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821f1b28
	ctx.lr = 0x8214A100;
	sub_821F1B28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f3050
	ctx.lr = 0x8214A114;
	sub_821F3050(ctx, base);
loc_8214A114:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8214A11C"))) PPC_WEAK_FUNC(sub_8214A11C);
PPC_FUNC_IMPL(__imp__sub_8214A11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214A120"))) PPC_WEAK_FUNC(sub_8214A120);
PPC_FUNC_IMPL(__imp__sub_8214A120) {
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
	// lwz r4,768(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x823e2340
	ctx.lr = 0x8214A140;
	sub_823E2340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214a178
	if (ctx.cr0.eq) goto loc_8214A178;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214a15c
	if (ctx.cr6.eq) goto loc_8214A15C;
	// lwz r4,768(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// bl 0x823e2518
	ctx.lr = 0x8214A15C;
	sub_823E2518(ctx, base);
loc_8214A15C:
	// lwz r11,772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214a170
	if (ctx.cr6.eq) goto loc_8214A170;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8214a18c
	goto loc_8214A18C;
loc_8214A170:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8214a18c
	goto loc_8214A18C;
loc_8214A178:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8214a190
	if (!ctx.cr6.eq) goto loc_8214A190;
	// li r11,11
	ctx.r11.s64 = 11;
loc_8214A18C:
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
loc_8214A190:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214A1A4"))) PPC_WEAK_FUNC(sub_8214A1A4);
PPC_FUNC_IMPL(__imp__sub_8214A1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214A1A8"))) PPC_WEAK_FUNC(sub_8214A1A8);
PPC_FUNC_IMPL(__imp__sub_8214A1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214A1B0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ebaa8
	ctx.lr = 0x8214A1C0;
	sub_821EBAA8(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x8214A1C4;
	sub_8215BD08(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82163ee8
	ctx.lr = 0x8214A1CC;
	sub_82163EE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82227ac0
	ctx.lr = 0x8214A1D8;
	sub_82227AC0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,768(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// lwz r3,-772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// bl 0x821f02c0
	ctx.lr = 0x8214A1E8;
	sub_821F02C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r11,2356(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2356);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82227aa0
	ctx.lr = 0x8214A204;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214a230
	if (ctx.cr0.eq) goto loc_8214A230;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82156820
	ctx.lr = 0x8214A228;
	sub_82156820(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
loc_8214A230:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214A238"))) PPC_WEAK_FUNC(sub_8214A238);
PPC_FUNC_IMPL(__imp__sub_8214A238) {
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
	// lwz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 780);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214a2c0
	if (ctx.cr6.eq) goto loc_8214A2C0;
	// lwz r3,784(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 784);
	// bl 0x821569e8
	ctx.lr = 0x8214A260;
	sub_821569E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214a2c0
	if (ctx.cr0.eq) goto loc_8214A2C0;
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x82156a10
	ctx.lr = 0x8214A270;
	sub_82156A10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214a2a8
	if (!ctx.cr0.eq) goto loc_8214A2A8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,16209
	ctx.r4.s64 = 16209;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82230af0
	ctx.lr = 0x8214A2A0;
	sub_82230AF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
loc_8214A2A8:
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x82156c58
	ctx.lr = 0x8214A2B0;
	sub_82156C58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// stw r10,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r10.u32);
loc_8214A2C0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214A2D4"))) PPC_WEAK_FUNC(sub_8214A2D4);
PPC_FUNC_IMPL(__imp__sub_8214A2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214A2D8"))) PPC_WEAK_FUNC(sub_8214A2D8);
PPC_FUNC_IMPL(__imp__sub_8214A2D8) {
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
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r10,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// lbz r10,7(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// stb r10,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r10.u8);
	// lbz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// lbz r10,9(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// stb r10,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r10.u8);
	// lhz r10,10(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// lhz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
	// lhz r10,14(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// sth r10,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r10.u16);
	// lbz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// lbz r10,17(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// lbz r10,18(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// stb r10,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r10.u8);
	// lbz r10,19(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// stb r10,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r10.u8);
loc_8214A380:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8214a380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214A380;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// subf r9,r31,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r31.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8214A3A0:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8214a3a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214A3A0;
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8214A3C4:
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8214a3c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214A3C4;
	// addi r4,r4,60
	ctx.r4.s64 = ctx.r4.s64 + 60;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x82248a40
	ctx.lr = 0x8214A3E4;
	sub_82248A40(ctx, base);
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

__attribute__((alias("__imp__sub_8214A3FC"))) PPC_WEAK_FUNC(sub_8214A3FC);
PPC_FUNC_IMPL(__imp__sub_8214A3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214A400"))) PPC_WEAK_FUNC(sub_8214A400);
PPC_FUNC_IMPL(__imp__sub_8214A400) {
	PPC_FUNC_PROLOGUE();
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r8,r3,6
	ctx.r8.s64 = ctx.r3.s64 + 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r8,-8
	ctx.r10.s64 = ctx.r8.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_8214A41C:
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// sth r9,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r9.u16);
	// sth r9,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r9.u16);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// sth r9,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r9.u16);
	// sthu r9,10(r10)
	// bdnz 0x8214a41c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214A41C;
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r10,r8,-8
	ctx.r10.s64 = ctx.r8.s64 + -8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8214A450:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// sth r9,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r9.u16);
	// sthu r9,10(r10)
	// bdnz 0x8214a450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214A450;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214A46C"))) PPC_WEAK_FUNC(sub_8214A46C);
PPC_FUNC_IMPL(__imp__sub_8214A46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214A470"))) PPC_WEAK_FUNC(sub_8214A470);
PPC_FUNC_IMPL(__imp__sub_8214A470) {
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
	// addi r3,r3,640
	ctx.r3.s64 = ctx.r3.s64 + 640;
	// bl 0x8214a400
	ctx.lr = 0x8214A48C;
	sub_8214A400(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164060
	ctx.lr = 0x8214A494;
	sub_82164060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,752
	ctx.r4.s64 = 752;
	// bl 0x822aa648
	ctx.lr = 0x8214A4A0;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214A4C0"))) PPC_WEAK_FUNC(sub_8214A4C0);
PPC_FUNC_IMPL(__imp__sub_8214A4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8214A4C8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28596
	ctx.r11.s64 = ctx.r11.s64 + -28596;
	// addi r3,r29,640
	ctx.r3.s64 = ctx.r29.s64 + 640;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x8214a400
	ctx.lr = 0x8214A4F4;
	sub_8214A400(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82164060
	ctx.lr = 0x8214A4FC;
	sub_82164060(ctx, base);
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// stw r30,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// stw r30,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r30.u32);
	// bl 0x82182e90
	ctx.lr = 0x8214A510;
	sub_82182E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8214A518;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214A524;
	sub_821837D0(ctx, base);
	// bl 0x821f18c0
	ctx.lr = 0x8214A528;
	sub_821F18C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8214a544
	if (!ctx.cr0.eq) goto loc_8214A544;
	// bl 0x82182e90
	ctx.lr = 0x8214A534;
	sub_82182E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821f2ea0
	ctx.lr = 0x8214A544;
	sub_821F2EA0(ctx, base);
loc_8214A544:
	// li r4,752
	ctx.r4.s64 = 752;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x8214A550;
	sub_822AA648(ctx, base);
	// stw r30,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// li r3,600
	ctx.r3.s64 = 600;
	// bl 0x82080000
	ctx.lr = 0x8214A560;
	sub_82080000(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8214a580
	if (ctx.cr0.eq) goto loc_8214A580;
	// bl 0x82182e90
	ctx.lr = 0x8214A56C;
	sub_82182E90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82156a90
	ctx.lr = 0x8214A57C;
	sub_82156A90(ctx, base);
	// b 0x8214a584
	goto loc_8214A584;
loc_8214A580:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8214A584:
	// stw r3,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r3.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x8214A590;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214a5a0
	if (ctx.cr0.eq) goto loc_8214A5A0;
	// bl 0x821568b8
	ctx.lr = 0x8214A59C;
	sub_821568B8(ctx, base);
	// b 0x8214a5a4
	goto loc_8214A5A4;
loc_8214A5A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8214A5A4:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214A5B0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8214A5BC"))) PPC_WEAK_FUNC(sub_8214A5BC);
PPC_FUNC_IMPL(__imp__sub_8214A5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214A5C0"))) PPC_WEAK_FUNC(sub_8214A5C0);
PPC_FUNC_IMPL(__imp__sub_8214A5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8214A5C8;
	sub_82248788(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,768(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// bl 0x821f02c0
	ctx.lr = 0x8214A5E0;
	sub_821F02C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// li r4,752
	ctx.r4.s64 = 752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822aa648
	ctx.lr = 0x8214A5F8;
	sub_822AA648(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8214a470
	ctx.lr = 0x8214A610;
	sub_8214A470(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,752
	ctx.r4.s64 = 752;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x8214A620;
	sub_822AA648(ctx, base);
	// stw r29,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822306a8
	ctx.lr = 0x8214A630;
	sub_822306A8(ctx, base);
	// li r5,752
	ctx.r5.s64 = 752;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x8214A640;
	sub_821847A8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8214A650"))) PPC_WEAK_FUNC(sub_8214A650);
PPC_FUNC_IMPL(__imp__sub_8214A650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8214A658;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r28,r3,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r30,10
	ctx.r30.s64 = 10;
loc_8214A66C:
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214a2d8
	ctx.lr = 0x8214A678;
	sub_8214A2D8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bne 0x8214a66c
	if (!ctx.cr0.eq) goto loc_8214A66C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8214A690"))) PPC_WEAK_FUNC(sub_8214A690);
PPC_FUNC_IMPL(__imp__sub_8214A690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8214A698;
	sub_82248784(ctx, base);
	// stwu r1,-3088(r1)
	ea = -3088 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,1824
	ctx.r3.s64 = ctx.r1.s64 + 1824;
	// bl 0x8214a400
	ctx.lr = 0x8214A6A8;
	sub_8214A400(ctx, base);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82164060
	ctx.lr = 0x8214A6B0;
	sub_82164060(ctx, base);
	// li r5,752
	ctx.r5.s64 = 752;
	// addi r4,r27,12
	ctx.r4.s64 = ctx.r27.s64 + 12;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x821847a8
	ctx.lr = 0x8214A6C0;
	sub_821847A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8209eda0
	ctx.lr = 0x8214A6C8;
	sub_8209EDA0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r4,768(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 768);
	// lwz r3,-772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// bl 0x821f02c0
	ctx.lr = 0x8214A6D8;
	sub_821F02C0(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230c00
	ctx.lr = 0x8214A6E4;
	sub_82230C00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214a740
	if (ctx.cr0.eq) goto loc_8214A740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8214A6F4;
	sub_8209EDA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163dd0
	ctx.lr = 0x8214A6FC;
	sub_82163DD0(ctx, base);
	// mulli r11,r31,1748
	ctx.r11.s64 = ctx.r31.s64 * 1748;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,5584
	ctx.r28.s64 = ctx.r11.s64 + 5584;
	// li r31,10
	ctx.r31.s64 = 10;
	// addi r30,r28,672
	ctx.r30.s64 = ctx.r28.s64 + 672;
loc_8214A714:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8214a2d8
	ctx.lr = 0x8214A720;
	sub_8214A2D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bne 0x8214a714
	if (!ctx.cr0.eq) goto loc_8214A714;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// addi r3,r1,1080
	ctx.r3.s64 = ctx.r1.s64 + 1080;
	// bl 0x821847a8
	ctx.lr = 0x8214A740;
	sub_821847A8(ctx, base);
loc_8214A740:
	// li r5,1100
	ctx.r5.s64 = 1100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x821847a8
	ctx.lr = 0x8214A750;
	sub_821847A8(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x8214A754;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,1184
	ctx.r4.s64 = ctx.r1.s64 + 1184;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214a778
	if (ctx.cr0.eq) goto loc_8214A778;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,764(r27)
	PPC_STORE_U32(ctx.r27.u32 + 764, ctx.r11.u32);
loc_8214A778:
	// addi r1,r1,3088
	ctx.r1.s64 = ctx.r1.s64 + 3088;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8214A780"))) PPC_WEAK_FUNC(sub_8214A780);
PPC_FUNC_IMPL(__imp__sub_8214A780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-28592
	ctx.r12.s64 = ctx.r12.s64 + -28592;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// nop 
	// addi r12,r12,-22600
	ctx.r12.s64 = ctx.r12.s64 + -22600;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8214A7B8"))) PPC_WEAK_FUNC(sub_8214A7B8);
PPC_FUNC_IMPL(__imp__sub_8214A7B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214a120
	sub_8214A120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214A7BC"))) PPC_WEAK_FUNC(sub_8214A7BC);
PPC_FUNC_IMPL(__imp__sub_8214A7BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214a1a8
	sub_8214A1A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214A7C0"))) PPC_WEAK_FUNC(sub_8214A7C0);
PPC_FUNC_IMPL(__imp__sub_8214A7C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82149c28
	sub_82149C28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214A7C4"))) PPC_WEAK_FUNC(sub_8214A7C4);
PPC_FUNC_IMPL(__imp__sub_8214A7C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214a5c0
	sub_8214A5C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214A7C8"))) PPC_WEAK_FUNC(sub_8214A7C8);
PPC_FUNC_IMPL(__imp__sub_8214A7C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82149c98
	sub_82149C98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214A7CC"))) PPC_WEAK_FUNC(sub_8214A7CC);
PPC_FUNC_IMPL(__imp__sub_8214A7CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214a238
	sub_8214A238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214A7D0"))) PPC_WEAK_FUNC(sub_8214A7D0);
PPC_FUNC_IMPL(__imp__sub_8214A7D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214a690
	sub_8214A690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214A7D4"))) PPC_WEAK_FUNC(sub_8214A7D4);
PPC_FUNC_IMPL(__imp__sub_8214A7D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82149cf8
	sub_82149CF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214A7D8"))) PPC_WEAK_FUNC(sub_8214A7D8);
PPC_FUNC_IMPL(__imp__sub_8214A7D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82149d70
	sub_82149D70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214A7DC"))) PPC_WEAK_FUNC(sub_8214A7DC);
PPC_FUNC_IMPL(__imp__sub_8214A7DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214A7E0"))) PPC_WEAK_FUNC(sub_8214A7E0);
PPC_FUNC_IMPL(__imp__sub_8214A7E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214A7FC"))) PPC_WEAK_FUNC(sub_8214A7FC);
PPC_FUNC_IMPL(__imp__sub_8214A7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214A800"))) PPC_WEAK_FUNC(sub_8214A800);
PPC_FUNC_IMPL(__imp__sub_8214A800) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,17
	ctx.r10.s64 = 17;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214A81C"))) PPC_WEAK_FUNC(sub_8214A81C);
PPC_FUNC_IMPL(__imp__sub_8214A81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214A820"))) PPC_WEAK_FUNC(sub_8214A820);
PPC_FUNC_IMPL(__imp__sub_8214A820) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x8214A840;
	sub_82185740(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-28580
	ctx.r10.s64 = ctx.r10.s64 + -28580;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8214A870"))) PPC_WEAK_FUNC(sub_8214A870);
PPC_FUNC_IMPL(__imp__sub_8214A870) {
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
	// addi r11,r11,-28580
	ctx.r11.s64 = ctx.r11.s64 + -28580;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821857f0
	ctx.lr = 0x8214A89C;
	sub_821857F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214a8b0
	if (ctx.cr0.eq) goto loc_8214A8B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8214A8B0;
	sub_82183E40(ctx, base);
loc_8214A8B0:
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

__attribute__((alias("__imp__sub_8214A8CC"))) PPC_WEAK_FUNC(sub_8214A8CC);
PPC_FUNC_IMPL(__imp__sub_8214A8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214A8D0"))) PPC_WEAK_FUNC(sub_8214A8D0);
PPC_FUNC_IMPL(__imp__sub_8214A8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
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

__attribute__((alias("__imp__sub_8214A8E4"))) PPC_WEAK_FUNC(sub_8214A8E4);
PPC_FUNC_IMPL(__imp__sub_8214A8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214A8E8"))) PPC_WEAK_FUNC(sub_8214A8E8);
PPC_FUNC_IMPL(__imp__sub_8214A8E8) {
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
	// bl 0x822225c8
	ctx.lr = 0x8214A900;
	sub_822225C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214a918
	if (ctx.cr0.eq) goto loc_8214A918;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82222680
	ctx.lr = 0x8214A914;
	sub_82222680(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8214A918:
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

__attribute__((alias("__imp__sub_8214A930"))) PPC_WEAK_FUNC(sub_8214A930);
PPC_FUNC_IMPL(__imp__sub_8214A930) {
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
	// bl 0x822225c8
	ctx.lr = 0x8214A948;
	sub_822225C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214a960
	if (ctx.cr0.eq) goto loc_8214A960;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x822226f8
	ctx.lr = 0x8214A95C;
	sub_822226F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8214A960:
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

__attribute__((alias("__imp__sub_8214A978"))) PPC_WEAK_FUNC(sub_8214A978);
PPC_FUNC_IMPL(__imp__sub_8214A978) {
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
	// li r31,6
	ctx.r31.s64 = 6;
	// bl 0x822225c8
	ctx.lr = 0x8214A990;
	sub_822225C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214aa0c
	if (ctx.cr0.eq) goto loc_8214AA0C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x822228b8
	ctx.lr = 0x8214A9A8;
	sub_822228B8(ctx, base);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bgt cr6,0x8214aa0c
	if (ctx.cr6.gt) goto loc_8214AA0C;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8214a9e0
	// bdzf 4*cr6+eq,0x8214a9e8
	// bdzf 4*cr6+eq,0x8214a9f0
	// bdzf 4*cr6+eq,0x8214a9f8
	// bdzf 4*cr6+eq,0x8214aa00
	// bdzf 4*cr6+eq,0x8214a9e8
	// bdzf 4*cr6+eq,0x8214a9d8
	// bne cr6,0x8214aa08
	if (!ctx.cr6.eq) goto loc_8214AA08;
loc_8214A9D8:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8214aa0c
	goto loc_8214AA0C;
loc_8214A9E0:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8214aa0c
	goto loc_8214AA0C;
loc_8214A9E8:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8214aa0c
	goto loc_8214AA0C;
loc_8214A9F0:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x8214aa0c
	goto loc_8214AA0C;
loc_8214A9F8:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x8214aa0c
	goto loc_8214AA0C;
loc_8214AA00:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x8214aa0c
	goto loc_8214AA0C;
loc_8214AA08:
	// li r31,7
	ctx.r31.s64 = 7;
loc_8214AA0C:
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

__attribute__((alias("__imp__sub_8214AA24"))) PPC_WEAK_FUNC(sub_8214AA24);
PPC_FUNC_IMPL(__imp__sub_8214AA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214AA28"))) PPC_WEAK_FUNC(sub_8214AA28);
PPC_FUNC_IMPL(__imp__sub_8214AA28) {
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
	// li r31,30201
	ctx.r31.s64 = 30201;
	// bl 0x822225c8
	ctx.lr = 0x8214AA40;
	sub_822225C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214aa5c
	if (ctx.cr0.eq) goto loc_8214AA5C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x822228c8
	ctx.lr = 0x8214AA58;
	sub_822228C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8214AA5C:
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

__attribute__((alias("__imp__sub_8214AA74"))) PPC_WEAK_FUNC(sub_8214AA74);
PPC_FUNC_IMPL(__imp__sub_8214AA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214AA78"))) PPC_WEAK_FUNC(sub_8214AA78);
PPC_FUNC_IMPL(__imp__sub_8214AA78) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82225028
	ctx.lr = 0x8214AA9C;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8214aac4
	if (ctx.cr6.eq) goto loc_8214AAC4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214aabc
	if (ctx.cr6.eq) goto loc_8214AABC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8214aac8
	if (!ctx.cr6.eq) goto loc_8214AAC8;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8214aac8
	goto loc_8214AAC8;
loc_8214AABC:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8214aac8
	goto loc_8214AAC8;
loc_8214AAC4:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8214AAC8:
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

__attribute__((alias("__imp__sub_8214AAE0"))) PPC_WEAK_FUNC(sub_8214AAE0);
PPC_FUNC_IMPL(__imp__sub_8214AAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214AAE8;
	sub_8224878C(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82227aa0
	ctx.lr = 0x8214AAF8;
	sub_82227AA0(ctx, base);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214ab0c
	if (ctx.cr0.eq) goto loc_8214AB0C;
	// lwz r3,-736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -736);
	// bl 0x82227848
	ctx.lr = 0x8214AB0C;
	sub_82227848(ctx, base);
loc_8214AB0C:
	// bl 0x82227aa0
	ctx.lr = 0x8214AB10;
	sub_82227AA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214ab30
	if (ctx.cr0.eq) goto loc_8214AB30;
	// bl 0x82227aa0
	ctx.lr = 0x8214AB1C;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214AB2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8214ab38
	goto loc_8214AB38;
loc_8214AB30:
	// lwz r3,-736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -736);
	// bl 0x82227a10
	ctx.lr = 0x8214AB38;
	sub_82227A10(ctx, base);
loc_8214AB38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157028
	ctx.lr = 0x8214AB40;
	sub_82157028(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82227aa0
	ctx.lr = 0x8214AB48;
	sub_82227AA0(ctx, base);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// bl 0x82154c88
	ctx.lr = 0x8214AB50;
	sub_82154C88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82227aa0
	ctx.lr = 0x8214AB58;
	sub_82227AA0(ctx, base);
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r29.u32);
	// bl 0x82227aa0
	ctx.lr = 0x8214AB60;
	sub_82227AA0(ctx, base);
	// stw r29,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228c88
	ctx.lr = 0x8214AB6C;
	sub_82228C88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228be0
	ctx.lr = 0x8214AB74;
	sub_82228BE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8215bd08
	ctx.lr = 0x8214AB80;
	sub_8215BD08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82256578
	ctx.lr = 0x8214AB8C;
	sub_82256578(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x821e6ef0
	ctx.lr = 0x8214AB98;
	sub_821E6EF0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x8214AB9C;
	sub_8215BD08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82256338
	ctx.lr = 0x8214ABAC;
	sub_82256338(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228b80
	ctx.lr = 0x8214ABB8;
	sub_82228B80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157048
	ctx.lr = 0x8214ABC0;
	sub_82157048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214ABD0;
	sub_82228CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214ABE0;
	sub_82228CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157028
	ctx.lr = 0x8214ABE8;
	sub_82157028(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214ABF8;
	sub_82228CB8(ctx, base);
	// bl 0x82156350
	ctx.lr = 0x8214ABFC;
	sub_82156350(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214AC0C;
	sub_82228CB8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82228b00
	ctx.lr = 0x8214AC14;
	sub_82228B00(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82228a28
	ctx.lr = 0x8214AC1C;
	sub_82228A28(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821562f0
	ctx.lr = 0x8214AC28;
	sub_821562F0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82229288
	ctx.lr = 0x8214AC34;
	sub_82229288(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214AC44;
	sub_82228CB8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82229288
	ctx.lr = 0x8214AC50;
	sub_82229288(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214AC60;
	sub_82228CB8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82229288
	ctx.lr = 0x8214AC6C;
	sub_82229288(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214AC7C;
	sub_82228CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157068
	ctx.lr = 0x8214AC84;
	sub_82157068(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214AC94;
	sub_82228CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821570a8
	ctx.lr = 0x8214AC9C;
	sub_821570A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214ACAC;
	sub_82228CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157088
	ctx.lr = 0x8214ACB4;
	sub_82157088(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214ACC4;
	sub_82228CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821570e8
	ctx.lr = 0x8214ACCC;
	sub_821570E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214ACDC;
	sub_82228CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214ACEC;
	sub_82228CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214ACFC;
	sub_82228CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214AD0C;
	sub_82228CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214AD1C;
	sub_82228CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214AD2C;
	sub_82228CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228cb8
	ctx.lr = 0x8214AD3C;
	sub_82228CB8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82222c08
	ctx.lr = 0x8214AD4C;
	sub_82222C08(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-14444
	ctx.r10.s64 = ctx.r10.s64 + -14444;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// bl 0x8209eda0
	ctx.lr = 0x8214AD70;
	sub_8209EDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214AD7C"))) PPC_WEAK_FUNC(sub_8214AD7C);
PPC_FUNC_IMPL(__imp__sub_8214AD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214AD80"))) PPC_WEAK_FUNC(sub_8214AD80);
PPC_FUNC_IMPL(__imp__sub_8214AD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214AD88;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82227aa0
	ctx.lr = 0x8214AD98;
	sub_82227AA0(ctx, base);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214adac
	if (ctx.cr0.eq) goto loc_8214ADAC;
	// lwz r3,-736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -736);
	// bl 0x82227848
	ctx.lr = 0x8214ADAC;
	sub_82227848(ctx, base);
loc_8214ADAC:
	// bl 0x82227aa0
	ctx.lr = 0x8214ADB0;
	sub_82227AA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214add0
	if (ctx.cr0.eq) goto loc_8214ADD0;
	// bl 0x82227aa0
	ctx.lr = 0x8214ADBC;
	sub_82227AA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214ADCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8214add8
	goto loc_8214ADD8;
loc_8214ADD0:
	// lwz r3,-736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -736);
	// bl 0x82227a10
	ctx.lr = 0x8214ADD8;
	sub_82227A10(ctx, base);
loc_8214ADD8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228ce8
	ctx.lr = 0x8214ADE0;
	sub_82228CE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228cc8
	ctx.lr = 0x8214ADE8;
	sub_82228CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157048
	ctx.lr = 0x8214ADF0;
	sub_82157048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228cb8
	ctx.lr = 0x8214AE00;
	sub_82228CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228cb8
	ctx.lr = 0x8214AE10;
	sub_82228CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157068
	ctx.lr = 0x8214AE18;
	sub_82157068(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228cb8
	ctx.lr = 0x8214AE28;
	sub_82228CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157088
	ctx.lr = 0x8214AE30;
	sub_82157088(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228cb8
	ctx.lr = 0x8214AE40;
	sub_82228CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228cb8
	ctx.lr = 0x8214AE50;
	sub_82228CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228cb8
	ctx.lr = 0x8214AE60;
	sub_82228CB8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82222d30
	ctx.lr = 0x8214AE70;
	sub_82222D30(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8214ae88
	if (ctx.cr0.eq) goto loc_8214AE88;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_8214AE88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82162518
	ctx.lr = 0x8214AE90;
	sub_82162518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214AE9C"))) PPC_WEAK_FUNC(sub_8214AE9C);
PPC_FUNC_IMPL(__imp__sub_8214AE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214AEA0"))) PPC_WEAK_FUNC(sub_8214AEA0);
PPC_FUNC_IMPL(__imp__sub_8214AEA0) {
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
	// bl 0x82222f50
	ctx.lr = 0x8214AEB8;
	sub_82222F50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214aee4
	if (ctx.cr0.eq) goto loc_8214AEE4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82222ea8
	ctx.lr = 0x8214AECC;
	sub_82222EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214aee4
	if (ctx.cr0.eq) goto loc_8214AEE4;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8214AEE4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214AEF8"))) PPC_WEAK_FUNC(sub_8214AEF8);
PPC_FUNC_IMPL(__imp__sub_8214AEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// b 0x822228d8
	sub_822228D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214AF04"))) PPC_WEAK_FUNC(sub_8214AF04);
PPC_FUNC_IMPL(__imp__sub_8214AF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214AF08"))) PPC_WEAK_FUNC(sub_8214AF08);
PPC_FUNC_IMPL(__imp__sub_8214AF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8214AF10;
	sub_82248788(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// bl 0x82221700
	ctx.lr = 0x8214AF28;
	sub_82221700(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// bl 0x822232b8
	ctx.lr = 0x8214AF34;
	sub_822232B8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8214afa8
	if (ctx.cr0.eq) goto loc_8214AFA8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228c88
	ctx.lr = 0x8214AF44;
	sub_82228C88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228be0
	ctx.lr = 0x8214AF4C;
	sub_82228BE0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82223140
	ctx.lr = 0x8214AF60;
	sub_82223140(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x8214AF64;
	sub_82227AA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214af90
	if (ctx.cr0.eq) goto loc_8214AF90;
	// bl 0x82227aa0
	ctx.lr = 0x8214AF70;
	sub_82227AA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82166180
	ctx.lr = 0x8214AF80;
	sub_82166180(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bl 0x82154c88
	ctx.lr = 0x8214AF88;
	sub_82154C88(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
loc_8214AF90:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// bl 0x8209eda0
	ctx.lr = 0x8214AFA8;
	sub_8209EDA0(ctx, base);
loc_8214AFA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8214AFB4"))) PPC_WEAK_FUNC(sub_8214AFB4);
PPC_FUNC_IMPL(__imp__sub_8214AFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214AFB8"))) PPC_WEAK_FUNC(sub_8214AFB8);
PPC_FUNC_IMPL(__imp__sub_8214AFB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221d98
	ctx.lr = 0x8214AFD8;
	sub_82221D98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214aff0
	if (ctx.cr0.eq) goto loc_8214AFF0;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8214AFF0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214B004"))) PPC_WEAK_FUNC(sub_8214B004);
PPC_FUNC_IMPL(__imp__sub_8214B004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B008"))) PPC_WEAK_FUNC(sub_8214B008);
PPC_FUNC_IMPL(__imp__sub_8214B008) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221a48
	ctx.lr = 0x8214B028;
	sub_82221A48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214b040
	if (ctx.cr0.eq) goto loc_8214B040;
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8214B040:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214B054"))) PPC_WEAK_FUNC(sub_8214B054);
PPC_FUNC_IMPL(__imp__sub_8214B054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B058"))) PPC_WEAK_FUNC(sub_8214B058);
PPC_FUNC_IMPL(__imp__sub_8214B058) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221ac0
	ctx.lr = 0x8214B078;
	sub_82221AC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214b090
	if (ctx.cr0.eq) goto loc_8214B090;
	// li r11,14
	ctx.r11.s64 = 14;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8214B090:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214B0A4"))) PPC_WEAK_FUNC(sub_8214B0A4);
PPC_FUNC_IMPL(__imp__sub_8214B0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B0A8"))) PPC_WEAK_FUNC(sub_8214B0A8);
PPC_FUNC_IMPL(__imp__sub_8214B0A8) {
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
	// bl 0x8215bd60
	ctx.lr = 0x8214B0C0;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214b0d8
	if (ctx.cr6.eq) goto loc_8214B0D8;
	// bl 0x8214b008
	ctx.lr = 0x8214B0D4;
	sub_8214B008(ctx, base);
	// b 0x8214b0dc
	goto loc_8214B0DC;
loc_8214B0D8:
	// bl 0x8214b058
	ctx.lr = 0x8214B0DC;
	sub_8214B058(ctx, base);
loc_8214B0DC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214B0F0"))) PPC_WEAK_FUNC(sub_8214B0F0);
PPC_FUNC_IMPL(__imp__sub_8214B0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// b 0x82221b38
	sub_82221B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B0FC"))) PPC_WEAK_FUNC(sub_8214B0FC);
PPC_FUNC_IMPL(__imp__sub_8214B0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B100"))) PPC_WEAK_FUNC(sub_8214B100);
PPC_FUNC_IMPL(__imp__sub_8214B100) {
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
	// bne cr6,0x8214b168
	if (!ctx.cr6.eq) goto loc_8214B168;
	// bl 0x8214aa78
	ctx.lr = 0x8214B124;
	sub_8214AA78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8214b160
	if (ctx.cr6.eq) goto loc_8214B160;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8214b168
	if (!ctx.cr6.eq) goto loc_8214B168;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x822219a8
	ctx.lr = 0x8214B140;
	sub_822219A8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// bne 0x8214b158
	if (!ctx.cr0.eq) goto loc_8214B158;
	// li r11,7
	ctx.r11.s64 = 7;
loc_8214B158:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8214b168
	goto loc_8214B168;
loc_8214B160:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8214B168:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214B17C"))) PPC_WEAK_FUNC(sub_8214B17C);
PPC_FUNC_IMPL(__imp__sub_8214B17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B180"))) PPC_WEAK_FUNC(sub_8214B180);
PPC_FUNC_IMPL(__imp__sub_8214B180) {
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
	// bne cr6,0x8214b1d0
	if (!ctx.cr6.eq) goto loc_8214B1D0;
	// bl 0x8214aa78
	ctx.lr = 0x8214B1A4;
	sub_8214AA78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8214b1c8
	if (ctx.cr6.eq) goto loc_8214B1C8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8214b1d0
	if (!ctx.cr6.eq) goto loc_8214B1D0;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x8214b1d0
	goto loc_8214B1D0;
loc_8214B1C8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8214B1D0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214B1E4"))) PPC_WEAK_FUNC(sub_8214B1E4);
PPC_FUNC_IMPL(__imp__sub_8214B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B1E8"))) PPC_WEAK_FUNC(sub_8214B1E8);
PPC_FUNC_IMPL(__imp__sub_8214B1E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8214b218
	if (ctx.cr6.eq) goto loc_8214B218;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8214b224
	goto loc_8214B224;
loc_8214B218:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214B224:
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B230"))) PPC_WEAK_FUNC(sub_8214B230);
PPC_FUNC_IMPL(__imp__sub_8214B230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-28568
	ctx.r12.s64 = ctx.r12.s64 + -28568;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// nop 
	// addi r12,r12,-19864
	ctx.r12.s64 = ctx.r12.s64 + -19864;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8214B268"))) PPC_WEAK_FUNC(sub_8214B268);
PPC_FUNC_IMPL(__imp__sub_8214B268) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b180
	sub_8214B180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B26C"))) PPC_WEAK_FUNC(sub_8214B26C);
PPC_FUNC_IMPL(__imp__sub_8214B26C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b100
	sub_8214B100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B270"))) PPC_WEAK_FUNC(sub_8214B270);
PPC_FUNC_IMPL(__imp__sub_8214B270) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b180
	sub_8214B180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B274"))) PPC_WEAK_FUNC(sub_8214B274);
PPC_FUNC_IMPL(__imp__sub_8214B274) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b180
	sub_8214B180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B278"))) PPC_WEAK_FUNC(sub_8214B278);
PPC_FUNC_IMPL(__imp__sub_8214B278) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b100
	sub_8214B100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B27C"))) PPC_WEAK_FUNC(sub_8214B27C);
PPC_FUNC_IMPL(__imp__sub_8214B27C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b180
	sub_8214B180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B280"))) PPC_WEAK_FUNC(sub_8214B280);
PPC_FUNC_IMPL(__imp__sub_8214B280) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b180
	sub_8214B180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B284"))) PPC_WEAK_FUNC(sub_8214B284);
PPC_FUNC_IMPL(__imp__sub_8214B284) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b180
	sub_8214B180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B288"))) PPC_WEAK_FUNC(sub_8214B288);
PPC_FUNC_IMPL(__imp__sub_8214B288) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b180
	sub_8214B180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B28C"))) PPC_WEAK_FUNC(sub_8214B28C);
PPC_FUNC_IMPL(__imp__sub_8214B28C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b180
	sub_8214B180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B290"))) PPC_WEAK_FUNC(sub_8214B290);
PPC_FUNC_IMPL(__imp__sub_8214B290) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b180
	sub_8214B180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B294"))) PPC_WEAK_FUNC(sub_8214B294);
PPC_FUNC_IMPL(__imp__sub_8214B294) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b180
	sub_8214B180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B298"))) PPC_WEAK_FUNC(sub_8214B298);
PPC_FUNC_IMPL(__imp__sub_8214B298) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b180
	sub_8214B180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B29C"))) PPC_WEAK_FUNC(sub_8214B29C);
PPC_FUNC_IMPL(__imp__sub_8214B29C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8214b180
	sub_8214B180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B2A0"))) PPC_WEAK_FUNC(sub_8214B2A0);
PPC_FUNC_IMPL(__imp__sub_8214B2A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B2A4"))) PPC_WEAK_FUNC(sub_8214B2A4);
PPC_FUNC_IMPL(__imp__sub_8214B2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B2A8"))) PPC_WEAK_FUNC(sub_8214B2A8);
PPC_FUNC_IMPL(__imp__sub_8214B2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8214B2B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-28344
	ctx.r10.s64 = ctx.r10.s64 + -28344;
	// addi r9,r9,-28480
	ctx.r9.s64 = ctx.r9.s64 + -28480;
	// stw r11,760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 760, ctx.r11.u32);
	// addi r8,r8,-28488
	ctx.r8.s64 = ctx.r8.s64 + -28488;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// addi r3,r3,784
	ctx.r3.s64 = ctx.r3.s64 + 784;
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// bl 0x821b1d48
	ctx.lr = 0x8214B2F8;
	sub_821B1D48(ctx, base);
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// bl 0x8209eda0
	ctx.lr = 0x8214B300;
	sub_8209EDA0(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x821571f0
	ctx.lr = 0x8214B308;
	sub_821571F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x8214B310;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x8214B318;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x8214B320;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214B328"))) PPC_WEAK_FUNC(sub_8214B328);
PPC_FUNC_IMPL(__imp__sub_8214B328) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1088, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B330"))) PPC_WEAK_FUNC(sub_8214B330);
PPC_FUNC_IMPL(__imp__sub_8214B330) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1088(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B338"))) PPC_WEAK_FUNC(sub_8214B338);
PPC_FUNC_IMPL(__imp__sub_8214B338) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B340"))) PPC_WEAK_FUNC(sub_8214B340);
PPC_FUNC_IMPL(__imp__sub_8214B340) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1124, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B34C"))) PPC_WEAK_FUNC(sub_8214B34C);
PPC_FUNC_IMPL(__imp__sub_8214B34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B350"))) PPC_WEAK_FUNC(sub_8214B350);
PPC_FUNC_IMPL(__imp__sub_8214B350) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1128, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B35C"))) PPC_WEAK_FUNC(sub_8214B35C);
PPC_FUNC_IMPL(__imp__sub_8214B35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B360"))) PPC_WEAK_FUNC(sub_8214B360);
PPC_FUNC_IMPL(__imp__sub_8214B360) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// b 0x82157218
	sub_82157218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B368"))) PPC_WEAK_FUNC(sub_8214B368);
PPC_FUNC_IMPL(__imp__sub_8214B368) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// b 0x82157220
	sub_82157220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B370"))) PPC_WEAK_FUNC(sub_8214B370);
PPC_FUNC_IMPL(__imp__sub_8214B370) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3d30
	sub_823C3D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B374"))) PPC_WEAK_FUNC(sub_8214B374);
PPC_FUNC_IMPL(__imp__sub_8214B374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B378"))) PPC_WEAK_FUNC(sub_8214B378);
PPC_FUNC_IMPL(__imp__sub_8214B378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8214b3e4
	if (ctx.cr6.eq) goto loc_8214B3E4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8214b3d4
	if (ctx.cr6.eq) goto loc_8214B3D4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214b3c4
	if (ctx.cr6.eq) goto loc_8214B3C4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8214b3b4
	if (ctx.cr6.eq) goto loc_8214B3B4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8214B3B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8214B3C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8214B3D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8214B3E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8214B3F4"))) PPC_WEAK_FUNC(sub_8214B3F4);
PPC_FUNC_IMPL(__imp__sub_8214B3F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B3F8"))) PPC_WEAK_FUNC(sub_8214B3F8);
PPC_FUNC_IMPL(__imp__sub_8214B3F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8214b494
	if (ctx.cr6.eq) goto loc_8214B494;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8214b484
	if (ctx.cr6.eq) goto loc_8214B484;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214b474
	if (ctx.cr6.eq) goto loc_8214B474;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8214b464
	if (ctx.cr6.eq) goto loc_8214B464;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8214b454
	if (ctx.cr6.eq) goto loc_8214B454;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8214b444
	if (ctx.cr6.eq) goto loc_8214B444;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8214B444:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8214B454:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8214B464:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8214B474:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8214B484:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8214B494:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8214B4A4"))) PPC_WEAK_FUNC(sub_8214B4A4);
PPC_FUNC_IMPL(__imp__sub_8214B4A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B4A8"))) PPC_WEAK_FUNC(sub_8214B4A8);
PPC_FUNC_IMPL(__imp__sub_8214B4A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B4B4"))) PPC_WEAK_FUNC(sub_8214B4B4);
PPC_FUNC_IMPL(__imp__sub_8214B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B4B8"))) PPC_WEAK_FUNC(sub_8214B4B8);
PPC_FUNC_IMPL(__imp__sub_8214B4B8) {
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
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214B4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214b4ec
	if (ctx.cr0.eq) goto loc_8214B4EC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r11.u32);
loc_8214B4EC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214B500"))) PPC_WEAK_FUNC(sub_8214B500);
PPC_FUNC_IMPL(__imp__sub_8214B500) {
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
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214b524
	if (ctx.cr6.eq) goto loc_8214B524;
	// bl 0x82154aa8
	ctx.lr = 0x8214B524;
	sub_82154AA8(ctx, base);
loc_8214B524:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214B538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214B554"))) PPC_WEAK_FUNC(sub_8214B554);
PPC_FUNC_IMPL(__imp__sub_8214B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B558"))) PPC_WEAK_FUNC(sub_8214B558);
PPC_FUNC_IMPL(__imp__sub_8214B558) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214B564"))) PPC_WEAK_FUNC(sub_8214B564);
PPC_FUNC_IMPL(__imp__sub_8214B564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B568"))) PPC_WEAK_FUNC(sub_8214B568);
PPC_FUNC_IMPL(__imp__sub_8214B568) {
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
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214b58c
	if (ctx.cr6.eq) goto loc_8214B58C;
	// bl 0x82154aa8
	ctx.lr = 0x8214B58C;
	sub_82154AA8(ctx, base);
loc_8214B58C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214B5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214B5BC"))) PPC_WEAK_FUNC(sub_8214B5BC);
PPC_FUNC_IMPL(__imp__sub_8214B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B5C0"))) PPC_WEAK_FUNC(sub_8214B5C0);
PPC_FUNC_IMPL(__imp__sub_8214B5C0) {
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
	// bl 0x823c53c0
	ctx.lr = 0x8214B5DC;
	sub_823C53C0(ctx, base);
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214b63c
	if (ctx.cr6.eq) goto loc_8214B63C;
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214B600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214B61C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8214b63c
	if (ctx.cr6.eq) goto loc_8214B63C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214B63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214B63C:
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

__attribute__((alias("__imp__sub_8214B654"))) PPC_WEAK_FUNC(sub_8214B654);
PPC_FUNC_IMPL(__imp__sub_8214B654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B658"))) PPC_WEAK_FUNC(sub_8214B658);
PPC_FUNC_IMPL(__imp__sub_8214B658) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x8214b8f8
	sub_8214B8F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B660"))) PPC_WEAK_FUNC(sub_8214B660);
PPC_FUNC_IMPL(__imp__sub_8214B660) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x8214b8f8
	sub_8214B8F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B668"))) PPC_WEAK_FUNC(sub_8214B668);
PPC_FUNC_IMPL(__imp__sub_8214B668) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B674"))) PPC_WEAK_FUNC(sub_8214B674);
PPC_FUNC_IMPL(__imp__sub_8214B674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B678"))) PPC_WEAK_FUNC(sub_8214B678);
PPC_FUNC_IMPL(__imp__sub_8214B678) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B684"))) PPC_WEAK_FUNC(sub_8214B684);
PPC_FUNC_IMPL(__imp__sub_8214B684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B688"))) PPC_WEAK_FUNC(sub_8214B688);
PPC_FUNC_IMPL(__imp__sub_8214B688) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B694"))) PPC_WEAK_FUNC(sub_8214B694);
PPC_FUNC_IMPL(__imp__sub_8214B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B698"))) PPC_WEAK_FUNC(sub_8214B698);
PPC_FUNC_IMPL(__imp__sub_8214B698) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B6A4"))) PPC_WEAK_FUNC(sub_8214B6A4);
PPC_FUNC_IMPL(__imp__sub_8214B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B6A8"))) PPC_WEAK_FUNC(sub_8214B6A8);
PPC_FUNC_IMPL(__imp__sub_8214B6A8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B6B4"))) PPC_WEAK_FUNC(sub_8214B6B4);
PPC_FUNC_IMPL(__imp__sub_8214B6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B6B8"))) PPC_WEAK_FUNC(sub_8214B6B8);
PPC_FUNC_IMPL(__imp__sub_8214B6B8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,512
	ctx.r4.s64 = 512;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214B6C4"))) PPC_WEAK_FUNC(sub_8214B6C4);
PPC_FUNC_IMPL(__imp__sub_8214B6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214B6C8"))) PPC_WEAK_FUNC(sub_8214B6C8);
PPC_FUNC_IMPL(__imp__sub_8214B6C8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

