#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82210CBC"))) PPC_WEAK_FUNC(sub_82210CBC);
PPC_FUNC_IMPL(__imp__sub_82210CBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210CC0"))) PPC_WEAK_FUNC(sub_82210CC0);
PPC_FUNC_IMPL(__imp__sub_82210CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82210CC8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82210d7c
	if (ctx.cr6.eq) goto loc_82210D7C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82210d7c
	if (ctx.cr6.eq) goto loc_82210D7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x82210CF4;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x82210D00;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82210D10;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82210D1C;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82210d64
	if (!ctx.cr6.gt) goto loc_82210D64;
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r10,54420
	ctx.r9.u64 = ctx.r10.u64 | 54420;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,377
	ctx.r4.s64 = 377;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f0,r8,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x8210a9b0
	ctx.lr = 0x82210D64;
	sub_8210A9B0(ctx, base);
loc_82210D64:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82210D70;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82210D7C;
	sub_821AD498(ctx, base);
loc_82210D7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82210D84"))) PPC_WEAK_FUNC(sub_82210D84);
PPC_FUNC_IMPL(__imp__sub_82210D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210D88"))) PPC_WEAK_FUNC(sub_82210D88);
PPC_FUNC_IMPL(__imp__sub_82210D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82210D90;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x82210D9C;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82210DA4;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82210DB0;
	sub_821837D0(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x823c3410
	ctx.lr = 0x82210DB8;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x82210DC0;
	sub_823C3C70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82210DC8;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82210DD0"))) PPC_WEAK_FUNC(sub_82210DD0);
PPC_FUNC_IMPL(__imp__sub_82210DD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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

__attribute__((alias("__imp__sub_82210DEC"))) PPC_WEAK_FUNC(sub_82210DEC);
PPC_FUNC_IMPL(__imp__sub_82210DEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210DF0"))) PPC_WEAK_FUNC(sub_82210DF0);
PPC_FUNC_IMPL(__imp__sub_82210DF0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// addi r9,r3,56
	ctx.r9.s64 = ctx.r3.s64 + 56;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// stw r7,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210E30"))) PPC_WEAK_FUNC(sub_82210E30);
PPC_FUNC_IMPL(__imp__sub_82210E30) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// stw r6,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r6.u32);
	// addi r9,r3,72
	ctx.r9.s64 = ctx.r3.s64 + 72;
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// stw r6,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r6.u32);
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210E70"))) PPC_WEAK_FUNC(sub_82210E70);
PPC_FUNC_IMPL(__imp__sub_82210E70) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-1208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82210ec0
	if (ctx.cr6.eq) goto loc_82210EC0;
	// lbz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 72);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x821de190
	ctx.lr = 0x82210EB0;
	sub_821DE190(ctx, base);
	// lwz r3,-1208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1208);
	// bl 0x821de188
	ctx.lr = 0x82210EB8;
	sub_821DE188(ctx, base);
	// lwz r3,-1208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1208);
	// bl 0x821de178
	ctx.lr = 0x82210EC0;
	sub_821DE178(ctx, base);
loc_82210EC0:
	// bl 0x821142a0
	ctx.lr = 0x82210EC4;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82210f98
	if (ctx.cr6.eq) goto loc_82210F98;
	// lbz r11,47(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 47);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,51(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 51);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lbz r6,49(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,-23044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23044);
	ctx.f0.f64 = double(temp.f32);
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lfs f31,10376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10376);
	ctx.f31.f64 = double(temp.f32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmuls f30,f5,f0
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f29,f4,f0
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fctidz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// bl 0x821142a0
	ctx.lr = 0x82210F40;
	sub_821142A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82114430
	ctx.lr = 0x82210F4C;
	sub_82114430(ctx, base);
	// fmuls f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// bl 0x821142a0
	ctx.lr = 0x82210F5C;
	sub_821142A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82114430
	ctx.lr = 0x82210F68;
	sub_82114430(ctx, base);
	// fmuls f13,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821142a0
	ctx.lr = 0x82210F7C;
	sub_821142A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82114430
	ctx.lr = 0x82210F88;
	sub_82114430(ctx, base);
	// bl 0x821142a0
	ctx.lr = 0x82210F8C;
	sub_821142A0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82114430
	ctx.lr = 0x82210F98;
	sub_82114430(ctx, base);
loc_82210F98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82210FBC"))) PPC_WEAK_FUNC(sub_82210FBC);
PPC_FUNC_IMPL(__imp__sub_82210FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210FC0"))) PPC_WEAK_FUNC(sub_82210FC0);
PPC_FUNC_IMPL(__imp__sub_82210FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82210FC8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82210FDC;
	sub_823C3B68(ctx, base);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c58b0
	ctx.lr = 0x82210FF0;
	sub_823C58B0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-4224
	ctx.r8.s64 = ctx.r10.s64 + -4224;
	// addi r7,r9,-4360
	ctx.r7.s64 = ctx.r9.s64 + -4360;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r27,r31,268
	ctx.r27.s64 = ctx.r31.s64 + 268;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r6,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r6.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c2ff0
	ctx.lr = 0x8221102C;
	sub_823C2FF0(ctx, base);
	// addi r28,r31,316
	ctx.r28.s64 = ctx.r31.s64 + 316;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c35b8
	ctx.lr = 0x82211040;
	sub_823C35B8(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82211054
	if (ctx.cr6.eq) goto loc_82211054;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c5678
	ctx.lr = 0x82211054;
	sub_823C5678(ctx, base);
loc_82211054:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// bl 0x823c3240
	ctx.lr = 0x82211070;
	sub_823C3240(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f2,14876(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x82211090;
	sub_823C31B0(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x82211094;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8221109C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x822110A8;
	sub_821837D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c3410
	ctx.lr = 0x822110B0;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x822110B8;
	sub_823C3C70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x822110C0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822110CC"))) PPC_WEAK_FUNC(sub_822110CC);
PPC_FUNC_IMPL(__imp__sub_822110CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822110D0"))) PPC_WEAK_FUNC(sub_822110D0);
PPC_FUNC_IMPL(__imp__sub_822110D0) {
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
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822110F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82211108;
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

__attribute__((alias("__imp__sub_8221111C"))) PPC_WEAK_FUNC(sub_8221111C);
PPC_FUNC_IMPL(__imp__sub_8221111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211120"))) PPC_WEAK_FUNC(sub_82211120);
PPC_FUNC_IMPL(__imp__sub_82211120) {
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
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82211144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82211158;
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

__attribute__((alias("__imp__sub_8221116C"))) PPC_WEAK_FUNC(sub_8221116C);
PPC_FUNC_IMPL(__imp__sub_8221116C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211170"))) PPC_WEAK_FUNC(sub_82211170);
PPC_FUNC_IMPL(__imp__sub_82211170) {
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
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82211194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,141
	ctx.r9.s64 = ctx.r3.s64 + 141;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_822111B4"))) PPC_WEAK_FUNC(sub_822111B4);
PPC_FUNC_IMPL(__imp__sub_822111B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822111B8"))) PPC_WEAK_FUNC(sub_822111B8);
PPC_FUNC_IMPL(__imp__sub_822111B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822111C0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,584
	ctx.r27.s64 = ctx.r3.s64 + 584;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r28,2
	ctx.r28.s64 = 2;
loc_822111DC:
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x82230c00
	ctx.lr = 0x822111E4;
	sub_82230C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822111f8
	if (ctx.cr6.eq) goto loc_822111F8;
	// stw r30,604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 604, ctx.r30.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x822111fc
	goto loc_822111FC;
loc_822111F8:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_822111FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x822111dc
	if (ctx.cr6.lt) goto loc_822111DC;
	// bl 0x822e6048
	ctx.lr = 0x82211210;
	sub_822E6048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221124c
	if (!ctx.cr6.eq) goto loc_8221124C;
	// lwz r11,604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221124c
	if (ctx.cr6.eq) goto loc_8221124C;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ble 0x8221124c
	if (!ctx.cr0.gt) goto loc_8221124C;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
loc_82211234:
	// stwu r28,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,604(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 604);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82211234
	if (ctx.cr6.lt) goto loc_82211234;
loc_8221124C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82211254"))) PPC_WEAK_FUNC(sub_82211254);
PPC_FUNC_IMPL(__imp__sub_82211254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211258"))) PPC_WEAK_FUNC(sub_82211258);
PPC_FUNC_IMPL(__imp__sub_82211258) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82211260
	sub_82211260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82211260"))) PPC_WEAK_FUNC(sub_82211260);
PPC_FUNC_IMPL(__imp__sub_82211260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82211268;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3984
	ctx.r9.s64 = ctx.r11.s64 + -3984;
	// addi r8,r10,-4120
	ctx.r8.s64 = ctx.r10.s64 + -4120;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,260
	ctx.r3.s64 = ctx.r3.s64 + 260;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// bl 0x823c31a0
	ctx.lr = 0x82211298;
	sub_823C31A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x822112A0;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x822112A8;
	sub_823C3BC0(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822112c4
	if (ctx.cr6.eq) goto loc_822112C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x822112C0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822112C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822112CC"))) PPC_WEAK_FUNC(sub_822112CC);
PPC_FUNC_IMPL(__imp__sub_822112CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822112D0"))) PPC_WEAK_FUNC(sub_822112D0);
PPC_FUNC_IMPL(__imp__sub_822112D0) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82211424
	if (ctx.cr6.eq) goto loc_82211424;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82211424
	if (ctx.cr6.eq) goto loc_82211424;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r30,r11,-23400
	ctx.r30.s64 = ctx.r11.s64 + -23400;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221137c
	if (ctx.cr6.eq) goto loc_8221137C;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8221132C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82211338
	if (!ctx.cr0.lt) goto loc_82211338;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82211338:
	// addi r9,r11,139
	ctx.r9.s64 = ctx.r11.s64 + 139;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x8221132c
	if (ctx.cr6.eq) goto loc_8221132C;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8221137c
	if (ctx.cr6.eq) goto loc_8221137C;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82211370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_8221137C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82211404
	if (ctx.cr6.eq) goto loc_82211404;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822113A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r5,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// addi r4,r11,139
	ctx.r4.s64 = ctx.r11.s64 + 139;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x822113a4
	if (ctx.cr6.eq) goto loc_822113A4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82211404
	if (ctx.cr6.eq) goto loc_82211404;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822113F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_82211404:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82211424
	if (ctx.cr6.eq) goto loc_82211424;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82211424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82211424:
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

__attribute__((alias("__imp__sub_8221143C"))) PPC_WEAK_FUNC(sub_8221143C);
PPC_FUNC_IMPL(__imp__sub_8221143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211440"))) PPC_WEAK_FUNC(sub_82211440);
PPC_FUNC_IMPL(__imp__sub_82211440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82211448;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822114f4
	if (ctx.cr6.eq) goto loc_822114F4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822114f4
	if (ctx.cr6.eq) goto loc_822114F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x8221147C;
	sub_821ADDC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x82211488;
	sub_821ADD20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82211498;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x822114A4;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x822114dc
	if (!ctx.cr6.gt) goto loc_822114DC;
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r10,55140
	ctx.r9.u64 = ctx.r10.u64 | 55140;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,382
	ctx.r4.s64 = 382;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f31,r8,r9
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,256(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// bl 0x8210a9b0
	ctx.lr = 0x822114DC;
	sub_8210A9B0(ctx, base);
loc_822114DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x822114E8;
	sub_821AD600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x822114F4;
	sub_821AD498(ctx, base);
loc_822114F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82211500"))) PPC_WEAK_FUNC(sub_82211500);
PPC_FUNC_IMPL(__imp__sub_82211500) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,584
	ctx.r10.s64 = ctx.r3.s64 + 584;
loc_8221150C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221152c
	if (ctx.cr6.eq) goto loc_8221152C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8221150c
	if (ctx.cr6.lt) goto loc_8221150C;
	// b 0x82211530
	goto loc_82211530;
loc_8221152C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82211530:
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// addi r8,r3,56
	ctx.r8.s64 = ctx.r3.s64 + 56;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// stw r6,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211574"))) PPC_WEAK_FUNC(sub_82211574);
PPC_FUNC_IMPL(__imp__sub_82211574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211578"))) PPC_WEAK_FUNC(sub_82211578);
PPC_FUNC_IMPL(__imp__sub_82211578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r4,712
	ctx.r11.s64 = ctx.r4.s64 + 712;
	// lwz r7,256(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r10,r4,717
	ctx.r10.s64 = ctx.r4.s64 + 717;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f0,11300(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r4,722
	ctx.r9.s64 = ctx.r4.s64 + 722;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,200(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,204(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,208(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,200(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,204(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,208(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r4,256(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f3,-16(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,200(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,204(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,208(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 208, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211710"))) PPC_WEAK_FUNC(sub_82211710);
PPC_FUNC_IMPL(__imp__sub_82211710) {
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
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r9,50116
	ctx.r7.u64 = ctx.r9.u64 | 50116;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ori r6,r8,50372
	ctx.r6.u64 = ctx.r8.u64 | 50372;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r10,r4,50628
	ctx.r10.u64 = ctx.r4.u64 | 50628;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stwx r11,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r11.u32);
	// ori r9,r3,50884
	ctx.r9.u64 = ctx.r3.u64 | 50884;
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// ori r5,r8,51140
	ctx.r5.u64 = ctx.r8.u64 | 51140;
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r11,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r11,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r11,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822117A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r11,r3,707
	ctx.xer.ca = ctx.r3.u32 > 4294966588;
	ctx.r11.s64 = ctx.r3.s64 + 707;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822117c0
	if (ctx.cr0.lt) goto loc_822117C0;
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_822117C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x823c3240
	ctx.lr = 0x822117CC;
	sub_823C3240(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_822117E0"))) PPC_WEAK_FUNC(sub_822117E0);
PPC_FUNC_IMPL(__imp__sub_822117E0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,260
	ctx.r3.s64 = ctx.r3.s64 + 260;
	// bl 0x823c3280
	ctx.lr = 0x82211804;
	sub_823C3280(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x82211838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r6,r3,707
	ctx.r6.s64 = ctx.r3.s64 + 707;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,200(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,204(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,208(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
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

__attribute__((alias("__imp__sub_82211880"))) PPC_WEAK_FUNC(sub_82211880);
PPC_FUNC_IMPL(__imp__sub_82211880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82211888;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822118AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,256(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r8,47576
	ctx.r6.u64 = ctx.r8.u64 | 47576;
	// ori r5,r7,47596
	ctx.r5.u64 = ctx.r7.u64 | 47596;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stwx r3,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r31,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r31.u32);
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822118EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,256(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r4,r6,47832
	ctx.r4.u64 = ctx.r6.u64 | 47832;
	// ori r11,r5,47852
	ctx.r11.u64 = ctx.r5.u64 | 47852;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r3,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r31,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82211918"))) PPC_WEAK_FUNC(sub_82211918);
PPC_FUNC_IMPL(__imp__sub_82211918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x822117e0
	sub_822117E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82211928"))) PPC_WEAK_FUNC(sub_82211928);
PPC_FUNC_IMPL(__imp__sub_82211928) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221192C"))) PPC_WEAK_FUNC(sub_8221192C);
PPC_FUNC_IMPL(__imp__sub_8221192C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211930"))) PPC_WEAK_FUNC(sub_82211930);
PPC_FUNC_IMPL(__imp__sub_82211930) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82211710
	sub_82211710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82211938"))) PPC_WEAK_FUNC(sub_82211938);
PPC_FUNC_IMPL(__imp__sub_82211938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82211940;
	sub_82248764(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// ori r26,r26,53760
	ctx.r26.u64 = ctx.r26.u64 | 53760;
	// addi r23,r3,584
	ctx.r23.s64 = ctx.r3.s64 + 584;
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r20,r11,55040
	ctx.r20.u64 = ctx.r11.u64 | 55040;
	// lis r21,-32182
	ctx.r21.s64 = -2109079552;
loc_82211970:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r29,r26,-1280
	ctx.r29.s64 = ctx.r26.s64 + -1280;
	// addi r27,r25,722
	ctx.r27.s64 = ctx.r25.s64 + 722;
	// lwz r30,-20(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + -20);
	// addi r9,r27,-721
	ctx.r9.s64 = ctx.r27.s64 + -721;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,-1280
	ctx.r10.s64 = ctx.r11.s64 + -1280;
	// stw r9,-1040(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1040, ctx.r9.u32);
	// stw r24,-1044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1044, ctx.r24.u32);
	// bl 0x82230aa0
	ctx.lr = 0x822119A0;
	sub_82230AA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822310b0
	ctx.lr = 0x822119AC;
	sub_822310B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822119c4
	if (ctx.cr6.eq) goto loc_822119C4;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231750
	ctx.lr = 0x822119C0;
	sub_82231750(ctx, base);
	// b 0x822119e4
	goto loc_822119E4;
loc_822119C4:
	// lwz r3,-4904(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4904);
	// li r4,94
	ctx.r4.s64 = 94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822119DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_822119E4:
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r28,216(r9)
	PPC_STORE_U32(ctx.r9.u32 + 216, ctx.r28.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r22,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r22.u32);
	// bne cr6,0x82211a24
	if (!ctx.cr6.eq) goto loc_82211A24;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82211a50
	if (ctx.cr6.lt) goto loc_82211A50;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r24,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r24.u32);
	// b 0x82211a50
	goto loc_82211A50;
loc_82211A24:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r3,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r3.u32);
	// stw r24,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r24.u32);
	// blt cr6,0x82211a50
	if (ctx.cr6.lt) goto loc_82211A50;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r22,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r22.u32);
loc_82211A50:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x82211a78
	if (ctx.cr6.eq) goto loc_82211A78;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82211a70
	if (ctx.cr6.eq) goto loc_82211A70;
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82211a78
	if (!ctx.cr6.eq) goto loc_82211A78;
loc_82211A70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82211a7c
	goto loc_82211A7C;
loc_82211A78:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82211A7C:
	// bl 0x8218b408
	ctx.lr = 0x82211A80;
	sub_8218B408(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82211578
	ctx.lr = 0x82211A90;
	sub_82211578(ctx, base);
	// addi r26,r26,256
	ctx.r26.s64 = ctx.r26.s64 + 256;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpw cr6,r26,r20
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82211970
	if (ctx.cr6.lt) goto loc_82211970;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8218b408
	ctx.lr = 0x82211AAC;
	sub_8218B408(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r11,r11,717
	ctx.r11.s64 = ctx.r11.s64 + 717;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lfs f0,11300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,200(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,204(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,208(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82211ba8
	if (!ctx.cr6.eq) goto loc_82211BA8;
	// lwz r3,-4904(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4904);
	// li r4,94
	ctx.r4.s64 = 94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82211B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addi r11,r11,717
	ctx.r11.s64 = ctx.r11.s64 + 717;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r22,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r22.u32);
	// lwz r6,604(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addic. r11,r6,722
	ctx.xer.ca = ctx.r6.u32 > 4294966573;
	ctx.r11.s64 = ctx.r6.s64 + 722;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82211ba8
	if (ctx.cr0.lt) goto loc_82211BA8;
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_82211BA8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82211BB0"))) PPC_WEAK_FUNC(sub_82211BB0);
PPC_FUNC_IMPL(__imp__sub_82211BB0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82211BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,260
	ctx.r30.s64 = ctx.r31.s64 + 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3240
	ctx.lr = 0x82211BE8;
	sub_823C3240(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,14876(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x82211C08;
	sub_823C31B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,584
	ctx.r10.s64 = ctx.r31.s64 + 584;
loc_82211C10:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82211c30
	if (ctx.cr6.eq) goto loc_82211C30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82211c10
	if (ctx.cr6.lt) goto loc_82211C10;
	// b 0x82211c34
	goto loc_82211C34;
loc_82211C30:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82211C34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82211710
	ctx.lr = 0x82211C3C;
	sub_82211710(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
loc_82211C48:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x82211C50;
	sub_8218B408(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82211578
	ctx.lr = 0x82211C60;
	sub_82211578(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x82211c48
	if (ctx.cr6.lt) goto loc_82211C48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82211938
	ctx.lr = 0x82211C78;
	sub_82211938(ctx, base);
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

__attribute__((alias("__imp__sub_82211C90"))) PPC_WEAK_FUNC(sub_82211C90);
PPC_FUNC_IMPL(__imp__sub_82211C90) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82211CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
loc_82211CC0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x82211CC8;
	sub_8218B408(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82211578
	ctx.lr = 0x82211CD8;
	sub_82211578(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x82211cc0
	if (ctx.cr6.lt) goto loc_82211CC0;
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r9,50116
	ctx.r7.u64 = ctx.r9.u64 | 50116;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r6,r8,50372
	ctx.r6.u64 = ctx.r8.u64 | 50372;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r10,r4,50628
	ctx.r10.u64 = ctx.r4.u64 | 50628;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r11,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r11.u32);
	// ori r5,r8,51140
	ctx.r5.u64 = ctx.r8.u64 | 51140;
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// ori r9,r3,50884
	ctx.r9.u64 = ctx.r3.u64 | 50884;
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r11,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r11,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x82211938
	ctx.lr = 0x82211D58;
	sub_82211938(ctx, base);
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

__attribute__((alias("__imp__sub_82211D70"))) PPC_WEAK_FUNC(sub_82211D70);
PPC_FUNC_IMPL(__imp__sub_82211D70) {
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
	// stw r4,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82211de4
	if (ctx.cr6.eq) goto loc_82211DE4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82211dd0
	if (!ctx.cr6.gt) goto loc_82211DD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,564
	ctx.r8.s64 = ctx.r3.s64 + 564;
loc_82211DA8:
	// lwz r9,560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r7,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,560(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82211da8
	if (ctx.cr6.lt) goto loc_82211DA8;
loc_82211DD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822111b8
	ctx.lr = 0x82211DD8;
	sub_822111B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82211938
	ctx.lr = 0x82211DE4;
	sub_82211938(ctx, base);
loc_82211DE4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82211DF8"))) PPC_WEAK_FUNC(sub_82211DF8);
PPC_FUNC_IMPL(__imp__sub_82211DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82211E00;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82211E14;
	sub_823C3B68(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x82211E18;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823c58b0
	ctx.lr = 0x82211E2C;
	sub_823C58B0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,-3984
	ctx.r8.s64 = ctx.r10.s64 + -3984;
	// addi r7,r9,-4120
	ctx.r7.s64 = ctx.r9.s64 + -4120;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c35b8
	ctx.lr = 0x82211E5C;
	sub_823C35B8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r29.u32);
	// stw r6,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r6.u32);
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r5,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r5.u32);
	// bl 0x822aa648
	ctx.lr = 0x82211E80;
	sub_822AA648(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// addi r11,r31,564
	ctx.r11.s64 = ctx.r31.s64 + 564;
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// bl 0x82211d70
	ctx.lr = 0x82211EB8;
	sub_82211D70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82211c90
	ctx.lr = 0x82211EC0;
	sub_82211C90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82211500
	ctx.lr = 0x82211EC8;
	sub_82211500(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82211938
	ctx.lr = 0x82211ED0;
	sub_82211938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82211EDC"))) PPC_WEAK_FUNC(sub_82211EDC);
PPC_FUNC_IMPL(__imp__sub_82211EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211EE0"))) PPC_WEAK_FUNC(sub_82211EE0);
PPC_FUNC_IMPL(__imp__sub_82211EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82211ef4
	if (!ctx.cr6.eq) goto loc_82211EF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82211EF4:
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82211F04"))) PPC_WEAK_FUNC(sub_82211F04);
PPC_FUNC_IMPL(__imp__sub_82211F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211F08"))) PPC_WEAK_FUNC(sub_82211F08);
PPC_FUNC_IMPL(__imp__sub_82211F08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82211f10
	sub_82211F10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82211F10"))) PPC_WEAK_FUNC(sub_82211F10);
PPC_FUNC_IMPL(__imp__sub_82211F10) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3760
	ctx.r9.s64 = ctx.r11.s64 + -3760;
	// addi r8,r10,-3896
	ctx.r8.s64 = ctx.r10.s64 + -3896;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823c52a0
	ctx.lr = 0x82211F4C;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82211F54;
	sub_823C3BC0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82211f70
	if (ctx.cr6.eq) goto loc_82211F70;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82211F6C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82211F70:
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

__attribute__((alias("__imp__sub_82211F88"))) PPC_WEAK_FUNC(sub_82211F88);
PPC_FUNC_IMPL(__imp__sub_82211F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82211F90;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82212048
	if (ctx.cr6.eq) goto loc_82212048;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82212048
	if (ctx.cr6.eq) goto loc_82212048;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82212048
	if (ctx.cr6.eq) goto loc_82212048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x82211FD0;
	sub_821ADDC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x82211FDC;
	sub_821ADD20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82211FEC;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82211FF8;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82212030
	if (!ctx.cr6.gt) goto loc_82212030;
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r10,57012
	ctx.r9.u64 = ctx.r10.u64 | 57012;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,395
	ctx.r4.s64 = 395;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f31,r8,r9
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,256(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// bl 0x8210a9b0
	ctx.lr = 0x82212030;
	sub_8210A9B0(ctx, base);
loc_82212030:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x8221203C;
	sub_821AD600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82212048;
	sub_821AD498(ctx, base);
loc_82212048:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82212054"))) PPC_WEAK_FUNC(sub_82212054);
PPC_FUNC_IMPL(__imp__sub_82212054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212058"))) PPC_WEAK_FUNC(sub_82212058);
PPC_FUNC_IMPL(__imp__sub_82212058) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r10,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221206C"))) PPC_WEAK_FUNC(sub_8221206C);
PPC_FUNC_IMPL(__imp__sub_8221206C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212070"))) PPC_WEAK_FUNC(sub_82212070);
PPC_FUNC_IMPL(__imp__sub_82212070) {
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
	// bl 0x8222e080
	ctx.lr = 0x8221208C;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221211c
	if (ctx.cr6.eq) goto loc_8221211C;
	// bl 0x8215bd08
	ctx.lr = 0x82212098;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x8221209C;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221211c
	if (ctx.cr6.eq) goto loc_8221211C;
	// bl 0x821f0050
	ctx.lr = 0x822120A8;
	sub_821F0050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221211c
	if (ctx.cr6.eq) goto loc_8221211C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r30,15472(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82170820
	ctx.lr = 0x822120C0;
	sub_82170820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221211c
	if (!ctx.cr6.eq) goto loc_8221211C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821708b0
	ctx.lr = 0x822120D0;
	sub_821708B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221211c
	if (ctx.cr6.eq) goto loc_8221211C;
	// li r5,602
	ctx.r5.s64 = 602;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,731
	ctx.r4.s64 = 731;
	// bl 0x82106f58
	ctx.lr = 0x822120E8;
	sub_82106F58(ctx, base);
	// li r5,602
	ctx.r5.s64 = 602;
	// li r4,732
	ctx.r4.s64 = 732;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x82106f58
	ctx.lr = 0x822120F8;
	sub_82106F58(ctx, base);
	// li r5,603
	ctx.r5.s64 = 603;
	// li r4,734
	ctx.r4.s64 = 734;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x82106f58
	ctx.lr = 0x82212108;
	sub_82106F58(ctx, base);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// b 0x82212124
	goto loc_82212124;
loc_8221211C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
loc_82212124:
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

__attribute__((alias("__imp__sub_8221213C"))) PPC_WEAK_FUNC(sub_8221213C);
PPC_FUNC_IMPL(__imp__sub_8221213C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212140"))) PPC_WEAK_FUNC(sub_82212140);
PPC_FUNC_IMPL(__imp__sub_82212140) {
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
	// bl 0x823c3b68
	ctx.lr = 0x8221215C;
	sub_823C3B68(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x82212160;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823c58b0
	ctx.lr = 0x82212174;
	sub_823C58B0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,-3760
	ctx.r7.s64 = ctx.r10.s64 + -3760;
	// addi r6,r9,-3896
	ctx.r6.s64 = ctx.r9.s64 + -3896;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r5,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r5.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// lwz r11,-792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -792);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r4,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r4.u32);
	// bl 0x82212070
	ctx.lr = 0x822121C0;
	sub_82212070(ctx, base);
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

__attribute__((alias("__imp__sub_822121D8"))) PPC_WEAK_FUNC(sub_822121D8);
PPC_FUNC_IMPL(__imp__sub_822121D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,40
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 40, ctx.xer);
	// bgt cr6,0x822121e8
	if (ctx.cr6.gt) goto loc_822121E8;
	// li r3,70
	ctx.r3.s64 = 70;
	// b 0x8218b408
	sub_8218B408(ctx, base);
	return;
loc_822121E8:
	// cmplwi cr6,r3,60
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 60, ctx.xer);
	// bgt cr6,0x822121f8
	if (ctx.cr6.gt) goto loc_822121F8;
	// li r3,71
	ctx.r3.s64 = 71;
	// b 0x8218b408
	sub_8218B408(ctx, base);
	return;
loc_822121F8:
	// cmplwi cr6,r3,99
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 99, ctx.xer);
	// bgt cr6,0x82212208
	if (ctx.cr6.gt) goto loc_82212208;
	// li r3,72
	ctx.r3.s64 = 72;
	// b 0x8218b408
	sub_8218B408(ctx, base);
	return;
loc_82212208:
	// li r3,73
	ctx.r3.s64 = 73;
	// b 0x8218b408
	sub_8218B408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212210"))) PPC_WEAK_FUNC(sub_82212210);
PPC_FUNC_IMPL(__imp__sub_82212210) {
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
	// bl 0x82163ee8
	ctx.lr = 0x8221222C;
	sub_82163EE8(ctx, base);
	// addi r30,r31,856
	ctx.r30.s64 = ctx.r31.s64 + 856;
	// addi r4,r3,2296
	ctx.r4.s64 = ctx.r3.s64 + 2296;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847c0
	ctx.lr = 0x82212240;
	sub_821847C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221225c
	if (ctx.cr6.eq) goto loc_8221225C;
	// bl 0x82163ee8
	ctx.lr = 0x8221224C;
	sub_82163EE8(ctx, base);
	// addi r3,r3,2296
	ctx.r3.s64 = ctx.r3.s64 + 2296;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x8221225C;
	sub_821847A8(ctx, base);
loc_8221225C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x823c3468
	ctx.lr = 0x82212278;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3ca8
	ctx.lr = 0x82212280;
	sub_823C3CA8(ctx, base);
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

__attribute__((alias("__imp__sub_82212298"))) PPC_WEAK_FUNC(sub_82212298);
PPC_FUNC_IMPL(__imp__sub_82212298) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_822122AC"))) PPC_WEAK_FUNC(sub_822122AC);
PPC_FUNC_IMPL(__imp__sub_822122AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822122B0"))) PPC_WEAK_FUNC(sub_822122B0);
PPC_FUNC_IMPL(__imp__sub_822122B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x822122b8
	sub_822122B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822122B8"))) PPC_WEAK_FUNC(sub_822122B8);
PPC_FUNC_IMPL(__imp__sub_822122B8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3528
	ctx.r9.s64 = ctx.r11.s64 + -3528;
	// addi r8,r10,-3664
	ctx.r8.s64 = ctx.r10.s64 + -3664;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,1012
	ctx.r3.s64 = ctx.r3.s64 + 1012;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821f4b38
	ctx.lr = 0x822122F4;
	sub_821F4B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82210b00
	ctx.lr = 0x822122FC;
	sub_82210B00(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82212318
	if (ctx.cr6.eq) goto loc_82212318;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82212314;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82212318:
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

__attribute__((alias("__imp__sub_82212330"))) PPC_WEAK_FUNC(sub_82212330);
PPC_FUNC_IMPL(__imp__sub_82212330) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,316
	ctx.r3.s64 = ctx.r3.s64 + 316;
	// bl 0x823c3280
	ctx.lr = 0x82212354;
	sub_823C3280(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x82212388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r6,r3,1313
	ctx.r6.s64 = ctx.r3.s64 + 1313;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,200(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,204(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,208(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
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

__attribute__((alias("__imp__sub_822123D0"))) PPC_WEAK_FUNC(sub_822123D0);
PPC_FUNC_IMPL(__imp__sub_822123D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822123D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822123EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x822124d0
	if (!ctx.cr6.eq) goto loc_822124D0;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,230
	ctx.r4.s64 = 230;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,2764(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2764);
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,2764(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2764);
	// stw r30,452(r6)
	PPC_STORE_U32(ctx.r6.u32 + 452, ctx.r30.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,2764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2764);
	// stw r30,708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 708, ctx.r30.u32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,2764(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2764);
	// stw r30,964(r7)
	PPC_STORE_U32(ctx.r7.u32 + 964, ctx.r30.u32);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r11,2764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2764);
	// stw r30,1220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1220, ctx.r30.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,2764(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2764);
	// stw r30,1476(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1476, ctx.r30.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,2764(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2764);
	// stw r30,1732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1732, ctx.r30.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,2764(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2764);
	// stw r30,1988(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1988, ctx.r30.u32);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,2764(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2764);
	// stw r28,708(r6)
	PPC_STORE_U32(ctx.r6.u32 + 708, ctx.r28.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,2764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2764);
	// stw r28,1732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1732, ctx.r28.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x82106ec0
	ctx.lr = 0x822124B8;
	sub_82106EC0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x822124BC;
	sub_821D38E8(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,230
	ctx.r4.s64 = 230;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x82106ec0
	ctx.lr = 0x822124CC;
	sub_82106EC0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x822124D0;
	sub_821D38E8(ctx, base);
loc_822124D0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x822123ec
	if (ctx.cr6.lt) goto loc_822123EC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822124E4"))) PPC_WEAK_FUNC(sub_822124E4);
PPC_FUNC_IMPL(__imp__sub_822124E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822124E8"))) PPC_WEAK_FUNC(sub_822124E8);
PPC_FUNC_IMPL(__imp__sub_822124E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822124F0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea3f0
	ctx.lr = 0x82212504;
	sub_821EA3F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822125e0
	if (ctx.cr6.eq) goto loc_822125E0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-8552(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8552);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b2bc0
	ctx.lr = 0x82212520;
	sub_820B2BC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b2ba8
	ctx.lr = 0x8221252C;
	sub_820B2BA8(ctx, base);
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-18236(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094db0
	ctx.lr = 0x82212544;
	sub_82094DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094dd0
	ctx.lr = 0x82212550;
	sub_82094DD0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8221255C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822125b8
	if (ctx.cr6.eq) goto loc_822125B8;
	// addi r31,r30,596
	ctx.r31.s64 = ctx.r30.s64 + 596;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163ef8
	ctx.lr = 0x82212578;
	sub_82163EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x82212584;
	sub_82156F00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x82212590;
	sub_820EF4F8(ctx, base);
	// addi r31,r30,900
	ctx.r31.s64 = ctx.r30.s64 + 900;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163ef8
	ctx.lr = 0x822125A0;
	sub_82163EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x822125AC;
	sub_82156F00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4f8
	ctx.lr = 0x822125B8;
	sub_820EF4F8(ctx, base);
loc_822125B8:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221255c
	if (ctx.cr6.lt) goto loc_8221255C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,33816
	ctx.r9.u64 = ctx.r11.u64 | 33816;
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r8,1008(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1008, ctx.r8.u32);
	// stwx r10,r27,r9
	PPC_STORE_U32(ctx.r27.u32 + ctx.r9.u32, ctx.r10.u32);
loc_822125E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822125E8"))) PPC_WEAK_FUNC(sub_822125E8);
PPC_FUNC_IMPL(__imp__sub_822125E8) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82212830
	if (!ctx.cr6.eq) goto loc_82212830;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82212830
	if (!ctx.cr6.eq) goto loc_82212830;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822126ec
	if (ctx.cr6.eq) goto loc_822126EC;
	// lwz r9,228(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,227
	ctx.r4.s64 = 227;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,2728(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2728);
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
	// lwz r6,228(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r9,2728(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2728);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,2728(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2728);
	// stw r11,708(r6)
	PPC_STORE_U32(ctx.r6.u32 + 708, ctx.r11.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,2728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2728);
	// stw r11,964(r8)
	PPC_STORE_U32(ctx.r8.u32 + 964, ctx.r11.u32);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,2728(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2728);
	// stw r11,1220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1220, ctx.r11.u32);
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,2728(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2728);
	// stw r11,1476(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1476, ctx.r11.u32);
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r9,2728(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2728);
	// stw r11,1732(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1732, ctx.r11.u32);
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,2728(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2728);
	// stw r11,1988(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1988, ctx.r11.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,2728(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2728);
	// stw r10,964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 964, ctx.r10.u32);
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,2728(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2728);
	// stw r10,1732(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1732, ctx.r10.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82106ec0
	ctx.lr = 0x822126E0;
	sub_82106EC0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x822126E4;
	sub_821D38E8(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x822127b8
	goto loc_822127B8;
loc_822126EC:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822127c8
	if (ctx.cr6.eq) goto loc_822127C8;
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,227
	ctx.r4.s64 = 227;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,2728(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2728);
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r9,2728(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2728);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,2728(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2728);
	// stw r11,708(r6)
	PPC_STORE_U32(ctx.r6.u32 + 708, ctx.r11.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,2728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2728);
	// stw r11,964(r8)
	PPC_STORE_U32(ctx.r8.u32 + 964, ctx.r11.u32);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,2728(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2728);
	// stw r11,1220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1220, ctx.r11.u32);
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,2728(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2728);
	// stw r11,1476(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1476, ctx.r11.u32);
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r9,2728(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2728);
	// stw r11,1732(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1732, ctx.r11.u32);
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,2728(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2728);
	// stw r11,1988(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1988, ctx.r11.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,2728(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2728);
	// stw r10,1988(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1988, ctx.r10.u32);
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,2728(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2728);
	// stw r10,708(r6)
	PPC_STORE_U32(ctx.r6.u32 + 708, ctx.r10.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82106ec0
	ctx.lr = 0x822127B0;
	sub_82106EC0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x822127B4;
	sub_821D38E8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
loc_822127B8:
	// li r4,227
	ctx.r4.s64 = 227;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82106ec0
	ctx.lr = 0x822127C4;
	sub_82106EC0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x822127C8;
	sub_821D38E8(ctx, base);
loc_822127C8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822127e4
	if (!ctx.cr6.eq) goto loc_822127E4;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822128e0
	if (ctx.cr6.eq) goto loc_822128E0;
loc_822127E4:
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r30,r31,-28
	ctx.r30.s64 = ctx.r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822127FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822128e0
	if (!ctx.cr6.eq) goto loc_822128E0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stb r11,899(r31)
	PPC_STORE_U8(ctx.r31.u32 + 899, ctx.r11.u8);
	// lbz r9,927(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 927);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82212824
	if (ctx.cr6.eq) goto loc_82212824;
	// li r11,20066
	ctx.r11.s64 = 20066;
	// stw r11,840(r30)
	PPC_STORE_U32(ctx.r30.u32 + 840, ctx.r11.u32);
	// b 0x822128e0
	goto loc_822128E0;
loc_82212824:
	// li r11,20067
	ctx.r11.s64 = 20067;
	// stw r11,840(r30)
	PPC_STORE_U32(ctx.r30.u32 + 840, ctx.r11.u32);
	// b 0x822128e0
	goto loc_822128E0;
loc_82212830:
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r30,r31,-28
	ctx.r30.s64 = ctx.r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8221288c
	if (!ctx.cr6.eq) goto loc_8221288C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r10,899(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 899);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82212874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,927(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 927);
	// li r11,20066
	ctx.r11.s64 = 20066;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82212888
	if (!ctx.cr6.eq) goto loc_82212888;
	// li r11,20067
	ctx.r11.s64 = 20067;
loc_82212888:
	// stw r11,840(r30)
	PPC_STORE_U32(ctx.r30.u32 + 840, ctx.r11.u32);
loc_8221288C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822123d0
	ctx.lr = 0x82212894;
	sub_822123D0(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,20068
	ctx.r11.s64 = 20068;
	// li r10,20069
	ctx.r10.s64 = 20069;
	// li r9,20070
	ctx.r9.s64 = 20070;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822128C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r6,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// bl 0x821eb290
	ctx.lr = 0x822128D4;
	sub_821EB290(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x823c3240
	ctx.lr = 0x822128E0;
	sub_823C3240(ctx, base);
loc_822128E0:
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

__attribute__((alias("__imp__sub_822128F8"))) PPC_WEAK_FUNC(sub_822128F8);
PPC_FUNC_IMPL(__imp__sub_822128F8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822331c8
	ctx.lr = 0x82212918;
	sub_822331C8(ctx, base);
	// lbz r11,151(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stb r11,899(r31)
	PPC_STORE_U8(ctx.r31.u32 + 899, ctx.r11.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r11,20066
	ctx.r11.s64 = 20066;
	// bne cr6,0x82212940
	if (!ctx.cr6.eq) goto loc_82212940;
	// li r11,20067
	ctx.r11.s64 = 20067;
loc_82212940:
	// stw r11,840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 840, ctx.r11.u32);
	// bl 0x822123d0
	ctx.lr = 0x82212948;
	sub_822123D0(ctx, base);
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

__attribute__((alias("__imp__sub_8221295C"))) PPC_WEAK_FUNC(sub_8221295C);
PPC_FUNC_IMPL(__imp__sub_8221295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212960"))) PPC_WEAK_FUNC(sub_82212960);
PPC_FUNC_IMPL(__imp__sub_82212960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82212968;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82212afc
	if (ctx.cr6.eq) goto loc_82212AFC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r27,-7488(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82212afc
	if (ctx.cr6.eq) goto loc_82212AFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821addc0
	ctx.lr = 0x82212994;
	sub_821ADDC0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821add20
	ctx.lr = 0x822129A0;
	sub_821ADD20(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad600
	ctx.lr = 0x822129B0;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad498
	ctx.lr = 0x822129BC;
	sub_821AD498(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_822129C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822129DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// subf r8,r3,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r3.s64;
	// rlwinm r11,r29,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// subfe r30,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cntlzw r5,r30
	ctx.r5.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r10,2752(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2752);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,1476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1476, ctx.r4.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2752(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2752);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,2244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2244, ctx.r30.u32);
	// bne cr6,0x82212a90
	if (!ctx.cr6.eq) goto loc_82212A90;
	// lwz r4,840(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82212a50
	if (!ctx.cr6.lt) goto loc_82212A50;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82212a64
	if (ctx.cr6.eq) goto loc_82212A64;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82212a64
	if (!ctx.cr6.eq) goto loc_82212A64;
	// li r4,20099
	ctx.r4.s64 = 20099;
loc_82212A50:
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82212A64:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,2752(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2752);
	// stw r3,3800(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3800, ctx.r3.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,2752(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2752);
	// stw r26,3820(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3820, ctx.r26.u32);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,2752(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2752);
	// stw r30,4036(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4036, ctx.r30.u32);
loc_82212A90:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x822129c8
	if (ctx.cr6.lt) goto loc_822129C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82212ae4
	if (!ctx.cr6.gt) goto loc_82212AE4;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r10,58596
	ctx.r9.u64 = ctx.r10.u64 | 58596;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,406
	ctx.r4.s64 = 406;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f0,r8,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x8210a9b0
	ctx.lr = 0x82212AE4;
	sub_8210A9B0(ctx, base);
loc_82212AE4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad600
	ctx.lr = 0x82212AF0;
	sub_821AD600(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad498
	ctx.lr = 0x82212AFC;
	sub_821AD498(ctx, base);
loc_82212AFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82212B04"))) PPC_WEAK_FUNC(sub_82212B04);
PPC_FUNC_IMPL(__imp__sub_82212B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212B08"))) PPC_WEAK_FUNC(sub_82212B08);
PPC_FUNC_IMPL(__imp__sub_82212B08) {
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
	// bl 0x82155578
	ctx.lr = 0x82212B24;
	sub_82155578(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82212B30;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x82212B34;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82212b4c
	if (!ctx.cr6.eq) goto loc_82212B4C;
	// bl 0x82155510
	ctx.lr = 0x82212B44;
	sub_82155510(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// b 0x82212b68
	goto loc_82212B68;
loc_82212B4C:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82212B68:
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

__attribute__((alias("__imp__sub_82212B80"))) PPC_WEAK_FUNC(sub_82212B80);
PPC_FUNC_IMPL(__imp__sub_82212B80) {
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
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82212BA4;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x82212BA8;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82212bc4
	if (!ctx.cr6.eq) goto loc_82212BC4;
	// bl 0x82155510
	ctx.lr = 0x82212BB8;
	sub_82155510(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// b 0x82212be0
	goto loc_82212BE0;
loc_82212BC4:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82212BE0:
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

__attribute__((alias("__imp__sub_82212BF8"))) PPC_WEAK_FUNC(sub_82212BF8);
PPC_FUNC_IMPL(__imp__sub_82212BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82212C00;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x82210fc0
	ctx.lr = 0x82212C10;
	sub_82210FC0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3528
	ctx.r9.s64 = ctx.r11.s64 + -3528;
	// addi r8,r10,-3664
	ctx.r8.s64 = ctx.r10.s64 + -3664;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r31,r30,616
	ctx.r31.s64 = ctx.r30.s64 + 616;
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82212C3C:
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82212C48;
	sub_822AA648(ctx, base);
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bge 0x82212c3c
	if (!ctx.cr0.lt) goto loc_82212C3C;
	// stw r27,1008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1008, ctx.r27.u32);
	// addi r3,r30,1012
	ctx.r3.s64 = ctx.r30.s64 + 1012;
	// bl 0x821f4a48
	ctx.lr = 0x82212C70;
	sub_821F4A48(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,33816
	ctx.r9.u64 = ctx.r11.u64 | 33816;
	// ori r8,r10,33820
	ctx.r8.u64 = ctx.r10.u64 | 33820;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r27,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r27.u32);
	// stwx r27,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r27.u32);
	// bl 0x82210df0
	ctx.lr = 0x82212C98;
	sub_82210DF0(ctx, base);
	// stw r25,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r25.u32);
	// bl 0x82163ee8
	ctx.lr = 0x82212CA0;
	sub_82163EE8(ctx, base);
	// addi r31,r3,2296
	ctx.r31.s64 = ctx.r3.s64 + 2296;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,856
	ctx.r3.s64 = ctx.r30.s64 + 856;
	// bl 0x821847a8
	ctx.lr = 0x82212CB4;
	sub_821847A8(ctx, base);
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,932
	ctx.r3.s64 = ctx.r30.s64 + 932;
	// bl 0x821847a8
	ctx.lr = 0x82212CC4;
	sub_821847A8(ctx, base);
	// lbz r7,927(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 927);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// bl 0x82210e30
	ctx.lr = 0x82212CDC;
	sub_82210E30(ctx, base);
	// lbz r6,927(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 927);
	// li r11,20066
	ctx.r11.s64 = 20066;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82212cf0
	if (!ctx.cr6.eq) goto loc_82212CF0;
	// li r11,20067
	ctx.r11.s64 = 20067;
loc_82212CF0:
	// stw r11,840(r30)
	PPC_STORE_U32(ctx.r30.u32 + 840, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822123d0
	ctx.lr = 0x82212CFC;
	sub_822123D0(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x821ebaa8
	ctx.lr = 0x82212D04;
	sub_821EBAA8(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,20068
	ctx.r11.s64 = 20068;
	// li r10,20069
	ctx.r10.s64 = 20069;
	// li r9,20070
	ctx.r9.s64 = 20070;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82212D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r6,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// bl 0x821eb290
	ctx.lr = 0x82212D44;
	sub_821EB290(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82212330
	ctx.lr = 0x82212D4C;
	sub_82212330(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82212D58"))) PPC_WEAK_FUNC(sub_82212D58);
PPC_FUNC_IMPL(__imp__sub_82212D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82212D60;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82210ca0
	ctx.lr = 0x82212D6C;
	sub_82210CA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// bne cr6,0x82212da4
	if (!ctx.cr6.eq) goto loc_82212DA4;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// b 0x82212db4
	goto loc_82212DB4;
loc_82212DA4:
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// rlwinm r8,r9,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_82212DB4:
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82212fdc
	if (ctx.cr6.gt) goto loc_82212FDC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82212e5c
	// bdzf 4*cr6+eq,0x82212f08
	// bdzf 4*cr6+eq,0x82212f2c
	// bdzf 4*cr6+eq,0x82212f3c
	// bdzf 4*cr6+eq,0x82212f78
	// bne cr6,0x82212f9c
	if (!ctx.cr6.eq) goto loc_82212F9C;
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// addi r29,r31,1012
	ctx.r29.s64 = ctx.r31.s64 + 1012;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82212fdc
	if (ctx.cr6.eq) goto loc_82212FDC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82212e38
	if (!ctx.cr6.eq) goto loc_82212E38;
	// bl 0x82163ee8
	ctx.lr = 0x82212E28;
	sub_82163EE8(ctx, base);
	// addi r3,r3,2296
	ctx.r3.s64 = ctx.r3.s64 + 2296;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r31,932
	ctx.r4.s64 = ctx.r31.s64 + 932;
	// bl 0x821847a8
	ctx.lr = 0x82212E38;
	sub_821847A8(ctx, base);
loc_82212E38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82212E5C:
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// addi r29,r31,1012
	ctx.r29.s64 = ctx.r31.s64 + 1012;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82212fdc
	if (ctx.cr6.eq) goto loc_82212FDC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82212e38
	if (ctx.cr6.eq) goto loc_82212E38;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// bl 0x82163ee8
	ctx.lr = 0x82212EA4;
	sub_82163EE8(ctx, base);
	// addi r29,r3,2296
	ctx.r29.s64 = ctx.r3.s64 + 2296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82210e70
	ctx.lr = 0x82212EB4;
	sub_82210E70(ctx, base);
	// lbz r10,927(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 927);
	// li r11,20066
	ctx.r11.s64 = 20066;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82212ec8
	if (!ctx.cr6.eq) goto loc_82212EC8;
	// li r11,20067
	ctx.r11.s64 = 20067;
loc_82212EC8:
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x821847a8
	ctx.lr = 0x82212EDC;
	sub_821847A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r7,r9,33820
	ctx.r7.u64 = ctx.r9.u64 | 33820;
	// stwx r8,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82212F08:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x82212F1C;
	sub_821EA8B8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82212F2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822124e8
	ctx.lr = 0x82212F34;
	sub_822124E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82212F3C:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-31720
	ctx.r11.s64 = ctx.r11.s64 + -31720;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x82212f68
	if (!ctx.cr6.gt) goto loc_82212F68;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82212F68:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82212F78:
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r3,-18236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82212f8c
	if (ctx.cr6.eq) goto loc_82212F8C;
	// bl 0x82094d78
	ctx.lr = 0x82212F8C;
	sub_82094D78(ctx, base);
loc_82212F8C:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82212F9C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-8960(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8960);
	// addi r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 + 204;
loc_82212FAC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82212fdc
	if (!ctx.cr6.eq) goto loc_82212FDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82212fac
	if (ctx.cr6.lt) goto loc_82212FAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82212FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82212FDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82212FE4"))) PPC_WEAK_FUNC(sub_82212FE4);
PPC_FUNC_IMPL(__imp__sub_82212FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212FE8"))) PPC_WEAK_FUNC(sub_82212FE8);
PPC_FUNC_IMPL(__imp__sub_82212FE8) {
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
	// addi r30,r3,-28
	ctx.r30.s64 = ctx.r3.s64 + -28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82213018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82213054
	if (ctx.cr6.lt) goto loc_82213054;
	// beq cr6,0x82213040
	if (ctx.cr6.eq) goto loc_82213040;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x822130ac
	if (!ctx.cr6.lt) goto loc_822130AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x822130a8
	goto loc_822130A8;
loc_82213040:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// stw r11,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r11.u32);
	// bl 0x82212b80
	ctx.lr = 0x82213050;
	sub_82212B80(ctx, base);
	// b 0x82213098
	goto loc_82213098;
loc_82213054:
	// bl 0x82163ee8
	ctx.lr = 0x82213058;
	sub_82163EE8(ctx, base);
	// addi r30,r31,828
	ctx.r30.s64 = ctx.r31.s64 + 828;
	// addi r4,r3,2296
	ctx.r4.s64 = ctx.r3.s64 + 2296;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847c0
	ctx.lr = 0x8221306C;
	sub_821847C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82213088
	if (ctx.cr6.eq) goto loc_82213088;
	// bl 0x82163ee8
	ctx.lr = 0x82213078;
	sub_82163EE8(ctx, base);
	// addi r3,r3,2296
	ctx.r3.s64 = ctx.r3.s64 + 2296;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x82213088;
	sub_821847A8(ctx, base);
loc_82213088:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// stw r11,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r11.u32);
	// bl 0x82212b08
	ctx.lr = 0x82213098;
	sub_82212B08(ctx, base);
loc_82213098:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822130A8:
	// bctrl 
	ctx.lr = 0x822130AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822130AC:
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

__attribute__((alias("__imp__sub_822130C4"))) PPC_WEAK_FUNC(sub_822130C4);
PPC_FUNC_IMPL(__imp__sub_822130C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822130C8"))) PPC_WEAK_FUNC(sub_822130C8);
PPC_FUNC_IMPL(__imp__sub_822130C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822130D0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-3408
	ctx.r8.s64 = ctx.r11.s64 + -3408;
	// addi r7,r10,-3416
	ctx.r7.s64 = ctx.r10.s64 + -3416;
	// addi r6,r9,-3424
	ctx.r6.s64 = ctx.r9.s64 + -3424;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// bl 0x82088268
	ctx.lr = 0x8221310C;
	sub_82088268(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82088268
	ctx.lr = 0x82213114;
	sub_82088268(ctx, base);
	// lwsync 
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-756(r5)
	PPC_STORE_U32(ctx.r5.u32 + -756, ctx.r11.u32);
	// bl 0x82185a50
	ctx.lr = 0x8221312C;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x82213134;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218dd78
	ctx.lr = 0x8221313C;
	sub_8218DD78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82213144"))) PPC_WEAK_FUNC(sub_82213144);
PPC_FUNC_IMPL(__imp__sub_82213144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213148"))) PPC_WEAK_FUNC(sub_82213148);
PPC_FUNC_IMPL(__imp__sub_82213148) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82213210
	sub_82213210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213150"))) PPC_WEAK_FUNC(sub_82213150);
PPC_FUNC_IMPL(__imp__sub_82213150) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82213210
	sub_82213210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213158"))) PPC_WEAK_FUNC(sub_82213158);
PPC_FUNC_IMPL(__imp__sub_82213158) {
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
	// bl 0x8218e200
	ctx.lr = 0x82213170;
	sub_8218E200(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x82185740
	ctx.lr = 0x82213180;
	sub_82185740(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,91
	ctx.r4.s64 = 91;
	// bl 0x821859a0
	ctx.lr = 0x82213194;
	sub_821859A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-3408
	ctx.r8.s64 = ctx.r11.s64 + -3408;
	// addi r5,r9,-3424
	ctx.r5.s64 = ctx.r9.s64 + -3424;
	// addi r7,r10,-3416
	ctx.r7.s64 = ctx.r10.s64 + -3416;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820882b8
	ctx.lr = 0x822131CC;
	sub_820882B8(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820882b8
	ctx.lr = 0x822131E4;
	sub_820882B8(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwsync 
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-756(r4)
	PPC_STORE_U32(ctx.r4.u32 + -756, ctx.r31.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8221320C"))) PPC_WEAK_FUNC(sub_8221320C);
PPC_FUNC_IMPL(__imp__sub_8221320C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213210"))) PPC_WEAK_FUNC(sub_82213210);
PPC_FUNC_IMPL(__imp__sub_82213210) {
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
	// bl 0x822130c8
	ctx.lr = 0x82213230;
	sub_822130C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221324c
	if (ctx.cr6.eq) goto loc_8221324C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82213248;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221324C:
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

__attribute__((alias("__imp__sub_82213264"))) PPC_WEAK_FUNC(sub_82213264);
PPC_FUNC_IMPL(__imp__sub_82213264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213268"))) PPC_WEAK_FUNC(sub_82213268);
PPC_FUNC_IMPL(__imp__sub_82213268) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x82257118
	ctx.lr = 0x82213284;
	sub_82257118(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82088758
	ctx.lr = 0x8221328C;
	sub_82088758(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_822132A0"))) PPC_WEAK_FUNC(sub_822132A0);
PPC_FUNC_IMPL(__imp__sub_822132A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x820882b0
	sub_820882B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822132AC"))) PPC_WEAK_FUNC(sub_822132AC);
PPC_FUNC_IMPL(__imp__sub_822132AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822132B0"))) PPC_WEAK_FUNC(sub_822132B0);
PPC_FUNC_IMPL(__imp__sub_822132B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822132B8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x822132C4;
	sub_82183078(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x822132CC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x822132D0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x822132e8
	if (ctx.cr6.eq) goto loc_822132E8;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82183448
	ctx.lr = 0x822132E4;
	sub_82183448(ctx, base);
	// b 0x822132f0
	goto loc_822132F0;
loc_822132E8:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821845a0
	ctx.lr = 0x822132F0;
	sub_821845A0(ctx, base);
loc_822132F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213300
	if (ctx.cr6.eq) goto loc_82213300;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82186518
	ctx.lr = 0x82213300;
	sub_82186518(ctx, base);
loc_82213300:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,17229
	ctx.r10.s64 = 1129119744;
	// li r27,-1
	ctx.r27.s64 = -1;
	// ori r29,r10,18758
	ctx.r29.u64 = ctx.r10.u64 | 18758;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
loc_82213314:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,48(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// bl 0x820882b0
	ctx.lr = 0x82213320;
	sub_820882B0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x82213324;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82213374
	if (!ctx.cr6.eq) goto loc_82213374;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r30,9
	ctx.r30.s64 = 9;
loc_82213338:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213368
	if (ctx.cr6.eq) goto loc_82213368;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,1964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// bl 0x821882d0
	ctx.lr = 0x82213350;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213368
	if (ctx.cr6.eq) goto loc_82213368;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213368
	if (ctx.cr6.eq) goto loc_82213368;
	// bl 0x82214730
	ctx.lr = 0x82213368;
	sub_82214730(ctx, base);
loc_82213368:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82213338
	if (!ctx.cr0.eq) goto loc_82213338;
loc_82213374:
	// lwz r3,52(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// bl 0x82088758
	ctx.lr = 0x8221337C;
	sub_82088758(ctx, base);
	// b 0x82213314
	goto loc_82213314;
}

__attribute__((alias("__imp__sub_82213380"))) PPC_WEAK_FUNC(sub_82213380);
PPC_FUNC_IMPL(__imp__sub_82213380) {
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
	// bl 0x82088650
	ctx.lr = 0x82213398;
	sub_82088650(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// bl 0x82182f58
	ctx.lr = 0x822133A0;
	sub_82182F58(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822133b0
	if (ctx.cr6.eq) goto loc_822133B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822132b0
	ctx.lr = 0x822133B0;
	sub_822132B0(ctx, base);
loc_822133B0:
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

__attribute__((alias("__imp__sub_822133C8"))) PPC_WEAK_FUNC(sub_822133C8);
PPC_FUNC_IMPL(__imp__sub_822133C8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-3364
	ctx.r8.s64 = ctx.r11.s64 + -3364;
	// addi r7,r10,-3372
	ctx.r7.s64 = ctx.r10.s64 + -3372;
	// addi r6,r9,-3404
	ctx.r6.s64 = ctx.r9.s64 + -3404;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// bl 0x821883b8
	ctx.lr = 0x82213410;
	sub_821883B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x82213418;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82213420;
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

__attribute__((alias("__imp__sub_82213438"))) PPC_WEAK_FUNC(sub_82213438);
PPC_FUNC_IMPL(__imp__sub_82213438) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82213558
	sub_82213558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213440"))) PPC_WEAK_FUNC(sub_82213440);
PPC_FUNC_IMPL(__imp__sub_82213440) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82213558
	sub_82213558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213448"))) PPC_WEAK_FUNC(sub_82213448);
PPC_FUNC_IMPL(__imp__sub_82213448) {
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
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213498
	if (ctx.cr6.eq) goto loc_82213498;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213498
	if (ctx.cr6.eq) goto loc_82213498;
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// ori r4,r4,22351
	ctx.r4.u64 = ctx.r4.u64 | 22351;
	// bl 0x821882d0
	ctx.lr = 0x8221347C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213498
	if (ctx.cr6.eq) goto loc_82213498;
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
loc_82213498:
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

__attribute__((alias("__imp__sub_822134AC"))) PPC_WEAK_FUNC(sub_822134AC);
PPC_FUNC_IMPL(__imp__sub_822134AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822134B0"))) PPC_WEAK_FUNC(sub_822134B0);
PPC_FUNC_IMPL(__imp__sub_822134B0) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x822134D0;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x821859a0
	ctx.lr = 0x822134E4;
	sub_821859A0(ctx, base);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,22351
	ctx.r4.u64 = ctx.r4.u64 | 22351;
	// bl 0x82188378
	ctx.lr = 0x822134F8;
	sub_82188378(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r31,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r31.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-3364
	ctx.r8.s64 = ctx.r11.s64 + -3364;
	// addi r7,r10,-3372
	ctx.r7.s64 = ctx.r10.s64 + -3372;
	// addi r6,r9,-3404
	ctx.r6.s64 = ctx.r9.s64 + -3404;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822aa648
	ctx.lr = 0x82213534;
	sub_822AA648(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x822aa648
	ctx.lr = 0x82213540;
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

__attribute__((alias("__imp__sub_82213558"))) PPC_WEAK_FUNC(sub_82213558);
PPC_FUNC_IMPL(__imp__sub_82213558) {
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
	// bl 0x822133c8
	ctx.lr = 0x82213578;
	sub_822133C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213594
	if (ctx.cr6.eq) goto loc_82213594;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82213590;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82213594:
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

__attribute__((alias("__imp__sub_822135AC"))) PPC_WEAK_FUNC(sub_822135AC);
PPC_FUNC_IMPL(__imp__sub_822135AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822135B0"))) PPC_WEAK_FUNC(sub_822135B0);
PPC_FUNC_IMPL(__imp__sub_822135B0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,-32
	ctx.r31.s64 = ctx.r3.s64 + -32;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x822aa648
	ctx.lr = 0x822135D8;
	sub_822AA648(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x822aa648
	ctx.lr = 0x822135E4;
	sub_822AA648(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_822135F8"))) PPC_WEAK_FUNC(sub_822135F8);
PPC_FUNC_IMPL(__imp__sub_822135F8) {
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
	ctx.lr = 0x82213610;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82213618;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82213624;
	sub_821837D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82183850
	ctx.lr = 0x82213634;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8221364c
	if (ctx.cr6.eq) goto loc_8221364C;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82183448
	ctx.lr = 0x82213648;
	sub_82183448(ctx, base);
	// b 0x82213654
	goto loc_82213654;
loc_8221364C:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821845a0
	ctx.lr = 0x82213654;
	sub_821845A0(ctx, base);
loc_82213654:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221366c
	if (ctx.cr6.eq) goto loc_8221366C;
	// bl 0x822134b0
	ctx.lr = 0x82213660;
	sub_822134B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// bne cr6,0x82213670
	if (!ctx.cr6.eq) goto loc_82213670;
loc_8221366C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82213670:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82213684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8221368C;
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

__attribute__((alias("__imp__sub_822136A4"))) PPC_WEAK_FUNC(sub_822136A4);
PPC_FUNC_IMPL(__imp__sub_822136A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822136A8"))) PPC_WEAK_FUNC(sub_822136A8);
PPC_FUNC_IMPL(__imp__sub_822136A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822136c8
	if (ctx.cr6.eq) goto loc_822136C8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822136C8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4964);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822136E4"))) PPC_WEAK_FUNC(sub_822136E4);
PPC_FUNC_IMPL(__imp__sub_822136E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822136E8"))) PPC_WEAK_FUNC(sub_822136E8);
PPC_FUNC_IMPL(__imp__sub_822136E8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-3356
	ctx.r10.s64 = ctx.r11.s64 + -3356;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8221372c
	if (ctx.cr6.eq) goto loc_8221372C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221372C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221372C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213754
	if (ctx.cr6.eq) goto loc_82213754;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82213754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82213754:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82213770"))) PPC_WEAK_FUNC(sub_82213770);
PPC_FUNC_IMPL(__imp__sub_82213770) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82215188
	sub_82215188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213778"))) PPC_WEAK_FUNC(sub_82213778);
PPC_FUNC_IMPL(__imp__sub_82213778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213790"))) PPC_WEAK_FUNC(sub_82213790);
PPC_FUNC_IMPL(__imp__sub_82213790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82213798;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-3356
	ctx.r10.s64 = ctx.r11.s64 + -3356;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82183078
	ctx.lr = 0x822137B8;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x822137C4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x822137C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x822137e0
	if (ctx.cr6.eq) goto loc_822137E0;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x822137DC;
	sub_82183448(ctx, base);
	// b 0x822137e8
	goto loc_822137E8;
loc_822137E0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x822137E8;
	sub_821845A0(ctx, base);
loc_822137E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822137fc
	if (ctx.cr6.eq) goto loc_822137FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82214418
	ctx.lr = 0x822137F8;
	sub_82214418(ctx, base);
	// b 0x82213800
	goto loc_82213800;
loc_822137FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213800:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82213808;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82213820
	if (ctx.cr6.eq) goto loc_82213820;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x8221381C;
	sub_82183448(ctx, base);
	// b 0x82213828
	goto loc_82213828;
loc_82213820:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x82213828;
	sub_821845A0(ctx, base);
loc_82213828:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221383c
	if (ctx.cr6.eq) goto loc_8221383C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82215388
	ctx.lr = 0x82213838;
	sub_82215388(ctx, base);
	// b 0x82213840
	goto loc_82213840;
loc_8221383C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213840:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8221384C;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82213858"))) PPC_WEAK_FUNC(sub_82213858);
PPC_FUNC_IMPL(__imp__sub_82213858) {
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
	// bl 0x822136e8
	ctx.lr = 0x82213878;
	sub_822136E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213894
	if (ctx.cr6.eq) goto loc_82213894;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82213890;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82213894:
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

__attribute__((alias("__imp__sub_822138AC"))) PPC_WEAK_FUNC(sub_822138AC);
PPC_FUNC_IMPL(__imp__sub_822138AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822138B0"))) PPC_WEAK_FUNC(sub_822138B0);
PPC_FUNC_IMPL(__imp__sub_822138B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822138B8;
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
	ctx.lr = 0x822138C8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x822138D4;
	sub_821837D0(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r11,-752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822138f0
	if (!ctx.cr6.eq) goto loc_822138F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82174820
	ctx.lr = 0x822138EC;
	sub_82174820(ctx, base);
	// lwz r11,-752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -752);
loc_822138F0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82213c30
	ctx.lr = 0x82213900;
	sub_82213C30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82213908;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82213910"))) PPC_WEAK_FUNC(sub_82213910);
PPC_FUNC_IMPL(__imp__sub_82213910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82213918;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8218a540
	ctx.lr = 0x82213934;
	sub_8218A540(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lbz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r27,r9,30548
	ctx.r27.s64 = ctx.r9.s64 + 30548;
	// lbz r7,1(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// lbz r6,2(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// li r4,16
	ctx.r4.s64 = 16;
	// stb r7,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r7.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stb r6,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r6.u8);
	// lbz r9,3(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// lbz r26,4(r28)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// lbz r25,5(r28)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5);
	// lbz r24,6(r28)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// lbz r28,7(r28)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// stb r26,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
	// stb r25,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r25.u8);
	// stb r24,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r24.u8);
	// stb r28,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r28.u8);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// bl 0x8218a288
	ctx.lr = 0x822139A0;
	sub_8218A288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8218a288
	ctx.lr = 0x822139B0;
	sub_8218A288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8218a288
	ctx.lr = 0x822139C0;
	sub_8218A288(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a288
	ctx.lr = 0x822139D0;
	sub_8218A288(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82213a14
	if (ctx.cr6.eq) goto loc_82213A14;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r10,26232
	ctx.r5.s64 = ctx.r10.s64 + 26232;
	// li r4,4
	ctx.r4.s64 = 4;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// bl 0x8218a5f0
	ctx.lr = 0x82213A04;
	sub_8218A5F0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a288
	ctx.lr = 0x82213A14;
	sub_8218A288(ctx, base);
loc_82213A14:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82213A1C"))) PPC_WEAK_FUNC(sub_82213A1C);
PPC_FUNC_IMPL(__imp__sub_82213A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213A20"))) PPC_WEAK_FUNC(sub_82213A20);
PPC_FUNC_IMPL(__imp__sub_82213A20) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82213a30
	if (ctx.cr6.lt) goto loc_82213A30;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x82213a38
	if (ctx.cr6.lt) goto loc_82213A38;
loc_82213A30:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82213A38:
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82215628
	sub_82215628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213A48"))) PPC_WEAK_FUNC(sub_82213A48);
PPC_FUNC_IMPL(__imp__sub_82213A48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82213a60
	if (ctx.cr6.lt) goto loc_82213A60;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82213a68
	if (ctx.cr6.lt) goto loc_82213A68;
loc_82213A60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82213A68:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82215690
	sub_82215690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213A7C"))) PPC_WEAK_FUNC(sub_82213A7C);
PPC_FUNC_IMPL(__imp__sub_82213A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213A80"))) PPC_WEAK_FUNC(sub_82213A80);
PPC_FUNC_IMPL(__imp__sub_82213A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82213A88;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82213af4
	if (ctx.cr6.lt) goto loc_82213AF4;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x82213af4
	if (!ctx.cr6.lt) goto loc_82213AF4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82213AB0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213ae8
	if (ctx.cr6.eq) goto loc_82213AE8;
	// addi r11,r27,12
	ctx.r11.s64 = ctx.r27.s64 + 12;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82213AC4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822160e0
	ctx.lr = 0x82213AD4;
	sub_822160E0(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82213ac4
	if (ctx.cr6.lt) goto loc_82213AC4;
loc_82213AE8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x82213ab0
	if (ctx.cr6.lt) goto loc_82213AB0;
loc_82213AF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82213AFC"))) PPC_WEAK_FUNC(sub_82213AFC);
PPC_FUNC_IMPL(__imp__sub_82213AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213B00"))) PPC_WEAK_FUNC(sub_82213B00);
PPC_FUNC_IMPL(__imp__sub_82213B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82213B08;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213b30
	if (ctx.cr6.eq) goto loc_82213B30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82213B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82213B30:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r30,44
	ctx.r31.s64 = ctx.r30.s64 + 44;
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// li r30,2
	ctx.r30.s64 = 2;
loc_82213B40:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213b60
	if (ctx.cr6.eq) goto loc_82213B60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82213B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82213B60:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x82213b40
	if (!ctx.cr0.eq) goto loc_82213B40;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82213B74"))) PPC_WEAK_FUNC(sub_82213B74);
PPC_FUNC_IMPL(__imp__sub_82213B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213B78"))) PPC_WEAK_FUNC(sub_82213B78);
PPC_FUNC_IMPL(__imp__sub_82213B78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,512
	ctx.r10.s64 = 512;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213BA0"))) PPC_WEAK_FUNC(sub_82213BA0);
PPC_FUNC_IMPL(__imp__sub_82213BA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,512
	ctx.r10.s64 = 512;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213BD0"))) PPC_WEAK_FUNC(sub_82213BD0);
PPC_FUNC_IMPL(__imp__sub_82213BD0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,2
	ctx.r10.s64 = 2;
	// std r30,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r30.u64);
	// std r30,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r30.u64);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x8218a540
	ctx.lr = 0x82213C10;
	sub_8218A540(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82213C30"))) PPC_WEAK_FUNC(sub_82213C30);
PPC_FUNC_IMPL(__imp__sub_82213C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82213C38;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,40(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82213C50;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82213C5C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213b00
	ctx.lr = 0x82213C64;
	sub_82213B00(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82213C68;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82213c80
	if (ctx.cr6.eq) goto loc_82213C80;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82183448
	ctx.lr = 0x82213C7C;
	sub_82183448(ctx, base);
	// b 0x82213c88
	goto loc_82213C88;
loc_82213C80:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x82213C88;
	sub_821845A0(ctx, base);
loc_82213C88:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213c9c
	if (ctx.cr6.eq) goto loc_82213C9C;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82216220
	ctx.lr = 0x82213C98;
	sub_82216220(ctx, base);
	// b 0x82213ca0
	goto loc_82213CA0;
loc_82213C9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213CA0:
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82216450
	ctx.lr = 0x82213CB0;
	sub_82216450(ctx, base);
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82213CB8:
	// bl 0x82183850
	ctx.lr = 0x82213CBC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82213cd4
	if (ctx.cr6.eq) goto loc_82213CD4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x82213CD0;
	sub_82183448(ctx, base);
	// b 0x82213cdc
	goto loc_82213CDC;
loc_82213CD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82213CDC;
	sub_821845A0(ctx, base);
loc_82213CDC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213cf8
	if (ctx.cr6.eq) goto loc_82213CF8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82215918
	ctx.lr = 0x82213CF4;
	sub_82215918(ctx, base);
	// b 0x82213cfc
	goto loc_82213CFC;
loc_82213CF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213CFC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bne 0x82213cb8
	if (!ctx.cr0.eq) goto loc_82213CB8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82213D10;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82213D18"))) PPC_WEAK_FUNC(sub_82213D18);
PPC_FUNC_IMPL(__imp__sub_82213D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82213D20;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82213d94
	if (ctx.cr6.lt) goto loc_82213D94;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x82213d94
	if (!ctx.cr6.lt) goto loc_82213D94;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82213D4C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213d88
	if (ctx.cr6.eq) goto loc_82213D88;
	// addi r11,r26,12
	ctx.r11.s64 = ctx.r26.s64 + 12;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82213D60:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822156c0
	ctx.lr = 0x82213D74;
	sub_822156C0(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82213d60
	if (ctx.cr6.lt) goto loc_82213D60;
loc_82213D88:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x82213d4c
	if (ctx.cr6.lt) goto loc_82213D4C;
loc_82213D94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82213D9C"))) PPC_WEAK_FUNC(sub_82213D9C);
PPC_FUNC_IMPL(__imp__sub_82213D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213DA0"))) PPC_WEAK_FUNC(sub_82213DA0);
PPC_FUNC_IMPL(__imp__sub_82213DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82213DA8;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82213dcc
	if (ctx.cr6.lt) goto loc_82213DCC;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x82213dd8
	if (ctx.cr6.lt) goto loc_82213DD8;
loc_82213DCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82213DD8:
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r28,48
	ctx.r29.s64 = ctx.r28.s64 + 48;
	// lwzx r24,r10,r28
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
loc_82213DEC:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82213e5c
	if (!ctx.cr6.gt) goto loc_82213E5C;
loc_82213E00:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82215690
	ctx.lr = 0x82213E10;
	sub_82215690(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82213e48
	if (ctx.cr6.eq) goto loc_82213E48;
	// bl 0x822154c0
	ctx.lr = 0x82213E20;
	sub_822154C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82213e48
	if (ctx.cr6.eq) goto loc_82213E48;
	// ld r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 16);
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82213e48
	if (!ctx.cr6.eq) goto loc_82213E48;
	// ld r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// ld r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 24);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x82213e88
	if (ctx.cr6.eq) goto loc_82213E88;
loc_82213E48:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82213e00
	if (ctx.cr6.lt) goto loc_82213E00;
loc_82213E5C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// blt cr6,0x82213dec
	if (ctx.cr6.lt) goto loc_82213DEC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822161e0
	ctx.lr = 0x82213E80;
	sub_822161E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82213E88:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82216058
	ctx.lr = 0x82213EAC;
	sub_82216058(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82213EB8"))) PPC_WEAK_FUNC(sub_82213EB8);
PPC_FUNC_IMPL(__imp__sub_82213EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82213EC0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r28,4(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// bl 0x82230de8
	ctx.lr = 0x82213EDC;
	sub_82230DE8(ctx, base);
	// lbz r8,5(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// subfc r6,r11,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r28.s64 - ctx.r11.s64;
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r5,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r5.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82213F28"))) PPC_WEAK_FUNC(sub_82213F28);
PPC_FUNC_IMPL(__imp__sub_82213F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82213F30;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82213f68
	if (!ctx.cr6.eq) goto loc_82213F68;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82213F68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82213F70;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// blt cr6,0x82213f88
	if (ctx.cr6.lt) goto loc_82213F88;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x82213fa0
	if (ctx.cr6.lt) goto loc_82213FA0;
loc_82213F88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82213F90;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r22,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_82213FA0:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r3,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// bl 0x82216058
	ctx.lr = 0x82213FCC;
	sub_82216058(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82213FD8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r22,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82213FE8"))) PPC_WEAK_FUNC(sub_82213FE8);
PPC_FUNC_IMPL(__imp__sub_82213FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82213FF0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82214010
	if (!ctx.cr6.eq) goto loc_82214010;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82214010:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82214018;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// blt cr6,0x82214080
	if (ctx.cr6.lt) goto loc_82214080;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// bge cr6,0x82214080
	if (!ctx.cr6.lt) goto loc_82214080;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8221403C:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214074
	if (ctx.cr6.eq) goto loc_82214074;
	// addi r11,r26,12
	ctx.r11.s64 = ctx.r26.s64 + 12;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82214050:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822155f8
	ctx.lr = 0x82214060;
	sub_822155F8(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82214050
	if (ctx.cr6.lt) goto loc_82214050;
loc_82214074:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x8221403c
	if (ctx.cr6.lt) goto loc_8221403C;
loc_82214080:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82214088;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r25,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82214094"))) PPC_WEAK_FUNC(sub_82214094);
PPC_FUNC_IMPL(__imp__sub_82214094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214098"))) PPC_WEAK_FUNC(sub_82214098);
PPC_FUNC_IMPL(__imp__sub_82214098) {
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
	// lbz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82230de8
	ctx.lr = 0x822140BC;
	sub_82230DE8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x822140d0
	if (ctx.cr6.lt) goto loc_822140D0;
loc_822140C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82214104
	goto loc_82214104;
loc_822140D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822140c8
	if (ctx.cr6.lt) goto loc_822140C8;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82215690
	ctx.lr = 0x822140F0;
	sub_82215690(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822140c8
	if (ctx.cr6.eq) goto loc_822140C8;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82214104:
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

__attribute__((alias("__imp__sub_8221411C"))) PPC_WEAK_FUNC(sub_8221411C);
PPC_FUNC_IMPL(__imp__sub_8221411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214120"))) PPC_WEAK_FUNC(sub_82214120);
PPC_FUNC_IMPL(__imp__sub_82214120) {
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
	// addi r10,r11,-3352
	ctx.r10.s64 = ctx.r11.s64 + -3352;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82213b00
	ctx.lr = 0x82214148;
	sub_82213B00(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82214168
	if (ctx.cr6.eq) goto loc_82214168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82214164;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82214168:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82214178
	if (ctx.cr6.eq) goto loc_82214178;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82214178:
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

__attribute__((alias("__imp__sub_82214190"))) PPC_WEAK_FUNC(sub_82214190);
PPC_FUNC_IMPL(__imp__sub_82214190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82214198;
	sub_8224876C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x822141b8
	if (!ctx.cr6.eq) goto loc_822141B8;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_822141B8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x822141C0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r22,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r22.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x822143c8
	if (!ctx.cr6.lt) goto loc_822143C8;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x822141f8
	if (!ctx.cr6.eq) goto loc_822141F8;
loc_822141E0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x822141E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r26.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_822141F8:
	// lwz r25,44(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822141e0
	if (ctx.cr6.eq) goto loc_822141E0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82216268
	ctx.lr = 0x8221420C;
	sub_82216268(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822141e0
	if (ctx.cr6.eq) goto loc_822141E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822141e0
	if (ctx.cr6.lt) goto loc_822141E0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x822141e0
	if (!ctx.cr6.lt) goto loc_822141E0;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822143c8
	if (!ctx.cr6.gt) goto loc_822143C8;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82214240:
	// lhz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// bne cr6,0x82214288
	if (!ctx.cr6.eq) goto loc_82214288;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// bl 0x822155f8
	ctx.lr = 0x82214268;
	sub_822155F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// bl 0x822155f8
	ctx.lr = 0x82214284;
	sub_822155F8(ctx, base);
	// b 0x822143b4
	goto loc_822143B4;
loc_82214288:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822162a0
	ctx.lr = 0x82214290;
	sub_822162A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822141e0
	if (ctx.cr6.eq) goto loc_822141E0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// bl 0x822162d0
	ctx.lr = 0x822142A8;
	sub_822162D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822141e0
	if (ctx.cr6.eq) goto loc_822141E0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82213bd0
	ctx.lr = 0x822142BC;
	sub_82213BD0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82213910
	ctx.lr = 0x822142DC;
	sub_82213910(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x822143e0
	if (ctx.cr6.eq) goto loc_822143E0;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bne cr6,0x82214308
	if (!ctx.cr6.eq) goto loc_82214308;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82214308:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82213f28
	ctx.lr = 0x8221432C;
	sub_82213F28(ctx, base);
loc_8221432C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r4,2(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// bl 0x82216308
	ctx.lr = 0x82214338;
	sub_82216308(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822141e0
	if (ctx.cr6.eq) goto loc_822141E0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82213bd0
	ctx.lr = 0x8221434C;
	sub_82213BD0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82213910
	ctx.lr = 0x8221436C;
	sub_82213910(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x822143fc
	if (ctx.cr6.eq) goto loc_822143FC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82214390
	if (!ctx.cr6.eq) goto loc_82214390;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
loc_82214390:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82213f28
	ctx.lr = 0x822143B4;
	sub_82213F28(ctx, base);
loc_822143B4:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82214240
	if (ctx.cr6.lt) goto loc_82214240;
loc_822143C8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x822143D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r26.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_822143E0:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82213da0
	ctx.lr = 0x822143F8;
	sub_82213DA0(ctx, base);
	// b 0x8221432c
	goto loc_8221432C;
loc_822143FC:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82213da0
	ctx.lr = 0x82214414;
	sub_82213DA0(ctx, base);
	// b 0x822143b4
	goto loc_822143B4;
}

__attribute__((alias("__imp__sub_82214418"))) PPC_WEAK_FUNC(sub_82214418);
PPC_FUNC_IMPL(__imp__sub_82214418) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x82214444;
	sub_82081590(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r9,r10,-3352
	ctx.r9.s64 = ctx.r10.s64 + -3352;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82214480"))) PPC_WEAK_FUNC(sub_82214480);
PPC_FUNC_IMPL(__imp__sub_82214480) {
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
	// bl 0x82214120
	ctx.lr = 0x822144A0;
	sub_82214120(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822144bc
	if (ctx.cr6.eq) goto loc_822144BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x822144B8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822144BC:
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

__attribute__((alias("__imp__sub_822144D4"))) PPC_WEAK_FUNC(sub_822144D4);
PPC_FUNC_IMPL(__imp__sub_822144D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822144D8"))) PPC_WEAK_FUNC(sub_822144D8);
PPC_FUNC_IMPL(__imp__sub_822144D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822144E4"))) PPC_WEAK_FUNC(sub_822144E4);
PPC_FUNC_IMPL(__imp__sub_822144E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822144E8"))) PPC_WEAK_FUNC(sub_822144E8);
PPC_FUNC_IMPL(__imp__sub_822144E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82216a40
	sub_82216A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822144F8"))) PPC_WEAK_FUNC(sub_822144F8);
PPC_FUNC_IMPL(__imp__sub_822144F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822144FC"))) PPC_WEAK_FUNC(sub_822144FC);
PPC_FUNC_IMPL(__imp__sub_822144FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214500"))) PPC_WEAK_FUNC(sub_82214500);
PPC_FUNC_IMPL(__imp__sub_82214500) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822169a0
	sub_822169A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214510"))) PPC_WEAK_FUNC(sub_82214510);
PPC_FUNC_IMPL(__imp__sub_82214510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214514"))) PPC_WEAK_FUNC(sub_82214514);
PPC_FUNC_IMPL(__imp__sub_82214514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214518"))) PPC_WEAK_FUNC(sub_82214518);
PPC_FUNC_IMPL(__imp__sub_82214518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82214520;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82188378
	ctx.lr = 0x82214544;
	sub_82188378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x82185740
	ctx.lr = 0x82214554;
	sub_82185740(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x821859a0
	ctx.lr = 0x82214568;
	sub_821859A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r8,r11,-3332
	ctx.r8.s64 = ctx.r11.s64 + -3332;
	// addi r7,r10,-3340
	ctx.r7.s64 = ctx.r10.s64 + -3340;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// addi r6,r9,-3348
	ctx.r6.s64 = ctx.r9.s64 + -3348;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// lwz r5,1456(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1456);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r5,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// bl 0x82183078
	ctx.lr = 0x822145B0;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x822145BC;
	sub_821837D0(ctx, base);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bl 0x82183850
	ctx.lr = 0x822145C4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x822145dc
	if (ctx.cr6.eq) goto loc_822145DC;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x822145D8;
	sub_82183448(ctx, base);
	// b 0x822145e4
	goto loc_822145E4;
loc_822145DC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x822145E4;
	sub_821845A0(ctx, base);
loc_822145E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822145fc
	if (ctx.cr6.eq) goto loc_822145FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82216a48
	ctx.lr = 0x822145F8;
	sub_82216A48(ctx, base);
	// b 0x82214600
	goto loc_82214600;
loc_822145FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82214600:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82214618
	if (ctx.cr6.eq) goto loc_82214618;
	// bl 0x82216960
	ctx.lr = 0x82214610;
	sub_82216960(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82216c30
	ctx.lr = 0x82214618;
	sub_82216C30(ctx, base);
loc_82214618:
	// addic r11,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// subfe r10,r11,r27
	temp.u8 = (~ctx.r11.u32 + ctx.r27.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r27.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r9,1928(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1928);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82214634
	if (!ctx.cr6.eq) goto loc_82214634;
	// stw r31,1928(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1928, ctx.r31.u32);
loc_82214634:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82214644;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82214650"))) PPC_WEAK_FUNC(sub_82214650);
PPC_FUNC_IMPL(__imp__sub_82214650) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x822148c8
	sub_822148C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214658"))) PPC_WEAK_FUNC(sub_82214658);
PPC_FUNC_IMPL(__imp__sub_82214658) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x822148c8
	sub_822148C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214660"))) PPC_WEAK_FUNC(sub_82214660);
PPC_FUNC_IMPL(__imp__sub_82214660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82214668;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82214688
	if (ctx.cr6.eq) goto loc_82214688;
	// bl 0x822168f8
	ctx.lr = 0x82214688;
	sub_822168F8(ctx, base);
loc_82214688:
	// lwz r29,72(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82183078
	ctx.lr = 0x82214690;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8221469C;
	sub_821837D0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822146ac
	if (ctx.cr6.eq) goto loc_822146AC;
	// bl 0x82216a28
	ctx.lr = 0x822146AC;
	sub_82216A28(ctx, base);
loc_822146AC:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822146c4
	if (ctx.cr6.eq) goto loc_822146C4;
	// bl 0x82216960
	ctx.lr = 0x822146BC;
	sub_82216960(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82216c30
	ctx.lr = 0x822146C4;
	sub_82216C30(ctx, base);
loc_822146C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x822146CC;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822146D4"))) PPC_WEAK_FUNC(sub_822146D4);
PPC_FUNC_IMPL(__imp__sub_822146D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822146D8"))) PPC_WEAK_FUNC(sub_822146D8);
PPC_FUNC_IMPL(__imp__sub_822146D8) {
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
	// lwz r3,1964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// bl 0x821882d0
	ctx.lr = 0x822146FC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221470c
	if (ctx.cr6.eq) goto loc_8221470C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82214710
	goto loc_82214710;
loc_8221470C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82214710:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x82216a18
	ctx.lr = 0x8221471C;
	sub_82216A18(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82214730"))) PPC_WEAK_FUNC(sub_82214730);
PPC_FUNC_IMPL(__imp__sub_82214730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82214738;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822147f8
	if (ctx.cr6.eq) goto loc_822147F8;
	// lwz r29,72(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x82183078
	ctx.lr = 0x82214758;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82214764;
	sub_821837D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8221477c
	if (ctx.cr6.eq) goto loc_8221477C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822147f0
	if (!ctx.cr6.eq) goto loc_822147F0;
loc_8221477C:
	// bl 0x8215bec8
	ctx.lr = 0x82214780;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822147f0
	if (!ctx.cr6.eq) goto loc_822147F0;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822147f0
	if (!ctx.cr6.eq) goto loc_822147F0;
	// bl 0x8209c0d0
	ctx.lr = 0x822147A0;
	sub_8209C0D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822147b8
	if (!ctx.cr6.eq) goto loc_822147B8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822147b8
	if (ctx.cr6.eq) goto loc_822147B8;
	// bl 0x82216958
	ctx.lr = 0x822147B8;
	sub_82216958(ctx, base);
loc_822147B8:
	// bl 0x82213448
	ctx.lr = 0x822147BC;
	sub_82213448(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822147c8
	if (ctx.cr6.eq) goto loc_822147C8;
	// bl 0x8215f480
	ctx.lr = 0x822147C8;
	sub_8215F480(ctx, base);
loc_822147C8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822147f0
	if (!ctx.cr6.eq) goto loc_822147F0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x822169e0
	ctx.lr = 0x822147DC;
	sub_822169E0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822147f0
	if (ctx.cr6.eq) goto loc_822147F0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82216c88
	ctx.lr = 0x822147F0;
	sub_82216C88(ctx, base);
loc_822147F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x822147F8;
	sub_821837D0(ctx, base);
loc_822147F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82214800"))) PPC_WEAK_FUNC(sub_82214800);
PPC_FUNC_IMPL(__imp__sub_82214800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82214808;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r28,80(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-3332
	ctx.r8.s64 = ctx.r11.s64 + -3332;
	// addi r7,r10,-3340
	ctx.r7.s64 = ctx.r10.s64 + -3340;
	// addi r6,r9,-3348
	ctx.r6.s64 = ctx.r9.s64 + -3348;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221485c
	if (ctx.cr6.eq) goto loc_8221485C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82216de0
	ctx.lr = 0x82214850;
	sub_82216DE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221485C;
	sub_82183E40(ctx, base);
loc_8221485C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82185a50
	ctx.lr = 0x8221486C;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x82214874;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x8221487C;
	sub_821883B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82214884"))) PPC_WEAK_FUNC(sub_82214884);
PPC_FUNC_IMPL(__imp__sub_82214884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214888"))) PPC_WEAK_FUNC(sub_82214888);
PPC_FUNC_IMPL(__imp__sub_82214888) {
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
	ctx.lr = 0x822148A0;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822148b4
	if (ctx.cr6.eq) goto loc_822148B4;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x82214730
	ctx.lr = 0x822148B4;
	sub_82214730(ctx, base);
loc_822148B4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_822148C8"))) PPC_WEAK_FUNC(sub_822148C8);
PPC_FUNC_IMPL(__imp__sub_822148C8) {
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
	// bl 0x82214800
	ctx.lr = 0x822148E8;
	sub_82214800(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214904
	if (ctx.cr6.eq) goto loc_82214904;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82214900;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82214904:
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

__attribute__((alias("__imp__sub_8221491C"))) PPC_WEAK_FUNC(sub_8221491C);
PPC_FUNC_IMPL(__imp__sub_8221491C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214920"))) PPC_WEAK_FUNC(sub_82214920);
PPC_FUNC_IMPL(__imp__sub_82214920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82214928;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x8218aa18
	ctx.lr = 0x82214950;
	sub_8218AA18(ctx, base);
	// clrlwi r30,r30,16
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x82214960;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8221497c
	if (ctx.cr6.eq) goto loc_8221497C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82214974;
	sub_8218AB00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82214980
	goto loc_82214980;
loc_8221497C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82214980:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221498c
	if (ctx.cr6.eq) goto loc_8221498C;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8221498C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822149c0
	if (ctx.cr6.eq) goto loc_822149C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x822149A0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822149b8
	if (ctx.cr6.eq) goto loc_822149B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218abc0
	ctx.lr = 0x822149B4;
	sub_8218ABC0(ctx, base);
	// b 0x822149bc
	goto loc_822149BC;
loc_822149B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822149BC:
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_822149C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x822149C8;
	sub_8218A7F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822149D4"))) PPC_WEAK_FUNC(sub_822149D4);
PPC_FUNC_IMPL(__imp__sub_822149D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822149D8"))) PPC_WEAK_FUNC(sub_822149D8);
PPC_FUNC_IMPL(__imp__sub_822149D8) {
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
	// addi r10,r11,-3300
	ctx.r10.s64 = ctx.r11.s64 + -3300;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x82214A04;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82214a20
	if (ctx.cr6.eq) goto loc_82214A20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82214A1C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82214A20:
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

__attribute__((alias("__imp__sub_82214A38"))) PPC_WEAK_FUNC(sub_82214A38);
PPC_FUNC_IMPL(__imp__sub_82214A38) {
	PPC_FUNC_PROLOGUE();
	// li r11,800
	ctx.r11.s64 = 800;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82214A48:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stb r4,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r4.u8);
	// addi r5,r11,6
	ctx.r5.s64 = ctx.r11.s64 + 6;
	// addi r5,r11,10
	ctx.r5.s64 = ctx.r11.s64 + 10;
	// addi r5,r11,14
	ctx.r5.s64 = ctx.r11.s64 + 14;
	// stb r3,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r3.u8);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sthx r5,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u16);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// stb r3,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r3.u8);
	// lhz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r3,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r3.u8);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// stb r3,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r3.u8);
	// lhz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// lbz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + -4);
	// lbz r4,-3(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + -3);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r3,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r3.u8);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r5,-4(r7)
	PPC_STORE_U16(ctx.r7.u32 + -4, ctx.r5.u16);
	// lbz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r4,11(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// stb r3,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r3.u8);
	// lhz r7,-14(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// lbz r6,1(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lbzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// lhz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sthx r4,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r4.u16);
	// lbz r8,14(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r3,15(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// stb r3,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r3.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lhz r7,-14(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r7,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r7.u16);
	// bdnz 0x82214a48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82214A48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214B3C"))) PPC_WEAK_FUNC(sub_82214B3C);
PPC_FUNC_IMPL(__imp__sub_82214B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214B40"))) PPC_WEAK_FUNC(sub_82214B40);
PPC_FUNC_IMPL(__imp__sub_82214B40) {
	PPC_FUNC_PROLOGUE();
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82214B50:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stb r4,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r4.u8);
	// addi r5,r11,6
	ctx.r5.s64 = ctx.r11.s64 + 6;
	// addi r5,r11,10
	ctx.r5.s64 = ctx.r11.s64 + 10;
	// addi r5,r11,14
	ctx.r5.s64 = ctx.r11.s64 + 14;
	// stb r3,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r3.u8);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sthx r5,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u16);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// stb r3,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r3.u8);
	// lhz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r3,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r3.u8);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// stb r3,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r3.u8);
	// lhz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// lbz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + -4);
	// lbz r4,-3(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + -3);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r3,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r3.u8);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r5,-4(r7)
	PPC_STORE_U16(ctx.r7.u32 + -4, ctx.r5.u16);
	// lbz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r4,11(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// stb r3,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r3.u8);
	// lhz r7,-14(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// lbz r6,1(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lbzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// lhz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sthx r4,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r4.u16);
	// lbz r8,14(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r3,15(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// stb r3,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r3.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lhz r7,-14(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r7,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r7.u16);
	// bdnz 0x82214b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82214B50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214C44"))) PPC_WEAK_FUNC(sub_82214C44);
PPC_FUNC_IMPL(__imp__sub_82214C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214C48"))) PPC_WEAK_FUNC(sub_82214C48);
PPC_FUNC_IMPL(__imp__sub_82214C48) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82214C58:
	// lbz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r8,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r8.u16);
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r7,13(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r7,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r7.u8);
	// stb r6,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r6.u8);
	// lhz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r5,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r5.u16);
	// lbz r3,14(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r4,15(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r3,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r3.u8);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lhz r7,-14(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r7,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r7.u16);
	// lbz r5,18(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r6,19(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// lhz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r4,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r4.u16);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r3,21(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// stb r3,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r3.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// lhz r9,-14(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r9,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r9.u16);
	// lbz r7,22(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r8,23(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r6,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r6.u16);
	// lbz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// lbz r5,25(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// lhz r3,-14(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sthu r3,24(r11)
	// bdnz 0x82214c58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82214C58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214D20"))) PPC_WEAK_FUNC(sub_82214D20);
PPC_FUNC_IMPL(__imp__sub_82214D20) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r3,14
	ctx.r11.s64 = ctx.r3.s64 + 14;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82214D30:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r10.u8);
	// stb r9,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r9.u8);
	// lhz r8,-14(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r7,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r7.u8);
	// stb r6,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r6.u8);
	// lhz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -12);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// stb r3,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r3.u8);
	// lhz r10,-14(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r9,9(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r9,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r9.u8);
	// stb r8,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r8.u8);
	// lhz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -12);
	// sth r7,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r7.u16);
	// lbz r5,10(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r6,11(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// lhz r4,-14(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r4,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r4.u16);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r3,13(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r3,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r3.u8);
	// stb r10,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r10.u8);
	// lhz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -12);
	// sth r9,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// lbz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r8,15(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lhz r6,-14(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r6,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r6.u16);
	// lbz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lbz r5,17(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// stb r5,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r5.u8);
	// stb r4,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r4.u8);
	// lhz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -12);
	// sth r3,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r3.u16);
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r8,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r8.u16);
	// lbz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r7,21(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r5,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r5.u16);
	// lbz r3,22(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r4,23(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r3,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r3.u8);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r10,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r10.u16);
	// lbz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r7.u16);
	// lbz r5,26(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26);
	// lbz r6,27(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// lhz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r4,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r4.u16);
	// lbz r3,29(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// stb r3,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r3.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r9,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r9.u16);
	// lbz r7,31(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// lbz r8,30(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r6,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r6.u16);
	// lbz r5,33(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// lbz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// stb r5,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r5.u8);
	// stb r4,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r4.u8);
	// lhz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sthu r3,32(r11)
	// bdnz 0x82214d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82214D30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214EB8"))) PPC_WEAK_FUNC(sub_82214EB8);
PPC_FUNC_IMPL(__imp__sub_82214EB8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82214EC4:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r6,3
	ctx.r4.s64 = ctx.r6.s64 + 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82214ED4:
	// add r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stb r3,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r3.u8);
	// stb r31,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r31.u8);
	// lhz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// lbz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r3,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r3.u8);
	// stb r31,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r31.u8);
	// lhz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r3,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r3.u8);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r11,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// lbz r9,1(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// lbzx r8,r5,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sthx r3,r5,r7
	PPC_STORE_U16(ctx.r5.u32 + ctx.r7.u32, ctx.r3.u16);
	// bdnz 0x82214ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82214ED4;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// cmpwi cr6,r6,1024
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1024, ctx.xer);
	// blt cr6,0x82214ec4
	if (ctx.cr6.lt) goto loc_82214EC4;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214F7C"))) PPC_WEAK_FUNC(sub_82214F7C);
PPC_FUNC_IMPL(__imp__sub_82214F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214F80"))) PPC_WEAK_FUNC(sub_82214F80);
PPC_FUNC_IMPL(__imp__sub_82214F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82214F88;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82214fa8
	if (!ctx.cr6.eq) goto loc_82214FA8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82214FA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82214FB0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// lwz r26,40(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82183078
	ctx.lr = 0x82214FC0;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x82214FCC;
	sub_821837D0(ctx, base);
	// stw r31,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184710
	ctx.lr = 0x82214FE0;
	sub_82184710(ctx, base);
	// stw r3,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x82214FF0;
	sub_82248A40(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,48(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// bl 0x8218aa18
	ctx.lr = 0x82215004;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82215010;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215028
	if (ctx.cr6.eq) goto loc_82215028;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82215024;
	sub_8218AB00(ctx, base);
	// b 0x8221502c
	goto loc_8221502C;
loc_82215028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221502C:
	// bl 0x82214a38
	ctx.lr = 0x82215030;
	sub_82214A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x8221503C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215054
	if (ctx.cr6.eq) goto loc_82215054;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82215050;
	sub_8218AB00(ctx, base);
	// b 0x82215058
	goto loc_82215058;
loc_82215054:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82215058:
	// bl 0x82214b40
	ctx.lr = 0x8221505C;
	sub_82214B40(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82215068;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215084
	if (ctx.cr6.eq) goto loc_82215084;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218abc0
	ctx.lr = 0x8221507C;
	sub_8218ABC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82215088
	goto loc_82215088;
loc_82215084:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82215088:
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82215094;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822150b0
	if (ctx.cr6.eq) goto loc_822150B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x822150A8;
	sub_8218AB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822150b4
	goto loc_822150B4;
loc_822150B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822150B4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218aa18
	ctx.lr = 0x822150C4;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x822150D0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822150e8
	if (ctx.cr6.eq) goto loc_822150E8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x822150E4;
	sub_8218AB00(ctx, base);
	// b 0x822150ec
	goto loc_822150EC;
loc_822150E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822150EC:
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82214c48
	ctx.lr = 0x822150F4;
	sub_82214C48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x82215100;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215118
	if (ctx.cr6.eq) goto loc_82215118;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x82215114;
	sub_8218AB00(ctx, base);
	// b 0x8221511c
	goto loc_8221511C;
loc_82215118:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221511C:
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x82214d20
	ctx.lr = 0x82215124;
	sub_82214D20(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x82215130;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215148
	if (ctx.cr6.eq) goto loc_82215148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x82215144;
	sub_8218AB00(ctx, base);
	// b 0x8221514c
	goto loc_8221514C;
loc_82215148:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221514C:
	// bl 0x82214eb8
	ctx.lr = 0x82215150;
	sub_82214EB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a7f0
	ctx.lr = 0x82215158;
	sub_8218A7F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// bl 0x8218a7f0
	ctx.lr = 0x82215168;
	sub_8218A7F0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82215170;
	sub_821837D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82215178;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82215188"))) PPC_WEAK_FUNC(sub_82215188);
PPC_FUNC_IMPL(__imp__sub_82215188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82215190;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x822151a8
	if (!ctx.cr6.eq) goto loc_822151A8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822151A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x822151B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r27,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r27.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215230
	if (!ctx.cr6.eq) goto loc_82215230;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82215230
	if (!ctx.cr6.eq) goto loc_82215230;
	// bl 0x82182e90
	ctx.lr = 0x822151D4;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x822151DC;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x822151E8;
	sub_821837D0(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82080000
	ctx.lr = 0x822151F0;
	sub_82080000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82215224
	if (ctx.cr6.eq) goto loc_82215224;
	// bl 0x8218b1e8
	ctx.lr = 0x82215200;
	sub_8218B1E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3300
	ctx.r9.s64 = ctx.r11.s64 + -3300;
	// addi r4,r10,-3280
	ctx.r4.s64 = ctx.r10.s64 + -3280;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x82215224;
	sub_8218B2D0(ctx, base);
loc_82215224:
	// stw r27,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82215230;
	sub_821837D0(ctx, base);
loc_82215230:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82215238;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82215248"))) PPC_WEAK_FUNC(sub_82215248);
PPC_FUNC_IMPL(__imp__sub_82215248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82215250;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8221526c
	if (!ctx.cr6.eq) goto loc_8221526C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8221526C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82215274;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82183e40
	ctx.lr = 0x82215288;
	sub_82183E40(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
loc_82215298:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822152cc
	if (ctx.cr6.eq) goto loc_822152CC;
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// lwz r3,1964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// bl 0x821882d0
	ctx.lr = 0x822152B4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822152cc
	if (ctx.cr6.eq) goto loc_822152CC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822152cc
	if (ctx.cr6.eq) goto loc_822152CC;
	// bl 0x82214500
	ctx.lr = 0x822152CC;
	sub_82214500(ctx, base);
loc_822152CC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82215298
	if (!ctx.cr0.eq) goto loc_82215298;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x822152E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r28,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822152EC"))) PPC_WEAK_FUNC(sub_822152EC);
PPC_FUNC_IMPL(__imp__sub_822152EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822152F0"))) PPC_WEAK_FUNC(sub_822152F0);
PPC_FUNC_IMPL(__imp__sub_822152F0) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82214f80
	ctx.lr = 0x82215304;
	sub_82214F80(ctx, base);
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

__attribute__((alias("__imp__sub_82215318"))) PPC_WEAK_FUNC(sub_82215318);
PPC_FUNC_IMPL(__imp__sub_82215318) {
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
	// addi r10,r11,-3268
	ctx.r10.s64 = ctx.r11.s64 + -3268;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82215248
	ctx.lr = 0x82215340;
	sub_82215248(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82215360
	if (ctx.cr6.eq) goto loc_82215360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8221535C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82215360:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82215370
	if (ctx.cr6.eq) goto loc_82215370;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82215370:
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

__attribute__((alias("__imp__sub_82215388"))) PPC_WEAK_FUNC(sub_82215388);
PPC_FUNC_IMPL(__imp__sub_82215388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82215390;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x822153B0;
	sub_82081590(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-3268
	ctx.r10.s64 = ctx.r11.s64 + -3268;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822153D8"))) PPC_WEAK_FUNC(sub_822153D8);
PPC_FUNC_IMPL(__imp__sub_822153D8) {
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
	// bl 0x82215318
	ctx.lr = 0x822153F8;
	sub_82215318(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215414
	if (ctx.cr6.eq) goto loc_82215414;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82215410;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82215414:
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

__attribute__((alias("__imp__sub_8221542C"))) PPC_WEAK_FUNC(sub_8221542C);
PPC_FUNC_IMPL(__imp__sub_8221542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215430"))) PPC_WEAK_FUNC(sub_82215430);
PPC_FUNC_IMPL(__imp__sub_82215430) {
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
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8218a540
	ctx.lr = 0x82215468;
	sub_8218A540(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82215490
	if (!ctx.cr6.eq) goto loc_82215490;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82215490
	if (ctx.cr6.eq) goto loc_82215490;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82215490;
	sub_82183E40(ctx, base);
loc_82215490:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_822154C0"))) PPC_WEAK_FUNC(sub_822154C0);
PPC_FUNC_IMPL(__imp__sub_822154C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822154dc
	if (ctx.cr6.eq) goto loc_822154DC;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822154DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822154E4"))) PPC_WEAK_FUNC(sub_822154E4);
PPC_FUNC_IMPL(__imp__sub_822154E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822154E8"))) PPC_WEAK_FUNC(sub_822154E8);
PPC_FUNC_IMPL(__imp__sub_822154E8) {
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
	// bl 0x8218b1e8
	ctx.lr = 0x82215508;
	sub_8218B1E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,-3264
	ctx.r10.s64 = ctx.r11.s64 + -3264;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// bl 0x8218b2d0
	ctx.lr = 0x82215528;
	sub_8218B2D0(ctx, base);
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

__attribute__((alias("__imp__sub_82215544"))) PPC_WEAK_FUNC(sub_82215544);
PPC_FUNC_IMPL(__imp__sub_82215544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215548"))) PPC_WEAK_FUNC(sub_82215548);
PPC_FUNC_IMPL(__imp__sub_82215548) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
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

__attribute__((alias("__imp__sub_8221555C"))) PPC_WEAK_FUNC(sub_8221555C);
PPC_FUNC_IMPL(__imp__sub_8221555C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215560"))) PPC_WEAK_FUNC(sub_82215560);
PPC_FUNC_IMPL(__imp__sub_82215560) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82215588
	if (ctx.cr6.eq) goto loc_82215588;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82215588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82215588:
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

__attribute__((alias("__imp__sub_8221559C"))) PPC_WEAK_FUNC(sub_8221559C);
PPC_FUNC_IMPL(__imp__sub_8221559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822155A0"))) PPC_WEAK_FUNC(sub_822155A0);
PPC_FUNC_IMPL(__imp__sub_822155A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822155A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-3244
	ctx.r10.s64 = ctx.r11.s64 + -3244;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
loc_822155C4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822155e4
	if (ctx.cr6.eq) goto loc_822155E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822155E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822155E4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x822155c4
	if (!ctx.cr0.eq) goto loc_822155C4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822155F8"))) PPC_WEAK_FUNC(sub_822155F8);
PPC_FUNC_IMPL(__imp__sub_822155F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// b 0x82215430
	sub_82215430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215620"))) PPC_WEAK_FUNC(sub_82215620);
PPC_FUNC_IMPL(__imp__sub_82215620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82215624"))) PPC_WEAK_FUNC(sub_82215624);
PPC_FUNC_IMPL(__imp__sub_82215624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215628"))) PPC_WEAK_FUNC(sub_82215628);
PPC_FUNC_IMPL(__imp__sub_82215628) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221567c
	if (ctx.cr6.eq) goto loc_8221567C;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_8221563C:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r11,8
	ctx.r11.s64 = 8;
loc_82215644:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82215660
	if (ctx.cr6.eq) goto loc_82215660;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82215684
	if (ctx.cr6.eq) goto loc_82215684;
loc_82215660:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82215644
	if (ctx.cr6.lt) goto loc_82215644;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8221563c
	if (ctx.cr6.lt) goto loc_8221563C;
loc_8221567C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82215684:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221568C"))) PPC_WEAK_FUNC(sub_8221568C);
PPC_FUNC_IMPL(__imp__sub_8221568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215690"))) PPC_WEAK_FUNC(sub_82215690);
PPC_FUNC_IMPL(__imp__sub_82215690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822156a4
	if (ctx.cr6.lt) goto loc_822156A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822156A4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822156C0"))) PPC_WEAK_FUNC(sub_822156C0);
PPC_FUNC_IMPL(__imp__sub_822156C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r6,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822156EC"))) PPC_WEAK_FUNC(sub_822156EC);
PPC_FUNC_IMPL(__imp__sub_822156EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822156F0"))) PPC_WEAK_FUNC(sub_822156F0);
PPC_FUNC_IMPL(__imp__sub_822156F0) {
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
	// addi r10,r11,23772
	ctx.r10.s64 = ctx.r11.s64 + 23772;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// std r30,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r30.u64);
	// std r30,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r30.u64);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8218a540
	ctx.lr = 0x82215740;
	sub_8218A540(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82215778"))) PPC_WEAK_FUNC(sub_82215778);
PPC_FUNC_IMPL(__imp__sub_82215778) {
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
	// addi r10,r11,-3264
	ctx.r10.s64 = ctx.r11.s64 + -3264;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x822157A4;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822157c0
	if (ctx.cr6.eq) goto loc_822157C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x822157BC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822157C0:
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

__attribute__((alias("__imp__sub_822157D8"))) PPC_WEAK_FUNC(sub_822157D8);
PPC_FUNC_IMPL(__imp__sub_822157D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822157E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-3244
	ctx.r10.s64 = ctx.r11.s64 + -3244;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82183078
	ctx.lr = 0x82215800;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8221580C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82215810;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82215828
	if (ctx.cr6.eq) goto loc_82215828;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82183448
	ctx.lr = 0x82215824;
	sub_82183448(ctx, base);
	// b 0x82215830
	goto loc_82215830;
loc_82215828:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821845a0
	ctx.lr = 0x82215830;
	sub_821845A0(ctx, base);
loc_82215830:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82215854
	if (ctx.cr6.eq) goto loc_82215854;
	// bl 0x822156f0
	ctx.lr = 0x82215840;
	sub_822156F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r10,-3240
	ctx.r9.s64 = ctx.r10.s64 + -3240;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82215858
	goto loc_82215858;
loc_82215854:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82215858:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x82215860;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82215878
	if (ctx.cr6.eq) goto loc_82215878;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82183448
	ctx.lr = 0x82215874;
	sub_82183448(ctx, base);
	// b 0x82215880
	goto loc_82215880;
loc_82215878:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821845a0
	ctx.lr = 0x82215880;
	sub_821845A0(ctx, base);
loc_82215880:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822158a4
	if (ctx.cr6.eq) goto loc_822158A4;
	// bl 0x822156f0
	ctx.lr = 0x82215890;
	sub_822156F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r10,-3232
	ctx.r9.s64 = ctx.r10.s64 + -3232;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x822158a8
	goto loc_822158A8;
loc_822158A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822158A8:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x822158B4;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822158C0"))) PPC_WEAK_FUNC(sub_822158C0);
PPC_FUNC_IMPL(__imp__sub_822158C0) {
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
	// bl 0x822155a0
	ctx.lr = 0x822158E0;
	sub_822155A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822158fc
	if (ctx.cr6.eq) goto loc_822158FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x822158F8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822158FC:
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

__attribute__((alias("__imp__sub_82215914"))) PPC_WEAK_FUNC(sub_82215914);
PPC_FUNC_IMPL(__imp__sub_82215914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215918"))) PPC_WEAK_FUNC(sub_82215918);
PPC_FUNC_IMPL(__imp__sub_82215918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82215920;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-3224
	ctx.r10.s64 = ctx.r11.s64 + -3224;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82215944;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82215950;
	sub_821837D0(ctx, base);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8221596c
	if (!ctx.cr6.gt) goto loc_8221596C;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8221596C:
	// bl 0x82183850
	ctx.lr = 0x82215970;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82215988
	if (ctx.cr6.eq) goto loc_82215988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82215984;
	sub_82183448(ctx, base);
	// b 0x82215994
	goto loc_82215994;
loc_82215988:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82215994;
	sub_821845A0(ctx, base);
loc_82215994:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// beq cr6,0x822159f4
	if (ctx.cr6.eq) goto loc_822159F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822159A4:
	// bl 0x82183850
	ctx.lr = 0x822159A8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x822159c0
	if (ctx.cr6.eq) goto loc_822159C0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x822159BC;
	sub_82183448(ctx, base);
	// b 0x822159c8
	goto loc_822159C8;
loc_822159C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x822159C8;
	sub_821845A0(ctx, base);
loc_822159C8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822159dc
	if (ctx.cr6.eq) goto loc_822159DC;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x822157d8
	ctx.lr = 0x822159D8;
	sub_822157D8(ctx, base);
	// b 0x822159e0
	goto loc_822159E0;
loc_822159DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822159E0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x822159a4
	if (!ctx.cr0.eq) goto loc_822159A4;
loc_822159F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x822159FC;
	sub_821837D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82215A08"))) PPC_WEAK_FUNC(sub_82215A08);
PPC_FUNC_IMPL(__imp__sub_82215A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82215A10;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,-3224
	ctx.r9.s64 = ctx.r11.s64 + -3224;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82215a88
	if (!ctx.cr6.gt) goto loc_82215A88;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82215A3C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82215a6c
	if (ctx.cr6.eq) goto loc_82215A6C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82215a6c
	if (ctx.cr6.eq) goto loc_82215A6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82215A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82215A6C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82215a3c
	if (ctx.cr6.lt) goto loc_82215A3C;
loc_82215A88:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82215a9c
	if (ctx.cr6.eq) goto loc_82215A9C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82215A9C;
	sub_82183E40(ctx, base);
loc_82215A9C:
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82215AA8"))) PPC_WEAK_FUNC(sub_82215AA8);
PPC_FUNC_IMPL(__imp__sub_82215AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82215AB0;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r26,0(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r25,4(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// ld r24,16(r4)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// ld r23,24(r4)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r22,32(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82215b7c
	if (!ctx.cr6.eq) goto loc_82215B7C;
	// bl 0x82215430
	ctx.lr = 0x82215AEC;
	sub_82215430(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82215b50
	if (!ctx.cr6.eq) goto loc_82215B50;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82215b50
	if (ctx.cr6.eq) goto loc_82215B50;
	// bl 0x82183078
	ctx.lr = 0x82215B00;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x82215B0C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82215B10;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82215b28
	if (ctx.cr6.eq) goto loc_82215B28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82215B24;
	sub_82183448(ctx, base);
	// b 0x82215b34
	goto loc_82215B34;
loc_82215B28:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82215B34;
	sub_821845A0(ctx, base);
loc_82215B34:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821847a8
	ctx.lr = 0x82215B44;
	sub_821847A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82215B4C;
	sub_821837D0(ctx, base);
	// b 0x82215b54
	goto loc_82215B54;
loc_82215B50:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_82215B54:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r26,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r26.u32);
	// stw r25,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
	// std r24,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r24.u64);
	// std r23,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r23.u64);
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
loc_82215B7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82215B84"))) PPC_WEAK_FUNC(sub_82215B84);
PPC_FUNC_IMPL(__imp__sub_82215B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215B88"))) PPC_WEAK_FUNC(sub_82215B88);
PPC_FUNC_IMPL(__imp__sub_82215B88) {
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
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,-752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -752);
	// bl 0x82213778
	ctx.lr = 0x82215BB8;
	sub_82213778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82215c28
	if (ctx.cr6.eq) goto loc_82215C28;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82215c28
	if (ctx.cr6.lt) goto loc_82215C28;
	// beq cr6,0x82215bf4
	if (ctx.cr6.eq) goto loc_82215BF4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82215c0c
	if (!ctx.cr6.lt) goto loc_82215C0C;
	// lwz r11,-752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -752);
	// li r6,200
	ctx.r6.s64 = 200;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82214920
	ctx.lr = 0x82215BF0;
	sub_82214920(ctx, base);
	// b 0x82215c0c
	goto loc_82215C0C;
loc_82215BF4:
	// lwz r11,-752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -752);
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82214920
	ctx.lr = 0x82215C0C;
	sub_82214920(ctx, base);
loc_82215C0C:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82215aa8
	ctx.lr = 0x82215C28;
	sub_82215AA8(ctx, base);
loc_82215C28:
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

__attribute__((alias("__imp__sub_82215C40"))) PPC_WEAK_FUNC(sub_82215C40);
PPC_FUNC_IMPL(__imp__sub_82215C40) {
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
	// addi r10,r11,23772
	ctx.r10.s64 = ctx.r11.s64 + 23772;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82215430
	ctx.lr = 0x82215C6C;
	sub_82215430(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82215c88
	if (ctx.cr6.eq) goto loc_82215C88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82215C84;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82215C88:
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

__attribute__((alias("__imp__sub_82215CA0"))) PPC_WEAK_FUNC(sub_82215CA0);
PPC_FUNC_IMPL(__imp__sub_82215CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82215CA8;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82182e90
	ctx.lr = 0x82215CBC;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82215CC4;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82215CD0;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82215CD4;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82215CE0;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82215CE8;
	sub_821830F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82184710
	ctx.lr = 0x82215CF8;
	sub_82184710(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82248a40
	ctx.lr = 0x82215D08;
	sub_82248A40(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82215d1c
	if (ctx.cr6.lt) goto loc_82215D1C;
	// bne cr6,0x82215d24
	if (!ctx.cr6.eq) goto loc_82215D24;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82215d20
	goto loc_82215D20;
loc_82215D1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82215D20:
	// bl 0x821830f8
	ctx.lr = 0x82215D24;
	sub_821830F8(ctx, base);
loc_82215D24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82215D2C;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x82215D40;
	sub_8218AA18(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82215D4C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215d68
	if (ctx.cr6.eq) goto loc_82215D68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218abc0
	ctx.lr = 0x82215D60;
	sub_8218ABC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82215d6c
	goto loc_82215D6C;
loc_82215D68:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82215D6C:
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82215D78;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215d94
	if (ctx.cr6.eq) goto loc_82215D94;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82215D8C;
	sub_8218AB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82215d98
	goto loc_82215D98;
loc_82215D94:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82215D98:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218aa18
	ctx.lr = 0x82215DA8;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x82215DB4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215dcc
	if (ctx.cr6.eq) goto loc_82215DCC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x82215DC8;
	sub_8218AB00(ctx, base);
	// b 0x82215dd0
	goto loc_82215DD0;
loc_82215DCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82215DD0:
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82214c48
	ctx.lr = 0x82215DD8;
	sub_82214C48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x82215DE4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215dfc
	if (ctx.cr6.eq) goto loc_82215DFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x82215DF8;
	sub_8218AB00(ctx, base);
	// b 0x82215e00
	goto loc_82215E00;
loc_82215DFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82215E00:
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x82214d20
	ctx.lr = 0x82215E08;
	sub_82214D20(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x82215E14;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215e2c
	if (ctx.cr6.eq) goto loc_82215E2C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x82215E28;
	sub_8218AB00(ctx, base);
	// b 0x82215e30
	goto loc_82215E30;
loc_82215E2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82215E30:
	// bl 0x82214eb8
	ctx.lr = 0x82215E34;
	sub_82214EB8(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82215E40;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215e5c
	if (ctx.cr6.eq) goto loc_82215E5C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218abc0
	ctx.lr = 0x82215E54;
	sub_8218ABC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82215e60
	goto loc_82215E60;
loc_82215E5C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82215E60:
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82215E6C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215e88
	if (ctx.cr6.eq) goto loc_82215E88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82215E80;
	sub_8218AB00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82215e8c
	goto loc_82215E8C;
loc_82215E88:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82215E8C:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r27,48
	ctx.r4.s64 = ctx.r27.s64 + 48;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82215aa8
	ctx.lr = 0x82215EA4;
	sub_82215AA8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82215eb8
	if (ctx.cr6.eq) goto loc_82215EB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x82215EB8;
	sub_82183E40(ctx, base);
loc_82215EB8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a7f0
	ctx.lr = 0x82215EC0;
	sub_8218A7F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x82215EC8;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82215ED4"))) PPC_WEAK_FUNC(sub_82215ED4);
PPC_FUNC_IMPL(__imp__sub_82215ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215ED8"))) PPC_WEAK_FUNC(sub_82215ED8);
PPC_FUNC_IMPL(__imp__sub_82215ED8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x82215EFC;
	sub_8218AA18(ctx, base);
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82215F08;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215f24
	if (ctx.cr6.eq) goto loc_82215F24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218abc0
	ctx.lr = 0x82215F1C;
	sub_8218ABC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82215f28
	goto loc_82215F28;
loc_82215F24:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82215F28:
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82215F34;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215f50
	if (ctx.cr6.eq) goto loc_82215F50;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82215F48;
	sub_8218AB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82215f54
	goto loc_82215F54;
loc_82215F50:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82215F54:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218aa18
	ctx.lr = 0x82215F64;
	sub_8218AA18(ctx, base);
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82215F70;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215f8c
	if (ctx.cr6.eq) goto loc_82215F8C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218abc0
	ctx.lr = 0x82215F84;
	sub_8218ABC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82215f90
	goto loc_82215F90;
loc_82215F8C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82215F90:
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82215F9C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82215fb8
	if (ctx.cr6.eq) goto loc_82215FB8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x82215FB0;
	sub_8218AB00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82215fbc
	goto loc_82215FBC;
loc_82215FB8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82215FBC:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82215aa8
	ctx.lr = 0x82215FD4;
	sub_82215AA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a7f0
	ctx.lr = 0x82215FDC;
	sub_8218A7F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x82215FE4;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82216000"))) PPC_WEAK_FUNC(sub_82216000);
PPC_FUNC_IMPL(__imp__sub_82216000) {
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
	// bl 0x82215a08
	ctx.lr = 0x82216020;
	sub_82215A08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221603c
	if (ctx.cr6.eq) goto loc_8221603C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82216038;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221603C:
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

__attribute__((alias("__imp__sub_82216054"))) PPC_WEAK_FUNC(sub_82216054);
PPC_FUNC_IMPL(__imp__sub_82216054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216058"))) PPC_WEAK_FUNC(sub_82216058);
PPC_FUNC_IMPL(__imp__sub_82216058) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8221609c
	if (ctx.cr6.lt) goto loc_8221609C;
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
loc_8221609C:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r4,2
	ctx.r7.s64 = ctx.r4.s64 + 2;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82215aa8
	ctx.lr = 0x822160C4;
	sub_82215AA8(ctx, base);
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

__attribute__((alias("__imp__sub_822160DC"))) PPC_WEAK_FUNC(sub_822160DC);
PPC_FUNC_IMPL(__imp__sub_822160DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822160E0"))) PPC_WEAK_FUNC(sub_822160E0);
PPC_FUNC_IMPL(__imp__sub_822160E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// b 0x82215b88
	sub_82215B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216108"))) PPC_WEAK_FUNC(sub_82216108);
PPC_FUNC_IMPL(__imp__sub_82216108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221610C"))) PPC_WEAK_FUNC(sub_8221610C);
PPC_FUNC_IMPL(__imp__sub_8221610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216110"))) PPC_WEAK_FUNC(sub_82216110);
PPC_FUNC_IMPL(__imp__sub_82216110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82216118;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822161d4
	if (!ctx.cr6.eq) goto loc_822161D4;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822161d4
	if (ctx.cr6.eq) goto loc_822161D4;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r7,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r7.u64);
	// ld r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r6.u64);
	// lwz r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// beq cr6,0x822161d4
	if (ctx.cr6.eq) goto loc_822161D4;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82183078
	ctx.lr = 0x82216180;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8221618C;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820824b8
	ctx.lr = 0x82216194;
	sub_820824B8(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82080000
	ctx.lr = 0x8221619C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822161ac
	if (ctx.cr6.eq) goto loc_822161AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822154e8
	ctx.lr = 0x822161AC;
	sub_822154E8(ctx, base);
loc_822161AC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822161c4
	if (ctx.cr6.lt) goto loc_822161C4;
	// bne cr6,0x822161cc
	if (!ctx.cr6.eq) goto loc_822161CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822161c8
	goto loc_822161C8;
loc_822161C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822161C8:
	// bl 0x821830f8
	ctx.lr = 0x822161CC;
	sub_821830F8(ctx, base);
loc_822161CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x822161D4;
	sub_821837D0(ctx, base);
loc_822161D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822161E0"))) PPC_WEAK_FUNC(sub_822161E0);
PPC_FUNC_IMPL(__imp__sub_822161E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822161f8
	if (ctx.cr6.lt) goto loc_822161F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822161F8:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x82216110
	sub_82216110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221621C"))) PPC_WEAK_FUNC(sub_8221621C);
PPC_FUNC_IMPL(__imp__sub_8221621C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216220"))) PPC_WEAK_FUNC(sub_82216220);
PPC_FUNC_IMPL(__imp__sub_82216220) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3220
	ctx.r9.s64 = ctx.r10.s64 + -3220;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
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
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216264"))) PPC_WEAK_FUNC(sub_82216264);
PPC_FUNC_IMPL(__imp__sub_82216264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216268"))) PPC_WEAK_FUNC(sub_82216268);
PPC_FUNC_IMPL(__imp__sub_82216268) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221627c
	if (!ctx.cr6.eq) goto loc_8221627C;
loc_82216274:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8221627C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82216274
	if (!ctx.cr6.lt) goto loc_82216274;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822162A0"))) PPC_WEAK_FUNC(sub_822162A0);
PPC_FUNC_IMPL(__imp__sub_822162A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822162b4
	if (!ctx.cr6.eq) goto loc_822162B4;
loc_822162AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822162B4:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822162ac
	if (!ctx.cr6.lt) goto loc_822162AC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822162CC"))) PPC_WEAK_FUNC(sub_822162CC);
PPC_FUNC_IMPL(__imp__sub_822162CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822162D0"))) PPC_WEAK_FUNC(sub_822162D0);
PPC_FUNC_IMPL(__imp__sub_822162D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822162e4
	if (!ctx.cr6.eq) goto loc_822162E4;
loc_822162DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822162E4:
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822162dc
	if (!ctx.cr6.lt) goto loc_822162DC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216304"))) PPC_WEAK_FUNC(sub_82216304);
PPC_FUNC_IMPL(__imp__sub_82216304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216308"))) PPC_WEAK_FUNC(sub_82216308);
PPC_FUNC_IMPL(__imp__sub_82216308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221631c
	if (!ctx.cr6.eq) goto loc_8221631C;
loc_82216314:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8221631C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82216314
	if (!ctx.cr6.lt) goto loc_82216314;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221633C"))) PPC_WEAK_FUNC(sub_8221633C);
PPC_FUNC_IMPL(__imp__sub_8221633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216340"))) PPC_WEAK_FUNC(sub_82216340);
PPC_FUNC_IMPL(__imp__sub_82216340) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221636c
	if (ctx.cr6.eq) goto loc_8221636C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8221636C;
	sub_82183E40(ctx, base);
loc_8221636C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216388
	if (ctx.cr6.eq) goto loc_82216388;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82216388;
	sub_82183E40(ctx, base);
loc_82216388:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822163a0
	if (ctx.cr6.eq) goto loc_822163A0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x822163A0;
	sub_82183E40(ctx, base);
loc_822163A0:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822163b8
	if (ctx.cr6.eq) goto loc_822163B8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x822163B8;
	sub_82183E40(ctx, base);
loc_822163B8:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822163d0
	if (ctx.cr6.eq) goto loc_822163D0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x822163D0;
	sub_82183E40(ctx, base);
loc_822163D0:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_822163EC"))) PPC_WEAK_FUNC(sub_822163EC);
PPC_FUNC_IMPL(__imp__sub_822163EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822163F0"))) PPC_WEAK_FUNC(sub_822163F0);
PPC_FUNC_IMPL(__imp__sub_822163F0) {
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
	// addi r10,r11,-3220
	ctx.r10.s64 = ctx.r11.s64 + -3220;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82216340
	ctx.lr = 0x8221641C;
	sub_82216340(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82216438
	if (ctx.cr6.eq) goto loc_82216438;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82216434;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82216438:
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

__attribute__((alias("__imp__sub_82216450"))) PPC_WEAK_FUNC(sub_82216450);
PPC_FUNC_IMPL(__imp__sub_82216450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82216458;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x8221646C;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82216478;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82216494
	if (!ctx.cr6.eq) goto loc_82216494;
loc_82216480:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x82216488;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82216494:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82216340
	ctx.lr = 0x8221649C;
	sub_82216340(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-3216
	ctx.r4.s64 = ctx.r11.s64 + -3216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847c0
	ctx.lr = 0x822164B0;
	sub_821847C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82216480
	if (!ctx.cr6.eq) goto loc_82216480;
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// bne cr6,0x82216480
	if (!ctx.cr6.eq) goto loc_82216480;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r27,-1
	ctx.r27.s64 = -1;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mullw r30,r10,r5
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82216534
	if (!ctx.cr6.gt) goto loc_82216534;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82216534:
	// bl 0x82080d68
	ctx.lr = 0x82216538;
	sub_82080D68(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x821847a8
	ctx.lr = 0x8221654C;
	sub_821847A8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82216584
	if (ctx.cr6.eq) goto loc_82216584;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_8221655C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// bdnz 0x8221655c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221655C;
loc_82216584:
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// ble cr6,0x822165bc
	if (!ctx.cr6.gt) goto loc_822165BC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_822165BC:
	// bl 0x82183850
	ctx.lr = 0x822165C0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x822165d8
	if (ctx.cr6.eq) goto loc_822165D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x822165D4;
	sub_82183448(ctx, base);
	// b 0x822165e4
	goto loc_822165E4;
loc_822165D8:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x822165E4;
	sub_821845A0(ctx, base);
loc_822165E4:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821847a8
	ctx.lr = 0x822165F8;
	sub_821847A8(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8221665c
	if (!ctx.cr6.gt) goto loc_8221665C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8221660C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221660c
	if (ctx.cr6.lt) goto loc_8221660C;
loc_8221665C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,6553
	ctx.r10.s64 = 429457408;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r28,r10,39321
	ctx.r28.u64 = ctx.r10.u64 | 39321;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bgt cr6,0x822166a4
	if (ctx.cr6.gt) goto loc_822166A4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x822166a8
	goto loc_822166A8;
loc_822166A4:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_822166A8:
	// bl 0x82183850
	ctx.lr = 0x822166AC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x822166c4
	if (ctx.cr6.eq) goto loc_822166C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x822166C0;
	sub_82183448(ctx, base);
	// b 0x822166d0
	goto loc_822166D0;
loc_822166C4:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x822166D0;
	sub_821845A0(ctx, base);
loc_822166D0:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821847a8
	ctx.lr = 0x822166EC;
	sub_821847A8(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82216734
	if (!ctx.cr6.gt) goto loc_82216734;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82216700:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82216700
	if (ctx.cr6.lt) goto loc_82216700;
loc_82216734:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bgt cr6,0x8221677c
	if (ctx.cr6.gt) goto loc_8221677C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82216780
	goto loc_82216780;
loc_8221677C:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82216780:
	// bl 0x82183850
	ctx.lr = 0x82216784;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8221679c
	if (ctx.cr6.eq) goto loc_8221679C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82216798;
	sub_82183448(ctx, base);
	// b 0x822167a8
	goto loc_822167A8;
loc_8221679C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x822167A8;
	sub_821845A0(ctx, base);
loc_822167A8:
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821847a8
	ctx.lr = 0x822167C4;
	sub_821847A8(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8221680c
	if (!ctx.cr6.gt) goto loc_8221680C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822167D8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822167d8
	if (ctx.cr6.lt) goto loc_822167D8;
loc_8221680C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bgt cr6,0x82216854
	if (ctx.cr6.gt) goto loc_82216854;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82216858
	goto loc_82216858;
loc_82216854:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82216858:
	// bl 0x82183850
	ctx.lr = 0x8221685C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82216874
	if (ctx.cr6.eq) goto loc_82216874;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82216870;
	sub_82183448(ctx, base);
	// b 0x82216880
	goto loc_82216880;
loc_82216874:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82216880;
	sub_821845A0(ctx, base);
loc_82216880:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821847a8
	ctx.lr = 0x8221689C;
	sub_821847A8(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x822168e4
	if (!ctx.cr6.gt) goto loc_822168E4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822168B0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822168b0
	if (ctx.cr6.lt) goto loc_822168B0;
loc_822168E4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x822168EC;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822168F8"))) PPC_WEAK_FUNC(sub_822168F8);
PPC_FUNC_IMPL(__imp__sub_822168F8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82217438
	ctx.lr = 0x8221691C;
	sub_82217438(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82219338
	ctx.lr = 0x82216924;
	sub_82219338(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82218ea8
	ctx.lr = 0x8221692C;
	sub_82218EA8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82216940;
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

__attribute__((alias("__imp__sub_82216954"))) PPC_WEAK_FUNC(sub_82216954);
PPC_FUNC_IMPL(__imp__sub_82216954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216958"))) PPC_WEAK_FUNC(sub_82216958);
PPC_FUNC_IMPL(__imp__sub_82216958) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82216fb8
	sub_82216FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216960"))) PPC_WEAK_FUNC(sub_82216960);
PPC_FUNC_IMPL(__imp__sub_82216960) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82219a00
	ctx.lr = 0x8221697C;
	sub_82219A00(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82219a08
	ctx.lr = 0x82216984;
	sub_82219A08(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82219908
	ctx.lr = 0x8221698C;
	sub_82219908(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_822169A0"))) PPC_WEAK_FUNC(sub_822169A0);
PPC_FUNC_IMPL(__imp__sub_822169A0) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82219a10
	ctx.lr = 0x822169BC;
	sub_82219A10(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82219a18
	ctx.lr = 0x822169C4;
	sub_82219A18(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82219910
	ctx.lr = 0x822169CC;
	sub_82219910(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_822169E0"))) PPC_WEAK_FUNC(sub_822169E0);
PPC_FUNC_IMPL(__imp__sub_822169E0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82217370
	ctx.lr = 0x822169FC;
	sub_82217370(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822173b8
	ctx.lr = 0x82216A04;
	sub_822173B8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82216A18"))) PPC_WEAK_FUNC(sub_82216A18);
PPC_FUNC_IMPL(__imp__sub_82216A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216A24"))) PPC_WEAK_FUNC(sub_82216A24);
PPC_FUNC_IMPL(__imp__sub_82216A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216A28"))) PPC_WEAK_FUNC(sub_82216A28);
PPC_FUNC_IMPL(__imp__sub_82216A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
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

__attribute__((alias("__imp__sub_82216A3C"))) PPC_WEAK_FUNC(sub_82216A3C);
PPC_FUNC_IMPL(__imp__sub_82216A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216A40"))) PPC_WEAK_FUNC(sub_82216A40);
PPC_FUNC_IMPL(__imp__sub_82216A40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82218d28
	sub_82218D28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216A48"))) PPC_WEAK_FUNC(sub_82216A48);
PPC_FUNC_IMPL(__imp__sub_82216A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82216A50;
	sub_82248788(ctx, base);
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
	// bl 0x82183850
	ctx.lr = 0x82216A64;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82216a7c
	if (ctx.cr6.eq) goto loc_82216A7C;
	// li r3,560
	ctx.r3.s64 = 560;
	// bl 0x82183448
	ctx.lr = 0x82216A78;
	sub_82183448(ctx, base);
	// b 0x82216a84
	goto loc_82216A84;
loc_82216A7C:
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x821845a0
	ctx.lr = 0x82216A84;
	sub_821845A0(ctx, base);
loc_82216A84:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216aa0
	if (ctx.cr6.eq) goto loc_82216AA0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82217c40
	ctx.lr = 0x82216A9C;
	sub_82217C40(ctx, base);
	// b 0x82216aa4
	goto loc_82216AA4;
loc_82216AA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82216AA4:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82216AAC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82216ac4
	if (ctx.cr6.eq) goto loc_82216AC4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x82216AC0;
	sub_82183448(ctx, base);
	// b 0x82216acc
	goto loc_82216ACC;
loc_82216AC4:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82216ACC;
	sub_821845A0(ctx, base);
loc_82216ACC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216adc
	if (ctx.cr6.eq) goto loc_82216ADC;
	// bl 0x822196f0
	ctx.lr = 0x82216AD8;
	sub_822196F0(ctx, base);
	// b 0x82216ae0
	goto loc_82216AE0;
loc_82216ADC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82216AE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// bl 0x82183850
	ctx.lr = 0x82216AFC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82216b14
	if (ctx.cr6.eq) goto loc_82216B14;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x82216B10;
	sub_82183448(ctx, base);
	// b 0x82216b1c
	goto loc_82216B1C;
loc_82216B14:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82216B1C;
	sub_821845A0(ctx, base);
loc_82216B1C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216b30
	if (ctx.cr6.eq) goto loc_82216B30;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82219d80
	ctx.lr = 0x82216B2C;
	sub_82219D80(ctx, base);
	// b 0x82216b34
	goto loc_82216B34;
loc_82216B30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82216B34:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82216B3C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82216b54
	if (ctx.cr6.eq) goto loc_82216B54;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x82216B50;
	sub_82183448(ctx, base);
	// b 0x82216b5c
	goto loc_82216B5C;
loc_82216B54:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82216B5C;
	sub_821845A0(ctx, base);
loc_82216B5C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216b88
	if (ctx.cr6.eq) goto loc_82216B88;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,-752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x82218d68
	ctx.lr = 0x82216B84;
	sub_82218D68(ctx, base);
	// b 0x82216b8c
	goto loc_82216B8C;
loc_82216B88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82216B8C:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82216B94;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82216bac
	if (ctx.cr6.eq) goto loc_82216BAC;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82183448
	ctx.lr = 0x82216BA8;
	sub_82183448(ctx, base);
	// b 0x82216bb4
	goto loc_82216BB4;
loc_82216BAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82216BB4;
	sub_821845A0(ctx, base);
loc_82216BB4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216bc4
	if (ctx.cr6.eq) goto loc_82216BC4;
	// bl 0x82219a90
	ctx.lr = 0x82216BC0;
	sub_82219A90(ctx, base);
	// b 0x82216bc8
	goto loc_82216BC8;
loc_82216BC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82216BC8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82216BD8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82216bf0
	if (ctx.cr6.eq) goto loc_82216BF0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x82216BEC;
	sub_82183448(ctx, base);
	// b 0x82216bf8
	goto loc_82216BF8;
loc_82216BF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82216BF8;
	sub_821845A0(ctx, base);
loc_82216BF8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216c0c
	if (ctx.cr6.eq) goto loc_82216C0C;
	// bl 0x82219938
	ctx.lr = 0x82216C04;
	sub_82219938(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82216c10
	goto loc_82216C10;
loc_82216C0C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82216C10:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82216C30"))) PPC_WEAK_FUNC(sub_82216C30);
PPC_FUNC_IMPL(__imp__sub_82216C30) {
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
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,1996(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1996);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82216c70
	if (ctx.cr6.lt) goto loc_82216C70;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x82216c70
	if (!ctx.cr6.lt) goto loc_82216C70;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82218bc8
	ctx.lr = 0x82216C68;
	sub_82218BC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82216C70:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82216C84"))) PPC_WEAK_FUNC(sub_82216C84);
PPC_FUNC_IMPL(__imp__sub_82216C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216C88"))) PPC_WEAK_FUNC(sub_82216C88);
PPC_FUNC_IMPL(__imp__sub_82216C88) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82216dc4
	if (ctx.cr6.eq) goto loc_82216DC4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82216ccc
	if (ctx.cr6.eq) goto loc_82216CCC;
	// lwz r11,1728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1728);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82216cd8
	if (!ctx.cr6.eq) goto loc_82216CD8;
loc_82216CCC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,1284(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// bl 0x82217030
	ctx.lr = 0x82216CD8;
	sub_82217030(ctx, base);
loc_82216CD8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82217d30
	ctx.lr = 0x82216CE0;
	sub_82217D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82216dc4
	if (ctx.cr6.eq) goto loc_82216DC4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,536(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82216d68
	if (ctx.cr6.eq) goto loc_82216D68;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82216d38
	if (ctx.cr6.lt) goto loc_82216D38;
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// bge cr6,0x82216d38
	if (!ctx.cr6.lt) goto loc_82216D38;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,-5052
	ctx.r7.s64 = ctx.r11.s64 + -5052;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216d38
	if (ctx.cr6.eq) goto loc_82216D38;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82216d38
	if (!ctx.cr6.eq) goto loc_82216D38;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82216D38:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82216d4c
	if (ctx.cr6.eq) goto loc_82216D4C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82216D4C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82216d5c
	if (ctx.cr6.eq) goto loc_82216D5C;
	// bl 0x82217188
	ctx.lr = 0x82216D58;
	sub_82217188(ctx, base);
	// b 0x82216d68
	goto loc_82216D68;
loc_82216D5C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82216d68
	if (!ctx.cr6.eq) goto loc_82216D68;
	// bl 0x82217030
	ctx.lr = 0x82216D68;
	sub_82217030(ctx, base);
loc_82216D68:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82217ed8
	ctx.lr = 0x82216D74;
	sub_82217ED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82216ed8
	ctx.lr = 0x82216D80;
	sub_82216ED8(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82217ed8
	ctx.lr = 0x82216D8C;
	sub_82217ED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x82216ed8
	ctx.lr = 0x82216D98;
	sub_82216ED8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82218a38
	ctx.lr = 0x82216DA0;
	sub_82218A38(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82216dc4
	if (ctx.cr6.lt) goto loc_82216DC4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82218ee0
	ctx.lr = 0x82216DBC;
	sub_82218EE0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8209eda0
	ctx.lr = 0x82216DC4;
	sub_8209EDA0(ctx, base);
loc_82216DC4:
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

__attribute__((alias("__imp__sub_82216DDC"))) PPC_WEAK_FUNC(sub_82216DDC);
PPC_FUNC_IMPL(__imp__sub_82216DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216DE0"))) PPC_WEAK_FUNC(sub_82216DE0);
PPC_FUNC_IMPL(__imp__sub_82216DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82216DE8;
	sub_8224878C(ctx, base);
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
	// beq cr6,0x82216e10
	if (ctx.cr6.eq) goto loc_82216E10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822195e8
	ctx.lr = 0x82216E04;
	sub_822195E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82216E10;
	sub_82183E40(ctx, base);
loc_82216E10:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82216e38
	if (ctx.cr6.eq) goto loc_82216E38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82216fa0
	ctx.lr = 0x82216E2C;
	sub_82216FA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82216E38;
	sub_82183E40(ctx, base);
loc_82216E38:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216e5c
	if (ctx.cr6.eq) goto loc_82216E5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82216E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82216E5C:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82216e80
	if (ctx.cr6.eq) goto loc_82216E80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82219b38
	ctx.lr = 0x82216E74;
	sub_82219B38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82216E80;
	sub_82183E40(ctx, base);
loc_82216E80:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82216ea4
	if (ctx.cr6.eq) goto loc_82216EA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82216EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82216EA4:
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82216ec8
	if (ctx.cr6.eq) goto loc_82216EC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822199a8
	ctx.lr = 0x82216EBC;
	sub_822199A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82216EC8;
	sub_82183E40(ctx, base);
loc_82216EC8:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82216ED4"))) PPC_WEAK_FUNC(sub_82216ED4);
PPC_FUNC_IMPL(__imp__sub_82216ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216ED8"))) PPC_WEAK_FUNC(sub_82216ED8);
PPC_FUNC_IMPL(__imp__sub_82216ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82216EE0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82216f94
	if (ctx.cr6.lt) goto loc_82216F94;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8209c0d0
	ctx.lr = 0x82216EFC;
	sub_8209C0D0(ctx, base);
	// divw r10,r3,r29
	ctx.r10.s32 = ctx.r3.s32 / ctx.r29.s32;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divw r11,r30,r29
	ctx.r11.s32 = ctx.r30.s32 / ctx.r29.s32;
	// mullw r8,r10,r29
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// subf r27,r9,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r9.s64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// subf r6,r7,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r7.s64;
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// andc r10,r29,r4
	ctx.r10.u64 = ctx.r29.u64 & ~ctx.r4.u64;
	// andc r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// twllei r29,0
	// twllei r29,0
	// twlgei r10,-1
	// twlgei r9,-1
	// bl 0x8209c0d0
	ctx.lr = 0x82216F54;
	sub_8209C0D0(ctx, base);
	// rlwinm r7,r28,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r27,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r27.s64;
	// twllei r7,0
	// divw r6,r8,r7
	ctx.r6.s32 = ctx.r8.s32 / ctx.r7.s32;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r4,r6,r7
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r3,r4,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfc r10,r28,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r28.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r28.s64;
	// eqv r9,r28,r3
	// andc r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// twlgei r11,-1
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
loc_82216F94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82216F9C"))) PPC_WEAK_FUNC(sub_82216F9C);
PPC_FUNC_IMPL(__imp__sub_82216F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216FA0"))) PPC_WEAK_FUNC(sub_82216FA0);
PPC_FUNC_IMPL(__imp__sub_82216FA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// addi r9,r10,-3204
	ctx.r9.s64 = ctx.r10.s64 + -3204;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// b 0x821857f0
	sub_821857F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216FB8"))) PPC_WEAK_FUNC(sub_82216FB8);
PPC_FUNC_IMPL(__imp__sub_82216FB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216FC4"))) PPC_WEAK_FUNC(sub_82216FC4);
PPC_FUNC_IMPL(__imp__sub_82216FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82216FC8"))) PPC_WEAK_FUNC(sub_82216FC8);
PPC_FUNC_IMPL(__imp__sub_82216FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x820c66e8
	sub_820C66E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216FD8"))) PPC_WEAK_FUNC(sub_82216FD8);
PPC_FUNC_IMPL(__imp__sub_82216FD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216FDC"))) PPC_WEAK_FUNC(sub_82216FDC);
PPC_FUNC_IMPL(__imp__sub_82216FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

