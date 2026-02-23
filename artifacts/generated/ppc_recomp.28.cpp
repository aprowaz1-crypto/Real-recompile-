#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82169404"))) PPC_WEAK_FUNC(sub_82169404);
PPC_FUNC_IMPL(__imp__sub_82169404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169408"))) PPC_WEAK_FUNC(sub_82169408);
PPC_FUNC_IMPL(__imp__sub_82169408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82169410;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821694e0
	if (ctx.cr6.eq) goto loc_821694E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x82169430;
	sub_821ADD20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x8216943C;
	sub_821ADDC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x8216944C;
	sub_821AD498(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82169458;
	sub_821AD600(ctx, base);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bge cr6,0x821694c8
	if (!ctx.cr6.lt) goto loc_821694C8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169490
	if (ctx.cr6.eq) goto loc_82169490;
	// bl 0x8223a9f8
	ctx.lr = 0x82169474;
	sub_8223A9F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82169490
	if (ctx.cr6.eq) goto loc_82169490;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821694c8
	if (!ctx.cr6.eq) goto loc_821694C8;
	// bl 0x8223a9f8
	ctx.lr = 0x82169488;
	sub_8223A9F8(ctx, base);
	// bl 0x8223b2f8
	ctx.lr = 0x8216948C;
	sub_8223B2F8(ctx, base);
	// b 0x821694a0
	goto loc_821694A0;
loc_82169490:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5052
	ctx.r9.s64 = ctx.r11.s64 + -5052;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_821694A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821694c8
	if (ctx.cr6.eq) goto loc_821694C8;
	// lwz r11,1240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821694c8
	if (ctx.cr6.eq) goto loc_821694C8;
	// lwz r11,1232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1232);
	// addi r3,r3,1232
	ctx.r3.s64 = ctx.r3.s64 + 1232;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821694C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821694C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x821694D4;
	sub_821AD498(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x821694E0;
	sub_821AD600(ctx, base);
loc_821694E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821694E8"))) PPC_WEAK_FUNC(sub_821694E8);
PPC_FUNC_IMPL(__imp__sub_821694E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f13,-32384(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32384);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lfs f12,9852(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9852);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lfs f11,8328(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8328);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stfs f11,104(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821695DC"))) PPC_WEAK_FUNC(sub_821695DC);
PPC_FUNC_IMPL(__imp__sub_821695DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821695E0"))) PPC_WEAK_FUNC(sub_821695E0);
PPC_FUNC_IMPL(__imp__sub_821695E0) {
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
	// bl 0x82169288
	ctx.lr = 0x82169600;
	sub_82169288(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216961c
	if (ctx.cr6.eq) goto loc_8216961C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82169618;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216961C:
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

__attribute__((alias("__imp__sub_82169634"))) PPC_WEAK_FUNC(sub_82169634);
PPC_FUNC_IMPL(__imp__sub_82169634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169638"))) PPC_WEAK_FUNC(sub_82169638);
PPC_FUNC_IMPL(__imp__sub_82169638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82169640;
	sub_82248764(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x82169654;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8216965C;
	sub_82183078(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82169668;
	sub_821837D0(ctx, base);
	// lis r20,-32178
	ctx.r20.s64 = -2108817408;
	// lwz r29,-19048(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + -19048);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82169e44
	if (ctx.cr6.eq) goto loc_82169E44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a2548
	ctx.lr = 0x82169680;
	sub_821A2548(ctx, base);
	// lwz r4,300(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// lwz r3,304(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// li r31,0
	ctx.r31.s64 = 0;
	// srawi r29,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 3;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r21,80
	ctx.r21.s64 = 80;
	// addze r29,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r29.s64 = temp.s64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// srawi r28,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r3.s32 >> 3;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// li r22,5120
	ctx.r22.s64 = 5120;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r29,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r29.s64 = temp.s64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r29,r29,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subf r11,r29,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r29.s64;
	// srawi r29,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 1;
	// stw r4,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r4.u32);
	// subf r4,r11,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addze r29,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r29.s64 = temp.s64;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stw r4,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r4.u32);
	// addi r11,r29,79
	ctx.r11.s64 = ctx.r29.s64 + 79;
	// addze r28,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r28.s64 = temp.s64;
	// divwu r11,r11,r21
	ctx.r11.u32 = ctx.r11.u32 / ctx.r21.u32;
	// addi r3,r28,15
	ctx.r3.s64 = ctx.r28.s64 + 15;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r3,0,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r26,r1,292
	ctx.r26.s64 = ctx.r1.s64 + 292;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,6184
	ctx.r9.s64 = 405274624;
	// mullw r11,r25,r11
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r27,r9,390
	ctx.r27.u64 = ctx.r9.u64 | 390;
	// divwu r11,r11,r22
	ctx.r11.u32 = ctx.r11.u32 / ctx.r22.u32;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226b2c0
	ctx.lr = 0x82169750;
	sub_8226B2C0(ctx, base);
	// stw r3,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r3.u32);
	// lis r10,11552
	ctx.r10.s64 = 757071872;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r24,r10,406
	ctx.r24.u64 = ctx.r10.u64 | 406;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8226b2c0
	ctx.lr = 0x82169780;
	sub_8226B2C0(ctx, base);
	// stw r3,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r26,r30,168
	ctx.r26.s64 = ctx.r30.s64 + 168;
	// bl 0x8226b3e0
	ctx.lr = 0x821697A0;
	sub_8226B3E0(ctx, base);
	// stw r3,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r3.u32);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226b3e0
	ctx.lr = 0x821697BC;
	sub_8226B3E0(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9ce8
	ctx.lr = 0x821697D0;
	sub_821A9CE8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f30,2144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821a9fe8
	ctx.lr = 0x821697F8;
	sub_821A9FE8(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,160(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f31,2148(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821aa098
	ctx.lr = 0x82169830;
	sub_821AA098(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,164(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821aa098
	ctx.lr = 0x82169860;
	sub_821AA098(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9c68
	ctx.lr = 0x82169868;
	sub_821A9C68(ctx, base);
	// lwz r11,-19048(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -19048);
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// addi r25,r30,700
	ctx.r25.s64 = ctx.r30.s64 + 700;
	// li r26,8
	ctx.r26.s64 = 8;
	// stw r31,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r31.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r29,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r29.s64 = temp.s64;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r7,r29,79
	ctx.r7.s64 = ctx.r29.s64 + 79;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// addze r28,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r28.s64 = temp.s64;
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// divwu r11,r7,r21
	ctx.r11.u32 = ctx.r7.u32 / ctx.r21.u32;
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// addi r6,r28,15
	ctx.r6.s64 = ctx.r28.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r6,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r10,r5,r11
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r8,r9,r22
	ctx.r8.u32 = ctx.r9.u32 / ctx.r22.u32;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
loc_821698E0:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226b2c0
	ctx.lr = 0x82169904;
	sub_8226B2C0(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwu r3,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r25.u32 = ea;
	// bne 0x821698e0
	if (!ctx.cr0.eq) goto loc_821698E0;
	// addi r23,r30,736
	ctx.r23.s64 = ctx.r30.s64 + 736;
	// li r26,8
	ctx.r26.s64 = 8;
	// addi r25,r23,-4
	ctx.r25.s64 = ctx.r23.s64 + -4;
loc_8216991C:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226b2c0
	ctx.lr = 0x82169940;
	sub_8226B2C0(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwu r3,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r25.u32 = ea;
	// bne 0x8216991c
	if (!ctx.cr0.eq) goto loc_8216991C;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r26,r30,768
	ctx.r26.s64 = ctx.r30.s64 + 768;
	// bl 0x8226b3e0
	ctx.lr = 0x82169968;
	sub_8226B3E0(ctx, base);
	// stw r3,768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 768, ctx.r3.u32);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226b3e0
	ctx.lr = 0x82169984;
	sub_8226B3E0(ctx, base);
	// stw r3,772(r30)
	PPC_STORE_U32(ctx.r30.u32 + 772, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9ce8
	ctx.lr = 0x82169998;
	sub_821A9CE8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9fe8
	ctx.lr = 0x821699B8;
	sub_821A9FE8(ctx, base);
	// addi r29,r23,-4
	ctx.r29.s64 = ctx.r23.s64 + -4;
	// li r28,8
	ctx.r28.s64 = 8;
loc_821699C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,-28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821aa098
	ctx.lr = 0x821699F0;
	sub_821AA098(ctx, base);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzu r6,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821aa098
	ctx.lr = 0x82169A20;
	sub_821AA098(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x821699c0
	if (!ctx.cr0.eq) goto loc_821699C0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9c68
	ctx.lr = 0x82169A30;
	sub_821A9C68(ctx, base);
	// lwz r11,-19048(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -19048);
	// stw r31,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r31.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmpw cr6,r11,r11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r11.s32, ctx.xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// blt cr6,0x82169a5c
	if (ctx.cr6.lt) goto loc_82169A5C;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82169A5C:
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmpw cr6,r11,r11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r11.s32, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// blt cr6,0x82169a84
	if (ctx.cr6.lt) goto loc_82169A84;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82169A84:
	// addi r10,r28,79
	ctx.r10.s64 = ctx.r28.s64 + 79;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r1,276
	ctx.r9.s64 = ctx.r1.s64 + 276;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// divwu r11,r10,r21
	ctx.r11.u32 = ctx.r10.u32 / ctx.r21.u32;
	// addi r8,r29,15
	ctx.r8.s64 = ctx.r29.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// rlwinm r3,r6,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// mullw r11,r7,r3
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// divwu r9,r10,r22
	ctx.r9.u32 = ctx.r10.u32 / ctx.r22.u32;
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// stw r31,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r31.u32);
	// stw r31,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r31.u32);
	// bl 0x822aa648
	ctx.lr = 0x82169AE4;
	sub_822AA648(ctx, base);
	// addi r23,r30,784
	ctx.r23.s64 = ctx.r30.s64 + 784;
	// stw r28,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r28.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r29,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r29.u32);
	// addi r25,r23,-4
	ctx.r25.s64 = ctx.r23.s64 + -4;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r27,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r27.u32);
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
loc_82169B04:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226b2c0
	ctx.lr = 0x82169B28;
	sub_8226B2C0(ctx, base);
	// stw r3,-4(r25)
	PPC_STORE_U32(ctx.r25.u32 + -4, ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226b2c0
	ctx.lr = 0x82169B50;
	sub_8226B2C0(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwu r3,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r25.u32 = ea;
	// bne 0x82169b04
	if (!ctx.cr0.eq) goto loc_82169B04;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r26,r30,792
	ctx.r26.s64 = ctx.r30.s64 + 792;
	// bl 0x8226b3e0
	ctx.lr = 0x82169B78;
	sub_8226B3E0(ctx, base);
	// stw r3,792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 792, ctx.r3.u32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226b3e0
	ctx.lr = 0x82169B94;
	sub_8226B3E0(ctx, base);
	// stw r3,796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 796, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9ce8
	ctx.lr = 0x82169BA8;
	sub_821A9CE8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821a9fe8
	ctx.lr = 0x82169BC8;
	sub_821A9FE8(ctx, base);
	// addi r29,r23,-4
	ctx.r29.s64 = ctx.r23.s64 + -4;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82169BD0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821aa098
	ctx.lr = 0x82169C00;
	sub_821AA098(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzu r6,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821aa098
	ctx.lr = 0x82169C30;
	sub_821AA098(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82169bd0
	if (!ctx.cr0.eq) goto loc_82169BD0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9c68
	ctx.lr = 0x82169C40;
	sub_821A9C68(ctx, base);
	// lwz r11,-19048(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -19048);
	// addi r10,r1,260
	ctx.r10.s64 = ctx.r1.s64 + 260;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r31,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r31.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addze r28,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r28.s64 = temp.s64;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// addze r26,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r26.s64 = temp.s64;
	// bl 0x822aa648
	ctx.lr = 0x82169C80;
	sub_822AA648(ctx, base);
	// addi r24,r30,800
	ctx.r24.s64 = ctx.r30.s64 + 800;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r25,r24,-4
	ctx.r25.s64 = ctx.r24.s64 + -4;
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
loc_82169CA0:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226b2c0
	ctx.lr = 0x82169CC4;
	sub_8226B2C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r3,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r25.u32 = ea;
	// bne 0x82169ca0
	if (!ctx.cr0.eq) goto loc_82169CA0;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r30,808
	ctx.r29.s64 = ctx.r30.s64 + 808;
	// bl 0x8226b3e0
	ctx.lr = 0x82169CEC;
	sub_8226B3E0(ctx, base);
	// stw r3,808(r30)
	PPC_STORE_U32(ctx.r30.u32 + 808, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821a9ce8
	ctx.lr = 0x82169D00;
	sub_821A9CE8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821a9fe8
	ctx.lr = 0x82169D20;
	sub_821A9FE8(ctx, base);
	// addi r28,r24,-4
	ctx.r28.s64 = ctx.r24.s64 + -4;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82169D28:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzu r6,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821aa098
	ctx.lr = 0x82169D58;
	sub_821AA098(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82169d28
	if (!ctx.cr0.eq) goto loc_82169D28;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a9c68
	ctx.lr = 0x82169D68;
	sub_821A9C68(ctx, base);
	// lwz r11,-19048(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -19048);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r31,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r31.u32);
	// lwz r29,-19020(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19020);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82169e3c
	if (ctx.cr6.eq) goto loc_82169E3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r28,r11,-15536
	ctx.r28.s64 = ctx.r11.s64 + -15536;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x821a78b0
	ctx.lr = 0x82169D98;
	sub_821A78B0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 828, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 832, ctx.r9.u32);
	// lwz r11,-19224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19224);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82169e04
	if (!ctx.cr6.lt) goto loc_82169E04;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82169e04
	if (!ctx.cr6.eq) goto loc_82169E04;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82169E04:
	// stw r31,832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 832, ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82169e3c
	if (!ctx.cr6.eq) goto loc_82169E3C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a8180
	ctx.lr = 0x82169E1C;
	sub_821A8180(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a78b0
	ctx.lr = 0x82169E2C;
	sub_821A78B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 828, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 832, ctx.r10.u32);
loc_82169E3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_82169E44:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821837d0
	ctx.lr = 0x82169E4C;
	sub_821837D0(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82169E5C"))) PPC_WEAK_FUNC(sub_82169E5C);
PPC_FUNC_IMPL(__imp__sub_82169E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169E60"))) PPC_WEAK_FUNC(sub_82169E60);
PPC_FUNC_IMPL(__imp__sub_82169E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,14524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14524);
	// b 0x82169638
	sub_82169638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82169E6C"))) PPC_WEAK_FUNC(sub_82169E6C);
PPC_FUNC_IMPL(__imp__sub_82169E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82169E70"))) PPC_WEAK_FUNC(sub_82169E70);
PPC_FUNC_IMPL(__imp__sub_82169E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82169E78;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-14444
	ctx.r10.s64 = ctx.r11.s64 + -14444;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821859a0
	ctx.lr = 0x82169EA4;
	sub_821859A0(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82185740
	ctx.lr = 0x82169EB4;
	sub_82185740(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r6,r9,-23464
	ctx.r6.s64 = ctx.r9.s64 + -23464;
	// addi r5,r8,-23472
	ctx.r5.s64 = ctx.r8.s64 + -23472;
	// addi r4,r7,-23480
	ctx.r4.s64 = ctx.r7.s64 + -23480;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// bl 0x821694e8
	ctx.lr = 0x82169EE0;
	sub_821694E8(ctx, base);
	// addi r28,r31,176
	ctx.r28.s64 = ctx.r31.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821d0d50
	ctx.lr = 0x82169EEC;
	sub_821D0D50(ctx, base);
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r3,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r11.u32);
	// lwz r10,812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r9.u32);
	// stw r30,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r30.u32);
	// lwz r8,820(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// rlwinm r7,r8,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// stw r7,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r7.u32);
	// lwz r6,820(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r5.u32);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// lwz r4,828(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// rlwinm r3,r4,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF0000;
	// stw r3,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r3.u32);
	// lwz r11,828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// stw r30,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r30.u32);
	// lwsync 
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r31,704
	ctx.r11.s64 = ctx.r31.s64 + 704;
	// stw r31,14524(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14524, ctx.r31.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
loc_82169F80:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82169f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82169F80;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,736
	ctx.r11.s64 = ctx.r31.s64 + 736;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82169F9C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82169f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82169F9C;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// addi r11,r31,780
	ctx.r11.s64 = ctx.r31.s64 + 780;
	// stw r30,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82169FB8:
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82169fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82169FB8;
	// stw r30,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r30,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r30.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r30.u32);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// addi r4,r9,-24992
	ctx.r4.s64 = ctx.r9.s64 + -24992;
	// addi r11,r31,800
	ctx.r11.s64 = ctx.r31.s64 + 800;
	// lwz r3,-7484(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7484);
	// bl 0x821adfc0
	ctx.lr = 0x82169FF4;
	sub_821ADFC0(ctx, base);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lwz r29,-19020(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19020);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8216a094
	if (ctx.cr6.eq) goto loc_8216A094;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23452
	ctx.r4.s64 = ctx.r11.s64 + -23452;
	// bl 0x8218a540
	ctx.lr = 0x8216A014;
	sub_8218A540(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x8216A024;
	sub_821A7758(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r9,-23460
	ctx.r4.s64 = ctx.r9.s64 + -23460;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r7.u32);
	// bl 0x8218a540
	ctx.lr = 0x8216A048;
	sub_8218A540(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x8216A058;
	sub_821A7758(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r5,-9952
	ctx.r4.s64 = ctx.r5.s64 + -9952;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r10.u32);
	// bl 0x821d0f40
	ctx.lr = 0x8216A07C;
	sub_821D0F40(ctx, base);
	// stw r30,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-19048(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19048);
	// bl 0x821a2c40
	ctx.lr = 0x8216A094;
	sub_821A2C40(ctx, base);
loc_8216A094:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8216A0A0"))) PPC_WEAK_FUNC(sub_8216A0A0);
PPC_FUNC_IMPL(__imp__sub_8216A0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8216A0A8;
	sub_8224877C(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216a2a0
	if (ctx.cr6.eq) goto loc_8216A2A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x8216A0D4;
	sub_821ADD20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x8216A0E0;
	sub_821ADDC0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x8216A0F0;
	sub_821AD498(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x8216A0FC;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad788
	ctx.lr = 0x8216A108;
	sub_821AD788(ctx, base);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
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
	// lfs f13,8064(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8064);
	ctx.f13.f64 = double(temp.f32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f0,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f12,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8216A178:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8216a178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216A178;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f11,8060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8060);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8216A1B8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216a1b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216A1B8;
	// li r9,6
	ctx.r9.s64 = 6;
	// fsubs f11,f9,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8216A1F0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216a1f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216A1F0;
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8216A224:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216a224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216A224;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r9,828(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 828);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r11,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// bl 0x821a8848
	ctx.lr = 0x8216A264;
	sub_821A8848(ctx, base);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821dc888
	ctx.lr = 0x8216A27C;
	sub_821DC888(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad788
	ctx.lr = 0x8216A288;
	sub_821AD788(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x8216A294;
	sub_821AD498(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x8216A2A0;
	sub_821AD600(ctx, base);
loc_8216A2A0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8216A2A8"))) PPC_WEAK_FUNC(sub_8216A2A8);
PPC_FUNC_IMPL(__imp__sub_8216A2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8216A2B0;
	sub_82248750(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822498f0
	ctx.lr = 0x8216A2B8;
	sub_822498F0(ctx, base);
	// stwu r1,-1408(r1)
	ea = -1408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8216be40
	if (ctx.cr6.eq) goto loc_8216BE40;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8216be40
	if (ctx.cr6.eq) goto loc_8216BE40;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r3,-19048(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// beq cr6,0x8216be40
	if (ctx.cr6.eq) goto loc_8216BE40;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r10,-7488(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7488);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// beq cr6,0x8216be40
	if (ctx.cr6.eq) goto loc_8216BE40;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// bl 0x821a2ba0
	ctx.lr = 0x8216A318;
	sub_821A2BA0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821adc58
	ctx.lr = 0x8216A320;
	sub_821ADC58(ctx, base);
	// stw r3,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r3.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821adc30
	ctx.lr = 0x8216A32C;
	sub_821ADC30(ctx, base);
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821adca8
	ctx.lr = 0x8216A338;
	sub_821ADCA8(ctx, base);
	// stw r3,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821ad240
	ctx.lr = 0x8216A348;
	sub_821AD240(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x8216A354;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821ad288
	ctx.lr = 0x8216A360;
	sub_821AD288(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,13532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13532);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfd f13,-23336(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23336);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lfs f17,7952(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7952);
	ctx.f17.f64 = double(temp.f32);
	// lfs f20,8340(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8340);
	ctx.f20.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f14,-23340(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23340);
	ctx.f14.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f15,9852(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9852);
	ctx.f15.f64 = double(temp.f32);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lfs f30,8060(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8060);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f18,2148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2148);
	ctx.f18.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f28,30932(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 30932);
	ctx.f28.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f31,-31244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -31244);
	ctx.f31.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f19,2144(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2144);
	ctx.f19.f64 = double(temp.f32);
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// lis r5,-32180
	ctx.r5.s64 = -2108948480;
	// stfd f13,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.f13.u64);
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r22,r31,772
	ctx.r22.s64 = ctx.r31.s64 + 772;
	// addi r11,r11,-23348
	ctx.r11.s64 = ctx.r11.s64 + -23348;
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// addi r10,r10,-23372
	ctx.r10.s64 = ctx.r10.s64 + -23372;
	// stw r22,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r22.u32);
	// addi r9,r9,-23396
	ctx.r9.s64 = ctx.r9.s64 + -23396;
	// stw r20,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r20.u32);
	// addi r8,r8,-23416
	ctx.r8.s64 = ctx.r8.s64 + -23416;
	// stw r11,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// addi r7,r7,-23440
	ctx.r7.s64 = ctx.r7.s64 + -23440;
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// addi r17,r6,15072
	ctx.r17.s64 = ctx.r6.s64 + 15072;
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// addi r30,r5,14544
	ctx.r30.s64 = ctx.r5.s64 + 14544;
	// stw r8,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r8.u32);
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// stw r17,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r17.u32);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// b 0x8216a438
	goto loc_8216A438;
loc_8216A434:
	// lwz r30,340(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
loc_8216A438:
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216a450
	if (ctx.cr6.eq) goto loc_8216A450;
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8216bdd8
	if (!ctx.cr6.eq) goto loc_8216BDD8;
loc_8216A450:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// addi r10,r1,552
	ctx.r10.s64 = ctx.r1.s64 + 552;
	// add r11,r19,r11
	ctx.r11.u64 = ctx.r19.u64 + ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8216A468:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8216a468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216A468;
	// addi r5,r31,164
	ctx.r5.s64 = ctx.r31.s64 + 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a9ce8
	ctx.lr = 0x8216A484;
	sub_821A9CE8(ctx, base);
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a9e08
	ctx.lr = 0x8216A490;
	sub_821A9E08(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f19.f64;
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a9fe8
	ctx.lr = 0x8216A4B0;
	sub_821A9FE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// li r4,238
	ctx.r4.s64 = 238;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a90a8
	ctx.lr = 0x8216A4C4;
	sub_821A90A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// li r4,239
	ctx.r4.s64 = 239;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a90a8
	ctx.lr = 0x8216A4D8;
	sub_821A90A8(ctx, base);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82169408
	ctx.lr = 0x8216A4E4;
	sub_82169408(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f18.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821aa098
	ctx.lr = 0x8216A514;
	sub_821AA098(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,160(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f18.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821aa098
	ctx.lr = 0x8216A544;
	sub_821AA098(ctx, base);
	// addi r5,r31,764
	ctx.r5.s64 = ctx.r31.s64 + 764;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a9ce8
	ctx.lr = 0x8216A554;
	sub_821A9CE8(ctx, base);
	// addi r4,r31,768
	ctx.r4.s64 = ctx.r31.s64 + 768;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a9e08
	ctx.lr = 0x8216A560;
	sub_821A9E08(ctx, base);
	// lwz r11,592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216b7d0
	if (ctx.cr6.eq) goto loc_8216B7D0;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r11,14528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14528);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216a598
	if (!ctx.cr6.eq) goto loc_8216A598;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r4,r31,172
	ctx.r4.s64 = ctx.r31.s64 + 172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,14528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14528, ctx.r11.u32);
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x82248a40
	ctx.lr = 0x8216A598;
	sub_82248A40(ctx, base);
loc_8216A598:
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x82248a40
	ctx.lr = 0x8216A5A8;
	sub_82248A40(ctx, base);
	// lfd f1,392(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// bl 0x82249b50
	ctx.lr = 0x8216A5B0;
	sub_82249B50(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,124
	ctx.r5.s64 = 124;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// lfs f16,560(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f16.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f18,848(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 848, temp.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// frsp f26,f1
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// srawi r7,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 3;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// addze r3,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r3.s64 = temp.s64;
	// std r6,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r6.u64);
	// lfd f0,400(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r11,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r11.u64);
	// lfd f12,408(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r3,r1,852
	ctx.r3.s64 = ctx.r1.s64 + 852;
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// frsp f27,f11
	ctx.f27.f64 = double(float(ctx.f11.f64));
	// bl 0x82248f70
	ctx.lr = 0x8216A60C;
	sub_82248F70(ctx, base);
	// li r5,124
	ctx.r5.s64 = 124;
	// stfs f18,976(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 976, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,980
	ctx.r3.s64 = ctx.r1.s64 + 980;
	// bl 0x82248f70
	ctx.lr = 0x8216A620;
	sub_82248F70(ctx, base);
	// stfs f31,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r11,r17,16
	ctx.r11.s64 = ctx.r17.s64 + 16;
	// stfs f18,220(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// li r10,3
	ctx.r10.s64 = 3;
loc_8216A63C:
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lfs f0,572(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lfs f12,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfs f11,584(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// clrldi r5,r9,32
	ctx.r5.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ld r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// addi r30,r1,176
	ctx.r30.s64 = ctx.r1.s64 + 176;
	// std r5,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r5.u64);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ld r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r28,r11,-16
	ctx.r28.s64 = ctx.r11.s64 + -16;
	// std r4,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// std r8,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// std r7,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r7.u64);
	// lfs f8,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// lfd f9,416(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// std r3,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r3.u64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfs f3,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fsubs f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ld r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// ld r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r27,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r27.u64);
	// fmuls f2,f4,f28
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// std r4,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r4.u64);
	// std r29,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r29.u64);
	// std r5,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r5.u64);
	// fmuls f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fadds f11,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f10,f6,f12
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fsubs f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// std r3,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// lfs f7,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// fsubs f0,f7,f31
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f13,f9,f31
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// fmuls f5,f0,f30
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f4,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// fadds f0,f6,f31
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// fadds f9,f4,f5
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f3,f13,f30
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f1,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f11,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// addi r27,r1,144
	ctx.r27.s64 = ctx.r1.s64 + 144;
	// fadds f8,f1,f3
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// addi r25,r1,160
	ctx.r25.s64 = ctx.r1.s64 + 160;
	// std r30,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r30.u64);
	// ld r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r28,-16(r11)
	PPC_STORE_U64(ctx.r11.u32 + -16, ctx.r28.u64);
	// addi r28,r1,176
	ctx.r28.s64 = ctx.r1.s64 + 176;
	// lfs f0,588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// ld r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lfs f13,592(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f31,f0
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f12,596(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	ctx.f12.f64 = double(temp.f32);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lfs f7,600(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ld r26,8(r5)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// ld r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// std r5,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r5.u64);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f5,f6,f2
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// std r26,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r26.u64);
	// fmuls f4,f13,f2
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// ld r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// fmuls f3,f12,f2
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// std r30,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r30.u64);
	// std r7,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r7.u64);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// std r4,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r4.u64);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// std r6,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r6.u64);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fadds f10,f12,f4
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// lfs f9,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lfs f8,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r9,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r9.u64);
	// fsubs f0,f9,f31
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// std r8,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r8.u64);
	// fsubs f13,f8,f31
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f5,f0,f30
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f11,f30
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// lfs f3,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f3.f64 = double(temp.f32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r28,r1,176
	ctx.r28.s64 = ctx.r1.s64 + 176;
	// ld r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r24,r1,144
	ctx.r24.s64 = ctx.r1.s64 + 144;
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// addi r23,r1,112
	ctx.r23.s64 = ctx.r1.s64 + 112;
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// ld r22,0(r9)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fadds f12,f4,f5
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f7,f31
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r21,r1,112
	ctx.r21.s64 = ctx.r1.s64 + 112;
	// addi r20,r1,160
	ctx.r20.s64 = ctx.r1.s64 + 160;
	// addi r19,r1,208
	ctx.r19.s64 = ctx.r1.s64 + 208;
	// addi r18,r1,128
	ctx.r18.s64 = ctx.r1.s64 + 128;
	// addi r17,r1,112
	ctx.r17.s64 = ctx.r1.s64 + 112;
	// fadds f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r16,0(r5)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// std r16,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r16.u64);
	// std r6,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r6.u64);
	// std r27,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r27.u64);
	// lfs f13,612(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lfs f13,608(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f0,604(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f31,f0
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f10,616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ld r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r6,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// fmuls f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// std r3,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r3.u64);
	// fmuls f7,f13,f2
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f12,f2
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fadds f0,f4,f6
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// ld r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r3,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r3.u64);
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// fmuls f12,f1,f30
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r7,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r7.u64);
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// std r5,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r5.u64);
	// fsubs f13,f10,f31
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// std r6,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r6.u64);
	// fmuls f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f6,f0,f30
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// fadds f7,f12,f31
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fadds f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// std r9,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r9.u64);
	// std r22,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r22.u64);
	// lfs f4,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f4.f64 = double(temp.f32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ld r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// ld r3,8(r19)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fadds f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r6,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r6.u64);
	// std r7,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r7.u64);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// std r5,0(r18)
	PPC_STORE_U64(ctx.r18.u32 + 0, ctx.r5.u64);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// std r3,8(r18)
	PPC_STORE_U64(ctx.r18.u32 + 8, ctx.r3.u64);
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f9,632(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ld r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r3,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r3.u64);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// fmuls f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// std r5,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r5.u64);
	// fmuls f6,f10,f2
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f5,f12,f2
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fadds f12,f1,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// ld r7,8(r21)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r21.u32 + 8);
	// std r7,8(r20)
	PPC_STORE_U64(ctx.r20.u32 + 8, ctx.r7.u64);
	// std r8,0(r20)
	PPC_STORE_U64(ctx.r20.u32 + 0, ctx.r8.u64);
	// lfs f6,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fsubs f0,f9,f31
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// ld r6,0(r17)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r17.u32 + 0);
	// fsubs f13,f6,f31
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f31.f64));
	// ld r5,8(r17)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r17.u32 + 8);
	// fmuls f5,f0,f30
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// fadds f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// fmuls f4,f13,f30
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fadds f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r3,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r3.u64);
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// lfs f12,644(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lfs f13,640(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lfs f0,636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfs f7,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
	// ld r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// addi r27,r1,176
	ctx.r27.s64 = ctx.r1.s64 + 176;
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// fadds f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fsubs f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// std r7,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// fsubs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// fmuls f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// std r28,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r28.u64);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// std r5,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r5.u64);
	// fsubs f3,f11,f31
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f12,f2
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fadds f0,f4,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fmuls f11,f3,f30
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// fadds f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// ld r25,0(r30)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r24,r1,144
	ctx.r24.s64 = ctx.r1.s64 + 144;
	// ld r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r23,r1,112
	ctx.r23.s64 = ctx.r1.s64 + 112;
	// std r3,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r3.u64);
	// lfs f7,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f7.f64 = double(temp.f32);
	// std r25,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r25.u64);
	// fsubs f0,f7,f31
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f9,f31
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// std r30,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r30.u64);
	// std r9,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r9.u64);
	// fmuls f6,f0,f30
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f5,f13,f30
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fadds f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fadds f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lfs f11,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// addi r28,r1,176
	ctx.r28.s64 = ctx.r1.s64 + 176;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// addi r25,r1,112
	ctx.r25.s64 = ctx.r1.s64 + 112;
	// ld r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// ld r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// std r7,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r7.u64);
	// std r6,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r6.u64);
	// lfs f12,660(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f0,652(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f12,f2
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f7,664(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ld r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lfs f13,656(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	ctx.f13.f64 = double(temp.f32);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// std r7,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r7.u64);
	// std r6,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r6.u64);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// std r4,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r4.u64);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmuls f6,f8,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// std r9,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r9.u64);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// addi r28,r1,208
	ctx.r28.s64 = ctx.r1.s64 + 208;
	// fmuls f5,f13,f2
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// ld r22,0(r24)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// ld r24,8(r24)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// std r24,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r24.u64);
	// std r22,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r22.u64);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f4,f0,f31
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f13,f1,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fadds f11,f3,f31
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// ld r24,0(r8)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r24,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r24.u64);
	// std r8,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f9,f31
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// ld r23,0(r3)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// fsubs f0,f10,f31
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// std r3,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r3.u64);
	// std r23,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r23.u64);
	// fmuls f8,f0,f30
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f7,f13,f30
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f5,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// ld r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// fadds f0,f5,f7
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// fadds f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f3,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f3.f64 = double(temp.f32);
	// addi r29,r1,176
	ctx.r29.s64 = ctx.r1.s64 + 176;
	// lfs f1,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// addi r23,r11,80
	ctx.r23.s64 = ctx.r11.s64 + 80;
	// ld r24,0(r8)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r22,r1,144
	ctx.r22.s64 = ctx.r1.s64 + 144;
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r21,r1,112
	ctx.r21.s64 = ctx.r1.s64 + 112;
	// addi r20,r1,112
	ctx.r20.s64 = ctx.r1.s64 + 112;
	// addi r19,r1,160
	ctx.r19.s64 = ctx.r1.s64 + 160;
	// addi r18,r1,208
	ctx.r18.s64 = ctx.r1.s64 + 208;
	// addi r17,r1,128
	ctx.r17.s64 = ctx.r1.s64 + 128;
	// addi r16,r1,112
	ctx.r16.s64 = ctx.r1.s64 + 112;
	// addi r15,r1,128
	ctx.r15.s64 = ctx.r1.s64 + 128;
	// ld r14,8(r27)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// ld r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// std r27,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r27.u64);
	// std r14,72(r11)
	PPC_STORE_U64(ctx.r11.u32 + 72, ctx.r14.u64);
	// std r5,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
	// std r3,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r3.u64);
	// lfs f12,680(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f12,676(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// lfs f0,668(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,672(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// std r8,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r8.u64);
	// std r24,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r24.u64);
	// fmuls f8,f12,f2
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f9,f11,f2
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f10,f13,f2
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// ld r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// ld r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r3,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r3.u64);
	// std r5,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r5.u64);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fadds f3,f5,f10
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fadds f1,f4,f8
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f7,f0,f31
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f6,f7,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fadds f0,f6,f31
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// std r4,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// std r3,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r3.u64);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fsubs f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// ld r8,8(r18)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r18.u32 + 8);
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f4,136(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r18.u32 + 0);
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f5,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r11,96
	ctx.r6.s64 = ctx.r11.s64 + 96;
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// ld r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// ld r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r4,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r4.u64);
	// std r3,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r3.u64);
	// lfs f11,696(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// std r8,8(r17)
	PPC_STORE_U64(ctx.r17.u32 + 8, ctx.r8.u64);
	// lfs f13,692(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	ctx.f13.f64 = double(temp.f32);
	// std r7,0(r17)
	PPC_STORE_U64(ctx.r17.u32 + 0, ctx.r7.u64);
	// lfs f0,684(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f6,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f9,f31,f0
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f13,688(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// std r7,0(r21)
	PPC_STORE_U64(ctx.r21.u32 + 0, ctx.r7.u64);
	// fsubs f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fmuls f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// ld r8,8(r22)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// std r8,8(r21)
	PPC_STORE_U64(ctx.r21.u32 + 8, ctx.r8.u64);
	// fmuls f7,f13,f2
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fsubs f6,f0,f31
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fadds f0,f2,f7
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f13,f4,f10
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r8,8(r20)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r20.u32 + 8);
	// fmuls f5,f6,f30
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// ld r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r20.u32 + 0);
	// std r3,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r3.u64);
	// std r8,8(r19)
	PPC_STORE_U64(ctx.r19.u32 + 8, ctx.r8.u64);
	// fadds f12,f5,f31
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// ld r7,8(r16)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r16.u32 + 8);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r4,0(r16)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r16.u32 + 0);
	// std r4,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r4.u64);
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// std r7,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// fsubs f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f31
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f9,f0,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f8,f13,f30
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fadds f7,f1,f9
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f6,f3,f8
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r4,0(r15)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r15.u32 + 0);
	// std r4,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// ld r5,8(r15)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r15.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// bne 0x8216a63c
	if (!ctx.cr0.eq) goto loc_8216A63C;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r14,r31,808
	ctx.r14.s64 = ctx.r31.s64 + 808;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// beq cr6,0x8216b0a0
	if (ctx.cr6.eq) goto loc_8216B0A0;
	// lwz r11,816(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r20,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r20.u32);
	// stw r10,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r10.u32);
	// lwz r9,816(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r8.u32);
	// b 0x8216b0c4
	goto loc_8216B0C4;
loc_8216B0A0:
	// lwz r11,624(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r20,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r20.u32);
	// stw r10,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r10.u32);
	// lwz r9,624(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r8.u32);
loc_8216B0C4:
	// bl 0x821a8c78
	ctx.lr = 0x8216B0C8;
	sub_821A8C78(ctx, base);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8216b0f8
	if (!ctx.cr6.gt) goto loc_8216B0F8;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r31,416
	ctx.r10.s64 = ctx.r31.s64 + 416;
loc_8216B0E4:
	// lwzu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r23,r9,r23
	ctx.r23.u64 = ctx.r9.u64 + ctx.r23.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8216b0e4
	if (ctx.cr6.lt) goto loc_8216B0E4;
loc_8216B0F8:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r29,-7488(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821adde8
	ctx.lr = 0x8216B10C;
	sub_821ADDE8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821ade28
	ctx.lr = 0x8216B11C;
	sub_821ADE28(ctx, base);
	// lwz r29,-7488(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821ad648
	ctx.lr = 0x8216B134;
	sub_821AD648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821ad6a0
	ctx.lr = 0x8216B144;
	sub_821AD6A0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r29,-7488(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821adde8
	ctx.lr = 0x8216B154;
	sub_821ADDE8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821ade28
	ctx.lr = 0x8216B164;
	sub_821ADE28(ctx, base);
	// lwz r30,-7488(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821ad648
	ctx.lr = 0x8216B17C;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x8216B18C;
	sub_821AD6A0(ctx, base);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r17,228(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8216b584
	if (!ctx.cr6.gt) goto loc_8216B584;
	// fadds f0,f26,f15
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 + ctx.f15.f64));
	// lfs f13,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f27,f29
	ctx.f12.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// addi r22,r31,744
	ctx.r22.s64 = ctx.r31.s64 + 744;
	// addi r28,r31,436
	ctx.r28.s64 = ctx.r31.s64 + 436;
	// fdivs f23,f19,f29
	ctx.f23.f64 = double(float(ctx.f19.f64 / ctx.f29.f64));
	// fdivs f22,f19,f27
	ctx.f22.f64 = double(float(ctx.f19.f64 / ctx.f27.f64));
	// fmuls f11,f0,f14
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f14.f64));
	// fdivs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fmuls f21,f10,f13
	ctx.f21.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
loc_8216B1C8:
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r25,156(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// fadds f29,f0,f16
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f16.f64));
	// lwz r24,160(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82249e70
	ctx.lr = 0x8216B1E0;
	sub_82249E70(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmuls f11,f13,f23
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// fmuls f26,f11,f12
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// bl 0x82249f50
	ctx.lr = 0x8216B1F8;
	sub_82249F50(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lfs f9,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmr f24,f21
	ctx.f24.f64 = ctx.f21.f64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f8,f10,f22
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f22.f64));
	// fmuls f25,f8,f9
	ctx.f25.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// ble cr6,0x8216b56c
	if (!ctx.cr6.gt) goto loc_8216B56C;
loc_8216B220:
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// std r11,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// lfd f0,368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f27,f12,f19
	ctx.f27.f64 = double(float(ctx.f12.f64 + ctx.f19.f64));
loc_8216B240:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// std r11,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r11.u64);
	// lfd f0,376(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f29,f24
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f24.f64));
	// bl 0x8224aab0
	ctx.lr = 0x8216B260;
	sub_8224AAB0(ctx, base);
	// lwz r9,-4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// subf r11,r27,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r27.s64;
	// lwz r7,568(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f5,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,364(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// fmuls f4,f9,f27
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fmuls f2,f6,f27
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f27.f64));
	// fmuls f3,f8,f27
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fmuls f1,f4,f30
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// stfs f1,356(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// fmuls f13,f2,f30
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// stfs f13,352(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fmuls f0,f3,f30
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// ld r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// beq cr6,0x8216b318
	if (ctx.cr6.eq) goto loc_8216B318;
	// addi r10,r1,856
	ctx.r10.s64 = ctx.r1.s64 + 856;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f9,-4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
loc_8216B318:
	// fmuls f13,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f26.f64));
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// addi r9,r1,980
	ctx.r9.s64 = ctx.r1.s64 + 980;
	// fmuls f0,f29,f25
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f25.f64));
	// stfsx f13,r30,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// stfsx f0,r30,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f20
	ctx.cr6.compare(ctx.f12.f64, ctx.f20.f64);
	// bge cr6,0x8216b348
	if (!ctx.cr6.lt) goto loc_8216B348;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// blt cr6,0x8216b37c
	if (ctx.cr6.lt) goto loc_8216B37C;
loc_8216B348:
	// addi r8,r1,856
	ctx.r8.s64 = ctx.r1.s64 + 856;
	// stfsx f18,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r30,r8
	ctx.r10.u64 = ctx.r30.u64 + ctx.r8.u64;
	// fmuls f13,f0,f18
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f18.f64));
	// stfsx f18,r30,r9
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsx f12,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f18
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f18.f64));
	// stfsx f11,r30,r8
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// lfs f10,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f18
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f18.f64));
	// stfs f9,-4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
loc_8216B37C:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// blt cr6,0x8216b240
	if (ctx.cr6.lt) goto loc_8216B240;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f19.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a9fe8
	ctx.lr = 0x8216B3AC;
	sub_821A9FE8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a8ec8
	ctx.lr = 0x8216B3BC;
	sub_821A8EC8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a8ec8
	ctx.lr = 0x8216B3CC;
	sub_821A8EC8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,976
	ctx.r5.s64 = ctx.r1.s64 + 976;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a90a8
	ctx.lr = 0x8216B3E0;
	sub_821A90A8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,848
	ctx.r5.s64 = ctx.r1.s64 + 848;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a90a8
	ctx.lr = 0x8216B3F4;
	sub_821A90A8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// addze r4,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x8216a0a0
	ctx.lr = 0x8216B418;
	sub_8216A0A0(ctx, base);
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f19.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bne cr6,0x8216b484
	if (!ctx.cr6.eq) goto loc_8216B484;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// lwz r6,700(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// bl 0x821aa098
	ctx.lr = 0x8216B450;
	sub_821AA098(ctx, base);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,732(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f19.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821aa098
	ctx.lr = 0x8216B480;
	sub_821AA098(ctx, base);
	// b 0x8216b528
	goto loc_8216B528;
loc_8216B484:
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216b4d8
	if (!ctx.cr6.eq) goto loc_8216B4D8;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// lwz r6,-32(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + -32);
	// bl 0x821aa098
	ctx.lr = 0x8216B4A4;
	sub_821AA098(ctx, base);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,0(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f19.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821aa098
	ctx.lr = 0x8216B4D4;
	sub_821AA098(ctx, base);
	// b 0x8216b528
	goto loc_8216B528;
loc_8216B4D8:
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r11,r26,175
	ctx.r11.s64 = ctx.r26.s64 + 175;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x821aa098
	ctx.lr = 0x8216B4F0;
	sub_821AA098(ctx, base);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r5,r26,183
	ctx.r5.s64 = ctx.r26.s64 + 183;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f19.f64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r6,r3,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821aa098
	ctx.lr = 0x8216B528;
	sub_821AA098(ctx, base);
loc_8216B528:
	// addi r11,r26,175
	ctx.r11.s64 = ctx.r26.s64 + 175;
	// fmuls f26,f26,f17
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f17.f64));
	// addi r10,r26,183
	ctx.r10.s64 = ctx.r26.s64 + 183;
	// fmuls f25,f25,f17
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f17.f64));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f24,f24,f17
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f17.f64));
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// lwzx r25,r9,r31
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r24,r8,r31
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// blt cr6,0x8216b55c
	if (ctx.cr6.lt) goto loc_8216B55C;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8216B55C:
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216b220
	if (ctx.cr6.lt) goto loc_8216B220;
loc_8216B56C:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216b1c8
	if (ctx.cr6.lt) goto loc_8216B1C8;
loc_8216B584:
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad648
	ctx.lr = 0x8216B59C;
	sub_821AD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821ad6a0
	ctx.lr = 0x8216B5AC;
	sub_821AD6A0(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad648
	ctx.lr = 0x8216B5C0;
	sub_821AD648(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x8216B5D0;
	sub_821AD6A0(ctx, base);
	// lwz r11,480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// stw r20,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r20.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r10,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r10.u32);
	// lwz r9,480(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x8216B5F8;
	sub_821A8DC0(ctx, base);
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// beq cr6,0x8216b7c0
	if (ctx.cr6.eq) goto loc_8216B7C0;
	// lwz r11,768(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// addi r26,r31,816
	ctx.r26.s64 = ctx.r31.s64 + 816;
	// stw r20,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r20.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// stw r10,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r10.u32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// lwz r9,768(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r8.u32);
	// bl 0x821a8c78
	ctx.lr = 0x8216B63C;
	sub_821A8C78(ctx, base);
	// lwz r7,428(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r21,232(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x8216b6fc
	if (!ctx.cr6.gt) goto loc_8216B6FC;
	// addi r11,r1,856
	ctx.r11.s64 = ctx.r1.s64 + 856;
	// addi r27,r31,740
	ctx.r27.s64 = ctx.r31.s64 + 740;
	// addi r29,r11,-12
	ctx.r29.s64 = ctx.r11.s64 + -12;
loc_8216B65C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821ad648
	ctx.lr = 0x8216B66C;
	sub_821AD648(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x8216B67C;
	sub_821AD6A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,-28(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28);
	// bl 0x821a8ec8
	ctx.lr = 0x8216B68C;
	sub_821A8EC8(ctx, base);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821ad648
	ctx.lr = 0x8216B6A0;
	sub_821AD648(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x8216B6B0;
	sub_821AD6A0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwzu r4,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// bl 0x821a8ec8
	ctx.lr = 0x8216B6C0;
	sub_821A8EC8(ctx, base);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// std r11,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r11.u64);
	// lfd f0,384(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f19,f12
	ctx.f11.f64 = double(float(ctx.f19.f64 / ctx.f12.f64));
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f11,8(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f11,12(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stfsu f11,16(r29)
	// blt cr6,0x8216b65c
	if (ctx.cr6.lt) goto loc_8216B65C;
loc_8216B6FC:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,848
	ctx.r5.s64 = ctx.r1.s64 + 848;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a90a8
	ctx.lr = 0x8216B710;
	sub_821A90A8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// addze r4,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x8216a0a0
	ctx.lr = 0x8216B734;
	sub_8216A0A0(ctx, base);
	// lwz r7,512(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// stw r20,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r20.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r6,r7,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r6,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r6.u32);
	// lwz r5,512(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r11,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r11.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x8216B75C;
	sub_821A8DC0(ctx, base);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,700(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f19.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821aa098
	ctx.lr = 0x8216B78C;
	sub_821AA098(ctx, base);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,732(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f19.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821aa098
	ctx.lr = 0x8216B7BC;
	sub_821AA098(ctx, base);
	// b 0x8216b7c4
	goto loc_8216B7C4;
loc_8216B7C0:
	// lwz r21,232(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
loc_8216B7C4:
	// lwz r18,196(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r19,192(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r22,200(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
loc_8216B7D0:
	// addi r5,r31,788
	ctx.r5.s64 = ctx.r31.s64 + 788;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a9ce8
	ctx.lr = 0x8216B7E0;
	sub_821A9CE8(ctx, base);
	// addi r4,r31,792
	ctx.r4.s64 = ctx.r31.s64 + 792;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a9e08
	ctx.lr = 0x8216B7EC;
	sub_821A9E08(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f19.f64;
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a9fe8
	ctx.lr = 0x8216B80C;
	sub_821A9FE8(ctx, base);
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// add r11,r28,r19
	ctx.r11.u64 = ctx.r28.u64 + ctx.r19.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// beq cr6,0x8216b830
	if (ctx.cr6.eq) goto loc_8216B830;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8216B830:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216b83c
	if (ctx.cr6.eq) goto loc_8216B83C;
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
loc_8216B83C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8216b848
	if (ctx.cr6.eq) goto loc_8216B848;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_8216B848:
	// lwz r11,672(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// addi r27,r31,808
	ctx.r27.s64 = ctx.r31.s64 + 808;
	// stw r20,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r20.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lwz r5,304(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r10,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r10.u32);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// lwz r9,672(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r8.u32);
	// bl 0x821a8c78
	ctx.lr = 0x8216B87C;
	sub_821A8C78(ctx, base);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821adde8
	ctx.lr = 0x8216B890;
	sub_821ADDE8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821ade28
	ctx.lr = 0x8216B8A0;
	sub_821ADE28(ctx, base);
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821ad648
	ctx.lr = 0x8216B8B8;
	sub_821AD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821ad6a0
	ctx.lr = 0x8216B8C8;
	sub_821AD6A0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821adde8
	ctx.lr = 0x8216B8D8;
	sub_821ADDE8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821ade28
	ctx.lr = 0x8216B8E8;
	sub_821ADE28(ctx, base);
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821ad648
	ctx.lr = 0x8216B900;
	sub_821AD648(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x8216B910;
	sub_821AD6A0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x821a8ec8
	ctx.lr = 0x8216B920;
	sub_821A8EC8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x821a8ec8
	ctx.lr = 0x8216B930;
	sub_821A8EC8(ctx, base);
	// lwz r7,596(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8216b9cc
	if (ctx.cr6.eq) goto loc_8216B9CC;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821adde8
	ctx.lr = 0x8216B94C;
	sub_821ADDE8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821ade28
	ctx.lr = 0x8216B95C;
	sub_821ADE28(ctx, base);
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821ad648
	ctx.lr = 0x8216B974;
	sub_821AD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x821ad6a0
	ctx.lr = 0x8216B984;
	sub_821AD6A0(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,24(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// bl 0x821a8ec8
	ctx.lr = 0x8216B994;
	sub_821A8EC8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,600
	ctx.r5.s64 = ctx.r1.s64 + 600;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a90a8
	ctx.lr = 0x8216B9A8;
	sub_821A90A8(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad648
	ctx.lr = 0x8216B9BC;
	sub_821AD648(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x8216B9CC;
	sub_821AD6A0(ctx, base);
loc_8216B9CC:
	// lwz r11,592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216bad4
	if (ctx.cr6.eq) goto loc_8216BAD4;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821adde8
	ctx.lr = 0x8216B9E8;
	sub_821ADDE8(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ade28
	ctx.lr = 0x8216B9F8;
	sub_821ADE28(ctx, base);
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ad648
	ctx.lr = 0x8216BA10;
	sub_821AD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ad6a0
	ctx.lr = 0x8216BA20;
	sub_821AD6A0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821adde8
	ctx.lr = 0x8216BA30;
	sub_821ADDE8(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821ade28
	ctx.lr = 0x8216BA40;
	sub_821ADE28(ctx, base);
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821ad648
	ctx.lr = 0x8216BA58;
	sub_821AD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821ad6a0
	ctx.lr = 0x8216BA68;
	sub_821AD6A0(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,700(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// bl 0x821a8ec8
	ctx.lr = 0x8216BA78;
	sub_821A8EC8(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,732(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// bl 0x821a8ec8
	ctx.lr = 0x8216BA88;
	sub_821A8EC8(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad648
	ctx.lr = 0x8216BA9C;
	sub_821AD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821ad6a0
	ctx.lr = 0x8216BAAC;
	sub_821AD6A0(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad648
	ctx.lr = 0x8216BAC0;
	sub_821AD648(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x8216BAD0;
	sub_821AD6A0(ctx, base);
	// lwz r17,228(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
loc_8216BAD4:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216bb5c
	if (ctx.cr6.eq) goto loc_8216BB5C;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821adde8
	ctx.lr = 0x8216BAF0;
	sub_821ADDE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x821ade28
	ctx.lr = 0x8216BB00;
	sub_821ADE28(ctx, base);
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x821ad648
	ctx.lr = 0x8216BB18;
	sub_821AD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x821ad6a0
	ctx.lr = 0x8216BB28;
	sub_821AD6A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x821a8ec8
	ctx.lr = 0x8216BB38;
	sub_821A8EC8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad648
	ctx.lr = 0x8216BB4C;
	sub_821AD648(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x8216BB5C;
	sub_821AD6A0(ctx, base);
loc_8216BB5C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// cmpw cr6,r11,r11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r11.s32, ctx.xer);
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// blt cr6,0x8216bb98
	if (ctx.cr6.lt) goto loc_8216BB98;
	// addi r9,r1,200
	ctx.r9.s64 = ctx.r1.s64 + 200;
loc_8216BB98:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// addi r11,r1,196
	ctx.r11.s64 = ctx.r1.s64 + 196;
	// blt cr6,0x8216bba8
	if (ctx.cr6.lt) goto loc_8216BBA8;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_8216BBA8:
	// addi r28,r31,-4
	ctx.r28.s64 = ctx.r31.s64 + -4;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8216a0a0
	ctx.lr = 0x8216BBC0;
	sub_8216A0A0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad648
	ctx.lr = 0x8216BBD4;
	sub_821AD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821ad6a0
	ctx.lr = 0x8216BBE4;
	sub_821AD6A0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad648
	ctx.lr = 0x8216BBF8;
	sub_821AD648(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x8216BC08;
	sub_821AD6A0(ctx, base);
	// lwz r11,544(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// stw r20,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r20.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r10,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r10.u32);
	// lwz r9,544(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x8216BC30;
	sub_821A8DC0(ctx, base);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,0(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f18.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821aa098
	ctx.lr = 0x8216BC60;
	sub_821AA098(ctx, base);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,8(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f18.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821aa098
	ctx.lr = 0x8216BC90;
	sub_821AA098(ctx, base);
	// addi r5,r31,804
	ctx.r5.s64 = ctx.r31.s64 + 804;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a9ce8
	ctx.lr = 0x8216BCA0;
	sub_821A9CE8(ctx, base);
	// lwz r7,596(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8216bdd8
	if (ctx.cr6.eq) goto loc_8216BDD8;
	// lwz r11,720(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r20,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r20.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lwz r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r10,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r10.u32);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// lwz r9,720(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r8.u32);
	// bl 0x821a8c78
	ctx.lr = 0x8216BCE0;
	sub_821A8C78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821adde8
	ctx.lr = 0x8216BCF0;
	sub_821ADDE8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ade28
	ctx.lr = 0x8216BD00;
	sub_821ADE28(ctx, base);
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad648
	ctx.lr = 0x8216BD18;
	sub_821AD648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6a0
	ctx.lr = 0x8216BD28;
	sub_821AD6A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x821a8ec8
	ctx.lr = 0x8216BD38;
	sub_821A8EC8(ctx, base);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x8216a0a0
	ctx.lr = 0x8216BD5C;
	sub_8216A0A0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,-7488(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad648
	ctx.lr = 0x8216BD70;
	sub_821AD648(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x8216BD80;
	sub_821AD6A0(ctx, base);
	// lwz r9,448(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// stw r20,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r20.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r8,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r8.u32);
	// lwz r7,448(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r6.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x8216BDA8;
	sub_821A8DC0(ctx, base);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,24(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f18.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821aa098
	ctx.lr = 0x8216BDD8;
	sub_821AA098(ctx, base);
loc_8216BDD8:
	// addi r19,r19,48
	ctx.r19.s64 = ctx.r19.s64 + 48;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r19.u32);
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r18.u32);
	// cmpwi cr6,r19,96
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 96, ctx.xer);
	// stw r22,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r22.u32);
	// blt cr6,0x8216a434
	if (ctx.cr6.lt) goto loc_8216A434;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x821ad240
	ctx.lr = 0x8216BE04;
	sub_821AD240(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x821ad1f8
	ctx.lr = 0x8216BE10;
	sub_821AD1F8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x821ad288
	ctx.lr = 0x8216BE1C;
	sub_821AD288(ctx, base);
	// lwz r30,324(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a24f8
	ctx.lr = 0x8216BE28;
	sub_821A24F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2ba0
	ctx.lr = 0x8216BE34;
	sub_821A2BA0(ctx, base);
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r10.u32);
loc_8216BE40:
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8224993c
	ctx.lr = 0x8216BE4C;
	sub_8224993C(ctx, base);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216BE50"))) PPC_WEAK_FUNC(sub_8216BE50);
PPC_FUNC_IMPL(__imp__sub_8216BE50) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r3,45
	ctx.r3.s64 = ctx.r3.s64 + 45;
	// b 0x8218a128
	sub_8218A128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216BE60"))) PPC_WEAK_FUNC(sub_8216BE60);
PPC_FUNC_IMPL(__imp__sub_8216BE60) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r3,142
	ctx.r3.s64 = ctx.r3.s64 + 142;
	// b 0x8218a128
	sub_8218A128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216BE70"))) PPC_WEAK_FUNC(sub_8216BE70);
PPC_FUNC_IMPL(__imp__sub_8216BE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8216BE78;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,249
	ctx.r31.s64 = ctx.r3.s64 + 249;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x822aa648
	ctx.lr = 0x8216BE98;
	sub_822AA648(ctx, base);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x8216BEA8;
	sub_822AA648(ctx, base);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822aa648
	ctx.lr = 0x8216BEB8;
	sub_822AA648(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// addi r25,r10,-23328
	ctx.r25.s64 = ctx.r10.s64 + -23328;
	// addi r27,r11,26232
	ctx.r27.s64 = ctx.r11.s64 + 26232;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8216bee4
	if (!ctx.cr6.eq) goto loc_8216BEE4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8218a128
	ctx.lr = 0x8216BEE0;
	sub_8218A128(ctx, base);
	// b 0x8216bef0
	goto loc_8216BEF0;
loc_8216BEE4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8216BEF0;
	sub_8218A5F0(ctx, base);
loc_8216BEF0:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x8216bf0c
	if (!ctx.cr6.eq) goto loc_8216BF0C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8218a128
	ctx.lr = 0x8216BF08;
	sub_8218A128(ctx, base);
	// b 0x8216bf18
	goto loc_8216BF18;
loc_8216BF0C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8216BF18;
	sub_8218A5F0(ctx, base);
loc_8216BF18:
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x8216bf38
	if (!ctx.cr6.eq) goto loc_8216BF38;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8218a128
	ctx.lr = 0x8216BF30;
	sub_8218A128(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8216BF38:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8216BF44;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8216BF4C"))) PPC_WEAK_FUNC(sub_8216BF4C);
PPC_FUNC_IMPL(__imp__sub_8216BF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216BF50"))) PPC_WEAK_FUNC(sub_8216BF50);
PPC_FUNC_IMPL(__imp__sub_8216BF50) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// li r9,31
	ctx.r9.s64 = 31;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216BFB4"))) PPC_WEAK_FUNC(sub_8216BFB4);
PPC_FUNC_IMPL(__imp__sub_8216BFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216BFB8"))) PPC_WEAK_FUNC(sub_8216BFB8);
PPC_FUNC_IMPL(__imp__sub_8216BFB8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8216bfc8
	if (ctx.cr6.lt) goto loc_8216BFC8;
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8216BFC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216BFD0"))) PPC_WEAK_FUNC(sub_8216BFD0);
PPC_FUNC_IMPL(__imp__sub_8216BFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8216BFD8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,51200
	ctx.r10.u64 = ctx.r11.u64 | 51200;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stb r30,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r30.u8);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stb r30,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r30.u8);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r3,r3,45
	ctx.r3.s64 = ctx.r3.s64 + 45;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// li r4,97
	ctx.r4.s64 = 97;
	// stb r30,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r30.u8);
	// sth r30,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r30.u16);
	// sth r30,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r30.u16);
	// sth r30,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r30.u16);
	// sth r30,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r30.u16);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// stb r30,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// stb r8,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// stb r29,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r29.u8);
	// stb r30,43(r31)
	PPC_STORE_U8(ctx.r31.u32 + 43, ctx.r30.u8);
	// bl 0x822aa648
	ctx.lr = 0x8216C04C;
	sub_822AA648(ctx, base);
	// addi r3,r31,142
	ctx.r3.s64 = ctx.r31.s64 + 142;
	// li r4,97
	ctx.r4.s64 = 97;
	// bl 0x822aa648
	ctx.lr = 0x8216C058;
	sub_822AA648(ctx, base);
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stb r30,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r30.u8);
	// addi r31,r31,249
	ctx.r31.s64 = ctx.r31.s64 + 249;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x8216C074;
	sub_822AA648(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x8216C080;
	sub_822AA648(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x822aa648
	ctx.lr = 0x8216C08C;
	sub_822AA648(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8216C094"))) PPC_WEAK_FUNC(sub_8216C094);
PPC_FUNC_IMPL(__imp__sub_8216C094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C098"))) PPC_WEAK_FUNC(sub_8216C098);
PPC_FUNC_IMPL(__imp__sub_8216C098) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,14516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216c0c0
	if (ctx.cr6.eq) goto loc_8216C0C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216c0d8
	if (!ctx.cr6.eq) goto loc_8216C0D8;
loc_8216C0C0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a78
	ctx.lr = 0x8216C0D0;
	sub_82163A78(ctx, base);
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
loc_8216C0D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216C0E8"))) PPC_WEAK_FUNC(sub_8216C0E8);
PPC_FUNC_IMPL(__imp__sub_8216C0E8) {
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
	// bl 0x8216bfd0
	ctx.lr = 0x8216C100;
	sub_8216BFD0(ctx, base);
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

__attribute__((alias("__imp__sub_8216C118"))) PPC_WEAK_FUNC(sub_8216C118);
PPC_FUNC_IMPL(__imp__sub_8216C118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216c158
	if (ctx.cr6.eq) goto loc_8216C158;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8216c158
	if (!ctx.cr6.gt) goto loc_8216C158;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216C13C:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8216c160
	if (ctx.cr6.eq) goto loc_8216C160;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8216c13c
	if (ctx.cr6.lt) goto loc_8216C13C;
loc_8216C158:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8216C160:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216C168"))) PPC_WEAK_FUNC(sub_8216C168);
PPC_FUNC_IMPL(__imp__sub_8216C168) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216c290
	if (ctx.cr6.eq) goto loc_8216C290;
	// bl 0x8216c118
	ctx.lr = 0x8216C188;
	sub_8216C118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8216c1a0
	if (!ctx.cr6.lt) goto loc_8216C1A0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8216c118
	ctx.lr = 0x8216C198;
	sub_8216C118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8216c290
	if (ctx.cr6.lt) goto loc_8216C290;
loc_8216C1A0:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// stw r3,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r3.u32);
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,14520(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14520);
	// stw r8,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r8.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f0,8608(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8608);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,8616(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8616);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,16(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,20(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f2,24(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216c290
	if (ctx.cr6.eq) goto loc_8216C290;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// bne cr6,0x8216c264
	if (!ctx.cr6.eq) goto loc_8216C264;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_8216C264:
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lfs f0,16(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// lfs f12,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r8.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,116(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// stfs f0,28(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
loc_8216C290:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216C2A0"))) PPC_WEAK_FUNC(sub_8216C2A0);
PPC_FUNC_IMPL(__imp__sub_8216C2A0) {
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
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lwz r31,15456(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15456);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216c2f8
	if (ctx.cr6.eq) goto loc_8216C2F8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216c2ec
	if (ctx.cr6.eq) goto loc_8216C2EC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216c2e4
	if (ctx.cr6.eq) goto loc_8216C2E4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8216C2E4;
	sub_82183E40(ctx, base);
loc_8216C2E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8216C2EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8216C2F8;
	sub_82183E40(ctx, base);
loc_8216C2F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15456, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8216C318"))) PPC_WEAK_FUNC(sub_8216C318);
PPC_FUNC_IMPL(__imp__sub_8216C318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8216C320;
	sub_82248770(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x8216C334;
	sub_82183078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8216C340;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8218aa18
	ctx.lr = 0x8216C358;
	sub_8218AA18(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x8216C35C;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8216C364;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216C370;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8216C374;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8216C380;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8216C388;
	sub_821830F8(ctx, base);
	// lwz r10,40(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x8218a810
	ctx.lr = 0x8216C398;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8216c3b4
	if (ctx.cr6.eq) goto loc_8216C3B4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x8216C3AC;
	sub_8218AE98(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x8216c3b8
	goto loc_8216C3B8;
loc_8216C3B4:
	// li r23,0
	ctx.r23.s64 = 0;
loc_8216C3B8:
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8218a810
	ctx.lr = 0x8216C3C8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8216c3e4
	if (ctx.cr6.eq) goto loc_8216C3E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x8216C3DC;
	sub_8218AC78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8216c3e8
	goto loc_8216C3E8;
loc_8216C3E4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8216C3E8:
	// bl 0x82183850
	ctx.lr = 0x8216C3EC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8216c404
	if (ctx.cr6.eq) goto loc_8216C404;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82183448
	ctx.lr = 0x8216C400;
	sub_82183448(ctx, base);
	// b 0x8216c40c
	goto loc_8216C40C;
loc_8216C404:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x8216C40C;
	sub_821845A0(ctx, base);
loc_8216C40C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216c428
	if (ctx.cr6.eq) goto loc_8216C428;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x821956f0
	ctx.lr = 0x8216C420;
	sub_821956F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8216c42c
	goto loc_8216C42C;
loc_8216C428:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8216C42C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8216c440
	if (ctx.cr6.lt) goto loc_8216C440;
	// bne cr6,0x8216c448
	if (!ctx.cr6.eq) goto loc_8216C448;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8216c444
	goto loc_8216C444;
loc_8216C440:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216C444:
	// bl 0x821830f8
	ctx.lr = 0x8216C448;
	sub_821830F8(ctx, base);
loc_8216C448:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216C450;
	sub_821837D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82195c68
	ctx.lr = 0x8216C458;
	sub_82195C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c4d8
	if (ctx.cr6.eq) goto loc_8216C4D8;
	// lis r9,1365
	ctx.r9.s64 = 89456640;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r29,r9,21845
	ctx.r29.u64 = ctx.r9.u64 | 21845;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r25,r11,3708
	ctx.r25.s64 = ctx.r11.s64 + 3708;
	// addi r30,r10,-23324
	ctx.r30.s64 = ctx.r10.s64 + -23324;
loc_8216C47C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8216c520
	if (ctx.cr6.eq) goto loc_8216C520;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8216c4c8
	if (!ctx.cr6.eq) goto loc_8216C4C8;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8216C498:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216c4bc
	if (ctx.cr6.eq) goto loc_8216C4BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216c498
	if (ctx.cr6.eq) goto loc_8216C498;
loc_8216C4BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216c4c8
	if (ctx.cr6.eq) goto loc_8216C4C8;
loc_8216C4C4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8216C4C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82195c68
	ctx.lr = 0x8216C4D0;
	sub_82195C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216c47c
	if (!ctx.cr6.eq) goto loc_8216C47C;
loc_8216C4D8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8216c4f4
	if (ctx.cr6.eq) goto loc_8216C4F4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82195630
	ctx.lr = 0x8216C4E8;
	sub_82195630(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x8216C4F4;
	sub_82183E40(ctx, base);
loc_8216C4F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82183e40
	ctx.lr = 0x8216C500;
	sub_82183E40(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r11.u32);
	// bl 0x8218a7f0
	ctx.lr = 0x8216C510;
	sub_8218A7F0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216C518;
	sub_821837D0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8216C520:
	// lwz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216C52C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216c550
	if (ctx.cr6.eq) goto loc_8216C550;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216c52c
	if (ctx.cr6.eq) goto loc_8216C52C;
loc_8216C550:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8216c5d0
	if (!ctx.cr6.eq) goto loc_8216C5D0;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82195d10
	ctx.lr = 0x8216C564;
	sub_82195D10(ctx, base);
	// bl 0x8224a688
	ctx.lr = 0x8216C568;
	sub_8224A688(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// stw r3,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// bgt cr6,0x8216c584
	if (ctx.cr6.gt) goto loc_8216C584;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r31,r11,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x8216c588
	goto loc_8216C588;
loc_8216C584:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8216C588:
	// bl 0x82183850
	ctx.lr = 0x8216C58C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8216c5a4
	if (ctx.cr6.eq) goto loc_8216C5A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x8216C5A0;
	sub_82183448(ctx, base);
	// b 0x8216c5b0
	goto loc_8216C5B0;
loc_8216C5A4:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8216C5B0;
	sub_821845A0(ctx, base);
loc_8216C5B0:
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822aa648
	ctx.lr = 0x8216C5C8;
	sub_822AA648(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8216c4c8
	goto loc_8216C4C8;
loc_8216C5D0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82248910
	ctx.lr = 0x8216C5E0;
	sub_82248910(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82195c68
	ctx.lr = 0x8216C5E8;
	sub_82195C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c4c8
	if (ctx.cr6.eq) goto loc_8216C4C8;
loc_8216C5F0:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8216c854
	if (ctx.cr6.eq) goto loc_8216C854;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8216c818
	if (ctx.cr6.eq) goto loc_8216C818;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8216c858
	if (!ctx.cr6.eq) goto loc_8216C858;
	// addi r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 + 20;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216C614:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216c638
	if (ctx.cr6.eq) goto loc_8216C638;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216c614
	if (ctx.cr6.eq) goto loc_8216C614;
loc_8216C638:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8216c660
	if (!ctx.cr6.eq) goto loc_8216C660;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8224a688
	ctx.lr = 0x8216C648;
	sub_8224A688(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r3,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r3.u32);
	// b 0x8216c858
	goto loc_8216C858;
loc_8216C660:
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216C668:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216c68c
	if (ctx.cr6.eq) goto loc_8216C68C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216c668
	if (ctx.cr6.eq) goto loc_8216C668;
loc_8216C68C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8216c6b8
	if (!ctx.cr6.eq) goto loc_8216C6B8;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8224a688
	ctx.lr = 0x8216C69C;
	sub_8224A688(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// b 0x8216c858
	goto loc_8216C858;
loc_8216C6B8:
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216C6C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216c6e4
	if (ctx.cr6.eq) goto loc_8216C6E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216c6c0
	if (ctx.cr6.eq) goto loc_8216C6C0;
loc_8216C6E4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8216c710
	if (!ctx.cr6.eq) goto loc_8216C710;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8224a688
	ctx.lr = 0x8216C6F4;
	sub_8224A688(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// b 0x8216c858
	goto loc_8216C858;
loc_8216C710:
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216C718:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216c73c
	if (ctx.cr6.eq) goto loc_8216C73C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216c718
	if (ctx.cr6.eq) goto loc_8216C718;
loc_8216C73C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8216c768
	if (!ctx.cr6.eq) goto loc_8216C768;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8224a688
	ctx.lr = 0x8216C74C;
	sub_8224A688(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// b 0x8216c858
	goto loc_8216C858;
loc_8216C768:
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216C770:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216c794
	if (ctx.cr6.eq) goto loc_8216C794;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216c770
	if (ctx.cr6.eq) goto loc_8216C770;
loc_8216C794:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8216c7c0
	if (!ctx.cr6.eq) goto loc_8216C7C0;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8224a688
	ctx.lr = 0x8216C7A4;
	sub_8224A688(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// b 0x8216c858
	goto loc_8216C858;
loc_8216C7C0:
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216C7C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216c7ec
	if (ctx.cr6.eq) goto loc_8216C7EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216c7c8
	if (ctx.cr6.eq) goto loc_8216C7C8;
loc_8216C7EC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8216c858
	if (!ctx.cr6.eq) goto loc_8216C858;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x8224a688
	ctx.lr = 0x8216C7FC;
	sub_8224A688(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r3.u32);
	// b 0x8216c858
	goto loc_8216C858;
loc_8216C818:
	// lwz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216C824:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216c848
	if (ctx.cr6.eq) goto loc_8216C848;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216c824
	if (ctx.cr6.eq) goto loc_8216C824;
loc_8216C848:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216c4c4
	if (ctx.cr6.eq) goto loc_8216C4C4;
	// b 0x8216c858
	goto loc_8216C858;
loc_8216C854:
	// lwz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_8216C858:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82195c68
	ctx.lr = 0x8216C860;
	sub_82195C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216c5f0
	if (!ctx.cr6.eq) goto loc_8216C5F0;
	// b 0x8216c4c8
	goto loc_8216C4C8;
}

__attribute__((alias("__imp__sub_8216C86C"))) PPC_WEAK_FUNC(sub_8216C86C);
PPC_FUNC_IMPL(__imp__sub_8216C86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216C870"))) PPC_WEAK_FUNC(sub_8216C870);
PPC_FUNC_IMPL(__imp__sub_8216C870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8216C878;
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
	ctx.lr = 0x8216C888;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8216C894;
	sub_821837D0(ctx, base);
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// lwz r11,15456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216c910
	if (!ctx.cr6.eq) goto loc_8216C910;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x8216C8AC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216c8fc
	if (ctx.cr6.eq) goto loc_8216C8FC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// b 0x8216c900
	goto loc_8216C900;
loc_8216C8FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216C900:
	// stw r3,15456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15456, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8216c318
	ctx.lr = 0x8216C910;
	sub_8216C318(ctx, base);
loc_8216C910:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216C918;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8216C920"))) PPC_WEAK_FUNC(sub_8216C920);
PPC_FUNC_IMPL(__imp__sub_8216C920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8216C928;
	sub_82248774(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x8216C93C;
	sub_8218AA18(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82182e90
	ctx.lr = 0x8216C944;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8216C94C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216C958;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8216C95C;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8216C968;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8216C970;
	sub_821830F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x8216C97C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8216c998
	if (ctx.cr6.eq) goto loc_8216C998;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x8216C990;
	sub_8218AE98(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x8216c99c
	goto loc_8216C99C;
loc_8216C998:
	// li r23,0
	ctx.r23.s64 = 0;
loc_8216C99C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x8216C9A8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8216c9c4
	if (ctx.cr6.eq) goto loc_8216C9C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x8216C9BC;
	sub_8218AC78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8216c9c8
	goto loc_8216C9C8;
loc_8216C9C4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8216C9C8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8216cccc
	if (ctx.cr6.eq) goto loc_8216CCCC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8216cccc
	if (ctx.cr6.eq) goto loc_8216CCCC;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x8216C9E0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216c9fc
	if (ctx.cr6.eq) goto loc_8216C9FC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x821956f0
	ctx.lr = 0x8216C9F4;
	sub_821956F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8216ca00
	goto loc_8216CA00;
loc_8216C9FC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8216CA00:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8216ca14
	if (ctx.cr6.lt) goto loc_8216CA14;
	// bne cr6,0x8216ca1c
	if (!ctx.cr6.eq) goto loc_8216CA1C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8216ca18
	goto loc_8216CA18;
loc_8216CA14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216CA18:
	// bl 0x821830f8
	ctx.lr = 0x8216CA1C;
	sub_821830F8(ctx, base);
loc_8216CA1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216CA24;
	sub_821837D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82195c68
	ctx.lr = 0x8216CA2C;
	sub_82195C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216caac
	if (ctx.cr6.eq) goto loc_8216CAAC;
	// lis r9,2047
	ctx.r9.s64 = 134152192;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r29,r9,65535
	ctx.r29.u64 = ctx.r9.u64 | 65535;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r25,r11,3708
	ctx.r25.s64 = ctx.r11.s64 + 3708;
	// addi r30,r10,-23248
	ctx.r30.s64 = ctx.r10.s64 + -23248;
loc_8216CA50:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8216cae4
	if (ctx.cr6.eq) goto loc_8216CAE4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8216ca9c
	if (!ctx.cr6.eq) goto loc_8216CA9C;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8216CA6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216ca90
	if (ctx.cr6.eq) goto loc_8216CA90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216ca6c
	if (ctx.cr6.eq) goto loc_8216CA6C;
loc_8216CA90:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216ca9c
	if (ctx.cr6.eq) goto loc_8216CA9C;
loc_8216CA98:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_8216CA9C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82195c68
	ctx.lr = 0x8216CAA4;
	sub_82195C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216ca50
	if (!ctx.cr6.eq) goto loc_8216CA50;
loc_8216CAAC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8216cac8
	if (ctx.cr6.eq) goto loc_8216CAC8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82195630
	ctx.lr = 0x8216CABC;
	sub_82195630(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x8216CAC8;
	sub_82183E40(ctx, base);
loc_8216CAC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82183e40
	ctx.lr = 0x8216CAD4;
	sub_82183E40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x8216CADC;
	sub_8218A7F0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_8216CAE4:
	// lwz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216CAF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216cb14
	if (ctx.cr6.eq) goto loc_8216CB14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216caf0
	if (ctx.cr6.eq) goto loc_8216CAF0;
loc_8216CB14:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8216cb80
	if (!ctx.cr6.eq) goto loc_8216CB80;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82195d10
	ctx.lr = 0x8216CB28;
	sub_82195D10(ctx, base);
	// bl 0x8224a688
	ctx.lr = 0x8216CB2C;
	sub_8224A688(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// stw r3,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// rlwinm r31,r3,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// ble cr6,0x8216cb40
	if (!ctx.cr6.gt) goto loc_8216CB40;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8216CB40:
	// bl 0x82183850
	ctx.lr = 0x8216CB44;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8216cb5c
	if (ctx.cr6.eq) goto loc_8216CB5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x8216CB58;
	sub_82183448(ctx, base);
	// b 0x8216cb68
	goto loc_8216CB68;
loc_8216CB5C:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8216CB68;
	sub_821845A0(ctx, base);
loc_8216CB68:
	// stw r3,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x822aa648
	ctx.lr = 0x8216CB78;
	sub_822AA648(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8216ca9c
	goto loc_8216CA9C;
loc_8216CB80:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82248910
	ctx.lr = 0x8216CB90;
	sub_82248910(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82195c68
	ctx.lr = 0x8216CB98;
	sub_82195C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216ca9c
	if (ctx.cr6.eq) goto loc_8216CA9C;
loc_8216CBA0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8216ccb4
	if (ctx.cr6.eq) goto loc_8216CCB4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8216cc78
	if (ctx.cr6.eq) goto loc_8216CC78;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8216ccb8
	if (!ctx.cr6.eq) goto loc_8216CCB8;
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8216ccb8
	if (ctx.cr6.eq) goto loc_8216CCB8;
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216CBD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x8216cbf4
	if (ctx.cr6.eq) goto loc_8216CBF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216cbd0
	if (ctx.cr6.eq) goto loc_8216CBD0;
loc_8216CBF4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8216cc28
	if (!ctx.cr6.eq) goto loc_8216CC28;
	// rlwinm r11,r27,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8216CC10:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bne cr6,0x8216cc10
	if (!ctx.cr6.eq) goto loc_8216CC10;
	// b 0x8216ccb8
	goto loc_8216CCB8;
loc_8216CC28:
	// addi r10,r30,36
	ctx.r10.s64 = ctx.r30.s64 + 36;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216CC30:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216cc54
	if (ctx.cr6.eq) goto loc_8216CC54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216cc30
	if (ctx.cr6.eq) goto loc_8216CC30;
loc_8216CC54:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8216ccb8
	if (!ctx.cr6.eq) goto loc_8216CCB8;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x8224a688
	ctx.lr = 0x8216CC64;
	sub_8224A688(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r27,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r3,31(r8)
	PPC_STORE_U8(ctx.r8.u32 + 31, ctx.r3.u8);
	// b 0x8216ccb8
	goto loc_8216CCB8;
loc_8216CC78:
	// lwz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216CC84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8216cca8
	if (ctx.cr6.eq) goto loc_8216CCA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216cc84
	if (ctx.cr6.eq) goto loc_8216CC84;
loc_8216CCA8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216ca98
	if (ctx.cr6.eq) goto loc_8216CA98;
	// b 0x8216ccb8
	goto loc_8216CCB8;
loc_8216CCB4:
	// lwz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
loc_8216CCB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82195c68
	ctx.lr = 0x8216CCC0;
	sub_82195C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216cba0
	if (!ctx.cr6.eq) goto loc_8216CBA0;
	// b 0x8216ca9c
	goto loc_8216CA9C;
loc_8216CCCC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8216cce0
	if (ctx.cr6.lt) goto loc_8216CCE0;
	// bne cr6,0x8216cce8
	if (!ctx.cr6.eq) goto loc_8216CCE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8216cce4
	goto loc_8216CCE4;
loc_8216CCE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216CCE4:
	// bl 0x821830f8
	ctx.lr = 0x8216CCE8;
	sub_821830F8(ctx, base);
loc_8216CCE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216CCF0;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x8216CCF8;
	sub_8218A7F0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8216CD00"))) PPC_WEAK_FUNC(sub_8216CD00);
PPC_FUNC_IMPL(__imp__sub_8216CD00) {
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
	// addi r9,r10,17096
	ctx.r9.s64 = ctx.r10.s64 + 17096;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8216c920
	ctx.lr = 0x8216CD30;
	sub_8216C920(ctx, base);
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

__attribute__((alias("__imp__sub_8216CD48"))) PPC_WEAK_FUNC(sub_8216CD48);
PPC_FUNC_IMPL(__imp__sub_8216CD48) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216CD54"))) PPC_WEAK_FUNC(sub_8216CD54);
PPC_FUNC_IMPL(__imp__sub_8216CD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216CD58"))) PPC_WEAK_FUNC(sub_8216CD58);
PPC_FUNC_IMPL(__imp__sub_8216CD58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216CD64"))) PPC_WEAK_FUNC(sub_8216CD64);
PPC_FUNC_IMPL(__imp__sub_8216CD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216CD68"))) PPC_WEAK_FUNC(sub_8216CD68);
PPC_FUNC_IMPL(__imp__sub_8216CD68) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x8216CDC4;
	sub_822AA648(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x822aa648
	ctx.lr = 0x8216CDD0;
	sub_822AA648(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8216CDF0"))) PPC_WEAK_FUNC(sub_8216CDF0);
PPC_FUNC_IMPL(__imp__sub_8216CDF0) {
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
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ce24
	if (ctx.cr6.eq) goto loc_8216CE24;
	// bl 0x8222e080
	ctx.lr = 0x8216CE18;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8216ce28
	if (ctx.cr6.eq) goto loc_8216CE28;
loc_8216CE24:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8216CE28:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8216CE3C"))) PPC_WEAK_FUNC(sub_8216CE3C);
PPC_FUNC_IMPL(__imp__sub_8216CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216CE40"))) PPC_WEAK_FUNC(sub_8216CE40);
PPC_FUNC_IMPL(__imp__sub_8216CE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8216CE48;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r29.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8216CE68:
	// bl 0x8215bd60
	ctx.lr = 0x8216CE6C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216ceb0
	if (!ctx.cr6.eq) goto loc_8216CEB0;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x8216cec0
	if (!ctx.cr6.lt) goto loc_8216CEC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e938
	ctx.lr = 0x8216CE88;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216CE98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 + 10;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x8216cec8
	if (!ctx.cr6.eq) goto loc_8216CEC8;
	// stwx r28,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x8216cecc
	goto loc_8216CECC;
loc_8216CEB0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8216cec0
	if (!ctx.cr6.eq) goto loc_8216CEC0;
	// stw r28,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// b 0x8216cecc
	goto loc_8216CECC;
loc_8216CEC0:
	// addi r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8216CEC8:
	// stwx r29,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r29.u32);
loc_8216CECC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8216ce68
	if (ctx.cr6.lt) goto loc_8216CE68;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8216CEE0"))) PPC_WEAK_FUNC(sub_8216CEE0);
PPC_FUNC_IMPL(__imp__sub_8216CEE0) {
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
	// bl 0x8216cd68
	ctx.lr = 0x8216CEF8;
	sub_8216CD68(ctx, base);
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

__attribute__((alias("__imp__sub_8216CF10"))) PPC_WEAK_FUNC(sub_8216CF10);
PPC_FUNC_IMPL(__imp__sub_8216CF10) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-23200
	ctx.r10.s64 = ctx.r11.s64 + -23200;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8216cf54
	if (ctx.cr6.eq) goto loc_8216CF54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216CF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216CF54:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216cf7c
	if (ctx.cr6.eq) goto loc_8216CF7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216CF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216CF7C:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216cfa0
	if (ctx.cr6.eq) goto loc_8216CFA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216CFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216CFA0:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216cfc4
	if (ctx.cr6.eq) goto loc_8216CFC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216CFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216CFC4:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216cfe8
	if (ctx.cr6.eq) goto loc_8216CFE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216CFE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216CFE8:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216d00c
	if (ctx.cr6.eq) goto loc_8216D00C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216D00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216D00C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216d030
	if (ctx.cr6.eq) goto loc_8216D030;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216D030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216D030:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lwsync 
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,15460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15460, ctx.r30.u32);
	// bl 0x82185a50
	ctx.lr = 0x8216D048;
	sub_82185A50(ctx, base);
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

__attribute__((alias("__imp__sub_8216D060"))) PPC_WEAK_FUNC(sub_8216D060);
PPC_FUNC_IMPL(__imp__sub_8216D060) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D070"))) PPC_WEAK_FUNC(sub_8216D070);
PPC_FUNC_IMPL(__imp__sub_8216D070) {
	PPC_FUNC_PROLOGUE();
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D080"))) PPC_WEAK_FUNC(sub_8216D080);
PPC_FUNC_IMPL(__imp__sub_8216D080) {
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
	// lwz r4,84(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x82185ba0
	ctx.lr = 0x8216D0A0;
	sub_82185BA0(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82185ba0
	ctx.lr = 0x8216D0AC;
	sub_82185BA0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8216D0D0"))) PPC_WEAK_FUNC(sub_8216D0D0);
PPC_FUNC_IMPL(__imp__sub_8216D0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8216D0D8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x8216D0F0;
	sub_821859A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-23200
	ctx.r10.s64 = ctx.r11.s64 + -23200;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a24e8
	ctx.lr = 0x8216D114;
	sub_821A24E8(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// stw r26,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r26.u32);
	// lwz r3,-19048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19048);
	// bl 0x821a24e8
	ctx.lr = 0x8216D138;
	sub_821A24E8(ctx, base);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// stw r26,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r26.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// lwsync 
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// stw r30,15460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15460, ctx.r30.u32);
	// bl 0x82183850
	ctx.lr = 0x8216D170;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8216d188
	if (ctx.cr6.eq) goto loc_8216D188;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x8216D184;
	sub_82183448(ctx, base);
	// b 0x8216d190
	goto loc_8216D190;
loc_8216D188:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8216D190;
	sub_821845A0(ctx, base);
loc_8216D190:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-23192
	ctx.r27.s64 = ctx.r11.s64 + -23192;
	// beq cr6,0x8216d1cc
	if (ctx.cr6.eq) goto loc_8216D1CC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821859a0
	ctx.lr = 0x8216D1B4;
	sub_821859A0(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r26,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r26.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// b 0x8216d1d0
	goto loc_8216D1D0;
loc_8216D1CC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216D1D0:
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x8216D1D8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8216d1f0
	if (ctx.cr6.eq) goto loc_8216D1F0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x8216D1EC;
	sub_82183448(ctx, base);
	// b 0x8216d1f8
	goto loc_8216D1F8;
loc_8216D1F0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8216D1F8;
	sub_821845A0(ctx, base);
loc_8216D1F8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216d22c
	if (ctx.cr6.eq) goto loc_8216D22C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x821859a0
	ctx.lr = 0x8216D214;
	sub_821859A0(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// b 0x8216d230
	goto loc_8216D230;
loc_8216D22C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216D230:
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x8216D238;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8216d250
	if (ctx.cr6.eq) goto loc_8216D250;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x8216D24C;
	sub_82183448(ctx, base);
	// b 0x8216d258
	goto loc_8216D258;
loc_8216D250:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8216D258;
	sub_821845A0(ctx, base);
loc_8216D258:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-23184
	ctx.r28.s64 = ctx.r11.s64 + -23184;
	// beq cr6,0x8216d288
	if (ctx.cr6.eq) goto loc_8216D288;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x821859a0
	ctx.lr = 0x8216D27C;
	sub_821859A0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x8216d28c
	goto loc_8216D28C;
loc_8216D288:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216D28C:
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x8216D294;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8216d2ac
	if (ctx.cr6.eq) goto loc_8216D2AC;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x8216D2A8;
	sub_82183448(ctx, base);
	// b 0x8216d2b4
	goto loc_8216D2B4;
loc_8216D2AC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8216D2B4;
	sub_821845A0(ctx, base);
loc_8216D2B4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216d2e8
	if (ctx.cr6.eq) goto loc_8216D2E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x821859a0
	ctx.lr = 0x8216D2D0;
	sub_821859A0(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// b 0x8216d2ec
	goto loc_8216D2EC;
loc_8216D2E8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216D2EC:
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x8216D2F4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8216d30c
	if (ctx.cr6.eq) goto loc_8216D30C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x8216D308;
	sub_82183448(ctx, base);
	// b 0x8216d314
	goto loc_8216D314;
loc_8216D30C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8216D314;
	sub_821845A0(ctx, base);
loc_8216D314:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216d33c
	if (ctx.cr6.eq) goto loc_8216D33C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x821859a0
	ctx.lr = 0x8216D330;
	sub_821859A0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x8216d340
	goto loc_8216D340;
loc_8216D33C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216D340:
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x8216D348;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8216d360
	if (ctx.cr6.eq) goto loc_8216D360;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x8216D35C;
	sub_82183448(ctx, base);
	// b 0x8216d368
	goto loc_8216D368;
loc_8216D360:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8216D368;
	sub_821845A0(ctx, base);
loc_8216D368:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216d39c
	if (ctx.cr6.eq) goto loc_8216D39C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,45
	ctx.r4.s64 = 45;
	// bl 0x821859a0
	ctx.lr = 0x8216D384;
	sub_821859A0(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r26,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r26.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// b 0x8216d3a0
	goto loc_8216D3A0;
loc_8216D39C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216D3A0:
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x8216D3A8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8216d3c0
	if (ctx.cr6.eq) goto loc_8216D3C0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x8216D3BC;
	sub_82183448(ctx, base);
	// b 0x8216d3c8
	goto loc_8216D3C8;
loc_8216D3C0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8216D3C8;
	sub_821845A0(ctx, base);
loc_8216D3C8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216d3fc
	if (ctx.cr6.eq) goto loc_8216D3FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,90
	ctx.r4.s64 = 90;
	// bl 0x821859a0
	ctx.lr = 0x8216D3E4;
	sub_821859A0(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// b 0x8216d400
	goto loc_8216D400;
loc_8216D3FC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216D400:
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r31,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r31.u32);
	// lwz r6,72(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r31,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r31.u32);
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r31,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r31.u32);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8216D448"))) PPC_WEAK_FUNC(sub_8216D448);
PPC_FUNC_IMPL(__imp__sub_8216D448) {
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
	// bl 0x8216cf10
	ctx.lr = 0x8216D468;
	sub_8216CF10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d484
	if (ctx.cr6.eq) goto loc_8216D484;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8216D480;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216D484:
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

__attribute__((alias("__imp__sub_8216D49C"))) PPC_WEAK_FUNC(sub_8216D49C);
PPC_FUNC_IMPL(__imp__sub_8216D49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D4A0"))) PPC_WEAK_FUNC(sub_8216D4A0);
PPC_FUNC_IMPL(__imp__sub_8216D4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lwz r11,-7560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7560);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8216d4d8
	if (ctx.cr6.eq) goto loc_8216D4D8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8216d4d8
	if (ctx.cr6.eq) goto loc_8216D4D8;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r3,-19048(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// b 0x821a2900
	sub_821A2900(ctx, base);
	return;
loc_8216D4D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D4E4"))) PPC_WEAK_FUNC(sub_8216D4E4);
PPC_FUNC_IMPL(__imp__sub_8216D4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D4E8"))) PPC_WEAK_FUNC(sub_8216D4E8);
PPC_FUNC_IMPL(__imp__sub_8216D4E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r3,-19048(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19048);
	// b 0x821a2900
	sub_821A2900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216D508"))) PPC_WEAK_FUNC(sub_8216D508);
PPC_FUNC_IMPL(__imp__sub_8216D508) {
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
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r4,53
	ctx.r4.s64 = 53;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// bl 0x82185ba0
	ctx.lr = 0x8216D53C;
	sub_82185BA0(ctx, base);
	// li r4,78
	ctx.r4.s64 = 78;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82185ba0
	ctx.lr = 0x8216D548;
	sub_82185BA0(ctx, base);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8216D574"))) PPC_WEAK_FUNC(sub_8216D574);
PPC_FUNC_IMPL(__imp__sub_8216D574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D578"))) PPC_WEAK_FUNC(sub_8216D578);
PPC_FUNC_IMPL(__imp__sub_8216D578) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D590"))) PPC_WEAK_FUNC(sub_8216D590);
PPC_FUNC_IMPL(__imp__sub_8216D590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfd f0,-8184(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8184);
	// addi r6,r7,-7560
	ctx.r6.s64 = ctx.r7.s64 + -7560;
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f0,-7564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7564);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10412);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// blt cr6,0x8216d5e4
	if (ctx.cr6.lt) goto loc_8216D5E4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8216D5E4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216d60c
	if (!ctx.cr6.gt) goto loc_8216D60C;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// b 0x8216d61c
	goto loc_8216D61C;
loc_8216D60C:
	// bge cr6,0x8216d628
	if (!ctx.cr6.lt) goto loc_8216D628;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
loc_8216D61C:
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_8216D628:
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D630"))) PPC_WEAK_FUNC(sub_8216D630);
PPC_FUNC_IMPL(__imp__sub_8216D630) {
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
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// lwz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// lwz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r31,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r31.u32);
	// lwz r6,68(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r31,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r31.u32);
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8216d698
	if (ctx.cr6.eq) goto loc_8216D698;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8216D698:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bgt cr6,0x8216d76c
	if (ctx.cr6.gt) goto loc_8216D76C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8216d6f8
	// bdzf 4*cr6+eq,0x8216d70c
	// bdzf 4*cr6+eq,0x8216d71c
	// bdzf 4*cr6+eq,0x8216d73c
	// bne cr6,0x8216d750
	if (!ctx.cr6.eq) goto loc_8216D750;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ad168
	ctx.lr = 0x8216D6CC;
	sub_821AD168(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-12408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d76c
	if (ctx.cr6.eq) goto loc_8216D76C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
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
loc_8216D6F8:
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x8216d760
	goto loc_8216D760;
loc_8216D70C:
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x8216d75c
	goto loc_8216D75C;
loc_8216D71C:
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// b 0x8216d764
	goto loc_8216D764;
loc_8216D73C:
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8216d760
	goto loc_8216D760;
loc_8216D750:
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
loc_8216D75C:
	// li r4,2
	ctx.r4.s64 = 2;
loc_8216D760:
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_8216D764:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ad168
	ctx.lr = 0x8216D76C;
	sub_821AD168(ctx, base);
loc_8216D76C:
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

__attribute__((alias("__imp__sub_8216D780"))) PPC_WEAK_FUNC(sub_8216D780);
PPC_FUNC_IMPL(__imp__sub_8216D780) {
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
	// addi r10,r11,-23184
	ctx.r10.s64 = ctx.r11.s64 + -23184;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82185a50
	ctx.lr = 0x8216D7AC;
	sub_82185A50(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216d7c8
	if (ctx.cr6.eq) goto loc_8216D7C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8216D7C4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216D7C8:
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

__attribute__((alias("__imp__sub_8216D7E0"))) PPC_WEAK_FUNC(sub_8216D7E0);
PPC_FUNC_IMPL(__imp__sub_8216D7E0) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-3296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3296);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821ddd88
	ctx.lr = 0x8216D7FC;
	sub_821DDD88(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,-12408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d818
	if (ctx.cr6.eq) goto loc_8216D818;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8216D818:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D828"))) PPC_WEAK_FUNC(sub_8216D828);
PPC_FUNC_IMPL(__imp__sub_8216D828) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216d844
	if (ctx.cr6.eq) goto loc_8216D844;
	// bl 0x8216d590
	ctx.lr = 0x8216D844;
	sub_8216D590(ctx, base);
loc_8216D844:
	// bl 0x8216d630
	ctx.lr = 0x8216D848;
	sub_8216D630(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216D858"))) PPC_WEAK_FUNC(sub_8216D858);
PPC_FUNC_IMPL(__imp__sub_8216D858) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a24e8
	ctx.lr = 0x8216D884;
	sub_821A24E8(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r11,-7560(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7560);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8216d8c8
	if (ctx.cr6.eq) goto loc_8216D8C8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8216d8c8
	if (ctx.cr6.eq) goto loc_8216D8C8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a2900
	ctx.lr = 0x8216D8C4;
	sub_821A2900(ctx, base);
	// b 0x8216d8cc
	goto loc_8216D8CC;
loc_8216D8C8:
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8216D8CC:
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

__attribute__((alias("__imp__sub_8216D8E4"))) PPC_WEAK_FUNC(sub_8216D8E4);
PPC_FUNC_IMPL(__imp__sub_8216D8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216D8E8"))) PPC_WEAK_FUNC(sub_8216D8E8);
PPC_FUNC_IMPL(__imp__sub_8216D8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8216D8F0;
	sub_8224878C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a24f0
	ctx.lr = 0x8216D90C;
	sub_821A24F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216db4c
	if (!ctx.cr6.eq) goto loc_8216DB4C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r30,-12408(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12408);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216db4c
	if (ctx.cr6.eq) goto loc_8216DB4C;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216db00
	if (ctx.cr6.eq) goto loc_8216DB00;
	// lwz r11,-19048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r9,300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
	// bl 0x821b29d0
	ctx.lr = 0x8216D96C;
	sub_821B29D0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r31,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r31.u32);
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// bl 0x821d25f8
	ctx.lr = 0x8216D980;
	sub_821D25F8(ctx, base);
	// stfs f31,496(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stfs f30,500(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lfs f0,8060(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f30,f0
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x821d1718
	ctx.lr = 0x8216D9A8;
	sub_821D1718(ctx, base);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8216da88
	if (ctx.cr6.eq) goto loc_8216DA88;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216d9f0
	if (ctx.cr6.eq) goto loc_8216D9F0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821acf78
	ctx.lr = 0x8216D9C8;
	sub_821ACF78(ctx, base);
loc_8216D9C8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-3296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3296);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821ddd88
	ctx.lr = 0x8216D9D8;
	sub_821DDD88(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821b1dc0
	ctx.lr = 0x8216D9E0;
	sub_821B1DC0(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8216D9F0:
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8216DA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f1,2144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821aa098
	ctx.lr = 0x8216DA40;
	sub_821AA098(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821acf78
	ctx.lr = 0x8216DA48;
	sub_821ACF78(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820dd230
	ctx.lr = 0x8216DA50;
	sub_820DD230(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821b6008
	ctx.lr = 0x8216DA58;
	sub_821B6008(ctx, base);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// lwz r3,-1736(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216dae8
	if (ctx.cr6.eq) goto loc_8216DAE8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x821d16c0
	ctx.lr = 0x8216DA70;
	sub_821D16C0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821b1dc0
	ctx.lr = 0x8216DA78;
	sub_821B1DC0(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8216DA88:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821acff8
	ctx.lr = 0x8216DA90;
	sub_821ACFF8(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216d9c8
	if (!ctx.cr6.eq) goto loc_8216D9C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821a9fe8
	ctx.lr = 0x8216DAC0;
	sub_821A9FE8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820dd230
	ctx.lr = 0x8216DAC8;
	sub_820DD230(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821b6008
	ctx.lr = 0x8216DAD0;
	sub_821B6008(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r3,-1736(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216dae8
	if (ctx.cr6.eq) goto loc_8216DAE8;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x821d16c0
	ctx.lr = 0x8216DAE8;
	sub_821D16C0(ctx, base);
loc_8216DAE8:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821b1dc0
	ctx.lr = 0x8216DAF0;
	sub_821B1DC0(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8216DB00:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216db24
	if (ctx.cr6.eq) goto loc_8216DB24;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821acf78
	ctx.lr = 0x8216DB14;
	sub_821ACF78(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8216DB24:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821acff8
	ctx.lr = 0x8216DB2C;
	sub_821ACFF8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-3296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3296);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8216db4c
	if (ctx.cr6.eq) goto loc_8216DB4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8216DB4C:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8216DB5C"))) PPC_WEAK_FUNC(sub_8216DB5C);
PPC_FUNC_IMPL(__imp__sub_8216DB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216DB60"))) PPC_WEAK_FUNC(sub_8216DB60);
PPC_FUNC_IMPL(__imp__sub_8216DB60) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x8216DB7C;
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

__attribute__((alias("__imp__sub_8216DB94"))) PPC_WEAK_FUNC(sub_8216DB94);
PPC_FUNC_IMPL(__imp__sub_8216DB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216DB98"))) PPC_WEAK_FUNC(sub_8216DB98);
PPC_FUNC_IMPL(__imp__sub_8216DB98) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x8216DBBC;
	sub_822AA648(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r11,r11,-7560
	ctx.r11.s64 = ctx.r11.s64 + -7560;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8216dc24
	if (ctx.cr6.eq) goto loc_8216DC24;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,-23160(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23164(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-23168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-23172(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23172);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8216dc44
	if (!ctx.cr6.eq) goto loc_8216DC44;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-23176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14464(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14464);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8216dc3c
	goto loc_8216DC3C;
loc_8216DC24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8216DC3C:
	// stfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_8216DC44:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-1736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1736);
	// bl 0x821d16c0
	ctx.lr = 0x8216DC54;
	sub_821D16C0(ctx, base);
	// lwz r3,-1736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1736);
	// bl 0x821d1670
	ctx.lr = 0x8216DC5C;
	sub_821D1670(ctx, base);
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

__attribute__((alias("__imp__sub_8216DC74"))) PPC_WEAK_FUNC(sub_8216DC74);
PPC_FUNC_IMPL(__imp__sub_8216DC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216DC78"))) PPC_WEAK_FUNC(sub_8216DC78);
PPC_FUNC_IMPL(__imp__sub_8216DC78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216DC88"))) PPC_WEAK_FUNC(sub_8216DC88);
PPC_FUNC_IMPL(__imp__sub_8216DC88) {
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
	// bl 0x821855f0
	ctx.lr = 0x8216DCA0;
	sub_821855F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-23156
	ctx.r9.s64 = ctx.r10.s64 + -23156;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8216DCD0"))) PPC_WEAK_FUNC(sub_8216DCD0);
PPC_FUNC_IMPL(__imp__sub_8216DCD0) {
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
	// addi r10,r11,-23156
	ctx.r10.s64 = ctx.r11.s64 + -23156;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82185670
	ctx.lr = 0x8216DCFC;
	sub_82185670(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216dd18
	if (ctx.cr6.eq) goto loc_8216DD18;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8216DD14;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216DD18:
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

__attribute__((alias("__imp__sub_8216DD30"))) PPC_WEAK_FUNC(sub_8216DD30);
PPC_FUNC_IMPL(__imp__sub_8216DD30) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x82163a30
	ctx.lr = 0x8216DD58;
	sub_82163A30(ctx, base);
	// bl 0x8213eaf8
	ctx.lr = 0x8216DD5C;
	sub_8213EAF8(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lwz r3,-468(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -468);
	// bl 0x821601a0
	ctx.lr = 0x8216DD68;
	sub_821601A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216DD78"))) PPC_WEAK_FUNC(sub_8216DD78);
PPC_FUNC_IMPL(__imp__sub_8216DD78) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// bl 0x8213eaf8
	ctx.lr = 0x8216DD98;
	sub_8213EAF8(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lwz r3,-468(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -468);
	// bl 0x821601a0
	ctx.lr = 0x8216DDA4;
	sub_821601A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216DDB4"))) PPC_WEAK_FUNC(sub_8216DDB4);
PPC_FUNC_IMPL(__imp__sub_8216DDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216DDB8"))) PPC_WEAK_FUNC(sub_8216DDB8);
PPC_FUNC_IMPL(__imp__sub_8216DDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8216DDC0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8216df88
	if (ctx.cr6.gt) goto loc_8216DF88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8216de8c
	// bdzf 4*cr6+eq,0x8216deb8
	// bdzf 4*cr6+eq,0x8216de20
	// bdzf 4*cr6+eq,0x8216df6c
	// bdzf 4*cr6+eq,0x8216de58
	// bdzf 4*cr6+eq,0x8216de44
	// bne cr6,0x8216de68
	if (!ctx.cr6.eq) goto loc_8216DE68;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x82229a70
	ctx.lr = 0x8216DE08;
	sub_82229A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216df88
	if (!ctx.cr6.eq) goto loc_8216DF88;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8216DE20:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-5064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5064);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216df88
	if (ctx.cr6.eq) goto loc_8216DF88;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8216DE44:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// bl 0x82213778
	ctx.lr = 0x8216DE50;
	sub_82213778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216df88
	if (ctx.cr6.eq) goto loc_8216DF88;
loc_8216DE58:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8216DE68:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1504);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216df88
	if (!ctx.cr6.eq) goto loc_8216DF88;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8216DE8C:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -468);
	// bl 0x8215ff30
	ctx.lr = 0x8216DE98;
	sub_8215FF30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216df88
	if (ctx.cr6.eq) goto loc_8216DF88;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r3,-468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -468);
	// bl 0x82160340
	ctx.lr = 0x8216DEB0;
	sub_82160340(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8216DEB8:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-8960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8960);
	// bl 0x8209fb08
	ctx.lr = 0x8216DEC4;
	sub_8209FB08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216df88
	if (ctx.cr6.eq) goto loc_8216DF88;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-5052
	ctx.r11.s64 = ctx.r11.s64 + -5052;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216def4
	if (!ctx.cr6.eq) goto loc_8216DEF4;
	// lwz r10,-8960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8960);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,1284(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1284);
	// stw r9,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r9.u32);
loc_8216DEF4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216df14
	if (!ctx.cr6.eq) goto loc_8216DF14;
	// lwz r10,-8960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8960);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,1284(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1284);
	// stw r11,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r11.u32);
loc_8216DF14:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-8952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8952);
	// bl 0x821f4870
	ctx.lr = 0x8216DF20;
	sub_821F4870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216df5c
	if (!ctx.cr6.eq) goto loc_8216DF5C;
	// lwz r3,-8952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8952);
	// bl 0x820a2230
	ctx.lr = 0x8216DF30;
	sub_820A2230(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r31,-8952(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8952);
	// lwz r30,-5068(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5068);
	// lwz r29,-5072(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5072);
	// bl 0x8215c058
	ctx.lr = 0x8216DF48;
	sub_8215C058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x820a26b8
	ctx.lr = 0x8216DF5C;
	sub_820A26B8(ctx, base);
loc_8216DF5C:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8216DF6C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8952);
	// bl 0x821f4870
	ctx.lr = 0x8216DF78;
	sub_821F4870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216df88
	if (ctx.cr6.eq) goto loc_8216DF88;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_8216DF88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8216DF90"))) PPC_WEAK_FUNC(sub_8216DF90);
PPC_FUNC_IMPL(__imp__sub_8216DF90) {
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
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8216dfe4
	if (ctx.cr6.eq) goto loc_8216DFE4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8216e008
	if (!ctx.cr6.eq) goto loc_8216E008;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// bl 0x8209fb08
	ctx.lr = 0x8216DFC8;
	sub_8209FB08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216e008
	if (ctx.cr6.eq) goto loc_8216E008;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x821636d8
	ctx.lr = 0x8216DFE0;
	sub_821636D8(ctx, base);
	// b 0x8216e008
	goto loc_8216E008;
loc_8216DFE4:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -468);
	// bl 0x8215ff30
	ctx.lr = 0x8216DFF0;
	sub_8215FF30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216e008
	if (ctx.cr6.eq) goto loc_8216E008;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r3,-468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -468);
	// bl 0x82160340
	ctx.lr = 0x8216E008;
	sub_82160340(ctx, base);
loc_8216E008:
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

__attribute__((alias("__imp__sub_8216E020"))) PPC_WEAK_FUNC(sub_8216E020);
PPC_FUNC_IMPL(__imp__sub_8216E020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8216E028;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8216e124
	if (ctx.cr6.eq) goto loc_8216E124;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8216e070
	if (ctx.cr6.eq) goto loc_8216E070;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8216e148
	if (!ctx.cr6.eq) goto loc_8216E148;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8952);
	// bl 0x821f4870
	ctx.lr = 0x8216E058;
	sub_821F4870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216e148
	if (ctx.cr6.eq) goto loc_8216E148;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8216E070:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-8960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8960);
	// bl 0x8209fb08
	ctx.lr = 0x8216E07C;
	sub_8209FB08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216e148
	if (ctx.cr6.eq) goto loc_8216E148;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-5052
	ctx.r11.s64 = ctx.r11.s64 + -5052;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216e0ac
	if (!ctx.cr6.eq) goto loc_8216E0AC;
	// lwz r10,-8960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8960);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,1284(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1284);
	// stw r9,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r9.u32);
loc_8216E0AC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216e0cc
	if (!ctx.cr6.eq) goto loc_8216E0CC;
	// lwz r10,-8960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8960);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,1284(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1284);
	// stw r11,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r11.u32);
loc_8216E0CC:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-8952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8952);
	// bl 0x821f4870
	ctx.lr = 0x8216E0D8;
	sub_821F4870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216e114
	if (!ctx.cr6.eq) goto loc_8216E114;
	// lwz r3,-8952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8952);
	// bl 0x820a2230
	ctx.lr = 0x8216E0E8;
	sub_820A2230(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r31,-8952(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8952);
	// lwz r30,-5068(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5068);
	// lwz r29,-5072(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5072);
	// bl 0x8215c058
	ctx.lr = 0x8216E100;
	sub_8215C058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x820a26b8
	ctx.lr = 0x8216E114;
	sub_820A26B8(ctx, base);
loc_8216E114:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8216E124:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -468);
	// bl 0x8215ff30
	ctx.lr = 0x8216E130;
	sub_8215FF30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216e148
	if (ctx.cr6.eq) goto loc_8216E148;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r3,-468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -468);
	// bl 0x82160340
	ctx.lr = 0x8216E148;
	sub_82160340(ctx, base);
loc_8216E148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8216E150"))) PPC_WEAK_FUNC(sub_8216E150);
PPC_FUNC_IMPL(__imp__sub_8216E150) {
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
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8216e224
	if (ctx.cr6.gt) goto loc_8216E224;
	// li r30,8
	ctx.r30.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8216e208
	// bdzf 4*cr6+eq,0x8216e224
	// bdzf 4*cr6+eq,0x8216e1bc
	// bdzf 4*cr6+eq,0x8216e224
	// bdzf 4*cr6+eq,0x8216e224
	// bdzf 4*cr6+eq,0x8216e1d4
	// bne cr6,0x8216e1ec
	if (!ctx.cr6.eq) goto loc_8216E1EC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x82229a70
	ctx.lr = 0x8216E1AC;
	sub_82229A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216e224
	if (!ctx.cr6.eq) goto loc_8216E224;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8216e220
	goto loc_8216E220;
loc_8216E1BC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-5064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5064);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216e1d4
	if (ctx.cr6.eq) goto loc_8216E1D4;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8216E1D4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// bl 0x82213778
	ctx.lr = 0x8216E1E0;
	sub_82213778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216e1ec
	if (ctx.cr6.eq) goto loc_8216E1EC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8216E1EC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1504);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216e224
	if (!ctx.cr6.eq) goto loc_8216E224;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8216e220
	goto loc_8216E220;
loc_8216E208:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8952);
	// bl 0x821f4870
	ctx.lr = 0x8216E214;
	sub_821F4870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216e224
	if (ctx.cr6.eq) goto loc_8216E224;
	// li r11,9
	ctx.r11.s64 = 9;
loc_8216E220:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8216E224:
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

__attribute__((alias("__imp__sub_8216E23C"))) PPC_WEAK_FUNC(sub_8216E23C);
PPC_FUNC_IMPL(__imp__sub_8216E23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E240"))) PPC_WEAK_FUNC(sub_8216E240);
PPC_FUNC_IMPL(__imp__sub_8216E240) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8215f968
	ctx.lr = 0x8216E278;
	sub_8215F968(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r11,-8552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8552);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x8215bec8
	ctx.lr = 0x8216E28C;
	sub_8215BEC8(ctx, base);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x822aa648
	ctx.lr = 0x8216E298;
	sub_822AA648(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x8216E29C;
	sub_8215BEC8(ctx, base);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8216E2B4"))) PPC_WEAK_FUNC(sub_8216E2B4);
PPC_FUNC_IMPL(__imp__sub_8216E2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E2B8"))) PPC_WEAK_FUNC(sub_8216E2B8);
PPC_FUNC_IMPL(__imp__sub_8216E2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8216E2C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r31,-1512(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1512);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8216e2f4
	if (!ctx.cr6.eq) goto loc_8216E2F4;
	// bl 0x82183078
	ctx.lr = 0x8216E2D8;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8216E2E4;
	sub_821837D0(ctx, base);
	// bl 0x820ccfc8
	ctx.lr = 0x8216E2E8;
	sub_820CCFC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216E2F0;
	sub_821837D0(ctx, base);
	// b 0x8216e334
	goto loc_8216E334;
loc_8216E2F4:
	// lwz r29,264(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x820da330
	ctx.lr = 0x8216E2FC;
	sub_820DA330(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8216e318
	if (ctx.cr6.eq) goto loc_8216E318;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212d948
	ctx.lr = 0x8216E30C;
	sub_8212D948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212d000
	ctx.lr = 0x8216E314;
	sub_8212D000(ctx, base);
	// b 0x8216e334
	goto loc_8216E334;
loc_8216E318:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216e334
	if (ctx.cr6.eq) goto loc_8216E334;
	// bl 0x82128f58
	ctx.lr = 0x8216E328;
	sub_82128F58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x82128020
	ctx.lr = 0x8216E334;
	sub_82128020(ctx, base);
loc_8216E334:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r11,-1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e360
	if (!ctx.cr6.eq) goto loc_8216E360;
	// bl 0x82183078
	ctx.lr = 0x8216E348;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8216E354;
	sub_821837D0(ctx, base);
	// bl 0x820cd038
	ctx.lr = 0x8216E358;
	sub_820CD038(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216E360;
	sub_821837D0(ctx, base);
loc_8216E360:
	// lwz r11,-1512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e384
	if (ctx.cr6.eq) goto loc_8216E384;
	// lwz r30,264(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// bl 0x820da330
	ctx.lr = 0x8216E374;
	sub_820DA330(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8216e384
	if (ctx.cr6.eq) goto loc_8216E384;
	// lwz r3,-1504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1504);
	// bl 0x8212dc10
	ctx.lr = 0x8216E384;
	sub_8212DC10(ctx, base);
loc_8216E384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8216E38C"))) PPC_WEAK_FUNC(sub_8216E38C);
PPC_FUNC_IMPL(__imp__sub_8216E38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E390"))) PPC_WEAK_FUNC(sub_8216E390);
PPC_FUNC_IMPL(__imp__sub_8216E390) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x8215bec8
	ctx.lr = 0x8216E3B4;
	sub_8215BEC8(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822aa648
	ctx.lr = 0x8216E3BC;
	sub_822AA648(ctx, base);
	// bl 0x8213f5d8
	ctx.lr = 0x8216E3C0;
	sub_8213F5D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216e240
	ctx.lr = 0x8216E3C8;
	sub_8216E240(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,-4984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4984, ctx.r11.u32);
	// bl 0x82181040
	ctx.lr = 0x8216E3D8;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216e3ec
	if (ctx.cr6.eq) goto loc_8216E3EC;
	// bl 0x82181040
	ctx.lr = 0x8216E3E4;
	sub_82181040(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82181370
	ctx.lr = 0x8216E3EC;
	sub_82181370(ctx, base);
loc_8216E3EC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8516(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8516);
	// bl 0x820d4e20
	ctx.lr = 0x8216E3FC;
	sub_820D4E20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216e2b8
	ctx.lr = 0x8216E404;
	sub_8216E2B8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8216E418"))) PPC_WEAK_FUNC(sub_8216E418);
PPC_FUNC_IMPL(__imp__sub_8216E418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8216e448
	// bdzf 4*cr6+eq,0x8216e44c
	// bdzf 4*cr6+eq,0x8216e450
	// bdzf 4*cr6+eq,0x8216e454
	// bne cr6,0x8216e458
	if (!ctx.cr6.eq) goto loc_8216E458;
	// b 0x8216ddb8
	sub_8216DDB8(ctx, base);
	return;
loc_8216E448:
	// b 0x8216df90
	sub_8216DF90(ctx, base);
	return;
loc_8216E44C:
	// b 0x8216e020
	sub_8216E020(ctx, base);
	return;
loc_8216E450:
	// b 0x8216e020
	sub_8216E020(ctx, base);
	return;
loc_8216E454:
	// b 0x8216e150
	sub_8216E150(ctx, base);
	return;
loc_8216E458:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8216e478
	if (ctx.cr6.eq) goto loc_8216E478;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_8216E478:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216E484"))) PPC_WEAK_FUNC(sub_8216E484);
PPC_FUNC_IMPL(__imp__sub_8216E484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E488"))) PPC_WEAK_FUNC(sub_8216E488);
PPC_FUNC_IMPL(__imp__sub_8216E488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8216E490;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x8216E49C;
	sub_8215BEC8(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822aa648
	ctx.lr = 0x8216E4A4;
	sub_822AA648(ctx, base);
	// bl 0x8213f5d8
	ctx.lr = 0x8216E4A8;
	sub_8213F5D8(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-4984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4984, ctx.r11.u32);
	// bl 0x8216e240
	ctx.lr = 0x8216E4BC;
	sub_8216E240(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8516(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8516);
	// bl 0x820d4e20
	ctx.lr = 0x8216E4CC;
	sub_820D4E20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216e2b8
	ctx.lr = 0x8216E4D4;
	sub_8216E2B8(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-8952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8952);
	// bl 0x820a2230
	ctx.lr = 0x8216E4E0;
	sub_820A2230(ctx, base);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lwz r31,-8952(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8952);
	// lwz r30,-5068(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5068);
	// lwz r29,-5072(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + -5072);
	// bl 0x8215c058
	ctx.lr = 0x8216E4F8;
	sub_8215C058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x820a26b8
	ctx.lr = 0x8216E50C;
	sub_820A26B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8216E514"))) PPC_WEAK_FUNC(sub_8216E514);
PPC_FUNC_IMPL(__imp__sub_8216E514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E518"))) PPC_WEAK_FUNC(sub_8216E518);
PPC_FUNC_IMPL(__imp__sub_8216E518) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x8216e488
	sub_8216E488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216E52C"))) PPC_WEAK_FUNC(sub_8216E52C);
PPC_FUNC_IMPL(__imp__sub_8216E52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E530"))) PPC_WEAK_FUNC(sub_8216E530);
PPC_FUNC_IMPL(__imp__sub_8216E530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8216E550"))) PPC_WEAK_FUNC(sub_8216E550);
PPC_FUNC_IMPL(__imp__sub_8216E550) {
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
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8216E580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c98
	ctx.lr = 0x8216E588;
	sub_823C3C98(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8216E59C"))) PPC_WEAK_FUNC(sub_8216E59C);
PPC_FUNC_IMPL(__imp__sub_8216E59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E5A0"))) PPC_WEAK_FUNC(sub_8216E5A0);
PPC_FUNC_IMPL(__imp__sub_8216E5A0) {
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
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r11,2780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2780);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r3,16664(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16664);
	// beq cr6,0x8216e630
	if (ctx.cr6.eq) goto loc_8216E630;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8216e5fc
	if (ctx.cr6.eq) goto loc_8216E5FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8216e660
	if (!ctx.cr6.eq) goto loc_8216E660;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r11.u32);
	// stw r10,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216E5FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216E60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216e660
	if (!ctx.cr6.eq) goto loc_8216E660;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,2780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2780, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216E630:
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// bgt 0x8216e660
	if (ctx.cr0.gt) goto loc_8216E660;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216E650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,2780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2780, ctx.r8.u32);
loc_8216E660:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8216E674"))) PPC_WEAK_FUNC(sub_8216E674);
PPC_FUNC_IMPL(__imp__sub_8216E674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E678"))) PPC_WEAK_FUNC(sub_8216E678);
PPC_FUNC_IMPL(__imp__sub_8216E678) {
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
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x8216E698;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x821859a0
	ctx.lr = 0x8216E6AC;
	sub_821859A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-23128
	ctx.r9.s64 = ctx.r11.s64 + -23128;
	// addi r8,r10,-23136
	ctx.r8.s64 = ctx.r10.s64 + -23136;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x823c2ff0
	ctx.lr = 0x8216E6D0;
	sub_823C2FF0(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x823c58b0
	ctx.lr = 0x8216E6E0;
	sub_823C58B0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r7,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r7.u32);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x823c35b8
	ctx.lr = 0x8216E704;
	sub_823C35B8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// addi r3,r31,2804
	ctx.r3.s64 = ctx.r31.s64 + 2804;
	// stw r6,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r6.u32);
	// stw r30,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r30.u32);
	// stw r30,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r30.u32);
	// stw r30,2772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2772, ctx.r30.u32);
	// stw r30,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r30.u32);
	// stw r30,2780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2780, ctx.r30.u32);
	// stw r30,2784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2784, ctx.r30.u32);
	// stw r30,2788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2788, ctx.r30.u32);
	// stw r30,2792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2792, ctx.r30.u32);
	// stw r30,2796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2796, ctx.r30.u32);
	// stw r30,2800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2800, ctx.r30.u32);
	// bl 0x82354410
	ctx.lr = 0x8216E740;
	sub_82354410(ctx, base);
	// stw r30,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r30.u32);
	// stw r30,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r30.u32);
	// addi r3,r31,2836
	ctx.r3.s64 = ctx.r31.s64 + 2836;
	// stw r30,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r30.u32);
	// bl 0x82177c48
	ctx.lr = 0x8216E754;
	sub_82177C48(ctx, base);
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lwz r3,15472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216e778
	if (ctx.cr6.eq) goto loc_8216E778;
	// bl 0x823c3d30
	ctx.lr = 0x8216E768;
	sub_823C3D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216e778
	if (ctx.cr6.eq) goto loc_8216E778;
	// lwz r3,15472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15472);
	// bl 0x82171090
	ctx.lr = 0x8216E778;
	sub_82171090(ctx, base);
loc_8216E778:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-7560
	ctx.r8.s64 = ctx.r11.s64 + -7560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9852(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9852);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lfs f0,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
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

__attribute__((alias("__imp__sub_8216E7BC"))) PPC_WEAK_FUNC(sub_8216E7BC);
PPC_FUNC_IMPL(__imp__sub_8216E7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E7C0"))) PPC_WEAK_FUNC(sub_8216E7C0);
PPC_FUNC_IMPL(__imp__sub_8216E7C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x8216f638
	sub_8216F638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8216E7C8"))) PPC_WEAK_FUNC(sub_8216E7C8);
PPC_FUNC_IMPL(__imp__sub_8216E7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8216E7D0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,2772(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2772);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-23128
	ctx.r9.s64 = ctx.r11.s64 + -23128;
	// addi r8,r10,-23136
	ctx.r8.s64 = ctx.r10.s64 + -23136;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216e814
	if (ctx.cr6.eq) goto loc_8216E814;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216E814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216E814:
	// lwz r3,2832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2832);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,2772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2772, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216e83c
	if (ctx.cr6.eq) goto loc_8216E83C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216E83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216E83C:
	// stw r30,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r30.u32);
	// addi r3,r31,2836
	ctx.r3.s64 = ctx.r31.s64 + 2836;
	// bl 0x82177bf0
	ctx.lr = 0x8216E848;
	sub_82177BF0(ctx, base);
	// addi r3,r31,2804
	ctx.r3.s64 = ctx.r31.s64 + 2804;
	// bl 0x823544f8
	ctx.lr = 0x8216E850;
	sub_823544F8(ctx, base);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x823c31a0
	ctx.lr = 0x8216E858;
	sub_823C31A0(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x823c52a0
	ctx.lr = 0x8216E860;
	sub_823C52A0(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x823c3048
	ctx.lr = 0x8216E868;
	sub_823C3048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x8216E870;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x8216E878;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8216E880"))) PPC_WEAK_FUNC(sub_8216E880);
PPC_FUNC_IMPL(__imp__sub_8216E880) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r30.u32);
	// stw r30,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r30.u32);
	// stw r30,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r30.u32);
	// stw r30,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r30.u32);
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8216E8D0;
	sub_8215BD08(ctx, base);
	// bl 0x8216cd48
	ctx.lr = 0x8216E8D4;
	sub_8216CD48(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x8216E8D8;
	sub_8215BD08(ctx, base);
	// lis r7,-32177
	ctx.r7.s64 = -2108751872;
	// li r6,-1
	ctx.r6.s64 = -1;
	// rotlwi r5,r30,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// ori r4,r5,16384
	ctx.r4.u64 = ctx.r5.u64 | 16384;
	// stw r30,-4772(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4772, ctx.r30.u32);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r4,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r4.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216E910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,15464(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15464);
	// bl 0x8216db98
	ctx.lr = 0x8216E920;
	sub_8216DB98(ctx, base);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,-608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -608, ctx.r30.u32);
	// lwz r3,-8460(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8460);
	// bl 0x820e52a8
	ctx.lr = 0x8216E938;
	sub_820E52A8(ctx, base);
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// lwz r3,15468(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15468);
	// bl 0x8216dc78
	ctx.lr = 0x8216E944;
	sub_8216DC78(ctx, base);
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

__attribute__((alias("__imp__sub_8216E95C"))) PPC_WEAK_FUNC(sub_8216E95C);
PPC_FUNC_IMPL(__imp__sub_8216E95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216E960"))) PPC_WEAK_FUNC(sub_8216E960);
PPC_FUNC_IMPL(__imp__sub_8216E960) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e988
	if (!ctx.cr6.eq) goto loc_8216E988;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821efaa0
	ctx.lr = 0x8216E988;
	sub_821EFAA0(ctx, base);
loc_8216E988:
	// bl 0x8215bd60
	ctx.lr = 0x8216E98C;
	sub_8215BD60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,44(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82177748
	ctx.lr = 0x8216E9AC;
	sub_82177748(ctx, base);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lwz r11,-480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216e9c4
	if (ctx.cr6.eq) goto loc_8216E9C4;
	// bl 0x8215bd60
	ctx.lr = 0x8216E9C0;
	sub_8215BD60(ctx, base);
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
loc_8216E9C4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8216E9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,4639
	ctx.r4.u64 = ctx.r4.u64 | 4639;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8208f758
	ctx.lr = 0x8216E9F8;
	sub_8208F758(ctx, base);
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

__attribute__((alias("__imp__sub_8216EA0C"))) PPC_WEAK_FUNC(sub_8216EA0C);
PPC_FUNC_IMPL(__imp__sub_8216EA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216EA10"))) PPC_WEAK_FUNC(sub_8216EA10);
PPC_FUNC_IMPL(__imp__sub_8216EA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8216EA18;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-32182
	ctx.r23.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-480(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216ec14
	if (ctx.cr6.eq) goto loc_8216EC14;
	// addi r27,r3,672
	ctx.r27.s64 = ctx.r3.s64 + 672;
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822aa648
	ctx.lr = 0x8216EA40;
	sub_822AA648(ctx, base);
	// addi r26,r31,1184
	ctx.r26.s64 = ctx.r31.s64 + 1184;
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822aa648
	ctx.lr = 0x8216EA50;
	sub_822AA648(ctx, base);
	// addi r25,r31,1696
	ctx.r25.s64 = ctx.r31.s64 + 1696;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822aa648
	ctx.lr = 0x8216EA60;
	sub_822AA648(ctx, base);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r4,30117
	ctx.r4.s64 = 30117;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216EA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-484(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -484);
	// bl 0x8215cea8
	ctx.lr = 0x8216EA8C;
	sub_8215CEA8(ctx, base);
	// lwz r11,-484(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -484);
	// lwz r24,4(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215cea8
	ctx.lr = 0x8216EA9C;
	sub_8215CEA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8216eac8
	if (!ctx.cr6.eq) goto loc_8216EAC8;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,30209
	ctx.r4.s64 = 30209;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216EAC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r24,255
	ctx.r24.s64 = 255;
loc_8216EAC8:
	// lwz r3,-484(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -484);
	// bl 0x8215cea8
	ctx.lr = 0x8216EAD0;
	sub_8215CEA8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8216eafc
	if (!ctx.cr6.eq) goto loc_8216EAFC;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,30210
	ctx.r4.s64 = 30210;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216EAF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r24,255
	ctx.r24.s64 = 255;
loc_8216EAFC:
	// bl 0x8215bd60
	ctx.lr = 0x8216EB00;
	sub_8215BD60(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216eb34
	if (ctx.cr6.eq) goto loc_8216EB34;
	// bl 0x8215bd60
	ctx.lr = 0x8216EB10;
	sub_8215BD60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,30200
	ctx.r4.s64 = 30200;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8216EB30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8216EB34:
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,25102
	ctx.r4.s64 = 25102;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216EB4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r28,r9,65001
	ctx.r28.u64 = ctx.r9.u64 | 65001;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r8,256
	ctx.r8.s64 = 256;
	// bl 0x82256be8
	ctx.lr = 0x8216EB70;
	sub_82256BE8(ctx, base);
	// stw r27,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r27.u32);
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,30146
	ctx.r4.s64 = 30146;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r27,r31,668
	ctx.r27.s64 = ctx.r31.s64 + 668;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8216EB90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r8,256
	ctx.r8.s64 = 256;
	// bl 0x82256be8
	ctx.lr = 0x8216EBAC;
	sub_82256BE8(ctx, base);
	// li r8,256
	ctx.r8.s64 = 256;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82256be8
	ctx.lr = 0x8216EBC8;
	sub_82256BE8(ctx, base);
	// addi r30,r31,2728
	ctx.r30.s64 = ctx.r31.s64 + 2728;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x8216EBD8;
	sub_822AA648(ctx, base);
	// addi r10,r31,2720
	ctx.r10.s64 = ctx.r31.s64 + 2720;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82256628
	ctx.lr = 0x8216EC00;
	sub_82256628(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bne cr6,0x8216ec14
	if (!ctx.cr6.eq) goto loc_8216EC14;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_8216EC14:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-480(r23)
	PPC_STORE_U32(ctx.r23.u32 + -480, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8216EC28"))) PPC_WEAK_FUNC(sub_8216EC28);
PPC_FUNC_IMPL(__imp__sub_8216EC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8216EC30;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r11,-788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x821ea8b8
	ctx.lr = 0x8216EC5C;
	sub_821EA8B8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ea6d8
	ctx.lr = 0x8216EC70;
	sub_821EA6D8(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x823c3410
	ctx.lr = 0x8216EC78;
	sub_823C3410(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c3240
	ctx.lr = 0x8216EC88;
	sub_823C3240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x8216EC90;
	sub_823C3C70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8216EC98"))) PPC_WEAK_FUNC(sub_8216EC98);
PPC_FUNC_IMPL(__imp__sub_8216EC98) {
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
	// lwz r11,2760(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2760);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8216ee9c
	if (ctx.cr6.gt) goto loc_8216EE9C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8216ed30
	// bdzf 4*cr6+eq,0x8216edbc
	// bdzf 4*cr6+eq,0x8216edfc
	// bdzf 4*cr6+eq,0x8216ee2c
	// bdzf 4*cr6+eq,0x8216ee5c
	// bne cr6,0x8216ee94
	if (!ctx.cr6.eq) goto loc_8216EE94;
	// bl 0x8215bd08
	ctx.lr = 0x8216ECDC;
	sub_8215BD08(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,-9912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216ee94
	if (ctx.cr6.eq) goto loc_8216EE94;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8216ee9c
	if (!ctx.cr6.eq) goto loc_8216EE9C;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r9.u32);
	// stw r11,-5960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5960, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216ED30:
	// lwz r3,2772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216ED44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216ee9c
	if (ctx.cr6.eq) goto loc_8216EE9C;
	// lwz r3,2772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216ED60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x8216ed74
	if (ctx.cr6.eq) goto loc_8216ED74;
	// stw r11,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r11.u32);
	// b 0x8216ed78
	goto loc_8216ED78;
loc_8216ED74:
	// stw r11,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r11.u32);
loc_8216ED78:
	// lwz r3,2772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216ed98
	if (ctx.cr6.eq) goto loc_8216ED98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216ED98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216ED98:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2772, ctx.r11.u32);
	// stw r11,-5960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5960, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216EDBC:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8216ee9c
	if (!ctx.cr6.eq) goto loc_8216EE9C;
	// bl 0x8216dd78
	ctx.lr = 0x8216EDD4;
	sub_8216DD78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82163a30
	ctx.lr = 0x8216EDE0;
	sub_82163A30(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216EDFC:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8216ee9c
	if (!ctx.cr6.eq) goto loc_8216EE9C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216EE2C:
	// bl 0x82177bd0
	ctx.lr = 0x8216EE30;
	sub_82177BD0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2836
	ctx.r3.s64 = ctx.r31.s64 + 2836;
	// bl 0x82177d40
	ctx.lr = 0x8216EE40;
	sub_82177D40(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216EE5C:
	// lwz r11,2836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2836);
	// addi r3,r31,2836
	ctx.r3.s64 = ctx.r31.s64 + 2836;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216EE70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216ee9c
	if (ctx.cr6.eq) goto loc_8216EE9C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216EE94:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r11.u32);
loc_8216EE9C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8216EEB0"))) PPC_WEAK_FUNC(sub_8216EEB0);
PPC_FUNC_IMPL(__imp__sub_8216EEB0) {
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
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216ef40
	if (ctx.cr6.eq) goto loc_8216EF40;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8216ef40
	if (!ctx.cr6.eq) goto loc_8216EF40;
	// lwz r30,248(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// bl 0x8215bd08
	ctx.lr = 0x8216EEEC;
	sub_8215BD08(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8216EEF8;
	sub_8215BD08(ctx, base);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216ef24
	if (!ctx.cr6.eq) goto loc_8216EF24;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82177748
	ctx.lr = 0x8216EF1C;
	sub_82177748(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x8216EF20;
	sub_8215BD08(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_8216EF24:
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r11.u32);
	// ori r3,r3,60174
	ctx.r3.u64 = ctx.r3.u64 | 60174;
	// bl 0x8208f658
	ctx.lr = 0x8216EF38;
	sub_8208F658(ctx, base);
	// li r10,180
	ctx.r10.s64 = 180;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
loc_8216EF40:
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

__attribute__((alias("__imp__sub_8216EF58"))) PPC_WEAK_FUNC(sub_8216EF58);
PPC_FUNC_IMPL(__imp__sub_8216EF58) {
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
	// bl 0x82177450
	ctx.lr = 0x8216EF74;
	sub_82177450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216efc8
	if (ctx.cr6.eq) goto loc_8216EFC8;
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// bgt 0x8216efc8
	if (ctx.cr0.gt) goto loc_8216EFC8;
	// bl 0x8215bd08
	ctx.lr = 0x8216EF90;
	sub_8215BD08(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8215bd08
	ctx.lr = 0x8216EF98;
	sub_8215BD08(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8216efb8
	if (ctx.cr6.eq) goto loc_8216EFB8;
	// bl 0x8215bd08
	ctx.lr = 0x8216EFA8;
	sub_8215BD08(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8216EFB4;
	sub_8215BD08(ctx, base);
	// stw r30,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r30.u32);
loc_8216EFB8:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r11.u32);
	// stw r10,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r10.u32);
loc_8216EFC8:
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

__attribute__((alias("__imp__sub_8216EFE0"))) PPC_WEAK_FUNC(sub_8216EFE0);
PPC_FUNC_IMPL(__imp__sub_8216EFE0) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-8460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x8215bd08
	ctx.lr = 0x8216F004;
	sub_8215BD08(ctx, base);
	// lwz r11,2776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2776);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8216f1b0
	if (ctx.cr6.gt) goto loc_8216F1B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8216f080
	// bdzf 4*cr6+eq,0x8216f0ac
	// bdzf 4*cr6+eq,0x8216f128
	// bne cr6,0x8216f184
	if (!ctx.cr6.eq) goto loc_8216F184;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216F044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216f078
	if (ctx.cr6.eq) goto loc_8216F078;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// stw r11,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r11.u32);
	// lwz r3,15472(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15472);
	// bl 0x821707c0
	ctx.lr = 0x8216F064;
	sub_821707C0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r9.u32);
	// stw r8,2780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2780, ctx.r8.u32);
	// b 0x8216f1b0
	goto loc_8216F1B0;
loc_8216F078:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8216f1ac
	goto loc_8216F1AC;
loc_8216F080:
	// bl 0x8215bd08
	ctx.lr = 0x8216F084;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x820e5460
	ctx.lr = 0x8216F0A0;
	sub_820E5460(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r9.u32);
	// b 0x8216f1b0
	goto loc_8216F1B0;
loc_8216F0AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5218
	ctx.lr = 0x8216F0B4;
	sub_820E5218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216f1b0
	if (!ctx.cr6.eq) goto loc_8216F1B0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216F0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216f10c
	if (ctx.cr6.eq) goto loc_8216F10C;
	// lwz r30,360(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// bl 0x8215bd08
	ctx.lr = 0x8216F0E4;
	sub_8215BD08(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// bl 0x821707c0
	ctx.lr = 0x8216F0F8;
	sub_821707C0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r10.u32);
	// stw r9,2780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2780, ctx.r9.u32);
	// b 0x8216f1b0
	goto loc_8216F1B0;
loc_8216F10C:
	// bl 0x8215bd08
	ctx.lr = 0x8216F110;
	sub_8215BD08(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r10,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r10.u32);
	// b 0x8216f1b0
	goto loc_8216F1B0;
loc_8216F128:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x8216F130;
	sub_821EBB58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,30528
	ctx.r11.s64 = 30528;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8216F148;
	sub_8215BD08(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r3,-784(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -784);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8216F178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r6,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r6.u32);
	// b 0x8216f1b0
	goto loc_8216F1B0;
loc_8216F184:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f1b0
	if (ctx.cr6.eq) goto loc_8216F1B0;
	// lwz r11,1812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216f1b0
	if (!ctx.cr6.eq) goto loc_8216F1B0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r10,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r10.u32);
loc_8216F1AC:
	// stw r11,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r11.u32);
loc_8216F1B0:
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

__attribute__((alias("__imp__sub_8216F1C8"))) PPC_WEAK_FUNC(sub_8216F1C8);
PPC_FUNC_IMPL(__imp__sub_8216F1C8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216F200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x823c3468
	ctx.lr = 0x8216F208;
	sub_823C3468(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// bl 0x823c3ca8
	ctx.lr = 0x8216F218;
	sub_823C3CA8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r8.u32);
	// bl 0x82163ee8
	ctx.lr = 0x8216F224;
	sub_82163EE8(ctx, base);
	// addi r4,r3,2296
	ctx.r4.s64 = ctx.r3.s64 + 2296;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x82248a40
	ctx.lr = 0x8216F234;
	sub_82248A40(ctx, base);
	// lbz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// bl 0x821de190
	ctx.lr = 0x8216F240;
	sub_821DE190(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-1208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1208);
	// bl 0x821de188
	ctx.lr = 0x8216F24C;
	sub_821DE188(ctx, base);
	// lwz r3,-1208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1208);
	// bl 0x821de178
	ctx.lr = 0x8216F254;
	sub_821DE178(ctx, base);
	// bl 0x821142a0
	ctx.lr = 0x8216F258;
	sub_821142A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f330
	if (ctx.cr6.eq) goto loc_8216F330;
	// lbz r11,143(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,147(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 147);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lbz r6,145(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
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
	// li r4,0
	ctx.r4.s64 = 0;
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82114430
	ctx.lr = 0x8216F2E4;
	sub_82114430(ctx, base);
	// fmuls f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82114430
	ctx.lr = 0x8216F300;
	sub_82114430(ctx, base);
	// fmuls f13,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82114430
	ctx.lr = 0x8216F320;
	sub_82114430(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82114430
	ctx.lr = 0x8216F330;
	sub_82114430(ctx, base);
loc_8216F330:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_8216F354"))) PPC_WEAK_FUNC(sub_8216F354);
PPC_FUNC_IMPL(__imp__sub_8216F354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216F358"))) PPC_WEAK_FUNC(sub_8216F358);
PPC_FUNC_IMPL(__imp__sub_8216F358) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216F380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x823c3468
	ctx.lr = 0x8216F388;
	sub_823C3468(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// bl 0x823c3cd8
	ctx.lr = 0x8216F398;
	sub_823C3CD8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r8.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8216F3B4"))) PPC_WEAK_FUNC(sub_8216F3B4);
PPC_FUNC_IMPL(__imp__sub_8216F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216F3B8"))) PPC_WEAK_FUNC(sub_8216F3B8);
PPC_FUNC_IMPL(__imp__sub_8216F3B8) {
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
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8216f48c
	if (ctx.cr6.gt) goto loc_8216F48C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8216f414
	// bdzf 4*cr6+eq,0x8216f430
	// bne cr6,0x8216f44c
	if (!ctx.cr6.eq) goto loc_8216F44C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216f48c
	if (ctx.cr6.eq) goto loc_8216F48C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216F414:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216F430:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216F44C:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8216f474
	if (!ctx.cr6.lt) goto loc_8216F474;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216F474:
	// bl 0x8209eda0
	ctx.lr = 0x8216F478;
	sub_8209EDA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216F48C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216F48C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8216F4A0"))) PPC_WEAK_FUNC(sub_8216F4A0);
PPC_FUNC_IMPL(__imp__sub_8216F4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8216F4A8;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f5a0
	if (ctx.cr6.eq) goto loc_8216F5A0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8216f5a0
	if (ctx.cr6.eq) goto loc_8216F5A0;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216f5a0
	if (ctx.cr6.eq) goto loc_8216F5A0;
	// lwz r10,856(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8216f5a0
	if (ctx.cr6.eq) goto loc_8216F5A0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216f5a0
	if (ctx.cr6.eq) goto loc_8216F5A0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-788(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea570
	ctx.lr = 0x8216F508;
	sub_821EA570(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216f5a0
	if (ctx.cr6.eq) goto loc_8216F5A0;
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x821ea6d8
	ctx.lr = 0x8216F524;
	sub_821EA6D8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// lfs f31,11300(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x8216f54c
	if (!ctx.cr6.eq) goto loc_8216F54C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,364
	ctx.r3.s64 = ctx.r30.s64 + 364;
	// bl 0x823c32a0
	ctx.lr = 0x8216F544;
	sub_823C32A0(ctx, base);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// b 0x8216f554
	goto loc_8216F554;
loc_8216F54C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
loc_8216F554:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ea6c0
	ctx.lr = 0x8216F55C;
	sub_821EA6C0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8216f594
	if (!ctx.cr6.eq) goto loc_8216F594;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x821ea6f0
	ctx.lr = 0x8216F588;
	sub_821EA6F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8216F594:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ea6f0
	ctx.lr = 0x8216F5A0;
	sub_821EA6F0(ctx, base);
loc_8216F5A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8216F5AC"))) PPC_WEAK_FUNC(sub_8216F5AC);
PPC_FUNC_IMPL(__imp__sub_8216F5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216F5B0"))) PPC_WEAK_FUNC(sub_8216F5B0);
PPC_FUNC_IMPL(__imp__sub_8216F5B0) {
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
	// bl 0x8215bd08
	ctx.lr = 0x8216F5CC;
	sub_8215BD08(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8216F5DC;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x8216F5E0;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8216f5fc
	if (!ctx.cr6.eq) goto loc_8216F5FC;
	// bl 0x82155510
	ctx.lr = 0x8216F5F0;
	sub_82155510(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// b 0x8216f620
	goto loc_8216F620;
loc_8216F5FC:
	// bl 0x82155578
	ctx.lr = 0x8216F600;
	sub_82155578(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216F620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216F620:
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

__attribute__((alias("__imp__sub_8216F638"))) PPC_WEAK_FUNC(sub_8216F638);
PPC_FUNC_IMPL(__imp__sub_8216F638) {
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
	// bl 0x8216e7c8
	ctx.lr = 0x8216F658;
	sub_8216E7C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f674
	if (ctx.cr6.eq) goto loc_8216F674;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8216F670;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216F674:
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

__attribute__((alias("__imp__sub_8216F68C"))) PPC_WEAK_FUNC(sub_8216F68C);
PPC_FUNC_IMPL(__imp__sub_8216F68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216F690"))) PPC_WEAK_FUNC(sub_8216F690);
PPC_FUNC_IMPL(__imp__sub_8216F690) {
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
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8216f7f0
	if (ctx.cr6.gt) goto loc_8216F7F0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8216f708
	// bdzf 4*cr6+eq,0x8216f720
	// bdzf 4*cr6+eq,0x8216f758
	// bdzf 4*cr6+eq,0x8216f7b4
	// bne cr6,0x8216f7d0
	if (!ctx.cr6.eq) goto loc_8216F7D0;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f6ec
	if (ctx.cr6.eq) goto loc_8216F6EC;
	// bl 0x82170848
	ctx.lr = 0x8216F6E4;
	sub_82170848(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216f7f0
	if (!ctx.cr6.eq) goto loc_8216F7F0;
loc_8216F6EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216e880
	ctx.lr = 0x8216F6F4;
	sub_8216E880(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216e960
	ctx.lr = 0x8216F6FC;
	sub_8216E960(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r11.u32);
	// b 0x8216f7f0
	goto loc_8216F7F0;
loc_8216F708:
	// bl 0x8213e7a0
	ctx.lr = 0x8216F70C;
	sub_8213E7A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216f7f0
	if (ctx.cr6.eq) goto loc_8216F7F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r11.u32);
	// b 0x8216f7f0
	goto loc_8216F7F0;
loc_8216F720:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea570
	ctx.lr = 0x8216F72C;
	sub_821EA570(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216f7f0
	if (ctx.cr6.eq) goto loc_8216F7F0;
	// bl 0x82177450
	ctx.lr = 0x8216F738;
	sub_82177450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216f7f0
	if (ctx.cr6.eq) goto loc_8216F7F0;
	// bl 0x8215bec8
	ctx.lr = 0x8216F744;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// stw r10,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r10.u32);
	// b 0x8216f7f0
	goto loc_8216F7F0;
loc_8216F758:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8216F77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216f7f0
	if (ctx.cr6.eq) goto loc_8216F7F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216F798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216f7a8
	if (ctx.cr6.eq) goto loc_8216F7A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8222e098
	ctx.lr = 0x8216F7A8;
	sub_8222E098(ctx, base);
loc_8216F7A8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r11.u32);
	// b 0x8216f7f0
	goto loc_8216F7F0;
loc_8216F7B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216ea10
	ctx.lr = 0x8216F7BC;
	sub_8216EA10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216f7f0
	if (ctx.cr6.eq) goto loc_8216F7F0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r11.u32);
	// b 0x8216f7f0
	goto loc_8216F7F0;
loc_8216F7D0:
	// lwz r11,2728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2728);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8216f7f0
	if (ctx.cr6.eq) goto loc_8216F7F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216F7F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216F7F0:
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

__attribute__((alias("__imp__sub_8216F808"))) PPC_WEAK_FUNC(sub_8216F808);
PPC_FUNC_IMPL(__imp__sub_8216F808) {
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
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r9.u32);
	// lwz r30,-780(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -780);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216f8d0
	if (ctx.cr6.eq) goto loc_8216F8D0;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216f858
	if (ctx.cr6.eq) goto loc_8216F858;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5cd0
	ctx.lr = 0x8216F850;
	sub_820E5CD0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8216f8d0
	if (!ctx.cr6.eq) goto loc_8216F8D0;
loc_8216F858:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822344a8
	ctx.lr = 0x8216F860;
	sub_822344A8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8216f8d0
	if (!ctx.cr6.eq) goto loc_8216F8D0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216f8b8
	if (ctx.cr6.eq) goto loc_8216F8B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,30
	ctx.r7.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x8216F894;
	sub_823C31B0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8216F8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r7.u32);
	// stw r6,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r6.u32);
loc_8216F8B8:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8216f8d0
	if (!ctx.cr6.eq) goto loc_8216F8D0;
	// bl 0x8216e390
	ctx.lr = 0x8216F8D0;
	sub_8216E390(ctx, base);
loc_8216F8D0:
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

__attribute__((alias("__imp__sub_8216F8E8"))) PPC_WEAK_FUNC(sub_8216F8E8);
PPC_FUNC_IMPL(__imp__sub_8216F8E8) {
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
	// lwz r11,2824(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2824);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8216fa9c
	if (ctx.cr6.gt) goto loc_8216FA9C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8216f9e8
	// bdzf 4*cr6+eq,0x8216fa50
	// bne cr6,0x8216fa68
	if (!ctx.cr6.eq) goto loc_8216FA68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82080068
	ctx.lr = 0x8216F92C;
	sub_82080068(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8216F930;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8216F93C;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8216F944;
	sub_821830F8(ctx, base);
	// lwz r3,2832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f964
	if (ctx.cr6.eq) goto loc_8216F964;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216F964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216F964:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r11.u32);
	// ori r3,r3,32900
	ctx.r3.u64 = ctx.r3.u64 | 32900;
	// bl 0x82080000
	ctx.lr = 0x8216F978;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f98c
	if (ctx.cr6.eq) goto loc_8216F98C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82172f70
	ctx.lr = 0x8216F988;
	sub_82172F70(ctx, base);
	// b 0x8216f990
	goto loc_8216F990;
loc_8216F98C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216F990:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r3.u32);
	// stw r11,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r11.u32);
	// bl 0x82163728
	ctx.lr = 0x8216F9A0;
	sub_82163728(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8216f9b4
	if (!ctx.cr6.eq) goto loc_8216F9B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82163a30
	ctx.lr = 0x8216F9B4;
	sub_82163A30(ctx, base);
loc_8216F9B4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8216f9d4
	if (ctx.cr6.lt) goto loc_8216F9D4;
	// bne cr6,0x8216f9dc
	if (!ctx.cr6.eq) goto loc_8216F9DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8216F9C8;
	sub_821830F8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821837d0
	ctx.lr = 0x8216F9D0;
	sub_821837D0(ctx, base);
	// b 0x8216fa9c
	goto loc_8216FA9C;
loc_8216F9D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x8216F9DC;
	sub_821830F8(ctx, base);
loc_8216F9DC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821837d0
	ctx.lr = 0x8216F9E4;
	sub_821837D0(ctx, base);
	// b 0x8216fa9c
	goto loc_8216FA9C;
loc_8216F9E8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fa04
	if (ctx.cr6.eq) goto loc_8216FA04;
	// bl 0x821638c0
	ctx.lr = 0x8216F9FC;
	sub_821638C0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8216fa9c
	if (!ctx.cr6.eq) goto loc_8216FA9C;
loc_8216FA04:
	// lwz r3,2832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fa9c
	if (ctx.cr6.eq) goto loc_8216FA9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216FA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216fa9c
	if (ctx.cr6.eq) goto loc_8216FA9C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8216fa5c
	if (!ctx.cr6.eq) goto loc_8216FA5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821636d8
	ctx.lr = 0x8216FA44;
	sub_821636D8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r11.u32);
	// b 0x8216fa9c
	goto loc_8216FA9C;
loc_8216FA50:
	// bl 0x82163728
	ctx.lr = 0x8216FA54;
	sub_82163728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216fa9c
	if (ctx.cr6.eq) goto loc_8216FA9C;
loc_8216FA5C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r11.u32);
	// b 0x8216fa9c
	goto loc_8216FA9C;
loc_8216FA68:
	// lwz r3,2832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fa88
	if (ctx.cr6.eq) goto loc_8216FA88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216FA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216FA88:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r11.u32);
	// stw r10,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r10.u32);
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
loc_8216FA9C:
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

__attribute__((alias("__imp__sub_8216FAB4"))) PPC_WEAK_FUNC(sub_8216FAB4);
PPC_FUNC_IMPL(__imp__sub_8216FAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216FAB8"))) PPC_WEAK_FUNC(sub_8216FAB8);
PPC_FUNC_IMPL(__imp__sub_8216FAB8) {
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
	// lwz r11,2828(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2828);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8216fcbc
	if (ctx.cr6.gt) goto loc_8216FCBC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8216fbc4
	// bdzf 4*cr6+eq,0x8216fbf4
	// bdzf 4*cr6+eq,0x8216fc54
	// bne cr6,0x8216fc80
	if (!ctx.cr6.eq) goto loc_8216FC80;
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// bgt 0x8216fcbc
	if (ctx.cr0.gt) goto loc_8216FCBC;
	// bl 0x8215bd08
	ctx.lr = 0x8216FB0C;
	sub_8215BD08(ctx, base);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216fbe8
	if (!ctx.cr6.eq) goto loc_8216FBE8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82080068
	ctx.lr = 0x8216FB20;
	sub_82080068(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8216FB24;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8216FB30;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8216FB38;
	sub_821830F8(ctx, base);
	// lwz r3,2832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fb58
	if (ctx.cr6.eq) goto loc_8216FB58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216FB58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216FB58:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r11.u32);
	// ori r3,r3,32900
	ctx.r3.u64 = ctx.r3.u64 | 32900;
	// bl 0x82080000
	ctx.lr = 0x8216FB6C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fb80
	if (ctx.cr6.eq) goto loc_8216FB80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82172f70
	ctx.lr = 0x8216FB7C;
	sub_82172F70(ctx, base);
	// b 0x8216fb84
	goto loc_8216FB84;
loc_8216FB80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216FB84:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r3.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r11,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r11.u32);
	// blt cr6,0x8216fbb0
	if (ctx.cr6.lt) goto loc_8216FBB0;
	// bne cr6,0x8216fbb8
	if (!ctx.cr6.eq) goto loc_8216FBB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8216FBA4;
	sub_821830F8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821837d0
	ctx.lr = 0x8216FBAC;
	sub_821837D0(ctx, base);
	// b 0x8216fcbc
	goto loc_8216FCBC;
loc_8216FBB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x8216FBB8;
	sub_821830F8(ctx, base);
loc_8216FBB8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821837d0
	ctx.lr = 0x8216FBC0;
	sub_821837D0(ctx, base);
	// b 0x8216fcbc
	goto loc_8216FCBC;
loc_8216FBC4:
	// lwz r3,2832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fcbc
	if (ctx.cr6.eq) goto loc_8216FCBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216FBE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216fcbc
	if (ctx.cr6.eq) goto loc_8216FCBC;
loc_8216FBE8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r11.u32);
	// b 0x8216fcbc
	goto loc_8216FCBC;
loc_8216FBF4:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fc74
	if (ctx.cr6.eq) goto loc_8216FC74;
	// bl 0x82170db8
	ctx.lr = 0x8216FC08;
	sub_82170DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216fc74
	if (ctx.cr6.eq) goto loc_8216FC74;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,-784(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ebb58
	ctx.lr = 0x8216FC20;
	sub_821EBB58(ctx, base);
	// li r10,30211
	ctx.r10.s64 = 30211;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8216FC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r6,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r6.u32);
	// b 0x8216fcbc
	goto loc_8216FCBC;
loc_8216FC54:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8216FC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8216fcbc
	if (!ctx.cr6.eq) goto loc_8216FCBC;
loc_8216FC74:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r11.u32);
	// b 0x8216fcbc
	goto loc_8216FCBC;
loc_8216FC80:
	// bl 0x82165b88
	ctx.lr = 0x8216FC84;
	sub_82165B88(ctx, base);
	// lwz r3,2832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fca4
	if (ctx.cr6.eq) goto loc_8216FCA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216FCA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216FCA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r11.u32);
	// stw r10,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r10.u32);
	// stw r9,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r9.u32);
loc_8216FCBC:
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

__attribute__((alias("__imp__sub_8216FCD4"))) PPC_WEAK_FUNC(sub_8216FCD4);
PPC_FUNC_IMPL(__imp__sub_8216FCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216FCD8"))) PPC_WEAK_FUNC(sub_8216FCD8);
PPC_FUNC_IMPL(__imp__sub_8216FCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8216FCE0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2768);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8216fd94
	if (ctx.cr6.lt) goto loc_8216FD94;
	// beq cr6,0x8216fd20
	if (ctx.cr6.eq) goto loc_8216FD20;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8216fe70
	if (!ctx.cr6.lt) goto loc_8216FE70;
	// bl 0x82177450
	ctx.lr = 0x8216FD04;
	sub_82177450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216fe70
	if (ctx.cr6.eq) goto loc_8216FE70;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2768, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8216FD20:
	// lwz r3,2772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2772);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216FD34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216fe70
	if (ctx.cr6.eq) goto loc_8216FE70;
	// lwz r3,2772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2772);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216FD50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216fd64
	if (ctx.cr6.eq) goto loc_8216FD64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8216FD64:
	// bl 0x8215bd08
	ctx.lr = 0x8216FD68;
	sub_8215BD08(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,2768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2768, ctx.r11.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82177748
	ctx.lr = 0x8216FD88;
	sub_82177748(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8216FD94:
	// lwz r3,2772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fdb4
	if (ctx.cr6.eq) goto loc_8216FDB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216FDB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216FDB4:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,2772(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2772, ctx.r31.u32);
	// bl 0x82182e90
	ctx.lr = 0x8216FDC0;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8216FDC8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216FDD4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8216FDD8;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8216FDE4;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8216FDEC;
	sub_821830F8(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32804
	ctx.r3.u64 = ctx.r3.u64 | 32804;
	// bl 0x82080000
	ctx.lr = 0x8216FDF8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fe08
	if (ctx.cr6.eq) goto loc_8216FE08;
	// bl 0x821f4a48
	ctx.lr = 0x8216FE04;
	sub_821F4A48(ctx, base);
	// b 0x8216fe0c
	goto loc_8216FE0C;
loc_8216FE08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8216FE0C:
	// stw r3,2772(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2772, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8216FE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,2772(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2772);
	// bl 0x8215c058
	ctx.lr = 0x8216FE38;
	sub_8215C058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f42c8
	ctx.lr = 0x8216FE44;
	sub_821F42C8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// stw r9,2768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2768, ctx.r9.u32);
	// blt cr6,0x8216fe60
	if (ctx.cr6.lt) goto loc_8216FE60;
	// bne cr6,0x8216fe68
	if (!ctx.cr6.eq) goto loc_8216FE68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8216fe64
	goto loc_8216FE64;
loc_8216FE60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216FE64:
	// bl 0x821830f8
	ctx.lr = 0x8216FE68;
	sub_821830F8(ctx, base);
loc_8216FE68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216FE70;
	sub_821837D0(ctx, base);
loc_8216FE70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8216FE7C"))) PPC_WEAK_FUNC(sub_8216FE7C);
PPC_FUNC_IMPL(__imp__sub_8216FE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8216FE80"))) PPC_WEAK_FUNC(sub_8216FE80);
PPC_FUNC_IMPL(__imp__sub_8216FE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8216FE88;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8216ff08
	if (ctx.cr6.eq) goto loc_8216FF08;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r3,-7488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x8216FEB4;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x8216FEC4;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x8216FED8;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8216FEE4;
	sub_821AD498(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x8216f4a0
	ctx.lr = 0x8216FEF0;
	sub_8216F4A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x8216FEFC;
	sub_821AD600(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-7488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8216FF08;
	sub_821AD498(ctx, base);
loc_8216FF08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8216FF10"))) PPC_WEAK_FUNC(sub_8216FF10);
PPC_FUNC_IMPL(__imp__sub_8216FF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8216FF18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215c7c8
	ctx.lr = 0x8216FF24;
	sub_8215C7C8(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x8216FF28;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8216FF30;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216FF3C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8216FF40;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8216FF4C;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8216FF54;
	sub_821830F8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8216FF58;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8216ff70
	if (ctx.cr6.eq) goto loc_8216FF70;
	// li r3,2924
	ctx.r3.s64 = 2924;
	// bl 0x82183448
	ctx.lr = 0x8216FF6C;
	sub_82183448(ctx, base);
	// b 0x8216ff78
	goto loc_8216FF78;
loc_8216FF70:
	// li r3,183
	ctx.r3.s64 = 183;
	// bl 0x821845a0
	ctx.lr = 0x8216FF78;
	sub_821845A0(ctx, base);
loc_8216FF78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216ff8c
	if (ctx.cr6.eq) goto loc_8216FF8C;
	// bl 0x8216e678
	ctx.lr = 0x8216FF84;
	sub_8216E678(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8216ff90
	goto loc_8216FF90;
loc_8216FF8C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8216FF90:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8216ffa4
	if (ctx.cr6.lt) goto loc_8216FFA4;
	// bne cr6,0x8216ffac
	if (!ctx.cr6.eq) goto loc_8216FFAC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8216ffa8
	goto loc_8216FFA8;
loc_8216FFA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216FFA8:
	// bl 0x821830f8
	ctx.lr = 0x8216FFAC;
	sub_821830F8(ctx, base);
loc_8216FFAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8216FFB4;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8216FFC0"))) PPC_WEAK_FUNC(sub_8216FFC0);
PPC_FUNC_IMPL(__imp__sub_8216FFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8216FFC8;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x82170678
	if (ctx.cr6.gt) goto loc_82170678;
	// lis r12,-32233
	ctx.r12.s64 = -2112421888;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8
	ctx.r12.s64 = ctx.r12.s64 + -8;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,76(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// lwz r16,308(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 308);
	// lwz r16,352(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 352);
	// lwz r16,416(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 416);
	// lwz r16,1656(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1656);
	// lwz r16,844(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 844);
	// lwz r16,896(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 896);
	// lwz r16,508(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 508);
	// lwz r16,544(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 544);
	// lwz r16,624(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 624);
	// lwz r16,692(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 692);
	// lwz r16,708(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 708);
	// lwz r16,744(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 744);
	// lwz r16,816(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 816);
	// lwz r16,932(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 932);
	// lwz r16,984(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 984);
	// lwz r16,1100(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1100);
	// lwz r16,1308(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1308);
	// lwz r16,1392(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1392);
	// lwz r16,1548(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1548);
	// lwz r16,1596(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1596);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// bgt 0x82170678
	if (ctx.cr0.gt) goto loc_82170678;
	// bl 0x8215bd08
	ctx.lr = 0x82170060;
	sub_8215BD08(ctx, base);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82170088
	if (ctx.cr6.eq) goto loc_82170088;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82170080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82170088:
	// lwz r11,2772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82170678
	if (!ctx.cr6.eq) goto loc_82170678;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82080068
	ctx.lr = 0x8217009C;
	sub_82080068(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821700A0;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x821700AC;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x821700B4;
	sub_821830F8(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32804
	ctx.r3.u64 = ctx.r3.u64 | 32804;
	// bl 0x82080000
	ctx.lr = 0x821700C0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821700d0
	if (ctx.cr6.eq) goto loc_821700D0;
	// bl 0x821f4a48
	ctx.lr = 0x821700CC;
	sub_821F4A48(ctx, base);
	// b 0x821700d4
	goto loc_821700D4;
loc_821700D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821700D4:
	// stw r3,2772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2772, ctx.r3.u32);
	// bl 0x8216f5b0
	ctx.lr = 0x821700DC;
	sub_8216F5B0(ctx, base);
	// lwz r29,2772(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// bl 0x8215c058
	ctx.lr = 0x821700E4;
	sub_8215C058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f42c8
	ctx.lr = 0x821700F0;
	sub_821F42C8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// blt cr6,0x8217011c
	if (ctx.cr6.lt) goto loc_8217011C;
	// bne cr6,0x82170124
	if (!ctx.cr6.eq) goto loc_82170124;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8217010C;
	sub_821830F8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821837d0
	ctx.lr = 0x82170114;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8217011C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x82170124;
	sub_821830F8(ctx, base);
loc_82170124:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821837d0
	ctx.lr = 0x8217012C;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r3,2772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82170148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82170678
	if (ctx.cr6.eq) goto loc_82170678;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r3,2772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82170174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82170190
	if (!ctx.cr6.eq) goto loc_82170190;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82163a30
	ctx.lr = 0x82170188;
	sub_82163A30(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x8217018C;
	sub_8215BD08(ctx, base);
	// bl 0x8216cd58
	ctx.lr = 0x82170190;
	sub_8216CD58(ctx, base);
loc_82170190:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216fcd8
	ctx.lr = 0x821701A8;
	sub_8216FCD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821701b8
	if (ctx.cr6.eq) goto loc_821701B8;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
loc_821701B8:
	// lwz r11,2768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2768);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82170678
	if (!ctx.cr6.eq) goto loc_82170678;
	// lwz r3,2772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821701ec
	if (ctx.cr6.eq) goto loc_821701EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821701EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821701EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2772, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// bl 0x82177bd0
	ctx.lr = 0x82170200;
	sub_82177BD0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2836
	ctx.r3.s64 = ctx.r31.s64 + 2836;
	// bl 0x82177d40
	ctx.lr = 0x82170210;
	sub_82177D40(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,2836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2836);
	// addi r3,r31,2836
	ctx.r3.s64 = ctx.r31.s64 + 2836;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82170234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82170678
	if (ctx.cr6.eq) goto loc_82170678;
	// bl 0x82177be0
	ctx.lr = 0x82170240;
	sub_82177BE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82170260
	if (ctx.cr6.eq) goto loc_82170260;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r11.u32);
	// stw r10,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82170260:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// bl 0x8215bd08
	ctx.lr = 0x82170274;
	sub_8215BD08(ctx, base);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821702a4
	if (!ctx.cr6.eq) goto loc_821702A4;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// bl 0x82170db8
	ctx.lr = 0x8217028C;
	sub_82170DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821702a4
	if (ctx.cr6.eq) goto loc_821702A4;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821702A4:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// bl 0x8215bd08
	ctx.lr = 0x821702C8;
	sub_8215BD08(ctx, base);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// addi r8,r11,13
	ctx.r8.s64 = ctx.r11.s64 + 13;
	// stw r8,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r3,2772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217033c
	if (ctx.cr6.eq) goto loc_8217033C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82170304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217033c
	if (!ctx.cr6.eq) goto loc_8217033C;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x82177748
	ctx.lr = 0x82170320;
	sub_82177748(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// bl 0x82177450
	ctx.lr = 0x82170334;
	sub_82177450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82170678
	if (ctx.cr6.eq) goto loc_82170678;
loc_8217033C:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x82170678
	if (!ctx.cr6.eq) goto loc_82170678;
	// bl 0x8216dd78
	ctx.lr = 0x82170364;
	sub_8216DD78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82163a30
	ctx.lr = 0x82170370;
	sub_82163A30(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x82170678
	if (!ctx.cr6.eq) goto loc_82170678;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,16664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821703BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subfic r8,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r3.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r7,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r6,r11,19
	ctx.r6.s64 = ctx.r11.s64 + 19;
	// stw r6,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r30,16664(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821703F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82170678
	if (!ctx.cr6.eq) goto loc_82170678;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82170410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217043c
	if (ctx.cr6.eq) goto loc_8217043C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217042C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r9,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8217043C:
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,16664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82170464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82170678
	if (!ctx.cr6.eq) goto loc_82170678;
	// lwz r11,2772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821704e0
	if (!ctx.cr6.eq) goto loc_821704E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82080068
	ctx.lr = 0x82170480;
	sub_82080068(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82170484;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82170490;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82170498;
	sub_821830F8(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32804
	ctx.r3.u64 = ctx.r3.u64 | 32804;
	// bl 0x82080000
	ctx.lr = 0x821704A4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821704b4
	if (ctx.cr6.eq) goto loc_821704B4;
	// bl 0x821f4a48
	ctx.lr = 0x821704B0;
	sub_821F4A48(ctx, base);
	// b 0x821704b8
	goto loc_821704B8;
loc_821704B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821704B8:
	// stw r3,2772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2772, ctx.r3.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x821704d0
	if (ctx.cr6.lt) goto loc_821704D0;
	// bne cr6,0x821704d8
	if (!ctx.cr6.eq) goto loc_821704D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821704d4
	goto loc_821704D4;
loc_821704D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821704D4:
	// bl 0x821830f8
	ctx.lr = 0x821704D8;
	sub_821830F8(ctx, base);
loc_821704D8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821837d0
	ctx.lr = 0x821704E0;
	sub_821837D0(ctx, base);
loc_821704E0:
	// bl 0x82163ee8
	ctx.lr = 0x821704E4;
	sub_82163EE8(ctx, base);
	// lbz r29,2367(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2367);
	// bl 0x82163ee8
	ctx.lr = 0x821704EC;
	sub_82163EE8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r30,2367(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2367, ctx.r30.u8);
	// bl 0x82163de0
	ctx.lr = 0x821704F8;
	sub_82163DE0(ctx, base);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lwz r3,2772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// bl 0x82155988
	ctx.lr = 0x82170504;
	sub_82155988(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x82170508;
	sub_82163EE8(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stb r29,2367(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2367, ctx.r29.u8);
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r3,2772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82170530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82170678
	if (ctx.cr6.eq) goto loc_82170678;
	// lwz r3,2772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170558
	if (ctx.cr6.eq) goto loc_82170558;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82170558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82170558:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r11,2772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2772, ctx.r11.u32);
	// stw r10,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r11,21
	ctx.r11.s64 = 21;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// lwz r3,15472(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15472);
	// bl 0x82170cb8
	ctx.lr = 0x82170584;
	sub_82170CB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82170678
	if (ctx.cr6.eq) goto loc_82170678;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,-784(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ebb58
	ctx.lr = 0x8217059C;
	sub_821EBB58(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,30526
	ctx.r9.s64 = 30526;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x821705B8;
	sub_8215BD08(ctx, base);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r6,r8,-7560
	ctx.r6.s64 = ctx.r8.s64 + -7560;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821705FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r9,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82170624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82170678
	if (ctx.cr6.eq) goto loc_82170678;
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r3,2772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217065c
	if (ctx.cr6.eq) goto loc_8217065C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217065C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217065C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2772, ctx.r11.u32);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82170678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82170678:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82170680"))) PPC_WEAK_FUNC(sub_82170680);
PPC_FUNC_IMPL(__imp__sub_82170680) {
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
	// lwz r11,2756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2756);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82170720
	if (ctx.cr6.gt) goto loc_82170720;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821706d0
	// bdzf 4*cr6+eq,0x821706dc
	// bdzf 4*cr6+eq,0x821706e8
	// bdzf 4*cr6+eq,0x821706f4
	// bdzf 4*cr6+eq,0x82170700
	// bdzf 4*cr6+eq,0x8217070c
	// bne cr6,0x82170718
	if (!ctx.cr6.eq) goto loc_82170718;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216f8e8
	ctx.lr = 0x821706CC;
	sub_8216F8E8(ctx, base);
	// b 0x82170720
	goto loc_82170720;
loc_821706D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216ec98
	ctx.lr = 0x821706D8;
	sub_8216EC98(ctx, base);
	// b 0x82170720
	goto loc_82170720;
loc_821706DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216eeb0
	ctx.lr = 0x821706E4;
	sub_8216EEB0(ctx, base);
	// b 0x82170720
	goto loc_82170720;
loc_821706E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216ef58
	ctx.lr = 0x821706F0;
	sub_8216EF58(ctx, base);
	// b 0x82170720
	goto loc_82170720;
loc_821706F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216efe0
	ctx.lr = 0x821706FC;
	sub_8216EFE0(ctx, base);
	// b 0x82170720
	goto loc_82170720;
loc_82170700:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216e5a0
	ctx.lr = 0x82170708;
	sub_8216E5A0(ctx, base);
	// b 0x82170720
	goto loc_82170720;
loc_8217070C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216fab8
	ctx.lr = 0x82170714;
	sub_8216FAB8(ctx, base);
	// b 0x82170720
	goto loc_82170720;
loc_82170718:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216ffc0
	ctx.lr = 0x82170720;
	sub_8216FFC0(ctx, base);
loc_82170720:
	// lwz r11,2756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2756);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// bne cr6,0x82170744
	if (!ctx.cr6.eq) goto loc_82170744;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821636d8
	ctx.lr = 0x8217073C;
	sub_821636D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_82170744:
	// lwz r11,2764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2764);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bne cr6,0x82170758
	if (!ctx.cr6.eq) goto loc_82170758;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821636d8
	ctx.lr = 0x82170758;
	sub_821636D8(ctx, base);
loc_82170758:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8217076C"))) PPC_WEAK_FUNC(sub_8217076C);
PPC_FUNC_IMPL(__imp__sub_8217076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170770"))) PPC_WEAK_FUNC(sub_82170770);
PPC_FUNC_IMPL(__imp__sub_82170770) {
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
	// bl 0x82232d88
	ctx.lr = 0x82170780;
	sub_82232D88(ctx, base);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170794"))) PPC_WEAK_FUNC(sub_82170794);
PPC_FUNC_IMPL(__imp__sub_82170794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170798"))) PPC_WEAK_FUNC(sub_82170798);
PPC_FUNC_IMPL(__imp__sub_82170798) {
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
	// bl 0x82232d88
	ctx.lr = 0x821707A8;
	sub_82232D88(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821707BC"))) PPC_WEAK_FUNC(sub_821707BC);
PPC_FUNC_IMPL(__imp__sub_821707BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821707C0"))) PPC_WEAK_FUNC(sub_821707C0);
PPC_FUNC_IMPL(__imp__sub_821707C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,16664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	// b 0x820ef480
	sub_820EF480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821707CC"))) PPC_WEAK_FUNC(sub_821707CC);
PPC_FUNC_IMPL(__imp__sub_821707CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821707D0"))) PPC_WEAK_FUNC(sub_821707D0);
PPC_FUNC_IMPL(__imp__sub_821707D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// b 0x821781b8
	sub_821781B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821707D8"))) PPC_WEAK_FUNC(sub_821707D8);
PPC_FUNC_IMPL(__imp__sub_821707D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,16664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821707f8
	if (ctx.cr6.eq) goto loc_821707F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821707F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170800"))) PPC_WEAK_FUNC(sub_82170800);
PPC_FUNC_IMPL(__imp__sub_82170800) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
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

__attribute__((alias("__imp__sub_82170814"))) PPC_WEAK_FUNC(sub_82170814);
PPC_FUNC_IMPL(__imp__sub_82170814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170818"))) PPC_WEAK_FUNC(sub_82170818);
PPC_FUNC_IMPL(__imp__sub_82170818) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// b 0x821783f0
	sub_821783F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170820"))) PPC_WEAK_FUNC(sub_82170820);
PPC_FUNC_IMPL(__imp__sub_82170820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,16664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170840
	if (ctx.cr6.eq) goto loc_82170840;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,32800
	ctx.r9.u64 = ctx.r10.u64 | 32800;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82170840:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170848"))) PPC_WEAK_FUNC(sub_82170848);
PPC_FUNC_IMPL(__imp__sub_82170848) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// b 0x821781e0
	sub_821781E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170850"))) PPC_WEAK_FUNC(sub_82170850);
PPC_FUNC_IMPL(__imp__sub_82170850) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170858"))) PPC_WEAK_FUNC(sub_82170858);
PPC_FUNC_IMPL(__imp__sub_82170858) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// b 0x82178458
	sub_82178458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170860"))) PPC_WEAK_FUNC(sub_82170860);
PPC_FUNC_IMPL(__imp__sub_82170860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82170868;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,212
	ctx.r30.s64 = ctx.r3.s64 + 212;
	// li r29,32
	ctx.r29.s64 = 32;
loc_82170878:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170894
	if (ctx.cr6.eq) goto loc_82170894;
	// bl 0x821af040
	ctx.lr = 0x82170888;
	sub_821AF040(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82170894
	if (!ctx.cr6.gt) goto loc_82170894;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82170894:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82170878
	if (!ctx.cr0.eq) goto loc_82170878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821708AC"))) PPC_WEAK_FUNC(sub_821708AC);
PPC_FUNC_IMPL(__imp__sub_821708AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821708B0"))) PPC_WEAK_FUNC(sub_821708B0);
PPC_FUNC_IMPL(__imp__sub_821708B0) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,16664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821708d8
	if (ctx.cr6.eq) goto loc_821708D8;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x821708dc
	goto loc_821708DC;
loc_821708D8:
	// li r31,1
	ctx.r31.s64 = 1;
loc_821708DC:
	// bl 0x82170860
	ctx.lr = 0x821708E0;
	sub_82170860(ctx, base);
	// subfc r11,r31,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// eqv r10,r31,r3
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82170908"))) PPC_WEAK_FUNC(sub_82170908);
PPC_FUNC_IMPL(__imp__sub_82170908) {
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
	// addi r31,r3,212
	ctx.r31.s64 = ctx.r3.s64 + 212;
loc_82170924:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217093c
	if (ctx.cr6.eq) goto loc_8217093C;
	// bl 0x821785e8
	ctx.lr = 0x82170934;
	sub_821785E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82170968
	if (!ctx.cr6.eq) goto loc_82170968;
loc_8217093C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x82170924
	if (ctx.cr6.lt) goto loc_82170924;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82170950:
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
loc_82170968:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82170950
	goto loc_82170950;
}

__attribute__((alias("__imp__sub_82170970"))) PPC_WEAK_FUNC(sub_82170970);
PPC_FUNC_IMPL(__imp__sub_82170970) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170978"))) PPC_WEAK_FUNC(sub_82170978);
PPC_FUNC_IMPL(__imp__sub_82170978) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x82178c88
	sub_82178C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170980"))) PPC_WEAK_FUNC(sub_82170980);
PPC_FUNC_IMPL(__imp__sub_82170980) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x82178ce0
	sub_82178CE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170988"))) PPC_WEAK_FUNC(sub_82170988);
PPC_FUNC_IMPL(__imp__sub_82170988) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x82178d38
	sub_82178D38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170990"))) PPC_WEAK_FUNC(sub_82170990);
PPC_FUNC_IMPL(__imp__sub_82170990) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x82178d90
	sub_82178D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170998"))) PPC_WEAK_FUNC(sub_82170998);
PPC_FUNC_IMPL(__imp__sub_82170998) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x82178de8
	sub_82178DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821709A0"))) PPC_WEAK_FUNC(sub_821709A0);
PPC_FUNC_IMPL(__imp__sub_821709A0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821709C4;
	sub_8209EDA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82178e40
	ctx.lr = 0x821709D4;
	sub_82178E40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8209eda0
	ctx.lr = 0x821709E0;
	sub_8209EDA0(ctx, base);
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

__attribute__((alias("__imp__sub_821709FC"))) PPC_WEAK_FUNC(sub_821709FC);
PPC_FUNC_IMPL(__imp__sub_821709FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170A00"))) PPC_WEAK_FUNC(sub_82170A00);
PPC_FUNC_IMPL(__imp__sub_82170A00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// b 0x82179218
	sub_82179218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170A08"))) PPC_WEAK_FUNC(sub_82170A08);
PPC_FUNC_IMPL(__imp__sub_82170A08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170A10"))) PPC_WEAK_FUNC(sub_82170A10);
PPC_FUNC_IMPL(__imp__sub_82170A10) {
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
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// bl 0x82178240
	ctx.lr = 0x82170A30;
	sub_82178240(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82170a88
	if (ctx.cr6.eq) goto loc_82170A88;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x8218f0b0
	ctx.lr = 0x82170A40;
	sub_8218F0B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170a80
	if (ctx.cr6.eq) goto loc_82170A80;
	// bl 0x82179c50
	ctx.lr = 0x82170A50;
	sub_82179C50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234a248
	ctx.lr = 0x82170A58;
	sub_8234A248(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82170a70
	if (!ctx.cr6.eq) goto loc_82170A70;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82170a7c
	goto loc_82170A7C;
loc_82170A70:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82170a80
	if (!ctx.cr6.eq) goto loc_82170A80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82170A7C:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82170A80:
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82174fd8
	ctx.lr = 0x82170A88;
	sub_82174FD8(ctx, base);
loc_82170A88:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,16664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170aa8
	if (ctx.cr6.eq) goto loc_82170AA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82170AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82170AA8:
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170ab8
	if (ctx.cr6.eq) goto loc_82170AB8;
	// bl 0x821799f0
	ctx.lr = 0x82170AB8;
	sub_821799F0(ctx, base);
loc_82170AB8:
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

__attribute__((alias("__imp__sub_82170AD0"))) PPC_WEAK_FUNC(sub_82170AD0);
PPC_FUNC_IMPL(__imp__sub_82170AD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x821796b8
	sub_821796B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170AD8"))) PPC_WEAK_FUNC(sub_82170AD8);
PPC_FUNC_IMPL(__imp__sub_82170AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82170AE0;
	sub_82248774(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r25,r3,212
	ctx.r25.s64 = ctx.r3.s64 + 212;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82170B04:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82170b04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82170B04;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,340(r26)
	PPC_STORE_U32(ctx.r26.u32 + 340, ctx.r28.u32);
	// li r27,32
	ctx.r27.s64 = 32;
loc_82170B18:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170ba0
	if (ctx.cr6.eq) goto loc_82170BA0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82170B2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170b90
	if (ctx.cr6.eq) goto loc_82170B90;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x821af038
	ctx.lr = 0x82170B40;
	sub_821AF038(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821af038
	ctx.lr = 0x82170B50;
	sub_821AF038(ctx, base);
	// cmpw cr6,r23,r3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82170b6c
	if (ctx.cr6.lt) goto loc_82170B6C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x82170b2c
	if (ctx.cr6.lt) goto loc_82170B2C;
	// b 0x82170ba0
	goto loc_82170BA0;
loc_82170B6C:
	// cmpwi cr6,r31,30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 30, ctx.xer);
	// bgt cr6,0x82170b90
	if (ctx.cr6.gt) goto loc_82170B90;
	// subfic r10,r31,31
	ctx.xer.ca = ctx.r31.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r31.s64;
	// addi r11,r26,336
	ctx.r11.s64 = ctx.r26.s64 + 336;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82170B80:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x82170b80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82170B80;
loc_82170B90:
	// addi r11,r31,53
	ctx.r11.s64 = ctx.r31.s64 + 53;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r26
	PPC_STORE_U32(ctx.r9.u32 + ctx.r26.u32, ctx.r10.u32);
loc_82170BA0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82170b18
	if (!ctx.cr0.eq) goto loc_82170B18;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r29,32
	ctx.r29.s64 = 32;
loc_82170BB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170c28
	if (ctx.cr6.eq) goto loc_82170C28;
	// lwz r11,340(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 340);
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,340(r26)
	PPC_STORE_U32(ctx.r26.u32 + 340, ctx.r11.u32);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82170BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82178898
	ctx.lr = 0x82170BF4;
	sub_82178898(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82170c24
	if (ctx.cr6.eq) goto loc_82170C24;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r5,r26,32
	ctx.r5.s64 = ctx.r26.s64 + 32;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82170C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82170c28
	goto loc_82170C28;
loc_82170C24:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82170C28:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82170bb8
	if (!ctx.cr0.eq) goto loc_82170BB8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82170ca8
	if (ctx.cr6.eq) goto loc_82170CA8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r26,164
	ctx.r3.s64 = ctx.r26.s64 + 164;
	// bl 0x821789b8
	ctx.lr = 0x82170C48;
	sub_821789B8(ctx, base);
	// lwz r11,344(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170ca8
	if (ctx.cr6.eq) goto loc_82170CA8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// li r29,32
	ctx.r29.s64 = 32;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_82170C6C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170c88
	if (ctx.cr6.eq) goto loc_82170C88;
	// bl 0x8234a248
	ctx.lr = 0x82170C80;
	sub_8234A248(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
loc_82170C88:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82170c6c
	if (!ctx.cr0.eq) goto loc_82170C6C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,344(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 344);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82179ae0
	ctx.lr = 0x82170CA8;
	sub_82179AE0(ctx, base);
loc_82170CA8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82170CB4"))) PPC_WEAK_FUNC(sub_82170CB4);
PPC_FUNC_IMPL(__imp__sub_82170CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170CB8"))) PPC_WEAK_FUNC(sub_82170CB8);
PPC_FUNC_IMPL(__imp__sub_82170CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82170CC0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82170ce0
	if (!ctx.cr6.eq) goto loc_82170CE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82170CE0:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r29,212
	ctx.r31.s64 = ctx.r29.s64 + 212;
	// li r30,32
	ctx.r30.s64 = 32;
loc_82170CEC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82170d1c
	if (ctx.cr6.eq) goto loc_82170D1C;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r5,r29,32
	ctx.r5.s64 = ctx.r29.s64 + 32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82170D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82170d1c
	if (ctx.cr6.eq) goto loc_82170D1C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82170D1C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82170cec
	if (!ctx.cr0.eq) goto loc_82170CEC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82170D34"))) PPC_WEAK_FUNC(sub_82170D34);
PPC_FUNC_IMPL(__imp__sub_82170D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170D38"))) PPC_WEAK_FUNC(sub_82170D38);
PPC_FUNC_IMPL(__imp__sub_82170D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82170D40;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170d58
	if (ctx.cr6.eq) goto loc_82170D58;
	// bl 0x821788d8
	ctx.lr = 0x82170D58;
	sub_821788D8(ctx, base);
loc_82170D58:
	// li r30,31
	ctx.r30.s64 = 31;
	// addi r31,r28,340
	ctx.r31.s64 = ctx.r28.s64 + 340;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82170D64:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170d74
	if (ctx.cr6.eq) goto loc_82170D74;
	// bl 0x821788d8
	ctx.lr = 0x82170D74;
	sub_821788D8(ctx, base);
loc_82170D74:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,-4(r31)
	ea = -4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bge 0x82170d64
	if (!ctx.cr0.lt) goto loc_82170D64;
	// lwz r3,344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 344);
	// stw r29,340(r28)
	PPC_STORE_U32(ctx.r28.u32 + 340, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170d94
	if (ctx.cr6.eq) goto loc_82170D94;
	// bl 0x82179980
	ctx.lr = 0x82170D94;
	sub_82179980(ctx, base);
loc_82170D94:
	// addi r3,r28,164
	ctx.r3.s64 = ctx.r28.s64 + 164;
	// bl 0x82178908
	ctx.lr = 0x82170D9C;
	sub_82178908(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82170DAC"))) PPC_WEAK_FUNC(sub_82170DAC);
PPC_FUNC_IMPL(__imp__sub_82170DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170DB0"))) PPC_WEAK_FUNC(sub_82170DB0);
PPC_FUNC_IMPL(__imp__sub_82170DB0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170DB8"))) PPC_WEAK_FUNC(sub_82170DB8);
PPC_FUNC_IMPL(__imp__sub_82170DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170DC0"))) PPC_WEAK_FUNC(sub_82170DC0);
PPC_FUNC_IMPL(__imp__sub_82170DC0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,212
	ctx.r10.s64 = ctx.r10.s64 + 212;
loc_82170DD0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82170df0
	if (!ctx.cr6.eq) goto loc_82170DF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x82170dd0
	if (ctx.cr6.lt) goto loc_82170DD0;
	// blr 
	return;
loc_82170DF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82170DF8"))) PPC_WEAK_FUNC(sub_82170DF8);
PPC_FUNC_IMPL(__imp__sub_82170DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82170E00;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,212
	ctx.r31.s64 = ctx.r3.s64 + 212;
loc_82170E14:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170e2c
	if (ctx.cr6.eq) goto loc_82170E2C;
	// bl 0x8234a248
	ctx.lr = 0x82170E24;
	sub_8234A248(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82170e48
	if (ctx.cr6.eq) goto loc_82170E48;
loc_82170E2C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x82170e14
	if (ctx.cr6.lt) goto loc_82170E14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82170E48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82170E54"))) PPC_WEAK_FUNC(sub_82170E54);
PPC_FUNC_IMPL(__imp__sub_82170E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82170E58"))) PPC_WEAK_FUNC(sub_82170E58);
PPC_FUNC_IMPL(__imp__sub_82170E58) {
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
	// lwz r3,344(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170e84
	if (ctx.cr6.eq) goto loc_82170E84;
	// bl 0x82179980
	ctx.lr = 0x82170E7C;
	sub_82179980(ctx, base);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x82179858
	ctx.lr = 0x82170E84;
	sub_82179858(ctx, base);
loc_82170E84:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82170E98"))) PPC_WEAK_FUNC(sub_82170E98);
PPC_FUNC_IMPL(__imp__sub_82170E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82170eb0
	if (!ctx.cr6.eq) goto loc_82170EB0;
loc_82170EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82170EB0:
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82170ec4
	if (ctx.cr6.eq) goto loc_82170EC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82170EC4:
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82170ea8
	if (ctx.cr6.eq) goto loc_82170EA8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82179868
	sub_82179868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82170ED8"))) PPC_WEAK_FUNC(sub_82170ED8);
PPC_FUNC_IMPL(__imp__sub_82170ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82170EE0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82170EF4;
	sub_82185740(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-23040
	ctx.r10.s64 = ctx.r11.s64 + -23040;
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
	// bl 0x82179480
	ctx.lr = 0x82170F18;
	sub_82179480(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x821788f0
	ctx.lr = 0x82170F20;
	sub_821788F0(ctx, base);
	// addi r29,r31,180
	ctx.r29.s64 = ctx.r31.s64 + 180;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221bae8
	ctx.lr = 0x82170F2C;
	sub_8221BAE8(ctx, base);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// bl 0x82179de8
	ctx.lr = 0x82170F4C;
	sub_82179DE8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bl 0x82179d38
	ctx.lr = 0x82170F54;
	sub_82179D38(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82170F5C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82170f74
	if (ctx.cr6.eq) goto loc_82170F74;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82183448
	ctx.lr = 0x82170F70;
	sub_82183448(ctx, base);
	// b 0x82170f7c
	goto loc_82170F7C;
loc_82170F74:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x821845a0
	ctx.lr = 0x82170F7C;
	sub_821845A0(ctx, base);
loc_82170F7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170f8c
	if (ctx.cr6.eq) goto loc_82170F8C;
	// bl 0x82178140
	ctx.lr = 0x82170F88;
	sub_82178140(ctx, base);
	// b 0x82170f90
	goto loc_82170F90;
loc_82170F8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82170F90:
	// stw r3,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82179278
	ctx.lr = 0x82170F9C;
	sub_82179278(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82170FA0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82170fb8
	if (ctx.cr6.eq) goto loc_82170FB8;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82183448
	ctx.lr = 0x82170FB4;
	sub_82183448(ctx, base);
	// b 0x82170fc0
	goto loc_82170FC0;
loc_82170FB8:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x821845a0
	ctx.lr = 0x82170FC0;
	sub_821845A0(ctx, base);
loc_82170FC0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170fd0
	if (ctx.cr6.eq) goto loc_82170FD0;
	// bl 0x82179910
	ctx.lr = 0x82170FCC;
	sub_82179910(ctx, base);
	// b 0x82170fd4
	goto loc_82170FD4;
loc_82170FD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82170FD4:
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// addi r11,r31,212
	ctx.r11.s64 = ctx.r31.s64 + 212;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82170FE8:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82170fe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82170FE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82170FFC"))) PPC_WEAK_FUNC(sub_82170FFC);
PPC_FUNC_IMPL(__imp__sub_82170FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171000"))) PPC_WEAK_FUNC(sub_82171000);
PPC_FUNC_IMPL(__imp__sub_82171000) {
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
	// stw r4,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82171058
	if (ctx.cr6.eq) goto loc_82171058;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82171050
	if (ctx.cr6.eq) goto loc_82171050;
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
loc_82171050:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82171064
	if (!ctx.cr6.eq) goto loc_82171064;
loc_82171058:
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82178258
	ctx.lr = 0x82171060;
	sub_82178258(ctx, base);
	// b 0x8217106c
	goto loc_8217106C;
loc_82171064:
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x821782c8
	ctx.lr = 0x8217106C;
	sub_821782C8(ctx, base);
loc_8217106C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217107c
	if (ctx.cr6.eq) goto loc_8217107C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8217107C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82171090"))) PPC_WEAK_FUNC(sub_82171090);
PPC_FUNC_IMPL(__imp__sub_82171090) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821710e8
	if (!ctx.cr6.eq) goto loc_821710E8;
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// bl 0x82178328
	ctx.lr = 0x821710C0;
	sub_82178328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821710e8
	if (ctx.cr6.eq) goto loc_821710E8;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_821710E8:
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

__attribute__((alias("__imp__sub_82171100"))) PPC_WEAK_FUNC(sub_82171100);
PPC_FUNC_IMPL(__imp__sub_82171100) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82171140
	if (ctx.cr6.eq) goto loc_82171140;
loc_82171128:
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
loc_82171140:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82171164
	if (!ctx.cr6.eq) goto loc_82171164;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217115C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82171128
	if (ctx.cr6.eq) goto loc_82171128;
loc_82171164:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82171178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8217118C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821711A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82178388
	ctx.lr = 0x821711AC;
	sub_82178388(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821711C0"))) PPC_WEAK_FUNC(sub_821711C0);
PPC_FUNC_IMPL(__imp__sub_821711C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
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

__attribute__((alias("__imp__sub_821711D0"))) PPC_WEAK_FUNC(sub_821711D0);
PPC_FUNC_IMPL(__imp__sub_821711D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821711D8;
	sub_82248788(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821711EC;
	sub_822AA648(ctx, base);
	// addi r29,r30,212
	ctx.r29.s64 = ctx.r30.s64 + 212;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,32
	ctx.r28.s64 = 32;
	// li r30,1
	ctx.r30.s64 = 1;
loc_821711FC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171234
	if (ctx.cr6.eq) goto loc_82171234;
	// bl 0x821af038
	ctx.lr = 0x8217120C;
	sub_821AF038(ctx, base);
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bge cr6,0x82171234
	if (!ctx.cr6.lt) goto loc_82171234;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82171234
	if (!ctx.cr6.eq) goto loc_82171234;
	// slw r11,r30,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r3.u8 & 0x3F));
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82171234:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x821711fc
	if (!ctx.cr0.eq) goto loc_821711FC;
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 & ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82171254"))) PPC_WEAK_FUNC(sub_82171254);
PPC_FUNC_IMPL(__imp__sub_82171254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171258"))) PPC_WEAK_FUNC(sub_82171258);
PPC_FUNC_IMPL(__imp__sub_82171258) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x82171268
	if (ctx.cr6.lt) goto loc_82171268;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82171268:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x82166180
	sub_82166180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82171270"))) PPC_WEAK_FUNC(sub_82171270);
PPC_FUNC_IMPL(__imp__sub_82171270) {
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
	// bl 0x821711d0
	ctx.lr = 0x82171288;
	sub_821711D0(ctx, base);
	// xor r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821712ac
	if (!ctx.cr6.eq) goto loc_821712AC;
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
loc_821712AC:
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821712D0"))) PPC_WEAK_FUNC(sub_821712D0);
PPC_FUNC_IMPL(__imp__sub_821712D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821712D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r30,344(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-23040
	ctx.r10.s64 = ctx.r11.s64 + -23040;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8217130c
	if (ctx.cr6.eq) goto loc_8217130C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179ad8
	ctx.lr = 0x82171300;
	sub_82179AD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8217130C;
	sub_82183E40(ctx, base);
loc_8217130C:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// stw r28,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821796b8
	ctx.lr = 0x82171320;
	sub_821796B8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171340
	if (ctx.cr6.eq) goto loc_82171340;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82171340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82171340:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// addi r30,r31,180
	ctx.r30.s64 = ctx.r31.s64 + 180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179300
	ctx.lr = 0x82171350;
	sub_82179300(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179418
	ctx.lr = 0x82171358;
	sub_82179418(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x82178908
	ctx.lr = 0x82171360;
	sub_82178908(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82179720
	ctx.lr = 0x82171368;
	sub_82179720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82171370;
	sub_821857F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82171378"))) PPC_WEAK_FUNC(sub_82171378);
PPC_FUNC_IMPL(__imp__sub_82171378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82171380;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82183078
	ctx.lr = 0x82171394;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821713A0;
	sub_821837D0(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821713B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r5,16664(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16664);
	// beq cr6,0x82171414
	if (ctx.cr6.eq) goto loc_82171414;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82171414
	if (ctx.cr6.eq) goto loc_82171414;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82179530
	ctx.lr = 0x821713E0;
	sub_82179530(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82171400
	if (ctx.cr6.eq) goto loc_82171400;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x821837d0
	ctx.lr = 0x821713F4;
	sub_821837D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82171400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82178588
	ctx.lr = 0x82171408;
	sub_82178588(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82171414;
	sub_82183E40(ctx, base);
loc_82171414:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8217141C;
	sub_821837D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82171428"))) PPC_WEAK_FUNC(sub_82171428);
PPC_FUNC_IMPL(__imp__sub_82171428) {
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
	// bl 0x821712d0
	ctx.lr = 0x82171448;
	sub_821712D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171464
	if (ctx.cr6.eq) goto loc_82171464;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82171460;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82171464:
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

__attribute__((alias("__imp__sub_8217147C"))) PPC_WEAK_FUNC(sub_8217147C);
PPC_FUNC_IMPL(__imp__sub_8217147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171480"))) PPC_WEAK_FUNC(sub_82171480);
PPC_FUNC_IMPL(__imp__sub_82171480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r7,-1
	ctx.r7.s64 = -1;
	// ori r6,r11,51200
	ctx.r6.u64 = ctx.r11.u64 | 51200;
loc_8217149C:
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r7,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821714B0:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821714b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821714B0;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r10,84
	ctx.r11.s64 = ctx.r10.s64 + 84;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821714C4:
	// stw r6,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r6.u32);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821714c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821714C4;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// bne 0x8217149c
	if (!ctx.cr0.eq) goto loc_8217149C;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821714E8"))) PPC_WEAK_FUNC(sub_821714E8);
PPC_FUNC_IMPL(__imp__sub_821714E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821714F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r29,r10,51200
	ctx.r29.u64 = ctx.r10.u64 | 51200;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_82171514:
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r30,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r30.u32);
	// stb r30,-28(r11)
	PPC_STORE_U8(ctx.r11.u32 + -28, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8217152C:
	// stw r29,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r29.u32);
	// stwu r28,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r10.u32 = ea;
	// stbx r7,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8217152c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217152C;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stb r30,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r30.u8);
	// stb r30,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r30.u8);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// stb r30,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r30.u8);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
	// stb r30,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r30.u8);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// bne 0x82171514
	if (!ctx.cr0.eq) goto loc_82171514;
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x822aa648
	ctx.lr = 0x8217157C;
	sub_822AA648(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r29.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r30,384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 384, ctx.r30.u8);
	// li r8,5
	ctx.r8.s64 = 5;
	// stb r30,385(r31)
	PPC_STORE_U8(ctx.r31.u32 + 385, ctx.r30.u8);
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// stb r30,386(r31)
	PPC_STORE_U8(ctx.r31.u32 + 386, ctx.r30.u8);
	// stb r30,387(r31)
	PPC_STORE_U8(ctx.r31.u32 + 387, ctx.r30.u8);
	// stb r30,388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 388, ctx.r30.u8);
	// stb r11,389(r31)
	PPC_STORE_U8(ctx.r31.u32 + 389, ctx.r11.u8);
	// stw r29,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r29.u32);
	// stb r30,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r30.u8);
	// stb r30,397(r31)
	PPC_STORE_U8(ctx.r31.u32 + 397, ctx.r30.u8);
	// stb r30,398(r31)
	PPC_STORE_U8(ctx.r31.u32 + 398, ctx.r30.u8);
	// stb r11,399(r31)
	PPC_STORE_U8(ctx.r31.u32 + 399, ctx.r11.u8);
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// stb r11,401(r31)
	PPC_STORE_U8(ctx.r31.u32 + 401, ctx.r11.u8);
	// stw r29,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r29.u32);
	// stb r30,408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 408, ctx.r30.u8);
	// stb r30,409(r31)
	PPC_STORE_U8(ctx.r31.u32 + 409, ctx.r30.u8);
	// stb r30,410(r31)
	PPC_STORE_U8(ctx.r31.u32 + 410, ctx.r30.u8);
	// stb r28,411(r31)
	PPC_STORE_U8(ctx.r31.u32 + 411, ctx.r28.u8);
	// stb r30,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r30.u8);
	// stb r11,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r11.u8);
	// stw r29,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r29.u32);
	// stb r30,420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 420, ctx.r30.u8);
	// stb r30,421(r31)
	PPC_STORE_U8(ctx.r31.u32 + 421, ctx.r30.u8);
	// stb r30,422(r31)
	PPC_STORE_U8(ctx.r31.u32 + 422, ctx.r30.u8);
	// stb r10,423(r31)
	PPC_STORE_U8(ctx.r31.u32 + 423, ctx.r10.u8);
	// stb r30,424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 424, ctx.r30.u8);
	// stb r11,425(r31)
	PPC_STORE_U8(ctx.r31.u32 + 425, ctx.r11.u8);
	// stw r29,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r29.u32);
	// stb r30,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r30.u8);
	// stb r30,433(r31)
	PPC_STORE_U8(ctx.r31.u32 + 433, ctx.r30.u8);
	// stb r30,434(r31)
	PPC_STORE_U8(ctx.r31.u32 + 434, ctx.r30.u8);
	// stb r9,435(r31)
	PPC_STORE_U8(ctx.r31.u32 + 435, ctx.r9.u8);
	// stb r30,436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 436, ctx.r30.u8);
	// stb r11,437(r31)
	PPC_STORE_U8(ctx.r31.u32 + 437, ctx.r11.u8);
	// stw r29,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r29.u32);
	// stb r30,444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 444, ctx.r30.u8);
	// stb r30,445(r31)
	PPC_STORE_U8(ctx.r31.u32 + 445, ctx.r30.u8);
	// stb r30,446(r31)
	PPC_STORE_U8(ctx.r31.u32 + 446, ctx.r30.u8);
	// stb r8,447(r31)
	PPC_STORE_U8(ctx.r31.u32 + 447, ctx.r8.u8);
	// stb r30,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r30.u8);
	// stb r11,449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 449, ctx.r11.u8);
	// bl 0x82171480
	ctx.lr = 0x8217163C;
	sub_82171480(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82171644"))) PPC_WEAK_FUNC(sub_82171644);
PPC_FUNC_IMPL(__imp__sub_82171644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171648"))) PPC_WEAK_FUNC(sub_82171648);
PPC_FUNC_IMPL(__imp__sub_82171648) {
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
	// bl 0x821714e8
	ctx.lr = 0x82171660;
	sub_821714E8(ctx, base);
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

__attribute__((alias("__imp__sub_82171678"))) PPC_WEAK_FUNC(sub_82171678);
PPC_FUNC_IMPL(__imp__sub_82171678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82171680;
	sub_82248784(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8215c090
	ctx.lr = 0x82171688;
	sub_8215C090(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8215c098
	ctx.lr = 0x82171690;
	sub_8215C098(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8215c0a8
	ctx.lr = 0x82171698;
	sub_8215C0A8(ctx, base);
	// li r10,132
	ctx.r10.s64 = 132;
	// li r9,130
	ctx.r9.s64 = 130;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// li r8,151
	ctx.r8.s64 = 151;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// li r7,136
	ctx.r7.s64 = 136;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// li r6,137
	ctx.r6.s64 = 137;
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// li r5,138
	ctx.r5.s64 = 138;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// li r9,129
	ctx.r9.s64 = 129;
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// li r7,135
	ctx.r7.s64 = 135;
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// li r29,147
	ctx.r29.s64 = 147;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r8,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// stw r7,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r7.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stw r29,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r29.u32);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// bl 0x822aa648
	ctx.lr = 0x82171750;
	sub_822AA648(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822aa648
	ctx.lr = 0x8217175C;
	sub_822AA648(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r6,24
	ctx.r6.s64 = 1572864;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// lis r4,3392
	ctx.r4.s64 = 222298112;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// bl 0x820861d0
	ctx.lr = 0x821717B0;
	sub_820861D0(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r29,r10,-9904
	ctx.r29.s64 = ctx.r10.s64 + -9904;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addi r8,r10,-128
	ctx.r8.s64 = ctx.r10.s64 + -128;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215c0f0
	ctx.lr = 0x821717E4;
	sub_8215C0F0(ctx, base);
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x82183878
	ctx.lr = 0x8217180C;
	sub_82183878(ctx, base);
	// bl 0x8209eda0
	ctx.lr = 0x82171810;
	sub_8209EDA0(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822aa648
	ctx.lr = 0x8217181C;
	sub_822AA648(ctx, base);
	// li r10,43
	ctx.r10.s64 = 43;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r11,r29,384
	ctx.r11.s64 = ctx.r29.s64 + 384;
	// stw r6,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r6.u32);
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82171838:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u32);
	// bdnz 0x82171838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82171838;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82171854;
	sub_821837D0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x820863e8
	ctx.lr = 0x8217185C;
	sub_820863E8(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82171864"))) PPC_WEAK_FUNC(sub_82171864);
PPC_FUNC_IMPL(__imp__sub_82171864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171868"))) PPC_WEAK_FUNC(sub_82171868);
PPC_FUNC_IMPL(__imp__sub_82171868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82171870;
	sub_8224878C(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8215bd60
	ctx.lr = 0x82171878;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821718b0
	if (!ctx.cr6.eq) goto loc_821718B0;
	// li r31,46
	ctx.r31.s64 = 46;
	// bl 0x8215c088
	ctx.lr = 0x8217188C;
	sub_8215C088(ctx, base);
	// cmplwi cr6,r3,46
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 46, ctx.xer);
	// blt cr6,0x821718b0
	if (ctx.cr6.lt) goto loc_821718B0;
loc_82171894:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e6048
	ctx.lr = 0x821718A0;
	sub_822E6048(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8215c088
	ctx.lr = 0x821718A8;
	sub_8215C088(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82171894
	if (!ctx.cr6.gt) goto loc_82171894;
loc_821718B0:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-9176
	ctx.r31.s64 = ctx.r11.s64 + -9176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,-360
	ctx.r4.s64 = ctx.r31.s64 + -360;
	// bl 0x8215c0f0
	ctx.lr = 0x821718C8;
	sub_8215C0F0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r1,296
	ctx.r9.s64 = ctx.r1.s64 + 296;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,46
	ctx.r3.s64 = 46;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x82183e58
	ctx.lr = 0x82171900;
	sub_82183E58(ctx, base);
	// bl 0x82085ae8
	ctx.lr = 0x82171904;
	sub_82085AE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8215bd60
	ctx.lr = 0x8217190C;
	sub_8215BD60(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82171924
	if (ctx.cr6.eq) goto loc_82171924;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82085af8
	ctx.lr = 0x82171920;
	sub_82085AF8(ctx, base);
	// b 0x82171950
	goto loc_82171950;
loc_82171924:
	// li r30,46
	ctx.r30.s64 = 46;
	// bl 0x8215c088
	ctx.lr = 0x8217192C;
	sub_8215C088(ctx, base);
	// cmplwi cr6,r3,46
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 46, ctx.xer);
	// blt cr6,0x82171950
	if (ctx.cr6.lt) goto loc_82171950;
loc_82171934:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e6048
	ctx.lr = 0x82171940;
	sub_822E6048(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8215c088
	ctx.lr = 0x82171948;
	sub_8215C088(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82171934
	if (!ctx.cr6.gt) goto loc_82171934;
loc_82171950:
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822aa648
	ctx.lr = 0x8217195C;
	sub_822AA648(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r4,46
	ctx.r4.s64 = 46;
	// stw r7,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r7.u32);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x82086540
	ctx.lr = 0x82171984;
	sub_82086540(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82085af8
	ctx.lr = 0x8217198C;
	sub_82085AF8(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82171994"))) PPC_WEAK_FUNC(sub_82171994);
PPC_FUNC_IMPL(__imp__sub_82171994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171998"))) PPC_WEAK_FUNC(sub_82171998);
PPC_FUNC_IMPL(__imp__sub_82171998) {
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
	// lwz r3,-616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821719cc
	if (ctx.cr6.eq) goto loc_821719CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821719CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821719CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -616, ctx.r11.u32);
	// bl 0x82183078
	ctx.lr = 0x821719D8;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821719E4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821719E8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82171a04
	if (ctx.cr6.eq) goto loc_82171A04;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82183448
	ctx.lr = 0x82171A00;
	sub_82183448(ctx, base);
	// b 0x82171a0c
	goto loc_82171A0C;
loc_82171A04:
	// li r3,2061
	ctx.r3.s64 = 2061;
	// bl 0x821845a0
	ctx.lr = 0x82171A0C;
	sub_821845A0(ctx, base);
loc_82171A0C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171a20
	if (ctx.cr6.eq) goto loc_82171A20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821fe658
	ctx.lr = 0x82171A20;
	sub_821FE658(ctx, base);
loc_82171A20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82171A28;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_82171A40"))) PPC_WEAK_FUNC(sub_82171A40);
PPC_FUNC_IMPL(__imp__sub_82171A40) {
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
	// lwz r3,-616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171a74
	if (ctx.cr6.eq) goto loc_82171A74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82171A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82171A74:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -616, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82171A84;
	sub_821837D0(ctx, base);
	// bl 0x821407b8
	ctx.lr = 0x82171A88;
	sub_821407B8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82171A8C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82171aa4
	if (ctx.cr6.eq) goto loc_82171AA4;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82183448
	ctx.lr = 0x82171AA0;
	sub_82183448(ctx, base);
	// b 0x82171aac
	goto loc_82171AAC;
loc_82171AA4:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821845a0
	ctx.lr = 0x82171AAC;
	sub_821845A0(ctx, base);
loc_82171AAC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171ab8
	if (ctx.cr6.eq) goto loc_82171AB8;
	// bl 0x8213e2b0
	ctx.lr = 0x82171AB8;
	sub_8213E2B0(ctx, base);
loc_82171AB8:
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

__attribute__((alias("__imp__sub_82171AD0"))) PPC_WEAK_FUNC(sub_82171AD0);
PPC_FUNC_IMPL(__imp__sub_82171AD0) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82171AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82171b0c
	if (ctx.cr6.eq) goto loc_82171B0C;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82171b20
	goto loc_82171B20;
loc_82171B0C:
	// bl 0x8222e080
	ctx.lr = 0x82171B10;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r10,4
	ctx.r10.s64 = 4;
	// bne cr6,0x82171b20
	if (!ctx.cr6.eq) goto loc_82171B20;
	// li r10,12
	ctx.r10.s64 = 12;
loc_82171B20:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,164
	ctx.r9.u64 = ctx.r11.u64 | 164;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82171B40"))) PPC_WEAK_FUNC(sub_82171B40);
PPC_FUNC_IMPL(__imp__sub_82171B40) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82171B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82171b94
	if (!ctx.cr6.eq) goto loc_82171B94;
	// bl 0x8222e080
	ctx.lr = 0x82171B78;
	sub_8222E080(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r9,r11,164
	ctx.r9.u64 = ctx.r11.u64 | 164;
	// li r10,4
	ctx.r10.s64 = 4;
	// bne cr6,0x82171b90
	if (!ctx.cr6.eq) goto loc_82171B90;
	// li r10,12
	ctx.r10.s64 = 12;
loc_82171B90:
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82171B94:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82171BA8"))) PPC_WEAK_FUNC(sub_82171BA8);
PPC_FUNC_IMPL(__imp__sub_82171BA8) {
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
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82171BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r7,164
	ctx.r5.u64 = ctx.r7.u64 | 164;
	// stwx r6,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82171C00"))) PPC_WEAK_FUNC(sub_82171C00);
PPC_FUNC_IMPL(__imp__sub_82171C00) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82171C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82171c78
	if (ctx.cr6.eq) goto loc_82171C78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82171C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82171c68
	if (ctx.cr6.eq) goto loc_82171C68;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8222e098
	ctx.lr = 0x82171C68;
	sub_8222E098(ctx, base);
loc_82171C68:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r11,164
	ctx.r9.u64 = ctx.r11.u64 | 164;
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82171C78:
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

__attribute__((alias("__imp__sub_82171C90"))) PPC_WEAK_FUNC(sub_82171C90);
PPC_FUNC_IMPL(__imp__sub_82171C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82171C98;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-9764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171cd4
	if (ctx.cr6.eq) goto loc_82171CD4;
	// bl 0x820984c0
	ctx.lr = 0x82171CB4;
	sub_820984C0(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x82171CB8;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82171CC4;
	sub_821837D0(ctx, base);
	// lwz r3,-9764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9764);
	// bl 0x820983d8
	ctx.lr = 0x82171CCC;
	sub_820983D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82171CD4;
	sub_821837D0(ctx, base);
loc_82171CD4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,-8532(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82171d1c
	if (ctx.cr6.eq) goto loc_82171D1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cc6e0
	ctx.lr = 0x82171CEC;
	sub_820CC6E0(ctx, base);
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// bne cr6,0x82171d1c
	if (!ctx.cr6.eq) goto loc_82171D1C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r8,r11,164
	ctx.r8.u64 = ctx.r11.u64 | 164;
	// li r7,14
	ctx.r7.s64 = 14;
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stwx r7,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r3,-788(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x82171D1C;
	sub_821EA9B8(ctx, base);
loc_82171D1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82171D24"))) PPC_WEAK_FUNC(sub_82171D24);
PPC_FUNC_IMPL(__imp__sub_82171D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171D28"))) PPC_WEAK_FUNC(sub_82171D28);
PPC_FUNC_IMPL(__imp__sub_82171D28) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82171d60
	if (ctx.cr6.eq) goto loc_82171D60;
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
loc_82171D60:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171d84
	if (ctx.cr6.eq) goto loc_82171D84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82171D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82171D84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -616, ctx.r11.u32);
	// bl 0x8215c6c0
	ctx.lr = 0x82171D90;
	sub_8215C6C0(ctx, base);
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

__attribute__((alias("__imp__sub_82171DA8"))) PPC_WEAK_FUNC(sub_82171DA8);
PPC_FUNC_IMPL(__imp__sub_82171DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82171DB0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82171DC0;
	sub_823C3B68(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// addi r10,r11,-23032
	ctx.r10.s64 = ctx.r11.s64 + -23032;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x82179ea8
	ctx.lr = 0x82171DD4;
	sub_82179EA8(ctx, base);
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,-32640
	ctx.r3.s64 = ctx.r3.s64 + -32640;
	// bl 0x821f4a48
	ctx.lr = 0x82171DE0;
	sub_821F4A48(ctx, base);
	// bl 0x8215ceb8
	ctx.lr = 0x82171DE4;
	sub_8215CEB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// beq cr6,0x82171e10
	if (ctx.cr6.eq) goto loc_82171E10;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,15476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15476, ctx.r11.u32);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// bl 0x823c3d08
	ctx.lr = 0x82171E04;
	sub_823C3D08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82171E10:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,15476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15476, ctx.r28.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bl 0x8213e7a0
	ctx.lr = 0x82171E20;
	sub_8213E7A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82171e40
	if (!ctx.cr6.eq) goto loc_82171E40;
	// bl 0x8215bec8
	ctx.lr = 0x82171E2C;
	sub_8215BEC8(ctx, base);
	// stw r28,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215c7c8
	ctx.lr = 0x82171E38;
	sub_8215C7C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821efaa0
	ctx.lr = 0x82171E40;
	sub_821EFAA0(ctx, base);
loc_82171E40:
	// bl 0x8215bd08
	ctx.lr = 0x82171E44;
	sub_8215BD08(ctx, base);
	// bl 0x8216cd48
	ctx.lr = 0x82171E48;
	sub_8216CD48(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r30,-484(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -484);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215cea8
	ctx.lr = 0x82171E58;
	sub_8215CEA8(ctx, base);
	// lwz r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215cea8
	ctx.lr = 0x82171E64;
	sub_8215CEA8(ctx, base);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82223040
	ctx.lr = 0x82171E70;
	sub_82223040(ctx, base);
	// bl 0x82222f70
	ctx.lr = 0x82171E74;
	sub_82222F70(ctx, base);
	// lwz r3,-484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -484);
	// bl 0x8215cea8
	ctx.lr = 0x82171E7C;
	sub_8215CEA8(ctx, base);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8215bd08
	ctx.lr = 0x82171E84;
	sub_8215BD08(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r3,-484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -484);
	// bl 0x8215cea8
	ctx.lr = 0x82171E90;
	sub_8215CEA8(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// beq cr6,0x82171eb8
	if (ctx.cr6.eq) goto loc_82171EB8;
	// lwz r3,-484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -484);
	// lwz r31,-796(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// bl 0x8215cea8
	ctx.lr = 0x82171EAC;
	sub_8215CEA8(ctx, base);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82171ec0
	goto loc_82171EC0;
loc_82171EB8:
	// lwz r3,-796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -796);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82171EC0:
	// bl 0x823206c8
	ctx.lr = 0x82171EC4;
	sub_823206C8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r10,r11,168
	ctx.r10.u64 = ctx.r11.u64 | 168;
	// stwx r28,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82171EDC"))) PPC_WEAK_FUNC(sub_82171EDC);
PPC_FUNC_IMPL(__imp__sub_82171EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82171EE0"))) PPC_WEAK_FUNC(sub_82171EE0);
PPC_FUNC_IMPL(__imp__sub_82171EE0) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r10,r11,-23032
	ctx.r10.s64 = ctx.r11.s64 + -23032;
	// addi r3,r3,-32640
	ctx.r3.s64 = ctx.r3.s64 + -32640;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821f4b38
	ctx.lr = 0x82171F14;
	sub_821F4B38(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82179e50
	ctx.lr = 0x82171F1C;
	sub_82179E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82171F24;
	sub_823C3BC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82171f40
	if (ctx.cr6.eq) goto loc_82171F40;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82171F3C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82171F40:
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

__attribute__((alias("__imp__sub_82171F58"))) PPC_WEAK_FUNC(sub_82171F58);
PPC_FUNC_IMPL(__imp__sub_82171F58) {
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
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r30,168
	ctx.r30.s64 = ctx.r30.s64 + 168;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82171fd8
	if (ctx.cr6.lt) goto loc_82171FD8;
	// bne cr6,0x82172000
	if (!ctx.cr6.eq) goto loc_82172000;
	// bl 0x82177450
	ctx.lr = 0x82171F8C;
	sub_82177450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172000
	if (ctx.cr6.eq) goto loc_82172000;
	// bl 0x82163728
	ctx.lr = 0x82171F98;
	sub_82163728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82171fac
	if (!ctx.cr6.eq) goto loc_82171FAC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821636d8
	ctx.lr = 0x82171FA8;
	sub_821636D8(ctx, base);
	// b 0x82172000
	goto loc_82172000;
loc_82171FAC:
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8217a258
	ctx.lr = 0x82171FB4;
	sub_8217A258(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,164
	ctx.r9.u64 = ctx.r11.u64 | 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x823c3c98
	ctx.lr = 0x82171FCC;
	sub_823C3C98(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// b 0x82172000
	goto loc_82172000;
loc_82171FD8:
	// bl 0x8213e7a0
	ctx.lr = 0x82171FDC;
	sub_8213E7A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172000
	if (ctx.cr6.eq) goto loc_82172000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82177748
	ctx.lr = 0x82171FF8;
	sub_82177748(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82172000:
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

__attribute__((alias("__imp__sub_82172018"))) PPC_WEAK_FUNC(sub_82172018);
PPC_FUNC_IMPL(__imp__sub_82172018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82172020;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea8b8
	ctx.lr = 0x8217203C;
	sub_821EA8B8(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x82172040;
	sub_82163EE8(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lhz r5,3348(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 3348);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,1088(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1088);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230860
	ctx.lr = 0x82172060;
	sub_82230860(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r5,3360(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3360);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230860
	ctx.lr = 0x82172074;
	sub_82230860(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x82172078;
	sub_82163DF0(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r29,-8540(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8540);
	// bl 0x8215bd28
	ctx.lr = 0x8217208C;
	sub_8215BD28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82230de8
	ctx.lr = 0x82172098;
	sub_82230DE8(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x8217209C;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x821720A0;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821720bc
	if (ctx.cr6.eq) goto loc_821720BC;
	// bl 0x82164c50
	ctx.lr = 0x821720AC;
	sub_82164C50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821720bc
	if (ctx.cr6.eq) goto loc_821720BC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x821720d0
	goto loc_821720D0;
loc_821720BC:
	// bl 0x8215bd08
	ctx.lr = 0x821720C0;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x821720C4;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821720e0
	if (!ctx.cr6.eq) goto loc_821720E0;
	// li r3,100
	ctx.r3.s64 = 100;
loc_821720D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82231530
	ctx.lr = 0x821720DC;
	sub_82231530(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
loc_821720E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,1632(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1632);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r31,40(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// bl 0x8215bec8
	ctx.lr = 0x82172104;
	sub_8215BEC8(ctx, base);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82098200
	ctx.lr = 0x82172110;
	sub_82098200(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82183078
	ctx.lr = 0x82172128;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82172134;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82172138;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82172150
	if (ctx.cr6.eq) goto loc_82172150;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x8217214C;
	sub_82183448(ctx, base);
	// b 0x82172158
	goto loc_82172158;
loc_82172150:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x82172158;
	sub_821845A0(ctx, base);
loc_82172158:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172170
	if (ctx.cr6.eq) goto loc_82172170;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82098b80
	ctx.lr = 0x82172168;
	sub_82098B80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82172174
	goto loc_82172174;
loc_82172170:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82172174:
	// bl 0x82183850
	ctx.lr = 0x82172178;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82172190
	if (ctx.cr6.eq) goto loc_82172190;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8217218C;
	sub_82183448(ctx, base);
	// b 0x82172198
	goto loc_82172198;
loc_82172190:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82172198;
	sub_821845A0(ctx, base);
loc_82172198:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821721b4
	if (ctx.cr6.eq) goto loc_821721B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,7960
	ctx.r10.s64 = ctx.r11.s64 + 7960;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821721b8
	goto loc_821721B8;
loc_821721B4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821721B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef488
	ctx.lr = 0x821721C0;
	sub_820EF488(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// ori r9,r11,164
	ctx.r9.u64 = ctx.r11.u64 | 164;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r8,13
	ctx.r8.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-4984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4984, ctx.r11.u32);
	// stwx r8,r28,r9
	PPC_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r8.u32);
	// bl 0x821837d0
	ctx.lr = 0x821721E4;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821721EC"))) PPC_WEAK_FUNC(sub_821721EC);
PPC_FUNC_IMPL(__imp__sub_821721EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821721F0"))) PPC_WEAK_FUNC(sub_821721F0);
PPC_FUNC_IMPL(__imp__sub_821721F0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82172204;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82172208;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82172224
	if (ctx.cr6.eq) goto loc_82172224;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,172
	ctx.r3.u64 = ctx.r3.u64 | 172;
	// bl 0x82183448
	ctx.lr = 0x82172220;
	sub_82183448(ctx, base);
	// b 0x8217222c
	goto loc_8217222C;
loc_82172224:
	// li r3,4107
	ctx.r3.s64 = 4107;
	// bl 0x821845a0
	ctx.lr = 0x8217222C;
	sub_821845A0(ctx, base);
loc_8217222C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172248
	if (ctx.cr6.eq) goto loc_82172248;
	// bl 0x82171da8
	ctx.lr = 0x82172238;
	sub_82171DA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82172248:
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

__attribute__((alias("__imp__sub_8217225C"))) PPC_WEAK_FUNC(sub_8217225C);
PPC_FUNC_IMPL(__imp__sub_8217225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172260"))) PPC_WEAK_FUNC(sub_82172260);
PPC_FUNC_IMPL(__imp__sub_82172260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82172268;
	sub_8224878C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r30,164
	ctx.r30.s64 = ctx.r30.s64 + 164;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x821725fc
	if (ctx.cr6.gt) goto loc_821725FC;
	// lis r12,-32233
	ctx.r12.s64 = -2112421888;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8860
	ctx.r12.s64 = ctx.r12.s64 + 8860;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,8924(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8924);
	// lwz r16,8940(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8940);
	// lwz r16,8956(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8956);
	// lwz r16,8972(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8972);
	// lwz r16,8988(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8988);
	// lwz r16,9040(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9040);
	// lwz r16,9140(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9140);
	// lwz r16,9188(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9188);
	// lwz r16,9232(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9232);
	// lwz r16,9400(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9400);
	// lwz r16,9460(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9460);
	// lwz r16,9616(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9616);
	// lwz r16,9660(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9660);
	// lwz r16,9676(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9676);
	// lwz r16,9692(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9692);
	// lwz r16,9708(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9708);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82171ba8
	ctx.lr = 0x821722E4;
	sub_82171BA8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82171c00
	ctx.lr = 0x821722F4;
	sub_82171C00(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82171ad0
	ctx.lr = 0x82172304;
	sub_82171AD0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82171b40
	ctx.lr = 0x82172314;
	sub_82171B40(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82172330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821725fc
	if (ctx.cr6.eq) goto loc_821725FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821636d8
	ctx.lr = 0x82172340;
	sub_821636D8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821723d4
	if (ctx.cr6.eq) goto loc_821723D4;
	// bl 0x82170db8
	ctx.lr = 0x82172364;
	sub_82170DB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821723d4
	if (ctx.cr6.eq) goto loc_821723D4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,-784(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ebb58
	ctx.lr = 0x8217237C;
	sub_821EBB58(ctx, base);
	// li r10,30211
	ctx.r10.s64 = 30211;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821723A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821723CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821725fc
	if (!ctx.cr6.eq) goto loc_821725FC;
loc_821723D4:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// bl 0x82163728
	ctx.lr = 0x821723E8;
	sub_82163728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821725fc
	if (ctx.cr6.eq) goto loc_821725FC;
	// bl 0x82165b88
	ctx.lr = 0x821723F4;
	sub_82165B88(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-32640
	ctx.r3.s64 = ctx.r3.s64 + -32640;
	// bl 0x821f5a78
	ctx.lr = 0x82172400;
	sub_821F5A78(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,-32640
	ctx.r29.s64 = ctx.r29.s64 + -32640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217242C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821725fc
	if (ctx.cr6.eq) goto loc_821725FC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82172448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82172480
	if (!ctx.cr6.eq) goto loc_82172480;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x8217245C;
	sub_8215BD08(ctx, base);
	// bl 0x8216cd58
	ctx.lr = 0x82172460;
	sub_8216CD58(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8460(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8460);
	// bl 0x820e5620
	ctx.lr = 0x82172470;
	sub_820E5620(ctx, base);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82172480:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,-796(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -796);
	// bl 0x821e6f00
	ctx.lr = 0x82172494;
	sub_821E6F00(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-8460(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8460);
	// bl 0x820e5620
	ctx.lr = 0x821724A8;
	sub_820E5620(ctx, base);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,-32640
	ctx.r3.s64 = ctx.r3.s64 + -32640;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821724E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// addi r31,r31,-32640
	ctx.r31.s64 = ctx.r31.s64 + -32640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82172510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821725fc
	if (ctx.cr6.eq) goto loc_821725FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217252C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82172570
	if (ctx.cr6.eq) goto loc_82172570;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r3,-796(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -796);
	// bl 0x821e6f00
	ctx.lr = 0x8217254C;
	sub_821E6F00(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,-8460(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8460);
	// bl 0x820e5620
	ctx.lr = 0x82172560;
	sub_820E5620(ctx, base);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82172570:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82177748
	ctx.lr = 0x82172580;
	sub_82177748(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// bl 0x82177450
	ctx.lr = 0x82172594;
	sub_82177450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821725fc
	if (ctx.cr6.eq) goto loc_821725FC;
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-796(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -796);
	// bl 0x823206c8
	ctx.lr = 0x821725B4;
	sub_823206C8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172018
	ctx.lr = 0x821725C4;
	sub_82172018(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82171c90
	ctx.lr = 0x821725D4;
	sub_82171C90(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x823c3d08
	ctx.lr = 0x821725FC;
	sub_823C3D08(ctx, base);
loc_821725FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82172604"))) PPC_WEAK_FUNC(sub_82172604);
PPC_FUNC_IMPL(__imp__sub_82172604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172608"))) PPC_WEAK_FUNC(sub_82172608);
PPC_FUNC_IMPL(__imp__sub_82172608) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82172624;
	sub_823C3B68(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x821859a0
	ctx.lr = 0x82172638;
	sub_821859A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-22936
	ctx.r9.s64 = ctx.r11.s64 + -22936;
	// addi r8,r10,-22948
	ctx.r8.s64 = ctx.r10.s64 + -22948;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lwz r3,15480(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15480);
	// bl 0x821750b0
	ctx.lr = 0x8217265C;
	sub_821750B0(ctx, base);
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// lwz r3,-484(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -484);
	// bl 0x8215cea8
	ctx.lr = 0x82172668;
	sub_8215CEA8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82172684
	if (ctx.cr6.eq) goto loc_82172684;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82172690
	if (!ctx.cr6.gt) goto loc_82172690;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x82172690
	if (ctx.cr6.gt) goto loc_82172690;
loc_82172684:
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x820ed338
	ctx.lr = 0x82172690;
	sub_820ED338(ctx, base);
loc_82172690:
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

__attribute__((alias("__imp__sub_821726A8"))) PPC_WEAK_FUNC(sub_821726A8);
PPC_FUNC_IMPL(__imp__sub_821726A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x821727c8
	sub_821727C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821726B0"))) PPC_WEAK_FUNC(sub_821726B0);
PPC_FUNC_IMPL(__imp__sub_821726B0) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,15480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15480);
	// bl 0x821751b0
	ctx.lr = 0x821726D0;
	sub_821751B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172748
	if (ctx.cr6.eq) goto loc_82172748;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// bl 0x8215cea8
	ctx.lr = 0x821726E4;
	sub_8215CEA8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82172748
	if (ctx.cr6.gt) goto loc_82172748;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82172720
	// bdzf 4*cr6+eq,0x82172708
	// bne cr6,0x82172708
	if (!ctx.cr6.eq) goto loc_82172708;
loc_82172708:
	// bl 0x820ed3d8
	ctx.lr = 0x8217270C;
	sub_820ED3D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172748
	if (ctx.cr6.eq) goto loc_82172748;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82172728
	goto loc_82172728;
loc_82172720:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_82172728:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82172734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82172748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82172748:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8217275C"))) PPC_WEAK_FUNC(sub_8217275C);
PPC_FUNC_IMPL(__imp__sub_8217275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172760"))) PPC_WEAK_FUNC(sub_82172760);
PPC_FUNC_IMPL(__imp__sub_82172760) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82172774;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82172778;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82172790
	if (ctx.cr6.eq) goto loc_82172790;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82183448
	ctx.lr = 0x8217278C;
	sub_82183448(ctx, base);
	// b 0x82172798
	goto loc_82172798;
loc_82172790:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x82172798;
	sub_821845A0(ctx, base);
loc_82172798:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821727b4
	if (ctx.cr6.eq) goto loc_821727B4;
	// bl 0x82172608
	ctx.lr = 0x821727A4;
	sub_82172608(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821727B4:
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

__attribute__((alias("__imp__sub_821727C8"))) PPC_WEAK_FUNC(sub_821727C8);
PPC_FUNC_IMPL(__imp__sub_821727C8) {
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
	// addi r9,r11,-22936
	ctx.r9.s64 = ctx.r11.s64 + -22936;
	// addi r8,r10,-22948
	ctx.r8.s64 = ctx.r10.s64 + -22948;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82185a50
	ctx.lr = 0x82172804;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x8217280C;
	sub_823C3BC0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82172828
	if (ctx.cr6.eq) goto loc_82172828;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82172824;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82172828:
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

__attribute__((alias("__imp__sub_82172840"))) PPC_WEAK_FUNC(sub_82172840);
PPC_FUNC_IMPL(__imp__sub_82172840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82172848;
	sub_82248774(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172870
	if (ctx.cr6.eq) goto loc_82172870;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82172870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82172870:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r11,-616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -616, ctx.r11.u32);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lis r24,-32187
	ctx.r24.s64 = -2109407232;
	// lwz r27,1092(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1092);
loc_8217288C:
	// lwz r11,-9152(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9152);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,-9152(r24)
	PPC_STORE_U32(ctx.r24.u32 + -9152, ctx.r5.u32);
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// blt cr6,0x821728a8
	if (ctx.cr6.lt) goto loc_821728A8;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r23,-9152(r24)
	PPC_STORE_U32(ctx.r24.u32 + -9152, ctx.r23.u32);
loc_821728A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-8520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8520);
	// bl 0x820d4a48
	ctx.lr = 0x821728B4;
	sub_820D4A48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188748
	ctx.lr = 0x821728C0;
	sub_82188748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217288c
	if (ctx.cr6.eq) goto loc_8217288C;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-9160
	ctx.r29.s64 = ctx.r11.s64 + -9160;
	// li r25,100
	ctx.r25.s64 = 100;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
loc_821728E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,106
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 106, ctx.xer);
	// blt cr6,0x821728f8
	if (ctx.cr6.lt) goto loc_821728F8;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_821728F8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82172900:
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82172918
	if (ctx.cr6.eq) goto loc_82172918;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x821728e0
	if (ctx.cr6.eq) goto loc_821728E0;
loc_82172918:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82172900
	if (ctx.cr6.lt) goto loc_82172900;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,-8964(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8964);
	// bl 0x82231530
	ctx.lr = 0x82172940;
	sub_82231530(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209f008
	ctx.lr = 0x82172950;
	sub_8209F008(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82188748
	ctx.lr = 0x8217295C;
	sub_82188748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821728e0
	if (ctx.cr6.eq) goto loc_821728E0;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821728e0
	if (ctx.cr6.lt) goto loc_821728E0;
	// bl 0x82163ee8
	ctx.lr = 0x8217297C;
	sub_82163EE8(ctx, base);
	// addi r4,r3,2296
	ctx.r4.s64 = ctx.r3.s64 + 2296;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x82248a40
	ctx.lr = 0x8217298C;
	sub_82248A40(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r23,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r23.u8);
	// addi r11,r1,133
	ctx.r11.s64 = ctx.r1.s64 + 133;
	// stb r23,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r23.u8);
	// stb r9,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, ctx.r9.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821729A8:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x821729a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821729A8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ef480
	ctx.lr = 0x821729BC;
	sub_820EF480(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82232b60
	ctx.lr = 0x821729CC;
	sub_82232B60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,-9152(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + -9152);
	// bl 0x82232ac8
	ctx.lr = 0x821729D8;
	sub_82232AC8(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821729E0:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bge cr6,0x821729f0
	if (!ctx.cr6.lt) goto loc_821729F0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x821729f4
	goto loc_821729F4;
loc_821729F0:
	// li r5,512
	ctx.r5.s64 = 512;
loc_821729F4:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822327a8
	ctx.lr = 0x82172A14;
	sub_822327A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82231e88
	ctx.lr = 0x82172A24;
	sub_82231E88(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82231e78
	ctx.lr = 0x82172A34;
	sub_82231E78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82231e98
	ctx.lr = 0x82172A44;
	sub_82231E98(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82231ec8
	ctx.lr = 0x82172A54;
	sub_82231EC8(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821729e0
	if (ctx.cr6.lt) goto loc_821729E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82232a50
	ctx.lr = 0x82172A70;
	sub_82232A50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82232ab8
	ctx.lr = 0x82172A78;
	sub_82232AB8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82232530
	ctx.lr = 0x82172A80;
	sub_82232530(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x82172A84;
	sub_8215BEC8(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r9,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r9.u32);
	// stw r23,-4976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4976, ctx.r23.u32);
	// bl 0x82085700
	ctx.lr = 0x82172A9C;
	sub_82085700(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82172AA8"))) PPC_WEAK_FUNC(sub_82172AA8);
PPC_FUNC_IMPL(__imp__sub_82172AA8) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82172c04
	if (ctx.cr6.gt) goto loc_82172C04;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82172b80
	// bdzf 4*cr6+eq,0x82172bd0
	// bne cr6,0x82172bf4
	if (!ctx.cr6.eq) goto loc_82172BF4;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82172AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172c04
	if (ctx.cr6.eq) goto loc_82172C04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82172B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82172b34
	if (!ctx.cr6.eq) goto loc_82172B34;
	// bl 0x8215bd08
	ctx.lr = 0x82172B20;
	sub_8215BD08(ctx, base);
	// bl 0x8216cd58
	ctx.lr = 0x82172B24;
	sub_8216CD58(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// b 0x82172b5c
	goto loc_82172B5C;
loc_82172B34:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,-796(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -796);
	// bl 0x821e6f00
	ctx.lr = 0x82172B4C;
	sub_821E6F00(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-8460(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8460);
loc_82172B5C:
	// bl 0x820e5620
	ctx.lr = 0x82172B60;
	sub_820E5620(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-32700
	ctx.r3.s64 = ctx.r3.s64 + -32700;
	// bl 0x82177d40
	ctx.lr = 0x82172B74;
	sub_82177D40(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x82172c04
	goto loc_82172C04;
loc_82172B80:
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,-32700
	ctx.r3.s64 = ctx.r3.s64 + -32700;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82172B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172c04
	if (ctx.cr6.eq) goto loc_82172C04;
	// bl 0x82177be0
	ctx.lr = 0x82172BA4;
	sub_82177BE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172be8
	if (ctx.cr6.eq) goto loc_82172BE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82163a30
	ctx.lr = 0x82172BB8;
	sub_82163A30(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// bl 0x821ef038
	ctx.lr = 0x82172BC4;
	sub_821EF038(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// b 0x82172c04
	goto loc_82172C04;
loc_82172BD0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// bl 0x821ef080
	ctx.lr = 0x82172BDC;
	sub_821EF080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172c04
	if (ctx.cr6.eq) goto loc_82172C04;
	// bl 0x821eedf0
	ctx.lr = 0x82172BE8;
	sub_821EEDF0(ctx, base);
loc_82172BE8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x82172c04
	goto loc_82172C04;
loc_82172BF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x823c3d08
	ctx.lr = 0x82172C04;
	sub_823C3D08(ctx, base);
loc_82172C04:
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

__attribute__((alias("__imp__sub_82172C1C"))) PPC_WEAK_FUNC(sub_82172C1C);
PPC_FUNC_IMPL(__imp__sub_82172C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172C20"))) PPC_WEAK_FUNC(sub_82172C20);
PPC_FUNC_IMPL(__imp__sub_82172C20) {
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
	// bl 0x82177be0
	ctx.lr = 0x82172C34;
	sub_82177BE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172c58
	if (ctx.cr6.eq) goto loc_82172C58;
	// bl 0x82177bd0
	ctx.lr = 0x82172C40;
	sub_82177BD0(ctx, base);
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
loc_82172C58:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172c7c
	if (ctx.cr6.eq) goto loc_82172C7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82172C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82172C7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -616, ctx.r11.u32);
	// bl 0x8215c7c8
	ctx.lr = 0x82172C8C;
	sub_8215C7C8(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82080000
	ctx.lr = 0x82172C94;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172cac
	if (ctx.cr6.eq) goto loc_82172CAC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,22360
	ctx.r5.s64 = ctx.r11.s64 + 22360;
	// bl 0x82085930
	ctx.lr = 0x82172CAC;
	sub_82085930(ctx, base);
loc_82172CAC:
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

__attribute__((alias("__imp__sub_82172CC4"))) PPC_WEAK_FUNC(sub_82172CC4);
PPC_FUNC_IMPL(__imp__sub_82172CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172CC8"))) PPC_WEAK_FUNC(sub_82172CC8);
PPC_FUNC_IMPL(__imp__sub_82172CC8) {
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
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82172CE8;
	sub_823C3B68(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-22848
	ctx.r9.s64 = ctx.r11.s64 + -22848;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x821f4a48
	ctx.lr = 0x82172D04;
	sub_821F4A48(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-32700
	ctx.r3.s64 = ctx.r3.s64 + -32700;
	// bl 0x82177c48
	ctx.lr = 0x82172D10;
	sub_82177C48(ctx, base);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lwz r30,-780(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + -780);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82172d4c
	if (ctx.cr6.eq) goto loc_82172D4C;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82172d3c
	if (ctx.cr6.eq) goto loc_82172D3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5cd0
	ctx.lr = 0x82172D34;
	sub_820E5CD0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82172d4c
	if (!ctx.cr6.eq) goto loc_82172D4C;
loc_82172D3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822344a8
	ctx.lr = 0x82172D44;
	sub_822344A8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82172d54
	if (ctx.cr6.eq) goto loc_82172D54;
loc_82172D4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821efaa0
	ctx.lr = 0x82172D54;
	sub_821EFAA0(ctx, base);
loc_82172D54:
	// bl 0x82177bd0
	ctx.lr = 0x82172D58;
	sub_82177BD0(ctx, base);
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

__attribute__((alias("__imp__sub_82172D74"))) PPC_WEAK_FUNC(sub_82172D74);
PPC_FUNC_IMPL(__imp__sub_82172D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172D78"))) PPC_WEAK_FUNC(sub_82172D78);
PPC_FUNC_IMPL(__imp__sub_82172D78) {
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
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r10,r11,-22848
	ctx.r10.s64 = ctx.r11.s64 + -22848;
	// addi r3,r3,-32700
	ctx.r3.s64 = ctx.r3.s64 + -32700;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82177bf0
	ctx.lr = 0x82172DAC;
	sub_82177BF0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x821f4b38
	ctx.lr = 0x82172DB4;
	sub_821F4B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82172DBC;
	sub_823C3BC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82172dd8
	if (ctx.cr6.eq) goto loc_82172DD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82172DD4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82172DD8:
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

__attribute__((alias("__imp__sub_82172DF0"))) PPC_WEAK_FUNC(sub_82172DF0);
PPC_FUNC_IMPL(__imp__sub_82172DF0) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-780(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82172e6c
	if (ctx.cr6.eq) goto loc_82172E6C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82172e34
	if (ctx.cr6.eq) goto loc_82172E34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5cd0
	ctx.lr = 0x82172E2C;
	sub_820E5CD0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82172e6c
	if (!ctx.cr6.eq) goto loc_82172E6C;
loc_82172E34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822344a8
	ctx.lr = 0x82172E3C;
	sub_822344A8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82172e6c
	if (!ctx.cr6.eq) goto loc_82172E6C;
	// bl 0x82163728
	ctx.lr = 0x82172E48;
	sub_82163728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82172e5c
	if (!ctx.cr6.eq) goto loc_82172E5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821636d8
	ctx.lr = 0x82172E58;
	sub_821636D8(ctx, base);
	// b 0x82172e6c
	goto loc_82172E6C;
loc_82172E5C:
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8216f5b0
	ctx.lr = 0x82172E64;
	sub_8216F5B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3c98
	ctx.lr = 0x82172E6C;
	sub_823C3C98(ctx, base);
loc_82172E6C:
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

__attribute__((alias("__imp__sub_82172E84"))) PPC_WEAK_FUNC(sub_82172E84);
PPC_FUNC_IMPL(__imp__sub_82172E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172E88"))) PPC_WEAK_FUNC(sub_82172E88);
PPC_FUNC_IMPL(__imp__sub_82172E88) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82172E9C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82172EA0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82172ebc
	if (ctx.cr6.eq) goto loc_82172EBC;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32924
	ctx.r3.u64 = ctx.r3.u64 | 32924;
	// bl 0x82183448
	ctx.lr = 0x82172EB8;
	sub_82183448(ctx, base);
	// b 0x82172ec4
	goto loc_82172EC4;
loc_82172EBC:
	// li r3,2058
	ctx.r3.s64 = 2058;
	// bl 0x821845a0
	ctx.lr = 0x82172EC4;
	sub_821845A0(ctx, base);
loc_82172EC4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82172ee0
	if (ctx.cr6.eq) goto loc_82172EE0;
	// bl 0x82172cc8
	ctx.lr = 0x82172ED0;
	sub_82172CC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82172EE0:
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

__attribute__((alias("__imp__sub_82172EF4"))) PPC_WEAK_FUNC(sub_82172EF4);
PPC_FUNC_IMPL(__imp__sub_82172EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82172EF8"))) PPC_WEAK_FUNC(sub_82172EF8);
PPC_FUNC_IMPL(__imp__sub_82172EF8) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82172F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172f58
	if (ctx.cr6.eq) goto loc_82172F58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5cd0
	ctx.lr = 0x82172F38;
	sub_820E5CD0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82172f48
	if (!ctx.cr6.eq) goto loc_82172F48;
	// bl 0x8215bd08
	ctx.lr = 0x82172F44;
	sub_8215BD08(ctx, base);
	// bl 0x8216cd58
	ctx.lr = 0x82172F48;
	sub_8216CD58(ctx, base);
loc_82172F48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3ca8
	ctx.lr = 0x82172F50;
	sub_823C3CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3d08
	ctx.lr = 0x82172F58;
	sub_823C3D08(ctx, base);
loc_82172F58:
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

__attribute__((alias("__imp__sub_82172F70"))) PPC_WEAK_FUNC(sub_82172F70);
PPC_FUNC_IMPL(__imp__sub_82172F70) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82172F94;
	sub_823C3B68(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r10,r11,-22760
	ctx.r10.s64 = ctx.r11.s64 + -22760;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82179ea8
	ctx.lr = 0x82172FA8;
	sub_82179EA8(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// ori r7,r9,32896
	ctx.r7.u64 = ctx.r9.u64 | 32896;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// lwz r30,-780(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + -780);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82172ff0
	if (ctx.cr6.eq) goto loc_82172FF0;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82172fe0
	if (ctx.cr6.eq) goto loc_82172FE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5cd0
	ctx.lr = 0x82172FD8;
	sub_820E5CD0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82172ff0
	if (!ctx.cr6.eq) goto loc_82172FF0;
loc_82172FE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822344a8
	ctx.lr = 0x82172FE8;
	sub_822344A8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82172ff8
	if (ctx.cr6.eq) goto loc_82172FF8;
loc_82172FF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821efaa0
	ctx.lr = 0x82172FF8;
	sub_821EFAA0(ctx, base);
loc_82172FF8:
	// bl 0x8215bd08
	ctx.lr = 0x82172FFC;
	sub_8215BD08(ctx, base);
	// bl 0x8216cd48
	ctx.lr = 0x82173000;
	sub_8216CD48(ctx, base);
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

__attribute__((alias("__imp__sub_8217301C"))) PPC_WEAK_FUNC(sub_8217301C);
PPC_FUNC_IMPL(__imp__sub_8217301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173020"))) PPC_WEAK_FUNC(sub_82173020);
PPC_FUNC_IMPL(__imp__sub_82173020) {
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
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// addi r10,r11,-22760
	ctx.r10.s64 = ctx.r11.s64 + -22760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82179e50
	ctx.lr = 0x82173050;
	sub_82179E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82173058;
	sub_823C3BC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82173074
	if (ctx.cr6.eq) goto loc_82173074;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82173070;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82173074:
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

__attribute__((alias("__imp__sub_8217308C"))) PPC_WEAK_FUNC(sub_8217308C);
PPC_FUNC_IMPL(__imp__sub_8217308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173090"))) PPC_WEAK_FUNC(sub_82173090);
PPC_FUNC_IMPL(__imp__sub_82173090) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-780(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82173124
	if (ctx.cr6.eq) goto loc_82173124;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821730d4
	if (ctx.cr6.eq) goto loc_821730D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5cd0
	ctx.lr = 0x821730CC;
	sub_820E5CD0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82173124
	if (!ctx.cr6.eq) goto loc_82173124;
loc_821730D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822344a8
	ctx.lr = 0x821730DC;
	sub_822344A8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82173124
	if (!ctx.cr6.eq) goto loc_82173124;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// ori r10,r11,32896
	ctx.r10.u64 = ctx.r11.u64 | 32896;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82173118
	if (ctx.cr6.lt) goto loc_82173118;
	// beq cr6,0x82173110
	if (ctx.cr6.eq) goto loc_82173110;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82173118
	if (!ctx.cr6.lt) goto loc_82173118;
	// bl 0x8217a1f8
	ctx.lr = 0x8217310C;
	sub_8217A1F8(ctx, base);
	// b 0x8217311c
	goto loc_8217311C;
loc_82173110:
	// bl 0x8217a198
	ctx.lr = 0x82173114;
	sub_8217A198(ctx, base);
	// b 0x8217311c
	goto loc_8217311C;
loc_82173118:
	// bl 0x8217a138
	ctx.lr = 0x8217311C;
	sub_8217A138(ctx, base);
loc_8217311C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3c98
	ctx.lr = 0x82173124;
	sub_823C3C98(ctx, base);
loc_82173124:
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

__attribute__((alias("__imp__sub_8217313C"))) PPC_WEAK_FUNC(sub_8217313C);
PPC_FUNC_IMPL(__imp__sub_8217313C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173140"))) PPC_WEAK_FUNC(sub_82173140);
PPC_FUNC_IMPL(__imp__sub_82173140) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82173154;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82173158;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82173174
	if (ctx.cr6.eq) goto loc_82173174;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32900
	ctx.r3.u64 = ctx.r3.u64 | 32900;
	// bl 0x82183448
	ctx.lr = 0x82173170;
	sub_82183448(ctx, base);
	// b 0x8217317c
	goto loc_8217317C;
loc_82173174:
	// li r3,2057
	ctx.r3.s64 = 2057;
	// bl 0x821845a0
	ctx.lr = 0x8217317C;
	sub_821845A0(ctx, base);
loc_8217317C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217319c
	if (ctx.cr6.eq) goto loc_8217319C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82172f70
	ctx.lr = 0x8217318C;
	sub_82172F70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8217319C:
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

__attribute__((alias("__imp__sub_821731B0"))) PPC_WEAK_FUNC(sub_821731B0);
PPC_FUNC_IMPL(__imp__sub_821731B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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

__attribute__((alias("__imp__sub_821731CC"))) PPC_WEAK_FUNC(sub_821731CC);
PPC_FUNC_IMPL(__imp__sub_821731CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821731D0"))) PPC_WEAK_FUNC(sub_821731D0);
PPC_FUNC_IMPL(__imp__sub_821731D0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r3,320
	ctx.r31.s64 = ctx.r3.s64 + 320;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f30,14876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14876);
	ctx.f30.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f29,8324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8324);
	ctx.f29.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823c3558
	ctx.lr = 0x82173230;
	sub_823C3558(ctx, base);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823c3558
	ctx.lr = 0x82173258;
	sub_823C3558(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82173278"))) PPC_WEAK_FUNC(sub_82173278);
PPC_FUNC_IMPL(__imp__sub_82173278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
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

__attribute__((alias("__imp__sub_82173294"))) PPC_WEAK_FUNC(sub_82173294);
PPC_FUNC_IMPL(__imp__sub_82173294) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82173298"))) PPC_WEAK_FUNC(sub_82173298);
PPC_FUNC_IMPL(__imp__sub_82173298) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821732bc
	if (ctx.cr6.eq) goto loc_821732BC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821732BC:
	// lwz r11,804(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 804);
	// cmpwi cr6,r11,180
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 180, ctx.xer);
	// bgt cr6,0x821732d8
	if (ctx.cr6.gt) goto loc_821732D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 804, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821732D8:
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

__attribute__((alias("__imp__sub_821732E8"))) PPC_WEAK_FUNC(sub_821732E8);
PPC_FUNC_IMPL(__imp__sub_821732E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821732EC"))) PPC_WEAK_FUNC(sub_821732EC);
PPC_FUNC_IMPL(__imp__sub_821732EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821732F0"))) PPC_WEAK_FUNC(sub_821732F0);
PPC_FUNC_IMPL(__imp__sub_821732F0) {
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
	// bl 0x821731d0
	ctx.lr = 0x82173308;
	sub_821731D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x82173310;
	sub_823C3C70(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82173324"))) PPC_WEAK_FUNC(sub_82173324);
PPC_FUNC_IMPL(__imp__sub_82173324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82173328"))) PPC_WEAK_FUNC(sub_82173328);
PPC_FUNC_IMPL(__imp__sub_82173328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82173330;
	sub_82248780(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x82173344;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x82173354;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x82173368;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82173374;
	sub_821AD498(ctx, base);
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r3,-1736(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821733a4
	if (ctx.cr6.eq) goto loc_821733A4;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82173394:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82173394
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82173394;
	// bl 0x821d1688
	ctx.lr = 0x821733A4;
	sub_821D1688(ctx, base);
loc_821733A4:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,15464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15464);
	// bl 0x8216db98
	ctx.lr = 0x821733B4;
	sub_8216DB98(ctx, base);
	// lfs f0,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,564(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821733d8
	if (!ctx.cr6.eq) goto loc_821733D8;
	// li r29,255
	ctx.r29.s64 = 255;
	// b 0x821733e0
	goto loc_821733E0;
loc_821733D8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82173448
	if (!ctx.cr6.gt) goto loc_82173448;
loc_821733E0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821b2118
	ctx.lr = 0x821733E8;
	sub_821B2118(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,-22672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22672);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f13,-22676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22676);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f13,340(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// lfs f3,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,14780(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14780);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-32376(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821d1718
	ctx.lr = 0x82173420;
	sub_821D1718(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8213a480
	ctx.lr = 0x82173434;
	sub_8213A480(ctx, base);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821b5ef8
	ctx.lr = 0x82173440;
	sub_821B5EF8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821b1d48
	ctx.lr = 0x82173448;
	sub_821B1D48(ctx, base);
loc_82173448:
	// lwz r11,552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173488
	if (ctx.cr6.eq) goto loc_82173488;
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82173488
	if (!ctx.cr6.gt) goto loc_82173488;
	// lwz r10,552(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r3,552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82173488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82173488:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x82173494;
	sub_821AD600(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x821734A0;
	sub_821AD498(ctx, base);
	// lwz r3,-1736(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821734b4
	if (ctx.cr6.eq) goto loc_821734B4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821d16c0
	ctx.lr = 0x821734B4;
	sub_821D16C0(ctx, base);
loc_821734B4:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821734BC"))) PPC_WEAK_FUNC(sub_821734BC);
PPC_FUNC_IMPL(__imp__sub_821734BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821734C0"))) PPC_WEAK_FUNC(sub_821734C0);
PPC_FUNC_IMPL(__imp__sub_821734C0) {
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
	// lwz r11,824(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 824);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82173518
	if (ctx.cr6.lt) goto loc_82173518;
	// bne cr6,0x821734f0
	if (!ctx.cr6.eq) goto loc_821734F0;
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217356c
	if (ctx.cr6.eq) goto loc_8217356C;
loc_821734F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82173504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_82173518:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217356c
	if (ctx.cr6.eq) goto loc_8217356C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f13,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8324);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823c3558
	ctx.lr = 0x82173564;
	sub_823C3558(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r8.u32);
loc_8217356C:
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

__attribute__((alias("__imp__sub_82173580"))) PPC_WEAK_FUNC(sub_82173580);
PPC_FUNC_IMPL(__imp__sub_82173580) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// lfs f13,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,7884(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7884);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823c3558
	ctx.lr = 0x821735D4;
	sub_823C3558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3ca8
	ctx.lr = 0x821735DC;
	sub_823C3CA8(ctx, base);
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

