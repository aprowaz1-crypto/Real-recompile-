#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820D367C"))) PPC_WEAK_FUNC(sub_820D367C);
PPC_FUNC_IMPL(__imp__sub_820D367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3680"))) PPC_WEAK_FUNC(sub_820D3680);
PPC_FUNC_IMPL(__imp__sub_820D3680) {
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
	// bl 0x820d3060
	ctx.lr = 0x820D369C;
	sub_820D3060(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820D36A0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820d36b8
	if (ctx.cr6.eq) goto loc_820D36B8;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82183448
	ctx.lr = 0x820D36B4;
	sub_82183448(ctx, base);
	// b 0x820d36c0
	goto loc_820D36C0;
loc_820D36B8:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821845a0
	ctx.lr = 0x820D36C0;
	sub_821845A0(ctx, base);
loc_820D36C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d36d4
	if (ctx.cr6.eq) goto loc_820D36D4;
	// bl 0x820d30d0
	ctx.lr = 0x820D36CC;
	sub_820D30D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820d36d8
	goto loc_820D36D8;
loc_820D36D4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D36D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d3200
	ctx.lr = 0x820D36E4;
	sub_820D3200(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,-9772(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9772);
	// blt cr6,0x820d3728
	if (ctx.cr6.lt) goto loc_820D3728;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3754
	if (ctx.cr6.eq) goto loc_820D3754;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bne cr6,0x820d3720
	if (!ctx.cr6.eq) goto loc_820D3720;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820D3720:
	// lwz r3,1972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1972);
	// b 0x820d3744
	goto loc_820D3744;
loc_820D3728:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d3754
	if (ctx.cr6.eq) goto loc_820D3754;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bne cr6,0x820d3740
	if (!ctx.cr6.eq) goto loc_820D3740;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820D3740:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_820D3744:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D3754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D3754:
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

__attribute__((alias("__imp__sub_820D376C"))) PPC_WEAK_FUNC(sub_820D376C);
PPC_FUNC_IMPL(__imp__sub_820D376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3770"))) PPC_WEAK_FUNC(sub_820D3770);
PPC_FUNC_IMPL(__imp__sub_820D3770) {
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
	// bl 0x820d3190
	ctx.lr = 0x820D3790;
	sub_820D3190(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d37ac
	if (ctx.cr6.eq) goto loc_820D37AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D37A8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D37AC:
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

__attribute__((alias("__imp__sub_820D37C4"))) PPC_WEAK_FUNC(sub_820D37C4);
PPC_FUNC_IMPL(__imp__sub_820D37C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D37C8"))) PPC_WEAK_FUNC(sub_820D37C8);
PPC_FUNC_IMPL(__imp__sub_820D37C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D37D0;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82185740
	ctx.lr = 0x820D37F4;
	sub_82185740(ctx, base);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21324
	ctx.r4.u64 = ctx.r4.u64 | 21324;
	// bl 0x82188378
	ctx.lr = 0x820D3808;
	sub_82188378(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// addi r5,r8,14868
	ctx.r5.s64 = ctx.r8.s64 + 14868;
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r4,r7,14836
	ctx.r4.s64 = ctx.r7.s64 + 14836;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f9,56(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stw r31,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r31.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lwz r11,-1744(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -1744);
	// lfs f8,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stfs f8,64(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x821d0f90
	ctx.lr = 0x820D3890;
	sub_821D0F90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r11.u32);
	// lfs f7,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,208(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D38B0"))) PPC_WEAK_FUNC(sub_820D38B0);
PPC_FUNC_IMPL(__imp__sub_820D38B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x820d3af0
	sub_820D3AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D38B8"))) PPC_WEAK_FUNC(sub_820D38B8);
PPC_FUNC_IMPL(__imp__sub_820D38B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D38C0;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x820d3900
	if (!ctx.cr6.gt) goto loc_820D3900;
	// stfs f31,56(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
loc_820D3900:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820d390c
	if (!ctx.cr6.lt) goto loc_820D390C;
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_820D390C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// addi r29,r11,-7560
	ctx.r29.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x820d3958
	if (!ctx.cr6.lt) goto loc_820D3958;
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f1,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822489f8
	ctx.lr = 0x820D3944;
	sub_822489F8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820d3958
	if (!ctx.cr6.eq) goto loc_820D3958;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4940(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4940, ctx.r11.u32);
loc_820D3958:
	// bl 0x8215bd60
	ctx.lr = 0x820D395C;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d3978
	if (!ctx.cr6.eq) goto loc_820D3978;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d3a38
	if (!ctx.cr6.eq) goto loc_820D3A38;
loc_820D3978:
	// bl 0x8215bd60
	ctx.lr = 0x820D397C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d39c4
	if (!ctx.cr6.eq) goto loc_820D39C4;
	// bl 0x820ecc70
	ctx.lr = 0x820D398C;
	sub_820ECC70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x820d39c4
	if (ctx.cr6.gt) goto loc_820D39C4;
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822489f8
	ctx.lr = 0x820D399C;
	sub_822489F8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820d39c4
	if (!ctx.cr6.lt) goto loc_820D39C4;
	// lfs f1,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822489f8
	ctx.lr = 0x820D39B0;
	sub_822489F8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,-4940(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4940, ctx.r11.u32);
loc_820D39C4:
	// lfs f0,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x820d39f0
	if (ctx.cr6.lt) goto loc_820D39F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820d39fc
	if (!ctx.cr6.gt) goto loc_820D39FC;
loc_820D39F0:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820d3a08
	if (!ctx.cr6.gt) goto loc_820D3A08;
loc_820D39FC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// stfs f13,208(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
loc_820D3A08:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d3a20
	if (!ctx.cr6.eq) goto loc_820D3A20;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820d3a38
	if (ctx.cr6.gt) goto loc_820D3A38;
loc_820D3A20:
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
	ctx.lr = 0x820D3A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D3A38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D3A44"))) PPC_WEAK_FUNC(sub_820D3A44);
PPC_FUNC_IMPL(__imp__sub_820D3A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3A48"))) PPC_WEAK_FUNC(sub_820D3A48);
PPC_FUNC_IMPL(__imp__sub_820D3A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D3A50;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r29,-9772(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820d3ac4
	if (ctx.cr6.eq) goto loc_820D3AC4;
	// bl 0x82080000
	ctx.lr = 0x820D3A7C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3aa0
	if (ctx.cr6.eq) goto loc_820D3AA0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820d37c8
	ctx.lr = 0x820D3A94;
	sub_820D37C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// bne cr6,0x820d3aa4
	if (!ctx.cr6.eq) goto loc_820D3AA4;
loc_820D3AA0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820D3AA4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D3AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D3AC4:
	// bl 0x82080000
	ctx.lr = 0x820D3AC8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3ae4
	if (ctx.cr6.eq) goto loc_820D3AE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f1,8340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d37c8
	ctx.lr = 0x820D3AE4;
	sub_820D37C8(ctx, base);
loc_820D3AE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D3AF0"))) PPC_WEAK_FUNC(sub_820D3AF0);
PPC_FUNC_IMPL(__imp__sub_820D3AF0) {
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
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,14868
	ctx.r8.s64 = ctx.r11.s64 + 14868;
	// addi r7,r10,14836
	ctx.r7.s64 = ctx.r10.s64 + 14836;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r11,-1744(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1744);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r6.u32);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// bl 0x821883b8
	ctx.lr = 0x820D3B44;
	sub_821883B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x820D3B4C;
	sub_821857F0(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820d3b68
	if (ctx.cr6.eq) goto loc_820D3B68;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D3B64;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D3B68:
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

__attribute__((alias("__imp__sub_820D3B80"))) PPC_WEAK_FUNC(sub_820D3B80);
PPC_FUNC_IMPL(__imp__sub_820D3B80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820D3BA0"))) PPC_WEAK_FUNC(sub_820D3BA0);
PPC_FUNC_IMPL(__imp__sub_820D3BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D3BA4"))) PPC_WEAK_FUNC(sub_820D3BA4);
PPC_FUNC_IMPL(__imp__sub_820D3BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3BA8"))) PPC_WEAK_FUNC(sub_820D3BA8);
PPC_FUNC_IMPL(__imp__sub_820D3BA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820D3BC4"))) PPC_WEAK_FUNC(sub_820D3BC4);
PPC_FUNC_IMPL(__imp__sub_820D3BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3BC8"))) PPC_WEAK_FUNC(sub_820D3BC8);
PPC_FUNC_IMPL(__imp__sub_820D3BC8) {
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
	// lis r4,22862
	ctx.r4.s64 = 1498284032;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,24950
	ctx.r4.u64 = ctx.r4.u64 | 24950;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820D3BF4;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r10,r11,14880
	ctx.r10.s64 = ctx.r11.s64 + 14880;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82183850
	ctx.lr = 0x820D3C0C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820d3c24
	if (ctx.cr6.eq) goto loc_820D3C24;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82183448
	ctx.lr = 0x820D3C20;
	sub_82183448(ctx, base);
	// b 0x820d3c2c
	goto loc_820D3C2C;
loc_820D3C24:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821845a0
	ctx.lr = 0x820D3C2C;
	sub_821845A0(ctx, base);
loc_820D3C2C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d3c44
	if (ctx.cr6.eq) goto loc_820D3C44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820df518
	ctx.lr = 0x820D3C3C;
	sub_820DF518(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820d3c48
	goto loc_820D3C48;
loc_820D3C44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D3C48:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820D3C68"))) PPC_WEAK_FUNC(sub_820D3C68);
PPC_FUNC_IMPL(__imp__sub_820D3C68) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,14880
	ctx.r10.s64 = ctx.r11.s64 + 14880;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820d3cb0
	if (ctx.cr6.eq) goto loc_820D3CB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D3CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D3CB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821883b8
	ctx.lr = 0x820D3CC0;
	sub_821883B8(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d3cdc
	if (ctx.cr6.eq) goto loc_820D3CDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D3CD8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D3CDC:
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

__attribute__((alias("__imp__sub_820D3CF4"))) PPC_WEAK_FUNC(sub_820D3CF4);
PPC_FUNC_IMPL(__imp__sub_820D3CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3CF8"))) PPC_WEAK_FUNC(sub_820D3CF8);
PPC_FUNC_IMPL(__imp__sub_820D3CF8) {
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
	// lwz r11,1924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3d40
	if (ctx.cr6.eq) goto loc_820D3D40;
	// lbz r11,427(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 427);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820d3d40
	if (!ctx.cr6.eq) goto loc_820D3D40;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r3,-5056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5056);
	// bl 0x820ed8c0
	ctx.lr = 0x820D3D34;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d3d40
	if (ctx.cr6.eq) goto loc_820D3D40;
	// li r31,10
	ctx.r31.s64 = 10;
loc_820D3D40:
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

__attribute__((alias("__imp__sub_820D3D58"))) PPC_WEAK_FUNC(sub_820D3D58);
PPC_FUNC_IMPL(__imp__sub_820D3D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820D3D60;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
	// lwz r11,1584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r26,-5056(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d3da8
	if (ctx.cr6.eq) goto loc_820D3DA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,2081
	ctx.r29.s64 = 2081;
	// stw r28,1584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1584, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820D3DA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208dbf0
	ctx.lr = 0x820D3DB0;
	sub_8208DBF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d3e04
	if (ctx.cr6.eq) goto loc_820D3E04;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c3328
	ctx.lr = 0x820D3DC4;
	sub_820C3328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d3e04
	if (!ctx.cr6.eq) goto loc_820D3E04;
	// lwz r11,1908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3e04
	if (ctx.cr6.eq) goto loc_820D3E04;
	// lwz r11,576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d3e04
	if (ctx.cr6.eq) goto loc_820D3E04;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820ed8c0
	ctx.lr = 0x820D3DF8;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d3e04
	if (ctx.cr6.eq) goto loc_820D3E04;
	// li r28,100
	ctx.r28.s64 = 100;
loc_820D3E04:
	// lwz r11,1924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3e3c
	if (ctx.cr6.eq) goto loc_820D3E3C;
	// lbz r11,427(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 427);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820d3e3c
	if (!ctx.cr6.eq) goto loc_820D3E3C;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r3,-5056(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5056);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820ed8c0
	ctx.lr = 0x820D3E30;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d3e3c
	if (ctx.cr6.eq) goto loc_820D3E3C;
	// li r31,10
	ctx.r31.s64 = 10;
loc_820D3E3C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f03a8
	ctx.lr = 0x820D3E54;
	sub_820F03A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820D3E60"))) PPC_WEAK_FUNC(sub_820D3E60);
PPC_FUNC_IMPL(__imp__sub_820D3E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820D3E68;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3ebc
	if (ctx.cr6.eq) goto loc_820D3EBC;
	// lbz r11,427(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 427);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820d3ebc
	if (!ctx.cr6.eq) goto loc_820D3EBC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r3,-5056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5056);
	// bl 0x820ed8c0
	ctx.lr = 0x820D3EAC;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d3eb8
	if (ctx.cr6.eq) goto loc_820D3EB8;
	// li r31,10
	ctx.r31.s64 = 10;
loc_820D3EB8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_820D3EBC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f03a8
	ctx.lr = 0x820D3ED0;
	sub_820F03A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820D3EDC"))) PPC_WEAK_FUNC(sub_820D3EDC);
PPC_FUNC_IMPL(__imp__sub_820D3EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D3EE0"))) PPC_WEAK_FUNC(sub_820D3EE0);
PPC_FUNC_IMPL(__imp__sub_820D3EE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x820d3f80
	sub_820D3F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D3EE8"))) PPC_WEAK_FUNC(sub_820D3EE8);
PPC_FUNC_IMPL(__imp__sub_820D3EE8) {
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
	// lis r4,17517
	ctx.r4.s64 = 1147994112;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,31056
	ctx.r4.u64 = ctx.r4.u64 | 31056;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820D3F14;
	sub_82188378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82185740
	ctx.lr = 0x820D3F24;
	sub_82185740(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r7,r11,-7560
	ctx.r7.s64 = ctx.r11.s64 + -7560;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r6,r9,14920
	ctx.r6.s64 = ctx.r9.s64 + 14920;
	// addi r5,r8,14912
	ctx.r5.s64 = ctx.r8.s64 + 14912;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// stw r10,1496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1496, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820D3F80"))) PPC_WEAK_FUNC(sub_820D3F80);
PPC_FUNC_IMPL(__imp__sub_820D3F80) {
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
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,14920
	ctx.r8.s64 = ctx.r11.s64 + 14920;
	// addi r7,r9,14912
	ctx.r7.s64 = ctx.r9.s64 + 14912;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,1496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1496, ctx.r6.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821857f0
	ctx.lr = 0x820D3FC8;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820D3FD0;
	sub_821883B8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820d3fec
	if (ctx.cr6.eq) goto loc_820D3FEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D3FE8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D3FEC:
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

__attribute__((alias("__imp__sub_820D4004"))) PPC_WEAK_FUNC(sub_820D4004);
PPC_FUNC_IMPL(__imp__sub_820D4004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4008"))) PPC_WEAK_FUNC(sub_820D4008);
PPC_FUNC_IMPL(__imp__sub_820D4008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D4010;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,-7560
	ctx.r8.s64 = ctx.r11.s64 + -7560;
	// lwz r29,1920(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1920);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lwz r30,52(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x820d406c
	if (!ctx.cr6.lt) goto loc_820D406C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r30,r30,0,8,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// bl 0x820c5258
	ctx.lr = 0x820D404C;
	sub_820C5258(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d406c
	if (ctx.cr6.eq) goto loc_820D406C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820c36d8
	ctx.lr = 0x820D405C;
	sub_820C36D8(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x820d406c
	if (!ctx.cr6.gt) goto loc_820D406C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_820D406C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d4090
	if (ctx.cr6.eq) goto loc_820D4090;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r30,224
	ctx.r30.s64 = 14680064;
	// lwz r10,1284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d4090
	if (ctx.cr6.eq) goto loc_820D4090;
	// lis r30,160
	ctx.r30.s64 = 10485760;
loc_820D4090:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820c66e8
	ctx.lr = 0x820D409C;
	sub_820C66E8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bgt 0x820d40c8
	if (ctx.cr0.gt) goto loc_820D40C8;
	// addic. r3,r31,-32
	ctx.xer.ca = ctx.r31.u32 > 31;
	ctx.r3.s64 = ctx.r31.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820d40c8
	if (ctx.cr0.eq) goto loc_820D40C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D40C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D40C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D40D0"))) PPC_WEAK_FUNC(sub_820D40D0);
PPC_FUNC_IMPL(__imp__sub_820D40D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8464);
	// b 0x820e01c0
	sub_820E01C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D40E4"))) PPC_WEAK_FUNC(sub_820D40E4);
PPC_FUNC_IMPL(__imp__sub_820D40E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D40E8"))) PPC_WEAK_FUNC(sub_820D40E8);
PPC_FUNC_IMPL(__imp__sub_820D40E8) {
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
	// bl 0x820ae430
	ctx.lr = 0x820D40F8;
	sub_820AE430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4114
	if (ctx.cr6.eq) goto loc_820D4114;
	// bl 0x820ae430
	ctx.lr = 0x820D4104;
	sub_820AE430(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D4114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D4114:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D4124"))) PPC_WEAK_FUNC(sub_820D4124);
PPC_FUNC_IMPL(__imp__sub_820D4124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4128"))) PPC_WEAK_FUNC(sub_820D4128);
PPC_FUNC_IMPL(__imp__sub_820D4128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D4130;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,9
	ctx.r29.s64 = 9;
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
loc_820D4140:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d4164
	if (ctx.cr6.eq) goto loc_820D4164;
	// lwz r3,1992(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1992);
	// bl 0x8216bfb8
	ctx.lr = 0x820D4154;
	sub_8216BFB8(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x820D4158;
	sub_8215BD28(ctx, base);
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stw r10,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r10.u32);
loc_820D4164:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820d4140
	if (!ctx.cr0.eq) goto loc_820D4140;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D4178"))) PPC_WEAK_FUNC(sub_820D4178);
PPC_FUNC_IMPL(__imp__sub_820D4178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820D4180;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,9
	ctx.r29.s64 = 9;
	// addi r25,r11,-5052
	ctx.r25.s64 = ctx.r11.s64 + -5052;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820D41A0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d41c8
	if (ctx.cr6.eq) goto loc_820D41C8;
	// lwz r3,1992(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1992);
	// bl 0x8216bfb8
	ctx.lr = 0x820D41B4;
	sub_8216BFB8(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x820D41B8;
	sub_8215BD28(ctx, base);
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// stfs f31,1300(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1300, temp.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stw r10,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r10.u32);
loc_820D41C8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820d41a0
	if (!ctx.cr0.eq) goto loc_820D41A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// li r27,9
	ctx.r27.s64 = 9;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f31,8956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8956);
	ctx.f31.f64 = double(temp.f32);
loc_820D41EC:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d4290
	if (ctx.cr6.eq) goto loc_820D4290;
	// addi r30,r31,900
	ctx.r30.s64 = ctx.r31.s64 + 900;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163ef8
	ctx.lr = 0x820D4208;
	sub_82163EF8(ctx, base);
	// addi r29,r31,596
	ctx.r29.s64 = ctx.r31.s64 + 596;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82163ef8
	ctx.lr = 0x820D4218;
	sub_82163EF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82156f00
	ctx.lr = 0x820D4224;
	sub_82156F00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82156f00
	ctx.lr = 0x820D4230;
	sub_82156F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x820D423C;
	sub_820EF4F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x820D4248;
	sub_820EF4F8(ctx, base);
	// lwz r3,1992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1992);
	// bl 0x8216bfb8
	ctx.lr = 0x820D4250;
	sub_8216BFB8(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x820D4254;
	sub_8215BD28(ctx, base);
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d4268
	if (!ctx.cr6.eq) goto loc_820D4268;
	// stw r24,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r24.u32);
	// b 0x820d426c
	goto loc_820D426C;
loc_820D4268:
	// stw r26,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r26.u32);
loc_820D426C:
	// lwz r11,1956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// stb r26,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r26.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820d4280
	if (!ctx.cr6.gt) goto loc_820D4280;
	// stb r24,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r24.u8);
loc_820D4280:
	// lbz r11,570(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 570);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d4290
	if (!ctx.cr6.eq) goto loc_820D4290;
	// stfs f31,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
loc_820D4290:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x820d41ec
	if (!ctx.cr0.eq) goto loc_820D41EC;
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820D42A8:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d42f8
	if (ctx.cr6.eq) goto loc_820D42F8;
	// addi r10,r25,32
	ctx.r10.s64 = ctx.r25.s64 + 32;
loc_820D42B8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d42ec
	if (ctx.cr6.eq) goto loc_820D42EC;
	// lwz r7,1468(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// lwz r6,1468(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1468);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x820d42ec
	if (ctx.cr6.eq) goto loc_820D42EC;
	// stw r11,1732(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1732, ctx.r11.u32);
	// lwz r7,1284(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// stw r7,1728(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1728, ctx.r7.u32);
	// lbz r6,572(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 572);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820d42f8
	if (ctx.cr6.eq) goto loc_820D42F8;
loc_820D42EC:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x820d42b8
	if (!ctx.cr6.lt) goto loc_820D42B8;
loc_820D42F8:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x820d42a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D42A8;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// li r28,9
	ctx.r28.s64 = 9;
loc_820D4308:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d43b8
	if (ctx.cr6.eq) goto loc_820D43B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820af500
	ctx.lr = 0x820D431C;
	sub_820AF500(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r25,32
	ctx.r10.s64 = ctx.r25.s64 + 32;
loc_820D4324:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d4358
	if (ctx.cr6.eq) goto loc_820D4358;
	// lwz r8,1468(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// lwz r7,1468(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1468);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x820d4358
	if (ctx.cr6.eq) goto loc_820D4358;
	// stw r11,1732(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1732, ctx.r11.u32);
	// lwz r8,1284(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// stw r8,1728(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1728, ctx.r8.u32);
	// lbz r7,572(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 572);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820d4364
	if (ctx.cr6.eq) goto loc_820D4364;
loc_820D4358:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x820d4324
	if (!ctx.cr6.lt) goto loc_820D4324;
loc_820D4364:
	// lwz r11,1956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1956);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x820d43b8
	if (!ctx.cr6.eq) goto loc_820D43B8;
	// stb r24,572(r30)
	PPC_STORE_U8(ctx.r30.u32 + 572, ctx.r24.u8);
	// addi r31,r30,900
	ctx.r31.s64 = ctx.r30.s64 + 900;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef488
	ctx.lr = 0x820D4384;
	sub_820EF488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820ef4c0
	ctx.lr = 0x820D4390;
	sub_820EF4C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820ef4e0
	ctx.lr = 0x820D439C;
	sub_820EF4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x820D43A8;
	sub_82156F00(ctx, base);
	// addi r3,r30,596
	ctx.r3.s64 = ctx.r30.s64 + 596;
	// li r5,304
	ctx.r5.s64 = 304;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x820D43B8;
	sub_82248A40(ctx, base);
loc_820D43B8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x820d4308
	if (!ctx.cr0.eq) goto loc_820D4308;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820D43D0"))) PPC_WEAK_FUNC(sub_820D43D0);
PPC_FUNC_IMPL(__imp__sub_820D43D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D43D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820D43EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d4428
	if (ctx.cr6.eq) goto loc_820D4428;
	// lwz r10,1956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x820d4428
	if (ctx.cr6.eq) goto loc_820D4428;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x82156f00
	ctx.lr = 0x820D4410;
	sub_82156F00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,900
	ctx.r3.s64 = ctx.r11.s64 + 900;
	// bl 0x82156f00
	ctx.lr = 0x820D4420;
	sub_82156F00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,1892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1892, ctx.r29.u32);
loc_820D4428:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820d43ec
	if (!ctx.cr0.eq) goto loc_820D43EC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D443C"))) PPC_WEAK_FUNC(sub_820D443C);
PPC_FUNC_IMPL(__imp__sub_820D443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4440"))) PPC_WEAK_FUNC(sub_820D4440);
PPC_FUNC_IMPL(__imp__sub_820D4440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820D4448;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r27,r11,-5052
	ctx.r27.s64 = ctx.r11.s64 + -5052;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_820D4460:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d44b8
	if (ctx.cr6.eq) goto loc_820D44B8;
	// lwz r10,1956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820d44b8
	if (ctx.cr6.eq) goto loc_820D44B8;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x820d44b8
	if (ctx.cr6.eq) goto loc_820D44B8;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x820d44b8
	if (ctx.cr6.eq) goto loc_820D44B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x82156f00
	ctx.lr = 0x820D4494;
	sub_82156F00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,900
	ctx.r3.s64 = ctx.r11.s64 + 900;
	// bl 0x82156f00
	ctx.lr = 0x820D44A4;
	sub_82156F00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,1892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1892, ctx.r25.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820ef8f8
	ctx.lr = 0x820D44B8;
	sub_820EF8F8(ctx, base);
loc_820D44B8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820d4460
	if (!ctx.cr0.eq) goto loc_820D4460;
	// li r26,9
	ctx.r26.s64 = 9;
	// li r28,0
	ctx.r28.s64 = 0;
loc_820D44CC:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d4554
	if (ctx.cr6.eq) goto loc_820D4554;
	// lwz r3,1992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1992);
	// bl 0x8216bfb8
	ctx.lr = 0x820D44E0;
	sub_8216BFB8(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x820D44E4;
	sub_8215BD28(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// bne cr6,0x820d4554
	if (!ctx.cr6.eq) goto loc_820D4554;
	// stw r28,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r28.u32);
	// addi r30,r31,596
	ctx.r30.s64 = ctx.r31.s64 + 596;
	// stw r28,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x820D4508;
	sub_820EF4F8(ctx, base);
	// addi r29,r31,900
	ctx.r29.s64 = ctx.r31.s64 + 900;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x820D4518;
	sub_820EF4F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82163ef8
	ctx.lr = 0x820D4524;
	sub_82163EF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82163ef8
	ctx.lr = 0x820D4530;
	sub_82163EF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156f00
	ctx.lr = 0x820D453C;
	sub_82156F00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82156f00
	ctx.lr = 0x820D4548;
	sub_82156F00(ctx, base);
	// stw r28,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r28.u32);
	// stb r25,573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 573, ctx.r25.u8);
	// stb r25,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r25.u8);
loc_820D4554:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x820d44cc
	if (!ctx.cr0.eq) goto loc_820D44CC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820D4568"))) PPC_WEAK_FUNC(sub_820D4568);
PPC_FUNC_IMPL(__imp__sub_820D4568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D4570;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
loc_820D4584:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d45b8
	if (ctx.cr6.eq) goto loc_820D45B8;
	// lis r4,17231
	ctx.r4.s64 = 1129250816;
	// lwz r3,1964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// ori r4,r4,20549
	ctx.r4.u64 = ctx.r4.u64 | 20549;
	// bl 0x821882d0
	ctx.lr = 0x820D45A0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d45b8
	if (ctx.cr6.eq) goto loc_820D45B8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d45b8
	if (ctx.cr6.eq) goto loc_820D45B8;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_820D45B8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820d4584
	if (!ctx.cr0.eq) goto loc_820D4584;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D45CC"))) PPC_WEAK_FUNC(sub_820D45CC);
PPC_FUNC_IMPL(__imp__sub_820D45CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D45D0"))) PPC_WEAK_FUNC(sub_820D45D0);
PPC_FUNC_IMPL(__imp__sub_820D45D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820D45D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,9
	ctx.r29.s64 = 9;
	// addi r30,r11,-5052
	ctx.r30.s64 = ctx.r11.s64 + -5052;
	// li r28,1
	ctx.r28.s64 = 1;
loc_820D45EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d4634
	if (ctx.cr6.eq) goto loc_820D4634;
	// lis r4,21061
	ctx.r4.s64 = 1380253696;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// bl 0x821882d0
	ctx.lr = 0x820D4608;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4634
	if (ctx.cr6.eq) goto loc_820D4634;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d4634
	if (ctx.cr6.eq) goto loc_820D4634;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D4630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_820D4634:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x820d45ec
	if (!ctx.cr0.eq) goto loc_820D45EC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820D4648"))) PPC_WEAK_FUNC(sub_820D4648);
PPC_FUNC_IMPL(__imp__sub_820D4648) {
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
	// bl 0x820b2888
	ctx.lr = 0x820D4660;
	sub_820B2888(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,15032
	ctx.r8.s64 = ctx.r10.s64 + 15032;
	// addi r7,r9,15024
	ctx.r7.s64 = ctx.r9.s64 + 15024;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D46A8"))) PPC_WEAK_FUNC(sub_820D46A8);
PPC_FUNC_IMPL(__imp__sub_820D46A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x820d46b0
	sub_820D46B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D46B0"))) PPC_WEAK_FUNC(sub_820D46B0);
PPC_FUNC_IMPL(__imp__sub_820D46B0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,15032
	ctx.r9.s64 = ctx.r11.s64 + 15032;
	// addi r8,r10,15024
	ctx.r8.s64 = ctx.r10.s64 + 15024;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820b2730
	ctx.lr = 0x820D46E8;
	sub_820B2730(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820d4704
	if (ctx.cr6.eq) goto loc_820D4704;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D4700;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D4704:
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

__attribute__((alias("__imp__sub_820D471C"))) PPC_WEAK_FUNC(sub_820D471C);
PPC_FUNC_IMPL(__imp__sub_820D471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4720"))) PPC_WEAK_FUNC(sub_820D4720);
PPC_FUNC_IMPL(__imp__sub_820D4720) {
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
	ctx.lr = 0x820D4734;
	sub_8215BD60(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8215bd60
	ctx.lr = 0x820D473C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d4770
	if (ctx.cr6.eq) goto loc_820D4770;
	// bl 0x8215bd60
	ctx.lr = 0x820D474C;
	sub_8215BD60(ctx, base);
	// bl 0x8215cd20
	ctx.lr = 0x820D4750;
	sub_8215CD20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4770
	if (ctx.cr6.eq) goto loc_820D4770;
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
loc_820D4770:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-2032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d478c
	if (ctx.cr6.eq) goto loc_820D478C;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d4790
	if (!ctx.cr6.eq) goto loc_820D4790;
loc_820D478C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D4790:
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

__attribute__((alias("__imp__sub_820D47A8"))) PPC_WEAK_FUNC(sub_820D47A8);
PPC_FUNC_IMPL(__imp__sub_820D47A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D47B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82225508
	ctx.lr = 0x820D47BC;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4864
	if (ctx.cr6.eq) goto loc_820D4864;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d4864
	if (ctx.cr6.eq) goto loc_820D4864;
	// lwz r11,724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 724);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x820d4864
	if (!ctx.cr6.eq) goto loc_820D4864;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r30,r11,-7560
	ctx.r30.s64 = ctx.r11.s64 + -7560;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820d4830
	if (!ctx.cr6.eq) goto loc_820D4830;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r10,15068
	ctx.r5.s64 = ctx.r10.s64 + 15068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820D482C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_820D4830:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820d48b0
	if (ctx.cr6.lt) goto loc_820D48B0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d48b0
	if (ctx.cr6.eq) goto loc_820D48B0;
	// bl 0x82127ca0
	ctx.lr = 0x820D4858;
	sub_82127CA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D4864:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820d48ac
	if (!ctx.cr6.eq) goto loc_820D48AC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,-2032(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82127cd8
	ctx.lr = 0x820D4884;
	sub_82127CD8(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,6
	ctx.r10.s64 = 6;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// beq cr6,0x820d48ac
	if (ctx.cr6.eq) goto loc_820D48AC;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_820D48AC:
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_820D48B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D48BC"))) PPC_WEAK_FUNC(sub_820D48BC);
PPC_FUNC_IMPL(__imp__sub_820D48BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D48C0"))) PPC_WEAK_FUNC(sub_820D48C0);
PPC_FUNC_IMPL(__imp__sub_820D48C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-2032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
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

__attribute__((alias("__imp__sub_820D48D4"))) PPC_WEAK_FUNC(sub_820D48D4);
PPC_FUNC_IMPL(__imp__sub_820D48D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D48D8"))) PPC_WEAK_FUNC(sub_820D48D8);
PPC_FUNC_IMPL(__imp__sub_820D48D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D48E0;
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
	// bl 0x8215bd60
	ctx.lr = 0x820D48F4;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d491c
	if (ctx.cr6.eq) goto loc_820D491C;
	// bl 0x8215bd60
	ctx.lr = 0x820D4904;
	sub_8215BD60(ctx, base);
	// bl 0x8215cd20
	ctx.lr = 0x820D4908;
	sub_8215CD20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d491c
	if (ctx.cr6.eq) goto loc_820D491C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D491C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d4950
	if (!ctx.cr6.eq) goto loc_820D4950;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
loc_820D4950:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82128868
	ctx.lr = 0x820D495C;
	sub_82128868(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D496C"))) PPC_WEAK_FUNC(sub_820D496C);
PPC_FUNC_IMPL(__imp__sub_820D496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4970"))) PPC_WEAK_FUNC(sub_820D4970);
PPC_FUNC_IMPL(__imp__sub_820D4970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820D4978;
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
	// bl 0x8215f550
	ctx.lr = 0x820D4994;
	sub_8215F550(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// addi r9,r11,15076
	ctx.r9.s64 = ctx.r11.s64 + 15076;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8215f348
	ctx.lr = 0x820D49C0;
	sub_8215F348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820D49CC"))) PPC_WEAK_FUNC(sub_820D49CC);
PPC_FUNC_IMPL(__imp__sub_820D49CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D49D0"))) PPC_WEAK_FUNC(sub_820D49D0);
PPC_FUNC_IMPL(__imp__sub_820D49D0) {
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
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,15076
	ctx.r10.s64 = ctx.r11.s64 + 15076;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820d4a08
	if (ctx.cr6.eq) goto loc_820D4A08;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x820D4A08;
	sub_82183E40(ctx, base);
loc_820D4A08:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4a24
	if (ctx.cr6.eq) goto loc_820D4A24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x820D4A24;
	sub_82183E40(ctx, base);
loc_820D4A24:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x820D4A30;
	sub_8215F338(ctx, base);
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

__attribute__((alias("__imp__sub_820D4A48"))) PPC_WEAK_FUNC(sub_820D4A48);
PPC_FUNC_IMPL(__imp__sub_820D4A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,15108
	ctx.r4.s64 = ctx.r11.s64 + 15108;
	// b 0x82248910
	sub_82248910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4A58"))) PPC_WEAK_FUNC(sub_820D4A58);
PPC_FUNC_IMPL(__imp__sub_820D4A58) {
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
	// bl 0x820d49d0
	ctx.lr = 0x820D4A78;
	sub_820D49D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d4a94
	if (ctx.cr6.eq) goto loc_820D4A94;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D4A90;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D4A94:
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

__attribute__((alias("__imp__sub_820D4AAC"))) PPC_WEAK_FUNC(sub_820D4AAC);
PPC_FUNC_IMPL(__imp__sub_820D4AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4AB0"))) PPC_WEAK_FUNC(sub_820D4AB0);
PPC_FUNC_IMPL(__imp__sub_820D4AB0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,88(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15108
	ctx.r4.s64 = ctx.r11.s64 + 15108;
	// bl 0x82248910
	ctx.lr = 0x820D4AD8;
	sub_82248910(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215f370
	ctx.lr = 0x820D4AE4;
	sub_8215F370(ctx, base);
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

__attribute__((alias("__imp__sub_820D4AF8"))) PPC_WEAK_FUNC(sub_820D4AF8);
PPC_FUNC_IMPL(__imp__sub_820D4AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D4B00;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,68(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8218aa18
	ctx.lr = 0x820D4B1C;
	sub_8218AA18(ctx, base);
	// bl 0x8215c068
	ctx.lr = 0x820D4B20;
	sub_8215C068(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820D4B28;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D4B34;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e0548
	ctx.lr = 0x820D4B3C;
	sub_820E0548(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,800
	ctx.r10.s64 = 800;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82183850
	ctx.lr = 0x820D4B58;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820d4b70
	if (ctx.cr6.eq) goto loc_820D4B70;
	// li r3,23552
	ctx.r3.s64 = 23552;
	// bl 0x82183448
	ctx.lr = 0x820D4B6C;
	sub_82183448(ctx, base);
	// b 0x820d4b78
	goto loc_820D4B78;
loc_820D4B70:
	// li r3,1472
	ctx.r3.s64 = 1472;
	// bl 0x821845a0
	ctx.lr = 0x820D4B78;
	sub_821845A0(ctx, base);
loc_820D4B78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4b94
	if (ctx.cr6.eq) goto loc_820D4B94;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x820d0b40
	ctx.lr = 0x820D4B8C;
	sub_820D0B40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820d4b98
	goto loc_820D4B98;
loc_820D4B94:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D4B98:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d23b8
	ctx.lr = 0x820D4BA4;
	sub_820D23B8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,-8976(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8976, ctx.r31.u32);
	// bl 0x821837d0
	ctx.lr = 0x820D4BB4;
	sub_821837D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a7f0
	ctx.lr = 0x820D4BBC;
	sub_8218A7F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D4BC4"))) PPC_WEAK_FUNC(sub_820D4BC4);
PPC_FUNC_IMPL(__imp__sub_820D4BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4BC8"))) PPC_WEAK_FUNC(sub_820D4BC8);
PPC_FUNC_IMPL(__imp__sub_820D4BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// b 0x8215f480
	sub_8215F480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D4BD4"))) PPC_WEAK_FUNC(sub_820D4BD4);
PPC_FUNC_IMPL(__imp__sub_820D4BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4BD8"))) PPC_WEAK_FUNC(sub_820D4BD8);
PPC_FUNC_IMPL(__imp__sub_820D4BD8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,10000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10000, ctx.xer);
	// blt cr6,0x820d4c04
	if (ctx.cr6.lt) goto loc_820D4C04;
loc_820D4BF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820D4C04:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x820d4bf0
	if (ctx.cr6.lt) goto loc_820D4BF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15108
	ctx.r4.s64 = ctx.r11.s64 + 15108;
	// bl 0x82248910
	ctx.lr = 0x820D4C1C;
	sub_82248910(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188748
	ctx.lr = 0x820D4C28;
	sub_82188748(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D4C38"))) PPC_WEAK_FUNC(sub_820D4C38);
PPC_FUNC_IMPL(__imp__sub_820D4C38) {
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
	// bl 0x8218b1e8
	ctx.lr = 0x820D4C50;
	sub_8218B1E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,15132
	ctx.r9.s64 = ctx.r11.s64 + 15132;
	// addi r4,r10,15120
	ctx.r4.s64 = ctx.r10.s64 + 15120;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x820D4C6C;
	sub_82248910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8218b2d0
	ctx.lr = 0x820D4C7C;
	sub_8218B2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_820D4C94"))) PPC_WEAK_FUNC(sub_820D4C94);
PPC_FUNC_IMPL(__imp__sub_820D4C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4C98"))) PPC_WEAK_FUNC(sub_820D4C98);
PPC_FUNC_IMPL(__imp__sub_820D4C98) {
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
	// bl 0x8218b1e8
	ctx.lr = 0x820D4CB0;
	sub_8218B1E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,15164
	ctx.r9.s64 = ctx.r11.s64 + 15164;
	// addi r4,r10,15152
	ctx.r4.s64 = ctx.r10.s64 + 15152;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x820D4CCC;
	sub_82248910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8218b2d0
	ctx.lr = 0x820D4CDC;
	sub_8218B2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_820D4CF4"))) PPC_WEAK_FUNC(sub_820D4CF4);
PPC_FUNC_IMPL(__imp__sub_820D4CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4CF8"))) PPC_WEAK_FUNC(sub_820D4CF8);
PPC_FUNC_IMPL(__imp__sub_820D4CF8) {
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
	// bl 0x8218b1e8
	ctx.lr = 0x820D4D10;
	sub_8218B1E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,15196
	ctx.r9.s64 = ctx.r11.s64 + 15196;
	// addi r4,r10,15184
	ctx.r4.s64 = ctx.r10.s64 + 15184;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x820D4D2C;
	sub_82248910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8218b2d0
	ctx.lr = 0x820D4D3C;
	sub_8218B2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_820D4D54"))) PPC_WEAK_FUNC(sub_820D4D54);
PPC_FUNC_IMPL(__imp__sub_820D4D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4D58"))) PPC_WEAK_FUNC(sub_820D4D58);
PPC_FUNC_IMPL(__imp__sub_820D4D58) {
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
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x820D4D74;
	sub_822AA648(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820D4D78;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820d4d90
	if (ctx.cr6.eq) goto loc_820D4D90;
	// li r3,6952
	ctx.r3.s64 = 6952;
	// bl 0x82183448
	ctx.lr = 0x820D4D8C;
	sub_82183448(ctx, base);
	// b 0x820d4d98
	goto loc_820D4D98;
loc_820D4D90:
	// li r3,435
	ctx.r3.s64 = 435;
	// bl 0x821845a0
	ctx.lr = 0x820D4D98;
	sub_821845A0(ctx, base);
loc_820D4D98:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4db0
	if (ctx.cr6.eq) goto loc_820D4DB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f03c8
	ctx.lr = 0x820D4DA8;
	sub_820F03C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820d4db4
	goto loc_820D4DB4;
loc_820D4DB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D4DB4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-5064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5064, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D4DD4"))) PPC_WEAK_FUNC(sub_820D4DD4);
PPC_FUNC_IMPL(__imp__sub_820D4DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D4DD8"))) PPC_WEAK_FUNC(sub_820D4DD8);
PPC_FUNC_IMPL(__imp__sub_820D4DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D4DE0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r29,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r29.u32);
	// lwz r11,-5064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5064);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d4e14
	if (ctx.cr6.eq) goto loc_820D4E14;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82183e40
	ctx.lr = 0x820D4E10;
	sub_82183E40(ctx, base);
	// lwz r11,-5064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5064);
loc_820D4E14:
	// stwx r29,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D4E20"))) PPC_WEAK_FUNC(sub_820D4E20);
PPC_FUNC_IMPL(__imp__sub_820D4E20) {
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
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x820d4e94
	if (ctx.cr6.lt) goto loc_820D4E94;
	// beq cr6,0x820d4e68
	if (ctx.cr6.eq) goto loc_820D4E68;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bne cr6,0x820d4ebc
	if (!ctx.cr6.eq) goto loc_820D4EBC;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x820D4E58;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4ebc
	if (ctx.cr6.eq) goto loc_820D4EBC;
	// bl 0x820d4cf8
	ctx.lr = 0x820D4E64;
	sub_820D4CF8(ctx, base);
	// b 0x820d4ebc
	goto loc_820D4EBC;
loc_820D4E68:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-5064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5064);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820d4ebc
	if (!ctx.cr6.eq) goto loc_820D4EBC;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x820D4E84;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4ebc
	if (ctx.cr6.eq) goto loc_820D4EBC;
	// bl 0x820d4c98
	ctx.lr = 0x820D4E90;
	sub_820D4C98(ctx, base);
	// b 0x820d4ebc
	goto loc_820D4EBC;
loc_820D4E94:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-5064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5064);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820d4ebc
	if (!ctx.cr6.eq) goto loc_820D4EBC;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x820D4EB0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4ebc
	if (ctx.cr6.eq) goto loc_820D4EBC;
	// bl 0x820d4c38
	ctx.lr = 0x820D4EBC;
	sub_820D4C38(ctx, base);
loc_820D4EBC:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820D4EE0"))) PPC_WEAK_FUNC(sub_820D4EE0);
PPC_FUNC_IMPL(__imp__sub_820D4EE0) {
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
	// addi r10,r11,15132
	ctx.r10.s64 = ctx.r11.s64 + 15132;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x820D4F0C;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d4f28
	if (ctx.cr6.eq) goto loc_820D4F28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D4F24;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D4F28:
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

__attribute__((alias("__imp__sub_820D4F40"))) PPC_WEAK_FUNC(sub_820D4F40);
PPC_FUNC_IMPL(__imp__sub_820D4F40) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x820D4F60;
	sub_8218AA18(ctx, base);
	// bl 0x8215c070
	ctx.lr = 0x820D4F64;
	sub_8215C070(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820D4F6C;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D4F78;
	sub_821837D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218a810
	ctx.lr = 0x820D4F88;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d4fd4
	if (ctx.cr6.eq) goto loc_820D4FD4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x820D4F9C;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4fd4
	if (ctx.cr6.eq) goto loc_820D4FD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x820D4FB0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d500c
	if (ctx.cr6.eq) goto loc_820D500C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x820D4FC4;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d4fd4
	if (ctx.cr6.eq) goto loc_820D4FD4;
	// bl 0x820f07a0
	ctx.lr = 0x820D4FD4;
	sub_820F07A0(ctx, base);
loc_820D4FD4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-5064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5064);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x821837d0
	ctx.lr = 0x820D4FE8;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x820D4FF0;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_820D500C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d4fd4
	goto loc_820D4FD4;
}

__attribute__((alias("__imp__sub_820D5014"))) PPC_WEAK_FUNC(sub_820D5014);
PPC_FUNC_IMPL(__imp__sub_820D5014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5018"))) PPC_WEAK_FUNC(sub_820D5018);
PPC_FUNC_IMPL(__imp__sub_820D5018) {
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
	// addi r10,r11,15164
	ctx.r10.s64 = ctx.r11.s64 + 15164;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x820D5044;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d5060
	if (ctx.cr6.eq) goto loc_820D5060;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D505C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D5060:
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

__attribute__((alias("__imp__sub_820D5078"))) PPC_WEAK_FUNC(sub_820D5078);
PPC_FUNC_IMPL(__imp__sub_820D5078) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x820D5098;
	sub_8218AA18(ctx, base);
	// bl 0x8215c070
	ctx.lr = 0x820D509C;
	sub_8215C070(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820D50A4;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D50B0;
	sub_821837D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218a810
	ctx.lr = 0x820D50C0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d510c
	if (ctx.cr6.eq) goto loc_820D510C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x820D50D4;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d510c
	if (ctx.cr6.eq) goto loc_820D510C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x820D50E8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d5144
	if (ctx.cr6.eq) goto loc_820D5144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x820D50FC;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d510c
	if (ctx.cr6.eq) goto loc_820D510C;
	// bl 0x820f07a0
	ctx.lr = 0x820D510C;
	sub_820F07A0(ctx, base);
loc_820D510C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-5064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5064);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// bl 0x821837d0
	ctx.lr = 0x820D5120;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x820D5128;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_820D5144:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d510c
	goto loc_820D510C;
}

__attribute__((alias("__imp__sub_820D514C"))) PPC_WEAK_FUNC(sub_820D514C);
PPC_FUNC_IMPL(__imp__sub_820D514C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5150"))) PPC_WEAK_FUNC(sub_820D5150);
PPC_FUNC_IMPL(__imp__sub_820D5150) {
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
	// addi r10,r11,15196
	ctx.r10.s64 = ctx.r11.s64 + 15196;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x820D517C;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d5198
	if (ctx.cr6.eq) goto loc_820D5198;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D5194;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D5198:
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

__attribute__((alias("__imp__sub_820D51B0"))) PPC_WEAK_FUNC(sub_820D51B0);
PPC_FUNC_IMPL(__imp__sub_820D51B0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x820D51D0;
	sub_8218AA18(ctx, base);
	// bl 0x8215c070
	ctx.lr = 0x820D51D4;
	sub_8215C070(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820D51DC;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D51E8;
	sub_821837D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218a810
	ctx.lr = 0x820D51F8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d5244
	if (ctx.cr6.eq) goto loc_820D5244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x820D520C;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5244
	if (ctx.cr6.eq) goto loc_820D5244;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x820D5220;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d527c
	if (ctx.cr6.eq) goto loc_820D527C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x820D5234;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5244
	if (ctx.cr6.eq) goto loc_820D5244;
	// bl 0x820f07a0
	ctx.lr = 0x820D5244;
	sub_820F07A0(ctx, base);
loc_820D5244:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-5064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5064);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// bl 0x821837d0
	ctx.lr = 0x820D5258;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x820D5260;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_820D527C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820d5244
	goto loc_820D5244;
}

__attribute__((alias("__imp__sub_820D5284"))) PPC_WEAK_FUNC(sub_820D5284);
PPC_FUNC_IMPL(__imp__sub_820D5284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5288"))) PPC_WEAK_FUNC(sub_820D5288);
PPC_FUNC_IMPL(__imp__sub_820D5288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D5290;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x820D52A0;
	sub_822AA648(ctx, base);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// lwz r11,-5064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5064);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d52cc
	if (ctx.cr6.eq) goto loc_820D52CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82183e40
	ctx.lr = 0x820D52C8;
	sub_82183E40(ctx, base);
	// lwz r11,-5064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5064);
loc_820D52CC:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r11,-5064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5064);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d52f4
	if (ctx.cr6.eq) goto loc_820D52F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82183e40
	ctx.lr = 0x820D52F0;
	sub_82183E40(ctx, base);
	// lwz r11,-5064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5064);
loc_820D52F4:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// lwz r11,-5064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5064);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d531c
	if (ctx.cr6.eq) goto loc_820D531C;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82183e40
	ctx.lr = 0x820D5318;
	sub_82183E40(ctx, base);
	// lwz r11,-5064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5064);
loc_820D531C:
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// lwz r11,-5064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5064);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d5344
	if (ctx.cr6.eq) goto loc_820D5344;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82183e40
	ctx.lr = 0x820D5340;
	sub_82183E40(ctx, base);
	// lwz r11,-5064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5064);
loc_820D5344:
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D5350"))) PPC_WEAK_FUNC(sub_820D5350);
PPC_FUNC_IMPL(__imp__sub_820D5350) {
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
	// bl 0x820d5288
	ctx.lr = 0x820D5368;
	sub_820D5288(ctx, base);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r31,-5064(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5064);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d538c
	if (ctx.cr6.eq) goto loc_820D538C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x820D5380;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820D538C;
	sub_82183E40(ctx, base);
loc_820D538C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5064(r30)
	PPC_STORE_U32(ctx.r30.u32 + -5064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820D53AC"))) PPC_WEAK_FUNC(sub_820D53AC);
PPC_FUNC_IMPL(__imp__sub_820D53AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D53B0"))) PPC_WEAK_FUNC(sub_820D53B0);
PPC_FUNC_IMPL(__imp__sub_820D53B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D53B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// li r30,16
	ctx.r30.s64 = 16;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820D53C8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d53e8
	if (ctx.cr6.eq) goto loc_820D53E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D53E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D53E8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x820d53c8
	if (!ctx.cr0.eq) goto loc_820D53C8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D53FC"))) PPC_WEAK_FUNC(sub_820D53FC);
PPC_FUNC_IMPL(__imp__sub_820D53FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5400"))) PPC_WEAK_FUNC(sub_820D5400);
PPC_FUNC_IMPL(__imp__sub_820D5400) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d542c
	if (ctx.cr6.eq) goto loc_820D542C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820D542C;
	sub_82183E40(ctx, base);
loc_820D542C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5448
	if (ctx.cr6.eq) goto loc_820D5448;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820D5448;
	sub_82183E40(ctx, base);
loc_820D5448:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5460
	if (ctx.cr6.eq) goto loc_820D5460;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820D5460;
	sub_82183E40(ctx, base);
loc_820D5460:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d53b0
	ctx.lr = 0x820D546C;
	sub_820D53B0(ctx, base);
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

__attribute__((alias("__imp__sub_820D5484"))) PPC_WEAK_FUNC(sub_820D5484);
PPC_FUNC_IMPL(__imp__sub_820D5484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5488"))) PPC_WEAK_FUNC(sub_820D5488);
PPC_FUNC_IMPL(__imp__sub_820D5488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820D5490;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8218a810
	ctx.lr = 0x820D54A0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d566c
	if (ctx.cr6.eq) goto loc_820D566C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ab00
	ctx.lr = 0x820D54B4;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d566c
	if (ctx.cr6.eq) goto loc_820D566C;
	// bl 0x8215c078
	ctx.lr = 0x820D54C0;
	sub_8215C078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820D54C8;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D54D4;
	sub_821837D0(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x820D54D8;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820D54E0;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D54EC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820D54F0;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820D54FC;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820D5504;
	sub_821830F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820D5510;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d552c
	if (ctx.cr6.eq) goto loc_820D552C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820D5524;
	sub_8218AE98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x820d5530
	goto loc_820D5530;
loc_820D552C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_820D5530:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820D553C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d5558
	if (ctx.cr6.eq) goto loc_820D5558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820D5550;
	sub_8218AC78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820d555c
	goto loc_820D555C;
loc_820D5558:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D555C:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x820d5570
	if (ctx.cr6.lt) goto loc_820D5570;
	// bne cr6,0x820d5578
	if (!ctx.cr6.eq) goto loc_820D5578;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820d5574
	goto loc_820D5574;
loc_820D5570:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820D5574:
	// bl 0x821830f8
	ctx.lr = 0x820D5578;
	sub_821830F8(ctx, base);
loc_820D5578:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D5580;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218aa18
	ctx.lr = 0x820D5594;
	sub_8218AA18(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r28,-8984(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8984);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820d5650
	if (ctx.cr6.eq) goto loc_820D5650;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x820D55B8;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x820D55C4;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x820D55D4;
	sub_8218AC78(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d55f4
	if (ctx.cr6.eq) goto loc_820D55F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82098c20
	ctx.lr = 0x820D55E8;
	sub_82098C20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820D55F4;
	sub_82183E40(ctx, base);
loc_820D55F4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_820D55F8:
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820D5608;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x820D5618;
	sub_8218AC78(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d563c
	if (ctx.cr6.eq) goto loc_820D563C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82099230
	ctx.lr = 0x820D5630;
	sub_82099230(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820D563C;
	sub_82183E40(ctx, base);
loc_820D563C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x820d55f8
	if (ctx.cr6.lt) goto loc_820D55F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x820D5650;
	sub_8218A7F0(ctx, base);
loc_820D5650:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x820D565C;
	sub_82183E40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a7f0
	ctx.lr = 0x820D5664;
	sub_8218A7F0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D566C;
	sub_821837D0(ctx, base);
loc_820D566C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820D5674"))) PPC_WEAK_FUNC(sub_820D5674);
PPC_FUNC_IMPL(__imp__sub_820D5674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5678"))) PPC_WEAK_FUNC(sub_820D5678);
PPC_FUNC_IMPL(__imp__sub_820D5678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820D5680;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x8218a810
	ctx.lr = 0x820D5694;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d57f8
	if (ctx.cr6.eq) goto loc_820D57F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ab00
	ctx.lr = 0x820D56A8;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d57f8
	if (ctx.cr6.eq) goto loc_820D57F8;
	// bl 0x8215c078
	ctx.lr = 0x820D56B4;
	sub_8215C078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820D56BC;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D56C8;
	sub_821837D0(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x820D56CC;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820D56D4;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D56E0;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820D56E4;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820D56F0;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820D56F8;
	sub_821830F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820D5704;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d5720
	if (ctx.cr6.eq) goto loc_820D5720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820D5718;
	sub_8218AE98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x820d5724
	goto loc_820D5724;
loc_820D5720:
	// li r29,0
	ctx.r29.s64 = 0;
loc_820D5724:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820D5730;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d574c
	if (ctx.cr6.eq) goto loc_820D574C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820D5744;
	sub_8218AC78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820d5750
	goto loc_820D5750;
loc_820D574C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D5750:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x820d5764
	if (ctx.cr6.lt) goto loc_820D5764;
	// bne cr6,0x820d576c
	if (!ctx.cr6.eq) goto loc_820D576C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820d5768
	goto loc_820D5768;
loc_820D5764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820D5768:
	// bl 0x821830f8
	ctx.lr = 0x820D576C;
	sub_821830F8(ctx, base);
loc_820D576C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D5774;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x820D5788;
	sub_8218AA18(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r31,-19792(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19792);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d57dc
	if (ctx.cr6.eq) goto loc_820D57DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82093198
	ctx.lr = 0x820D57A4;
	sub_82093198(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208fb10
	ctx.lr = 0x820D57B0;
	sub_8208FB10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d57dc
	if (ctx.cr6.eq) goto loc_820D57DC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,1248(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1248);
	// addi r31,r25,1248
	ctx.r31.s64 = ctx.r25.s64 + 1248;
	// bl 0x820e0568
	ctx.lr = 0x820D57C8;
	sub_820E0568(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820D57DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D57DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820D57E8;
	sub_82183E40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x820D57F0;
	sub_8218A7F0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D57F8;
	sub_821837D0(ctx, base);
loc_820D57F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820D5800"))) PPC_WEAK_FUNC(sub_820D5800);
PPC_FUNC_IMPL(__imp__sub_820D5800) {
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
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// bl 0x822aa648
	ctx.lr = 0x820D5840;
	sub_822AA648(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820D5844;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820d585c
	if (ctx.cr6.eq) goto loc_820D585C;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82183448
	ctx.lr = 0x820D5858;
	sub_82183448(ctx, base);
	// b 0x820d5864
	goto loc_820D5864;
loc_820D585C:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821845a0
	ctx.lr = 0x820D5864;
	sub_821845A0(ctx, base);
loc_820D5864:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d58a0
	if (ctx.cr6.eq) goto loc_820D58A0;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820D5878:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stwu r31,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820d5878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D5878;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820d58a4
	goto loc_820D58A4;
loc_820D58A0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_820D58A4:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x820D58AC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820d58c4
	if (ctx.cr6.eq) goto loc_820D58C4;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82183448
	ctx.lr = 0x820D58C0;
	sub_82183448(ctx, base);
	// b 0x820d58cc
	goto loc_820D58CC;
loc_820D58C4:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821845a0
	ctx.lr = 0x820D58CC;
	sub_821845A0(ctx, base);
loc_820D58CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5908
	if (ctx.cr6.eq) goto loc_820D5908;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820D58E0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stwu r31,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820d58e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D58E0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820d590c
	goto loc_820D590C;
loc_820D5908:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_820D590C:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x820D5914;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820d592c
	if (ctx.cr6.eq) goto loc_820D592C;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82183448
	ctx.lr = 0x820D5928;
	sub_82183448(ctx, base);
	// b 0x820d5934
	goto loc_820D5934;
loc_820D592C:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x820D5934;
	sub_821845A0(ctx, base);
loc_820D5934:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_820D5958"))) PPC_WEAK_FUNC(sub_820D5958);
PPC_FUNC_IMPL(__imp__sub_820D5958) {
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
	// lwz r3,-8508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d598c
	if (ctx.cr6.eq) goto loc_820D598C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D598C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D598C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8508, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D59A8"))) PPC_WEAK_FUNC(sub_820D59A8);
PPC_FUNC_IMPL(__imp__sub_820D59A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8508);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D59B4"))) PPC_WEAK_FUNC(sub_820D59B4);
PPC_FUNC_IMPL(__imp__sub_820D59B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D59B8"))) PPC_WEAK_FUNC(sub_820D59B8);
PPC_FUNC_IMPL(__imp__sub_820D59B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x820d5a28
	sub_820D5A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D59C0"))) PPC_WEAK_FUNC(sub_820D59C0);
PPC_FUNC_IMPL(__imp__sub_820D59C0) {
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
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x820D59E0;
	sub_82185740(ctx, base);
	// lis r4,21332
	ctx.r4.s64 = 1398013952;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// bl 0x82188378
	ctx.lr = 0x820D59F4;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r31.u32);
	// addi r9,r11,15248
	ctx.r9.s64 = ctx.r11.s64 + 15248;
	// addi r8,r10,15216
	ctx.r8.s64 = ctx.r10.s64 + 15216;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D5A28"))) PPC_WEAK_FUNC(sub_820D5A28);
PPC_FUNC_IMPL(__imp__sub_820D5A28) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,15248
	ctx.r9.s64 = ctx.r11.s64 + 15248;
	// addi r8,r10,15216
	ctx.r8.s64 = ctx.r10.s64 + 15216;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821883b8
	ctx.lr = 0x820D5A64;
	sub_821883B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x820D5A6C;
	sub_821857F0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820d5a88
	if (ctx.cr6.eq) goto loc_820D5A88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D5A84;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D5A88:
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

__attribute__((alias("__imp__sub_820D5AA0"))) PPC_WEAK_FUNC(sub_820D5AA0);
PPC_FUNC_IMPL(__imp__sub_820D5AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82188608
	sub_82188608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5AC4"))) PPC_WEAK_FUNC(sub_820D5AC4);
PPC_FUNC_IMPL(__imp__sub_820D5AC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D5AC8"))) PPC_WEAK_FUNC(sub_820D5AC8);
PPC_FUNC_IMPL(__imp__sub_820D5AC8) {
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
	ctx.lr = 0x820D5AD8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820d5af0
	if (ctx.cr6.eq) goto loc_820D5AF0;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82183448
	ctx.lr = 0x820D5AEC;
	sub_82183448(ctx, base);
	// b 0x820d5af8
	goto loc_820D5AF8;
loc_820D5AF0:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x820D5AF8;
	sub_821845A0(ctx, base);
loc_820D5AF8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5b1c
	if (ctx.cr6.eq) goto loc_820D5B1C;
	// bl 0x820d59c0
	ctx.lr = 0x820D5B04;
	sub_820D59C0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8508(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820D5B1C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8508, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D5B38"))) PPC_WEAK_FUNC(sub_820D5B38);
PPC_FUNC_IMPL(__imp__sub_820D5B38) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x820D5B6C;
	sub_82184800(ctx, base);
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

__attribute__((alias("__imp__sub_820D5B84"))) PPC_WEAK_FUNC(sub_820D5B84);
PPC_FUNC_IMPL(__imp__sub_820D5B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5B88"))) PPC_WEAK_FUNC(sub_820D5B88);
PPC_FUNC_IMPL(__imp__sub_820D5B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820D5BA8"))) PPC_WEAK_FUNC(sub_820D5BA8);
PPC_FUNC_IMPL(__imp__sub_820D5BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D5BAC"))) PPC_WEAK_FUNC(sub_820D5BAC);
PPC_FUNC_IMPL(__imp__sub_820D5BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5BB0"))) PPC_WEAK_FUNC(sub_820D5BB0);
PPC_FUNC_IMPL(__imp__sub_820D5BB0) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820d5be8
	if (!ctx.cr6.eq) goto loc_820D5BE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820D5BE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820D5BF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D5C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820d5bf0
	if (!ctx.cr6.eq) goto loc_820D5BF0;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D5C24"))) PPC_WEAK_FUNC(sub_820D5C24);
PPC_FUNC_IMPL(__imp__sub_820D5C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5C28"))) PPC_WEAK_FUNC(sub_820D5C28);
PPC_FUNC_IMPL(__imp__sub_820D5C28) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d5c70
	if (!ctx.cr6.eq) goto loc_820D5C70;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d5c70
	if (ctx.cr6.eq) goto loc_820D5C70;
loc_820D5C50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D5C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820d5c50
	if (!ctx.cr6.eq) goto loc_820D5C50;
loc_820D5C70:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D5C84"))) PPC_WEAK_FUNC(sub_820D5C84);
PPC_FUNC_IMPL(__imp__sub_820D5C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5C88"))) PPC_WEAK_FUNC(sub_820D5C88);
PPC_FUNC_IMPL(__imp__sub_820D5C88) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d5cd0
	if (!ctx.cr6.eq) goto loc_820D5CD0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d5cd0
	if (ctx.cr6.eq) goto loc_820D5CD0;
loc_820D5CB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D5CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820d5cb0
	if (!ctx.cr6.eq) goto loc_820D5CB0;
loc_820D5CD0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D5CE4"))) PPC_WEAK_FUNC(sub_820D5CE4);
PPC_FUNC_IMPL(__imp__sub_820D5CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5CE8"))) PPC_WEAK_FUNC(sub_820D5CE8);
PPC_FUNC_IMPL(__imp__sub_820D5CE8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d5d40
	if (!ctx.cr6.eq) goto loc_820D5D40;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d5d38
	if (ctx.cr6.eq) goto loc_820D5D38;
loc_820D5D18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D5D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820d5d18
	if (!ctx.cr6.eq) goto loc_820D5D18;
loc_820D5D38:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_820D5D40:
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

__attribute__((alias("__imp__sub_820D5D58"))) PPC_WEAK_FUNC(sub_820D5D58);
PPC_FUNC_IMPL(__imp__sub_820D5D58) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5db0
	if (ctx.cr6.eq) goto loc_820D5DB0;
loc_820D5D7C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D5D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820d5d7c
	if (!ctx.cr6.eq) goto loc_820D5D7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_820D5DB0:
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

__attribute__((alias("__imp__sub_820D5DC8"))) PPC_WEAK_FUNC(sub_820D5DC8);
PPC_FUNC_IMPL(__imp__sub_820D5DC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D5DD8"))) PPC_WEAK_FUNC(sub_820D5DD8);
PPC_FUNC_IMPL(__imp__sub_820D5DD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x820d5d58
	sub_820D5D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D5DDC"))) PPC_WEAK_FUNC(sub_820D5DDC);
PPC_FUNC_IMPL(__imp__sub_820D5DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5DE0"))) PPC_WEAK_FUNC(sub_820D5DE0);
PPC_FUNC_IMPL(__imp__sub_820D5DE0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820eda10
	ctx.lr = 0x820D5DFC;
	sub_820EDA10(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103fa8
	ctx.lr = 0x820D5E18;
	sub_82103FA8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820D5E1C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820d5e34
	if (ctx.cr6.eq) goto loc_820D5E34;
	// li r3,1328
	ctx.r3.s64 = 1328;
	// bl 0x82183448
	ctx.lr = 0x820D5E30;
	sub_82183448(ctx, base);
	// b 0x820d5e3c
	goto loc_820D5E3C;
loc_820D5E34:
	// li r3,83
	ctx.r3.s64 = 83;
	// bl 0x821845a0
	ctx.lr = 0x820D5E3C;
	sub_821845A0(ctx, base);
loc_820D5E3C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5e50
	if (ctx.cr6.eq) goto loc_820D5E50;
	// bl 0x820ad200
	ctx.lr = 0x820D5E48;
	sub_820AD200(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820d5e54
	goto loc_820D5E54;
loc_820D5E50:
	// li r5,0
	ctx.r5.s64 = 0;
loc_820D5E54:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103fc0
	ctx.lr = 0x820D5E64;
	sub_82103FC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104038
	ctx.lr = 0x820D5E70;
	sub_82104038(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820D5E74;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820d5e8c
	if (ctx.cr6.eq) goto loc_820D5E8C;
	// li r3,1328
	ctx.r3.s64 = 1328;
	// bl 0x82183448
	ctx.lr = 0x820D5E88;
	sub_82183448(ctx, base);
	// b 0x820d5e94
	goto loc_820D5E94;
loc_820D5E8C:
	// li r3,83
	ctx.r3.s64 = 83;
	// bl 0x821845a0
	ctx.lr = 0x820D5E94;
	sub_821845A0(ctx, base);
loc_820D5E94:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5ea8
	if (ctx.cr6.eq) goto loc_820D5EA8;
	// bl 0x82105cd0
	ctx.lr = 0x820D5EA0;
	sub_82105CD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820d5eac
	goto loc_820D5EAC;
loc_820D5EA8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_820D5EAC:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103fc0
	ctx.lr = 0x820D5EBC;
	sub_82103FC0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820D5EC0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820d5ed8
	if (ctx.cr6.eq) goto loc_820D5ED8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x820D5ED4;
	sub_82183448(ctx, base);
	// b 0x820d5ee0
	goto loc_820D5EE0;
loc_820D5ED8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820D5EE0;
	sub_821845A0(ctx, base);
loc_820D5EE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5efc
	if (ctx.cr6.eq) goto loc_820D5EFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,15256
	ctx.r10.s64 = ctx.r11.s64 + 15256;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x820d5f00
	goto loc_820D5F00;
loc_820D5EFC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_820D5F00:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104048
	ctx.lr = 0x820D5F0C;
	sub_82104048(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104078
	ctx.lr = 0x820D5F1C;
	sub_82104078(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103fd8
	ctx.lr = 0x820D5F28;
	sub_82103FD8(ctx, base);
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

__attribute__((alias("__imp__sub_820D5F3C"))) PPC_WEAK_FUNC(sub_820D5F3C);
PPC_FUNC_IMPL(__imp__sub_820D5F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D5F40"))) PPC_WEAK_FUNC(sub_820D5F40);
PPC_FUNC_IMPL(__imp__sub_820D5F40) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5ff0
	if (ctx.cr6.eq) goto loc_820D5FF0;
	// bl 0x820d59a8
	ctx.lr = 0x820D5F64;
	sub_820D59A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5ff0
	if (ctx.cr6.eq) goto loc_820D5FF0;
	// bl 0x820d59a8
	ctx.lr = 0x820D5F70;
	sub_820D59A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne cr6,0x820d5f80
	if (!ctx.cr6.eq) goto loc_820D5F80;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820D5F80:
	// lis r11,18505
	ctx.r11.s64 = 1212743680;
	// ori r31,r11,17475
	ctx.r31.u64 = ctx.r11.u64 | 17475;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821882d0
	ctx.lr = 0x820D5F90;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5ff0
	if (ctx.cr6.eq) goto loc_820D5FF0;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5ff0
	if (ctx.cr6.eq) goto loc_820D5FF0;
loc_820D5FA4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820d5fdc
	if (ctx.cr6.eq) goto loc_820D5FDC;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d5ff0
	if (ctx.cr6.eq) goto loc_820D5FF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821882d0
	ctx.lr = 0x820D5FC4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d5ff0
	if (ctx.cr6.eq) goto loc_820D5FF0;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820d5fa4
	if (!ctx.cr6.eq) goto loc_820D5FA4;
	// b 0x820d5ff0
	goto loc_820D5FF0;
loc_820D5FDC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D5FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D5FF0:
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

__attribute__((alias("__imp__sub_820D6008"))) PPC_WEAK_FUNC(sub_820D6008);
PPC_FUNC_IMPL(__imp__sub_820D6008) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,15260
	ctx.r9.s64 = ctx.r10.s64 + 15260;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bl 0x8215bec8
	ctx.lr = 0x820D6044;
	sub_8215BEC8(ctx, base);
	// lwz r7,684(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r7,9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 9, ctx.xer);
	// beq cr6,0x820d6058
	if (ctx.cr6.eq) goto loc_820D6058;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_820D6058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D6074"))) PPC_WEAK_FUNC(sub_820D6074);
PPC_FUNC_IMPL(__imp__sub_820D6074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6078"))) PPC_WEAK_FUNC(sub_820D6078);
PPC_FUNC_IMPL(__imp__sub_820D6078) {
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
	// addi r9,r11,9888
	ctx.r9.s64 = ctx.r11.s64 + 9888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820d60b0
	if (ctx.cr6.eq) goto loc_820D60B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D60AC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D60B0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D60C4"))) PPC_WEAK_FUNC(sub_820D60C4);
PPC_FUNC_IMPL(__imp__sub_820D60C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D60C8"))) PPC_WEAK_FUNC(sub_820D60C8);
PPC_FUNC_IMPL(__imp__sub_820D60C8) {
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
	// lis r31,-32185
	ctx.r31.s64 = -2109276160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-18236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18236);
	// bl 0x82094db0
	ctx.lr = 0x820D60EC;
	sub_82094DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-18236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18236);
	// bl 0x82094dd0
	ctx.lr = 0x820D60F8;
	sub_82094DD0(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8552);
	// bl 0x820b2bc0
	ctx.lr = 0x820D6108;
	sub_820B2BC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8552);
	// bl 0x820b2ba8
	ctx.lr = 0x820D6114;
	sub_820B2BA8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D6128"))) PPC_WEAK_FUNC(sub_820D6128);
PPC_FUNC_IMPL(__imp__sub_820D6128) {
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
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r30,-19792(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19792);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d61b8
	if (ctx.cr6.eq) goto loc_820D61B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208fb10
	ctx.lr = 0x820D6168;
	sub_8208FB10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d61b8
	if (ctx.cr6.eq) goto loc_820D61B8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,38612
	ctx.r10.u64 = ctx.r11.u64 | 38612;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x820d61b8
	if (ctx.cr6.eq) goto loc_820D61B8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820d619c
	if (!ctx.cr6.eq) goto loc_820D619C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820D619C:
	// bl 0x820b3cf8
	ctx.lr = 0x820D61A0;
	sub_820B3CF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d61e8
	if (ctx.cr6.eq) goto loc_820D61E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// b 0x820d61e8
	goto loc_820D61E8;
loc_820D61B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x820d61e8
	if (!ctx.cr6.gt) goto loc_820D61E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d60c8
	ctx.lr = 0x820D61CC;
	sub_820D60C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D61E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_820D61E8:
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

__attribute__((alias("__imp__sub_820D6200"))) PPC_WEAK_FUNC(sub_820D6200);
PPC_FUNC_IMPL(__imp__sub_820D6200) {
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
	// bl 0x8215bd60
	ctx.lr = 0x820D6210;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d6224
	if (!ctx.cr6.eq) goto loc_820D6224;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820b3e00
	ctx.lr = 0x820D6224;
	sub_820B3E00(ctx, base);
loc_820D6224:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8480);
	// bl 0x820db7d0
	ctx.lr = 0x820D6230;
	sub_820DB7D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4568
	ctx.lr = 0x820D6238;
	sub_820D4568(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x820D623C;
	sub_8215BD60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d6264
	if (ctx.cr6.eq) goto loc_820D6264;
	// bl 0x82225508
	ctx.lr = 0x820D624C;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d6264
	if (ctx.cr6.eq) goto loc_820D6264;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// stw r10,716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 716, ctx.r10.u32);
loc_820D6264:
	// bl 0x82181040
	ctx.lr = 0x820D6268;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d627c
	if (ctx.cr6.eq) goto loc_820D627C;
	// bl 0x82181040
	ctx.lr = 0x820D6274;
	sub_82181040(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82181370
	ctx.lr = 0x820D627C;
	sub_82181370(ctx, base);
loc_820D627C:
	// bl 0x8208f7b0
	ctx.lr = 0x820D6280;
	sub_8208F7B0(ctx, base);
	// bl 0x820cff30
	ctx.lr = 0x820D6284;
	sub_820CFF30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x820d62b8
	if (ctx.cr6.lt) goto loc_820D62B8;
	// bne cr6,0x820d62b8
	if (!ctx.cr6.eq) goto loc_820D62B8;
	// ori r4,r4,4642
	ctx.r4.u64 = ctx.r4.u64 | 4642;
	// bl 0x8208f758
	ctx.lr = 0x820D62A8;
	sub_8208F758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820D62B8:
	// ori r4,r4,4641
	ctx.r4.u64 = ctx.r4.u64 | 4641;
	// bl 0x8208f758
	ctx.lr = 0x820D62C0;
	sub_8208F758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D62D0"))) PPC_WEAK_FUNC(sub_820D62D0);
PPC_FUNC_IMPL(__imp__sub_820D62D0) {
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
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r3,-8200(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// bl 0x821aa168
	ctx.lr = 0x820D62F0;
	sub_821AA168(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
	// bl 0x8215bec8
	ctx.lr = 0x820D6300;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// subfic r6,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r11.s64;
	// lwz r11,-420(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -420);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 & ctx.r31.u64;
	// lwz r11,1152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D6340"))) PPC_WEAK_FUNC(sub_820D6340);
PPC_FUNC_IMPL(__imp__sub_820D6340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r4,r10,-28136
	ctx.r4.s64 = ctx.r10.s64 + -28136;
	// lwz r3,-8200(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// b 0x821aa180
	sub_821AA180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D6354"))) PPC_WEAK_FUNC(sub_820D6354);
PPC_FUNC_IMPL(__imp__sub_820D6354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6358"))) PPC_WEAK_FUNC(sub_820D6358);
PPC_FUNC_IMPL(__imp__sub_820D6358) {
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
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D6374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x820d62d0
	ctx.lr = 0x820D6378;
	sub_820D62D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d6394
	if (ctx.cr6.eq) goto loc_820D6394;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r4,r10,-28136
	ctx.r4.s64 = ctx.r10.s64 + -28136;
	// lwz r3,-8200(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8200);
	// bl 0x821aa180
	ctx.lr = 0x820D6394;
	sub_821AA180(ctx, base);
loc_820D6394:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D63A4"))) PPC_WEAK_FUNC(sub_820D63A4);
PPC_FUNC_IMPL(__imp__sub_820D63A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D63A8"))) PPC_WEAK_FUNC(sub_820D63A8);
PPC_FUNC_IMPL(__imp__sub_820D63A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x820d63ec
	if (!ctx.cr6.gt) goto loc_820D63EC;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D63C0:
	// lbzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x820d63dc
	if (!ctx.cr6.eq) goto loc_820D63DC;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x820d63f4
	if (ctx.cr6.eq) goto loc_820D63F4;
loc_820D63DC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820d63c0
	if (ctx.cr6.lt) goto loc_820D63C0;
loc_820D63EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D63F4:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D6408"))) PPC_WEAK_FUNC(sub_820D6408);
PPC_FUNC_IMPL(__imp__sub_820D6408) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,15292
	ctx.r10.s64 = ctx.r11.s64 + 15292;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820d6448
	if (ctx.cr6.eq) goto loc_820D6448;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820D6448;
	sub_82183E40(ctx, base);
loc_820D6448:
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

__attribute__((alias("__imp__sub_820D6464"))) PPC_WEAK_FUNC(sub_820D6464);
PPC_FUNC_IMPL(__imp__sub_820D6464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6468"))) PPC_WEAK_FUNC(sub_820D6468);
PPC_FUNC_IMPL(__imp__sub_820D6468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820D6470;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// beq cr6,0x820d649c
	if (ctx.cr6.eq) goto loc_820D649C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820D649C;
	sub_82183E40(ctx, base);
loc_820D649C:
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// bl 0x82183078
	ctx.lr = 0x820D64A4;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820D64B0;
	sub_821837D0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// divwu r31,r27,r11
	ctx.r31.u32 = ctx.r27.u32 / ctx.r11.u32;
	// ori r9,r10,21845
	ctx.r9.u64 = ctx.r10.u64 | 21845;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x820d64dc
	if (ctx.cr6.gt) goto loc_820D64DC;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820d64e0
	goto loc_820D64E0;
loc_820D64DC:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_820D64E0:
	// bl 0x82183850
	ctx.lr = 0x820D64E4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820d64fc
	if (ctx.cr6.eq) goto loc_820D64FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x820D64F8;
	sub_82183448(ctx, base);
	// b 0x820d6508
	goto loc_820D6508;
loc_820D64FC:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820D6508;
	sub_821845A0(ctx, base);
loc_820D6508:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6540
	if (ctx.cr6.eq) goto loc_820D6540;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// blt 0x820d6538
	if (ctx.cr0.lt) goto loc_820D6538;
loc_820D6520:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x820D652C;
	sub_822AA648(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bge 0x820d6520
	if (!ctx.cr0.lt) goto loc_820D6520;
loc_820D6538:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x820d6544
	goto loc_820D6544;
loc_820D6540:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_820D6544:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x821847a8
	ctx.lr = 0x820D6554;
	sub_821847A8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820d6574
	if (!ctx.cr6.gt) goto loc_820D6574;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_820D6568:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820d6568
	if (ctx.cr6.lt) goto loc_820D6568;
loc_820D6574:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D657C;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820D6584"))) PPC_WEAK_FUNC(sub_820D6584);
PPC_FUNC_IMPL(__imp__sub_820D6584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6588"))) PPC_WEAK_FUNC(sub_820D6588);
PPC_FUNC_IMPL(__imp__sub_820D6588) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,15292
	ctx.r9.s64 = ctx.r10.s64 + 15292;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D65A4"))) PPC_WEAK_FUNC(sub_820D65A4);
PPC_FUNC_IMPL(__imp__sub_820D65A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D65A8"))) PPC_WEAK_FUNC(sub_820D65A8);
PPC_FUNC_IMPL(__imp__sub_820D65A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D65B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,15292
	ctx.r10.s64 = ctx.r11.s64 + 15292;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820d65e4
	if (ctx.cr6.eq) goto loc_820D65E4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820D65E4;
	sub_82183E40(ctx, base);
loc_820D65E4:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d6604
	if (ctx.cr6.eq) goto loc_820D6604;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D6600;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D6604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D660C"))) PPC_WEAK_FUNC(sub_820D660C);
PPC_FUNC_IMPL(__imp__sub_820D660C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6610"))) PPC_WEAK_FUNC(sub_820D6610);
PPC_FUNC_IMPL(__imp__sub_820D6610) {
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
	// bl 0x820bac98
	ctx.lr = 0x820D6620;
	sub_820BAC98(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d6644
	if (ctx.cr6.eq) goto loc_820D6644;
	// addi r11,r3,-7
	ctx.r11.s64 = ctx.r3.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
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
loc_820D6644:
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

__attribute__((alias("__imp__sub_820D6658"))) PPC_WEAK_FUNC(sub_820D6658);
PPC_FUNC_IMPL(__imp__sub_820D6658) {
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
	// bl 0x8208e828
	ctx.lr = 0x820D6674;
	sub_8208E828(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d6698
	if (ctx.cr6.eq) goto loc_820D6698;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e05f8
	ctx.lr = 0x820D6684;
	sub_820E05F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820D6698:
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

__attribute__((alias("__imp__sub_820D66B0"))) PPC_WEAK_FUNC(sub_820D66B0);
PPC_FUNC_IMPL(__imp__sub_820D66B0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8208e7f0
	ctx.lr = 0x820D66CC;
	sub_8208E7F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d66f4
	if (ctx.cr6.eq) goto loc_820D66F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ba6e8
	ctx.lr = 0x820D66DC;
	sub_820BA6E8(ctx, base);
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
loc_820D66F4:
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

__attribute__((alias("__imp__sub_820D670C"))) PPC_WEAK_FUNC(sub_820D670C);
PPC_FUNC_IMPL(__imp__sub_820D670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6710"))) PPC_WEAK_FUNC(sub_820D6710);
PPC_FUNC_IMPL(__imp__sub_820D6710) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8208e0b0
	ctx.lr = 0x820D672C;
	sub_8208E0B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d6794
	if (ctx.cr6.eq) goto loc_820D6794;
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// lwz r3,1920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820d675c
	if (!ctx.cr6.gt) goto loc_820D675C;
	// bl 0x820c36a8
	ctx.lr = 0x820D6748;
	sub_820C36A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d675c
	if (ctx.cr6.eq) goto loc_820D675C;
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
loc_820D675C:
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d677c
	if (!ctx.cr6.eq) goto loc_820D677C;
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ba658
	ctx.lr = 0x820D677C;
	sub_820BA658(ctx, base);
loc_820D677C:
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
loc_820D6794:
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

__attribute__((alias("__imp__sub_820D67AC"))) PPC_WEAK_FUNC(sub_820D67AC);
PPC_FUNC_IMPL(__imp__sub_820D67AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D67B0"))) PPC_WEAK_FUNC(sub_820D67B0);
PPC_FUNC_IMPL(__imp__sub_820D67B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820D67B8;
	sub_82248784(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8208ddc0
	ctx.lr = 0x820D67CC;
	sub_8208DDC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d68d8
	if (ctx.cr6.eq) goto loc_820D68D8;
	// lhz r11,1636(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 1636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d6868
	if (ctx.cr6.eq) goto loc_820D6868;
	// lfs f0,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820d6868
	if (ctx.cr6.lt) goto loc_820D6868;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,15296
	ctx.r11.s64 = ctx.r11.s64 + 15296;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_820D6808:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820D6818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d6858
	if (ctx.cr6.eq) goto loc_820D6858;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x820D682C;
	sub_822AA648(ctx, base);
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// bl 0x82097288
	ctx.lr = 0x820D6838;
	sub_82097288(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b8ee0
	ctx.lr = 0x820D6850;
	sub_820B8EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d68b0
	if (!ctx.cr6.eq) goto loc_820D68B0;
loc_820D6858:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r29,384
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 384, ctx.xer);
	// blt cr6,0x820d6808
	if (ctx.cr6.lt) goto loc_820D6808;
loc_820D6868:
	// lhz r11,1634(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 1634);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d68d8
	if (ctx.cr6.eq) goto loc_820D68D8;
	// lfs f0,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820d68d8
	if (ctx.cr6.lt) goto loc_820D68D8;
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// bl 0x820c5258
	ctx.lr = 0x820D6894;
	sub_820C5258(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d68d8
	if (ctx.cr6.eq) goto loc_820D68D8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820af5b8
	ctx.lr = 0x820D68A4;
	sub_820AF5B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820D68B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d3d58
	ctx.lr = 0x820D68CC;
	sub_820D3D58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820D68D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820D68E4"))) PPC_WEAK_FUNC(sub_820D68E4);
PPC_FUNC_IMPL(__imp__sub_820D68E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D68E8"))) PPC_WEAK_FUNC(sub_820D68E8);
PPC_FUNC_IMPL(__imp__sub_820D68E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820D68F0;
	sub_82248784(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8208de18
	ctx.lr = 0x820D6904;
	sub_8208DE18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d69d8
	if (ctx.cr6.eq) goto loc_820D69D8;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lis r4,17219
	ctx.r4.s64 = 1128464384;
	// ori r4,r4,16975
	ctx.r4.u64 = ctx.r4.u64 | 16975;
	// lwz r3,1964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// bl 0x821882d0
	ctx.lr = 0x820D6920;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6930
	if (ctx.cr6.eq) goto loc_820D6930;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820d6934
	goto loc_820D6934;
loc_820D6930:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D6934:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d69d8
	if (!ctx.cr6.eq) goto loc_820D69D8;
	// lfs f0,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,1672(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 1672);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x820d69d8
	if (ctx.cr6.gt) goto loc_820D69D8;
	// lhz r10,1674(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 1674);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x820d69d8
	if (ctx.cr6.gt) goto loc_820D69D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,15680
	ctx.r11.s64 = ctx.r11.s64 + 15680;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_820D6978:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820D6988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d69c8
	if (ctx.cr6.eq) goto loc_820D69C8;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x820D699C;
	sub_822AA648(ctx, base);
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// bl 0x82097288
	ctx.lr = 0x820D69A8;
	sub_82097288(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b8ee0
	ctx.lr = 0x820D69C0;
	sub_820B8EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d69e4
	if (!ctx.cr6.eq) goto loc_820D69E4;
loc_820D69C8:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r29,192
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 192, ctx.xer);
	// blt cr6,0x820d6978
	if (ctx.cr6.lt) goto loc_820D6978;
loc_820D69D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820D69E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d3d58
	ctx.lr = 0x820D6A00;
	sub_820D3D58(ctx, base);
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// bl 0x820b9a50
	ctx.lr = 0x820D6A08;
	sub_820B9A50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6a18
	if (ctx.cr6.eq) goto loc_820D6A18;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820b9bf0
	ctx.lr = 0x820D6A18;
	sub_820B9BF0(ctx, base);
loc_820D6A18:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820D6A24"))) PPC_WEAK_FUNC(sub_820D6A24);
PPC_FUNC_IMPL(__imp__sub_820D6A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6A28"))) PPC_WEAK_FUNC(sub_820D6A28);
PPC_FUNC_IMPL(__imp__sub_820D6A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820D6A30;
	sub_82248784(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,1636(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1636);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d6ad0
	if (ctx.cr6.eq) goto loc_820D6AD0;
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820d6ad0
	if (ctx.cr6.lt) goto loc_820D6AD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,15296
	ctx.r11.s64 = ctx.r11.s64 + 15296;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_820D6A70:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820D6A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d6ac0
	if (ctx.cr6.eq) goto loc_820D6AC0;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x820D6A94;
	sub_822AA648(ctx, base);
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// bl 0x82097288
	ctx.lr = 0x820D6AA0;
	sub_82097288(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b8ee0
	ctx.lr = 0x820D6AB8;
	sub_820B8EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d6b18
	if (!ctx.cr6.eq) goto loc_820D6B18;
loc_820D6AC0:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r29,384
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 384, ctx.xer);
	// blt cr6,0x820d6a70
	if (ctx.cr6.lt) goto loc_820D6A70;
loc_820D6AD0:
	// lhz r11,1634(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 1634);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d6b40
	if (ctx.cr6.eq) goto loc_820D6B40;
	// lfs f0,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820d6b40
	if (ctx.cr6.lt) goto loc_820D6B40;
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// bl 0x820c5258
	ctx.lr = 0x820D6AFC;
	sub_820C5258(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d6b40
	if (ctx.cr6.eq) goto loc_820D6B40;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820af5b8
	ctx.lr = 0x820D6B0C;
	sub_820AF5B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820D6B18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d3d58
	ctx.lr = 0x820D6B34;
	sub_820D3D58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820D6B40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820D6B4C"))) PPC_WEAK_FUNC(sub_820D6B4C);
PPC_FUNC_IMPL(__imp__sub_820D6B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6B50"))) PPC_WEAK_FUNC(sub_820D6B50);
PPC_FUNC_IMPL(__imp__sub_820D6B50) {
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
	// lwz r3,344(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8208dfe8
	ctx.lr = 0x820D6B74;
	sub_8208DFE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d6b88
	if (ctx.cr6.eq) goto loc_820D6B88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d6a28
	ctx.lr = 0x820D6B88;
	sub_820D6A28(ctx, base);
loc_820D6B88:
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

__attribute__((alias("__imp__sub_820D6BA0"))) PPC_WEAK_FUNC(sub_820D6BA0);
PPC_FUNC_IMPL(__imp__sub_820D6BA0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8208e058
	ctx.lr = 0x820D6BC4;
	sub_8208E058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d6bd8
	if (ctx.cr6.eq) goto loc_820D6BD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d6a28
	ctx.lr = 0x820D6BD8;
	sub_820D6A28(ctx, base);
loc_820D6BD8:
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

__attribute__((alias("__imp__sub_820D6BF0"))) PPC_WEAK_FUNC(sub_820D6BF0);
PPC_FUNC_IMPL(__imp__sub_820D6BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820D6BF8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,15872
	ctx.r31.s64 = ctx.r11.s64 + 15872;
loc_820D6C10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820D6C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d6c3c
	if (!ctx.cr6.eq) goto loc_820D6C3C;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// blt cr6,0x820d6c10
	if (ctx.cr6.lt) goto loc_820D6C10;
loc_820D6C3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820D6C44"))) PPC_WEAK_FUNC(sub_820D6C44);
PPC_FUNC_IMPL(__imp__sub_820D6C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6C48"))) PPC_WEAK_FUNC(sub_820D6C48);
PPC_FUNC_IMPL(__imp__sub_820D6C48) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d6cc8
	if (ctx.cr6.eq) goto loc_820D6CC8;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d6cc8
	if (ctx.cr6.eq) goto loc_820D6CC8;
	// lwz r11,1732(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d6cc8
	if (ctx.cr6.eq) goto loc_820D6CC8;
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r3,1908(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1908);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x820a6b88
	ctx.lr = 0x820D6C94;
	sub_820A6B88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820d6cc8
	if (ctx.cr6.lt) goto loc_820D6CC8;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820d6cc8
	if (ctx.cr6.eq) goto loc_820D6CC8;
	// bl 0x820df210
	ctx.lr = 0x820D6CC8;
	sub_820DF210(ctx, base);
loc_820D6CC8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D6CDC"))) PPC_WEAK_FUNC(sub_820D6CDC);
PPC_FUNC_IMPL(__imp__sub_820D6CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6CE0"))) PPC_WEAK_FUNC(sub_820D6CE0);
PPC_FUNC_IMPL(__imp__sub_820D6CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D6CE8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1908(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1908);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6d84
	if (ctx.cr6.eq) goto loc_820D6D84;
	// lwz r11,1924(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d6d84
	if (ctx.cr6.eq) goto loc_820D6D84;
	// addi r29,r4,1748
	ctx.r29.s64 = ctx.r4.s64 + 1748;
	// lwz r9,1740(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1740);
	// addi r8,r4,1864
	ctx.r8.s64 = ctx.r4.s64 + 1864;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,456
	ctx.r7.s64 = ctx.r11.s64 + 456;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,255
	ctx.r5.s64 = 255;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820a8500
	ctx.lr = 0x820D6D38;
	sub_820A8500(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820d6d68
	if (!ctx.cr6.eq) goto loc_820D6D68;
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r10,-5052
	ctx.r9.s64 = ctx.r10.s64 + -5052;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r3,1908(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6d84
	if (ctx.cr6.eq) goto loc_820D6D84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820a6968
	ctx.lr = 0x820D6D68;
	sub_820A6968(ctx, base);
loc_820D6D68:
	// addi r3,r30,1248
	ctx.r3.s64 = ctx.r30.s64 + 1248;
	// bl 0x820ba198
	ctx.lr = 0x820D6D70;
	sub_820BA198(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6d84
	if (ctx.cr6.eq) goto loc_820D6D84;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820ba240
	ctx.lr = 0x820D6D84;
	sub_820BA240(ctx, base);
loc_820D6D84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D6D8C"))) PPC_WEAK_FUNC(sub_820D6D8C);
PPC_FUNC_IMPL(__imp__sub_820D6D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6D90"))) PPC_WEAK_FUNC(sub_820D6D90);
PPC_FUNC_IMPL(__imp__sub_820D6D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820D6D98;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6dd4
	if (ctx.cr6.eq) goto loc_820D6DD4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d6df4
	if (ctx.cr6.eq) goto loc_820D6DF4;
	// lwz r11,1284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// stw r11,1380(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1380, ctx.r11.u32);
	// stw r11,1384(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1384, ctx.r11.u32);
	// lwz r11,1388(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1388);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,1388(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1388, ctx.r10.u32);
	// b 0x820d6df4
	goto loc_820D6DF4;
loc_820D6DD4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820d6df4
	if (!ctx.cr6.eq) goto loc_820D6DF4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-8500
	ctx.r10.s64 = ctx.r11.s64 + -8500;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,12(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r29,16(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_820D6DF4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-8496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8496, ctx.r11.u32);
	// bl 0x82081130
	ctx.lr = 0x820D6E10;
	sub_82081130(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8208ecd0
	ctx.lr = 0x820D6E1C;
	sub_8208ECD0(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r7,1924(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// lwz r28,1908(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1908);
	// cmpwi cr6,r29,128
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 128, ctx.xer);
	// lwz r26,1908(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	// and r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 & ctx.r27.u64;
	// bne cr6,0x820d6e4c
	if (!ctx.cr6.eq) goto loc_820D6E4C;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x820d6e58
	goto loc_820D6E58;
loc_820D6E4C:
	// cmpwi cr6,r29,256
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 256, ctx.xer);
	// bne cr6,0x820d6e58
	if (!ctx.cr6.eq) goto loc_820D6E58;
	// li r5,2
	ctx.r5.s64 = 2;
loc_820D6E58:
	// addi r29,r31,1600
	ctx.r29.s64 = ctx.r31.s64 + 1600;
	// lwz r9,1284(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r11,456
	ctx.r8.s64 = ctx.r11.s64 + 456;
	// addi r7,r7,456
	ctx.r7.s64 = ctx.r7.s64 + 456;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820a8500
	ctx.lr = 0x820D6E78;
	sub_820A8500(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820a6968
	ctx.lr = 0x820D6E88;
	sub_820A6968(ctx, base);
	// lbz r11,1551(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1551);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1551(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1551, ctx.r11.u8);
	// bl 0x820d6c48
	ctx.lr = 0x820D6EA0;
	sub_820D6C48(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2d58
	ctx.lr = 0x820D6EAC;
	sub_820F2D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f2d58
	ctx.lr = 0x820D6EB8;
	sub_820F2D58(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820D6EC4"))) PPC_WEAK_FUNC(sub_820D6EC4);
PPC_FUNC_IMPL(__imp__sub_820D6EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6EC8"))) PPC_WEAK_FUNC(sub_820D6EC8);
PPC_FUNC_IMPL(__imp__sub_820D6EC8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,17220
	ctx.r4.s64 = 1128529920;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,27986
	ctx.r4.u64 = ctx.r4.u64 | 27986;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820D6EF4;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// addi r10,r11,15904
	ctx.r10.s64 = ctx.r11.s64 + 15904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8210efe0
	ctx.lr = 0x820D6F10;
	sub_8210EFE0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,4
	ctx.r7.s64 = 4;
	// sth r9,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r9.u16);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,2144(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8210f010
	ctx.lr = 0x820D6F38;
	sub_8210F010(ctx, base);
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

__attribute__((alias("__imp__sub_820D6F54"))) PPC_WEAK_FUNC(sub_820D6F54);
PPC_FUNC_IMPL(__imp__sub_820D6F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D6F58"))) PPC_WEAK_FUNC(sub_820D6F58);
PPC_FUNC_IMPL(__imp__sub_820D6F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,1936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1936);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f12,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820d6f90
	if (!ctx.cr6.lt) goto loc_820D6F90;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x820d6f9c
	goto loc_820D6F9C;
loc_820D6F90:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820d6f9c
	if (!ctx.cr6.gt) goto loc_820D6F9C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_820D6F9C:
	// stfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lhz r6,84(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 84);
	// lwz r5,88(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mulli r9,r5,176
	ctx.r9.s64 = ctx.r5.s64 * 176;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// sth r6,932(r4)
	PPC_STORE_U16(ctx.r4.u32 + 932, ctx.r6.u16);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mulli r10,r10,176
	ctx.r10.s64 = ctx.r10.s64 * 176;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,934(r9)
	PPC_STORE_U8(ctx.r9.u32 + 934, ctx.r8.u8);
	// lwz r6,88(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mulli r10,r6,176
	ctx.r10.s64 = ctx.r6.s64 * 176;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,935(r5)
	PPC_STORE_U8(ctx.r5.u32 + 935, ctx.r8.u8);
	// lwz r4,88(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mulli r10,r4,176
	ctx.r10.s64 = ctx.r4.s64 * 176;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,884
	ctx.r9.s64 = ctx.r10.s64 + 884;
	// stfs f12,884(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 884, temp.u32);
	// stfs f13,920(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 920, temp.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,2308
	ctx.r10.s64 = ctx.r10.s64 + 2308;
loc_820D7020:
	// lwzu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820d7020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D7020;
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r10,176
	ctx.r10.s64 = ctx.r10.s64 * 176;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r11,884
	ctx.r10.s64 = ctx.r11.s64 + 884;
	// stfs f13,884(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 884, temp.u32);
	// stfs f13,920(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 920, temp.u32);
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820D7064"))) PPC_WEAK_FUNC(sub_820D7064);
PPC_FUNC_IMPL(__imp__sub_820D7064) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7068"))) PPC_WEAK_FUNC(sub_820D7068);
PPC_FUNC_IMPL(__imp__sub_820D7068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820D7070;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r29,1936(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1936);
	// lfs f31,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,15936(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15936);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210f010
	ctx.lr = 0x820D70B4;
	sub_8210F010(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210f010
	ctx.lr = 0x820D70C0;
	sub_8210F010(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f10,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f1,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stfs f1,72(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,10928(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10928);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11312(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11312);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,9852(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9852);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8344(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8344);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f12,60(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// beq cr6,0x820d7128
	if (ctx.cr6.eq) goto loc_820D7128;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x820d7128
	if (ctx.cr6.eq) goto loc_820D7128;
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// b 0x820d7134
	goto loc_820D7134;
loc_820D7128:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
loc_820D7134:
	// stfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r30,-4
	ctx.r8.s64 = ctx.r30.s64 + -4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,2308
	ctx.r11.s64 = ctx.r11.s64 + 2308;
loc_820D715C:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820d715c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D715C;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r8,r10,-27944
	ctx.r8.s64 = ctx.r10.s64 + -27944;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// sth r5,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r5.u16);
	// bl 0x820faf18
	ctx.lr = 0x820D7198;
	sub_820FAF18(ctx, base);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,1732(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d71d8
	if (ctx.cr6.eq) goto loc_820D71D8;
	// lis r4,19044
	ctx.r4.s64 = 1248067584;
	// lwz r3,1964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// ori r4,r4,26448
	ctx.r4.u64 = ctx.r4.u64 | 26448;
	// bl 0x821882d0
	ctx.lr = 0x820D71B8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d71d8
	if (ctx.cr6.eq) goto loc_820D71D8;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d71d8
	if (ctx.cr6.eq) goto loc_820D71D8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820ba240
	ctx.lr = 0x820D71D8;
	sub_820BA240(ctx, base);
loc_820D71D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820D71E4"))) PPC_WEAK_FUNC(sub_820D71E4);
PPC_FUNC_IMPL(__imp__sub_820D71E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D71E8"))) PPC_WEAK_FUNC(sub_820D71E8);
PPC_FUNC_IMPL(__imp__sub_820D71E8) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r9,15904
	ctx.r6.s64 = ctx.r9.s64 + 15904;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,1936(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1936);
	// lfs f0,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,2312(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2312, temp.u32);
	// addi r10,r11,2312
	ctx.r10.s64 = ctx.r11.s64 + 2312;
	// stfs f0,2348(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2348, temp.u32);
	// bl 0x821883b8
	ctx.lr = 0x820D7244;
	sub_821883B8(ctx, base);
	// clrlwi r4,r30,31
	ctx.r4.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d7260
	if (ctx.cr6.eq) goto loc_820D7260;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D725C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D7260:
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

__attribute__((alias("__imp__sub_820D7278"))) PPC_WEAK_FUNC(sub_820D7278);
PPC_FUNC_IMPL(__imp__sub_820D7278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820D7280;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82182e90
	ctx.lr = 0x820D7298;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820D72A0;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D72AC;
	sub_821837D0(ctx, base);
	// lis r4,17220
	ctx.r4.s64 = 1128529920;
	// lwz r3,1972(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// ori r4,r4,27986
	ctx.r4.u64 = ctx.r4.u64 | 27986;
	// bl 0x821882d0
	ctx.lr = 0x820D72BC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d72d0
	if (ctx.cr6.eq) goto loc_820D72D0;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820d730c
	if (!ctx.cr6.eq) goto loc_820D730C;
loc_820D72D0:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82080000
	ctx.lr = 0x820D72D8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d72f0
	if (ctx.cr6.eq) goto loc_820D72F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820d6ec8
	ctx.lr = 0x820D72E8;
	sub_820D6EC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820d72f4
	goto loc_820D72F4;
loc_820D72F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D72F4:
	// lwz r3,1972(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D730C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D730C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d7068
	ctx.lr = 0x820D7320;
	sub_820D7068(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D7328;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820D7330"))) PPC_WEAK_FUNC(sub_820D7330);
PPC_FUNC_IMPL(__imp__sub_820D7330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D7338;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820D7348:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d7368
	if (ctx.cr6.eq) goto loc_820D7368;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D7368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D7368:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x820d7348
	if (!ctx.cr0.eq) goto loc_820D7348;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D737C"))) PPC_WEAK_FUNC(sub_820D737C);
PPC_FUNC_IMPL(__imp__sub_820D737C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7380"))) PPC_WEAK_FUNC(sub_820D7380);
PPC_FUNC_IMPL(__imp__sub_820D7380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,15940
	ctx.r10.s64 = ctx.r11.s64 + 15940;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x820d7330
	sub_820D7330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D7390"))) PPC_WEAK_FUNC(sub_820D7390);
PPC_FUNC_IMPL(__imp__sub_820D7390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820D7398;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820d7330
	ctx.lr = 0x820D73AC;
	sub_820D7330(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x820D73B0;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820D73BC;
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
	ctx.lr = 0x820D73D0;
	sub_8218AA18(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_820D73D4:
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x820D73E0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d73fc
	if (ctx.cr6.eq) goto loc_820D73FC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x820D73F4;
	sub_8218AB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820d7400
	goto loc_820D7400;
loc_820D73FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820D7400:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a1448
	ctx.lr = 0x820D7408;
	sub_821A1448(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a1118
	ctx.lr = 0x820D7410;
	sub_821A1118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d74bc
	if (ctx.cr6.eq) goto loc_820D74BC;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x820d7430
	if (ctx.cr6.lt) goto loc_820D7430;
	// bne cr6,0x820d7434
	if (!ctx.cr6.eq) goto loc_820D7434;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x820d7434
	goto loc_820D7434;
loc_820D7430:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820D7434:
	// bl 0x821b1108
	ctx.lr = 0x820D7438;
	sub_821B1108(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821b10f8
	ctx.lr = 0x820D7444;
	sub_821B10F8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820D7448;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820d7460
	if (ctx.cr6.eq) goto loc_820D7460;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x820D745C;
	sub_82183448(ctx, base);
	// b 0x820d7468
	goto loc_820D7468;
loc_820D7460:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820D7468;
	sub_821845A0(ctx, base);
loc_820D7468:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d747c
	if (ctx.cr6.eq) goto loc_820D747C;
	// bl 0x821a1580
	ctx.lr = 0x820D7474;
	sub_821A1580(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820d7480
	goto loc_820D7480;
loc_820D747C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D7480:
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// bl 0x821a1118
	ctx.lr = 0x820D7494;
	sub_821A1118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r31,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x821a1de8
	ctx.lr = 0x820D74A0;
	sub_821A1DE8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r3,r31,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821a1980
	ctx.lr = 0x820D74B4;
	sub_821A1980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b10f8
	ctx.lr = 0x820D74BC;
	sub_821B10F8(ctx, base);
loc_820D74BC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a11e8
	ctx.lr = 0x820D74C4;
	sub_821A11E8(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x820d73d4
	if (ctx.cr6.lt) goto loc_820D73D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x820D74D8;
	sub_8218A7F0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D74E0;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820D74E8"))) PPC_WEAK_FUNC(sub_820D74E8);
PPC_FUNC_IMPL(__imp__sub_820D74E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820D74F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,15940
	ctx.r10.s64 = ctx.r11.s64 + 15940;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
loc_820D751C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d753c
	if (ctx.cr6.eq) goto loc_820D753C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D753C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D753C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x820d751c
	if (!ctx.cr0.eq) goto loc_820D751C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820D7554"))) PPC_WEAK_FUNC(sub_820D7554);
PPC_FUNC_IMPL(__imp__sub_820D7554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7558"))) PPC_WEAK_FUNC(sub_820D7558);
PPC_FUNC_IMPL(__imp__sub_820D7558) {
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
	// addi r10,r11,15940
	ctx.r10.s64 = ctx.r11.s64 + 15940;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820d7330
	ctx.lr = 0x820D7584;
	sub_820D7330(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d75a0
	if (ctx.cr6.eq) goto loc_820D75A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D759C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D75A0:
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

__attribute__((alias("__imp__sub_820D75B8"))) PPC_WEAK_FUNC(sub_820D75B8);
PPC_FUNC_IMPL(__imp__sub_820D75B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d75cc
	if (ctx.cr6.lt) goto loc_820D75CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D75CC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r11,r4,132
	ctx.r11.s64 = ctx.r4.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D75DC"))) PPC_WEAK_FUNC(sub_820D75DC);
PPC_FUNC_IMPL(__imp__sub_820D75DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D75E0"))) PPC_WEAK_FUNC(sub_820D75E0);
PPC_FUNC_IMPL(__imp__sub_820D75E0) {
	PPC_FUNC_PROLOGUE();
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820D75EC:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sthu r6,8(r11)
	// bdnz 0x820d75ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D75EC;
	// lbz r8,130(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 130);
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// lbz r7,128(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// lbz r10,129(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 129);
	// lbz r9,131(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 131);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// stb r10,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r10.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r6,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7680"))) PPC_WEAK_FUNC(sub_820D7680);
PPC_FUNC_IMPL(__imp__sub_820D7680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820D7688;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// beq cr6,0x820d76b4
	if (ctx.cr6.eq) goto loc_820D76B4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820D76B4;
	sub_82183E40(ctx, base);
loc_820D76B4:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// bl 0x82183078
	ctx.lr = 0x820D76BC;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820D76C8;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x820D76DC;
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
	// bne cr6,0x820d7738
	if (!ctx.cr6.eq) goto loc_820D7738;
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
	// b 0x820d773c
	goto loc_820D773C;
loc_820D7738:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820D773C:
	// lis r10,496
	ctx.r10.s64 = 32505856;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mulli r28,r11,132
	ctx.r28.s64 = ctx.r11.s64 * 132;
	// ori r9,r10,31775
	ctx.r9.u64 = ctx.r10.u64 | 31775;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820d7758
	if (!ctx.cr6.gt) goto loc_820D7758;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_820D7758:
	// bl 0x82183850
	ctx.lr = 0x820D775C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820d7774
	if (ctx.cr6.eq) goto loc_820D7774;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x820D7770;
	sub_82183448(ctx, base);
	// b 0x820d7780
	goto loc_820D7780;
loc_820D7774:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820D7780;
	sub_821845A0(ctx, base);
loc_820D7780:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820d77e4
	if (!ctx.cr6.gt) goto loc_820D77E4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_820D7794:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ab00
	ctx.lr = 0x820D77A0;
	sub_8218AB00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218abc0
	ctx.lr = 0x820D77B0;
	sub_8218ABC0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x820D77C4;
	sub_82248A40(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x820d75e0
	ctx.lr = 0x820D77D0;
	sub_820D75E0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,132
	ctx.r29.s64 = ctx.r29.s64 + 132;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d7794
	if (ctx.cr6.lt) goto loc_820D7794;
loc_820D77E4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a7f0
	ctx.lr = 0x820D77EC;
	sub_8218A7F0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D77F4;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820D77FC"))) PPC_WEAK_FUNC(sub_820D77FC);
PPC_FUNC_IMPL(__imp__sub_820D77FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7800"))) PPC_WEAK_FUNC(sub_820D7800);
PPC_FUNC_IMPL(__imp__sub_820D7800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,15952
	ctx.r10.s64 = ctx.r11.s64 + 15952;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_820D7814:
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r7,r8,5
	ctx.r7.s64 = ctx.r8.s64 + 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820D7824:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// bdnz 0x820d7824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D7824;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x820d7814
	if (ctx.cr6.lt) goto loc_820D7814;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7858"))) PPC_WEAK_FUNC(sub_820D7858);
PPC_FUNC_IMPL(__imp__sub_820D7858) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7870"))) PPC_WEAK_FUNC(sub_820D7870);
PPC_FUNC_IMPL(__imp__sub_820D7870) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820d7894
	if (ctx.cr6.lt) goto loc_820D7894;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D7894:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D78AC"))) PPC_WEAK_FUNC(sub_820D78AC);
PPC_FUNC_IMPL(__imp__sub_820D78AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D78B0"))) PPC_WEAK_FUNC(sub_820D78B0);
PPC_FUNC_IMPL(__imp__sub_820D78B0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D78B8;
	sub_8224878C(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820D78C0:
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x820d7934
	if (!ctx.cr6.eq) goto loc_820D7934;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D78CC:
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x820d7928
	if (!ctx.cr6.eq) goto loc_820D7928;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820d7928
	if (ctx.cr6.eq) goto loc_820D7928;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_820D7904:
	// lhz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x820d794c
	if (ctx.cr6.eq) goto loc_820D794C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// blt cr6,0x820d7904
	if (ctx.cr6.lt) goto loc_820D7904;
loc_820D7928:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x820d78cc
	if (ctx.cr6.lt) goto loc_820D78CC;
loc_820D7934:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820d78c0
	if (ctx.cr6.lt) goto loc_820D78C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D794C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D796C"))) PPC_WEAK_FUNC(sub_820D796C);
PPC_FUNC_IMPL(__imp__sub_820D796C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7970"))) PPC_WEAK_FUNC(sub_820D7970);
PPC_FUNC_IMPL(__imp__sub_820D7970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820D7978;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820d7b1c
	if (ctx.cr6.eq) goto loc_820D7B1C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82239740
	ctx.lr = 0x820D7998;
	sub_82239740(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lbz r28,2(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822368d8
	ctx.lr = 0x820D79B0;
	sub_822368D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239dc0
	ctx.lr = 0x820D79C0;
	sub_82239DC0(ctx, base);
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x820d79d8
	if (!ctx.cr6.eq) goto loc_820D79D8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_820D79D8:
	// bl 0x8223a0f0
	ctx.lr = 0x820D79DC;
	sub_8223A0F0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r30,42
	ctx.r28.s64 = ctx.r30.s64 + 42;
loc_820D79E4:
	// lhzu r11,2(r28)
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239960
	ctx.lr = 0x820D79FC;
	sub_82239960(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x820d79e4
	if (ctx.cr6.lt) goto loc_820D79E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,3(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// bl 0x82239488
	ctx.lr = 0x820D7A14;
	sub_82239488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// bl 0x822397e8
	ctx.lr = 0x820D7A20;
	sub_822397E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,5(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// bl 0x82239820
	ctx.lr = 0x820D7A2C;
	sub_82239820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,6(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// bl 0x82239490
	ctx.lr = 0x820D7A38;
	sub_82239490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,7(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// bl 0x82239858
	ctx.lr = 0x820D7A44;
	sub_82239858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// bl 0x82239860
	ctx.lr = 0x820D7A50;
	sub_82239860(ctx, base);
	// lhz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x82239498
	ctx.lr = 0x820D7A60;
	sub_82239498(ctx, base);
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x822394a0
	ctx.lr = 0x820D7A70;
	sub_822394A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,14(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// bl 0x822394a8
	ctx.lr = 0x820D7A7C;
	sub_822394A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,15(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// bl 0x82239898
	ctx.lr = 0x820D7A88;
	sub_82239898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// bl 0x822398d0
	ctx.lr = 0x820D7A94;
	sub_822398D0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r30,40
	ctx.r28.s64 = ctx.r30.s64 + 40;
loc_820D7A9C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbzx r5,r28,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239908
	ctx.lr = 0x820D7AAC;
	sub_82239908(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x820d7a9c
	if (ctx.cr6.lt) goto loc_820D7A9C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
loc_820D7AC0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239918
	ctx.lr = 0x820D7AD0;
	sub_82239918(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x820d7ac0
	if (ctx.cr6.lt) goto loc_820D7AC0;
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239930
	ctx.lr = 0x820D7AF0;
	sub_82239930(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
loc_820D7AF8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239948
	ctx.lr = 0x820D7B0C;
	sub_82239948(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x820d7af8
	if (ctx.cr6.lt) goto loc_820D7AF8;
loc_820D7B1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820D7B24"))) PPC_WEAK_FUNC(sub_820D7B24);
PPC_FUNC_IMPL(__imp__sub_820D7B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7B28"))) PPC_WEAK_FUNC(sub_820D7B28);
PPC_FUNC_IMPL(__imp__sub_820D7B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x820D7B30;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subfic r21,r3,-20
	ctx.xer.ca = ctx.r3.u32 <= 4294967276;
	ctx.r21.s64 = -20 - ctx.r3.s64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
loc_820D7B48:
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_820D7B50:
	// lwz r11,-16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820d7bb4
	if (!ctx.cr6.gt) goto loc_820D7BB4;
	// add r11,r21,r25
	ctx.r11.u64 = ctx.r21.u64 + ctx.r25.u64;
	// add r26,r22,r23
	ctx.r26.u64 = ctx.r22.u64 + ctx.r23.u64;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_820D7B70:
	// addi r11,r26,5
	ctx.r11.s64 = ctx.r26.s64 + 5;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d7b94
	if (ctx.cr6.eq) goto loc_820D7B94;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820D7B94;
	sub_82183E40(ctx, base);
loc_820D7B94:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820d7b70
	if (ctx.cr6.lt) goto loc_820D7B70;
loc_820D7BB4:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d7bc8
	if (ctx.cr6.eq) goto loc_820D7BC8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820D7BC8;
	sub_82183E40(ctx, base);
loc_820D7BC8:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// blt cr6,0x820d7b50
	if (ctx.cr6.lt) goto loc_820D7B50;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// blt cr6,0x820d7b48
	if (ctx.cr6.lt) goto loc_820D7B48;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_820D7BF4"))) PPC_WEAK_FUNC(sub_820D7BF4);
PPC_FUNC_IMPL(__imp__sub_820D7BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7BF8"))) PPC_WEAK_FUNC(sub_820D7BF8);
PPC_FUNC_IMPL(__imp__sub_820D7BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820D7C00;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820d7c2c
	if (!ctx.cr6.eq) goto loc_820D7C2C;
loc_820D7C20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_820D7C2C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bl 0x820d78b0
	ctx.lr = 0x820D7C38;
	sub_820D78B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d7c20
	if (ctx.cr6.eq) goto loc_820D7C20;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d7cb8
	if (ctx.cr6.eq) goto loc_820D7CB8;
	// mulli r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 * 100;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r25,r11,r26
	ctx.r25.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_820D7C60:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// bl 0x822361c8
	ctx.lr = 0x820D7C80;
	sub_822361C8(ctx, base);
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// blt cr6,0x820d7c98
	if (ctx.cr6.lt) goto loc_820D7C98;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_820D7C98:
	// bl 0x820d7970
	ctx.lr = 0x820D7C9C;
	sub_820D7970(ctx, base);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// addi r26,r26,100
	ctx.r26.s64 = ctx.r26.s64 + 100;
	// addi r25,r25,100
	ctx.r25.s64 = ctx.r25.s64 + 100;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820d7c60
	if (ctx.cr6.lt) goto loc_820D7C60;
loc_820D7CB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820D7CC4"))) PPC_WEAK_FUNC(sub_820D7CC4);
PPC_FUNC_IMPL(__imp__sub_820D7CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D7CC8"))) PPC_WEAK_FUNC(sub_820D7CC8);
PPC_FUNC_IMPL(__imp__sub_820D7CC8) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 + 44;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r4,46
	ctx.r11.s64 = ctx.r4.s64 + 46;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r11,r4,50
	ctx.r11.s64 = ctx.r4.s64 + 50;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// addi r11,r4,10
	ctx.r11.s64 = ctx.r4.s64 + 10;
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r8,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r8.u16);
	// lbz r6,44(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 44);
	// lbz r7,45(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 45);
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r5,44(r4)
	PPC_STORE_U16(ctx.r4.u32 + 44, ctx.r5.u16);
	// lbz r11,46(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 46);
	// lbz r3,47(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 47);
	// stb r3,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r3.u8);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r10,46(r4)
	PPC_STORE_U16(ctx.r4.u32 + 46, ctx.r10.u16);
	// lbz r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// lbz r9,49(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 49);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,48(r4)
	PPC_STORE_U16(ctx.r4.u32 + 48, ctx.r7.u16);
	// lbz r5,50(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 50);
	// lbz r6,51(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 51);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// lhz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r3,50(r4)
	PPC_STORE_U16(ctx.r4.u32 + 50, ctx.r3.u16);
	// lbz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r11,9(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r9,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r9.u16);
	// lbz r7,10(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// lbz r8,11(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r6,10(r4)
	PPC_STORE_U16(ctx.r4.u32 + 10, ctx.r6.u16);
	// lbz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// lbz r5,13(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// stb r5,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r5.u8);
	// stb r3,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r3.u8);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r11,12(r4)
	PPC_STORE_U16(ctx.r4.u32 + 12, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D7DA8"))) PPC_WEAK_FUNC(sub_820D7DA8);
PPC_FUNC_IMPL(__imp__sub_820D7DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,15952
	ctx.r10.s64 = ctx.r11.s64 + 15952;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x820d7b28
	sub_820D7B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D7DB8"))) PPC_WEAK_FUNC(sub_820D7DB8);
PPC_FUNC_IMPL(__imp__sub_820D7DB8) {
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
	// addi r10,r11,15952
	ctx.r10.s64 = ctx.r11.s64 + 15952;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820d7b28
	ctx.lr = 0x820D7DE4;
	sub_820D7B28(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d7e00
	if (ctx.cr6.eq) goto loc_820D7E00;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D7DFC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D7E00:
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

__attribute__((alias("__imp__sub_820D7E18"))) PPC_WEAK_FUNC(sub_820D7E18);
PPC_FUNC_IMPL(__imp__sub_820D7E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x820D7E20;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x820d7e88
	if (!ctx.cr6.eq) goto loc_820D7E88;
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
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x820d7e8c
	goto loc_820D7E8C;
loc_820D7E88:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820D7E8C:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r22,r10,-1
	ctx.r22.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r22.u32);
	// ble cr6,0x820d8004
	if (!ctx.cr6.gt) goto loc_820D8004;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// li r20,-1
	ctx.r20.s64 = -1;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r22,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820d7ec8
	if (!ctx.cr6.gt) goto loc_820D7EC8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_820D7EC8:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82080d68
	ctx.lr = 0x820D7ED4;
	sub_82080D68(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// stwx r3,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r3.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// beq cr6,0x820d8004
	if (ctx.cr6.eq) goto loc_820D8004;
	// lis r11,963
	ctx.r11.s64 = 63111168;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// ori r21,r11,50115
	ctx.r21.u64 = ctx.r11.u64 | 50115;
loc_820D7EF4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8218ab00
	ctx.lr = 0x820D7F00;
	sub_8218AB00(ctx, base);
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// bl 0x821847a8
	ctx.lr = 0x820D7F20;
	sub_821847A8(ctx, base);
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// bl 0x8218ac78
	ctx.lr = 0x820D7F50;
	sub_8218AC78(ctx, base);
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stw r24,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r24.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820d7ff4
	if (ctx.cr6.eq) goto loc_820D7FF4;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// mulli r31,r27,68
	ctx.r31.s64 = ctx.r27.s64 * 68;
	// ble cr6,0x820d7f78
	if (!ctx.cr6.gt) goto loc_820D7F78;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820D7F78:
	// bl 0x82183850
	ctx.lr = 0x820D7F7C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820d7f94
	if (ctx.cr6.eq) goto loc_820D7F94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820D7F90;
	sub_82183448(ctx, base);
	// b 0x820d7fa0
	goto loc_820D7FA0;
loc_820D7F94:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820D7FA0;
	sub_821845A0(ctx, base);
loc_820D7FA0:
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_820D7FB0:
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x820D7FCC;
	sub_821847A8(ctx, base);
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820d7cc8
	ctx.lr = 0x820D7FE4;
	sub_820D7CC8(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r26,r26,68
	ctx.r26.s64 = ctx.r26.s64 + 68;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// bne 0x820d7fb0
	if (!ctx.cr0.eq) goto loc_820D7FB0;
loc_820D7FF4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r25,r22
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x820d7ef4
	if (ctx.cr6.lt) goto loc_820D7EF4;
loc_820D8004:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_820D800C"))) PPC_WEAK_FUNC(sub_820D800C);
PPC_FUNC_IMPL(__imp__sub_820D800C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8010"))) PPC_WEAK_FUNC(sub_820D8010);
PPC_FUNC_IMPL(__imp__sub_820D8010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820D8018;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820d7b28
	ctx.lr = 0x820D802C;
	sub_820D7B28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,15944
	ctx.r11.s64 = ctx.r11.s64 + 15944;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82183078
	ctx.lr = 0x820D8044;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820D8050;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x820D8064;
	sub_8218AA18(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
loc_820D806C:
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820D8078:
	// lhzx r31,r28,r30
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820D8088;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820d80d0
	if (ctx.cr6.eq) goto loc_820D80D0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ac78
	ctx.lr = 0x820D809C;
	sub_8218AC78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d80d0
	if (ctx.cr6.eq) goto loc_820D80D0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218aff8
	ctx.lr = 0x820D80B4;
	sub_8218AFF8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820d7e18
	ctx.lr = 0x820D80C8;
	sub_820D7E18(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218a7f0
	ctx.lr = 0x820D80D0;
	sub_8218A7F0(ctx, base);
loc_820D80D0:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x820d8078
	if (ctx.cr6.lt) goto loc_820D8078;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x820d806c
	if (ctx.cr6.lt) goto loc_820D806C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a7f0
	ctx.lr = 0x820D80F8;
	sub_8218A7F0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D8100;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820D810C"))) PPC_WEAK_FUNC(sub_820D810C);
PPC_FUNC_IMPL(__imp__sub_820D810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8110"))) PPC_WEAK_FUNC(sub_820D8110);
PPC_FUNC_IMPL(__imp__sub_820D8110) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x820d8160
	if (!ctx.cr6.gt) goto loc_820D8160;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_820D8140:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820d8168
	if (ctx.cr6.eq) goto loc_820D8168;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x820d8140
	if (ctx.cr6.lt) goto loc_820D8140;
loc_820D8160:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_820D8168:
	// mulli r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 * 112;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8178"))) PPC_WEAK_FUNC(sub_820D8178);
PPC_FUNC_IMPL(__imp__sub_820D8178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820D8180;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d8264
	if (ctx.cr6.eq) goto loc_820D8264;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// beq cr6,0x820d8264
	if (ctx.cr6.eq) goto loc_820D8264;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,5
	ctx.r9.s64 = 5;
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x820d81d4
	if (!ctx.cr6.eq) goto loc_820D81D4;
	// bl 0x82163df0
	ctx.lr = 0x820D81D0;
	sub_82163DF0(ctx, base);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_820D81D4:
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// bne cr6,0x820d81ec
	if (!ctx.cr6.eq) goto loc_820D81EC;
	// bl 0x82163df0
	ctx.lr = 0x820D81E0;
	sub_82163DF0(ctx, base);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r3,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
loc_820D81EC:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bne cr6,0x820d8200
	if (!ctx.cr6.eq) goto loc_820D8200;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_820D8200:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820d8258
	if (!ctx.cr6.gt) goto loc_820D8258;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
loc_820D8218:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x820d822c
	if (!ctx.cr6.eq) goto loc_820D822C;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r7,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r7.u32);
	// b 0x820d8244
	goto loc_820D8244;
loc_820D822C:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,112
	ctx.r9.s64 = ctx.r9.s64 + 112;
	// stw r10,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820D8244:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820d8218
	if (ctx.cr6.lt) goto loc_820D8218;
loc_820D8258:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820D8264:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820D8270"))) PPC_WEAK_FUNC(sub_820D8270);
PPC_FUNC_IMPL(__imp__sub_820D8270) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820D8278;
	sub_82248784(ctx, base);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r7,r5,112
	ctx.r7.s64 = ctx.r5.s64 * 112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,-32179
	ctx.r29.s64 = -2108882944;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r1,-126
	ctx.r9.s64 = ctx.r1.s64 + -126;
	// addi r5,r8,-4
	ctx.r5.s64 = ctx.r8.s64 + -4;
	// lis r8,20971
	ctx.r8.s64 = 1374355456;
	// addi r4,r9,-4
	ctx.r4.s64 = ctx.r9.s64 + -4;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// ori r8,r8,34079
	ctx.r8.u64 = ctx.r8.u64 | 34079;
	// addi r10,r11,50
	ctx.r10.s64 = ctx.r11.s64 + 50;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,29344
	ctx.r9.s64 = ctx.r11.s64 + 29344;
	// lbz r11,24332(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24332);
loc_820D82CC:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820d8330
	if (ctx.cr6.eq) goto loc_820D8330;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r28,r7,r9
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stb r11,24332(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24332, ctx.r11.u8);
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// mulhw r7,r28,r8
	ctx.r7.s64 = (int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r7,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 5;
	// rlwinm r31,r7,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// mulli r7,r7,100
	ctx.r7.s64 = ctx.r7.s64 * 100;
	// subf r7,r7,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r7.s64;
	// cmpw cr6,r7,r27
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x820d8330
	if (!ctx.cr6.lt) goto loc_820D8330;
	// lhz r7,-2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// addi r31,r30,-1
	ctx.r31.s64 = ctx.r30.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// sth r31,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r31.u16);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// sth r7,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r7.u16);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_820D8330:
	// lhz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820d8390
	if (ctx.cr6.eq) goto loc_820D8390;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r28,r7,r9
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stb r11,24332(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24332, ctx.r11.u8);
	// mulhw r7,r28,r8
	ctx.r7.s64 = (int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32)) >> 32;
	// lhz r27,4(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// srawi r7,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 5;
	// rlwinm r31,r7,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// extsh r31,r27
	ctx.r31.s64 = ctx.r27.s16;
	// mulli r7,r7,100
	ctx.r7.s64 = ctx.r7.s64 * 100;
	// subf r7,r7,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r7.s64;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x820d8390
	if (!ctx.cr6.lt) goto loc_820D8390;
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// sth r30,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r30.u16);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// sth r7,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r7.u16);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_820D8390:
	// lhz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820d83f4
	if (ctx.cr6.eq) goto loc_820D83F4;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r28,r7,r9
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stb r11,24332(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24332, ctx.r11.u8);
	// mulhw r7,r28,r8
	ctx.r7.s64 = (int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r7,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 5;
	// rlwinm r31,r7,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lhz r27,8(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// mulli r7,r7,100
	ctx.r7.s64 = ctx.r7.s64 * 100;
	// extsh r31,r27
	ctx.r31.s64 = ctx.r27.s16;
	// subf r7,r7,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r7.s64;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x820d83f4
	if (!ctx.cr6.lt) goto loc_820D83F4;
	// lhz r31,6(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// sth r7,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r7.u16);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// sth r31,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r31.u16);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_820D83F4:
	// lhz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820d8450
	if (ctx.cr6.eq) goto loc_820D8450;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r28,r7,r9
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stb r11,24332(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24332, ctx.r11.u8);
	// lhz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// mulhw r7,r28,r8
	ctx.r7.s64 = (int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r7,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 5;
	// rlwinm r31,r7,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// mulli r7,r7,100
	ctx.r7.s64 = ctx.r7.s64 * 100;
	// subf r7,r7,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r7.s64;
	// cmpw cr6,r7,r27
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x820d8450
	if (!ctx.cr6.lt) goto loc_820D8450;
	// lhz r31,10(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// addi r7,r30,2
	ctx.r7.s64 = ctx.r30.s64 + 2;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// sthu r7,4(r5)
	// sthu r31,4(r4)
loc_820D8450:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// blt cr6,0x820d82cc
	if (ctx.cr6.lt) goto loc_820D82CC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// ble cr6,0x820d86f0
	if (!ctx.cr6.gt) goto loc_820D86F0;
	// li r10,2
	ctx.r10.s64 = 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820D8474:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// twllei r3,0
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// twllei r3,0
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// divw r4,r7,r3
	ctx.r4.s32 = ctx.r7.s32 / ctx.r3.s32;
	// clrlwi r31,r8,24
	ctx.r31.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r11,r8,r3
	ctx.r11.s32 = ctx.r8.s32 / ctx.r3.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r30,r11,r3
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// subf r11,r4,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r4.s64;
	// andc r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 & ~ctx.r10.u64;
	// andc r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ~ctx.r5.u64;
	// subf r10,r30,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r30.s64;
	// twlgei r5,-1
	// twlgei r4,-1
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820d8510
	if (ctx.cr6.eq) goto loc_820D8510;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// addi r7,r1,-126
	ctx.r7.s64 = ctx.r1.s64 + -126;
	// addi r4,r1,-126
	ctx.r4.s64 = ctx.r1.s64 + -126;
	// lhzx r30,r10,r5
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// lhzx r28,r11,r8
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lhzx r27,r11,r7
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// sthx r30,r11,r8
	PPC_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u16);
	// lhzx r8,r10,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// sthx r8,r11,r7
	PPC_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u16);
	// sthx r28,r10,r5
	PPC_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r28.u16);
	// sthx r27,r10,r4
	PPC_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r27.u16);
loc_820D8510:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// twllei r3,0
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// twllei r3,0
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// divw r4,r7,r3
	ctx.r4.s32 = ctx.r7.s32 / ctx.r3.s32;
	// clrlwi r31,r8,24
	ctx.r31.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// divw r11,r8,r3
	ctx.r11.s32 = ctx.r8.s32 / ctx.r3.s32;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// mullw r10,r4,r3
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mullw r4,r11,r3
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// andc r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ~ctx.r5.u64;
	// andc r7,r3,r30
	ctx.r7.u64 = ctx.r3.u64 & ~ctx.r30.u64;
	// subf r11,r4,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r4.s64;
	// twlgei r5,-1
	// twlgei r7,-1
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820d85ac
	if (ctx.cr6.eq) goto loc_820D85AC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// addi r5,r1,-126
	ctx.r5.s64 = ctx.r1.s64 + -126;
	// addi r4,r1,-126
	ctx.r4.s64 = ctx.r1.s64 + -126;
	// lhzx r30,r11,r8
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lhzx r28,r10,r7
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// lhzx r27,r10,r5
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// sthx r30,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r30.u16);
	// lhzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// sthx r7,r10,r5
	PPC_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u16);
	// sthx r28,r11,r8
	PPC_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r28.u16);
	// sthx r27,r11,r4
	PPC_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r27.u16);
loc_820D85AC:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// twllei r3,0
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// twllei r3,0
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// divw r4,r7,r3
	ctx.r4.s32 = ctx.r7.s32 / ctx.r3.s32;
	// clrlwi r31,r8,24
	ctx.r31.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r11,r8,r3
	ctx.r11.s32 = ctx.r8.s32 / ctx.r3.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r30,r11,r3
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// subf r11,r4,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r4.s64;
	// andc r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 & ~ctx.r10.u64;
	// andc r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ~ctx.r5.u64;
	// subf r10,r30,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r30.s64;
	// twlgei r5,-1
	// twlgei r4,-1
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820d8648
	if (ctx.cr6.eq) goto loc_820D8648;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// addi r7,r1,-126
	ctx.r7.s64 = ctx.r1.s64 + -126;
	// addi r4,r1,-126
	ctx.r4.s64 = ctx.r1.s64 + -126;
	// lhzx r30,r10,r5
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// lhzx r28,r11,r8
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lhzx r27,r11,r7
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// sthx r30,r11,r8
	PPC_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u16);
	// lhzx r8,r10,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// sthx r8,r11,r7
	PPC_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u16);
	// sthx r28,r10,r5
	PPC_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r28.u16);
	// sthx r27,r10,r4
	PPC_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r27.u16);
loc_820D8648:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// twllei r3,0
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// twllei r3,0
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// divw r8,r5,r3
	ctx.r8.s32 = ctx.r5.s32 / ctx.r3.s32;
	// lbzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rotlwi r11,r5,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// divw r31,r4,r3
	ctx.r31.s32 = ctx.r4.s32 / ctx.r3.s32;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// mullw r10,r8,r3
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r8,r31,r3
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// andc r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// andc r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 & ~ctx.r30.u64;
	// subf r8,r8,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r8.s64;
	// twlgei r11,-1
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// twlgei r5,-1
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x820d86e4
	if (ctx.cr6.eq) goto loc_820D86E4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,-128
	ctx.r4.s64 = ctx.r1.s64 + -128;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// addi r5,r1,-126
	ctx.r5.s64 = ctx.r1.s64 + -126;
	// addi r31,r1,-126
	ctx.r31.s64 = ctx.r1.s64 + -126;
	// lhzx r30,r8,r4
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// lhzx r28,r10,r7
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// lhzx r27,r10,r5
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// sthx r30,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r30.u16);
	// lhzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// sthx r7,r10,r5
	PPC_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u16);
	// sthx r28,r8,r4
	PPC_STORE_U16(ctx.r8.u32 + ctx.r4.u32, ctx.r28.u16);
	// sthx r27,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r27.u16);
loc_820D86E4:
	// bdnz 0x820d8474
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D8474;
	// stb r11,24332(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24332, ctx.r11.u8);
	// li r3,3
	ctx.r3.s64 = 3;
loc_820D86F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820d8724
	if (!ctx.cr6.gt) goto loc_820D8724;
	// addi r10,r1,-126
	ctx.r10.s64 = ctx.r1.s64 + -126;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
loc_820D8708:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lhz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + -2);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820d8708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D8708;
loc_820D8724:
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820D8728"))) PPC_WEAK_FUNC(sub_820D8728);
PPC_FUNC_IMPL(__imp__sub_820D8728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D8730;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8215bec8
	ctx.lr = 0x820D8738;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x820d8884
	if (!ctx.cr6.eq) goto loc_820D8884;
	// bl 0x8215bec8
	ctx.lr = 0x820D8748;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820d8884
	if (ctx.cr6.eq) goto loc_820D8884;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,-5052(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// bl 0x82163df0
	ctx.lr = 0x820D8760;
	sub_82163DF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82230de8
	ctx.lr = 0x820D876C;
	sub_82230DE8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x8215bec8
	ctx.lr = 0x820D8774;
	sub_8215BEC8(ctx, base);
	// lbz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// lwz r9,1284(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820d8884
	if (!ctx.cr6.eq) goto loc_820D8884;
	// bl 0x82163df0
	ctx.lr = 0x820D878C;
	sub_82163DF0(ctx, base);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82163df0
	ctx.lr = 0x820D879C;
	sub_82163DF0(ctx, base);
	// lwzx r31,r3,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216c098
	ctx.lr = 0x820D87A8;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x820D87AC;
	sub_8215BD28(ctx, base);
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820d8884
	if (ctx.cr6.eq) goto loc_820D8884;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820d8884
	if (ctx.cr6.lt) goto loc_820D8884;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820d87d4
	if (ctx.cr6.eq) goto loc_820D87D4;
	// bl 0x82163df0
	ctx.lr = 0x820D87CC;
	sub_82163DF0(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stwx r11,r3,r30
	PPC_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r11.u32);
loc_820D87D4:
	// bl 0x82163df0
	ctx.lr = 0x820D87D8;
	sub_82163DF0(ctx, base);
	// lwzx r11,r3,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d8884
	if (!ctx.cr6.eq) goto loc_820D8884;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bgt cr6,0x820d8884
	if (ctx.cr6.gt) goto loc_820D8884;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820d8818
	// bdzf 4*cr6+eq,0x820d882c
	// bdzf 4*cr6+eq,0x820d884c
	// bne cr6,0x820d886c
	if (!ctx.cr6.eq) goto loc_820D886C;
	// li r3,20
	ctx.r3.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8222e1e0
	ctx.lr = 0x820D8810;
	sub_8222E1E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D8818:
	// li r3,21
	ctx.r3.s64 = 21;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8222e1e0
	ctx.lr = 0x820D8824;
	sub_8222E1E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D882C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8222e1e0
	ctx.lr = 0x820D8838;
	sub_8222E1E0(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8222e1e0
	ctx.lr = 0x820D8844;
	sub_8222E1E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D884C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8222e1e0
	ctx.lr = 0x820D8858;
	sub_8222E1E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8222e1e0
	ctx.lr = 0x820D8864;
	sub_8222E1E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D886C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,54
	ctx.r3.s64 = 54;
	// bl 0x8222e1e0
	ctx.lr = 0x820D8878;
	sub_8222E1E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8222e1e0
	ctx.lr = 0x820D8884;
	sub_8222E1E0(ctx, base);
loc_820D8884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D888C"))) PPC_WEAK_FUNC(sub_820D888C);
PPC_FUNC_IMPL(__imp__sub_820D888C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8890"))) PPC_WEAK_FUNC(sub_820D8890);
PPC_FUNC_IMPL(__imp__sub_820D8890) {
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
	ctx.lr = 0x820D88A0;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x820d88dc
	if (!ctx.cr6.eq) goto loc_820D88DC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-5052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d88dc
	if (ctx.cr6.eq) goto loc_820D88DC;
	// bl 0x820d8728
	ctx.lr = 0x820D88C0;
	sub_820D8728(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x820D88C4;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x820d88dc
	if (ctx.cr6.eq) goto loc_820D88DC;
	// bl 0x82163ee8
	ctx.lr = 0x820D88D4;
	sub_82163EE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_820D88DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D88EC"))) PPC_WEAK_FUNC(sub_820D88EC);
PPC_FUNC_IMPL(__imp__sub_820D88EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D88F0"))) PPC_WEAK_FUNC(sub_820D88F0);
PPC_FUNC_IMPL(__imp__sub_820D88F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820D88F8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d896c
	if (ctx.cr6.eq) goto loc_820D896C;
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r29,r10,-4
	ctx.r29.s64 = ctx.r10.s64 + -4;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt 0x820d8954
	if (ctx.cr0.lt) goto loc_820D8954;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_820D8934:
	// lwzu r3,-12(r30)
	ea = -12 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d8948
	if (ctx.cr6.eq) goto loc_820D8948;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820D8948;
	sub_82183E40(ctx, base);
loc_820D8948:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// bge 0x820d8934
	if (!ctx.cr0.lt) goto loc_820D8934;
loc_820D8954:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820D8960;
	sub_82183E40(ctx, base);
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820D896C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820D897C"))) PPC_WEAK_FUNC(sub_820D897C);
PPC_FUNC_IMPL(__imp__sub_820D897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8980"))) PPC_WEAK_FUNC(sub_820D8980);
PPC_FUNC_IMPL(__imp__sub_820D8980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820D8988;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d89f8
	if (ctx.cr6.eq) goto loc_820D89F8;
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r26,r10,-4
	ctx.r26.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt 0x820d89ec
	if (ctx.cr0.lt) goto loc_820D89EC;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
loc_820D89CC:
	// lwzu r3,-12(r27)
	ea = -12 + ctx.r27.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d89e0
	if (ctx.cr6.eq) goto loc_820D89E0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820D89E0;
	sub_82183E40(ctx, base);
loc_820D89E0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// bge 0x820d89cc
	if (!ctx.cr0.lt) goto loc_820D89CC;
loc_820D89EC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82183e40
	ctx.lr = 0x820D89F8;
	sub_82183E40(ctx, base);
loc_820D89F8:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x820D8A10;
	sub_8218AA18(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x820D8A14;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820D8A20;
	sub_821837D0(ctx, base);
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
	// bne cr6,0x820d8a7c
	if (!ctx.cr6.eq) goto loc_820D8A7C;
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
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x820d8a80
	goto loc_820D8A80;
loc_820D8A7C:
	// li r28,1
	ctx.r28.s64 = 1;
loc_820D8A80:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820d8b08
	if (ctx.cr6.eq) goto loc_820D8B08;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820d8abc
	if (ctx.cr6.gt) goto loc_820D8ABC;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,-5
	ctx.r10.s64 = -5;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x820d8ac0
	if (!ctx.cr6.gt) goto loc_820D8AC0;
loc_820D8ABC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_820D8AC0:
	// bl 0x82080d68
	ctx.lr = 0x820D8AC4;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d8b00
	if (ctx.cr6.eq) goto loc_820D8B00;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x820d8af8
	if (ctx.cr0.lt) goto loc_820D8AF8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820D8AE8:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stwu r31,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820d8ae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D8AE8;
loc_820D8AF8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x820d8b04
	goto loc_820D8B04;
loc_820D8B00:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_820D8B04:
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_820D8B08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820d8bc4
	if (!ctx.cr6.gt) goto loc_820D8BC4;
	// lis r11,585
	ctx.r11.s64 = 38338560;
	// ori r26,r11,9362
	ctx.r26.u64 = ctx.r11.u64 | 9362;
loc_820D8B20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ab00
	ctx.lr = 0x820D8B2C;
	sub_8218AB00(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x821847a8
	ctx.lr = 0x820D8B44;
	sub_821847A8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// mulli r27,r11,112
	ctx.r27.s64 = ctx.r11.s64 * 112;
	// ble cr6,0x820d8b60
	if (!ctx.cr6.gt) goto loc_820D8B60;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_820D8B60:
	// bl 0x82183850
	ctx.lr = 0x820D8B64;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820d8b7c
	if (ctx.cr6.eq) goto loc_820D8B7C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183448
	ctx.lr = 0x820D8B78;
	sub_82183448(ctx, base);
	// b 0x820d8b88
	goto loc_820D8B88;
loc_820D8B7C:
	// addi r11,r27,15
	ctx.r11.s64 = ctx.r27.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820D8B88;
	sub_821845A0(ctx, base);
loc_820D8B88:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r5,r10,112
	ctx.r5.s64 = ctx.r10.s64 * 112;
	// bl 0x821847a8
	ctx.lr = 0x820D8BB0;
	sub_821847A8(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820d8b20
	if (ctx.cr6.lt) goto loc_820D8B20;
loc_820D8BC4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x820D8BCC;
	sub_821837D0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a7f0
	ctx.lr = 0x820D8BD4;
	sub_8218A7F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820D8BDC"))) PPC_WEAK_FUNC(sub_820D8BDC);
PPC_FUNC_IMPL(__imp__sub_820D8BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8BE0"))) PPC_WEAK_FUNC(sub_820D8BE0);
PPC_FUNC_IMPL(__imp__sub_820D8BE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8BF4"))) PPC_WEAK_FUNC(sub_820D8BF4);
PPC_FUNC_IMPL(__imp__sub_820D8BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8BF8"))) PPC_WEAK_FUNC(sub_820D8BF8);
PPC_FUNC_IMPL(__imp__sub_820D8BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820d8c10
	if (!ctx.cr6.eq) goto loc_820D8C10;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D8C10:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8C24"))) PPC_WEAK_FUNC(sub_820D8C24);
PPC_FUNC_IMPL(__imp__sub_820D8C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8C28"))) PPC_WEAK_FUNC(sub_820D8C28);
PPC_FUNC_IMPL(__imp__sub_820D8C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820d8c3c
	if (!ctx.cr6.eq) goto loc_820D8C3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D8C3C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r6,1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// lhz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8C64"))) PPC_WEAK_FUNC(sub_820D8C64);
PPC_FUNC_IMPL(__imp__sub_820D8C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8C68"))) PPC_WEAK_FUNC(sub_820D8C68);
PPC_FUNC_IMPL(__imp__sub_820D8C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820d8c7c
	if (!ctx.cr6.eq) goto loc_820D8C7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D8C7C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8CB4"))) PPC_WEAK_FUNC(sub_820D8CB4);
PPC_FUNC_IMPL(__imp__sub_820D8CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8CB8"))) PPC_WEAK_FUNC(sub_820D8CB8);
PPC_FUNC_IMPL(__imp__sub_820D8CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820d8cd0
	if (!ctx.cr6.eq) goto loc_820D8CD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820D8CD0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8D08"))) PPC_WEAK_FUNC(sub_820D8D08);
PPC_FUNC_IMPL(__imp__sub_820D8D08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d8d1c
	if (!ctx.cr6.eq) goto loc_820D8D1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D8D1C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8D28"))) PPC_WEAK_FUNC(sub_820D8D28);
PPC_FUNC_IMPL(__imp__sub_820D8D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,15956
	ctx.r9.s64 = ctx.r11.s64 + 15956;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8D40"))) PPC_WEAK_FUNC(sub_820D8D40);
PPC_FUNC_IMPL(__imp__sub_820D8D40) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,15956
	ctx.r10.s64 = ctx.r11.s64 + 15956;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820d8d9c
	if (ctx.cr6.eq) goto loc_820D8D9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D8D80;
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
loc_820D8D9C:
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

__attribute__((alias("__imp__sub_820D8DB8"))) PPC_WEAK_FUNC(sub_820D8DB8);
PPC_FUNC_IMPL(__imp__sub_820D8DB8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d8df4
	if (ctx.cr6.eq) goto loc_820D8DF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D8DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D8DF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820D8E14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d8e30
	if (ctx.cr6.eq) goto loc_820D8E30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D8E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D8E30:
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

__attribute__((alias("__imp__sub_820D8E48"))) PPC_WEAK_FUNC(sub_820D8E48);
PPC_FUNC_IMPL(__imp__sub_820D8E48) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d8ec4
	if (ctx.cr6.eq) goto loc_820D8EC4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D8E80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820D8E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d8ec4
	if (ctx.cr6.eq) goto loc_820D8EC4;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820D8EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D8EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D8EC4:
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

__attribute__((alias("__imp__sub_820D8EDC"))) PPC_WEAK_FUNC(sub_820D8EDC);
PPC_FUNC_IMPL(__imp__sub_820D8EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8EE0"))) PPC_WEAK_FUNC(sub_820D8EE0);
PPC_FUNC_IMPL(__imp__sub_820D8EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8EF4"))) PPC_WEAK_FUNC(sub_820D8EF4);
PPC_FUNC_IMPL(__imp__sub_820D8EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8EF8"))) PPC_WEAK_FUNC(sub_820D8EF8);
PPC_FUNC_IMPL(__imp__sub_820D8EF8) {
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
	// bl 0x820d8d40
	ctx.lr = 0x820D8F18;
	sub_820D8D40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d8f34
	if (ctx.cr6.eq) goto loc_820D8F34;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D8F30;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D8F34:
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

__attribute__((alias("__imp__sub_820D8F4C"))) PPC_WEAK_FUNC(sub_820D8F4C);
PPC_FUNC_IMPL(__imp__sub_820D8F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D8F50"))) PPC_WEAK_FUNC(sub_820D8F50);
PPC_FUNC_IMPL(__imp__sub_820D8F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r9,r11,15988
	ctx.r9.s64 = ctx.r11.s64 + 15988;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D8F78"))) PPC_WEAK_FUNC(sub_820D8F78);
PPC_FUNC_IMPL(__imp__sub_820D8F78) {
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
	// bl 0x820d8890
	ctx.lr = 0x820D8F94;
	sub_820D8890(ctx, base);
	// bl 0x820cb338
	ctx.lr = 0x820D8F98;
	sub_820CB338(ctx, base);
	// bl 0x820cc090
	ctx.lr = 0x820D8F9C;
	sub_820CC090(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,-2032(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// bl 0x8215bd60
	ctx.lr = 0x820D8FA8;
	sub_8215BD60(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d8fd4
	if (ctx.cr6.eq) goto loc_820D8FD4;
	// bl 0x82227aa0
	ctx.lr = 0x820D8FB8;
	sub_82227AA0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820d8fd4
	if (!ctx.cr6.eq) goto loc_820D8FD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82128678
	ctx.lr = 0x820D8FCC;
	sub_82128678(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820d8fe0
	goto loc_820D8FE0;
loc_820D8FD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82128730
	ctx.lr = 0x820D8FDC;
	sub_82128730(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820D8FE0:
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

__attribute__((alias("__imp__sub_820D8FFC"))) PPC_WEAK_FUNC(sub_820D8FFC);
PPC_FUNC_IMPL(__imp__sub_820D8FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9000"))) PPC_WEAK_FUNC(sub_820D9000);
PPC_FUNC_IMPL(__imp__sub_820D9000) {
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
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820d9038
	if (!ctx.cr6.eq) goto loc_820D9038;
	// bl 0x82128730
	ctx.lr = 0x820D9024;
	sub_82128730(ctx, base);
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
loc_820D9038:
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

__attribute__((alias("__imp__sub_820D904C"))) PPC_WEAK_FUNC(sub_820D904C);
PPC_FUNC_IMPL(__imp__sub_820D904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9050"))) PPC_WEAK_FUNC(sub_820D9050);
PPC_FUNC_IMPL(__imp__sub_820D9050) {
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
	// lwz r11,-2032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820d90a4
	if (!ctx.cr6.eq) goto loc_820D90A4;
	// bl 0x8215bec8
	ctx.lr = 0x820D907C;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_820D90A4:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820d90e4
	if (!ctx.cr6.eq) goto loc_820D90E4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,1092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// bl 0x82231be8
	ctx.lr = 0x820D90B8;
	sub_82231BE8(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x820D90BC;
	sub_8215BEC8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,13
	ctx.r9.s64 = 13;
	// stb r10,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820D90E4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820d9118
	if (!ctx.cr6.eq) goto loc_820D9118;
	// bl 0x8215bec8
	ctx.lr = 0x820D90F0;
	sub_8215BEC8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_820D9118:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820d914c
	if (!ctx.cr6.eq) goto loc_820D914C;
	// bl 0x8215bec8
	ctx.lr = 0x820D9124;
	sub_8215BEC8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_820D914C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820d9180
	if (!ctx.cr6.eq) goto loc_820D9180;
	// bl 0x8215bec8
	ctx.lr = 0x820D9158;
	sub_8215BEC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_820D9180:
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

__attribute__((alias("__imp__sub_820D9198"))) PPC_WEAK_FUNC(sub_820D9198);
PPC_FUNC_IMPL(__imp__sub_820D9198) {
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
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820d91f0
	if (ctx.cr6.eq) goto loc_820D91F0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820d91d8
	if (ctx.cr6.lt) goto loc_820D91D8;
	// bne cr6,0x820d91f0
	if (!ctx.cr6.eq) goto loc_820D91F0;
	// bl 0x820d9050
	ctx.lr = 0x820D91C8;
	sub_820D9050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d91f0
	if (ctx.cr6.eq) goto loc_820D91F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820d91ec
	goto loc_820D91EC;
loc_820D91D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d9000
	ctx.lr = 0x820D91E0;
	sub_820D9000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d91f0
	if (ctx.cr6.eq) goto loc_820D91F0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820D91EC:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820D91F0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D9204"))) PPC_WEAK_FUNC(sub_820D9204);
PPC_FUNC_IMPL(__imp__sub_820D9204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9208"))) PPC_WEAK_FUNC(sub_820D9208);
PPC_FUNC_IMPL(__imp__sub_820D9208) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,19
	ctx.r9.s64 = 19;
	// addi r8,r10,16012
	ctx.r8.s64 = ctx.r10.s64 + 16012;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9234"))) PPC_WEAK_FUNC(sub_820D9234);
PPC_FUNC_IMPL(__imp__sub_820D9234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9238"))) PPC_WEAK_FUNC(sub_820D9238);
PPC_FUNC_IMPL(__imp__sub_820D9238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D924C"))) PPC_WEAK_FUNC(sub_820D924C);
PPC_FUNC_IMPL(__imp__sub_820D924C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D9250"))) PPC_WEAK_FUNC(sub_820D9250);
PPC_FUNC_IMPL(__imp__sub_820D9250) {
	PPC_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9258"))) PPC_WEAK_FUNC(sub_820D9258);
PPC_FUNC_IMPL(__imp__sub_820D9258) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,9888
	ctx.r8.s64 = ctx.r9.s64 + 9888;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r11,-4944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4944, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820d929c
	if (ctx.cr6.eq) goto loc_820D929C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820D9298;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820D929C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820D92B0"))) PPC_WEAK_FUNC(sub_820D92B0);
PPC_FUNC_IMPL(__imp__sub_820D92B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D92B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d92d8
	if (ctx.cr6.eq) goto loc_820D92D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82127a50
	ctx.lr = 0x820D92D8;
	sub_82127A50(ctx, base);
loc_820D92D8:
	// bl 0x8215bec8
	ctx.lr = 0x820D92DC;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// bl 0x8215bec8
	ctx.lr = 0x820D92E8;
	sub_8215BEC8(ctx, base);
	// lbz r10,109(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 109);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// beq cr6,0x820d9300
	if (ctx.cr6.eq) goto loc_820D9300;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820d9308
	if (!ctx.cr6.eq) goto loc_820D9308;
loc_820D9300:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820D9308:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r29,r7,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82097288
	ctx.lr = 0x820D932C;
	sub_82097288(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820d933c
	if (!ctx.cr6.eq) goto loc_820D933C;
	// li r4,9100
	ctx.r4.s64 = 9100;
loc_820D933C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f03b0
	ctx.lr = 0x820D9344;
	sub_820F03B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,596
	ctx.r3.s64 = ctx.r29.s64 + 596;
	// bl 0x82163ef8
	ctx.lr = 0x820D9350;
	sub_82163EF8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r8,r11,-7560
	ctx.r8.s64 = ctx.r11.s64 + -7560;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-4952(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4952, ctx.r11.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r10,-4980(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4980, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,4639
	ctx.r4.u64 = ctx.r4.u64 | 4639;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x8208f758
	ctx.lr = 0x820D939C;
	sub_8208F758(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,4643
	ctx.r4.u64 = ctx.r4.u64 | 4643;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8208f758
	ctx.lr = 0x820D93B0;
	sub_8208F758(ctx, base);
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4944(r5)
	PPC_STORE_U32(ctx.r5.u32 + -4944, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D93C4"))) PPC_WEAK_FUNC(sub_820D93C4);
PPC_FUNC_IMPL(__imp__sub_820D93C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D93C8"))) PPC_WEAK_FUNC(sub_820D93C8);
PPC_FUNC_IMPL(__imp__sub_820D93C8) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,1936(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1936);
	// lwz r11,1028(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1028);
	// lfs f12,868(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 868);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d940c
	if (ctx.cr6.eq) goto loc_820D940C;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// b 0x820d9414
	goto loc_820D9414;
loc_820D940C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
loc_820D9414:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820d947c
	if (!ctx.cr6.lt) goto loc_820D947C;
	// lwz r3,344(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// bl 0x8208dfc8
	ctx.lr = 0x820D9430;
	sub_8208DFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d947c
	if (!ctx.cr6.eq) goto loc_820D947C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820D943C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e938
	ctx.lr = 0x820D9444;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D9454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d947c
	if (!ctx.cr6.eq) goto loc_820D947C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x820d943c
	if (ctx.cr6.lt) goto loc_820D943C;
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
loc_820D947C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-4980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4980, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820D94A0"))) PPC_WEAK_FUNC(sub_820D94A0);
PPC_FUNC_IMPL(__imp__sub_820D94A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D94A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bge 0x820d94c8
	if (!ctx.cr0.lt) goto loc_820D94C8;
loc_820D94BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D94C8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r29,r11,-5052
	ctx.r29.s64 = ctx.r11.s64 + -5052;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_820D94D4:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820d955c
	if (ctx.cr6.eq) goto loc_820D955C;
	// bl 0x8215bd60
	ctx.lr = 0x820D94E4;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d9520
	if (ctx.cr6.eq) goto loc_820D9520;
	// lis r4,26448
	ctx.r4.s64 = 1733296128;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,16708
	ctx.r4.u64 = ctx.r4.u64 | 16708;
	// bl 0x821882d0
	ctx.lr = 0x820D9500;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d9514
	if (ctx.cr6.eq) goto loc_820D9514;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x820c3a98
	ctx.lr = 0x820D9510;
	sub_820C3A98(ctx, base);
	// b 0x820d9554
	goto loc_820D9554;
loc_820D9514:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820c3a98
	ctx.lr = 0x820D951C;
	sub_820C3A98(ctx, base);
	// b 0x820d9554
	goto loc_820D9554;
loc_820D9520:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D9534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d955c
	if (!ctx.cr6.eq) goto loc_820D955C;
	// lwz r3,1280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// bl 0x8218e938
	ctx.lr = 0x820D9544;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D9554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D9554:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d94bc
	if (!ctx.cr6.eq) goto loc_820D94BC;
loc_820D955C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820d94d4
	if (ctx.cr6.lt) goto loc_820D94D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D9578"))) PPC_WEAK_FUNC(sub_820D9578);
PPC_FUNC_IMPL(__imp__sub_820D9578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820D9580;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,-4972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x820d95a0
	if (!ctx.cr6.lt) goto loc_820D95A0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-4972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4972, ctx.r10.u32);
loc_820D95A0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820d9758
	if (ctx.cr6.eq) goto loc_820D9758;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820d9758
	if (ctx.cr6.gt) goto loc_820D9758;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820d9644
	// bdzf 4*cr6+eq,0x820d96b8
	// bne cr6,0x820d9734
	if (!ctx.cr6.eq) goto loc_820D9734;
	// lwz r11,-9772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x820D95DC;
	sub_8209C630(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820d9644
	if (!ctx.cr6.gt) goto loc_820D9644;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d9644
	if (ctx.cr6.eq) goto loc_820D9644;
	// bl 0x820f2688
	ctx.lr = 0x820D9600;
	sub_820F2688(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2640
	ctx.lr = 0x820D9618;
	sub_820F2640(ctx, base);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f28e0
	ctx.lr = 0x820D9634;
	sub_820F28E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D9644:
	// lwz r11,-9772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x820D9650;
	sub_8209C630(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820d9758
	if (!ctx.cr6.gt) goto loc_820D9758;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d9758
	if (ctx.cr6.eq) goto loc_820D9758;
	// bl 0x820f2688
	ctx.lr = 0x820D9674;
	sub_820F2688(ctx, base);
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f28e0
	ctx.lr = 0x820D9690;
	sub_820F28E0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2640
	ctx.lr = 0x820D96A8;
	sub_820F2640(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D96B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d93c8
	ctx.lr = 0x820D96C0;
	sub_820D93C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d9758
	if (ctx.cr6.eq) goto loc_820D9758;
	// bl 0x8215bd60
	ctx.lr = 0x820D96CC;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d9724
	if (ctx.cr6.eq) goto loc_820D9724;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r30,r11,-5052
	ctx.r30.s64 = ctx.r11.s64 + -5052;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_820D96E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d96fc
	if (ctx.cr6.eq) goto loc_820D96FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4f8
	ctx.lr = 0x820D96FC;
	sub_820EF4F8(ctx, base);
loc_820D96FC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820d96e4
	if (ctx.cr6.lt) goto loc_820D96E4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d9724
	if (ctx.cr6.eq) goto loc_820D9724;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_820D9724:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820D9734:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d94a0
	ctx.lr = 0x820D973C;
	sub_820D94A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d9758
	if (ctx.cr6.eq) goto loc_820D9758;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,-4944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4944, ctx.r11.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_820D9758:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820D9760"))) PPC_WEAK_FUNC(sub_820D9760);
PPC_FUNC_IMPL(__imp__sub_820D9760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r9,r11,16036
	ctx.r9.s64 = ctx.r11.s64 + 16036;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9780"))) PPC_WEAK_FUNC(sub_820D9780);
PPC_FUNC_IMPL(__imp__sub_820D9780) {
	PPC_FUNC_PROLOGUE();
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820D9788"))) PPC_WEAK_FUNC(sub_820D9788);
PPC_FUNC_IMPL(__imp__sub_820D9788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820D9790;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r4,17985
	ctx.r4.s64 = 1178664960;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r4,r4,17477
	ctx.r4.u64 = ctx.r4.u64 | 17477;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x820D97B0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d97c0
	if (ctx.cr6.eq) goto loc_820D97C0;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820d97c4
	goto loc_820D97C4;
loc_820D97C0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_820D97C4:
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-4952(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4952, ctx.r11.u32);
	// stw r10,-4980(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4980, ctx.r10.u32);
	// bl 0x8215bd60
	ctx.lr = 0x820D97E0;
	sub_8215BD60(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820d981c
	if (ctx.cr6.eq) goto loc_820D981C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
loc_820D97F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d9810
	if (ctx.cr6.eq) goto loc_820D9810;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4f8
	ctx.lr = 0x820D9810;
	sub_820EF4F8(ctx, base);
loc_820D9810:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820d97f8
	if (!ctx.cr0.eq) goto loc_820D97F8;
loc_820D981C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f2688
	ctx.lr = 0x820D9824;
	sub_820F2688(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f2640
	ctx.lr = 0x820D983C;
	sub_820F2640(ctx, base);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f28e0
	ctx.lr = 0x820D9858;
	sub_820F28E0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// bl 0x821285b8
	ctx.lr = 0x820D9864;
	sub_821285B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820D9874"))) PPC_WEAK_FUNC(sub_820D9874);
PPC_FUNC_IMPL(__imp__sub_820D9874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

